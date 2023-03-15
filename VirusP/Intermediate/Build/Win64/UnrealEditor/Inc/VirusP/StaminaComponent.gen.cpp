// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirusP/Public/StaminaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaComponent() {}
// Cross Module References
	VIRUSP_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
	VIRUSP_API UClass* Z_Construct_UClass_UStaminaComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VirusP();
// End Cross Module References
	void UStaminaComponent::StaticRegisterNativesUStaminaComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaComponent);
	UClass* Z_Construct_UClass_UStaminaComponent_NoRegister()
	{
		return UStaminaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaminaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirusP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StaminaComponent.h" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_DefaultStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_DefaultStamina = { "DefaultStamina", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaminaComponent, DefaultStamina), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_DefaultStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_DefaultStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaComponent_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "StaminaComponent" },
		{ "ModuleRelativePath", "Public/StaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaminaComponent, Stamina), METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::NewProp_Stamina_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_DefaultStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_Stamina,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaminaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaComponent_Statics::ClassParams = {
		&UStaminaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaminaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaminaComponent()
	{
		if (!Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton, Z_Construct_UClass_UStaminaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton;
	}
	template<> VIRUSP_API UClass* StaticClass<UStaminaComponent>()
	{
		return UStaminaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaComponent);
	struct Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_StaminaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_StaminaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaComponent, UStaminaComponent::StaticClass, TEXT("UStaminaComponent"), &Z_Registration_Info_UClass_UStaminaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaComponent), 2854755684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_StaminaComponent_h_1448025118(TEXT("/Script/VirusP"),
		Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_StaminaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VirusP_Source_VirusP_Public_StaminaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
