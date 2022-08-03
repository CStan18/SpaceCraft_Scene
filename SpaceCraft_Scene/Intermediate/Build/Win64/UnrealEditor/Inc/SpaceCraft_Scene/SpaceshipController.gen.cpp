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
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoostValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentYawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentYawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPitchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPitchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRollSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRollSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToMouseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyToMouseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAbsAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAbsAxisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, Acceleration), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, CurrentSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_BoostValue_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_BoostValue = { "BoostValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, BoostValue), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_BoostValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_BoostValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentYawSpeed_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentYawSpeed = { "CurrentYawSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, CurrentYawSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentYawSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentYawSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentPitchSpeed_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentPitchSpeed = { "CurrentPitchSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, CurrentPitchSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentPitchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentPitchSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchRateMultiplier_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchRateMultiplier = { "PitchRateMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, PitchRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchInterpRate_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchInterpRate = { "PitchInterpRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, PitchInterpRate), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchInterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentRollSpeed_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentRollSpeed = { "CurrentRollSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, CurrentRollSpeed), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentRollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentRollSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollRateMultiplier_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollRateMultiplier = { "RollRateMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, RollRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollInterpRate_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollInterpRate = { "RollInterpRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, RollInterpRate), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollInterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "Comment", "// To balance mouse vs key inputs\n" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
		{ "ToolTip", "To balance mouse vs key inputs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset = { "KeyToMouseOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, KeyToMouseOffset), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAbsAxisValue_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "Comment", "// Reduces axis function calls by checking if key is pressed\n" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
		{ "ToolTip", "Reduces axis function calls by checking if key is pressed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAbsAxisValue = { "MinAbsAxisValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, MinAbsAxisValue), METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAbsAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAbsAxisValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CapsuleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "SpaceshipController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpaceshipController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceshipController, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CameraComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceshipController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_BoostValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentYawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentPitchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_PitchInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CurrentRollSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_RollInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_KeyToMouseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_MinAbsAxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceshipController_Statics::NewProp_CameraComp,
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
		{ Z_Construct_UClass_ASpaceshipController, ASpaceshipController::StaticClass, TEXT("ASpaceshipController"), &Z_Registration_Info_UClass_ASpaceshipController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceshipController), 1629900761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_3970211803(TEXT("/Script/SpaceCraft_Scene"),
		Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceCraft_Scene_Source_SpaceCraft_Scene_SpaceshipController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
