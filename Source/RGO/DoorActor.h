// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "DoorActor.generated.h"

/**
 * 
 */
UCLASS()
class RGO_API ADoorActor : public ABaseActor
{
    GENERATED_BODY()

public:
    ADoorActor();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "DoorPreview")
    UStaticMeshComponent* DoorMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "DoorPreview")
    USceneComponent* ClosedPoint;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "DoorPreview")
    USceneComponent* OpenPoint;

public:
    UFUNCTION(BlueprintCallable, Category = "DoorPreview")
    UStaticMeshComponent* GetDoorMesh() const { return DoorMesh; }

    UFUNCTION(BlueprintCallable, Category = "DoorPreview")
    FTransform GetClosedPointTransform() const;

    UFUNCTION(BlueprintCallable, Category = "DoorPreview")
    FTransform GetOpenPointTransform() const;

protected:
    virtual void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    virtual void PostInitProperties() override;
#endif
    virtual void OnConstruction(const FTransform& Transform) override;

#if WITH_EDITORONLY_DATA
    UPROPERTY(EditAnywhere, Category = "DoorPreview")
    bool bPreviewOpenInEditor = false;
#endif

private:
    void ApplyPreviewTransform(bool bOpen);
};