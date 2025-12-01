// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemLogicInterface.h"
#include "BaseActor.generated.h"

class UItemnLogic;

UCLASS()
class RGO_API ABaseActor : public AActor, public IItemLogicInterface
{
    GENERATED_BODY()

public:
    void BeginPlay();

    public:
    virtual void Tick(float DeltaTime) override;

    // ItemLogicInterface
public:
    virtual UItemLogic* GetItemLogic_Implementation() override;
    virtual void        SetItemLogic_Implementation(UItemLogic* NewItemLogic) override;

protected:
    UPROPERTY()
    UItemLogic* ItemLogic;

    // Active
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Active", meta = (AllowPrivateAccess = "true"))
    bool bIsAutoActive = true;

    UPROPERTY(BlueprintReadOnly, Category = "Active", meta = (AllowPrivateAccess = "true"))
    bool bIsActive = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Active")
    void AutomaticActivation();
};
