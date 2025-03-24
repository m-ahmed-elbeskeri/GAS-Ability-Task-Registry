// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASAbilityTaskRegistry/Public/AbilityTask_MoveRandomly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_MoveRandomly() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_MoveRandomly();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_MoveRandomly_NoRegister();
GASABILITYTASKREGISTRY_API UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASAbilityTaskRegistry();
// End Cross Module References

// Begin Delegate FOnMoveRandomlyEndDelegate
struct Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_MoveRandomly.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry, nullptr, "OnMoveRandomlyEndDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMoveRandomlyEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMoveRandomlyEndDelegate)
{
	OnMoveRandomlyEndDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMoveRandomlyEndDelegate

// Begin Class UAbilityTask_MoveRandomly Function MoveRandomlyTask
struct Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics
{
	struct AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		float DirectionChangeInterval;
		float TotalDuration;
		UAbilityTask_MoveRandomly* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_MoveRandomly.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionChangeInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_DirectionChangeInterval = { "DirectionChangeInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms, DirectionChangeInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_MoveRandomly_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_DirectionChangeInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_TotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_MoveRandomly, nullptr, "MoveRandomlyTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::AbilityTask_MoveRandomly_eventMoveRandomlyTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_MoveRandomly::execMoveRandomlyTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionChangeInterval);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_MoveRandomly**)Z_Param__Result=UAbilityTask_MoveRandomly::MoveRandomlyTask(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_DirectionChangeInterval,Z_Param_TotalDuration);
	P_NATIVE_END;
}
// End Class UAbilityTask_MoveRandomly Function MoveRandomlyTask

// Begin Class UAbilityTask_MoveRandomly
void UAbilityTask_MoveRandomly::StaticRegisterNativesUAbilityTask_MoveRandomly()
{
	UClass* Class = UAbilityTask_MoveRandomly::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveRandomlyTask", &UAbilityTask_MoveRandomly::execMoveRandomlyTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_MoveRandomly);
UClass* Z_Construct_UClass_UAbilityTask_MoveRandomly_NoRegister()
{
	return UAbilityTask_MoveRandomly::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTask_MoveRandomly.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_MoveRandomly.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMoveRandomlyEnd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for end of movement\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTask_MoveRandomly.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for end of movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_MoveRandomly.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveRandomlyEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_MoveRandomly_MoveRandomlyTask, "MoveRandomlyTask" }, // 2817955783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_MoveRandomly>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::NewProp_OnMoveRandomlyEnd = { "OnMoveRandomlyEnd", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_MoveRandomly, OnMoveRandomlyEnd), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_OnMoveRandomlyEndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMoveRandomlyEnd_MetaData), NewProp_OnMoveRandomlyEnd_MetaData) }; // 3643097555
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_MoveRandomly, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningAbility_MetaData), NewProp_OwningAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::NewProp_OnMoveRandomlyEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::NewProp_OwningAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::ClassParams = {
	&UAbilityTask_MoveRandomly::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_MoveRandomly()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_MoveRandomly.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_MoveRandomly.OuterSingleton, Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_MoveRandomly.OuterSingleton;
}
template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<UAbilityTask_MoveRandomly>()
{
	return UAbilityTask_MoveRandomly::StaticClass();
}
UAbilityTask_MoveRandomly::UAbilityTask_MoveRandomly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_MoveRandomly);
UAbilityTask_MoveRandomly::~UAbilityTask_MoveRandomly() {}
// End Class UAbilityTask_MoveRandomly

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_MoveRandomly, UAbilityTask_MoveRandomly::StaticClass, TEXT("UAbilityTask_MoveRandomly"), &Z_Registration_Info_UClass_UAbilityTask_MoveRandomly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_MoveRandomly), 1329047913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_2156412729(TEXT("/Script/GASAbilityTaskRegistry"),
	Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
