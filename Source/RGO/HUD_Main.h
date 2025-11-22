// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HUD_Main.generated.h"

/**
 * 
 */
UCLASS()
class RGO_API AHUD_Main : public AHUD
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UUserWidget> PauseWidgetClass;

    UPROPERTY(BlueprintReadOnly, Category = "UI")
    UUserWidget* PauseWidget;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UUserWidget> HUD_WidgetClass;

    UPROPERTY(BlueprintReadOnly, Category = "UI")
    UUserWidget* HUD_Widget;

public:
    UFUNCTION()
    void AddUserWidget();

    UFUNCTION()
    void TogglePauseWidget(bool bShow);

    UFUNCTION()
    void GameHasEnded();

    UFUNCTION()
    void OnGameEndDelayComplete();
};
