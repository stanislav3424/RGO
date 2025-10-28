// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/CPP_Actor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_Actor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RGO_API UClass* Z_Construct_UClass_ACPP_Actor();
RGO_API UClass* Z_Construct_UClass_ACPP_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_Actor Function SinMovement ******************************************
struct Z_Construct_UFunction_ACPP_Actor_SinMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SinMovement" },
		{ "ModuleRelativePath", "CPP_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Actor_SinMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_Actor, nullptr, "SinMovement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Actor_SinMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Actor_SinMovement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_Actor_SinMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Actor_SinMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_Actor::execSinMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SinMovement();
	P_NATIVE_END;
}
// ********** End Class ACPP_Actor Function SinMovement ********************************************

// ********** Begin Class ACPP_Actor ***************************************************************
void ACPP_Actor::StaticRegisterNativesACPP_Actor()
{
	UClass* Class = ACPP_Actor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SinMovement", &ACPP_Actor::execSinMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_Actor;
UClass* ACPP_Actor::GetPrivateStaticClass()
{
	using TClass = ACPP_Actor;
	if (!Z_Registration_Info_UClass_ACPP_Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_Actor"),
			Z_Registration_Info_UClass_ACPP_Actor.InnerSingleton,
			StaticRegisterNativesACPP_Actor,
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
	return Z_Registration_Info_UClass_ACPP_Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_Actor_NoRegister()
{
	return ACPP_Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Actor.h" },
		{ "ModuleRelativePath", "CPP_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "CPP_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyNum_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "CPP_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "SinMovement" },
		{ "ModuleRelativePath", "CPP_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "SinMovement" },
		{ "ModuleRelativePath", "CPP_Actor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EnemyNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Actor_SinMovement, "SinMovement" }, // 2182165661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACPP_Actor_Statics::NewProp_bIsAlive_SetBit(void* Obj)
{
	((ACPP_Actor*)Obj)->bIsAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Actor_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPP_Actor), &Z_Construct_UClass_ACPP_Actor_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAlive_MetaData), NewProp_bIsAlive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_Actor_Statics::NewProp_EnemyNum = { "EnemyNum", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Actor, EnemyNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyNum_MetaData), NewProp_EnemyNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Actor_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Actor, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Actor_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Actor, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Actor_Statics::NewProp_bIsAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Actor_Statics::NewProp_EnemyNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Actor_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Actor_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Actor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Actor_Statics::ClassParams = {
	&ACPP_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Actor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_Actor()
{
	if (!Z_Registration_Info_UClass_ACPP_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Actor.OuterSingleton, Z_Construct_UClass_ACPP_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_Actor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Actor);
ACPP_Actor::~ACPP_Actor() {}
// ********** End Class ACPP_Actor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Actor, ACPP_Actor::StaticClass, TEXT("ACPP_Actor"), &Z_Registration_Info_UClass_ACPP_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Actor), 1505610927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h__Script_RGO_1453480184(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_CPP_Actor_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
