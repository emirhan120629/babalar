// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "babalar/cellan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodecellan() {}

// ********** Begin Cross Module References ********************************************************
BABALAR_API UClass* Z_Construct_UClass_Acellan();
BABALAR_API UClass* Z_Construct_UClass_Acellan_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_babalar();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Acellan ******************************************************************
void Acellan::StaticRegisterNativesAcellan()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Acellan;
UClass* Acellan::GetPrivateStaticClass()
{
	using TClass = Acellan;
	if (!Z_Registration_Info_UClass_Acellan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("cellan"),
			Z_Registration_Info_UClass_Acellan.InnerSingleton,
			StaticRegisterNativesAcellan,
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
	return Z_Registration_Info_UClass_Acellan.InnerSingleton;
}
UClass* Z_Construct_UClass_Acellan_NoRegister()
{
	return Acellan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Acellan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "cellan.h" },
		{ "ModuleRelativePath", "cellan.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acellan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Acellan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_babalar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Acellan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Acellan_Statics::ClassParams = {
	&Acellan::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Acellan_Statics::Class_MetaDataParams), Z_Construct_UClass_Acellan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Acellan()
{
	if (!Z_Registration_Info_UClass_Acellan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Acellan.OuterSingleton, Z_Construct_UClass_Acellan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Acellan.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Acellan);
Acellan::~Acellan() {}
// ********** End Class Acellan ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_cellan_h__Script_babalar_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Acellan, Acellan::StaticClass, TEXT("Acellan"), &Z_Registration_Info_UClass_Acellan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Acellan), 2997664676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_cellan_h__Script_babalar_3825591905(TEXT("/Script/babalar"),
	Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_cellan_h__Script_babalar_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_cellan_h__Script_babalar_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
