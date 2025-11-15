// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemLogicInterface.generated.h"

class UItemLogic;

UINTERFACE(MinimalAPI)
class UItemLogicInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class RGO_API IItemLogicInterface
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemLogic")
    UItemLogic* GetItemLogic();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemLogic")
    void SetItemLogic(UItemLogic* NewItemLogic);
};
