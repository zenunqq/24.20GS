#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue_1;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	const class UTexture2D*                       K2Node_Event_RewardIcon;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
};
static_assert(alignof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft) == 0x000008, "Wrong alignment on AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft");
static_assert(sizeof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft) == 0x000050, "Wrong size on AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, EntryPoint) == 0x000000, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x000004, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_IsAnimationPlayingForward_ReturnValue_1) == 0x000020, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_IsAnimationPlayingForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000028, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, K2Node_Event_RewardIcon) == 0x000030, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::K2Node_Event_RewardIcon' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000040, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000048, "Member 'AthenaExclusiveRewardBannerLeft_C_ExecuteUbergraph_AthenaExclusiveRewardBannerLeft::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

struct AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon final
{
public:
	const class UTexture2D*                       RewardIcon;
};
static_assert(alignof(AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon) == 0x000008, "Wrong alignment on AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon");
static_assert(sizeof(AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon) == 0x000008, "Wrong size on AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon");
static_assert(offsetof(AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon, RewardIcon) == 0x000000, "Member 'AthenaExclusiveRewardBannerLeft_C_OnInitBannerIcon::RewardIcon' has a wrong offset!");

}
