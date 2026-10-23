#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortSidebarCheckbox_C_ToggleCheckbox final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(FortSidebarCheckbox_C_ToggleCheckbox) == 0x000001, "Wrong alignment on FortSidebarCheckbox_C_ToggleCheckbox");
static_assert(sizeof(FortSidebarCheckbox_C_ToggleCheckbox) == 0x000001, "Wrong size on FortSidebarCheckbox_C_ToggleCheckbox");
static_assert(offsetof(FortSidebarCheckbox_C_ToggleCheckbox, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'FortSidebarCheckbox_C_ToggleCheckbox::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct FortSidebarCheckbox_C_SetSelected final
{
public:
	bool                                          NewSelected;
};
static_assert(alignof(FortSidebarCheckbox_C_SetSelected) == 0x000001, "Wrong alignment on FortSidebarCheckbox_C_SetSelected");
static_assert(sizeof(FortSidebarCheckbox_C_SetSelected) == 0x000001, "Wrong size on FortSidebarCheckbox_C_SetSelected");
static_assert(offsetof(FortSidebarCheckbox_C_SetSelected, NewSelected) == 0x000000, "Member 'FortSidebarCheckbox_C_SetSelected::NewSelected' has a wrong offset!");

struct FortSidebarCheckbox_C_Refresh final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(FortSidebarCheckbox_C_Refresh) == 0x000008, "Wrong alignment on FortSidebarCheckbox_C_Refresh");
static_assert(sizeof(FortSidebarCheckbox_C_Refresh) == 0x000010, "Wrong size on FortSidebarCheckbox_C_Refresh");
static_assert(offsetof(FortSidebarCheckbox_C_Refresh, Temp_bool_Variable) == 0x000000, "Member 'FortSidebarCheckbox_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FortSidebarCheckbox_C_Refresh, K2Node_Select_Default) == 0x000008, "Member 'FortSidebarCheckbox_C_Refresh::K2Node_Select_Default' has a wrong offset!");

struct FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox) == 0x000004, "Wrong alignment on FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox");
static_assert(sizeof(FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox) == 0x000004, "Wrong size on FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox");
static_assert(offsetof(FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox, EntryPoint) == 0x000000, "Member 'FortSidebarCheckbox_C_ExecuteUbergraph_FortSidebarCheckbox::EntryPoint' has a wrong offset!");

}
