// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ItemLogicInterface.h"
#include "BaseCharacter.generated.h"

class UCharacterLogic;

UCLASS(Abstract)
class RGO_API ABaseCharacter : public ACharacter, public IItemLogicInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;



	// ItemLogicInterface
public:
    virtual UItemLogic* GetItemLogic_Implementation() override;
    virtual void        SetItemLogic_Implementation(UItemLogic* NewItemLogic) override;

protected:
    UPROPERTY(BlueprintReadOnly, Category = "CharacterLogic")
    UCharacterLogic* CharacterLogic;

    virtual void CharacterLogicChanged() {};

	// Active
protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Active", meta = (AllowPrivateAccess = "true"))
    bool bIsAutoActive = true;

    UPROPERTY(BlueprintReadOnly, Category = "Active", meta = (AllowPrivateAccess = "true"))
    bool bIsActive = false;

public:
    UFUNCTION(BlueprintCallable, Category = "Active")
    void AutomaticActivation();
};
