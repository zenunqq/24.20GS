#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TeamMemberPedestal_FeatInfo_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;
};
static_assert(alignof(TeamMemberPedestal_FeatInfo_C_OnAnimationFinished) == 0x000008, "Wrong alignment on TeamMemberPedestal_FeatInfo_C_OnAnimationFinished");
static_assert(sizeof(TeamMemberPedestal_FeatInfo_C_OnAnimationFinished) == 0x000008, "Wrong size on TeamMemberPedestal_FeatInfo_C_OnAnimationFinished");
static_assert(offsetof(TeamMemberPedestal_FeatInfo_C_OnAnimationFinished, Animation) == 0x000000, "Member 'TeamMemberPedestal_FeatInfo_C_OnAnimationFinished::Animation' has a wrong offset!");

struct TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	const class UWidgetAnimation*                 K2Node_Event_Animation;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo) == 0x000008, "Wrong alignment on TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo");
static_assert(sizeof(TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo) == 0x000020, "Wrong size on TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo");
static_assert(offsetof(TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo, K2Node_Event_Animation) == 0x000008, "Member 'TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'TeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}
