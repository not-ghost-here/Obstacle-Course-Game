// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleCourseGameGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObstacleCourseGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGameGameMode();
OBSTACLECOURSEGAME_API UClass* Z_Construct_UClass_AObstacleCourseGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleCourseGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AObstacleCourseGameGameMode **********************************************
void AObstacleCourseGameGameMode::StaticRegisterNativesAObstacleCourseGameGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AObstacleCourseGameGameMode;
UClass* AObstacleCourseGameGameMode::GetPrivateStaticClass()
{
	using TClass = AObstacleCourseGameGameMode;
	if (!Z_Registration_Info_UClass_AObstacleCourseGameGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObstacleCourseGameGameMode"),
			Z_Registration_Info_UClass_AObstacleCourseGameGameMode.InnerSingleton,
			StaticRegisterNativesAObstacleCourseGameGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AObstacleCourseGameGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AObstacleCourseGameGameMode_NoRegister()
{
	return AObstacleCourseGameGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AObstacleCourseGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ObstacleCourseGameGameMode.h" },
		{ "ModuleRelativePath", "ObstacleCourseGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleCourseGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstacleCourseGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleCourseGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleCourseGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacleCourseGameGameMode_Statics::ClassParams = {
	&AObstacleCourseGameGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleCourseGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstacleCourseGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstacleCourseGameGameMode()
{
	if (!Z_Registration_Info_UClass_AObstacleCourseGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacleCourseGameGameMode.OuterSingleton, Z_Construct_UClass_AObstacleCourseGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacleCourseGameGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleCourseGameGameMode);
AObstacleCourseGameGameMode::~AObstacleCourseGameGameMode() {}
// ********** End Class AObstacleCourseGameGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h__Script_ObstacleCourseGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacleCourseGameGameMode, AObstacleCourseGameGameMode::StaticClass, TEXT("AObstacleCourseGameGameMode"), &Z_Registration_Info_UClass_AObstacleCourseGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacleCourseGameGameMode), 2734110430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h__Script_ObstacleCourseGame_1413444375(TEXT("/Script/ObstacleCourseGame"),
	Z_CompiledInDeferFile_FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h__Script_ObstacleCourseGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleCourseGame_Source_ObstacleCourseGame_ObstacleCourseGameGameMode_h__Script_ObstacleCourseGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
