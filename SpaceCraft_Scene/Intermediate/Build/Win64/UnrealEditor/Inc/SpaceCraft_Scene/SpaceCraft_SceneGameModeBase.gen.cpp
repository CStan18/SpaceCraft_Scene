// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceCraft_Scene/SpaceCraft_SceneGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceCraft_SceneGameModeBase() {}
// Cross Module References
	SPACECRAFT_SCENE_API UClass* Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_NoRegister();
	SPACECRAFT_SCENE_API UClass* Z_Construct_UClass_ASpaceCraft_SceneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceCraft_Scene();
// End Cross Module References
	void ASpaceCraft_SceneGameModeBase::StaticRegisterNativesASpaceCraft_SceneGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceCraft_SceneGameModeBase);
	UClass* Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_NoRegister()
	{
		return ASpaceCraft_SceneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceCraft_Scene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceCraft_SceneGameModeBase.h" },
		{ "ModuleRelativePath", "SpaceCraft_SceneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceCraft_SceneGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::ClassParams = {
		&ASpaceCraft_SceneGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceCraft_SceneGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASpaceCraft_SceneGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceCraft_SceneGameModeBase.OuterSingleton, Z_Construct_UClass_ASpaceCraft_SceneGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceCraft_SceneGameModeBase.OuterSingleton;
	}
	template<> SPACECRAFT_SCENE_API UClass* StaticClass<ASpaceCraft_SceneGameModeBase>()
	{
		return ASpaceCraft_SceneGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceCraft_SceneGameModeBase);
	struct Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceCraft_SceneGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceCraft_SceneGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceCraft_SceneGameModeBase, ASpaceCraft_SceneGameModeBase::StaticClass, TEXT("ASpaceCraft_SceneGameModeBase"), &Z_Registration_Info_UClass_ASpaceCraft_SceneGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceCraft_SceneGameModeBase), 4060796440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceCraft_SceneGameModeBase_h_3217978437(TEXT("/Script/SpaceCraft_Scene"),
		Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceCraft_SceneGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceCraft_SceneGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
