#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_6[0x2];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab) == 0x000008, "Wrong alignment on SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab");
static_assert(sizeof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab) == 0x000030, "Wrong size on SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, EntryPoint) == 0x000000, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_GetSelected_ReturnValue) == 0x000028, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_Not_PreBool_ReturnValue_1) == 0x000029, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
