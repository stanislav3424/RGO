// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponActor.h"
#include "WeaponLogic.h"
#include "Components/SkeletalMeshComponent.h"
#include "Macros.h"

AWeaponActor::AWeaponActor()
{
    PrimaryActorTick.bCanEverTick = true;

    

    SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    SkeletalMeshComponent->SetupAttachment(GetRootComponent());
}

void AWeaponActor::BeginPlay()
{
    Super::BeginPlay();
}

void AWeaponActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

