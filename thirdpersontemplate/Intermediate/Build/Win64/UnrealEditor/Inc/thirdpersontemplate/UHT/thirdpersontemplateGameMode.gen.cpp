// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thirdpersontemplate/thirdpersontemplateGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodethirdpersontemplateGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THIRDPERSONTEMPLATE_API UClass* Z_Construct_UClass_AthirdpersontemplateGameMode();
THIRDPERSONTEMPLATE_API UClass* Z_Construct_UClass_AthirdpersontemplateGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_thirdpersontemplate();
// End Cross Module References

// Begin Class AthirdpersontemplateGameMode
void AthirdpersontemplateGameMode::StaticRegisterNativesAthirdpersontemplateGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AthirdpersontemplateGameMode);
UClass* Z_Construct_UClass_AthirdpersontemplateGameMode_NoRegister()
{
	return AthirdpersontemplateGameMode::StaticClass();
}
struct Z_Construct_UClass_AthirdpersontemplateGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "thirdpersontemplateGameMode.h" },
		{ "ModuleRelativePath", "thirdpersontemplateGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AthirdpersontemplateGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AthirdpersontemplateGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_thirdpersontemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AthirdpersontemplateGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AthirdpersontemplateGameMode_Statics::ClassParams = {
	&AthirdpersontemplateGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AthirdpersontemplateGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AthirdpersontemplateGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AthirdpersontemplateGameMode()
{
	if (!Z_Registration_Info_UClass_AthirdpersontemplateGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AthirdpersontemplateGameMode.OuterSingleton, Z_Construct_UClass_AthirdpersontemplateGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AthirdpersontemplateGameMode.OuterSingleton;
}
template<> THIRDPERSONTEMPLATE_API UClass* StaticClass<AthirdpersontemplateGameMode>()
{
	return AthirdpersontemplateGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AthirdpersontemplateGameMode);
AthirdpersontemplateGameMode::~AthirdpersontemplateGameMode() {}
// End Class AthirdpersontemplateGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_thirdpersontemplate_Source_thirdpersontemplate_thirdpersontemplateGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AthirdpersontemplateGameMode, AthirdpersontemplateGameMode::StaticClass, TEXT("AthirdpersontemplateGameMode"), &Z_Registration_Info_UClass_AthirdpersontemplateGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AthirdpersontemplateGameMode), 3230802029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thirdpersontemplate_Source_thirdpersontemplate_thirdpersontemplateGameMode_h_2860759335(TEXT("/Script/thirdpersontemplate"),
	Z_CompiledInDeferFile_FID_thirdpersontemplate_Source_thirdpersontemplate_thirdpersontemplateGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thirdpersontemplate_Source_thirdpersontemplate_thirdpersontemplateGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
