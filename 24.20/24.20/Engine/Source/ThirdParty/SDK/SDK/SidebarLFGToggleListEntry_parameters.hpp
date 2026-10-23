#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bIsLfgEnabled;
	uint8                                         Pad_11[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry) == 0x000008, "Wrong alignment on SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry");
static_assert(sizeof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry) == 0x000020, "Wrong size on SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry");
static_assert(offsetof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry, EntryPoint) == 0x000000, "Member 'SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry, K2Node_Event_bIsLfgEnabled) == 0x000010, "Member 'SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry::K2Node_Event_bIsLfgEnabled' has a wrong offset!");
static_assert(offsetof(SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'SidebarLFGToggleListEntry_C_ExecuteUbergraph_SidebarLFGToggleListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct SidebarLFGToggleListEntry_C_OnLfgSettingChanged final
{
public:
	bool                                          bIsLfgEnabled;
};
static_assert(alignof(SidebarLFGToggleListEntry_C_OnLfgSettingChanged) == 0x000001, "Wrong alignment on SidebarLFGToggleListEntry_C_OnLfgSettingChanged");
static_assert(sizeof(SidebarLFGToggleListEntry_C_OnLfgSettingChanged) == 0x000001, "Wrong size on SidebarLFGToggleListEntry_C_OnLfgSettingChanged");
static_assert(offsetof(SidebarLFGToggleListEntry_C_OnLfgSettingChanged, bIsLfgEnabled) == 0x000000, "Member 'SidebarLFGToggleListEntry_C_OnLfgSettingChanged::bIsLfgEnabled' has a wrong offset!");

}
