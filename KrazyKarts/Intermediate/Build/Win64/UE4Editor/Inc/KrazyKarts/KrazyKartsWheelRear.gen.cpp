// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKarts/KrazyKartsWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartsWheelRear() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelRear_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
// End Cross Module References
	void UKrazyKartsWheelRear::StaticRegisterNativesUKrazyKartsWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UKrazyKartsWheelRear_NoRegister()
	{
		return UKrazyKartsWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UKrazyKartsWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKrazyKartsWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKrazyKartsWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KrazyKartsWheelRear.h" },
		{ "ModuleRelativePath", "KrazyKartsWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKrazyKartsWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKrazyKartsWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKrazyKartsWheelRear_Statics::ClassParams = {
		&UKrazyKartsWheelRear::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKrazyKartsWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKrazyKartsWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKrazyKartsWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKrazyKartsWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKrazyKartsWheelRear, 2476092444);
	template<> KRAZYKARTS_API UClass* StaticClass<UKrazyKartsWheelRear>()
	{
		return UKrazyKartsWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKrazyKartsWheelRear(Z_Construct_UClass_UKrazyKartsWheelRear, &UKrazyKartsWheelRear::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("UKrazyKartsWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKrazyKartsWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
