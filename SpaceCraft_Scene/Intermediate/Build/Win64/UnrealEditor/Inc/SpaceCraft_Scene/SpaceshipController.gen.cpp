// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceCraft_Scene/SpaceshipController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceshipController() {}
// Cross Module References
	SPACECRAFT_SCENE_API UClass* Z_Construct_UClass_ASpaceshipController_NoRegister();
	SPACECRAFT_SCENE_API UClass* Z_Construct_UClass_ASpaceshipController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceCraft_Scene();
// End Cross Module References
	void ASpaceshipController::StaticRegisterNativesASpaceshipController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceshipController);
	UClass* Z_Construct_UClass_ASpaceshipController_NoRegister()
	{
		return ASpaceshipController::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceshipController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToMouseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyToMouseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceshipController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceCraft_Scene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpaceshipController.h" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset = { "KeyToMouseOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, KeyToMouseOffset), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAxisValue_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAxisValue = { "MinAxisValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, MinAxisValue), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAxisValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceshipController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAxisValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceshipController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceshipController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceshipController_Statics::ClassParams = {
		&ASpaceshipController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceshipController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceshipController()
	{
		if (!Z_Registration_Info_UClass_ASpaceshipController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceshipController.OuterSingleton, Z_Construct_UClass_ASpaceshipController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceshipController.OuterSingleton;
	}
	template<> SPACECRAFT_SCENE_API UClass* StaticClass<ASpaceshipController>()
	{
		return ASpaceshipController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceshipController);
	struct Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceshipController, ASpaceshipController::StaticClass, TEXT("ASpaceshipController"), &Z_Registration_Info_UClass_ASpaceshipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceshipController), 3911649682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_3098430587(TEXT("/Script/SpaceCraft_Scene"),
		Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
