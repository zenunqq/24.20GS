#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarPartyPortrait_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarPartyPortrait_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarPartyPortrait_C_PreConstruct");
static_assert(sizeof(SidebarPartyPortrait_C_PreConstruct) == 0x000001, "Wrong size on SidebarPartyPortrait_C_PreConstruct");
static_assert(offsetof(SidebarPartyPortrait_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarPartyPortrait_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarPartyPortrait_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

struct SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          Temp_bool_Variable_1;
	bool                                          K2Node_Event_bUsingNewAvatars;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait) == 0x000004, "Wrong alignment on SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait");
static_assert(sizeof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait) == 0x000010, "Wrong size on SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, EntryPoint) == 0x000000, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, Temp_byte_Variable) == 0x000004, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, Temp_byte_Variable_1) == 0x000005, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, Temp_bool_Variable) == 0x000006, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, Temp_byte_Variable_2) == 0x000007, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, Temp_byte_Variable_3) == 0x000008, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, K2Node_Event_IsDesignTime) == 0x000009, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, Temp_bool_Variable_1) == 0x00000A, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, K2Node_Event_bUsingNewAvatars) == 0x00000B, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, K2Node_Select_Default) == 0x00000C, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait, K2Node_Select_Default_1) == 0x00000D, "Member 'SidebarPartyPortrait_C_ExecuteUbergraph_SidebarPartyPortrait::K2Node_Select_Default_1' has a wrong offset!");

}
