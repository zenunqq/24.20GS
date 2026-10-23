#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_19[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_29[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_3B[0x5];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_B9[0x7];
	class ABP_VictoryDrone_C*                     CallFunc_FinishSpawningActor_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_3;
	uint8                                         Pad_CE[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class FName                                   CallFunc_GetRandomSectionName_SectionName;
	class FName                                   CallFunc_GetRandomSectionName_SectionName_1;
	class FName                                   CallFunc_GetRandomSectionName_SectionName_2;
	class FName                                   CallFunc_GetRandomSectionName_SectionName_3;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_5;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_6;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_7;
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_F9[0x3];
	class FName                                   CallFunc_GetRandomSectionName_SectionName_4;
	class FName                                   CallFunc_GetRandomSectionName_SectionName_5;
	class FName                                   CallFunc_GetRandomSectionName_SectionName_6;
	class FName                                   CallFunc_GetRandomSectionName_SectionName_7;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_2;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	EFortDamageZone                               CallFunc_GetDamageZone_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_12B[0x5];
	struct FGameplayEventData                     K2Node_Event_EventData;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult_1;
};
static_assert(alignof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath) == 0x000010, "Wrong alignment on GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath");
static_assert(sizeof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath) == 0x0002D0, "Wrong size on GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, EntryPoint) == 0x000000, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetActivatingPawn_ReturnValue) == 0x000010, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_Event_bWasCancelled) == 0x000018, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetActivatingPawn_ReturnValue_1) == 0x000020, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetActivatingPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_HasAuthority_ReturnValue) == 0x000028, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000030, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000040, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0000A8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0000B8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BooleanOR_ReturnValue) == 0x0000C8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C9, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000CA, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x0000CB, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_2) == 0x0000CC, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_3) == 0x0000CD, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName) == 0x0000DC, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_1) == 0x0000E0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_2) == 0x0000E4, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_3) == 0x0000E8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_4) == 0x0000EC, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_5) == 0x0000ED, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_6) == 0x0000EE, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue_7) == 0x0000EF, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0000F0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_4) == 0x0000FC, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_4' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_5) == 0x000100, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_5' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_6) == 0x000104, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_6' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName_7) == 0x000108, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName_7' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate_2) == 0x00010C, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetActivatingPawn_ReturnValue_2) == 0x000118, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetActivatingPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_AsFort_AIPawn) == 0x000120, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_bSuccess_1) == 0x000128, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetDamageZone_ReturnValue) == 0x000129, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetDamageZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00012A, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_Event_EventData) == 0x000130, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001E0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_SetFNameBasedOnHitDirection_NameResult) == 0x0001EC, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_SetFNameBasedOnHitDirection_NameResult' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0001F0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_SetFNameBasedOnHitDirection_NameResult_1) == 0x0002C0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_SetFNameBasedOnHitDirection_NameResult_1' has a wrong offset!");

struct GAB_GenericDeath_C_GetRandomSectionName final
{
public:
	int32                                         MaxNumberOfSections;
	class FName                                   OriginalSectionName;
	class FName                                   SectionName;
	int32                                         CallFunc_RandomInteger_ReturnValue;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
};
static_assert(alignof(GAB_GenericDeath_C_GetRandomSectionName) == 0x000008, "Wrong alignment on GAB_GenericDeath_C_GetRandomSectionName");
static_assert(sizeof(GAB_GenericDeath_C_GetRandomSectionName) == 0x000068, "Wrong size on GAB_GenericDeath_C_GetRandomSectionName");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, MaxNumberOfSections) == 0x000000, "Member 'GAB_GenericDeath_C_GetRandomSectionName::MaxNumberOfSections' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, OriginalSectionName) == 0x000004, "Member 'GAB_GenericDeath_C_GetRandomSectionName::OriginalSectionName' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, SectionName) == 0x000008, "Member 'GAB_GenericDeath_C_GetRandomSectionName::SectionName' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_RandomInteger_ReturnValue) == 0x00000C, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_MakeLiteralString_ReturnValue) == 0x000050, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Conv_StringToName_ReturnValue) == 0x000060, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

struct GAB_GenericDeath_C_InitializeDeathHitDirection final
{
public:
	struct FGameplayEventData                     EventHitData;
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
};
static_assert(alignof(GAB_GenericDeath_C_InitializeDeathHitDirection) == 0x000008, "Wrong alignment on GAB_GenericDeath_C_InitializeDeathHitDirection");
static_assert(sizeof(GAB_GenericDeath_C_InitializeDeathHitDirection) == 0x0001C8, "Wrong size on GAB_GenericDeath_C_InitializeDeathHitDirection");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, EventHitData) == 0x000000, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::EventHitData' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_ImpulseDirection) == 0x0000B0, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0000C8, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0000CC, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x0000D0, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001B0, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

struct GAB_GenericDeath_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAB_GenericDeath_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_GenericDeath_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericDeath_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_GenericDeath_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericDeath_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericDeath_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAB_GenericDeath_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAB_GenericDeath_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_GenericDeath_C_K2_OnEndAbility");
static_assert(sizeof(GAB_GenericDeath_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_GenericDeath_C_K2_OnEndAbility");
static_assert(offsetof(GAB_GenericDeath_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_GenericDeath_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}
