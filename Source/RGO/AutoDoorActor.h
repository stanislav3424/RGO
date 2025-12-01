// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DoorActor.h"
#include "AutoDoorActor.generated.h"

class UBoxComponent;
class UDoorLogic;

UCLASS()
class RGO_API AAutoDoorActor : public ADoorActor
{
    GENERATED_BODY()

public:
    AAutoDoorActor();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoDoor")
    UBoxComponent* TriggerBox;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AutoDoor")
    TSubclassOf<AActor> TriggerClass;

    UPROPERTY(Transient)
    TSet<AActor*> OverlappingActorsOfClass;

    UFUNCTION()
    void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnTriggerEndOverlap(
        UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
    bool bOnce = false;
};
