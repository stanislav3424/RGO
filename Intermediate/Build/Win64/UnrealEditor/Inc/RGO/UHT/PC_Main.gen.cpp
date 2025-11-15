// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/PC_Main.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePC_Main() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
RGO_API UClass* Z_Construct_UClass_APC_Main();
RGO_API UClass* Z_Construct_UClass_APC_Main_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APC_Main *****************************************************************
void APC_Main::StaticRegisterNativesAPC_Main()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APC_Main;
UClass* APC_Main::GetPrivateStaticClass()
{
	using TClass = APC_Main;
	if (!Z_Registration_Info_UClass_APC_Main.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PC_Main"),
			Z_Registration_Info_UClass_APC_Main.InnerSingleton,
			StaticRegisterNativesAPC_Main,
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
	return Z_Registration_Info_UClass_APC_Main.InnerSingleton;
}
UClass* Z_Construct_UClass_APC_Main_NoRegister()
{
	return APC_Main::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APC_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PC_Main.h" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoomDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoomDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "PC_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadInputAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_RotateInputAction = { "RotateInputAction", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, RotateInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateInputAction_MetaData), NewProp_RotateInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ZoomInputAction = { "ZoomInputAction", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, ZoomInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInputAction_MetaData), NewProp_ZoomInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_RunInputAction = { "RunInputAction", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, RunInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunInputAction_MetaData), NewProp_RunInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ShootInputAction = { "ShootInputAction", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, ShootInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootInputAction_MetaData), NewProp_ShootInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ReloadInputAction = { "ReloadInputAction", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, ReloadInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadInputAction_MetaData), NewProp_ReloadInputAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_MinZoomDistance = { "MinZoomDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, MinZoomDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoomDistance_MetaData), NewProp_MinZoomDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_MaxZoomDistance = { "MaxZoomDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, MaxZoomDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoomDistance_MetaData), NewProp_MaxZoomDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APC_Main_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APC_Main, ZoomInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData), NewProp_ZoomInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APC_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_MoveInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_RotateInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ZoomInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_RunInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ShootInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ReloadInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_MinZoomDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_MaxZoomDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APC_Main_Statics::NewProp_ZoomInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APC_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APC_Main_Statics::ClassParams = {
	&APC_Main::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APC_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_APC_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APC_Main()
{
	if (!Z_Registration_Info_UClass_APC_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APC_Main.OuterSingleton, Z_Construct_UClass_APC_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APC_Main.OuterSingleton;
}
APC_Main::APC_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APC_Main);
APC_Main::~APC_Main() {}
// ********** End Class APC_Main *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APC_Main, APC_Main::StaticClass, TEXT("APC_Main"), &Z_Registration_Info_UClass_APC_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APC_Main), 2363493704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h__Script_RGO_3512497274(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_PC_Main_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
