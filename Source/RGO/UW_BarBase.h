// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UW_BarBase.generated.h"

class UProgressBar;
class UCharacterLogic;
class UItemLogic;

UCLASS()
class RGO_API UUW_BarBase : public UUserWidget
{
    GENERATED_BODY()

protected:
    UCharacterLogic* CharacterLogicRef;

public:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UProgressBar* HealthProgressBar;

    UFUNCTION()
    void SetHealth(float CurrentHealth, float MaxHealth);

public:
    UFUNCTION(BlueprintCallable)
    void InitWithCharacterLogic(UCharacterLogic* CharacterLogic);
};
