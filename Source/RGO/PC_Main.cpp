// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_Main.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ThirdPersonCharacter.h"
#include "CharacterLogic.h"
#include "GameInstance_Main.h"
#include "Macros.h"

void APC_Main::BeginPlay()
{
    Super::BeginPlay();

    bShowMouseCursor = true;

    ControlledPawn = GetPawn<AThirdPersonCharacter>();
    if (IsValid(ControlledPawn))
    {
        SpringArmComponentRef = ControlledPawn->GetSpringArmComponent();
        MovementComponentRef = ControlledPawn->GetCharacterMovement();

        if (ControlledPawn->Implements<UItemLogicInterface>())
        {
            auto ItemLogic = IItemLogicInterface::Execute_GetItemLogic(ControlledPawn);
            CharacterLogicRef = Cast<UCharacterLogic>(ItemLogic);
        }
    }

    AddMappingContext();

    RunTest(); //затычка

    CHECK_FIELD(ControlledPawn);
    CHECK_FIELD(SpringArmComponentRef);
    CHECK_FIELD(MovementComponentRef);
    CHECK_FIELD(CharacterLogicRef);
    CHECK_FIELD(InputMappingContext);
    CHECK_FIELD(MoveInputAction);
    CHECK_FIELD(RotateInputAction);
    CHECK_FIELD(ZoomInputAction);
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
        EnhancedInputComponent->BindAction(ShootInputAction, ETriggerEvent::Started, this, &APC_Main::ShootStart);
        EnhancedInputComponent->BindAction(ShootInputAction, ETriggerEvent::Completed, this, &APC_Main::ShootEnd);
        EnhancedInputComponent->BindAction(ReloadInputAction, ETriggerEvent::Started, this, &APC_Main::Reload);
    }
}

void APC_Main::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TurnPawnToCursor();
    SetArmLength(DeltaTime);
}

void APC_Main::RunTest()
{
    if (IsValid(ControlledPawn) && ControlledPawn->Implements<UItemLogicInterface>())
    {
        ControlledPawn->AutomaticActivation();

        if (auto GameInstance = GetGameInstance<UGameInstance_Main>())
        {
            auto WeaponLogic = GameInstance->CreateItemLogic(TEXT("Test_2"));

            auto CharacterLogic    = IItemLogicInterface::Execute_GetItemLogic(ControlledPawn);
            CharacterLogicRef = Cast<UCharacterLogic>(CharacterLogic);

            CHECK_FIELD(WeaponLogic);
            CHECK_FIELD(CharacterLogic);

            if (CharacterLogicRef)
                CharacterLogicRef->EquipItem(WeaponLogic);
        }
    }
}

void APC_Main::AddMappingContext()
{
    if (auto EnhancedInputLocalPlayerSubsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        EnhancedInputLocalPlayerSubsystem->AddMappingContext(InputMappingContext, 0);
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
    if (!SpringArmComponentRef)
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
    if (!SpringArmComponentRef)
        return;

    float ZoomValue = Value.Get<float>();
    if (FMath::IsNearlyZero(ZoomValue))
        return;

    const float Delta = ZoomValue * ZoomSpeed * GetWorld()->GetDeltaSeconds();
    DesiredArmLength = FMath::Clamp(DesiredArmLength - Delta, MinZoomDistance, MaxZoomDistance);
}

void APC_Main::RunStart(const FInputActionValue& Value)
{
    if (CharacterLogicRef)
        CharacterLogicRef->HandleRunInput(true);
}

void APC_Main::RunEnd(const FInputActionValue& Value)
{
    if (CharacterLogicRef)
        CharacterLogicRef->HandleRunInput(false);
}

void APC_Main::ShootStart(const FInputActionValue& Value)
{

    if (CharacterLogicRef)
        CharacterLogicRef->CommandShootStarted();
}

void APC_Main::ShootEnd(const FInputActionValue& Value)
{
    if (CharacterLogicRef)
        CharacterLogicRef->CommandShootCompleted();
}

void APC_Main::Reload(const FInputActionValue& Value)
{
    if (CharacterLogicRef)
        CharacterLogicRef->CommandReloadWeapon();
}

