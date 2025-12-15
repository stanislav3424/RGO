// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "BotCharacter.generated.h"

class UWidgetComponent;

UCLASS()
class RGO_API ABotCharacter : public ABaseCharacter
{
    GENERATED_BODY()

public:
    ABotCharacter();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UI")
    UWidgetComponent* WidgetComponent;

    virtual void CharacterLogicChanged() override;

public:
    UFUNCTION()
    void OnDeath(UItemLogic* ItemLogic);
};
