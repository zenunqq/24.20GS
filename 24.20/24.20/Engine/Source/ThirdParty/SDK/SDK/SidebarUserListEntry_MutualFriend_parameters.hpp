#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	bool                                          K2Node_Event_bUsingNewAvatars;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend) == 0x000004, "Wrong alignment on SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend");
static_assert(sizeof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend) == 0x000010, "Wrong size on SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, EntryPoint) == 0x000000, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, Temp_byte_Variable) == 0x000004, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, Temp_byte_Variable_1) == 0x000005, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, Temp_bool_Variable) == 0x000006, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, Temp_byte_Variable_2) == 0x000007, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, Temp_byte_Variable_3) == 0x000008, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, Temp_bool_Variable_1) == 0x000009, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, K2Node_Event_bUsingNewAvatars) == 0x00000A, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, K2Node_Select_Default) == 0x00000B, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend, K2Node_Select_Default_1) == 0x00000C, "Member 'SidebarUserListEntry_MutualFriend_C_ExecuteUbergraph_SidebarUserListEntry_MutualFriend::K2Node_Select_Default_1' has a wrong offset!");

struct SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarUserListEntry_MutualFriend_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

}
