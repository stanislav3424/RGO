// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "WeaponActor.generated.h"


UCLASS()
class RGO_API AWeaponActor : public ABaseActor
{
    GENERATED_BODY()

public:
    AWeaponActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Ñomponents
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USkeletalMeshComponent* SkeletalMeshComponent;


};
