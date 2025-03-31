// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShotSightSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOTSIGHT_ShotSightSettings_generated_h
#error "ShotSightSettings.generated.h already included, missing '#pragma once' in ShotSightSettings.h"
#endif
#define SHOTSIGHT_ShotSightSettings_generated_h

#define FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShotSightSettings(); \
	friend struct Z_Construct_UClass_UShotSightSettings_Statics; \
public: \
	DECLARE_CLASS(UShotSightSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShotSight"), NO_API) \
	DECLARE_SERIALIZER(UShotSightSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UShotSightSettings(UShotSightSettings&&); \
	UShotSightSettings(const UShotSightSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShotSightSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShotSightSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShotSightSettings) \
	NO_API virtual ~UShotSightSettings();


#define FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_8_PROLOG
#define FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOTSIGHT_API UClass* StaticClass<class UShotSightSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ShotSight_Source_ShotSight_Public_ShotSightSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
