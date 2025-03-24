// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASAbilityTaskRegistry/Public/AbilityTask_SpawnSafeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_SpawnSafeActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_SpawnSafeActor();
GASABILITYTASKREGISTRY_API UClass* Z_Construct_UClass_UAbilityTask_SpawnSafeActor_NoRegister();
GASABILITYTASKREGISTRY_API UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature();
GASABILITYTASKREGISTRY_API UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASAbilityTaskRegistry();
// End Cross Module References

// Begin Delegate FSpawnActorDelegate
struct Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics
{
	struct _Script_GASAbilityTaskRegistry_eventSpawnActorDelegate_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASAbilityTaskRegistry_eventSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry, nullptr, "SpawnActorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::_Script_GASAbilityTaskRegistry_eventSpawnActorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::_Script_GASAbilityTaskRegistry_eventSpawnActorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor)
{
	struct _Script_GASAbilityTaskRegistry_eventSpawnActorDelegate_Parms
	{
		AActor* SpawnedActor;
	};
	_Script_GASAbilityTaskRegistry_eventSpawnActorDelegate_Parms Parms;
	Parms.SpawnedActor=SpawnedActor;
	SpawnActorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSpawnActorDelegate

// Begin Delegate FPreFinishSpawnDelegate
struct Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics
{
	struct _Script_GASAbilityTaskRegistry_eventPreFinishSpawnDelegate_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASAbilityTaskRegistry_eventPreFinishSpawnDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry, nullptr, "PreFinishSpawnDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::_Script_GASAbilityTaskRegistry_eventPreFinishSpawnDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::_Script_GASAbilityTaskRegistry_eventPreFinishSpawnDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPreFinishSpawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& PreFinishSpawnDelegate, AActor* SpawnedActor)
{
	struct _Script_GASAbilityTaskRegistry_eventPreFinishSpawnDelegate_Parms
	{
		AActor* SpawnedActor;
	};
	_Script_GASAbilityTaskRegistry_eventPreFinishSpawnDelegate_Parms Parms;
	Parms.SpawnedActor=SpawnedActor;
	PreFinishSpawnDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPreFinishSpawnDelegate

// Begin Class UAbilityTask_SpawnSafeActor Function SpawnSafeActor
struct Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics
{
	struct AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		TSubclassOf<AActor> ActorClass;
		FVector Location;
		FRotator Rotation;
		bool bMoveEncroachingActors;
		UAbilityTask_SpawnSafeActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public function to spawn the actor with encroachment handling\n" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "Spawn Safe Actor" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public function to spawn the actor with encroachment handling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bMoveEncroachingActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveEncroachingActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_bMoveEncroachingActors_SetBit(void* Obj)
{
	((AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms*)Obj)->bMoveEncroachingActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_bMoveEncroachingActors = { "bMoveEncroachingActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms), &Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_bMoveEncroachingActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_SpawnSafeActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_bMoveEncroachingActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnSafeActor, nullptr, "SpawnSafeActor", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::AbilityTask_SpawnSafeActor_eventSpawnSafeActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SpawnSafeActor::execSpawnSafeActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_UBOOL(Z_Param_bMoveEncroachingActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_SpawnSafeActor**)Z_Param__Result=UAbilityTask_SpawnSafeActor::SpawnSafeActor(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation,Z_Param_bMoveEncroachingActors);
	P_NATIVE_END;
}
// End Class UAbilityTask_SpawnSafeActor Function SpawnSafeActor

// Begin Class UAbilityTask_SpawnSafeActor
void UAbilityTask_SpawnSafeActor::StaticRegisterNativesUAbilityTask_SpawnSafeActor()
{
	UClass* Class = UAbilityTask_SpawnSafeActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnSafeActor", &UAbilityTask_SpawnSafeActor::execSpawnSafeActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_SpawnSafeActor);
UClass* Z_Construct_UClass_UAbilityTask_SpawnSafeActor_NoRegister()
{
	return UAbilityTask_SpawnSafeActor::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTask_SpawnSafeActor.h" },
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the actor cannot be spawned (on clients or when server fails to spawn) */" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the actor cannot be spawned (on clients or when server fails to spawn)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreFinishSpawning_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called before finishing spawning the actor to allow for custom logic */" },
#endif
		{ "ModuleRelativePath", "Public/AbilityTask_SpawnSafeActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before finishing spawning the actor to allow for custom logic" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreFinishSpawning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_SpawnSafeActor_SpawnSafeActor, "SpawnSafeActor" }, // 129484939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_SpawnSafeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnSafeActor, Success), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 1388547409
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnSafeActor, DidNotSpawn), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DidNotSpawn_MetaData), NewProp_DidNotSpawn_MetaData) }; // 1388547409
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::NewProp_OnPreFinishSpawning = { "OnPreFinishSpawning", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SpawnSafeActor, OnPreFinishSpawning), Z_Construct_UDelegateFunction_GASAbilityTaskRegistry_PreFinishSpawnDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreFinishSpawning_MetaData), NewProp_OnPreFinishSpawning_MetaData) }; // 4066609777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::NewProp_DidNotSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::NewProp_OnPreFinishSpawning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASAbilityTaskRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::ClassParams = {
	&UAbilityTask_SpawnSafeActor::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_SpawnSafeActor()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_SpawnSafeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_SpawnSafeActor.OuterSingleton, Z_Construct_UClass_UAbilityTask_SpawnSafeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_SpawnSafeActor.OuterSingleton;
}
template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<UAbilityTask_SpawnSafeActor>()
{
	return UAbilityTask_SpawnSafeActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_SpawnSafeActor);
UAbilityTask_SpawnSafeActor::~UAbilityTask_SpawnSafeActor() {}
// End Class UAbilityTask_SpawnSafeActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_SpawnSafeActor, UAbilityTask_SpawnSafeActor::StaticClass, TEXT("UAbilityTask_SpawnSafeActor"), &Z_Registration_Info_UClass_UAbilityTask_SpawnSafeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_SpawnSafeActor), 3955414102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_988150447(TEXT("/Script/GASAbilityTaskRegistry"),
	Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_SpawnSafeActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
