// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/CharacterLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
RGO_API UClass* Z_Construct_UClass_UCharacterLogic();
RGO_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister();
RGO_API UClass* Z_Construct_UClass_UItemLogic();
RGO_API UClass* Z_Construct_UClass_UItemLogic_NoRegister();
RGO_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();
RGO_API UEnum* Z_Construct_UEnum_RGO_EEquipmentSlot();
RGO_API UEnum* Z_Construct_UEnum_RGO_EMovementState();
RGO_API UEnum* Z_Construct_UEnum_RGO_ETypeMovementState();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMovementState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
static UEnum* EMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RGO_EMovementState, (UObject*)Z_Construct_UPackage__Script_RGO(), TEXT("EMovementState"));
	}
	return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
}
template<> RGO_API UEnum* StaticEnum<EMovementState>()
{
	return EMovementState_StaticEnum();
}
struct Z_Construct_UEnum_RGO_EMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EMovementState::Idle" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
		{ "Run.DisplayName", "Run" },
		{ "Run.Name", "EMovementState::Run" },
		{ "Walk.DisplayName", "Walk" },
		{ "Walk.Name", "EMovementState::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementState::Idle", (int64)EMovementState::Idle },
		{ "EMovementState::Walk", (int64)EMovementState::Walk },
		{ "EMovementState::Run", (int64)EMovementState::Run },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RGO_EMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RGO,
	nullptr,
	"EMovementState",
	"EMovementState",
	Z_Construct_UEnum_RGO_EMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RGO_EMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RGO_EMovementState()
{
	if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_RGO_EMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
}
// ********** End Enum EMovementState **************************************************************

