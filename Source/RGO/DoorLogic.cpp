// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorLogic.h"
#include "DoorActor.h"

void UDoorLogic::Initialize()
{
    Super::Initialize();
}

void UDoorLogic::UpdateOwnerActor(AActor* Actor)
{
    Super::UpdateOwnerActor(Actor);

    bIsMoving       = false;
    bIsOpen         = false;
    TargetTransform = FTransform::Identity;
    DoorMeshRef     = nullptr;

    if (!OwnerActor)
        return;

    if (auto DoorOwner = Cast<ADoorActor>(OwnerActor))
    {
        ClosedTransform = DoorOwner->GetClosedPointTransform();
        OpenTransform   = DoorOwner->GetOpenPointTransform();
        DoorMeshRef     = DoorOwner->GetDoorMesh();
        SetOwnerDoorMeshRelativeTransform(ClosedTransform);
        TargetTransform = ClosedTransform;
    }

}

void UDoorLogic::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!OwnerActor || !bIsMoving)
        return;

    FTransform CurrentRelative = FTransform::Identity;

    if (auto DoorOwner = Cast<ADoorActor>(OwnerActor))
        if (DoorMeshRef)
            CurrentRelative = DoorMeshRef->GetRelativeTransform();

    FVector NewLocation = FMath::VInterpConstantTo(
        CurrentRelative.GetLocation(), TargetTransform.GetLocation(), DeltaTime, MovementSpeed);

    FRotator CurrentRot = CurrentRelative.GetRotation().Rotator();
    FRotator TargetRot  = TargetTransform.GetRotation().Rotator();
    FRotator NewRot     = FMath::RInterpConstantTo(CurrentRot, TargetRot, DeltaTime, RotationSpeed);

    FVector NewScale = FMath::VInterpTo(CurrentRelative.GetScale3D(), TargetTransform.GetScale3D(), DeltaTime,
        MovementSpeed > 0.0f ? MovementSpeed : 1.0f);

    FTransform NewRelativeTransform = FTransform(NewRot, NewLocation, NewScale);

    SetOwnerDoorMeshRelativeTransform(NewRelativeTransform);

    const float PosTolerance    = 1.0f;
    const float RotToleranceDeg = 0.5f;

    bool bPosReached =
        FVector::DistSquared(NewLocation, TargetTransform.GetLocation()) <= (PosTolerance * PosTolerance);
    bool bRotReached = FMath::Abs((NewRot - TargetRot).GetNormalized().Yaw) <= RotToleranceDeg &&
                       FMath::Abs((NewRot - TargetRot).GetNormalized().Pitch) <= RotToleranceDeg &&
                       FMath::Abs((NewRot - TargetRot).GetNormalized().Roll) <= RotToleranceDeg;

    if (bPosReached && bRotReached)
    {
        SetOwnerDoorMeshRelativeTransform(TargetTransform);
        bIsMoving = false;
    }
}

void UDoorLogic::Shutdown()
{
    bIsMoving = false;
    Super::Shutdown();
}

void UDoorLogic::OpenDoor()
{
    if (!OwnerActor)
        return;

    TargetTransform = OpenTransform;
    bIsMoving       = true;
    bIsOpen         = true;
}

void UDoorLogic::CloseDoor()
{
    if (!OwnerActor)
        return;

    TargetTransform = ClosedTransform;
    bIsMoving       = true;
    bIsOpen         = false;
}

void UDoorLogic::SetDoorOpenInstant(bool bOpen)
{
    if (!OwnerActor)
        return;

    if (bOpen)
    {
        SetOwnerDoorMeshRelativeTransform(OpenTransform);
        bIsOpen = true;
    }
    else
    {
        SetOwnerDoorMeshRelativeTransform(ClosedTransform);
        bIsOpen = false;
    }

    bIsMoving = false;
}

void UDoorLogic::SetOwnerDoorMeshRelativeTransform(const FTransform& NewRelativeTransform)
{
    if (!OwnerActor)
        return;

    if (DoorMeshRef)
        DoorMeshRef->SetRelativeTransform(NewRelativeTransform);
}