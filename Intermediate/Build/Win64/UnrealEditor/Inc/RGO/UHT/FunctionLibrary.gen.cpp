// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/FunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RGO_API UClass* Z_Construct_UClass_UFunctionLibrary();
RGO_API UClass* Z_Construct_UClass_UFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFunctionLibrary *********************************************************
void UFunctionLibrary::StaticRegisterNativesUFunctionLibrary()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFunctionLibrary;
UClass* UFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UFunctionLibrary;
	if (!Z_Registration_Info_UClass_UFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FunctionLibrary"),
			Z_Registration_Info_UClass_UFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUFunctionLibrary,
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
	return Z_Registration_Info_UClass_UFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UFunctionLibrary_NoRegister()
{
	return UFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FunctionLibrary.h" },
		{ "ModuleRelativePath", "FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionLibrary_Statics::ClassParams = {
	&UFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionLibrary.OuterSingleton, Z_Construct_UClass_UFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFunctionLibrary.OuterSingleton;
}
UFunctionLibrary::UFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionLibrary);
UFunctionLibrary::~UFunctionLibrary() {}
// ********** End Class UFunctionLibrary ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_FunctionLibrary_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionLibrary, UFunctionLibrary::StaticClass, TEXT("UFunctionLibrary"), &Z_Registration_Info_UClass_UFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionLibrary), 795327402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_FunctionLibrary_h__Script_RGO_1341336510(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_FunctionLibrary_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_FunctionLibrary_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
