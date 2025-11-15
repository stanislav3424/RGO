// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/GameInstance_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameInstance_Main() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
RGO_API UClass* Z_Construct_UClass_UGameInstance_Main();
RGO_API UClass* Z_Construct_UClass_UGameInstance_Main_NoRegister();
RGO_API UClass* Z_Construct_UClass_UItemLogic_NoRegister();
RGO_API UScriptStruct* Z_Construct_UScriptStruct_FBaseItemRow();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBaseItemRow ******************************************************
static_assert(std::is_polymorphic<FBaseItemRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBaseItemRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBaseItemRow;
class UScriptStruct* FBaseItemRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBaseItemRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBaseItemRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseItemRow, (UObject*)Z_Construct_UPackage__Script_RGO(), TEXT("BaseItemRow"));
	}
	return Z_Registration_Info_UScriptStruct_FBaseItemRow.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBaseItemRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemLogicClass_MetaData[] = {
		{ "Category", "BaseItemRow" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "BaseItemRow" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemLogicClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseItemRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBaseItemRow_Statics::NewProp_ItemLogicClass = { "ItemLogicClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseItemRow, ItemLogicClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemLogicClass_MetaData), NewProp_ItemLogicClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBaseItemRow_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseItemRow, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseItemRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseItemRow_Statics::NewProp_ItemLogicClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseItemRow_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItemRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseItemRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"BaseItemRow",
	Z_Construct_UScriptStruct_FBaseItemRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItemRow_Statics::PropPointers),
	sizeof(FBaseItemRow),
	alignof(FBaseItemRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseItemRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseItemRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBaseItemRow()
{
	if (!Z_Registration_Info_UScriptStruct_FBaseItemRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBaseItemRow.InnerSingleton, Z_Construct_UScriptStruct_FBaseItemRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBaseItemRow.InnerSingleton;
}
// ********** End ScriptStruct FBaseItemRow ********************************************************

// ********** Begin Class UGameInstance_Main Function AutomaticActivation **************************
struct Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics
{
	struct GameInstance_Main_eventAutomaticActivation_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventAutomaticActivation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameInstance_Main_eventAutomaticActivation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameInstance_Main_eventAutomaticActivation_Parms), &Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameInstance_Main, nullptr, "AutomaticActivation", Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::GameInstance_Main_eventAutomaticActivation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::GameInstance_Main_eventAutomaticActivation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance_Main::execAutomaticActivation)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AutomaticActivation(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UGameInstance_Main Function AutomaticActivation ****************************

// ********** Begin Class UGameInstance_Main Function CreateItemLogic ******************************
struct Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics
{
	struct GameInstance_Main_eventCreateItemLogic_Parms
	{
		FName RowName;
		UItemLogic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventCreateItemLogic_Parms, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventCreateItemLogic_Parms, ReturnValue), Z_Construct_UClass_UItemLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameInstance_Main, nullptr, "CreateItemLogic", Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::GameInstance_Main_eventCreateItemLogic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::GameInstance_Main_eventCreateItemLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance_Main::execCreateItemLogic)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemLogic**)Z_Param__Result=P_THIS->CreateItemLogic(Z_Param_Out_RowName);
	P_NATIVE_END;
}
// ********** End Class UGameInstance_Main Function CreateItemLogic ********************************

// ********** Begin Class UGameInstance_Main Function GetItemRow ***********************************
struct Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics
{
	struct GameInstance_Main_eventGetItemRow_Parms
	{
		FName RowName;
		FBaseItemRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventGetItemRow_Parms, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventGetItemRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FBaseItemRow, METADATA_PARAMS(0, nullptr) }; // 1430687692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameInstance_Main, nullptr, "GetItemRow", Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::GameInstance_Main_eventGetItemRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::GameInstance_Main_eventGetItemRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_Main_GetItemRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_Main_GetItemRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance_Main::execGetItemRow)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBaseItemRow*)Z_Param__Result=P_THIS->GetItemRow(Z_Param_Out_RowName);
	P_NATIVE_END;
}
// ********** End Class UGameInstance_Main Function GetItemRow *************************************

// ********** Begin Class UGameInstance_Main Function GetItemRowByActorClass ***********************
struct Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics
{
	struct GameInstance_Main_eventGetItemRowByActorClass_Parms
	{
		TSubclassOf<AActor> ActorClass;
		FBaseItemRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventGetItemRowByActorClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventGetItemRowByActorClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FBaseItemRow, METADATA_PARAMS(0, nullptr) }; // 1430687692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameInstance_Main, nullptr, "GetItemRowByActorClass", Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::GameInstance_Main_eventGetItemRowByActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::GameInstance_Main_eventGetItemRowByActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance_Main::execGetItemRowByActorClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBaseItemRow*)Z_Param__Result=P_THIS->GetItemRowByActorClass(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UGameInstance_Main Function GetItemRowByActorClass *************************

// ********** Begin Class UGameInstance_Main Function GetRowNameByActorClass ***********************
struct Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics
{
	struct GameInstance_Main_eventGetRowNameByActorClass_Parms
	{
		TSubclassOf<AActor> ActorClass;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventGetRowNameByActorClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventGetRowNameByActorClass_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameInstance_Main, nullptr, "GetRowNameByActorClass", Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::GameInstance_Main_eventGetRowNameByActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::GameInstance_Main_eventGetRowNameByActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance_Main::execGetRowNameByActorClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRowNameByActorClass(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UGameInstance_Main Function GetRowNameByActorClass *************************

// ********** Begin Class UGameInstance_Main Function SpawnActor ***********************************
struct Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics
{
	struct GameInstance_Main_eventSpawnActor_Parms
	{
		FName RowName;
		FTransform SpawnTransform;
		ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "CPP_Default_SpawnActorCollisionHandlingMethod", "AlwaysSpawn" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnActorCollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnActorCollisionHandlingMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventSpawnActor_Parms, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventSpawnActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_SpawnActorCollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_SpawnActorCollisionHandlingMethod = { "SpawnActorCollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventSpawnActor_Parms, SpawnActorCollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 2749820453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_Main_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_SpawnActorCollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_SpawnActorCollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameInstance_Main, nullptr, "SpawnActor", Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::GameInstance_Main_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::GameInstance_Main_eventSpawnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_Main_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_Main_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance_Main::execSpawnActor)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_SpawnActorCollisionHandlingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnActor(Z_Param_Out_RowName,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_SpawnActorCollisionHandlingMethod));
	P_NATIVE_END;
}
// ********** End Class UGameInstance_Main Function SpawnActor *************************************

// ********** Begin Class UGameInstance_Main *******************************************************
void UGameInstance_Main::StaticRegisterNativesUGameInstance_Main()
{
	UClass* Class = UGameInstance_Main::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutomaticActivation", &UGameInstance_Main::execAutomaticActivation },
		{ "CreateItemLogic", &UGameInstance_Main::execCreateItemLogic },
		{ "GetItemRow", &UGameInstance_Main::execGetItemRow },
		{ "GetItemRowByActorClass", &UGameInstance_Main::execGetItemRowByActorClass },
		{ "GetRowNameByActorClass", &UGameInstance_Main::execGetRowNameByActorClass },
		{ "SpawnActor", &UGameInstance_Main::execSpawnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameInstance_Main;
UClass* UGameInstance_Main::GetPrivateStaticClass()
{
	using TClass = UGameInstance_Main;
	if (!Z_Registration_Info_UClass_UGameInstance_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameInstance_Main"),
			Z_Registration_Info_UClass_UGameInstance_Main.InnerSingleton,
			StaticRegisterNativesUGameInstance_Main,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGameInstance_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameInstance_Main_NoRegister()
{
	return UGameInstance_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameInstance_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameInstance_Main.h" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTables_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedRowsByRowName_MetaData[] = {
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedRowsByActorClass_MetaData[] = {
		{ "ModuleRelativePath", "GameInstance_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataTables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergedRowsByRowName_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MergedRowsByRowName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MergedRowsByRowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergedRowsByActorClass_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MergedRowsByActorClass_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MergedRowsByActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameInstance_Main_AutomaticActivation, "AutomaticActivation" }, // 1508390112
		{ &Z_Construct_UFunction_UGameInstance_Main_CreateItemLogic, "CreateItemLogic" }, // 1424004101
		{ &Z_Construct_UFunction_UGameInstance_Main_GetItemRow, "GetItemRow" }, // 3564682212
		{ &Z_Construct_UFunction_UGameInstance_Main_GetItemRowByActorClass, "GetItemRowByActorClass" }, // 4100284490
		{ &Z_Construct_UFunction_UGameInstance_Main_GetRowNameByActorClass, "GetRowNameByActorClass" }, // 3186948155
		{ &Z_Construct_UFunction_UGameInstance_Main_SpawnActor, "SpawnActor" }, // 2576748353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstance_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_DataTables_Inner = { "DataTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_DataTables = { "DataTables", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance_Main, DataTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTables_MetaData), NewProp_DataTables_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByRowName_ValueProp = { "MergedRowsByRowName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBaseItemRow, METADATA_PARAMS(0, nullptr) }; // 1430687692
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByRowName_Key_KeyProp = { "MergedRowsByRowName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByRowName = { "MergedRowsByRowName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance_Main, MergedRowsByRowName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedRowsByRowName_MetaData), NewProp_MergedRowsByRowName_MetaData) }; // 1430687692
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByActorClass_ValueProp = { "MergedRowsByActorClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBaseItemRow, METADATA_PARAMS(0, nullptr) }; // 1430687692
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByActorClass_Key_KeyProp = { "MergedRowsByActorClass_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByActorClass = { "MergedRowsByActorClass", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance_Main, MergedRowsByActorClass), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedRowsByActorClass_MetaData), NewProp_MergedRowsByActorClass_MetaData) }; // 1430687692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstance_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_DataTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_DataTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByRowName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByRowName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByActorClass_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByActorClass_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Main_Statics::NewProp_MergedRowsByActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameInstance_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstance_Main_Statics::ClassParams = {
	&UGameInstance_Main::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameInstance_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Main_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstance_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstance_Main()
{
	if (!Z_Registration_Info_UClass_UGameInstance_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstance_Main.OuterSingleton, Z_Construct_UClass_UGameInstance_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstance_Main.OuterSingleton;
}
UGameInstance_Main::UGameInstance_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstance_Main);
UGameInstance_Main::~UGameInstance_Main() {}
// ********** End Class UGameInstance_Main *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h__Script_RGO_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBaseItemRow::StaticStruct, Z_Construct_UScriptStruct_FBaseItemRow_Statics::NewStructOps, TEXT("BaseItemRow"), &Z_Registration_Info_UScriptStruct_FBaseItemRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseItemRow), 1430687692U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstance_Main, UGameInstance_Main::StaticClass, TEXT("UGameInstance_Main"), &Z_Registration_Info_UClass_UGameInstance_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstance_Main), 2522631818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h__Script_RGO_4003599968(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h__Script_RGO_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h__Script_RGO_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GameInstance_Main_h__Script_RGO_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
