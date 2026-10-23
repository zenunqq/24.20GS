#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bWasCancelled;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	uint8                                         Pad_6[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover) == 0x000004, "Wrong alignment on GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover");
static_assert(sizeof(GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover) == 0x000010, "Wrong size on GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover, EntryPoint) == 0x000000, "Member 'GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover, CallFunc_K2_CommitAbility_ReturnValue) == 0x000005, "Member 'GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility");
static_assert(sizeof(GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayAbilitySpecHandle             Handle;
	uint8                                         Pad_4C[0x4];
	struct FGameplayTagContainer                  RelevantTags;
	bool                                          ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_72[0x6];
	struct FGameplayTagContainer                  CallFunc_K2_CanActivateAbility_RelevantTags;
	bool                                          CallFunc_K2_CanActivateAbility_ReturnValue;
	uint8                                         Pad_99[0x7];
	double                                        Temp_real_Variable;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_B1[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_C9[0x7];
	double                                        K2Node_Select_Default;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_EB[0x5];
	double                                        K2Node_Select_Option_1_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility");
static_assert(sizeof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility) == 0x0000F8, "Wrong size on GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, Temp_bool_Variable) == 0x000071, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_K2_CanActivateAbility_RelevantTags) == 0x000078, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_K2_CanActivateAbility_RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_K2_CanActivateAbility_ReturnValue) == 0x000098, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_K2_CanActivateAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, Temp_real_Variable) == 0x0000A0, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000A8, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x0000B0, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_GetFloatAttribute_ReturnValue) == 0x0000B4, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000B8, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0000C0, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, K2Node_Select_Default) == 0x0000D0, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0000D8, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0000E8, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0000E9, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, CallFunc_BooleanAND_ReturnValue) == 0x0000EA, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility, K2Node_Select_Option_1_ImplicitCast) == 0x0000F0, "Member 'GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

}
