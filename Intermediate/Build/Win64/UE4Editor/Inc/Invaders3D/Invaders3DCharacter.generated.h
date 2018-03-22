// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVADERS3D_Invaders3DCharacter_generated_h
#error "Invaders3DCharacter.generated.h already included, missing '#pragma once' in Invaders3DCharacter.h"
#endif
#define INVADERS3D_Invaders3DCharacter_generated_h

#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	}


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	}


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvaders3DCharacter(); \
	friend INVADERS3D_API class UClass* Z_Construct_UClass_AInvaders3DCharacter(); \
public: \
	DECLARE_CLASS(AInvaders3DCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Invaders3D"), NO_API) \
	DECLARE_SERIALIZER(AInvaders3DCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInvaders3DCharacter(); \
	friend INVADERS3D_API class UClass* Z_Construct_UClass_AInvaders3DCharacter(); \
public: \
	DECLARE_CLASS(AInvaders3DCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Invaders3D"), NO_API) \
	DECLARE_SERIALIZER(AInvaders3DCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInvaders3DCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInvaders3DCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvaders3DCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvaders3DCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvaders3DCharacter(AInvaders3DCharacter&&); \
	NO_API AInvaders3DCharacter(const AInvaders3DCharacter&); \
public:


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvaders3DCharacter(AInvaders3DCharacter&&); \
	NO_API AInvaders3DCharacter(const AInvaders3DCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvaders3DCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvaders3DCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInvaders3DCharacter)


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AInvaders3DCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AInvaders3DCharacter, FollowCamera); }


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_9_PROLOG
#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_RPC_WRAPPERS \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_INCLASS \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Invaders3D_Source_Invaders3D_Invaders3DCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Invaders3D_Source_Invaders3D_Invaders3DCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
