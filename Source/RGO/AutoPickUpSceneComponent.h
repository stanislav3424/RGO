// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AutoPickUpSceneComponent.generated.h"

class UCharacterLogic;
class USphereComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RGO_API UAutoPickUpSceneComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    UAutoPickUpSceneComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(
        float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Owner
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner")
    UCharacterLogic* CharacterLogicOwner;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Collision")
    USphereComponent* PickUpSphere;

    UFUNCTION()
    void OnPickupBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnPickupEndOverlap(
        UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
