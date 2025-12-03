#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstance_Main.generated.h"

template <typename T>
concept FTableRowDerived = std::is_base_of_v<FTableRowBase, T>;

class UItemLogic;
class AActor;

USTRUCT(BlueprintType)
struct FBaseItemRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UItemLogic> ItemLogicClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AActor> ActorClass;
};

USTRUCT(BlueprintType)
struct FWeaponItemRow : public FBaseItemRow
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Damage = 1.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxAmmo = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 RateFire = 100;

};

UCLASS()
class RGO_API UGameInstance_Main : public UGameInstance
{
    GENERATED_BODY()

public:
    virtual void Init() override;

    UFUNCTION(BlueprintCallable, Category = "Data")
    void MergedRowsInit();

private:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data", meta = (AllowPrivateAccess = "true"))
    TArray<UDataTable*> DataTables;

    UPROPERTY()
    TMap<FName, FBaseItemRow> MergedRowsByRowName;

    UPROPERTY()
    TMap<UClass*, FName> ActorClassToRowName;

    UPROPERTY()
    TMap<UClass*, FName> ActorClassLookupCache;

    TMap<FName, const uint8*> RowRawDataByName;
    TMap<FName, UScriptStruct*> RowStructByName;

public:
    UFUNCTION(BlueprintCallable, Category = "Data")
    FBaseItemRow GetItemRow(FName const& RowName) const;

    UFUNCTION(BlueprintCallable, Category = "Item")
    UItemLogic* CreateItemLogic(FName const& RowName);

    UFUNCTION(BlueprintCallable, Category = "Item")
    AActor* SpawnActor(FName const& RowName, FTransform const& SpawnTransform,
        ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod =
            ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

    UFUNCTION(BlueprintCallable, Category = "Data")
    FBaseItemRow GetItemRowByActorClass(TSubclassOf<AActor> ActorClass);

    UFUNCTION(BlueprintCallable, Category = "Data")
    FName GetRowNameByActorClass(TSubclassOf<AActor> ActorClass);

    UFUNCTION(BlueprintCallable, Category = "Data")
    bool AutomaticActivation(AActor* Actor);

    template <FTableRowDerived TypeRow> TypeRow GetItemRowTyped(FName const& RowName) const
    {
        if (const uint8* const* RawPtr = RowRawDataByName.Find(RowName))
        {
            UScriptStruct* Stored = RowStructByName.FindRef(RowName);
            if (Stored && Stored == TypeRow::StaticStruct())
            {
                TypeRow Result;
                Stored->CopyScriptStruct(&Result, *RawPtr);
                return Result;
            }
            UE_LOG(LogTemp, Error, TEXT("[%s] Row '%s' type mismatch or missing struct. Stored=%s Requested=%s"),
                *FString(__FUNCTION__), *RowName.ToString(), Stored ? *Stored->GetName() : TEXT("null"),
                *TypeRow::StaticStruct()->GetName());
            return TypeRow{};
        }

        UE_LOG(LogTemp, Error, TEXT("[%s] Row '%s' not found in cache."), *FString(__FUNCTION__), *RowName.ToString());
        return TypeRow{};
    }
};