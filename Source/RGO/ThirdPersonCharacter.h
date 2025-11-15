// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ItemLogicInterface.h"
#include "ThirdPersonCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UCharacterLogic;

UCLASS()
class RGO_API AThirdPersonCharacter : public ACharacter, public IItemLogicInterface
{
    GENERATED_BODY()

public:
    AThirdPersonCharacter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // ItemLogicInterface
public:
    virtual UItemLogic* GetItemLogic_Implementation() override;
    virtual void        SetItemLogic_Implementation(UItemLogic* NewItemLogic) override;

private:
    UPROPERTY()
    UCharacterLogic* CharacterLogic;

    //

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* SpringArmComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
    UCameraComponent* CameraComponent;

public:
    USpringArmComponent* GetSpringArmComponent() { return SpringArmComponent; };

    // Active
private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Active", meta = (AllowPrivateAccess = "true"))
    bool bIsAutoActive = false;

    UPROPERTY(BlueprintReadOnly, Category = "Active", meta = (AllowPrivateAccess = "true"))
    bool bIsActive = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Active")
    void AutomaticActivation();
    
};
