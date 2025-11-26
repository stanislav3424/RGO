// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/AIC_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAIC_Base() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_ADetourCrowdAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
RGO_API UClass* Z_Construct_UClass_AAIC_Base();
RGO_API UClass* Z_Construct_UClass_AAIC_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAIC_Base ****************************************************************
void AAIC_Base::StaticRegisterNativesAAIC_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAIC_Base;
UClass* AAIC_Base::GetPrivateStaticClass()
{
	using TClass = AAIC_Base;
	if (!Z_Registration_Info_UClass_AAIC_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AIC_Base"),
			Z_Registration_Info_UClass_AAIC_Base.InnerSingleton,
			StaticRegisterNativesAAIC_Base,
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
	return Z_Registration_Info_UClass_AAIC_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_AAIC_Base_NoRegister()
{
	return AAIC_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAIC_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIC_Base.h" },
		{ "ModuleRelativePath", "AIC_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "BehaviorTree" },
		{ "ModuleRelativePath", "AIC_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIC_Base_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIC_Base, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIC_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIC_Base_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIC_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADetourCrowdAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_Base_Statics::ClassParams = {
	&AAIC_Base::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAIC_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Base_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIC_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIC_Base()
{
	if (!Z_Registration_Info_UClass_AAIC_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_Base.OuterSingleton, Z_Construct_UClass_AAIC_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIC_Base.OuterSingleton;
}
AAIC_Base::AAIC_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_Base);
AAIC_Base::~AAIC_Base() {}
// ********** End Class AAIC_Base ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_Base, AAIC_Base::StaticClass, TEXT("AAIC_Base"), &Z_Registration_Info_UClass_AAIC_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_Base), 113323075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h__Script_RGO_2899106487(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_AIC_Base_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
