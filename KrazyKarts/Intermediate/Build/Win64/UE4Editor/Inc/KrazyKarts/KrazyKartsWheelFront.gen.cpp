// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKarts/KrazyKartsWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartsWheelFront() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelFront_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
// End Cross Module References
	void UKrazyKartsWheelFront::StaticRegisterNativesUKrazyKartsWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UKrazyKartsWheelFront_NoRegister()
	{
		return UKrazyKartsWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UKrazyKartsWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKrazyKartsWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKrazyKartsWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KrazyKartsWheelFront.h" },
		{ "ModuleRelativePath", "KrazyKartsWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKrazyKartsWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKrazyKartsWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKrazyKartsWheelFront_Statics::ClassParams = {
		&UKrazyKartsWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKrazyKartsWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKrazyKartsWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKrazyKartsWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKrazyKartsWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKrazyKartsWheelFront, 3682273091);
	template<> KRAZYKARTS_API UClass* StaticClass<UKrazyKartsWheelFront>()
	{
		return UKrazyKartsWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKrazyKartsWheelFront(Z_Construct_UClass_UKrazyKartsWheelFront, &UKrazyKartsWheelFront::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("UKrazyKartsWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKrazyKartsWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
