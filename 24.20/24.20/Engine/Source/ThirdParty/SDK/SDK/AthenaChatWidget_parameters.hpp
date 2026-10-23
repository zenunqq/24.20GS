#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bFocus;
	uint8                                         Pad_5[0x3];
	class UAthenaChatWidgetModalWrapper_C*        K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget) == 0x000008, "Wrong alignment on AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget");
static_assert(sizeof(AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget) == 0x000018, "Wrong size on AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget");
static_assert(offsetof(AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget, EntryPoint) == 0x000000, "Member 'AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget, K2Node_Event_bFocus) == 0x000004, "Member 'AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget::K2Node_Event_bFocus' has a wrong offset!");
static_assert(offsetof(AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget, K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper) == 0x000008, "Member 'AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget::K2Node_DynamicCast_AsAthena_Chat_Widget_Modal_Wrapper' has a wrong offset!");
static_assert(offsetof(AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct AthenaChatWidget_C_FocusChat final
{
public:
	bool                                          bFocus;
};
static_assert(alignof(AthenaChatWidget_C_FocusChat) == 0x000001, "Wrong alignment on AthenaChatWidget_C_FocusChat");
static_assert(sizeof(AthenaChatWidget_C_FocusChat) == 0x000001, "Wrong size on AthenaChatWidget_C_FocusChat");
static_assert(offsetof(AthenaChatWidget_C_FocusChat, bFocus) == 0x000000, "Member 'AthenaChatWidget_C_FocusChat::bFocus' has a wrong offset!");

}
