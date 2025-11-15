// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponActor.h"
#include "WeaponLogic.h"
#include "Components/SkeletalMeshComponent.h"
#include "Macros.h"

AWeaponActor::AWeaponActor()
{
    PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    SkeletalMeshComponent->SetupAttachment(RootComponent);
}

void AWeaponActor::BeginPlay()
{
    Super::BeginPlay();
}

void AWeaponActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

UItemLogic* AWeaponActor::GetItemLogic_Implementation()
{
    return WeaponLogic;
}

void AWeaponActor::SetItemLogic_Implementation(UItemLogic* NewItemLogic)
{
    if (auto NewWeaponLogic = Cast<UWeaponLogic>(NewItemLogic))
        WeaponLogic = NewWeaponLogic;
    CHECK_FIELD(WeaponLogic);
}
