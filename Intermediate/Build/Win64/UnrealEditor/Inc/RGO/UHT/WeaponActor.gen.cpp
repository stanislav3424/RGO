// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/WeaponActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
RGO_API UClass* Z_Construct_UClass_AWeaponActor();
RGO_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
RGO_API UClass* Z_Construct_UClass_UItemLogicInterface_NoRegister();
RGO_API UClass* Z_Construct_UClass_UWeaponLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWeaponActor *************************************************************
void AWeaponActor::StaticRegisterNativesAWeaponActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeaponActor;
UClass* AWeaponActor::GetPrivateStaticClass()
{
	using TClass = AWeaponActor;
	if (!Z_Registration_Info_UClass_AWeaponActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponActor"),
			Z_Registration_Info_UClass_AWeaponActor.InnerSingleton,
			StaticRegisterNativesAWeaponActor,
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
	return Z_Registration_Info_UClass_AWeaponActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeaponActor_NoRegister()
{
	return AWeaponActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeaponActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponActor.h" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponLogic_MetaData[] = {
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WeaponActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponLogic = { "WeaponLogic", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponActor, WeaponLogic), Z_Construct_UClass_UWeaponLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponLogic_MetaData), NewProp_WeaponLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_SkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UItemLogicInterface_NoRegister, (int32)VTABLE_OFFSET(AWeaponActor, IItemLogicInterface), false },  // 3451948277
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponActor_Statics::ClassParams = {
	&AWeaponActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeaponActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponActor()
{
	if (!Z_Registration_Info_UClass_AWeaponActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponActor.OuterSingleton, Z_Construct_UClass_AWeaponActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponActor);
AWeaponActor::~AWeaponActor() {}
// ********** End Class AWeaponActor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponActor, AWeaponActor::StaticClass, TEXT("AWeaponActor"), &Z_Registration_Info_UClass_AWeaponActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponActor), 2642847296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h__Script_RGO_3602476776(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_WeaponActor_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
