// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_InputLock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_InputLock;
class UGameplayAbility;
enum class EInputLockType : uint8;
#ifdef GASABILITYTASKREGISTRY_AbilityTask_InputLock_generated_h
#error "AbilityTask_InputLock.generated.h already included, missing '#pragma once' in AbilityTask_InputLock.h"
#endif
#define GASABILITYTASKREGISTRY_AbilityTask_InputLock_generated_h

#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_18_DELEGATE \
GASABILITYTASKREGISTRY_API void FInputLockStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputLockStateChangedDelegate);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReEnableInput); \
	DECLARE_FUNCTION(execSetInputLockState);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_InputLock(); \
	friend struct Z_Construct_UClass_UAbilityTask_InputLock_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_InputLock, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASAbilityTaskRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_InputLock)


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_InputLock(UAbilityTask_InputLock&&); \
	UAbilityTask_InputLock(const UAbilityTask_InputLock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_InputLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_InputLock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_InputLock) \
	NO_API virtual ~UAbilityTask_InputLock();


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_20_PROLOG
#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<class UAbilityTask_InputLock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_InputLock_h


#define FOREACH_ENUM_EINPUTLOCKTYPE(op) \
	op(EInputLockType::Timed) \
	op(EInputLockType::Permanent) 

enum class EInputLockType : uint8;
template<> struct TIsUEnumClass<EInputLockType> { enum { Value = true }; };
template<> GASABILITYTASKREGISTRY_API UEnum* StaticEnum<EInputLockType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
