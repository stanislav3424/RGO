// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterLogic.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SceneComponent.h"
#include "ThirdPersonCharacter.h"
#include "FunctionLibrary.h"
#include "Macros.h"

void UCharacterLogic::Initialize()
{
    //OwnerActorClass = AThirdPersonCharacter::StaticClass(); // Затычка

    
    
    Super::Initialize();
}

void UCharacterLogic::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateStamina(DeltaTime);
    UpdateMovementState();
    UpdatePawnMaxSpeed();

}

void UCharacterLogic::Shutdown()
{
    Super::Shutdown();

}

void UCharacterLogic::CheckField()
{
    Super::CheckField();

    CHECK_INDEX_NONE(MaxStamina);
    CHECK_INDEX_NONE(CurrentStamina);
    CHECK_INDEX_NONE(StaminaDrainRate);
    CHECK_INDEX_NONE(StaminaRegenRate);
    CHECK_INDEX_NONE(MinStaminaToRun);
}

AActor* UCharacterLogic::SpawnOwnerActor(
    FTransform const& Transform, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod)
{

    return Super::SpawnOwnerActor(Transform, SpawnActorCollisionHandlingMethod);
}

void UCharacterLogic::DestroyOwnerActor()
{
    CharacterMovementComponent = nullptr;
    Super::DestroyOwnerActor();
}

void UCharacterLogic::UpdateOwnerActor(AActor* Actor)
{
    Super::UpdateOwnerActor(Actor);
    if (IsValid(OwnerActor))
    {
        if (auto Character = Cast<ACharacter>(OwnerActor))
            CharacterMovementComponent = Character->GetCharacterMovement();

        CHECK_FIELD(CharacterMovementComponent);
    }
}

void UCharacterLogic::HandleRunInput(bool bWantsToRun)
{
    if (bWantsToRun && CurrentStamina >= MinStaminaToRun)
        bIsRunInput = true;
    else if (!bWantsToRun)
        bIsRunInput = false;
}

void UCharacterLogic::UpdateStamina(float DeltaTime)
{
    UE_LOG(LogTemp, Warning, TEXT("Stamina - MovementState: %d, TypeMovementState: %d, bIsMove: %d, Stamina: %.1f"),
        (int32) MovementState, (int32) TypeMovementState, bIsMove,
        CurrentStamina);

    if (MovementState == EMovementState::Run && bIsMove)
    {
        CurrentStamina = FMath::Max(0.0f, CurrentStamina - StaminaDrainRate * DeltaTime);

        if (CurrentStamina <= 0.0f)
            bIsRunInput = false;
    }
    else
    {
        CurrentStamina = FMath::Min(MaxStamina, CurrentStamina + StaminaRegenRate * DeltaTime);
    }
}

void UCharacterLogic::UpdateMovementState()
{
    if (!IsValid(OwnerActor))
        return;

    FVector CurrentVelocity = OwnerActor->GetVelocity();
    float Speed = CurrentVelocity.Size();

    const float MinMovementThreshold = 1.0f;

    bIsMove = Speed > MinMovementThreshold;


    if (!bIsMove)
        MovementState = EMovementState::Idle;
    else if (bIsRunInput && bIsMove)
        MovementState = EMovementState::Run;
    else
        MovementState = EMovementState::Walk;
}

void UCharacterLogic::UpdateTypeMovementState()
{
    auto TargetSlot = EEquipmentSlot::RHand;
    if (!Equipment.Contains(TargetSlot))
        return ;

    if (Equipment[TargetSlot] == nullptr)
        TypeMovementState = ETypeMovementState::Unarmed;
    else
        TypeMovementState = ETypeMovementState::Rifle;
}

void UCharacterLogic::UpdatePawnMaxSpeed()
{
    if (!IsValid(OwnerActor) || !CharacterMovementComponent)
        return;

    //UE_LOG(LogTemp, Error, TEXT("UpdatePawnMaxSpeed()"));
    float NewMaxSpeed = 300.0f;

    if (MovementState == EMovementState::Run)
        NewMaxSpeed = 600.0f;

    CharacterMovementComponent->MaxWalkSpeed = NewMaxSpeed;
}

bool UCharacterLogic::EquipItem(UItemLogic* ItemLogic)
{
    if (!ItemLogic)
        return false;

    if (auto WeaponLogic = Cast<UWeaponLogic>(ItemLogic))
    {
        auto TargetSlot = WeaponLogic->GetEquipmentSlot();

        if (!Equipment.Contains(TargetSlot))
            return false;

        if (Equipment[TargetSlot] != nullptr)
            return false;

        if (auto Character = Cast<ACharacter>(OwnerActor))
            if (auto Mesh = Character->GetMesh())
            {
                auto SocketName = UFunctionLibrary::GetSocketNameFromEnum(EEquipmentSlot::RHand);
                auto Transform  = Mesh->GetSocketTransform(SocketName);
                WeaponLogic->SetAttachmentParent(GetOwnerActor());
                WeaponLogic->Attachment(
                    Transform, Mesh, SocketName, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

                Equipment[TargetSlot] = WeaponLogic;

                UpdateTypeMovementState();

                return true;
            }
    }

    return false;
}

bool UCharacterLogic::TakeOffItem(UWeaponLogic* WeaponLogic)
{
    if (!WeaponLogic)
        return false;

    auto TargetSlot = WeaponLogic->GetEquipmentSlot();

    if (!Equipment.Contains(TargetSlot))
        return false;

    if (Equipment[TargetSlot] == WeaponLogic)
    {
        Equipment[TargetSlot] = nullptr;


        WeaponLogic->DestroyOwnerActor();

        UpdateTypeMovementState();

        return true;
    }

    return false;
}

UWeaponLogic* UCharacterLogic::GetItemInSlot(EEquipmentSlot Slot) const { return Equipment.FindRef(Slot); }

bool UCharacterLogic::CommandShootStarted()
{
    if (auto WeaponLogic = GetItemInSlot(EEquipmentSlot::RHand))
    {
        return WeaponLogic->ShootStarted();
    }
    return false;
}

bool UCharacterLogic::CommandShootCompleted()
{
    if (auto WeaponLogic = GetItemInSlot(EEquipmentSlot::RHand))
    {
        return WeaponLogic->ShootCompleted();
    }
    return false;
}

bool UCharacterLogic::CommandReloadWeapon()
{
    if (auto WeaponLogic = GetItemInSlot(EEquipmentSlot::RHand))
    {
        return WeaponLogic->ReloadWeapon();
    }
    return false;
}