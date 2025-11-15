// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/WeaponLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponLogic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
RGO_API UClass* Z_Construct_UClass_UItemLogic();
RGO_API UClass* Z_Construct_UClass_UWeaponLogic();
RGO_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();
RGO_API UEnum* Z_Construct_UEnum_RGO_EEquipmentSlot();
RGO_API UEnum* Z_Construct_UEnum_RGO_EGanSlot();
RGO_API UEnum* Z_Construct_UEnum_RGO_EWeaponState();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEquipmentSlot ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlot;
static UEnum* EEquipmentSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RGO_EEquipmentSlot, (UObject*)Z_Construct_UPackage__Script_RGO(), TEXT("EEquipmentSlot"));
	}
	return Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton;
}
template<> RGO_API UEnum* StaticEnum<EEquipmentSlot>()
{
	return EEquipmentSlot_StaticEnum();
}
struct Z_Construct_UEnum_RGO_EEquipmentSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
		{ "RHand.DisplayName", "RHand" },
		{ "RHand.Name", "EEquipmentSlot::RHand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEquipmentSlot::RHand", (int64)EEquipmentSlot::RHand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RGO_EEquipmentSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RGO,
	nullptr,
	"EEquipmentSlot",
	"EEquipmentSlot",
	Z_Construct_UEnum_RGO_EEquipmentSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EEquipmentSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EEquipmentSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RGO_EEquipmentSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RGO_EEquipmentSlot()
{
	if (!Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton, Z_Construct_UEnum_RGO_EEquipmentSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton;
}
// ********** End Enum EEquipmentSlot **************************************************************

// ********** Begin Enum EGanSlot ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGanSlot;
static UEnum* EGanSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGanSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGanSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RGO_EGanSlot, (UObject*)Z_Construct_UPackage__Script_RGO(), TEXT("EGanSlot"));
	}
	return Z_Registration_Info_UEnum_EGanSlot.OuterSingleton;
}
template<> RGO_API UEnum* StaticEnum<EGanSlot>()
{
	return EGanSlot_StaticEnum();
}
struct Z_Construct_UEnum_RGO_EGanSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
		{ "Muzzle.DisplayName", "Muzzle" },
		{ "Muzzle.Name", "EGanSlot::Muzzle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGanSlot::Muzzle", (int64)EGanSlot::Muzzle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RGO_EGanSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RGO,
	nullptr,
	"EGanSlot",
	"EGanSlot",
	Z_Construct_UEnum_RGO_EGanSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EGanSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EGanSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RGO_EGanSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RGO_EGanSlot()
{
	if (!Z_Registration_Info_UEnum_EGanSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGanSlot.InnerSingleton, Z_Construct_UEnum_RGO_EGanSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGanSlot.InnerSingleton;
}
// ********** End Enum EGanSlot ********************************************************************

// ********** Begin Enum EWeaponState **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponState;
static UEnum* EWeaponState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RGO_EWeaponState, (UObject*)Z_Construct_UPackage__Script_RGO(), TEXT("EWeaponState"));
	}
	return Z_Registration_Info_UEnum_EWeaponState.OuterSingleton;
}
template<> RGO_API UEnum* StaticEnum<EWeaponState>()
{
	return EWeaponState_StaticEnum();
}
struct Z_Construct_UEnum_RGO_EWeaponState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EWeaponState::Idle" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
		{ "Reloading.DisplayName", "Reloading" },
		{ "Reloading.Name", "EWeaponState::Reloading" },
		{ "Shooting.DisplayName", "Shooting" },
		{ "Shooting.Name", "EWeaponState::Shooting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponState::Idle", (int64)EWeaponState::Idle },
		{ "EWeaponState::Shooting", (int64)EWeaponState::Shooting },
		{ "EWeaponState::Reloading", (int64)EWeaponState::Reloading },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RGO_EWeaponState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RGO,
	nullptr,
	"EWeaponState",
	"EWeaponState",
	Z_Construct_UEnum_RGO_EWeaponState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EWeaponState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RGO_EWeaponState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RGO_EWeaponState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RGO_EWeaponState()
{
	if (!Z_Registration_Info_UEnum_EWeaponState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponState.InnerSingleton, Z_Construct_UEnum_RGO_EWeaponState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponState.InnerSingleton;
}
// ********** End Enum EWeaponState ****************************************************************

// ********** Begin Class UWeaponLogic Function CanReload ******************************************
struct Z_Construct_UFunction_UWeaponLogic_CanReload_Statics
{
	struct WeaponLogic_eventCanReload_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventCanReload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventCanReload_Parms), &Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "CanReload", Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::WeaponLogic_eventCanReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::WeaponLogic_eventCanReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_CanReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_CanReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execCanReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanReload();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function CanReload ********************************************

// ********** Begin Class UWeaponLogic Function CanShoot *******************************************
struct Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics
{
	struct WeaponLogic_eventCanShoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventCanShoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventCanShoot_Parms), &Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "CanShoot", Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::WeaponLogic_eventCanShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::WeaponLogic_eventCanShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_CanShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_CanShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execCanShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanShoot();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function CanShoot *********************************************

// ********** Begin Class UWeaponLogic Function GetCurrentAmmo *************************************
struct Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics
{
	struct WeaponLogic_eventGetCurrentAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponLogic_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "GetCurrentAmmo", Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::WeaponLogic_eventGetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::WeaponLogic_eventGetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execGetCurrentAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function GetCurrentAmmo ***************************************

// ********** Begin Class UWeaponLogic Function GetEquipmentSlot ***********************************
struct Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics
{
	struct WeaponLogic_eventGetEquipmentSlot_Parms
	{
		EEquipmentSlot ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponLogic_eventGetEquipmentSlot_Parms, ReturnValue), Z_Construct_UEnum_RGO_EEquipmentSlot, METADATA_PARAMS(0, nullptr) }; // 3863326411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "GetEquipmentSlot", Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::WeaponLogic_eventGetEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::WeaponLogic_eventGetEquipmentSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execGetEquipmentSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EEquipmentSlot*)Z_Param__Result=P_THIS->GetEquipmentSlot();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function GetEquipmentSlot *************************************

// ********** Begin Class UWeaponLogic Function GetIsInputBlocked **********************************
struct Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics
{
	struct WeaponLogic_eventGetIsInputBlocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon State" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventGetIsInputBlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventGetIsInputBlocked_Parms), &Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "GetIsInputBlocked", Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::WeaponLogic_eventGetIsInputBlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::WeaponLogic_eventGetIsInputBlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execGetIsInputBlocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsInputBlocked();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function GetIsInputBlocked ************************************

// ********** Begin Class UWeaponLogic Function GetIsShooting **************************************
struct Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics
{
	struct WeaponLogic_eventGetIsShooting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventGetIsShooting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventGetIsShooting_Parms), &Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "GetIsShooting", Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::WeaponLogic_eventGetIsShooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::WeaponLogic_eventGetIsShooting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_GetIsShooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_GetIsShooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execGetIsShooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsShooting();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function GetIsShooting ****************************************

// ********** Begin Class UWeaponLogic Function GetMaxAmmo *****************************************
struct Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics
{
	struct WeaponLogic_eventGetMaxAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponLogic_eventGetMaxAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "GetMaxAmmo", Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::WeaponLogic_eventGetMaxAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::WeaponLogic_eventGetMaxAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execGetMaxAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxAmmo();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function GetMaxAmmo *******************************************

// ********** Begin Class UWeaponLogic Function GetWeaponState *************************************
struct Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics
{
	struct WeaponLogic_eventGetWeaponState_Parms
	{
		EWeaponState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon State" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponLogic_eventGetWeaponState_Parms, ReturnValue), Z_Construct_UEnum_RGO_EWeaponState, METADATA_PARAMS(0, nullptr) }; // 2332532949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "GetWeaponState", Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::WeaponLogic_eventGetWeaponState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::WeaponLogic_eventGetWeaponState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_GetWeaponState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_GetWeaponState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execGetWeaponState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWeaponState*)Z_Param__Result=P_THIS->GetWeaponState();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function GetWeaponState ***************************************

// ********** Begin Class UWeaponLogic Function PerformShoot ***************************************
struct Z_Construct_UFunction_UWeaponLogic_PerformShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_PerformShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "PerformShoot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_PerformShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_PerformShoot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponLogic_PerformShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_PerformShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execPerformShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformShoot();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function PerformShoot *****************************************

// ********** Begin Class UWeaponLogic Function ReloadWeapon ***************************************
struct Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics
{
	struct WeaponLogic_eventReloadWeapon_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventReloadWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventReloadWeapon_Parms), &Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "ReloadWeapon", Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::WeaponLogic_eventReloadWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::WeaponLogic_eventReloadWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_ReloadWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_ReloadWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execReloadWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReloadWeapon();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function ReloadWeapon *****************************************

// ********** Begin Class UWeaponLogic Function ShootCompleted *************************************
struct Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics
{
	struct WeaponLogic_eventShootCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventShootCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventShootCompleted_Parms), &Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "ShootCompleted", Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::WeaponLogic_eventShootCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::WeaponLogic_eventShootCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_ShootCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_ShootCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execShootCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShootCompleted();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function ShootCompleted ***************************************

// ********** Begin Class UWeaponLogic Function ShootStarted ***************************************
struct Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics
{
	struct WeaponLogic_eventShootStarted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponLogic_eventShootStarted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponLogic_eventShootStarted_Parms), &Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponLogic, nullptr, "ShootStarted", Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::WeaponLogic_eventShootStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::WeaponLogic_eventShootStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponLogic_ShootStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponLogic_ShootStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponLogic::execShootStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShootStarted();
	P_NATIVE_END;
}
// ********** End Class UWeaponLogic Function ShootStarted *****************************************

// ********** Begin Class UWeaponLogic *************************************************************
void UWeaponLogic::StaticRegisterNativesUWeaponLogic()
{
	UClass* Class = UWeaponLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanReload", &UWeaponLogic::execCanReload },
		{ "CanShoot", &UWeaponLogic::execCanShoot },
		{ "GetCurrentAmmo", &UWeaponLogic::execGetCurrentAmmo },
		{ "GetEquipmentSlot", &UWeaponLogic::execGetEquipmentSlot },
		{ "GetIsInputBlocked", &UWeaponLogic::execGetIsInputBlocked },
		{ "GetIsShooting", &UWeaponLogic::execGetIsShooting },
		{ "GetMaxAmmo", &UWeaponLogic::execGetMaxAmmo },
		{ "GetWeaponState", &UWeaponLogic::execGetWeaponState },
		{ "PerformShoot", &UWeaponLogic::execPerformShoot },
		{ "ReloadWeapon", &UWeaponLogic::execReloadWeapon },
		{ "ShootCompleted", &UWeaponLogic::execShootCompleted },
		{ "ShootStarted", &UWeaponLogic::execShootStarted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponLogic;
UClass* UWeaponLogic::GetPrivateStaticClass()
{
	using TClass = UWeaponLogic;
	if (!Z_Registration_Info_UClass_UWeaponLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponLogic"),
			Z_Registration_Info_UClass_UWeaponLogic.InnerSingleton,
			StaticRegisterNativesUWeaponLogic,
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
	return Z_Registration_Info_UClass_UWeaponLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponLogic_NoRegister()
{
	return UWeaponLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentParent_MetaData[] = {
		{ "Category", "ItemLogic" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponState_MetaData[] = {
		{ "Category", "Weapon State" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInputBlocked_MetaData[] = {
		{ "Category", "Weapon State" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReload_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoReloadDelay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "WeaponLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAnimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentWeaponState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentWeaponState;
	static void NewProp_bIsInputBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInputBlocked;
	static void NewProp_bAutoReload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReload;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoReloadDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponLogic_CanReload, "CanReload" }, // 866232182
		{ &Z_Construct_UFunction_UWeaponLogic_CanShoot, "CanShoot" }, // 85757900
		{ &Z_Construct_UFunction_UWeaponLogic_GetCurrentAmmo, "GetCurrentAmmo" }, // 3122674371
		{ &Z_Construct_UFunction_UWeaponLogic_GetEquipmentSlot, "GetEquipmentSlot" }, // 1139524663
		{ &Z_Construct_UFunction_UWeaponLogic_GetIsInputBlocked, "GetIsInputBlocked" }, // 1823648501
		{ &Z_Construct_UFunction_UWeaponLogic_GetIsShooting, "GetIsShooting" }, // 3331537494
		{ &Z_Construct_UFunction_UWeaponLogic_GetMaxAmmo, "GetMaxAmmo" }, // 3538389106
		{ &Z_Construct_UFunction_UWeaponLogic_GetWeaponState, "GetWeaponState" }, // 2621161795
		{ &Z_Construct_UFunction_UWeaponLogic_PerformShoot, "PerformShoot" }, // 5451023
		{ &Z_Construct_UFunction_UWeaponLogic_ReloadWeapon, "ReloadWeapon" }, // 1862707822
		{ &Z_Construct_UFunction_UWeaponLogic_ShootCompleted, "ShootCompleted" }, // 596539593
		{ &Z_Construct_UFunction_UWeaponLogic_ShootStarted, "ShootStarted" }, // 463296326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_AttachmentParent = { "AttachmentParent", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, AttachmentParent), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachmentParent_MetaData), NewProp_AttachmentParent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ShootAnimMontage = { "ShootAnimMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, ShootAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootAnimMontage_MetaData), NewProp_ShootAnimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ReloadAnimMontage = { "ReloadAnimMontage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, ReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadAnimMontage_MetaData), NewProp_ReloadAnimMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_CurrentWeaponState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_CurrentWeaponState = { "CurrentWeaponState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, CurrentWeaponState), Z_Construct_UEnum_RGO_EWeaponState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponState_MetaData), NewProp_CurrentWeaponState_MetaData) }; // 2332532949
void Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bIsInputBlocked_SetBit(void* Obj)
{
	((UWeaponLogic*)Obj)->bIsInputBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bIsInputBlocked = { "bIsInputBlocked", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponLogic), &Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bIsInputBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInputBlocked_MetaData), NewProp_bIsInputBlocked_MetaData) };
void Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bAutoReload_SetBit(void* Obj)
{
	((UWeaponLogic*)Obj)->bAutoReload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bAutoReload = { "bAutoReload", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponLogic), &Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bAutoReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReload_MetaData), NewProp_bAutoReload_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponLogic_Statics::NewProp_AutoReloadDelay = { "AutoReloadDelay", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponLogic, AutoReloadDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoReloadDelay_MetaData), NewProp_AutoReloadDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_AttachmentParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ShootAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_ReloadAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_CurrentWeaponState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_CurrentWeaponState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bIsInputBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_bAutoReload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLogic_Statics::NewProp_AutoReloadDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponLogic_Statics::ClassParams = {
	&UWeaponLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponLogic()
{
	if (!Z_Registration_Info_UClass_UWeaponLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponLogic.OuterSingleton, Z_Construct_UClass_UWeaponLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponLogic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponLogic);
UWeaponLogic::~UWeaponLogic() {}
// ********** End Class UWeaponLogic ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h__Script_RGO_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEquipmentSlot_StaticEnum, TEXT("EEquipmentSlot"), &Z_Registration_Info_UEnum_EEquipmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3863326411U) },
		{ EGanSlot_StaticEnum, TEXT("EGanSlot"), &Z_Registration_Info_UEnum_EGanSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4041005798U) },
		{ EWeaponState_StaticEnum, TEXT("EWeaponState"), &Z_Registration_Info_UEnum_EWeaponState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2332532949U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponLogic, UWeaponLogic::StaticClass, TEXT("UWeaponLogic"), &Z_Registration_Info_UClass_UWeaponLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponLogic), 254589347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h__Script_RGO_1521854325(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h__Script_RGO_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponLogic_h__Script_RGO_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
