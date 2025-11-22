// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RGO_API UFunctionLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    template <typename TEnum>
    static FName GetSocketNameFromEnum(TEnum SocketType)
    {
        return FName(StaticEnum<TEnum>()->GetNameStringByValue((int64)SocketType));
    }

    template <typename TEnum>
    static FTransform GetSocketTransformFromEnum(TEnum SocketType, USkeletalMeshComponent* MeshComponent)
    {
        if (!MeshComponent)
            return FTransform::Identity;

        FName SocketName = GetSocketNameFromEnum<TEnum>(SocketType);
        return MeshComponent->GetSocketTransform(SocketName);
    }
};
