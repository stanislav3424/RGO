// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_Actor.h"

ACPP_Actor::ACPP_Actor() { PrimaryActorTick.bCanEverTick = true; }

void ACPP_Actor::BeginPlay()
{
    Super::BeginPlay();

    //ShowActorInformation();

    InitialLocation = GetActorLocation();
}

void ACPP_Actor::Tick(float DeltaTime) { Super::Tick(DeltaTime); }

void ACPP_Actor::ShowActorInformation() const
{
    UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *GetName());
    UE_LOG(LogTemp, Display, TEXT("%s: %d"), *GET_MEMBER_NAME_CHECKED(ACPP_Actor, bIsAlive).ToString(), bIsAlive);
    UE_LOG(LogTemp, Display, TEXT("%s: %d"), *GET_MEMBER_NAME_CHECKED(ACPP_Actor, EnemyNum).ToString(), EnemyNum);
}

void ACPP_Actor::SinMovement()
{
    float Time = GetWorld()->GetTimeSeconds();
    FVector NewLocation = GetActorLocation();
    NewLocation.Z = InitialLocation.Z + Amplitude * FMath::Sin(Frequency * Time);

    SetActorLocation(NewLocation);
}