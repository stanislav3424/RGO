// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/RGOGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRGOGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RGO_API UClass* Z_Construct_UClass_ARGOGameModeBase();
RGO_API UClass* Z_Construct_UClass_ARGOGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARGOGameModeBase *********************************************************
void ARGOGameModeBase::StaticRegisterNativesARGOGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARGOGameModeBase;
UClass* ARGOGameModeBase::GetPrivateStaticClass()
{
	using TClass = ARGOGameModeBase;
	if (!Z_Registration_Info_UClass_ARGOGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RGOGameModeBase"),
			Z_Registration_Info_UClass_ARGOGameModeBase.InnerSingleton,
			StaticRegisterNativesARGOGameModeBase,
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
	return Z_Registration_Info_UClass_ARGOGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_ARGOGameModeBase_NoRegister()
{
	return ARGOGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARGOGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RGOGameModeBase.h" },
		{ "ModuleRelativePath", "RGOGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARGOGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARGOGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARGOGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARGOGameModeBase_Statics::ClassParams = {
	&ARGOGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARGOGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ARGOGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARGOGameModeBase()
{
	if (!Z_Registration_Info_UClass_ARGOGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARGOGameModeBase.OuterSingleton, Z_Construct_UClass_ARGOGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARGOGameModeBase.OuterSingleton;
}
ARGOGameModeBase::ARGOGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARGOGameModeBase);
ARGOGameModeBase::~ARGOGameModeBase() {}
// ********** End Class ARGOGameModeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARGOGameModeBase, ARGOGameModeBase::StaticClass, TEXT("ARGOGameModeBase"), &Z_Registration_Info_UClass_ARGOGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARGOGameModeBase), 2753131341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h__Script_RGO_3900741979(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_RGOGameModeBase_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
