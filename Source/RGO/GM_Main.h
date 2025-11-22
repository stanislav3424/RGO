// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_Main.generated.h"

/**
 * 
 */
UCLASS()
class RGO_API AGM_Main : public AGameMode
{
	GENERATED_BODY()

public:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    FTimerHandle GameEndTimerHandle;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DurationGame", meta = (AllowPrivateAccess = "true"))
    float DurationGameEndTimer = 10.f;

    UFUNCTION()
    void StartGameEndTimerHandle();

    UFUNCTION()
    void OnTimerComplete();

    UFUNCTION()
    void PlayersGameEnded();
};
