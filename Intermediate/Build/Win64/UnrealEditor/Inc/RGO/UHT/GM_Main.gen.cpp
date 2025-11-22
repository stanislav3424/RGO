// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/GM_Main.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGM_Main() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
RGO_API UClass* Z_Construct_UClass_AGM_Main();
RGO_API UClass* Z_Construct_UClass_AGM_Main_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGM_Main Function OnTimerComplete ****************************************
struct Z_Construct_UFunction_AGM_Main_OnTimerComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_Main_OnTimerComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGM_Main, nullptr, "OnTimerComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Main_OnTimerComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGM_Main_OnTimerComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGM_Main_OnTimerComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGM_Main_OnTimerComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGM_Main::execOnTimerComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTimerComplete();
	P_NATIVE_END;
}
// ********** End Class AGM_Main Function OnTimerComplete ******************************************

// ********** Begin Class AGM_Main Function PlayersGameEnded ***************************************
struct Z_Construct_UFunction_AGM_Main_PlayersGameEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_Main_PlayersGameEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGM_Main, nullptr, "PlayersGameEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Main_PlayersGameEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGM_Main_PlayersGameEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGM_Main_PlayersGameEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGM_Main_PlayersGameEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGM_Main::execPlayersGameEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayersGameEnded();
	P_NATIVE_END;
}
// ********** End Class AGM_Main Function PlayersGameEnded *****************************************

// ********** Begin Class AGM_Main Function StartGameEndTimerHandle ********************************
struct Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGM_Main, nullptr, "StartGameEndTimerHandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGM_Main::execStartGameEndTimerHandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGameEndTimerHandle();
	P_NATIVE_END;
}
// ********** End Class AGM_Main Function StartGameEndTimerHandle **********************************

// ********** Begin Class AGM_Main *****************************************************************
void AGM_Main::StaticRegisterNativesAGM_Main()
{
	UClass* Class = AGM_Main::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTimerComplete", &AGM_Main::execOnTimerComplete },
		{ "PlayersGameEnded", &AGM_Main::execPlayersGameEnded },
		{ "StartGameEndTimerHandle", &AGM_Main::execStartGameEndTimerHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGM_Main;
UClass* AGM_Main::GetPrivateStaticClass()
{
	using TClass = AGM_Main;
	if (!Z_Registration_Info_UClass_AGM_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GM_Main"),
			Z_Registration_Info_UClass_AGM_Main.InnerSingleton,
			StaticRegisterNativesAGM_Main,
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
	return Z_Registration_Info_UClass_AGM_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_AGM_Main_NoRegister()
{
	return AGM_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGM_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_Main.h" },
		{ "ModuleRelativePath", "GM_Main.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameEndTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "GM_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationGameEndTimer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DurationGame" },
		{ "ModuleRelativePath", "GM_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameEndTimerHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationGameEndTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGM_Main_OnTimerComplete, "OnTimerComplete" }, // 3048130889
		{ &Z_Construct_UFunction_AGM_Main_PlayersGameEnded, "PlayersGameEnded" }, // 468956130
		{ &Z_Construct_UFunction_AGM_Main_StartGameEndTimerHandle, "StartGameEndTimerHandle" }, // 2829218736
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_GameEndTimerHandle = { "GameEndTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_Main, GameEndTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameEndTimerHandle_MetaData), NewProp_GameEndTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGM_Main_Statics::NewProp_DurationGameEndTimer = { "DurationGameEndTimer", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGM_Main, DurationGameEndTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationGameEndTimer_MetaData), NewProp_DurationGameEndTimer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_GameEndTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Main_Statics::NewProp_DurationGameEndTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGM_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_Main_Statics::ClassParams = {
	&AGM_Main::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGM_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGM_Main()
{
	if (!Z_Registration_Info_UClass_AGM_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_Main.OuterSingleton, Z_Construct_UClass_AGM_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGM_Main.OuterSingleton;
}
AGM_Main::AGM_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Main);
AGM_Main::~AGM_Main() {}
// ********** End Class AGM_Main *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GM_Main_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGM_Main, AGM_Main::StaticClass, TEXT("AGM_Main"), &Z_Registration_Info_UClass_AGM_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Main), 668927870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GM_Main_h__Script_RGO_423993406(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GM_Main_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_GM_Main_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
