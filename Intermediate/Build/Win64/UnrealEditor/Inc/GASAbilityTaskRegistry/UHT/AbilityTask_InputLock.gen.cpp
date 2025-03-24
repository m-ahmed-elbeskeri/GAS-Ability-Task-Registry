// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASAbilityTaskRegistry/Public/AbilityTask_InputLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_InputLock() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_InputLock();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_InputLock_NoRegister();
GASABILITYTASKREGISTRY_API UEnum* Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType();
GASABILITYTASKREGISTRY_API UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASAbilityTaskRegistry();
// End Cross Module References

// Begin Enum EInputLockType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputLockType;
static UEnum* EInputLockType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputLockType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputLockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType, (UObject*)Z_Construct_UPackage__Script_GASAbilityTaskRegistry(), TEXT("EInputLockType"));
	}
	return Z_Registration_Info_UEnum_EInputLockType.OuterSingleton;
}
template<> GASABILITYTASKREGISTRY_API UEnum* StaticEnum<EInputLockType>()
{
	return EInputLockType_StaticEnum();
}
struct Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum that determines whether the input lock is timed or permanent */" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTask_InputLock.h" },
		{ "Permanent.Comment", "/** Lock input permanently until explicitly unlocked */" },
		{ "Permanent.DisplayName", "Permanent" },
		{ "Permanent.Name", "EInputLockType::Permanent" },
		{ "Permanent.ToolTip", "Lock input permanently until explicitly unlocked" },
		{ "Timed.Comment", "/** Lock input for a specified duration */" },
		{ "Timed.DisplayName", "Timed" },
		{ "Timed.Name", "EInputLockType::Timed" },
		{ "Timed.ToolTip", "Lock input for a specified duration" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum that determines whether the input lock is timed or permanent" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputLockType::Timed", (int64)EInputLockType::Timed },
		{ "EInputLockType::Permanent", (int64)EInputLockType::Permanent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry,
	nullptr,
	"EInputLockType",
	"EInputLockType",
	Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType()
{
	if (!Z_Registration_Info_UEnum_EInputLockType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputLockType.InnerSingleton, Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputLockType.InnerSingleton;
}
// End Enum EInputLockType

// Begin Delegate FInputLockStateChangedDelegate
struct Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_InputLock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry, nullptr, "InputLockStateChangedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInputLockStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputLockStateChangedDelegate)
{
	InputLockStateChangedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FInputLockStateChangedDelegate

// Begin Class UAbilityTask_InputLock Function ReEnableInput
struct Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called by the timer to unlock input (or finish the unlocking process) */" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTask_InputLock.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the timer to unlock input (or finish the unlocking process)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_InputLock, nullptr, "ReEnableInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_InputLock::execReEnableInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReEnableInput();
	P_NATIVE_END;
}
// End Class UAbilityTask_InputLock Function ReEnableInput

// Begin Class UAbilityTask_InputLock Function SetInputLockState
struct Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics
{
	struct AbilityTask_InputLock_eventSetInputLockState_Parms
	{
		UGameplayAbility* OwningAbility;
		bool bShouldLock;
		EInputLockType LockType;
		float Duration;
		bool bLockMove;
		bool bLockLook;
		UAbilityTask_InputLock* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the input lock state.\n\x09 * @param OwningAbility\x09The ability that owns this task.\n\x09 * @param bShouldLock\x09If true, input will be locked; if false, input will be unlocked.\n\x09 * @param LockType\x09\x09Specifies whether the lock is timed or permanent (Timed = duration applies).\n\x09 * @param Duration\x09\x09The duration for which to lock input (only used if LockType is Timed).\n\x09 * @param bLockMove\x09\x09Whether to lock move input (only used when locking).\n\x09 * @param bLockLook\x09\x09Whether to lock look input (only used when locking).\n\x09 * @return\x09\x09\x09\x09The created AbilityTask.\n\x09 */" },
#endif
		{ "CPP_Default_bLockLook", "true" },
		{ "CPP_Default_bLockMove", "true" },
		{ "CPP_Default_bShouldLock", "true" },
		{ "CPP_Default_Duration", "0.000000" },
		{ "CPP_Default_LockType", "Timed" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_InputLock.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the input lock state.\n@param OwningAbility The ability that owns this task.\n@param bShouldLock   If true, input will be locked; if false, input will be unlocked.\n@param LockType              Specifies whether the lock is timed or permanent (Timed = duration applies).\n@param Duration              The duration for which to lock input (only used if LockType is Timed).\n@param bLockMove             Whether to lock move input (only used when locking).\n@param bLockLook             Whether to lock look input (only used when locking).\n@return                              The created AbilityTask." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static void NewProp_bShouldLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLock;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bLockMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMove;
	static void NewProp_bLockLook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_InputLock_eventSetInputLockState_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bShouldLock_SetBit(void* Obj)
{
	((AbilityTask_InputLock_eventSetInputLockState_Parms*)Obj)->bShouldLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bShouldLock = { "bShouldLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_InputLock_eventSetInputLockState_Parms), &Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bShouldLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_LockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_LockType = { "LockType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_InputLock_eventSetInputLockState_Parms, LockType), Z_Construct_UEnum_GASAbilityTaskRegistry_EInputLockType, METADATA_PARAMS(0, nullptr) }; // 240120880
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_InputLock_eventSetInputLockState_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockMove_SetBit(void* Obj)
{
	((AbilityTask_InputLock_eventSetInputLockState_Parms*)Obj)->bLockMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockMove = { "bLockMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_InputLock_eventSetInputLockState_Parms), &Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockMove_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockLook_SetBit(void* Obj)
{
	((AbilityTask_InputLock_eventSetInputLockState_Parms*)Obj)->bLockLook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockLook = { "bLockLook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_InputLock_eventSetInputLockState_Parms), &Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockLook_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_InputLock_eventSetInputLockState_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_InputLock_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bShouldLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_LockType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_LockType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_bLockLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_InputLock, nullptr, "SetInputLockState", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::AbilityTask_InputLock_eventSetInputLockState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::AbilityTask_InputLock_eventSetInputLockState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_InputLock::execSetInputLockState)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_UBOOL(Z_Param_bShouldLock);
	P_GET_ENUM(EInputLockType,Z_Param_LockType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bLockMove);
	P_GET_UBOOL(Z_Param_bLockLook);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_InputLock**)Z_Param__Result=UAbilityTask_InputLock::SetInputLockState(Z_Param_OwningAbility,Z_Param_bShouldLock,EInputLockType(Z_Param_LockType),Z_Param_Duration,Z_Param_bLockMove,Z_Param_bLockLook);
	P_NATIVE_END;
}
// End Class UAbilityTask_InputLock Function SetInputLockState

// Begin Class UAbilityTask_InputLock
void UAbilityTask_InputLock::StaticRegisterNativesUAbilityTask_InputLock()
{
	UClass* Class = UAbilityTask_InputLock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReEnableInput", &UAbilityTask_InputLock::execReEnableInput },
		{ "SetInputLockState", &UAbilityTask_InputLock::execSetInputLockState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_InputLock);
UClass* Z_Construct_UClass_UAbilityTask_InputLock_NoRegister()
{
	return UAbilityTask_InputLock::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_InputLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTask_InputLock.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_InputLock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputLockStateChanged_MetaData[] = {
		{ "Category", "Ability|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Delegate called when the input lock state change has been completed.\n\x09 * This occurs when a timed lock expires or when unlocking is applied.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTask_InputLock.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called when the input lock state change has been completed.\nThis occurs when a timed lock expires or when unlocking is applied." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputLockStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_InputLock_ReEnableInput, "ReEnableInput" }, // 3392605914
		{ &Z_Construct_UFunction_UAbilityTask_InputLock_SetInputLockState, "SetInputLockState" }, // 3954267124
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_InputLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_InputLock_Statics::NewProp_OnInputLockStateChanged = { "OnInputLockStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_InputLock, OnInputLockStateChanged), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_InputLockStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputLockStateChanged_MetaData), NewProp_OnInputLockStateChanged_MetaData) }; // 889944297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_InputLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_InputLock_Statics::NewProp_OnInputLockStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_InputLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_InputLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_InputLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_InputLock_Statics::ClassParams = {
	&UAbilityTask_InputLock::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_InputLock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_InputLock_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_InputLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_InputLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_InputLock()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_InputLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_InputLock.OuterSingleton, Z_Construct_UClass_UAbilityTask_InputLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_InputLock.OuterSingleton;
}
template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<UAbilityTask_InputLock>()
{
	return UAbilityTask_InputLock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_InputLock);
UAbilityTask_InputLock::~UAbilityTask_InputLock() {}
// End Class UAbilityTask_InputLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputLockType_StaticEnum, TEXT("EInputLockType"), &Z_Registration_Info_UEnum_EInputLockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 240120880U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_InputLock, UAbilityTask_InputLock::StaticClass, TEXT("UAbilityTask_InputLock"), &Z_Registration_Info_UClass_UAbilityTask_InputLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_InputLock), 1275969585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_697224252(TEXT("/Script/GASAbilityTaskRegistry"),
	Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
