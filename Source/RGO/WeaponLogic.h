// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemLogic.h"
#include "WeaponLogic.generated.h"

class ACharacter;
class UAnimMontage;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAmmoChanged, int32, CurrentAmmo, int32, MaxAmmo);

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
    virtual void Initialize() override;
    virtual void Tick(float DeltaTime) override;
    virtual void Shutdown() override;

protected:
    virtual void UploadingData() override;
    virtual void CheckField() override;

    UPROPERTY(BlueprintReadOnly, Category = "ItemLogic")
    ACharacter* AttachmentParent;

public:
    bool SetAttachmentParent(AActor* Actor); // затычка

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
    UPROPERTY(BlueprintAssignable, Category = "Ammo")
    FOnAmmoChanged OnAmmoChanged;

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

private:
    void StartReload();
    void FinishReload();
    void CancelReload();
    void ShootTimerElapsed();
    void StopShooting();

private:
    UPROPERTY(VisibleInstanceOnly, Category = "Combat");
    EEquipmentSlot EquipmentSlot = EEquipmentSlot::RHand;

    UPROPERTY(VisibleInstanceOnly, Category = "Combat");
    FTimerHandle ShootTimerHandle;

    UPROPERTY(VisibleInstanceOnly, Category = "Combat");
    FTimerHandle ReloadTimerHandle;

    UPROPERTY(VisibleInstanceOnly, Category = "Combat");
    int32 MaxAmmo = INDEX_NONE;

    UPROPERTY(VisibleInstanceOnly, Category = "Combat");
    int32 CurrentAmmo = INDEX_NONE;

    UPROPERTY(VisibleInstanceOnly, Category = "Combat");
    float RateFire = INDEX_NONE;

    UPROPERTY(VisibleInstanceOnly, Category = "Combat")
    float Damage = INDEX_NONE;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
    bool bAutoReload = true;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
    float AutoReloadDelay = 1.0f;
};