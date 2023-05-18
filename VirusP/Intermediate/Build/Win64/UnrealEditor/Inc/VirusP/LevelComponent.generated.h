// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRUSP_LevelComponent_generated_h
#error "LevelComponent.generated.h already included, missing '#pragma once' in LevelComponent.h"
#endif
#define VIRUSP_LevelComponent_generated_h

#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_9_DELEGATE \
static inline void FOnXPEventSignature_DelegateWrapper(const FMulticastScriptDelegate& OnXPEventSignature) \
{ \
	OnXPEventSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_SPARSE_DATA
#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddExperience);


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddExperience);


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelComponent(); \
	friend struct Z_Construct_UClass_ULevelComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirusP"), NO_API) \
	DECLARE_SERIALIZER(ULevelComponent)


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULevelComponent(); \
	friend struct Z_Construct_UClass_ULevelComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirusP"), NO_API) \
	DECLARE_SERIALIZER(ULevelComponent)


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelComponent(ULevelComponent&&); \
	NO_API ULevelComponent(const ULevelComponent&); \
public:


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelComponent(ULevelComponent&&); \
	NO_API ULevelComponent(const ULevelComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelComponent)


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_11_PROLOG
#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_SPARSE_DATA \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_RPC_WRAPPERS \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_INCLASS \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_SPARSE_DATA \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_VirusP_Source_VirusP_Public_LevelComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRUSP_API UClass* StaticClass<class ULevelComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VirusP_Source_VirusP_Public_LevelComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
