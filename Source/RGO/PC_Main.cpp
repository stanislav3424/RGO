// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_Main.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ThirdPersonCharacter.h"
#include "Macros.h"

void APC_Main::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;

    ControlledPawn = GetPawn<AThirdPersonCharacter>();
    if (IsValid(ControlledPawn))
    {
        SpringArmComponentRef = ControlledPawn->GetSpringArmComponent();
        MovementComponent = ControlledPawn->GetCharacterMovement();
    }

    CHECK_FIELD(ControlledPawn);
    CHECK_FIELD(SpringArmComponentRef);
    CHECK_FIELD(MovementComponent);
    CHECK_FIELD(InputMappingContext);
    CHECK_FIELD(MoveInputAction);
    CHECK_FIELD(RotateInputAction);
    CHECK_FIELD(ZoomInputAction);

    AddMappingContext();
}

void APC_Main::AddMappingContext()
{
    if (auto EnhancedInputLocalPlayerSubsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        EnhancedInputLocalPlayerSubsystem->AddMappingContext(InputMappingContext, 0);
}

void APC_Main::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (auto EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
    {
        EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Triggered, this, &APC_Main::Move);
        EnhancedInputComponent->BindAction(RotateInputAction, ETriggerEvent::Triggered, this, &APC_Main::Rotate);
        EnhancedInputComponent->BindAction(ZoomInputAction, ETriggerEvent::Triggered, this, &APC_Main::Zoom);
        EnhancedInputComponent->BindAction(RunInputAction, ETriggerEvent::Started, this, &APC_Main::RunStart);
        EnhancedInputComponent->BindAction(RunInputAction, ETriggerEvent::Completed, this, &APC_Main::RunEnd);
    }
}

void APC_Main::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TurnPawnToCursor();
    SetArmLength(DeltaTime);
    UpdateStamina(DeltaTime);
    UpdateMovementState();
    UpdatePawnMaxSpeed();
}

void APC_Main::SetArmLength(float DeltaTime)
{
    if (!IsValid(SpringArmComponentRef))
        return;
    const float CurrentLength = SpringArmComponentRef->TargetArmLength;
    if (!FMath::IsNearlyEqual(CurrentLength, DesiredArmLength, 0.01f))
        SpringArmComponentRef->TargetArmLength =
            FMath::FInterpTo(CurrentLength, DesiredArmLength, DeltaTime, ZoomInterpSpeed);
}

void APC_Main::TurnPawnToCursor()
{
    if (!IsValid(ControlledPawn))
        return;

    FHitResult HitResult;
    GetHitResultUnderCursor(ECC_Visibility, false, HitResult);
    if (HitResult.bBlockingHit)
    {
        FVector Direction = (HitResult.Location - ControlledPawn->GetActorLocation()).GetSafeNormal2D();
        FRotator NewRotation = Direction.Rotation();

        ControlledPawn->SetActorRotation(NewRotation);
    }
}

void APC_Main::Move(const FInputActionValue& Value)
{
    if (!IsValid(ControlledPawn))
        return;

    FVector2D MovementVector = Value.Get<FVector2D>();

    if (MovementVector.X != 0.0f || MovementVector.Y != 0.0f)
    {
        const FVector ForwardDirection = ControlledPawn->GetActorForwardVector();
        const FVector RightDirection = ControlledPawn->GetActorRightVector();

        FVector MoveDirection = (ForwardDirection * MovementVector.Y) + (RightDirection * MovementVector.X);
        MoveDirection.Normalize();

        if (auto World = GetWorld())
            ControlledPawn->AddMovementInput(MoveDirection, MoveSpeed * World->GetDeltaSeconds());
    }
}

void APC_Main::Rotate(const FInputActionValue& Value)
{
    if (!IsValid(SpringArmComponentRef))
        return;

    float RotationValue = Value.Get<float>();

    if (RotationValue == 0.0f)
        return;

    FRotator NewRotation = SpringArmComponentRef->GetRelativeRotation();
    if (auto World = GetWorld())
        NewRotation.Yaw += RotationValue * RotationSpeed * World->GetDeltaSeconds();
    SpringArmComponentRef->SetRelativeRotation(NewRotation);
}

void APC_Main::Zoom(const FInputActionValue& Value)
{
    if (!IsValid(SpringArmComponentRef))
        return;

    float ZoomValue = Value.Get<float>();
    if (FMath::IsNearlyZero(ZoomValue))
        return;

    const float Delta = ZoomValue * ZoomSpeed * GetWorld()->GetDeltaSeconds();
    DesiredArmLength = FMath::Clamp(DesiredArmLength - Delta, MinZoomDistance, MaxZoomDistance);
}

void APC_Main::RunStart(const FInputActionValue& Value) { HandleRunInput(true); }

void APC_Main::RunEnd(const FInputActionValue& Value) { HandleRunInput(false); }

void APC_Main::HandleRunInput(bool bWantsToRun)
{
    if (bWantsToRun && CurrentStamina >= MinStaminaToRun)
        bIsRunInput = true;
    else if (!bWantsToRun)
        bIsRunInput = false;
}

void APC_Main::UpdateStamina(float DeltaTime)
{
    if (MovementState == EMovementState::Run && bIsMove)
    {
        CurrentStamina = FMath::Max(0.0f, CurrentStamina - StaminaDrainRate * DeltaTime);

        if (CurrentStamina <= 0.0f)
            bIsRunInput = false;
    }
    else
    {
        CurrentStamina = FMath::Min(MaxStamina, CurrentStamina + StaminaRegenRate * DeltaTime);
    }
}

void APC_Main::UpdateMovementState()
{
    if (!IsValid(ControlledPawn))
        return;

    FVector CurrentVelocity = ControlledPawn->GetVelocity();
    float Speed = CurrentVelocity.Size();

    const float MinMovementThreshold = 1.0f;

    bIsMove = Speed > MinMovementThreshold;

    if (!bIsMove)
        MovementState = EMovementState::Idle;
    else if (bIsRunInput && bIsMove)
        MovementState = EMovementState::Run;
    else
        MovementState = EMovementState::Walk;
}

void APC_Main::UpdatePawnMaxSpeed()
{
    if (!IsValid(ControlledPawn))
        return;
    if (!IsValid(MovementComponent))
        return;

    float NewMaxSpeed = 300.0f;

    if (MovementState == EMovementState::Run)
        NewMaxSpeed = 600.0f;

    MovementComponent->MaxWalkSpeed = NewMaxSpeed;
}