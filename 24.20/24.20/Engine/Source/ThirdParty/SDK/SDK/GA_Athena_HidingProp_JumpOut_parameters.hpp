#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_7[0x1];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_E9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	uint8                                         Pad_102[0x6];
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	struct FGameplayEventData                     K2Node_Event_EventData;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;
	uint8                                         Pad_1D2[0x6];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_1E1[0x7];
	class AB_HidingProp_C*                        K2Node_DynamicCast_AsB_Hiding_Prop;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;
};
static_assert(alignof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut");
static_assert(sizeof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut) == 0x0001F8, "Wrong size on GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, EntryPoint) == 0x000000, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, Temp_bool_Variable) == 0x000004, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, Temp_bool_Variable_1) == 0x000005, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_IsServer_ReturnValue) == 0x000006, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000010, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_MakeStruct_GameplayEventData) == 0x000028, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000D8, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000E0, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, Temp_bool_Variable_2) == 0x0000E8, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x0000F0, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000101, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000108, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_Event_EventData) == 0x000110, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2) == 0x0001C0, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess_2) == 0x0001D0, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x0001D1, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsFort_Pawn) == 0x0001D8, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess_3) == 0x0001E0, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_AsB_Hiding_Prop) == 0x0001E8, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_AsB_Hiding_Prop' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, K2Node_DynamicCast_bSuccess_4) == 0x0001F0, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x0001F1, "Member 'GA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");

struct GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayAbilitySpecHandle             Handle;
	uint8                                         Pad_4C[0x4];
	struct FGameplayTagContainer                  RelevantTags;
	bool                                          ReturnValue;
	uint8                                         Pad_71[0x7];
	class AActor*                                 LocalAvatarActor;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_9A[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_B1[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_2;
	uint8                                         Pad_CB[0x5];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
};
static_assert(alignof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility) == 0x0000E8, "Wrong size on GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, LocalAvatarActor) == 0x000078, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::LocalAvatarActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable) == 0x000080, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x000081, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable_1) == 0x000082, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable_2) == 0x000083, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue) == 0x000084, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue_1) == 0x000085, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue_1) == 0x000086, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_IsValid_ReturnValue) == 0x000087, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000088, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000099, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x0000A0, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2) == 0x0000B8, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x0000C9, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue_2) == 0x0000CA, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3) == 0x0000D0, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_3) == 0x0000E0, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, Temp_bool_Variable_3) == 0x0000E1, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_HasMatchingGameplayTag_ReturnValue_3) == 0x0000E2, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_HasMatchingGameplayTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000E3, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue_2) == 0x0000E4, "Member 'GA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

}
