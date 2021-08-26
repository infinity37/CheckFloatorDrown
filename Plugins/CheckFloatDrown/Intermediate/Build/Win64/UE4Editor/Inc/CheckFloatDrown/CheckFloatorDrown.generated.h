// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CHECKFLOATDROWN_CheckFloatorDrown_generated_h
#error "CheckFloatorDrown.generated.h already included, missing '#pragma once' in CheckFloatorDrown.h"
#endif
#define CHECKFLOATDROWN_CheckFloatorDrown_generated_h

#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_SPARSE_DATA
#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveToFile);


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveToFile);


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_EVENT_PARMS \
	struct CheckFloatorDrown_eventBP_ActorIsDrown_Parms \
	{ \
		AActor* checkactor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CheckFloatorDrown_eventBP_ActorIsDrown_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct CheckFloatorDrown_eventBP_ActorIsFloat_Parms \
	{ \
		AActor* checkactor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CheckFloatorDrown_eventBP_ActorIsFloat_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_CALLBACK_WRAPPERS
#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckFloatorDrown(); \
	friend struct Z_Construct_UClass_ACheckFloatorDrown_Statics; \
public: \
	DECLARE_CLASS(ACheckFloatorDrown, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CheckFloatDrown"), NO_API) \
	DECLARE_SERIALIZER(ACheckFloatorDrown)


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACheckFloatorDrown(); \
	friend struct Z_Construct_UClass_ACheckFloatorDrown_Statics; \
public: \
	DECLARE_CLASS(ACheckFloatorDrown, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CheckFloatDrown"), NO_API) \
	DECLARE_SERIALIZER(ACheckFloatorDrown)


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckFloatorDrown(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckFloatorDrown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckFloatorDrown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckFloatorDrown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckFloatorDrown(ACheckFloatorDrown&&); \
	NO_API ACheckFloatorDrown(const ACheckFloatorDrown&); \
public:


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckFloatorDrown(ACheckFloatorDrown&&); \
	NO_API ACheckFloatorDrown(const ACheckFloatorDrown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckFloatorDrown); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckFloatorDrown); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckFloatorDrown)


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_PRIVATE_PROPERTY_OFFSET
#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_16_PROLOG \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_EVENT_PARMS


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_PRIVATE_PROPERTY_OFFSET \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_SPARSE_DATA \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_RPC_WRAPPERS \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_CALLBACK_WRAPPERS \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_INCLASS \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_PRIVATE_PROPERTY_OFFSET \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_SPARSE_DATA \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_CALLBACK_WRAPPERS \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_INCLASS_NO_PURE_DECLS \
	CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHECKFLOATDROWN_API UClass* StaticClass<class ACheckFloatorDrown>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CheckFloatAndDrown_Plugins_CheckFloatDrown_Source_CheckFloatDrown_Public_CheckFloatorDrown_h


#define FOREACH_ENUM_ECHECKMETHODS(op) \
	op(ECheckMethods::LineTrace) \
	op(ECheckMethods::BoxTrace) \
	op(ECheckMethods::BoundCheck) 

enum class ECheckMethods : uint8;
template<> CHECKFLOATDROWN_API UEnum* StaticEnum<ECheckMethods>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
