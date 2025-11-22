// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Actor.generated.h"

UCLASS()
class RGO_API ACPP_Actor : public AActor
{
    GENERATED_BODY()

public:
    ACPP_Actor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

public:
    UPROPERTY(EditInstanceOnly, Category = "Test")
    bool bIsAlive = false;

    UPROPERTY(EditInstanceOnly, Category = "Test")
    int32 EnemyNum = 0;

private:
    void ShowActorInformation() const;

public:
    UFUNCTION(BlueprintCallable, Category = "SinMovement")
    void SinMovement();

    UPROPERTY(EditInstanceOnly, Category = "SinMovement")
    float Amplitude = 50.0f;

    UPROPERTY(EditInstanceOnly, Category = "SinMovement")
    float Frequency = 2.0f;

private:
    FVector InitialLocation;
};
