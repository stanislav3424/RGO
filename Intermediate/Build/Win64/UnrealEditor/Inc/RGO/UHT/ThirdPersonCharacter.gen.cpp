// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/ThirdPersonCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
RGO_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
RGO_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
RGO_API UClass* Z_Construct_UClass_UCharacterLogic_NoRegister();
RGO_API UClass* Z_Construct_UClass_UItemLogicInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThirdPersonCharacter Function AutomaticActivation ***********************
struct Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Active" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AThirdPersonCharacter, nullptr, "AutomaticActivation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AThirdPersonCharacter::execAutomaticActivation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutomaticActivation();
	P_NATIVE_END;
}
// ********** End Class AThirdPersonCharacter Function AutomaticActivation *************************

// ********** Begin Class AThirdPersonCharacter ****************************************************
void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
{
	UClass* Class = AThirdPersonCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutomaticActivation", &AThirdPersonCharacter::execAutomaticActivation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AThirdPersonCharacter;
UClass* AThirdPersonCharacter::GetPrivateStaticClass()
{
	using TClass = AThirdPersonCharacter;
	if (!Z_Registration_Info_UClass_AThirdPersonCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ThirdPersonCharacter"),
			Z_Registration_Info_UClass_AThirdPersonCharacter.InnerSingleton,
			StaticRegisterNativesAThirdPersonCharacter,
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
	return Z_Registration_Info_UClass_AThirdPersonCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
{
	return AThirdPersonCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThirdPersonCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLogic_MetaData[] = {
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutoActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Active" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Active" },
		{ "ModuleRelativePath", "ThirdPersonCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static void NewProp_bIsAutoActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutoActive;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AThirdPersonCharacter_AutomaticActivation, "AutomaticActivation" }, // 208609464
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CharacterLogic = { "CharacterLogic", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, CharacterLogic), Z_Construct_UClass_UCharacterLogic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLogic_MetaData), NewProp_CharacterLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThirdPersonCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsAutoActive_SetBit(void* Obj)
{
	((AThirdPersonCharacter*)Obj)->bIsAutoActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsAutoActive = { "bIsAutoActive", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsAutoActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAutoActive_MetaData), NewProp_bIsAutoActive_MetaData) };
void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((AThirdPersonCharacter*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CharacterLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsAutoActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AThirdPersonCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UItemLogicInterface_NoRegister, (int32)VTABLE_OFFSET(AThirdPersonCharacter, IItemLogicInterface), false },  // 3451948277
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
	&AThirdPersonCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThirdPersonCharacter()
{
	if (!Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
AThirdPersonCharacter::~AThirdPersonCharacter() {}
// ********** End Class AThirdPersonCharacter ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ThirdPersonCharacter_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonCharacter, AThirdPersonCharacter::StaticClass, TEXT("AThirdPersonCharacter"), &Z_Registration_Info_UClass_AThirdPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonCharacter), 54017624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ThirdPersonCharacter_h__Script_RGO_2103133807(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ThirdPersonCharacter_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ThirdPersonCharacter_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
