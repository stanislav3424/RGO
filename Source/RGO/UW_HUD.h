// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UW_HUD.generated.h"

class UProgressBar;
class UTextBlock;
class UCharacterLogic;
class UWeaponLogic;
class UBorder;

UCLASS()
class RGO_API UUW_HUD : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual bool Initialize() override;
    virtual void NativeDestruct() override;

protected:
    UPROPERTY(VisibleInstanceOnly)
    UCharacterLogic* CharacterLogicRef;

    UPROPERTY(VisibleInstanceOnly)
    UWeaponLogic* WeaponLogicRef;

public:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UProgressBar* HealthProgressBar;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UProgressBar* StaminaProgressBar;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UTextBlock* AmmoTextBlock;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UTextBlock* ScoreTextBlock;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UTextBlock* TimeTextBlock;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UBorder* BackgroundBorder;

protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* VignetteMID;

public:
    UFUNCTION()
    void SwitchControlledPawn(APawn* OldPawn, APawn* NewPawn);

    UFUNCTION()
    void UpdateWeapon();

    UFUNCTION()
    void SetHealth(float CurrentHealth, float MaxHealth);

    UFUNCTION()
    void SetStamina(float CurrentStamina, float MaxStamina);

    UFUNCTION()
    void SetAmmo(int32 CurrentAmmo, int32 MaxAmmo);

protected:
    void UpdateHUD();
    void UpdateScoreDisplay(int32 Score);
    void UpdateTimeDisplay(float RemainingSeconds);

protected:
    FTimerHandle HUDUpdateTimerHandle;

    UPROPERTY(EditDefaultsOnly, Category = "HUD")
    float HUDUpdateInterval = 0.25f;
};