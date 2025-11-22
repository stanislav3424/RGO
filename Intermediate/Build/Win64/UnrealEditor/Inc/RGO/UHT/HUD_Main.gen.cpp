// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/HUD_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHUD_Main() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
RGO_API UClass* Z_Construct_UClass_AHUD_Main();
RGO_API UClass* Z_Construct_UClass_AHUD_Main_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHUD_Main Function AddUserWidget *****************************************
struct Z_Construct_UFunction_AHUD_Main_AddUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Main_AddUserWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHUD_Main, nullptr, "AddUserWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_AddUserWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Main_AddUserWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHUD_Main_AddUserWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Main_AddUserWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHUD_Main::execAddUserWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUserWidget();
	P_NATIVE_END;
}
// ********** End Class AHUD_Main Function AddUserWidget *******************************************

// ********** Begin Class AHUD_Main Function GameHasEnded ******************************************
struct Z_Construct_UFunction_AHUD_Main_GameHasEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Main_GameHasEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHUD_Main, nullptr, "GameHasEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_GameHasEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Main_GameHasEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHUD_Main_GameHasEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Main_GameHasEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHUD_Main::execGameHasEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameHasEnded();
	P_NATIVE_END;
}
// ********** End Class AHUD_Main Function GameHasEnded ********************************************

// ********** Begin Class AHUD_Main Function OnGameEndDelayComplete ********************************
struct Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHUD_Main, nullptr, "OnGameEndDelayComplete", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHUD_Main::execOnGameEndDelayComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameEndDelayComplete();
	P_NATIVE_END;
}
// ********** End Class AHUD_Main Function OnGameEndDelayComplete **********************************

// ********** Begin Class AHUD_Main Function TogglePauseWidget *************************************
struct Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics
{
	struct HUD_Main_eventTogglePauseWidget_Parms
	{
		bool bShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((HUD_Main_eventTogglePauseWidget_Parms*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HUD_Main_eventTogglePauseWidget_Parms), &Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::NewProp_bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHUD_Main, nullptr, "TogglePauseWidget", Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::HUD_Main_eventTogglePauseWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::HUD_Main_eventTogglePauseWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHUD_Main_TogglePauseWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Main_TogglePauseWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHUD_Main::execTogglePauseWidget)
{
	P_GET_UBOOL(Z_Param_bShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePauseWidget(Z_Param_bShow);
	P_NATIVE_END;
}
// ********** End Class AHUD_Main Function TogglePauseWidget ***************************************

// ********** Begin Class AHUD_Main ****************************************************************
void AHUD_Main::StaticRegisterNativesAHUD_Main()
{
	UClass* Class = AHUD_Main::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddUserWidget", &AHUD_Main::execAddUserWidget },
		{ "GameHasEnded", &AHUD_Main::execGameHasEnded },
		{ "OnGameEndDelayComplete", &AHUD_Main::execOnGameEndDelayComplete },
		{ "TogglePauseWidget", &AHUD_Main::execTogglePauseWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHUD_Main;
UClass* AHUD_Main::GetPrivateStaticClass()
{
	using TClass = AHUD_Main;
	if (!Z_Registration_Info_UClass_AHUD_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HUD_Main"),
			Z_Registration_Info_UClass_AHUD_Main.InnerSingleton,
			StaticRegisterNativesAHUD_Main,
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
	return Z_Registration_Info_UClass_AHUD_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_AHUD_Main_NoRegister()
{
	return AHUD_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHUD_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Main.h" },
		{ "ModuleRelativePath", "HUD_Main.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_Widget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUD_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHUD_Main_AddUserWidget, "AddUserWidget" }, // 3290752311
		{ &Z_Construct_UFunction_AHUD_Main_GameHasEnded, "GameHasEnded" }, // 1642674582
		{ &Z_Construct_UFunction_AHUD_Main_OnGameEndDelayComplete, "OnGameEndDelayComplete" }, // 2815267340
		{ &Z_Construct_UFunction_AHUD_Main_TogglePauseWidget, "TogglePauseWidget" }, // 3551941984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_PauseWidgetClass = { "PauseWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, PauseWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseWidgetClass_MetaData), NewProp_PauseWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_PauseWidget = { "PauseWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, PauseWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseWidget_MetaData), NewProp_PauseWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_HUD_WidgetClass = { "HUD_WidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, HUD_WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_WidgetClass_MetaData), NewProp_HUD_WidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Main_Statics::NewProp_HUD_Widget = { "HUD_Widget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Main, HUD_Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_Widget_MetaData), NewProp_HUD_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_PauseWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_PauseWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_HUD_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Main_Statics::NewProp_HUD_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHUD_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Main_Statics::ClassParams = {
	&AHUD_Main::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHUD_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHUD_Main()
{
	if (!Z_Registration_Info_UClass_AHUD_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHUD_Main.OuterSingleton, Z_Construct_UClass_AHUD_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHUD_Main.OuterSingleton;
}
AHUD_Main::AHUD_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Main);
AHUD_Main::~AHUD_Main() {}
// ********** End Class AHUD_Main ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHUD_Main, AHUD_Main::StaticClass, TEXT("AHUD_Main"), &Z_Registration_Info_UClass_AHUD_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_Main), 4115090840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h__Script_RGO_3217580765(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_HUD_Main_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