// ********** Begin Enum ETypeMovementState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeMovementState;
static UEnum* ETypeMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETypeMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETypeMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RGO_ETypeMovementState, (UObject*)Z_Construct_UPackage__Script_RGO(), TEXT("ETypeMovementState"));
	}
	return Z_Registration_Info_UEnum_ETypeMovementState.OuterSingleton;
}
template<> RGO_API UEnum* StaticEnum<ETypeMovementState>()
{
	return ETypeMovementState_StaticEnum();
}
struct Z_Construct_UEnum_RGO_ETypeMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "ETypeMovementState::Rifle" },
		{ "Unarmed.DisplayName", "Unarmed" },
		{ "Unarmed.Name", "ETypeMovementState::Unarmed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETypeMovementState::Unarmed", (int64)ETypeMovementState::Unarmed },
		{ "ETypeMovementState::Rifle", (int64)ETypeMovementState::Rifle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RGO_ETypeMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RGO,
	nullptr,
	"ETypeMovementState",
	"ETypeMovementState",
	Z_Construct_UEnum_RGO_ETypeMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_ETypeMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_ETypeMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RGO_ETypeMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RGO_ETypeMovementState()
{
	if (!Z_Registration_Info_UEnum_ETypeMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeMovementState.InnerSingleton, Z_Construct_UEnum_RGO_ETypeMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETypeMovementState.InnerSingleton;
}
// ********** End Enum ETypeMovementState **********************************************************

// ********** Begin Class UCharacterLogic Function CommandReloadWeapon *****************************
struct Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics
{
	struct CharacterLogic_eventCommandReloadWeapon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterLogic_eventCommandReloadWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterLogic_eventCommandReloadWeapon_Parms), &Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "CommandReloadWeapon", Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::CharacterLogic_eventCommandReloadWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::CharacterLogic_eventCommandReloadWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execCommandReloadWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CommandReloadWeapon();
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function CommandReloadWeapon *******************************

// ********** Begin Class UCharacterLogic Function CommandShootCompleted ***************************
struct Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics
{
	struct CharacterLogic_eventCommandShootCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterLogic_eventCommandShootCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterLogic_eventCommandShootCompleted_Parms), &Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "CommandShootCompleted", Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::CharacterLogic_eventCommandShootCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::CharacterLogic_eventCommandShootCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execCommandShootCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CommandShootCompleted();
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function CommandShootCompleted *****************************

// ********** Begin Class UCharacterLogic Function CommandShootStarted *****************************
struct Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics
{
	struct CharacterLogic_eventCommandShootStarted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterLogic_eventCommandShootStarted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterLogic_eventCommandShootStarted_Parms), &Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "CommandShootStarted", Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::CharacterLogic_eventCommandShootStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::CharacterLogic_eventCommandShootStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_CommandShootStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_CommandShootStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execCommandShootStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CommandShootStarted();
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function CommandShootStarted *******************************

// ********** Begin Class UCharacterLogic Function EquipItem ***************************************
struct Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics
{
	struct CharacterLogic_eventEquipItem_Parms
	{
		UItemLogic* ItemLogic;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemLogic;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::NewProp_ItemLogic = { "ItemLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterLogic_eventEquipItem_Parms, ItemLogic), Z_Construct_UClass_UItemLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterLogic_eventEquipItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterLogic_eventEquipItem_Parms), &Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::NewProp_ItemLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "EquipItem", Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::CharacterLogic_eventEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::CharacterLogic_eventEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_EquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_EquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execEquipItem)
{
	P_GET_OBJECT(UItemLogic,Z_Param_ItemLogic);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EquipItem(Z_Param_ItemLogic);
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function EquipItem *****************************************

// ********** Begin Class UCharacterLogic Function GetItemInSlot ***********************************
struct Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics
{
	struct CharacterLogic_eventGetItemInSlot_Parms
	{
		EEquipmentSlot Slot;
		UWeaponLogic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterLogic_eventGetItemInSlot_Parms, Slot), Z_Construct_UEnum_RGO_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 3863326411
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterLogic_eventGetItemInSlot_Parms, ReturnValue), Z_Construct_UClass_UWeaponLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::NewProp_Slot_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "GetItemInSlot", Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::CharacterLogic_eventGetItemInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::CharacterLogic_eventGetItemInSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_GetItemInSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_GetItemInSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execGetItemInSlot)
{
	P_GET_ENUM(EEquipmentSlot,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWeaponLogic**)Z_Param__Result=P_THIS->GetItemInSlot(EEquipmentSlot(Z_Param_Slot));
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function GetItemInSlot *************************************

// ********** Begin Class UCharacterLogic Function GetMovementState ********************************
struct Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics
{
	struct CharacterLogic_eventGetMovementState_Parms
	{
		EMovementState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterLogic_eventGetMovementState_Parms, ReturnValue), Z_Construct_UEnum_RGO_EMovementState, METADATA_PARAMS(0, nullptr) }; // 412683830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "GetMovementState", Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::CharacterLogic_eventGetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::CharacterLogic_eventGetMovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_GetMovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_GetMovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execGetMovementState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovementState*)Z_Param__Result=P_THIS->GetMovementState();
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function GetMovementState **********************************

// ********** Begin Class UCharacterLogic Function GetTypeMovementState ****************************
struct Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics
{
	struct CharacterLogic_eventGetTypeMovementState_Parms
	{
		ETypeMovementState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterLogic_eventGetTypeMovementState_Parms, ReturnValue), Z_Construct_UEnum_RGO_ETypeMovementState, METADATA_PARAMS(0, nullptr) }; // 1163939612
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "GetTypeMovementState", Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::CharacterLogic_eventGetTypeMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::CharacterLogic_eventGetTypeMovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execGetTypeMovementState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETypeMovementState*)Z_Param__Result=P_THIS->GetTypeMovementState();
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function GetTypeMovementState ******************************

// ********** Begin Class UCharacterLogic Function HandleRunInput **********************************
struct Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics
{
	struct CharacterLogic_eventHandleRunInput_Parms
	{
		bool bWantsToRun;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWantsToRun_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToRun;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::NewProp_bWantsToRun_SetBit(void* Obj)
{
	((CharacterLogic_eventHandleRunInput_Parms*)Obj)->bWantsToRun = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::NewProp_bWantsToRun = { "bWantsToRun", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterLogic_eventHandleRunInput_Parms), &Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::NewProp_bWantsToRun_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::NewProp_bWantsToRun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "HandleRunInput", Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::CharacterLogic_eventHandleRunInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::CharacterLogic_eventHandleRunInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_HandleRunInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_HandleRunInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execHandleRunInput)
{
	P_GET_UBOOL(Z_Param_bWantsToRun);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRunInput(Z_Param_bWantsToRun);
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function HandleRunInput ************************************

// ********** Begin Class UCharacterLogic Function TakeOffItem *************************************
struct Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics
{
	struct CharacterLogic_eventTakeOffItem_Parms
	{
		UWeaponLogic* WeaponLogic;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponLogic;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::NewProp_WeaponLogic = { "WeaponLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterLogic_eventTakeOffItem_Parms, WeaponLogic), Z_Construct_UClass_UWeaponLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterLogic_eventTakeOffItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterLogic_eventTakeOffItem_Parms), &Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::NewProp_WeaponLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterLogic, nullptr, "TakeOffItem", Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::CharacterLogic_eventTakeOffItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::CharacterLogic_eventTakeOffItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterLogic_TakeOffItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterLogic_TakeOffItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterLogic::execTakeOffItem)
{
	P_GET_OBJECT(UWeaponLogic,Z_Param_WeaponLogic);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TakeOffItem(Z_Param_WeaponLogic);
	P_NATIVE_END;
}
// ********** End Class UCharacterLogic Function TakeOffItem ***************************************

// ********** Begin Class UCharacterLogic **********************************************************
void UCharacterLogic::StaticRegisterNativesUCharacterLogic()
{
	UClass* Class = UCharacterLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CommandReloadWeapon", &UCharacterLogic::execCommandReloadWeapon },
		{ "CommandShootCompleted", &UCharacterLogic::execCommandShootCompleted },
		{ "CommandShootStarted", &UCharacterLogic::execCommandShootStarted },
		{ "EquipItem", &UCharacterLogic::execEquipItem },
		{ "GetItemInSlot", &UCharacterLogic::execGetItemInSlot },
		{ "GetMovementState", &UCharacterLogic::execGetMovementState },
		{ "GetTypeMovementState", &UCharacterLogic::execGetTypeMovementState },
		{ "HandleRunInput", &UCharacterLogic::execHandleRunInput },
		{ "TakeOffItem", &UCharacterLogic::execTakeOffItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterLogic;
UClass* UCharacterLogic::GetPrivateStaticClass()
{
	using TClass = UCharacterLogic;
	if (!Z_Registration_Info_UClass_UCharacterLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterLogic"),
			Z_Registration_Info_UClass_UCharacterLogic.InnerSingleton,
			StaticRegisterNativesUCharacterLogic,
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
	return Z_Registration_Info_UClass_UCharacterLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterLogic_NoRegister()
{
	return UCharacterLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunInput_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeMovementState_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDrainRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinStaminaToRun_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CharacterLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementComponent;
	static void NewProp_bIsRunInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunInput;
	static void NewProp_bIsMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMove;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeMovementState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDrainRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStaminaToRun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Equipment_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Equipment_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterLogic_CommandReloadWeapon, "CommandReloadWeapon" }, // 3684059600
		{ &Z_Construct_UFunction_UCharacterLogic_CommandShootCompleted, "CommandShootCompleted" }, // 2761801932
		{ &Z_Construct_UFunction_UCharacterLogic_CommandShootStarted, "CommandShootStarted" }, // 1091571187
		{ &Z_Construct_UFunction_UCharacterLogic_EquipItem, "EquipItem" }, // 1928794031
		{ &Z_Construct_UFunction_UCharacterLogic_GetItemInSlot, "GetItemInSlot" }, // 1265149041
		{ &Z_Construct_UFunction_UCharacterLogic_GetMovementState, "GetMovementState" }, // 4206907882
		{ &Z_Construct_UFunction_UCharacterLogic_GetTypeMovementState, "GetTypeMovementState" }, // 3945210810
		{ &Z_Construct_UFunction_UCharacterLogic_HandleRunInput, "HandleRunInput" }, // 1439331942
		{ &Z_Construct_UFunction_UCharacterLogic_TakeOffItem, "TakeOffItem" }, // 1723955678
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_CharacterMovementComponent = { "CharacterMovementComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, CharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovementComponent_MetaData), NewProp_CharacterMovementComponent_MetaData) };
void Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsRunInput_SetBit(void* Obj)
{
	((UCharacterLogic*)Obj)->bIsRunInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsRunInput = { "bIsRunInput", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterLogic), &Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsRunInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunInput_MetaData), NewProp_bIsRunInput_MetaData) };
void Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsMove_SetBit(void* Obj)
{
	((UCharacterLogic*)Obj)->bIsMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsMove = { "bIsMove", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterLogic), &Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMove_MetaData), NewProp_bIsMove_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, MovementState), Z_Construct_UEnum_RGO_EMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) }; // 412683830
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_TypeMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_TypeMovementState = { "TypeMovementState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, TypeMovementState), Z_Construct_UEnum_RGO_ETypeMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeMovementState_MetaData), NewProp_TypeMovementState_MetaData) }; // 1163939612
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_StaminaDrainRate = { "StaminaDrainRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, StaminaDrainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDrainRate_MetaData), NewProp_StaminaDrainRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MinStaminaToRun = { "MinStaminaToRun", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, MinStaminaToRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinStaminaToRun_MetaData), NewProp_MinStaminaToRun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment_ValueProp = { "Equipment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWeaponLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment_Key_KeyProp = { "Equipment_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RGO_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 3863326411
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterLogic, Equipment), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) }; // 3863326411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_CharacterMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsRunInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_bIsMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_TypeMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_TypeMovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_StaminaDrainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_MinStaminaToRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterLogic_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterLogic_Statics::ClassParams = {
	&UCharacterLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterLogic()
{
	if (!Z_Registration_Info_UClass_UCharacterLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterLogic.OuterSingleton, Z_Construct_UClass_UCharacterLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterLogic.OuterSingleton;
}
UCharacterLogic::UCharacterLogic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterLogic);
UCharacterLogic::~UCharacterLogic() {}
// ********** End Class UCharacterLogic ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h__Script_RGO_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 412683830U) },
		{ ETypeMovementState_StaticEnum, TEXT("ETypeMovementState"), &Z_Registration_Info_UEnum_ETypeMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1163939612U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterLogic, UCharacterLogic::StaticClass, TEXT("UCharacterLogic"), &Z_Registration_Info_UClass_UCharacterLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterLogic), 4233989716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h__Script_RGO_2927494231(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h__Script_RGO_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CharacterLogic_h__Script_RGO_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
