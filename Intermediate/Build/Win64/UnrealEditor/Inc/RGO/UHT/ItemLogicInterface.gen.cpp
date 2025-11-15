// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RGO/ItemLogicInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemLogicInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RGO_API UClass* Z_Construct_UClass_UItemLogic_NoRegister();
RGO_API UClass* Z_Construct_UClass_UItemLogicInterface();
RGO_API UClass* Z_Construct_UClass_UItemLogicInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RGO();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UItemLogicInterface Function GetItemLogic ****************************
struct ItemLogicInterface_eventGetItemLogic_Parms
{
	UItemLogic* ReturnValue;

	/** Constructor, initializes return property only **/
	ItemLogicInterface_eventGetItemLogic_Parms()
		: ReturnValue(NULL)
	{
	}
};
UItemLogic* IItemLogicInterface::GetItemLogic()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItemLogic instead.");
	ItemLogicInterface_eventGetItemLogic_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UItemLogicInterface_GetItemLogic = FName(TEXT("GetItemLogic"));
UItemLogic* IItemLogicInterface::Execute_GetItemLogic(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UItemLogicInterface::StaticClass()));
	ItemLogicInterface_eventGetItemLogic_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UItemLogicInterface_GetItemLogic);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IItemLogicInterface*)(O->GetNativeInterfaceAddress(UItemLogicInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetItemLogic_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemLogic" },
		{ "ModuleRelativePath", "ItemLogicInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogicInterface_eventGetItemLogic_Parms, ReturnValue), Z_Construct_UClass_UItemLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogicInterface, nullptr, "GetItemLogic", Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::PropPointers), sizeof(ItemLogicInterface_eventGetItemLogic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemLogicInterface_eventGetItemLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogicInterface_GetItemLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogicInterface_GetItemLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IItemLogicInterface::execGetItemLogic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemLogic**)Z_Param__Result=P_THIS->GetItemLogic_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UItemLogicInterface Function GetItemLogic ******************************

// ********** Begin Interface UItemLogicInterface Function SetItemLogic ****************************
struct ItemLogicInterface_eventSetItemLogic_Parms
{
	UItemLogic* NewItemLogic;
};
void IItemLogicInterface::SetItemLogic(UItemLogic* NewItemLogic)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItemLogic instead.");
}
static FName NAME_UItemLogicInterface_SetItemLogic = FName(TEXT("SetItemLogic"));
void IItemLogicInterface::Execute_SetItemLogic(UObject* O, UItemLogic* NewItemLogic)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UItemLogicInterface::StaticClass()));
	ItemLogicInterface_eventSetItemLogic_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UItemLogicInterface_SetItemLogic);
	if (Func)
	{
		Parms.NewItemLogic=NewItemLogic;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IItemLogicInterface*)(O->GetNativeInterfaceAddress(UItemLogicInterface::StaticClass())))
	{
		I->SetItemLogic_Implementation(NewItemLogic);
	}
}
struct Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemLogic" },
		{ "ModuleRelativePath", "ItemLogicInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItemLogic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::NewProp_NewItemLogic = { "NewItemLogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemLogicInterface_eventSetItemLogic_Parms, NewItemLogic), Z_Construct_UClass_UItemLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::NewProp_NewItemLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemLogicInterface, nullptr, "SetItemLogic", Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::PropPointers), sizeof(ItemLogicInterface_eventSetItemLogic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemLogicInterface_eventSetItemLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemLogicInterface_SetItemLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemLogicInterface_SetItemLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IItemLogicInterface::execSetItemLogic)
{
	P_GET_OBJECT(UItemLogic,Z_Param_NewItemLogic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemLogic_Implementation(Z_Param_NewItemLogic);
	P_NATIVE_END;
}
// ********** End Interface UItemLogicInterface Function SetItemLogic ******************************

// ********** Begin Interface UItemLogicInterface **************************************************
void UItemLogicInterface::StaticRegisterNativesUItemLogicInterface()
{
	UClass* Class = UItemLogicInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemLogic", &IItemLogicInterface::execGetItemLogic },
		{ "SetItemLogic", &IItemLogicInterface::execSetItemLogic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemLogicInterface;
UClass* UItemLogicInterface::GetPrivateStaticClass()
{
	using TClass = UItemLogicInterface;
	if (!Z_Registration_Info_UClass_UItemLogicInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemLogicInterface"),
			Z_Registration_Info_UClass_UItemLogicInterface.InnerSingleton,
			StaticRegisterNativesUItemLogicInterface,
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
	return Z_Registration_Info_UClass_UItemLogicInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemLogicInterface_NoRegister()
{
	return UItemLogicInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemLogicInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemLogicInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemLogicInterface_GetItemLogic, "GetItemLogic" }, // 1405328844
		{ &Z_Construct_UFunction_UItemLogicInterface_SetItemLogic, "SetItemLogic" }, // 1711809753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemLogicInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemLogicInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemLogicInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemLogicInterface_Statics::ClassParams = {
	&UItemLogicInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemLogicInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemLogicInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemLogicInterface()
{
	if (!Z_Registration_Info_UClass_UItemLogicInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemLogicInterface.OuterSingleton, Z_Construct_UClass_UItemLogicInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemLogicInterface.OuterSingleton;
}
UItemLogicInterface::UItemLogicInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemLogicInterface);
// ********** End Interface UItemLogicInterface ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h__Script_RGO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemLogicInterface, UItemLogicInterface::StaticClass, TEXT("UItemLogicInterface"), &Z_Registration_Info_UClass_UItemLogicInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemLogicInterface), 3451948277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h__Script_RGO_91267087(TEXT("/Script/RGO"),
	Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h__Script_RGO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Stas_Documents_Unreal_Projects_RGO_Source_RGO_ItemLogicInterface_h__Script_RGO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
