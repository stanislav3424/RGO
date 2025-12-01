// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemLogic.h"
#include "DoorLogic.generated.h"

class ADoorActor;

UCLASS(Blueprintable)
class RGO_API UDoorLogic : public UItemLogic
{
    GENERATED_BODY()

public:
    virtual void Initialize() override;
    virtual void Tick(float DeltaTime) override;
    virtual void Shutdown() override;

protected:
    virtual void UpdateOwnerActor(AActor* Actor) override;

public:
    UPROPERTY(BlueprintReadOnly, Category = "Door")
    UStaticMeshComponent* DoorMeshRef;

    UPROPERTY(BlueprintReadOnly, Category = "Door")
    FTransform ClosedTransform = FTransform::Identity;

    UPROPERTY(BlueprintReadOnly, Category = "Door")
    FTransform OpenTransform = FTransform::Identity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
    float MovementSpeed = 200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
    float RotationSpeed = 180.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Door")
    bool bIsOpen = false;

protected:
    FTransform TargetTransform = FTransform::Identity;
    bool       bIsMoving       = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Door")
    void OpenDoor();

    UFUNCTION(BlueprintCallable, Category = "Door")
    void CloseDoor();

    UFUNCTION(BlueprintCallable, Category = "Door")
    void SetDoorOpenInstant(bool bOpen);

protected:
    void SetOwnerDoorMeshRelativeTransform(const FTransform& NewRelativeTransform);
};
