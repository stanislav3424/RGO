// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/ItemLogic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemLogic() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
RGO_API UClass* Z_Construct_UClass_UItemLogic();
RGO_API UClass* Z_Construct_UClass_UItemLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemLogic Function DestroyOwnerActor ************************************
struct Z_Construct_UFunction_UItemLogic_DestroyOwnerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_DestroyOwnerActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "DestroyOwnerActor", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_DestroyOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_DestroyOwnerActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UItemLogic_DestroyOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_DestroyOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execDestroyOwnerActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyOwnerActor();
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function DestroyOwnerActor **************************************

// ********** Begin Class UItemLogic Function GetCanTakeDamage *************************************
struct Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics
{
	struct ItemLogic_eventGetCanTakeDamage_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemLogic_eventGetCanTakeDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemLogic_eventGetCanTakeDamage_Parms), &Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "GetCanTakeDamage", Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::ItemLogic_eventGetCanTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::ItemLogic_eventGetCanTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_GetCanTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_GetCanTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execGetCanTakeDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCanTakeDamage();
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function GetCanTakeDamage ***************************************

// ********** Begin Class UItemLogic Function GetCurrentHealth *************************************
struct Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics
{
	struct ItemLogic_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "GetCurrentHealth", Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::ItemLogic_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::ItemLogic_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function GetCurrentHealth ***************************************

// ********** Begin Class UItemLogic Function GetMaxHealth *****************************************
struct Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics
{
	struct ItemLogic_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "GetMaxHealth", Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::ItemLogic_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::ItemLogic_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function GetMaxHealth *******************************************

// ********** Begin Class UItemLogic Function GetOwnerActor ****************************************
struct Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics
{
	struct ItemLogic_eventGetOwnerActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventGetOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "GetOwnerActor", Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::ItemLogic_eventGetOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::ItemLogic_eventGetOwnerActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_GetOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_GetOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execGetOwnerActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwnerActor();
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function GetOwnerActor ******************************************

// ********** Begin Class UItemLogic Function HandleOwnerDamage ************************************
struct Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics
{
	struct ItemLogic_eventHandleOwnerDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventHandleOwnerDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventHandleOwnerDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventHandleOwnerDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventHandleOwnerDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventHandleOwnerDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "HandleOwnerDamage", Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::ItemLogic_eventHandleOwnerDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::ItemLogic_eventHandleOwnerDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_HandleOwnerDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_HandleOwnerDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execHandleOwnerDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOwnerDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function HandleOwnerDamage **************************************

// ********** Begin Class UItemLogic Function SetCanTakeDamage *************************************
struct Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics
{
	struct ItemLogic_eventSetCanTakeDamage_Parms
	{
		bool bNewCanTakeDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewCanTakeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCanTakeDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::NewProp_bNewCanTakeDamage_SetBit(void* Obj)
{
	((ItemLogic_eventSetCanTakeDamage_Parms*)Obj)->bNewCanTakeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::NewProp_bNewCanTakeDamage = { "bNewCanTakeDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemLogic_eventSetCanTakeDamage_Parms), &Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::NewProp_bNewCanTakeDamage_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::NewProp_bNewCanTakeDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "SetCanTakeDamage", Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::ItemLogic_eventSetCanTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::ItemLogic_eventSetCanTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_SetCanTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_SetCanTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execSetCanTakeDamage)
{
	P_GET_UBOOL(Z_Param_bNewCanTakeDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCanTakeDamage(Z_Param_bNewCanTakeDamage);
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function SetCanTakeDamage ***************************************

// ********** Begin Class UItemLogic Function SetOwnerActor ****************************************
struct Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics
{
	struct ItemLogic_eventSetOwnerActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventSetOwnerActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemLogic_eventSetOwnerActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemLogic_eventSetOwnerActor_Parms), &Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "SetOwnerActor", Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::ItemLogic_eventSetOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::ItemLogic_eventSetOwnerActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_SetOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_SetOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execSetOwnerActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOwnerActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function SetOwnerActor ******************************************

// ********** Begin Class UItemLogic Function SetOwnerActorLocation ********************************
struct Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics
{
	struct ItemLogic_eventSetOwnerActorLocation_Parms
	{
		FVector NewLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventSetOwnerActorLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLocation_MetaData), NewProp_NewLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::NewProp_NewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "SetOwnerActorLocation", Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::ItemLogic_eventSetOwnerActorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::ItemLogic_eventSetOwnerActorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execSetOwnerActorLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwnerActorLocation(Z_Param_Out_NewLocation);
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function SetOwnerActorLocation **********************************

// ********** Begin Class UItemLogic Function SetOwnerActorTransform *******************************
struct Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics
{
	struct ItemLogic_eventSetOwnerActorTransform_Parms
	{
		FTransform NewTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventSetOwnerActorTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "SetOwnerActorTransform", Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::ItemLogic_eventSetOwnerActorTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::ItemLogic_eventSetOwnerActorTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execSetOwnerActorTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwnerActorTransform(Z_Param_Out_NewTransform);
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function SetOwnerActorTransform *********************************

// ********** Begin Class UItemLogic Function SpawnOwnerActor **************************************
struct Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics
{
	struct ItemLogic_eventSpawnOwnerActor_Parms
	{
		FTransform Transform;
		ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OwnerActor" },
		{ "CPP_Default_SpawnActorCollisionHandlingMethod", "AlwaysSpawn" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnActorCollisionHandlingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnActorCollisionHandlingMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventSpawnOwnerActor_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_SpawnActorCollisionHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_SpawnActorCollisionHandlingMethod = { "SpawnActorCollisionHandlingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventSpawnOwnerActor_Parms, SpawnActorCollisionHandlingMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 2749820453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogic_eventSpawnOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_SpawnActorCollisionHandlingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_SpawnActorCollisionHandlingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogic, nullptr, "SpawnOwnerActor", Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::ItemLogic_eventSpawnOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::ItemLogic_eventSpawnOwnerActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogic_SpawnOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogic_SpawnOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemLogic::execSpawnOwnerActor)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_SpawnActorCollisionHandlingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->SpawnOwnerActor(Z_Param_Out_Transform,ESpawnActorCollisionHandlingMethod(Z_Param_SpawnActorCollisionHandlingMethod));
	P_NATIVE_END;
}
// ********** End Class UItemLogic Function SpawnOwnerActor ****************************************

// ********** Begin Class UItemLogic ***************************************************************
void UItemLogic::StaticRegisterNativesUItemLogic()
{
	UClass* Class = UItemLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyOwnerActor", &UItemLogic::execDestroyOwnerActor },
		{ "GetCanTakeDamage", &UItemLogic::execGetCanTakeDamage },
		{ "GetCurrentHealth", &UItemLogic::execGetCurrentHealth },
		{ "GetMaxHealth", &UItemLogic::execGetMaxHealth },
		{ "GetOwnerActor", &UItemLogic::execGetOwnerActor },
		{ "HandleOwnerDamage", &UItemLogic::execHandleOwnerDamage },
		{ "SetCanTakeDamage", &UItemLogic::execSetCanTakeDamage },
		{ "SetOwnerActor", &UItemLogic::execSetOwnerActor },
		{ "SetOwnerActorLocation", &UItemLogic::execSetOwnerActorLocation },
		{ "SetOwnerActorTransform", &UItemLogic::execSetOwnerActorTransform },
		{ "SpawnOwnerActor", &UItemLogic::execSpawnOwnerActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemLogic;
UClass* UItemLogic::GetPrivateStaticClass()
{
	using TClass = UItemLogic;
	if (!Z_Registration_Info_UClass_UItemLogic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemLogic"),
			Z_Registration_Info_UClass_UItemLogic.InnerSingleton,
			StaticRegisterNativesUItemLogic,
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
	return Z_Registration_Info_UClass_UItemLogic.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemLogic_NoRegister()
{
	return UItemLogic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[] = {
		{ "Category", "ItemLogic" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "ItemLogic" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemLogic" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActorClass_MetaData[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActor_MetaData[] = {
		{ "Category", "OwnerActor" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanTakeDamage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ItemLogic.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OwnerActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static void NewProp_bCanTakeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanTakeDamage;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemLogic_DestroyOwnerActor, "DestroyOwnerActor" }, // 294081003
		{ &Z_Construct_UFunction_UItemLogic_GetCanTakeDamage, "GetCanTakeDamage" }, // 942187170
		{ &Z_Construct_UFunction_UItemLogic_GetCurrentHealth, "GetCurrentHealth" }, // 3641810078
		{ &Z_Construct_UFunction_UItemLogic_GetMaxHealth, "GetMaxHealth" }, // 1046121947
		{ &Z_Construct_UFunction_UItemLogic_GetOwnerActor, "GetOwnerActor" }, // 1906966606
		{ &Z_Construct_UFunction_UItemLogic_HandleOwnerDamage, "HandleOwnerDamage" }, // 308306357
		{ &Z_Construct_UFunction_UItemLogic_SetCanTakeDamage, "SetCanTakeDamage" }, // 1195122719
		{ &Z_Construct_UFunction_UItemLogic_SetOwnerActor, "SetOwnerActor" }, // 3716887479
		{ &Z_Construct_UFunction_UItemLogic_SetOwnerActorLocation, "SetOwnerActorLocation" }, // 3294065404
		{ &Z_Construct_UFunction_UItemLogic_SetOwnerActorTransform, "SetOwnerActorTransform" }, // 612825476
		{ &Z_Construct_UFunction_UItemLogic_SpawnOwnerActor, "SpawnOwnerActor" }, // 121984478
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
{
	((UItemLogic*)Obj)->bIsInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemLogic), &Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitialized_MetaData), NewProp_bIsInitialized_MetaData) };
void Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((UItemLogic*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemLogic), &Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemLogic, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_OwnerActorClass = { "OwnerActorClass", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemLogic, OwnerActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActorClass_MetaData), NewProp_OwnerActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemLogic, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActor_MetaData), NewProp_OwnerActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemLogic, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemLogic, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
void Z_Construct_UClass_UItemLogic_Statics::NewProp_bCanTakeDamage_SetBit(void* Obj)
{
	((UItemLogic*)Obj)->bCanTakeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_bCanTakeDamage = { "bCanTakeDamage", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemLogic), &Z_Construct_UClass_UItemLogic_Statics::NewProp_bCanTakeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanTakeDamage_MetaData), NewProp_bCanTakeDamage_MetaData) };
void Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UItemLogic*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemLogic), &Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_OwnerActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_OwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_bCanTakeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemLogic_Statics::NewProp_bIsDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemLogic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemLogic_Statics::ClassParams = {
	&UItemLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemLogic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemLogic_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemLogic()
{
	if (!Z_Registration_Info_UClass_UItemLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemLogic.OuterSingleton, Z_Construct_UClass_UItemLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemLogic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemLogic);
UItemLogic::~UItemLogic() {}
// ********** End Class UItemLogic *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemLogic, UItemLogic::StaticClass, TEXT("UItemLogic"), &Z_Registration_Info_UClass_UItemLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemLogic), 2874921326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h__Script_RGO_2560713091(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogic_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
