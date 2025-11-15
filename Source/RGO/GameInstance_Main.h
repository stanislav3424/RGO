#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstance_Main.generated.h"

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

UCLASS()
class RGO_API UGameInstance_Main : public UGameInstance
{
    GENERATED_BODY()

public:
    virtual void Init() override;

    void MergedRowsInit();

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data", meta = (AllowPrivateAccess = "true"))
    TArray<UDataTable*> DataTables;

    UPROPERTY()
    TMap<FName, FBaseItemRow> MergedRowsByRowName;

    UPROPERTY()
    TMap<TSubclassOf<AActor>, FBaseItemRow> MergedRowsByActorClass;

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
    FBaseItemRow GetItemRowByActorClass(TSubclassOf<AActor> ActorClass) const;

    UFUNCTION(BlueprintCallable, Category = "Data")
    FName GetRowNameByActorClass(TSubclassOf<AActor> ActorClass) const;

    UFUNCTION(BlueprintCallable, Category = "Data")
    bool AutomaticActivation(AActor* Actor);
};
