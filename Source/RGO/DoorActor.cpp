// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorActor.h"

#if WITH_EDITOR
#    include "Editor.h"
#endif

ADoorActor::ADoorActor()
{
    PrimaryActorTick.bCanEverTick = true;

    USceneComponent* SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent              = SceneRoot;

    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    DoorMesh->SetupAttachment(RootComponent);
    DoorMesh->SetMobility(EComponentMobility::Movable);

    ClosedPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ClosedPoint"));
    ClosedPoint->SetupAttachment(RootComponent);
    ClosedPoint->SetRelativeLocation(FVector::ZeroVector);

    OpenPoint = CreateDefaultSubobject<USceneComponent>(TEXT("OpenPoint"));
    OpenPoint->SetupAttachment(RootComponent);
    OpenPoint->SetRelativeLocation(FVector(0.f, 100.f, 0.f));
}

FTransform ADoorActor::GetClosedPointTransform() const
{
    if (IsValid(ClosedPoint) && ClosedPoint->IsRegistered())
        return ClosedPoint->GetRelativeTransform();

    if (IsValid(DoorMesh) && DoorMesh->IsRegistered())
        return DoorMesh->GetRelativeTransform();

    return FTransform::Identity;
}

FTransform ADoorActor::GetOpenPointTransform() const
{
    if (IsValid(OpenPoint) && OpenPoint->IsRegistered())
        return OpenPoint->GetRelativeTransform();

    if (IsValid(DoorMesh) && DoorMesh->IsRegistered())
        return DoorMesh->GetRelativeTransform();

    return FTransform::Identity;
}

void ADoorActor::BeginPlay()
{
    Super::BeginPlay();
}

void ADoorActor::ApplyPreviewTransform(bool bOpen)
{
    if (!IsValid(this) || HasAnyFlags(RF_BeginDestroyed) || HasAnyFlags(RF_FinishDestroyed))
        return;

    if (!IsValid(DoorMesh) || !DoorMesh->IsRegistered())
        return;

    FTransform Target = DoorMesh->GetRelativeTransform();
    if (bOpen)
    {
        if (IsValid(OpenPoint) && OpenPoint->IsRegistered())
            Target = OpenPoint->GetRelativeTransform();
    }
    else
    {
        if (IsValid(ClosedPoint) && ClosedPoint->IsRegistered())

            Target = ClosedPoint->GetRelativeTransform();
    }

    if (IsValid(DoorMesh) && DoorMesh->IsRegistered())
        DoorMesh->SetRelativeTransform(Target);

#if WITH_EDITOR
    if (GEditor)
    {
        ULevel* Level = GetLevel();
        if (Level && !Level->HasAnyFlags(RF_BeginDestroyed) && !Level->HasAnyFlags(RF_FinishDestroyed))
        {
            if (UPackage* Package = Level->GetOutermost())
                Package->SetDirtyFlag(true);
            GEditor->RedrawLevelEditingViewports(true);
        }
    }
#endif
}

void ADoorActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

#if WITH_EDITORONLY_DATA
    if (!HasAnyFlags(RF_BeginDestroyed) && IsValid(DoorMesh))
    {
        ApplyPreviewTransform(bPreviewOpenInEditor);
    }
#else
    if (IsValid(DoorMesh) && IsValid(ClosedPoint) && ClosedPoint->IsRegistered())
    {
        DoorMesh->SetRelativeTransform(ClosedPoint->GetRelativeTransform());
    }
#endif
}

#if WITH_EDITOR
void ADoorActor::PostInitProperties()
{
    Super::PostInitProperties();

#    if WITH_EDITORONLY_DATA
    if (!HasAnyFlags(RF_BeginDestroyed) && IsValid(DoorMesh))
    {
        ApplyPreviewTransform(bPreviewOpenInEditor);
    }
#    endif
}

void ADoorActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

#    if WITH_EDITORONLY_DATA
    static const FName NAME_bPreviewOpenInEditor = GET_MEMBER_NAME_CHECKED(ADoorActor, bPreviewOpenInEditor);

    if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == NAME_bPreviewOpenInEditor)
    {
        if (!HasAnyFlags(RF_BeginDestroyed) && IsValid(DoorMesh))
        {
            Modify();
            DoorMesh->Modify();
            ApplyPreviewTransform(bPreviewOpenInEditor);
        }
    }
#    endif
}
#endif
