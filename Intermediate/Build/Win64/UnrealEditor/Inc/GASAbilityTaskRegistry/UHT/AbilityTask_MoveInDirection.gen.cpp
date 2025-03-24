// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASAbilityTaskRegistry/Public/AbilityTask_MoveInDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_MoveInDirection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_MoveInDirection();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_MoveInDirection_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASAbilityTaskRegistry();
// End Cross Module References

// Begin Class UAbilityTask_MoveInDirection Function MoveInDirectionTask
struct Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics
{
	struct AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		FVector Direction;
		float Interval;
		float Duration;
		UAbilityTask_MoveInDirection* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_MoveInDirection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms, Interval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_MoveInDirection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_Interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_MoveInDirection, nullptr, "MoveInDirectionTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::AbilityTask_MoveInDirection_eventMoveInDirectionTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_MoveInDirection::execMoveInDirectionTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Interval);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_MoveInDirection**)Z_Param__Result=UAbilityTask_MoveInDirection::MoveInDirectionTask(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Direction,Z_Param_Interval,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UAbilityTask_MoveInDirection Function MoveInDirectionTask

// Begin Class UAbilityTask_MoveInDirection
void UAbilityTask_MoveInDirection::StaticRegisterNativesUAbilityTask_MoveInDirection()
{
	UClass* Class = UAbilityTask_MoveInDirection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveInDirectionTask", &UAbilityTask_MoveInDirection::execMoveInDirectionTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_MoveInDirection);
UClass* Z_Construct_UClass_UAbilityTask_MoveInDirection_NoRegister()
{
	return UAbilityTask_MoveInDirection::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilityTask_MoveInDirection.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_MoveInDirection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningAbility_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_MoveInDirection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_MoveInDirection_MoveInDirectionTask, "MoveInDirectionTask" }, // 3974665639
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_MoveInDirection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_MoveInDirection, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningAbility_MetaData), NewProp_OwningAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::NewProp_OwningAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::ClassParams = {
	&UAbilityTask_MoveInDirection::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_MoveInDirection()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_MoveInDirection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_MoveInDirection.OuterSingleton, Z_Construct_UClass_UAbilityTask_MoveInDirection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_MoveInDirection.OuterSingleton;
}
template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<UAbilityTask_MoveInDirection>()
{
	return UAbilityTask_MoveInDirection::StaticClass();
}
UAbilityTask_MoveInDirection::UAbilityTask_MoveInDirection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_MoveInDirection);
UAbilityTask_MoveInDirection::~UAbilityTask_MoveInDirection() {}
// End Class UAbilityTask_MoveInDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveInDirection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_MoveInDirection, UAbilityTask_MoveInDirection::StaticClass, TEXT("UAbilityTask_MoveInDirection"), &Z_Registration_Info_UClass_UAbilityTask_MoveInDirection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_MoveInDirection), 1415390487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveInDirection_h_4201304096(TEXT("/Script/GASAbilityTaskRegistry"),
	Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveInDirection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveInDirection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
