// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ASSIGNMENT_1_Assignment_1Character_generated_h
#error "Assignment_1Character.generated.h already included, missing '#pragma once' in Assignment_1Character.h"
#endif
#define ASSIGNMENT_1_Assignment_1Character_generated_h

#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectPickup) \
	{ \
		P_FINISH; \
		this->CollectPickup(); \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PowerChange); \
		P_FINISH; \
		this->UpdatePower(Z_Param_PowerChange); \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetCurrentPower(); \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetInitialPower(); \
	}


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectPickup) \
	{ \
		P_FINISH; \
		this->CollectPickup(); \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PowerChange); \
		P_FINISH; \
		this->UpdatePower(Z_Param_PowerChange); \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetCurrentPower(); \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		*(float*)Z_Param__Result=this->GetInitialPower(); \
	}


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_EVENT_PARMS \
	struct Assignment_1Character_eventWireCollisionEffect_Parms \
	{ \
		FVector WireLocation; \
	};


extern ASSIGNMENT_1_API  FName ASSIGNMENT_1_PowerChangeEffect;
extern ASSIGNMENT_1_API  FName ASSIGNMENT_1_WireCollisionEffect;
#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_CALLBACK_WRAPPERS
#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAAssignment_1Character(); \
	friend ASSIGNMENT_1_API class UClass* Z_Construct_UClass_AAssignment_1Character(); \
	public: \
	DECLARE_CLASS(AAssignment_1Character, ACharacter, COMPILED_IN_FLAGS(0), 0, Assignment_1, NO_API) \
	DECLARE_SERIALIZER(AAssignment_1Character) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AAssignment_1Character*>(this); }


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAAssignment_1Character(); \
	friend ASSIGNMENT_1_API class UClass* Z_Construct_UClass_AAssignment_1Character(); \
	public: \
	DECLARE_CLASS(AAssignment_1Character, ACharacter, COMPILED_IN_FLAGS(0), 0, Assignment_1, NO_API) \
	DECLARE_SERIALIZER(AAssignment_1Character) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AAssignment_1Character*>(this); }


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssignment_1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssignment_1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignment_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignment_1Character); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AAssignment_1Character(const AAssignment_1Character& InCopy); \
public:


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AAssignment_1Character(const AAssignment_1Character& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignment_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignment_1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignment_1Character)


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_6_PROLOG \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_EVENT_PARMS


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_RPC_WRAPPERS \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_CALLBACK_WRAPPERS \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_INCLASS \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_CALLBACK_WRAPPERS \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_INCLASS_NO_PURE_DECLS \
	Assignment_1_Source_Assignment_1_Assignment_1Character_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment_1_Source_Assignment_1_Assignment_1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
