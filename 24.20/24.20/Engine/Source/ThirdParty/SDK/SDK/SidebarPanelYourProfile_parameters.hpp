#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile) == 0x000008, "Wrong alignment on SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile");
static_assert(sizeof(SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile) == 0x000010, "Wrong size on SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile");
static_assert(offsetof(SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile, EntryPoint) == 0x000000, "Member 'SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarPanelYourProfile_C_ExecuteUbergraph_SidebarPanelYourProfile::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
