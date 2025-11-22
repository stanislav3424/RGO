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
class UCharacterLogic;

struct FInputActionValue;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTogglePauseWidget, bool, bIsPause);

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
    virtual void OnUnPossess() override;
    virtual void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) override;

public:
    virtual bool SetPause(bool bPause, FCanUnpause CanUnpauseDelegate = FCanUnpause());
    virtual void Tick(float DeltaTime) override;

private:
    void SetReferences();
    void RunTest();
    void AddMappingContext();
    void RemoveMappingContext();
    void SetArmLength(float DeltaTime);
    void TurnPawnToCursor();

private:
    UPROPERTY(VisibleInstanceOnly)
    AThirdPersonCharacter* ControlledPawn;

    UPROPERTY(VisibleInstanceOnly)
    USpringArmComponent* SpringArmComponentRef;

    UPROPERTY(VisibleInstanceOnly)
    UCharacterMovementComponent* MovementComponentRef;

    UPROPERTY(VisibleInstanceOnly)
    UCharacterLogic* CharacterLogicRef;

private:
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

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* ShootInputAction;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* ReloadInputAction;

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

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera Settings", meta = (AllowPrivateAccess = "true"))
    float DesiredArmLength = 1500.f;

    void Move(const FInputActionValue& Value);
    void Rotate(const FInputActionValue& Value);
    void Zoom(const FInputActionValue& Value);
    void RunStart(const FInputActionValue& Value);
    void RunEnd(const FInputActionValue& Value);
    void ShootStart(const FInputActionValue& Value);
    void ShootEnd(const FInputActionValue& Value);
    void Reload(const FInputActionValue& Value);

    // UI
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* UI_InputMappingContext;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* PauseInputAction;

    void PauseInput(const FInputActionValue& Value);

public:
    FOnTogglePauseWidget OnTogglePauseWidget;

};
