#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_Event_Progress;
	bool                                          K2Node_Event_bIsMaxLevel;
	uint8                                         Pad_11[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	const class UFortItem*                        K2Node_Event_RewardItem;
	TSoftObjectPtr<class UTexture2D>              K2Node_Event_RewardTexture;
	bool                                          K2Node_Event_bHasAdditionalStylesToDisplay;
	uint8                                         Pad_51[0x3];
	int32                                         K2Node_Event_RewardLevel;
	bool                                          K2Node_Event_bRequiresBattlePass;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5A[0x2];
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact) == 0x000008, "Wrong alignment on AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact");
static_assert(sizeof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact) == 0x000060, "Wrong size on AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, EntryPoint) == 0x000000, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_Progress) == 0x000008, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_Progress' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_bIsMaxLevel) == 0x000010, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_bIsMaxLevel' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_RewardItem) == 0x000020, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_RewardItem' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_RewardTexture) == 0x000028, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_RewardTexture' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_bHasAdditionalStylesToDisplay) == 0x000050, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_bHasAdditionalStylesToDisplay' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_RewardLevel) == 0x000054, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_RewardLevel' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, K2Node_Event_bRequiresBattlePass) == 0x000058, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::K2Node_Event_bRequiresBattlePass' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00005C, "Member 'AthenaPlayerLevelCompact_C_ExecuteUbergraph_AthenaPlayerLevelCompact::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1 final
{
public:
	const class UFortItem*                        RewardItem;
	TSoftObjectPtr<class UTexture2D>              RewardTexture;
	bool                                          bHasAdditionalStylesToDisplay;
	uint8                                         Pad_31[0x3];
	int32                                         RewardLevel;
	bool                                          bRequiresBattlePass;
};
static_assert(alignof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1) == 0x000008, "Wrong alignment on AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1");
static_assert(sizeof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1) == 0x000040, "Wrong size on AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1, RewardItem) == 0x000000, "Member 'AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1::RewardItem' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1, RewardTexture) == 0x000008, "Member 'AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1::RewardTexture' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1, bHasAdditionalStylesToDisplay) == 0x000030, "Member 'AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1::bHasAdditionalStylesToDisplay' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1, RewardLevel) == 0x000034, "Member 'AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1::RewardLevel' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1, bRequiresBattlePass) == 0x000038, "Member 'AthenaPlayerLevelCompact_C_OnUpdateRewardIcon_1::bRequiresBattlePass' has a wrong offset!");

struct AthenaPlayerLevelCompact_C_OnUpdateXpBar_1 final
{
public:
	double                                        Progress;
	bool                                          bIsMaxLevel;
};
static_assert(alignof(AthenaPlayerLevelCompact_C_OnUpdateXpBar_1) == 0x000008, "Wrong alignment on AthenaPlayerLevelCompact_C_OnUpdateXpBar_1");
static_assert(sizeof(AthenaPlayerLevelCompact_C_OnUpdateXpBar_1) == 0x000010, "Wrong size on AthenaPlayerLevelCompact_C_OnUpdateXpBar_1");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateXpBar_1, Progress) == 0x000000, "Member 'AthenaPlayerLevelCompact_C_OnUpdateXpBar_1::Progress' has a wrong offset!");
static_assert(offsetof(AthenaPlayerLevelCompact_C_OnUpdateXpBar_1, bIsMaxLevel) == 0x000008, "Member 'AthenaPlayerLevelCompact_C_OnUpdateXpBar_1::bIsMaxLevel' has a wrong offset!");

}
