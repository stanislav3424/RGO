// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/UW_HUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUW_HUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
RGO_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister();
RGO_API UClass* Z_Construct_UClass_UUW_HUD();
RGO_API UClass* Z_Construct_UClass_UUW_HUD_NoRegister();
RGO_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_HUD Function SetAmmo *************************************************
struct Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics
{
	struct UW_HUD_eventSetAmmo_Parms
	{
		int32 CurrentAmmo;
		int32 MaxAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSetAmmo_Parms, CurrentAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSetAmmo_Parms, MaxAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::NewProp_MaxAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_HUD, nullptr, "SetAmmo", Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::UW_HUD_eventSetAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::UW_HUD_eventSetAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_HUD_SetAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HUD_SetAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HUD::execSetAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentAmmo);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmmo(Z_Param_CurrentAmmo,Z_Param_MaxAmmo);
	P_NATIVE_END;
}
// ********** End Class UUW_HUD Function SetAmmo ***************************************************

// ********** Begin Class UUW_HUD Function SetHealth ***********************************************
struct Z_Construct_UFunction_UUW_HUD_SetHealth_Statics
{
	struct UW_HUD_eventSetHealth_Parms
	{
		float CurrentHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSetHealth_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSetHealth_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_HUD, nullptr, "SetHealth", Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::UW_HUD_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::UW_HUD_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_HUD_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HUD_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HUD::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_CurrentHealth,Z_Param_MaxHealth);
	P_NATIVE_END;
}
// ********** End Class UUW_HUD Function SetHealth *************************************************

// ********** Begin Class UUW_HUD Function SetStamina **********************************************
struct Z_Construct_UFunction_UUW_HUD_SetStamina_Statics
{
	struct UW_HUD_eventSetStamina_Parms
	{
		float CurrentStamina;
		float MaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSetStamina_Parms, CurrentStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSetStamina_Parms, MaxStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::NewProp_MaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_HUD, nullptr, "SetStamina", Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::UW_HUD_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::UW_HUD_eventSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_HUD_SetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HUD_SetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HUD::execSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentStamina);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStamina(Z_Param_CurrentStamina,Z_Param_MaxStamina);
	P_NATIVE_END;
}
// ********** End Class UUW_HUD Function SetStamina ************************************************

// ********** Begin Class UUW_HUD Function SwitchControlledPawn ************************************
struct Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics
{
	struct UW_HUD_eventSwitchControlledPawn_Parms
	{
		APawn* OldPawn;
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSwitchControlledPawn_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HUD_eventSwitchControlledPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_HUD, nullptr, "SwitchControlledPawn", Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::UW_HUD_eventSwitchControlledPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::UW_HUD_eventSwitchControlledPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HUD::execSwitchControlledPawn)
{
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchControlledPawn(Z_Param_OldPawn,Z_Param_NewPawn);
	P_NATIVE_END;
}
// ********** End Class UUW_HUD Function SwitchControlledPawn **************************************

// ********** Begin Class UUW_HUD Function UpdateWeapon ********************************************
struct Z_Construct_UFunction_UUW_HUD_UpdateWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HUD_UpdateWeapon_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUW_HUD, nullptr, "UpdateWeapon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HUD_UpdateWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HUD_UpdateWeapon_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUW_HUD_UpdateWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HUD_UpdateWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HUD::execUpdateWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWeapon();
	P_NATIVE_END;
}
// ********** End Class UUW_HUD Function UpdateWeapon **********************************************

// ********** Begin Class UUW_HUD ******************************************************************
void UUW_HUD::StaticRegisterNativesUUW_HUD()
{
	UClass* Class = UUW_HUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAmmo", &UUW_HUD::execSetAmmo },
		{ "SetHealth", &UUW_HUD::execSetHealth },
		{ "SetStamina", &UUW_HUD::execSetStamina },
		{ "SwitchControlledPawn", &UUW_HUD::execSwitchControlledPawn },
		{ "UpdateWeapon", &UUW_HUD::execUpdateWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_HUD;
UClass* UUW_HUD::GetPrivateStaticClass()
{
	using TClass = UUW_HUD;
	if (!Z_Registration_Info_UClass_UUW_HUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UW_HUD"),
			Z_Registration_Info_UClass_UUW_HUD.InnerSingleton,
			StaticRegisterNativesUUW_HUD,
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
	return Z_Registration_Info_UClass_UUW_HUD.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_HUD_NoRegister()
{
	return UUW_HUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UW_HUD.h" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLogicRef_MetaData[] = {
		{ "Category", "UW_HUD" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponLogicRef_MetaData[] = {
		{ "Category", "UW_HUD" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_HUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterLogicRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponLogicRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_HUD_SetAmmo, "SetAmmo" }, // 3099344235
		{ &Z_Construct_UFunction_UUW_HUD_SetHealth, "SetHealth" }, // 1615178887
		{ &Z_Construct_UFunction_UUW_HUD_SetStamina, "SetStamina" }, // 3519176319
		{ &Z_Construct_UFunction_UUW_HUD_SwitchControlledPawn, "SwitchControlledPawn" }, // 4215085886
		{ &Z_Construct_UFunction_UUW_HUD_UpdateWeapon, "UpdateWeapon" }, // 848191527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_CharacterLogicRef = { "CharacterLogicRef", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, CharacterLogicRef), Z_Construct_UClass_UCharacterLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLogicRef_MetaData), NewProp_CharacterLogicRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_WeaponLogicRef = { "WeaponLogicRef", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, WeaponLogicRef), Z_Construct_UClass_UWeaponLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponLogicRef_MetaData), NewProp_WeaponLogicRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthProgressBar_MetaData), NewProp_HealthProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_StaminaProgressBar = { "StaminaProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, StaminaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaProgressBar_MetaData), NewProp_StaminaProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HUD_Statics::NewProp_AmmoTextBlock = { "AmmoTextBlock", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HUD, AmmoTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoTextBlock_MetaData), NewProp_AmmoTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_HUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_CharacterLogicRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_WeaponLogicRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_HealthProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_StaminaProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HUD_Statics::NewProp_AmmoTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUW_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_HUD_Statics::ClassParams = {
	&UUW_HUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_HUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_HUD()
{
	if (!Z_Registration_Info_UClass_UUW_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_HUD.OuterSingleton, Z_Construct_UClass_UUW_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_HUD.OuterSingleton;
}
UUW_HUD::UUW_HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_HUD);
UUW_HUD::~UUW_HUD() {}
// ********** End Class UUW_HUD ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_HUD, UUW_HUD::StaticClass, TEXT("UUW_HUD"), &Z_Registration_Info_UClass_UUW_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_HUD), 3389737221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h__Script_RGO_26115365(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_HUD_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
