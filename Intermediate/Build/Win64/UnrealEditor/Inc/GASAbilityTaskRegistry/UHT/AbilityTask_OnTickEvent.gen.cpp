// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASAbilityTaskRegistry/Public/AbilityTask_OnTickEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_OnTickEvent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_OnTickEvent();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_OnTickEvent_NoRegister();
GASABILITYTASKREGISTRY_API UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASAbilityTaskRegistry();
// End Cross Module References

// Begin Delegate FTickEventDelegate
struct Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics
{
	struct _Script_GASAbilityTaskRegistry_eventTickEventDelegate_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_OnTickEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASAbilityTaskRegistry_eventTickEventDelegate_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry, nullptr, "TickEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::_Script_GASAbilityTaskRegistry_eventTickEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::_Script_GASAbilityTaskRegistry_eventTickEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTickEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& TickEventDelegate, float DeltaTime)
{
	struct _Script_GASAbilityTaskRegistry_eventTickEventDelegate_Parms
	{
		float DeltaTime;
	};
	_Script_GASAbilityTaskRegistry_eventTickEventDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	TickEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTickEventDelegate

// Begin Class UAbilityTask_OnTickEvent Function OnTickEvent
struct Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics
{
	struct AbilityTask_OnTickEvent_eventOnTickEvent_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		UAbilityTask_OnTickEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "True" },
		{ "Category", "Ability Tasks" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_OnTickEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_OnTickEvent_eventOnTickEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_OnTickEvent_eventOnTickEvent_Parms, TaskInstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskInstanceName_MetaData), NewProp_TaskInstanceName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_OnTickEvent_eventOnTickEvent_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_OnTickEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_OnTickEvent, nullptr, "OnTickEvent", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::AbilityTask_OnTickEvent_eventOnTickEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::AbilityTask_OnTickEvent_eventOnTickEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_OnTickEvent::execOnTickEvent)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_OnTickEvent**)Z_Param__Result=UAbilityTask_OnTickEvent::OnTickEvent(Z_Param_OwningAbility,Z_Param_TaskInstanceName);
	P_NATIVE_END;
}
// End Class UAbilityTask_OnTickEvent Function OnTickEvent

// Begin Class UAbilityTask_OnTickEvent
void UAbilityTask_OnTickEvent::StaticRegisterNativesUAbilityTask_OnTickEvent()
{
	UClass* Class = UAbilityTask_OnTickEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTickEvent", &UAbilityTask_OnTickEvent::execOnTickEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_OnTickEvent);
UClass* Z_Construct_UClass_UAbilityTask_OnTickEvent_NoRegister()
{
	return UAbilityTask_OnTickEvent::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fires an event on tick!\n" },
#endif
		{ "IncludePath", "AbilityTask_OnTickEvent.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_OnTickEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fires an event on tick!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickEventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_OnTickEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TickEventReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_OnTickEvent_OnTickEvent, "OnTickEvent" }, // 474429358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_OnTickEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::NewProp_TickEventReceived = { "TickEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_OnTickEvent, TickEventReceived), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_TickEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickEventReceived_MetaData), NewProp_TickEventReceived_MetaData) }; // 1528634827
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::NewProp_TickEventReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::ClassParams = {
	&UAbilityTask_OnTickEvent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_OnTickEvent()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_OnTickEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_OnTickEvent.OuterSingleton, Z_Construct_UClass_UAbilityTask_OnTickEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_OnTickEvent.OuterSingleton;
}
template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<UAbilityTask_OnTickEvent>()
{
	return UAbilityTask_OnTickEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_OnTickEvent);
UAbilityTask_OnTickEvent::~UAbilityTask_OnTickEvent() {}
// End Class UAbilityTask_OnTickEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_OnTickEvent, UAbilityTask_OnTickEvent::StaticClass, TEXT("UAbilityTask_OnTickEvent"), &Z_Registration_Info_UClass_UAbilityTask_OnTickEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_OnTickEvent), 4211705276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_1151923113(TEXT("/Script/GASAbilityTaskRegistry"),
	Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_OnTickEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
