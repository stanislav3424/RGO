// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UW_Pause.generated.h"

class UButton;

/**
 * 
 */
UCLASS()
class RGO_API UUW_Pause : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual bool Initialize() override;
    virtual void NativeConstruct() override;

protected:
    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UButton* ResumeButton;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UButton* RestartButton;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UButton* MainMenuButton;

    UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
    UButton* QuitButton;

protected:
    UFUNCTION()
    void OnResumeClicked();

    UFUNCTION()
    void OnRestartClicked();

    UFUNCTION()
    void OnMainMenuClicked();

    UFUNCTION()
    void OnQuitClicked();
};
