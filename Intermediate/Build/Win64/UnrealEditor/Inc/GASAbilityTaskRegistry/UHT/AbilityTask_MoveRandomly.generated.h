// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_MoveRandomly.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_MoveRandomly;
class UGameplayAbility;
#ifdef GASABILITYTASKREGISTRY_AbilityTask_MoveRandomly_generated_h
#error "AbilityTask_MoveRandomly.generated.h already included, missing '#pragma once' in AbilityTask_MoveRandomly.h"
#endif
#define GASABILITYTASKREGISTRY_AbilityTask_MoveRandomly_generated_h

#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_9_DELEGATE \
GASABILITYTASKREGISTRY_API void FOnMoveRandomlyEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnMoveRandomlyEndDelegate);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveRandomlyTask);


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_MoveRandomly(); \
	friend struct Z_Construct_UClass_UAbilityTask_MoveRandomly_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_MoveRandomly, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASAbilityTaskRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_MoveRandomly)


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MoveRandomly(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_MoveRandomly(UAbilityTask_MoveRandomly&&); \
	UAbilityTask_MoveRandomly(const UAbilityTask_MoveRandomly&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MoveRandomly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MoveRandomly); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MoveRandomly) \
	NO_API virtual ~UAbilityTask_MoveRandomly();


#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_11_PROLOG
#define FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASABILITYTASKREGISTRY_API UClass* StaticClass<class UAbilityTask_MoveRandomly>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_AA_Documents_Unreal_Projects_MyNotes_Plugins_GASAbilityTaskRegistry_Source_GASAbilityTaskRegistry_Public_AbilityTask_MoveRandomly_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
