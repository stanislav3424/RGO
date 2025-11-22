// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/UW_Menu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUW_Menu() {}

// ********** Begin Cross Module References ********************************************************
RGO_API UClass* Z_Construct_UClass_UUW_Menu();
RGO_API UClass* Z_Construct_UClass_UUW_Menu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUW_Menu *****************************************************************
void UUW_Menu::StaticRegisterNativesUUW_Menu()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUW_Menu;
UClass* UUW_Menu::GetPrivateStaticClass()
{
	using TClass = UUW_Menu;
	if (!Z_Registration_Info_UClass_UUW_Menu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UW_Menu"),
			Z_Registration_Info_UClass_UUW_Menu.InnerSingleton,
			StaticRegisterNativesUUW_Menu,
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
	return Z_Registration_Info_UClass_UUW_Menu.InnerSingleton;
}
UClass* Z_Construct_UClass_UUW_Menu_NoRegister()
{
	return UUW_Menu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUW_Menu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UW_Menu.h" },
		{ "ModuleRelativePath", "UW_Menu.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Menu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUW_Menu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Menu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Menu_Statics::ClassParams = {
	&UUW_Menu::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Menu_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_Menu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_Menu()
{
	if (!Z_Registration_Info_UClass_UUW_Menu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_Menu.OuterSingleton, Z_Construct_UClass_UUW_Menu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_Menu.OuterSingleton;
}
UUW_Menu::UUW_Menu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_Menu);
UUW_Menu::~UUW_Menu() {}
// ********** End Class UUW_Menu *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Menu_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_Menu, UUW_Menu::StaticClass, TEXT("UUW_Menu"), &Z_Registration_Info_UClass_UUW_Menu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Menu), 2912347822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Menu_h__Script_RGO_638860902(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Menu_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_UW_Menu_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
