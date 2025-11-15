// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemLogic.h"
#include "WeaponLogic.h"
#include "CharacterLogic.generated.h"

class AThirdPersonCharacter;
class UCharacterMovementComponent;

UENUM(BlueprintType)
enum class EMovementState : uint8
{
    Idle UMETA(DisplayName = "Idle"),
    Walk UMETA(DisplayName = "Walk"),
    Run  UMETA(DisplayName = "Run"),
};

UENUM(BlueprintType)
enum class ETypeMovementState : uint8
{
    Unarmed UMETA(DisplayName = "Unarmed"),
    Rifle   UMETA(DisplayName = "Rifle"),
};

UCLASS(Blueprintable)
class RGO_API UCharacterLogic : public UItemLogic
{
    GENERATED_BODY()

    // ItemLogic
public:
    virtual void Initialize() override;
    virtual void Tick(float DeltaTime) override;
    virtual void Shutdown() override;

protected:
    virtual void CheckField() override;

    // OwnerActor
public:
    virtual AActor* SpawnOwnerActor(
        FTransform const& Transform, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod =
                                         ESpawnActorCollisionHandlingMethod::AlwaysSpawn) override;

    virtual void DestroyOwnerActor() override;

protected:
    virtual void UpdateOwnerActor(AActor* Actor);

    // Command
public:
    UFUNCTION(BlueprintCallable, Category = "Command")
    bool CommandShootStarted();

    UFUNCTION(BlueprintCallable, Category = "Command")
    bool CommandShootCompleted();

    UFUNCTION(BlueprintCallable, Category = "Command")
    bool CommandReloadWeapon();

    // Movement
protected:
    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    UCharacterMovementComponent* CharacterMovementComponent;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    bool bIsRunInput = false;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    bool bIsMove = false;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    EMovementState MovementState = EMovementState::Idle;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    ETypeMovementState TypeMovementState = ETypeMovementState::Unarmed;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina")
    float MaxStamina = 100.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina")
    float CurrentStamina = 100.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina")
    float StaminaDrainRate = 30.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina")
    float StaminaRegenRate = 5.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Stamina")
    float MinStaminaToRun = 25.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    TMap<EEquipmentSlot, UWeaponLogic*> Equipment = { { EEquipmentSlot::RHand, nullptr } };

public:
    UFUNCTION(BlueprintCallable, Category = "Movement")
    void HandleRunInput(bool bWantsToRun);

    UFUNCTION(BlueprintCallable, Category = "Movement")
    EMovementState GetMovementState() const { return MovementState; }

    UFUNCTION(BlueprintCallable, Category = "Movement")
    ETypeMovementState GetTypeMovementState() const { return TypeMovementState; }

private:
    void UpdateStamina(float DeltaTime);
    void UpdateMovementState();
    void UpdateTypeMovementState();
    void UpdatePawnMaxSpeed();

    // Equipment
public:
    UFUNCTION(BlueprintCallable, Category = "Equipment")
    bool EquipItem(UItemLogic* ItemLogic);

    UFUNCTION(BlueprintCallable, Category = "Equipment")
    bool TakeOffItem(UWeaponLogic* WeaponLogic);

    UFUNCTION(BlueprintCallable, Category = "Equipment")
    UWeaponLogic* GetItemInSlot(EEquipmentSlot Slot) const;
};