#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ChatMessageEntry_C_OnFocusedChanged final
{
public:
	bool                                          bIsFocused;
};
static_assert(alignof(ChatMessageEntry_C_OnFocusedChanged) == 0x000001, "Wrong alignment on ChatMessageEntry_C_OnFocusedChanged");
static_assert(sizeof(ChatMessageEntry_C_OnFocusedChanged) == 0x000001, "Wrong size on ChatMessageEntry_C_OnFocusedChanged");
static_assert(offsetof(ChatMessageEntry_C_OnFocusedChanged, bIsFocused) == 0x000000, "Member 'ChatMessageEntry_C_OnFocusedChanged::bIsFocused' has a wrong offset!");

struct ChatMessageEntry_C_HandleSelectionStatusChanged final
{
public:
	bool                                          bIsSelected;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        K2Node_Select_Default;
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
	float                                         K2Node_MakeStruct_A_ImplicitCast;
};
static_assert(alignof(ChatMessageEntry_C_HandleSelectionStatusChanged) == 0x000008, "Wrong alignment on ChatMessageEntry_C_HandleSelectionStatusChanged");
static_assert(sizeof(ChatMessageEntry_C_HandleSelectionStatusChanged) == 0x000038, "Wrong size on ChatMessageEntry_C_HandleSelectionStatusChanged");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, bIsSelected) == 0x000000, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::bIsSelected' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, Temp_bool_Variable) == 0x000001, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, Temp_real_Variable) == 0x000008, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, Temp_real_Variable_1) == 0x000010, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, K2Node_Select_Default) == 0x000018, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, K2Node_MakeStruct_LinearColor) == 0x000020, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_HandleSelectionStatusChanged, K2Node_MakeStruct_A_ImplicitCast) == 0x000030, "Member 'ChatMessageEntry_C_HandleSelectionStatusChanged::K2Node_MakeStruct_A_ImplicitCast' has a wrong offset!");

struct ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsFocused;
};
static_assert(alignof(ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry) == 0x000004, "Wrong alignment on ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry");
static_assert(sizeof(ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry) == 0x000008, "Wrong size on ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry");
static_assert(offsetof(ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry, EntryPoint) == 0x000000, "Member 'ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry, K2Node_Event_bIsFocused) == 0x000004, "Member 'ChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry::K2Node_Event_bIsFocused' has a wrong offset!");

}
