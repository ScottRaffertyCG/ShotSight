// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShotSight/Public/ShotSightSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotSightSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
SHOTSIGHT_API UClass* Z_Construct_UClass_UShotSightSettings();
SHOTSIGHT_API UClass* Z_Construct_UClass_UShotSightSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShotSight();
// End Cross Module References

// Begin Class UShotSightSettings
void UShotSightSettings::StaticRegisterNativesUShotSightSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShotSightSettings);
UClass* Z_Construct_UClass_UShotSightSettings_NoRegister()
{
	return UShotSightSettings::StaticClass();
}
struct Z_Construct_UClass_UShotSightSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Plugins" },
		{ "DisplayName", "ShotSight Settings" },
		{ "IncludePath", "ShotSightSettings.h" },
		{ "ModuleRelativePath", "Public/ShotSightSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShotFolder_MetaData[] = {
		{ "Category", "ShotSight" },
		{ "ContentDir", "" },
		{ "DisplayName", "Shots Folder" },
		{ "ModuleRelativePath", "Public/ShotSightSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseLevelSequences_MetaData[] = {
		{ "Category", "ShotSight" },
		{ "ModuleRelativePath", "Public/ShotSightSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFolder;
	static void NewProp_UseLevelSequences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLevelSequences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShotSightSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShotSightSettings_Statics::NewProp_ShotFolder = { "ShotFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShotSightSettings, ShotFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShotFolder_MetaData), NewProp_ShotFolder_MetaData) };
void Z_Construct_UClass_UShotSightSettings_Statics::NewProp_UseLevelSequences_SetBit(void* Obj)
{
	((UShotSightSettings*)Obj)->UseLevelSequences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShotSightSettings_Statics::NewProp_UseLevelSequences = { "UseLevelSequences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShotSightSettings), &Z_Construct_UClass_UShotSightSettings_Statics::NewProp_UseLevelSequences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseLevelSequences_MetaData), NewProp_UseLevelSequences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShotSightSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotSightSettings_Statics::NewProp_ShotFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotSightSettings_Statics::NewProp_UseLevelSequences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShotSightSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShotSightSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ShotSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShotSightSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShotSightSettings_Statics::ClassParams = {
	&UShotSightSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UShotSightSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UShotSightSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShotSightSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UShotSightSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShotSightSettings()
{
	if (!Z_Registration_Info_UClass_UShotSightSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShotSightSettings.OuterSingleton, Z_Construct_UClass_UShotSightSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShotSightSettings.OuterSingleton;
}
template<> SHOTSIGHT_API UClass* StaticClass<UShotSightSettings>()
{
	return UShotSightSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShotSightSettings);
UShotSightSettings::~UShotSightSettings() {}
// End Class UShotSightSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShotSightSettings, UShotSightSettings::StaticClass, TEXT("UShotSightSettings"), &Z_Registration_Info_UClass_UShotSightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShotSightSettings), 613372753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_2620486591(TEXT("/Script/ShotSight"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
