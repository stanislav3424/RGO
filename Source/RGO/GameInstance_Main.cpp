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
    ActorClassToRowName.Empty();
    ActorClassLookupCache.Empty();
    RowRawDataByName.Empty();
    RowStructByName.Empty();

    int32 EstimatedCount = 0;
    for (auto DataTable : DataTables)
        if (DataTable)
            EstimatedCount += DataTable->GetRowMap().Num();

    if (EstimatedCount > 0)
    {
        MergedRowsByRowName.Reserve(EstimatedCount);
        ActorClassToRowName.Reserve(EstimatedCount);
        ActorClassLookupCache.Reserve(EstimatedCount);
        RowRawDataByName.Reserve(EstimatedCount);
        RowStructByName.Reserve(EstimatedCount);
    }

    for (auto DataTable : DataTables)
    {
        if (!DataTable)
            continue;

        const TMap<FName, uint8*>& RowMap = DataTable->GetRowMap();
        if (RowMap.Num() == 0)
            continue;

        if (!DataTable->RowStruct)
            continue;

        for (const auto& Pair : RowMap)
        {
            const FName& RowName = Pair.Key;
            const uint8* RowData = Pair.Value;
            if (!RowData)
                continue;

            FBaseItemRow TempRow;
            DataTable->RowStruct->CopyScriptStruct(&TempRow, RowData);
            MergedRowsByRowName.Emplace(RowName, MoveTemp(TempRow));

            RowRawDataByName.Add(RowName, RowData);
            RowStructByName.Add(RowName, DataTable->RowStruct);

            const FBaseItemRow* Inserted = MergedRowsByRowName.Find(RowName);
            if (Inserted && Inserted->ActorClass)
            {
                auto ActorUClass = Inserted->ActorClass.Get();
                if (ActorUClass && !ActorClassToRowName.Contains(ActorUClass))
                    ActorClassToRowName.Add(ActorUClass, RowName);
            }
        }
    }
}

FBaseItemRow UGameInstance_Main::GetItemRow(FName const& RowName) const
{
    if (const FBaseItemRow* Found = MergedRowsByRowName.Find(RowName))
        return *Found;
    return FBaseItemRow{};
}

UItemLogic* UGameInstance_Main::CreateItemLogic(FName const& RowName)
{
    const FBaseItemRow* BaseItemRow = MergedRowsByRowName.Find(RowName);
    if (!BaseItemRow)
        return nullptr;

    TSubclassOf<UItemLogic> ItemLogicClass = BaseItemRow->ItemLogicClass;
    if (!ItemLogicClass)
        return nullptr;

    auto ItemLogic = NewObject<UItemLogic>(this, ItemLogicClass);
    if (!ItemLogic)
        return nullptr;

    ItemLogic->InitializeName(RowName);
    return ItemLogic;
}

AActor* UGameInstance_Main::SpawnActor(FName const& RowName, FTransform const& SpawnTransform,
    ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod)
{
    if (auto ItemLogic = CreateItemLogic(RowName))
         return ItemLogic->SpawnOwnerActor(SpawnTransform, SpawnActorCollisionHandlingMethod);
    return nullptr;
}

FBaseItemRow UGameInstance_Main::GetItemRowByActorClass(TSubclassOf<AActor> ActorClass)
{
    FName RowName = GetRowNameByActorClass(ActorClass);
    if (RowName.IsNone())
        return FBaseItemRow{};
    return GetItemRow(RowName);
}

FName UGameInstance_Main::GetRowNameByActorClass(TSubclassOf<AActor> ActorClass)
{
    if (!ActorClass)
        return NAME_None;

    auto QueryClass = ActorClass.Get();
    if (!QueryClass)
        return NAME_None;

    if (const FName* Cached = ActorClassLookupCache.Find(QueryClass))
        return *Cached;

    auto Current = QueryClass;
    while (Current)
    {
        if (const FName* Found = ActorClassToRowName.Find(Current))
        {
            ActorClassLookupCache.Add(QueryClass, *Found);
            return *Found;
        }
        Current = Current->GetSuperClass();
    }

    ActorClassLookupCache.Add(QueryClass, NAME_None);
    return NAME_None;
}

bool UGameInstance_Main::AutomaticActivation(AActor* Actor)
{
    if (!IsValid(Actor))
        return false;

    if (!Actor->Implements<UItemLogicInterface>())
        return false;

    FName RowName = GetRowNameByActorClass(Actor->GetClass());
    if (RowName.IsNone())
    {
        UE_LOG(LogTemp, Error,
            TEXT("[%s LINE %d] Failed to get row name for Actor '%s' (Class: %s). Cannot create ItemLogic."),
            *FString(__FUNCTION__), __LINE__, *Actor->GetName(), *Actor->GetClass()->GetName());
        return false;
    }

    if (auto ItemLogic = CreateItemLogic(RowName))
        return ItemLogic->SetOwnerActor(Actor);

    return false;
}