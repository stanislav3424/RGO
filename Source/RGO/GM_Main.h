// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_Main.generated.h"

class UItemLogic;

UCLASS()
class RGO_API AGM_Main : public AGameMode
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

    UFUNCTION()
    void PlayerDead(UItemLogic* ItemLogic) { PlayerGameEnded(); }

    UFUNCTION()
    void OnItemLogicDeath(UItemLogic* ItemLogic);

    UFUNCTION(BlueprintCallable, Category = "Scoring")
    void RegisterItemLogic(UItemLogic* ItemLogic);

    UFUNCTION(BlueprintCallable, Category = "Scoring")
    int32 GetPlayerScore() const { return PlayerScore; }

    UFUNCTION(BlueprintCallable, Category = "Scoring")
    void ResetPlayerScore();

    UFUNCTION(BlueprintCallable, Category = "Timer")
    float GetGameDuration() const { return DurationGameEndTimer; }

    UFUNCTION(BlueprintCallable, Category = "Timer")
    float GetGameElapsedTime() const;

    UFUNCTION(BlueprintCallable, Category = "Timer")
    float GetGameRemainingTime() const;

private:
    UPROPERTY()
    FTimerHandle GameEndTimerHandle;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DurationGame", meta = (AllowPrivateAccess = "true"))
    float DurationGameEndTimer = 15.f;

    double GameStartTimeSeconds = 0.0;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scoring", meta = (AllowPrivateAccess = "true"))
    int32 PlayerScore = 0;

    UPROPERTY()
    TArray<TWeakObjectPtr<UItemLogic>> RegisteredLogics;

    UFUNCTION()
    void StartGameEndTimerHandle();

    UFUNCTION()
    void OnTimerComplete();

    UFUNCTION()
    void PlayerGameEnded();
};