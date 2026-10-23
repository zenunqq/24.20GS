#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarProfile_C_ExecuteUbergraph_SidebarProfile final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SidebarProfile_C_ExecuteUbergraph_SidebarProfile) == 0x000008, "Wrong alignment on SidebarProfile_C_ExecuteUbergraph_SidebarProfile");
static_assert(sizeof(SidebarProfile_C_ExecuteUbergraph_SidebarProfile) == 0x000010, "Wrong size on SidebarProfile_C_ExecuteUbergraph_SidebarProfile");
static_assert(offsetof(SidebarProfile_C_ExecuteUbergraph_SidebarProfile, EntryPoint) == 0x000000, "Member 'SidebarProfile_C_ExecuteUbergraph_SidebarProfile::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarProfile_C_ExecuteUbergraph_SidebarProfile, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarProfile_C_ExecuteUbergraph_SidebarProfile::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
