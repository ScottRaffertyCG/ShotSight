// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShotSight/Private/LocalDirPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalDirPath() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
SHOTSIGHT_API UClass* Z_Construct_UClass_ULocalDirectoryPath();
SHOTSIGHT_API UClass* Z_Construct_UClass_ULocalDirectoryPath_NoRegister();
SHOTSIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPathWrapper();
UPackage* Z_Construct_UPackage__Script_ShotSight();
// End Cross Module References

// Begin ScriptStruct FDirectoryPathWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectoryPathWrapper;
class UScriptStruct* FDirectoryPathWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectoryPathWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectoryPathWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectoryPathWrapper, (UObject*)Z_Construct_UPackage__Script_ShotSight(), TEXT("DirectoryPathWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_DirectoryPathWrapper.OuterSingleton;
}
template<> SHOTSIGHT_API UScriptStruct* StaticStruct<FDirectoryPathWrapper>()
{
	return FDirectoryPathWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Wrapper struct that contains a directory path, allowing it to be used with custom metadata.\n// Directory path that can be set in the editor and accessed in Blueprints. Note the meta = ContentDir which is essential for getting the correct user experience\n" },
		{ "ModuleRelativePath", "Private/LocalDirPath.h" },
		{ "ToolTip", "Wrapper struct that contains a directory path, allowing it to be used with custom metadata.\nDirectory path that can be set in the editor and accessed in Blueprints. Note the meta = ContentDir which is essential for getting the correct user experience" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPath_MetaData[] = {
		{ "Category", "Custom" },
		{ "ContentDir", "" },
		{ "DisplayName", "Shots Folder" },
		{ "ModuleRelativePath", "Private/LocalDirPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectoryPathWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectoryPathWrapper, DirectoryPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoryPath_MetaData), NewProp_DirectoryPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::NewProp_DirectoryPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShotSight,
	nullptr,
	&NewStructOps,
	"DirectoryPathWrapper",
	Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::PropPointers),
	sizeof(FDirectoryPathWrapper),
	alignof(FDirectoryPathWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPathWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_DirectoryPathWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectoryPathWrapper.InnerSingleton, Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DirectoryPathWrapper.InnerSingleton;
}
// End ScriptStruct FDirectoryPathWrapper

// Begin Class ULocalDirectoryPath Function GetDirectoryPath
struct Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics
{
	struct LocalDirectoryPath_eventGetDirectoryPath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// Gets the directory path\n" },
		{ "ModuleRelativePath", "Private/LocalDirPath.h" },
		{ "ToolTip", "Gets the directory path" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectoryPath_eventGetDirectoryPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalDirectoryPath, nullptr, "GetDirectoryPath", nullptr, nullptr, Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::LocalDirectoryPath_eventGetDirectoryPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::LocalDirectoryPath_eventGetDirectoryPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalDirectoryPath::execGetDirectoryPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDirectoryPath();
	P_NATIVE_END;
}
// End Class ULocalDirectoryPath Function GetDirectoryPath

// Begin Class ULocalDirectoryPath Function SetDirectoryPath
struct Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics
{
	struct LocalDirectoryPath_eventSetDirectoryPath_Parms
	{
		FString NewPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// Sets the directory path\n" },
		{ "ModuleRelativePath", "Private/LocalDirPath.h" },
		{ "ToolTip", "Sets the directory path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::NewProp_NewPath = { "NewPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalDirectoryPath_eventSetDirectoryPath_Parms, NewPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPath_MetaData), NewProp_NewPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::NewProp_NewPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalDirectoryPath, nullptr, "SetDirectoryPath", nullptr, nullptr, Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::LocalDirectoryPath_eventSetDirectoryPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::LocalDirectoryPath_eventSetDirectoryPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalDirectoryPath::execSetDirectoryPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirectoryPath(Z_Param_NewPath);
	P_NATIVE_END;
}
// End Class ULocalDirectoryPath Function SetDirectoryPath

// Begin Class ULocalDirectoryPath
void ULocalDirectoryPath::StaticRegisterNativesULocalDirectoryPath()
{
	UClass* Class = ULocalDirectoryPath::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDirectoryPath", &ULocalDirectoryPath::execGetDirectoryPath },
		{ "SetDirectoryPath", &ULocalDirectoryPath::execSetDirectoryPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalDirectoryPath);
UClass* Z_Construct_UClass_ULocalDirectoryPath_NoRegister()
{
	return ULocalDirectoryPath::StaticClass();
}
struct Z_Construct_UClass_ULocalDirectoryPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ULocalDirectoryPath is a simple class to hold a wrapped directory path and expose it to Blueprints.\n" },
		{ "IncludePath", "LocalDirPath.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/LocalDirPath.h" },
		{ "ToolTip", "ULocalDirectoryPath is a simple class to hold a wrapped directory path and expose it to Blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyDirectoryPath_MetaData[] = {
		{ "Category", "Custom" },
		{ "Comment", "// Wrapped directory path that can be set in the editor and accessed in Blueprints\n" },
		{ "ModuleRelativePath", "Private/LocalDirPath.h" },
		{ "ToolTip", "Wrapped directory path that can be set in the editor and accessed in Blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyDirectoryPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalDirectoryPath_GetDirectoryPath, "GetDirectoryPath" }, // 2231331127
		{ &Z_Construct_UFunction_ULocalDirectoryPath_SetDirectoryPath, "SetDirectoryPath" }, // 1645205201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalDirectoryPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalDirectoryPath_Statics::NewProp_MyDirectoryPath = { "MyDirectoryPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalDirectoryPath, MyDirectoryPath), Z_Construct_UScriptStruct_FDirectoryPathWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyDirectoryPath_MetaData), NewProp_MyDirectoryPath_MetaData) }; // 1698776425
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalDirectoryPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalDirectoryPath_Statics::NewProp_MyDirectoryPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectoryPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalDirectoryPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ShotSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectoryPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalDirectoryPath_Statics::ClassParams = {
	&ULocalDirectoryPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULocalDirectoryPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectoryPath_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalDirectoryPath_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalDirectoryPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalDirectoryPath()
{
	if (!Z_Registration_Info_UClass_ULocalDirectoryPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalDirectoryPath.OuterSingleton, Z_Construct_UClass_ULocalDirectoryPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalDirectoryPath.OuterSingleton;
}
template<> SHOTSIGHT_API UClass* StaticClass<ULocalDirectoryPath>()
{
	return ULocalDirectoryPath::StaticClass();
}
ULocalDirectoryPath::ULocalDirectoryPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalDirectoryPath);
ULocalDirectoryPath::~ULocalDirectoryPath() {}
// End Class ULocalDirectoryPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Private_LocalDirPath_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDirectoryPathWrapper::StaticStruct, Z_Construct_UScriptStruct_FDirectoryPathWrapper_Statics::NewStructOps, TEXT("DirectoryPathWrapper"), &Z_Registration_Info_UScriptStruct_DirectoryPathWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectoryPathWrapper), 1698776425U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalDirectoryPath, ULocalDirectoryPath::StaticClass, TEXT("ULocalDirectoryPath"), &Z_Registration_Info_UClass_ULocalDirectoryPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalDirectoryPath), 2006979298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Private_LocalDirPath_h_2031868148(TEXT("/Script/ShotSight"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Private_LocalDirPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Private_LocalDirPath_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Private_LocalDirPath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ShotSight_Source_ShotSight_Private_LocalDirPath_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
