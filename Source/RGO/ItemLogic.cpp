// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemLogic.h"
#include "ItemLogicInterface.h"
#include "Macros.h"
#include "TimerManager.h"
#include "GameInstance_Main.h"

UItemLogic::UItemLogic()
{
}

void UItemLogic::InitializeName(FName const& SetItemName)
{
    ItemName = SetItemName;
    Initialize();
}

void UItemLogic::Initialize()
{
    if (bIsInitialized)
        return;

    if (auto World = GetWorld())
        if (auto GameInstance = World->GetGameInstance<UGameInstance_Main>())
        {
            auto ItemRow = GameInstance->GetItemRow(ItemName);
            OwnerActorClass = ItemRow.ActorClass;
        }


    CheckField();
    bIsInitialized = true;
    bIsActive      = true;
}

void UItemLogic::Tick(float DeltaTime)
{
}

void UItemLogic::Shutdown()
{
    bIsActive      = false;
    bIsInitialized = false;
}

void UItemLogic::CheckField()
{
    CHECK_FIELD(OwnerActorClass);
    CHECK_INDEX_NONE(MaxHealth);
    CHECK_INDEX_NONE(CurrentHealth);
}

AActor* UItemLogic::SpawnOwnerActor(
    FTransform const& Transform, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod)
{
    CHECK_FIELD(OwnerActorClass);

    auto World = GetWorld();
    if (!World || !OwnerActorClass.Get())
        return nullptr;

    FActorSpawnParameters ActorSpawnParameters;
    ActorSpawnParameters.SpawnCollisionHandlingOverride = SpawnActorCollisionHandlingMethod;
    if (auto Actor = World->SpawnActor<AActor>(OwnerActorClass, Transform, ActorSpawnParameters))
        UpdateOwnerActor(Actor);

    CHECK_FIELD(OwnerActor);

    return OwnerActor;
}

bool UItemLogic::SetOwnerActor(AActor* Actor)
{
    if (!IsValid(Actor))
        return false;

    if (IsValid(OwnerActor))
        return false;

    UpdateOwnerActor(Actor);

    return true;
}

void UItemLogic::DestroyOwnerActor()
{
    UnbindFromActorEvents();
    if (OwnerActor)
        OwnerActor->Destroy();
}

void UItemLogic::SetOwnerActorLocation(FVector const& NewLocation)
{
    if (OwnerActor)
        OwnerActor->SetActorLocation(NewLocation);
}

void UItemLogic::SetOwnerActorTransform(FTransform const& NewTransform)
{
    if (OwnerActor)
        OwnerActor->SetActorTransform(NewTransform);
}

void UItemLogic::UpdateOwnerActor(AActor* Actor)
{
    CHECK_FIELD(Actor);

    if (!IsValid(Actor))
        return;

    DestroyOwnerActor();
    OwnerActor = Actor;
    if (OwnerActor && OwnerActor->Implements<UItemLogicInterface>())
        IItemLogicInterface::Execute_SetItemLogic(OwnerActor, this);
    BindToActorEvents();
}

void UItemLogic::BindToActorEvents()
{
    CHECK_FIELD(OwnerActor);

    if (!OwnerActor)
        return;

    if (!OwnerActor->OnTakeAnyDamage.IsAlreadyBound(this, &UItemLogic::HandleOwnerDamage))
        OwnerActor->OnTakeAnyDamage.AddDynamic(this, &UItemLogic::HandleOwnerDamage);
}

void UItemLogic::UnbindFromActorEvents()
{
    if (!OwnerActor)
        return;

    if (OwnerActor->OnTakeAnyDamage.IsAlreadyBound(this, &UItemLogic::HandleOwnerDamage))
        OwnerActor->OnTakeAnyDamage.RemoveDynamic(this, &UItemLogic::HandleOwnerDamage);
}

void UItemLogic::HandleOwnerDamage(
    AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
    CHECK_INDEX_NONE(Damage)
    if (!bCanTakeDamage || bIsDead || Damage <= 0.f)
        return;

    ProcessDamage(Damage, DamageCauser);
}

void UItemLogic::ProcessDamage(float DamageAmount, AActor* DamageCauser)
{
    CurrentHealth = FMath::Max(0.f, CurrentHealth - DamageAmount);

    if (CurrentHealth <= 0.f && !bIsDead)
        HandleDeath();
}

void UItemLogic::HandleDeath()
{
    bIsDead        = true;
    bCanTakeDamage = false;

    if (OwnerActor)
    {
    }
}

void UItemLogic::Attachment(FTransform const& AttachmentTransform, USceneComponent* ParentComponent,
    FName const& SocketName, FAttachmentTransformRules const& AttachmentTransformRules)
{
    if (IsValid(OwnerActor))
        SetOwnerActorTransform(AttachmentTransform);
    else
        SpawnOwnerActor(AttachmentTransform);

    CHECK_FIELD(OwnerActor);
    CHECK_FIELD(ParentComponent);

    if (IsValid(OwnerActor) && ParentComponent)
    {
        OwnerActor->AttachToComponent(ParentComponent, AttachmentTransformRules, SocketName);
    }
}
//////////////