// Fill out your copyright notice in the Description page of Project Settings.

#include "AutoPickUpSceneComponent.h"
#include "CharacterLogic.h"
#include "ItemLogicInterface.h"
#include "Macros.h"
#include "Components/SphereComponent.h"

UAutoPickUpSceneComponent::UAutoPickUpSceneComponent()
{
    PrimaryComponentTick.bCanEverTick = true;

    PickUpSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PickupSphere"));
    if (PickUpSphere)
    {
        PickUpSphere->SetupAttachment(this);
        PickUpSphere->InitSphereRadius(150.f);
        PickUpSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
        PickUpSphere->SetCollisionResponseToAllChannels(ECR_Overlap);
        PickUpSphere->SetHiddenInGame(false);
    }
}

void UAutoPickUpSceneComponent::BeginPlay()
{
    Super::BeginPlay();

    if (auto Owner = GetOwner())
        if (Owner->Implements<UItemLogicInterface>())
            CharacterLogicOwner = Cast<UCharacterLogic>(IItemLogicInterface::Execute_GetItemLogic(Owner));

    CHECK_FIELD(CharacterLogicOwner);

    if (PickUpSphere)
    {
        PickUpSphere->OnComponentBeginOverlap.AddDynamic(this, &UAutoPickUpSceneComponent::OnPickupBeginOverlap);
        PickUpSphere->OnComponentEndOverlap.AddDynamic(this, &UAutoPickUpSceneComponent::OnPickupEndOverlap);
    }
}

void UAutoPickUpSceneComponent::TickComponent(
    float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UAutoPickUpSceneComponent::OnPickupBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    
    if (!OtherActor || OtherActor == GetOwner())
        return;

    if (OtherActor->Implements<UItemLogicInterface>())
    {
        if (CharacterLogicOwner)
        {
            CharacterLogicOwner->GiveItemActor(OtherActor);
        }
    }
}

void UAutoPickUpSceneComponent::OnPickupEndOverlap(
    UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (!OtherActor || OtherActor == GetOwner())
        return;

    if (OtherActor->Implements<UItemLogicInterface>())
    {
    }
}

