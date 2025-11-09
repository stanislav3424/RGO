// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_Main.generated.h"

class UInputMappingContext;
class UInputAction;
class AThirdPersonCharacter;
class USpringArmComponent;
class UCharacterMovementComponent;

struct FInputActionValue;

UENUM(BlueprintType)
enum class EMovementState : uint8
{
    Idle UMETA(DisplayName = "Idle"),
    Walk UMETA(DisplayName = "Walk"),
    Run UMETA(DisplayName = "Run"),
};


/**
 *
 */
UCLASS()
class RGO_API APC_Main : public APlayerController
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

public:
    virtual void Tick(float DeltaTime) override;


private:
    void AddMappingContext();

private:
    void SetArmLength(float DeltaTime);
    void TurnPawnToCursor();

private:
    AThirdPersonCharacter* ControlledPawn;
    USpringArmComponent* SpringArmComponentRef;
    UCharacterMovementComponent* MovementComponent;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* InputMappingContext;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* MoveInputAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* RotateInputAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* ZoomInputAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* RunInputAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float MoveSpeed = 1000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float RotationSpeed = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float ZoomSpeed = 4000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float MinZoomDistance = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float MaxZoomDistance = 3000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float ZoomInterpSpeed = 8.0f;

    float DesiredArmLength = 1500.f;

    void Move(const FInputActionValue& Value);
    void Rotate(const FInputActionValue& Value);
    void Zoom(const FInputActionValue& Value);
    void RunStart(const FInputActionValue& Value);
    void RunEnd(const FInputActionValue& Value);

private:
    bool bIsRunInput = false;
    bool bIsMove = false;
    EMovementState MovementState = EMovementState::Idle;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina", meta = (AllowPrivateAccess = "true"))
    float MaxStamina = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina", meta = (AllowPrivateAccess = "true"))
    float CurrentStamina = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina", meta = (AllowPrivateAccess = "true"))
    float StaminaDrainRate = 30.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina", meta = (AllowPrivateAccess = "true"))
    float StaminaRegenRate = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stamina", meta = (AllowPrivateAccess = "true"))
    float MinStaminaToRun = 25.0f;

    void HandleRunInput(bool bWantsToRun);
    void UpdateStamina(float DeltaTime);

    void UpdateMovementState();
    void UpdatePawnMaxSpeed();

public:
    UFUNCTION(BlueprintCallable, Category = "MovementState")
    EMovementState GetMovementState() const { return MovementState; };
};
