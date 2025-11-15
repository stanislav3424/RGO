// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemLogic.generated.h"

UCLASS(Blueprintable)
class RGO_API UItemLogic : public UObject
{
    GENERATED_BODY()

    // ItemLogic
protected:
    UPROPERTY(BlueprintReadOnly, Category = "ItemLogic")
    bool bIsInitialized = false;

    UPROPERTY(BlueprintReadOnly, Category = "ItemLogic")
    bool bIsActive = false;

    UPROPERTY(BlueprintReadOnly, Category = "ItemLogic")
    FName ItemName;

public:
    UItemLogic();

    void         InitializeName(FName const& SetItemName);
    virtual void Initialize();
    virtual void Tick(float DeltaTime);
    virtual void Shutdown();

protected:
    virtual void CheckField();

    // OwnerActor
protected:
    UPROPERTY(BlueprintReadOnly, Category = "OwnerActor")
    TSubclassOf<AActor> OwnerActorClass;

    UPROPERTY(BlueprintReadOnly, Category = "OwnerActor")
    AActor* OwnerActor;

public:
    UFUNCTION(BlueprintCallable, Category = "OwnerActor")
    virtual AActor* SpawnOwnerActor(
        FTransform const& Transform, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod =
                                         ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

    UFUNCTION(BlueprintCallable, Category = "OwnerActor")
    bool SetOwnerActor(AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "OwnerActor")
    virtual void DestroyOwnerActor();

    UFUNCTION(BlueprintCallable, Category = "OwnerActor")
    virtual void SetOwnerActorLocation(FVector const& NewLocation);

    UFUNCTION(BlueprintCallable, Category = "OwnerActor")
    virtual void SetOwnerActorTransform(FTransform const& NewTransform);

    UFUNCTION(BlueprintCallable, Category = "OwnerActor")
    AActor* GetOwnerActor() const { return OwnerActor; }

protected:
    virtual void UpdateOwnerActor(AActor* Actor);

    // Health
protected:
    UPROPERTY(BlueprintReadOnly, Category = "Health")
    float MaxHealth = 100.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Health")
    float CurrentHealth = 100.0f;

    UPROPERTY(BlueprintReadOnly, Category = "Health")
    bool bCanTakeDamage = false;

    UPROPERTY(BlueprintReadOnly, Category = "Health")
    bool bIsDead = false;

public:
    UFUNCTION()
    virtual void HandleOwnerDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
        AController* InstigatedBy, AActor* DamageCauser);

    UFUNCTION(BlueprintCallable, Category = "Health")
    float GetCurrentHealth() const { return CurrentHealth; }

    UFUNCTION(BlueprintCallable, Category = "Health")
    float GetMaxHealth() const { return MaxHealth; }

    UFUNCTION(BlueprintCallable, Category = "Health")
    bool GetCanTakeDamage() const { return bCanTakeDamage; }

    UFUNCTION(BlueprintCallable, Category = "Health")
    void SetCanTakeDamage(bool bNewCanTakeDamage) { bCanTakeDamage = bNewCanTakeDamage; }

private:
    void BindToActorEvents();
    void UnbindFromActorEvents();

protected:
    virtual void ProcessDamage(float DamageAmount, AActor* DamageCauser);
    virtual void HandleDeath();

    // Create
public:
    template <class ClassType> static ClassType* CreateAndInitialize(UWorld* World)
    {
        ClassType* NewItem = NewObject<ClassType>(World);
        if (NewItem)
            NewItem->Initialize();
        return NewItem;
    }

    template <class ClassType>
    static ClassType* CreateAndSpawnActor(UWorld* World, const FTransform& Transform,
        ESpawnActorCollisionHandlingMethod SpawnMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn)
    {
        ClassType* NewItem = CreateAndInitialize<ClassType>(World);
        if (NewItem && World)
            NewItem->SpawnOwnerActor(World, Transform, SpawnMethod);
        return NewItem;
    }

    void Attachment(FTransform const& AttachmentTransform, USceneComponent* ParentComponent, FName const& SocketName,
        FAttachmentTransformRules const& AttachmentTransformRules);
};
