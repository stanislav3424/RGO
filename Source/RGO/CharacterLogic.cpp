// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterLogic.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SceneComponent.h"
#include "ThirdPersonCharacter.h"
#include "FunctionLibrary.h"
#include "Macros.h"
#include "Components/CapsuleComponent.h"
#include "GameInstance_Main.h"
#include "AIController.h"
#include "AbilityLogic.h"

void UCharacterLogic::Initialize()
{
    Super::Initialize();

}

void UCharacterLogic::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bIsDead)
        return;

    UpdateStamina(DeltaTime);
    UpdateMovementState();
    UpdatePawnMaxSpeed();
}

void UCharacterLogic::Shutdown()
{

    Super::Shutdown();
}

void UCharacterLogic::UploadingData()
{
    Super::UploadingData();

    if (!GameInstance_Main)
        return;

    auto Row = GameInstance_Main->GetItemRowTyped<FCharacterItemRow>(ItemName);

    MaxStamina       = Row.MaxStamina;
    CurrentStamina   = MaxStamina;
    StaminaDrainRate = Row.StaminaDrainRate;
    StaminaRegenRate = Row.StaminaRegenRate;
    MinStaminaToRun  = Row.MinStaminaToRun;
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

    auto OldStamina = CurrentStamina;

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

    if (OldStamina != CurrentStamina)
        OnStaminaChanged.Broadcast(CurrentStamina, MaxStamina);
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

                OnEquipmentChanged.Broadcast();

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

        OnEquipmentChanged.Broadcast();

        return true;
    }

    return false;
}

UWeaponLogic* UCharacterLogic::GetItemInSlot(EEquipmentSlot Slot) const
{
    return Equipment.FindRef(Slot);
}

bool UCharacterLogic::GiveItemActor(AActor* Actor)
{
    if (!IsValid(Actor))
        return false;

    if (Actor->Implements<UItemLogicInterface>())
        if (auto ItemLogic = IItemLogicInterface::Execute_GetItemLogic(Actor))
        {
            if (ItemLogic->IsA(UAbilityLogic::StaticClass()))
            {
                if (auto AbilityLogic = Cast<UAbilityLogic>(ItemLogic))
                {
                    AbilityLogic->ApplyAbility(this);
                    return true;
                }
            }
            else if (ItemLogic->IsA(UWeaponLogic::StaticClass()))
            {
                return EquipItem(ItemLogic);
            }
            else
            {
            }
        }

    return false;
}

bool UCharacterLogic::GiveItem(UItemLogic* ItemLogic)
{
    if (!ItemLogic)
        return false;

    return false;
}

void UCharacterLogic::HandleDeath()
{
    if (IsValid(OwnerActor))
    {
        if (auto Character = Cast<ACharacter>(OwnerActor))
        {
            if (auto Mesh = Character->GetMesh())
            {
                Mesh->SetSimulatePhysics(true);
                Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
                Mesh->SetCollisionProfileName(TEXT("Ragdoll"));
            }

            if (auto Capsule = Character->GetCapsuleComponent())
            {
                Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                Capsule->SetSimulatePhysics(false);
            }

            if (auto Movement = Character->GetCharacterMovement())
            {
                Movement->DisableMovement();
            }

            if (auto Controller = Character->GetController())
            {
                if (auto AIController = Cast<AAIController>(Controller))
                {
                    AIController->StopMovement();
                    AIController->UnPossess();
                    AIController->Destroy();
                }
                else
                {
                    Controller->UnPossess();
                }
            }
        }
    }

    Super::HandleDeath();
}

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

bool UCharacterLogic::CommandTurnTarget(FRotator const& Rotator)
{
    return false;
}
