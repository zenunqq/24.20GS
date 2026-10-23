#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct TT_Commando_FragGrenade_C_GetApplicationTag final
{
public:
	const class UGameplayAbility*                 AbilityInstance;
	struct FGameplayTag                           OutTag;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
	class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(TT_Commando_FragGrenade_C_GetApplicationTag) == 0x000008, "Wrong alignment on TT_Commando_FragGrenade_C_GetApplicationTag");
static_assert(sizeof(TT_Commando_FragGrenade_C_GetApplicationTag) == 0x000020, "Wrong size on TT_Commando_FragGrenade_C_GetApplicationTag");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetApplicationTag, AbilityInstance) == 0x000000, "Member 'TT_Commando_FragGrenade_C_GetApplicationTag::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetApplicationTag, OutTag) == 0x000008, "Member 'TT_Commando_FragGrenade_C_GetApplicationTag::OutTag' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetApplicationTag, ReturnValue) == 0x00000C, "Member 'TT_Commando_FragGrenade_C_GetApplicationTag::ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetApplicationTag, K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory) == 0x000010, "Member 'TT_Commando_FragGrenade_C_GetApplicationTag::K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetApplicationTag, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TT_Commando_FragGrenade_C_GetApplicationTag::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal final
{
public:
	const class UGameplayAbility*                 AbilityInstance;
	struct FGameplayTag                           tag;
	uint8                                         Pad_C[0x4];
	const class UFortTooltipContext*              Context;
	struct FGameplayTag                           Token;
	uint8                                         Pad_1C[0x4];
	class FText                                   OutText;
	bool                                          ReturnValue;
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	uint8                                         Pad_3A[0x6];
	class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_4A[0x2];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal) == 0x000008, "Wrong alignment on TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal");
static_assert(sizeof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal) == 0x0000D8, "Wrong size on TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, AbilityInstance) == 0x000000, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, tag) == 0x000008, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::tag' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, Context) == 0x000010, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, Token) == 0x000018, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::Token' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, OutText) == 0x000020, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::OutText' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, ReturnValue) == 0x000038, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000039, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory) == 0x000040, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00004C, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000050, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_MakeArray_Array) == 0x0000A8, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000D0, "Member 'TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal final
{
public:
	const class UGameplayAbility*                 AbilityInstance;
	const class UFortTooltipContext*              Context;
	class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal) == 0x000008, "Wrong alignment on TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal");
static_assert(sizeof(TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal) == 0x000020, "Wrong size on TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal");
static_assert(offsetof(TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal, AbilityInstance) == 0x000000, "Member 'TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal, Context) == 0x000008, "Member 'TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal, K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory) == 0x000010, "Member 'TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal::K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory' has a wrong offset!");
static_assert(offsetof(TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
