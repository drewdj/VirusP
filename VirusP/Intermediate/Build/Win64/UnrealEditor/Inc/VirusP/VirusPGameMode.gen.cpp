// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirusP/VirusPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirusPGameMode() {}
// Cross Module References
	VIRUSP_API UClass* Z_Construct_UClass_AVirusPGameMode_NoRegister();
	VIRUSP_API UClass* Z_Construct_UClass_AVirusPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VirusP();
// End Cross Module References
	void AVirusPGameMode::StaticRegisterNativesAVirusPGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVirusPGameMode);
	UClass* Z_Construct_UClass_AVirusPGameMode_NoRegister()
	{
		return AVirusPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVirusPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVirusPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VirusP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirusPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VirusPGameMode.h" },
		{ "ModuleRelativePath", "VirusPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVirusPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVirusPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVirusPGameMode_Statics::ClassParams = {
		&AVirusPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVirusPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVirusPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVirusPGameMode()
	{
		if (!Z_Registration_Info_UClass_AVirusPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVirusPGameMode.OuterSingleton, Z_Construct_UClass_AVirusPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVirusPGameMode.OuterSingleton;
	}
	template<> VIRUSP_API UClass* StaticClass<AVirusPGameMode>()
	{
		return AVirusPGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVirusPGameMode);
	struct Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_VirusPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_VirusPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVirusPGameMode, AVirusPGameMode::StaticClass, TEXT("AVirusPGameMode"), &Z_Registration_Info_UClass_AVirusPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVirusPGameMode), 3342874562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_VirusPGameMode_h_1458910155(TEXT("/Script/VirusP"),
		Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_VirusPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_VirusPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
