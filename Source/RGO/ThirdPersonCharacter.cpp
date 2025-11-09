// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPersonCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AThirdPersonCharacter::AThirdPersonCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComponent->SetupAttachment(RootComponent);

    SpringArmComponent->SetUsingAbsoluteRotation(true);

    SpringArmComponent->TargetArmLength = 1500.0f;
    SpringArmComponent->bDoCollisionTest = false;
    SpringArmComponent->bEnableCameraRotationLag = true;
    SpringArmComponent->CameraRotationLagSpeed = 10.0f;
    SpringArmComponent->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
    CameraComponent->bUsePawnControlRotation = false;

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;
}


void AThirdPersonCharacter::BeginPlay() { Super::BeginPlay(); }

void AThirdPersonCharacter::Tick(float DeltaTime) { Super::Tick(DeltaTime); }
