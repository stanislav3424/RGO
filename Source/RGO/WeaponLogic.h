// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemLogic.h"
#include "WeaponLogic.generated.h"

class ACharacter;
class UAnimMontage;

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8
{
    RHand UMETA(DisplayName = "RHand"),
};

UENUM(BlueprintType)
enum class EGanSlot : uint8
{
    Muzzle UMETA(DisplayName = "Muzzle"),
};

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
    Idle      UMETA(DisplayName = "Idle"),
    Shooting  UMETA(DisplayName = "Shooting"),
    Reloading UMETA(DisplayName = "Reloading")
};

UCLASS(Blueprintable)
class RGO_API UWeaponLogic : public UItemLogic
{
    GENERATED_BODY()

    // ItemLogic
public:
    UWeaponLogic();

    virtual void Initialize() override;
    virtual void Tick(float DeltaTime) override;
    virtual void Shutdown() override;

protected:
    virtual void CheckField() override;

    UPROPERTY(BlueprintReadOnly, Category = "ItemLogic")
    ACharacter* AttachmentParent;

public:
    bool SetAttachmentParent(AActor* Actor);

    // Animation
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
    UAnimMontage* ShootAnimMontage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
    UAnimMontage* ReloadAnimMontage;

    // Weapon State
protected:
    UPROPERTY(BlueprintReadOnly, Category = "Weapon State")
    EWeaponState CurrentWeaponState = EWeaponState::Idle;

    UPROPERTY(BlueprintReadOnly, Category = "Weapon State")
    bool bIsInputBlocked = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Weapon State")
    EWeaponState GetWeaponState() const { return CurrentWeaponState; }

    UFUNCTION(BlueprintCallable, Category = "Weapon State")
    bool GetIsInputBlocked() const { return bIsInputBlocked; }

    // Combat
public:
    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool ShootStarted();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool ShootCompleted();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool CanShoot() const;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void PerformShoot();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool ReloadWeapon();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    EEquipmentSlot GetEquipmentSlot() const { return EquipmentSlot; }

    UFUNCTION(BlueprintCallable, Category = "Combat")
    int32 GetCurrentAmmo() const { return CurrentAmmo; }

    UFUNCTION(BlueprintCallable, Category = "Combat")
    int32 GetMaxAmmo() const { return MaxAmmo; }

    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool GetIsShooting() const { return CurrentWeaponState == EWeaponState::Shooting; }

protected:
    UFUNCTION(BlueprintCallable, Category = "Combat")
    bool CanReload() const;

    void StartReload();
    void FinishReload();
    void CancelReload();

private:
    void ShootTimerElapsed();
    void StopShooting();

private:
    EEquipmentSlot EquipmentSlot = EEquipmentSlot::RHand;

    FTimerHandle ShootTimerHandle;
    FTimerHandle ReloadTimerHandle;

    int32 MaxAmmo     = 30;
    int32 CurrentAmmo = 30;
    float RateFire    = 0.1f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
    bool bAutoReload = true;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
    float AutoReloadDelay = 1.0f;
};