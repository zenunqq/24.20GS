#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PreviewUnbindAction_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(PreviewUnbindAction_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on PreviewUnbindAction_C_BP_OnItemExpansionChanged");
static_assert(sizeof(PreviewUnbindAction_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on PreviewUnbindAction_C_BP_OnItemExpansionChanged");
static_assert(offsetof(PreviewUnbindAction_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'PreviewUnbindAction_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

struct PreviewUnbindAction_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(PreviewUnbindAction_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on PreviewUnbindAction_C_BP_OnItemSelectionChanged");
static_assert(sizeof(PreviewUnbindAction_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on PreviewUnbindAction_C_BP_OnItemSelectionChanged");
static_assert(offsetof(PreviewUnbindAction_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'PreviewUnbindAction_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_Event_ListItemObject;
	bool                                          K2Node_Event_bIsExpanded;
	bool                                          K2Node_Event_bIsSelected;
};
static_assert(alignof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction) == 0x000008, "Wrong alignment on PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction");
static_assert(sizeof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction) == 0x000018, "Wrong size on PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, EntryPoint) == 0x000000, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::EntryPoint' has a wrong offset!");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, K2Node_Event_ListItemObject) == 0x000008, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, K2Node_Event_bIsExpanded) == 0x000010, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction, K2Node_Event_bIsSelected) == 0x000011, "Member 'PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction::K2Node_Event_bIsSelected' has a wrong offset!");

struct PreviewUnbindAction_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(PreviewUnbindAction_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on PreviewUnbindAction_C_OnListItemObjectSet");
static_assert(sizeof(PreviewUnbindAction_C_OnListItemObjectSet) == 0x000008, "Wrong size on PreviewUnbindAction_C_OnListItemObjectSet");
static_assert(offsetof(PreviewUnbindAction_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'PreviewUnbindAction_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

}
