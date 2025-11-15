// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemLogicInterface.h"
#include "WeaponActor.generated.h"

class UWeaponLogic;

UCLASS()
class RGO_API AWeaponActor : public AActor, public IItemLogicInterface
{
	GENERATED_BODY()
	
public:	
	AWeaponActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // ItemLogicInterface
public:
    virtual UItemLogic* GetItemLogic_Implementation() override;
    virtual void        SetItemLogic_Implementation(UItemLogic* NewItemLogic) override;

protected:
    UPROPERTY()
    UWeaponLogic* WeaponLogic;

    // Ñomponents

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    USkeletalMeshComponent* SkeletalMeshComponent;
};
