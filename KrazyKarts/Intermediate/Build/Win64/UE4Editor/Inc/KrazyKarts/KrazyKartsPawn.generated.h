// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KRAZYKARTS_KrazyKartsPawn_generated_h
#error "KrazyKartsPawn.generated.h already included, missing '#pragma once' in KrazyKartsPawn.h"
#endif
#define KRAZYKARTS_KrazyKartsPawn_generated_h

#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_SPARSE_DATA
#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_RPC_WRAPPERS
#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKrazyKartsPawn(); \
	friend struct Z_Construct_UClass_AKrazyKartsPawn_Statics; \
public: \
	DECLARE_CLASS(AKrazyKartsPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AKrazyKartsPawn)


#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAKrazyKartsPawn(); \
	friend struct Z_Construct_UClass_AKrazyKartsPawn_Statics; \
public: \
	DECLARE_CLASS(AKrazyKartsPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AKrazyKartsPawn)


#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKrazyKartsPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKrazyKartsPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKrazyKartsPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKrazyKartsPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKrazyKartsPawn(AKrazyKartsPawn&&); \
	NO_API AKrazyKartsPawn(const AKrazyKartsPawn&); \
public:


#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKrazyKartsPawn(AKrazyKartsPawn&&); \
	NO_API AKrazyKartsPawn(const AKrazyKartsPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKrazyKartsPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKrazyKartsPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKrazyKartsPawn)


#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AKrazyKartsPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AKrazyKartsPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AKrazyKartsPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AKrazyKartsPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AKrazyKartsPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AKrazyKartsPawn, InCarGear); }


#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_16_PROLOG
#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_RPC_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_INCLASS \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_INCLASS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KRAZYKARTS_API UClass* StaticClass<class AKrazyKartsPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KrazyKarts_Source_KrazyKarts_KrazyKartsPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
