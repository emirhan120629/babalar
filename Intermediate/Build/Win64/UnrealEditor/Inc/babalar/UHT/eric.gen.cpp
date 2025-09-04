// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "babalar/eric.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeeric() {}

// ********** Begin Cross Module References ********************************************************
BABALAR_API UClass* Z_Construct_UClass_Aeric();
BABALAR_API UClass* Z_Construct_UClass_Aeric_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_babalar();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Aeric ********************************************************************
void Aeric::StaticRegisterNativesAeric()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Aeric;
UClass* Aeric::GetPrivateStaticClass()
{
	using TClass = Aeric;
	if (!Z_Registration_Info_UClass_Aeric.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("eric"),
			Z_Registration_Info_UClass_Aeric.InnerSingleton,
			StaticRegisterNativesAeric,
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
	return Z_Registration_Info_UClass_Aeric.InnerSingleton;
}
UClass* Z_Construct_UClass_Aeric_NoRegister()
{
	return Aeric::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Aeric_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "eric.h" },
		{ "ModuleRelativePath", "eric.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aeric>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aeric_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_babalar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aeric_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aeric_Statics::ClassParams = {
	&Aeric::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aeric_Statics::Class_MetaDataParams), Z_Construct_UClass_Aeric_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aeric()
{
	if (!Z_Registration_Info_UClass_Aeric.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aeric.OuterSingleton, Z_Construct_UClass_Aeric_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aeric.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aeric);
Aeric::~Aeric() {}
// ********** End Class Aeric **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_eric_h__Script_babalar_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aeric, Aeric::StaticClass, TEXT("Aeric"), &Z_Registration_Info_UClass_Aeric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aeric), 3155964721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_eric_h__Script_babalar_2430805947(TEXT("/Script/babalar"),
	Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_eric_h__Script_babalar_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_babalar_Source_babalar_eric_h__Script_babalar_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
