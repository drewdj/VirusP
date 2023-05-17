// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirusP/Public/LevelComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelComponent() {}
// Cross Module References
	VIRUSP_API UClass* Z_Construct_UClass_ULevelComponent_NoRegister();
	VIRUSP_API UClass* Z_Construct_UClass_ULevelComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VirusP();
// End Cross Module References
	DEFINE_FUNCTION(ULevelComponent::execAddExperience)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Experience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExperience(Z_Param_Experience);
		P_NATIVE_END;
	}
	void ULevelComponent::StaticRegisterNativesULevelComponent()
	{
		UClass* Class = ULevelComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExperience", &ULevelComponent::execAddExperience },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelComponent_AddExperience_Statics
	{
		struct LevelComponent_eventAddExperience_Parms
		{
			float Experience;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Experience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelComponent_eventAddExperience_Parms, Experience), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::NewProp_Experience,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelComponent, nullptr, "AddExperience", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::LevelComponent_eventAddExperience_Parms), Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelComponent_AddExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelComponent_AddExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelComponent);
	UClass* Z_Construct_UClass_ULevelComponent_NoRegister()
	{
		return ULevelComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentExperience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceToNextLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceToNextLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirusP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelComponent_AddExperience, "AddExperience" }, // 1880197643
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevelComponent.h" },
		{ "ModuleRelativePath", "Public/LevelComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelComponent, CurrentLevel), METADATA_PARAMS(Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentExperience_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelComponent, CurrentExperience), METADATA_PARAMS(Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentExperience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelComponent_Statics::NewProp_ExperienceToNextLevel_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/LevelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelComponent_Statics::NewProp_ExperienceToNextLevel = { "ExperienceToNextLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelComponent, ExperienceToNextLevel), METADATA_PARAMS(Z_Construct_UClass_ULevelComponent_Statics::NewProp_ExperienceToNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelComponent_Statics::NewProp_ExperienceToNextLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelComponent_Statics::NewProp_CurrentExperience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelComponent_Statics::NewProp_ExperienceToNextLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelComponent_Statics::ClassParams = {
		&ULevelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelComponent()
	{
		if (!Z_Registration_Info_UClass_ULevelComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelComponent.OuterSingleton, Z_Construct_UClass_ULevelComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelComponent.OuterSingleton;
	}
	template<> VIRUSP_API UClass* StaticClass<ULevelComponent>()
	{
		return ULevelComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelComponent);
	struct Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_LevelComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_LevelComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelComponent, ULevelComponent::StaticClass, TEXT("ULevelComponent"), &Z_Registration_Info_UClass_ULevelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelComponent), 1728701224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_LevelComponent_h_1247633293(TEXT("/Script/VirusP"),
		Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_LevelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_LevelComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
