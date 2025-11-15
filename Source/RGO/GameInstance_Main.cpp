#include "GameInstance_Main.h"
#include "ItemLogic.h"
#include "Macros.h"
#include "ItemLogicInterface.h"

void UGameInstance_Main::Init()
{
    Super::Init();
    MergedRowsInit();
}

void UGameInstance_Main::MergedRowsInit()
{
    MergedRowsByRowName.Empty();
    MergedRowsByActorClass.Empty();

    for (UDataTable* DataTable : DataTables)
    {
        if (!DataTable)
            continue;
        const TMap<FName, uint8*>& RowMap = DataTable->GetRowMap();
        for (const auto& Pair : RowMap)
        {
            if (!DataTable->RowStruct)
                continue;
            FBaseItemRow BaseItemRow;
            DataTable->RowStruct->CopyScriptStruct(&BaseItemRow, Pair.Value);
            MergedRowsByRowName.Add(Pair.Key, BaseItemRow);

            if (BaseItemRow.ActorClass)
                MergedRowsByActorClass.Add(BaseItemRow.ActorClass, BaseItemRow);
        }
    }
}

FBaseItemRow UGameInstance_Main::GetItemRow(FName const& RowName) const
{
    const FBaseItemRow* BaseItemRow = MergedRowsByRowName.Find(RowName);
    if (BaseItemRow)
        return *BaseItemRow;
    return FBaseItemRow{};
}

UItemLogic* UGameInstance_Main::CreateItemLogic(FName const& RowName)
{
    if (const auto BaseItemRow = MergedRowsByRowName.Find(RowName))
        if (auto ItemLogicClass = BaseItemRow->ItemLogicClass)
            if (auto ItemLogic = NewObject<UItemLogic>(this, ItemLogicClass))
            {
                ItemLogic->InitializeName(RowName);
                return ItemLogic;
            }
    return nullptr;
}

AActor* UGameInstance_Main::SpawnActor(FName const& RowName, FTransform const& SpawnTransform,
    ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod)
{
        if (auto ItemLogic = CreateItemLogic(RowName))
            return ItemLogic->SpawnOwnerActor(SpawnTransform, SpawnActorCollisionHandlingMethod);
    return nullptr;
}

FBaseItemRow UGameInstance_Main::GetItemRowByActorClass(TSubclassOf<AActor> ActorClass) const
{
    if (ActorClass)
    {
        const FBaseItemRow* BaseItemRow = MergedRowsByActorClass.Find(ActorClass);
        if (BaseItemRow)
            return *BaseItemRow;
    }
    return FBaseItemRow{};
}

FName UGameInstance_Main::GetRowNameByActorClass(TSubclassOf<AActor> ActorClass) const
{
    if (ActorClass)
        for (const auto& Pair : MergedRowsByRowName)
            if (Pair.Value.ActorClass == ActorClass)
                return Pair.Key;
    return NAME_None;
}

bool UGameInstance_Main::AutomaticActivation(AActor* Actor)
{
    if (IsValid(Actor) && Actor->Implements<UItemLogicInterface>())
    {
        auto Name = GetRowNameByActorClass(Actor->GetClass());
        if (auto ItemLogic = CreateItemLogic(Name))
            return ItemLogic->SetOwnerActor(Actor);
    }

    return false;
}
