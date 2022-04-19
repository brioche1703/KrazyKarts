// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKarts/KrazyKartsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartsGameMode() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_AKrazyKartsGameMode_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_AKrazyKartsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
// End Cross Module References
	void AKrazyKartsGameMode::StaticRegisterNativesAKrazyKartsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKrazyKartsGameMode_NoRegister()
	{
		return AKrazyKartsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKrazyKartsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKrazyKartsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKrazyKartsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KrazyKartsGameMode.h" },
		{ "ModuleRelativePath", "KrazyKartsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKrazyKartsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKrazyKartsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKrazyKartsGameMode_Statics::ClassParams = {
		&AKrazyKartsGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKrazyKartsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKrazyKartsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKrazyKartsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKrazyKartsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKrazyKartsGameMode, 3135946974);
	template<> KRAZYKARTS_API UClass* StaticClass<AKrazyKartsGameMode>()
	{
		return AKrazyKartsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKrazyKartsGameMode(Z_Construct_UClass_AKrazyKartsGameMode, &AKrazyKartsGameMode::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("AKrazyKartsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKrazyKartsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
