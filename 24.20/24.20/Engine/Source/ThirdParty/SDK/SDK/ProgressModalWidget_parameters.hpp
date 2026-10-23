#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ProgressModalWidget_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;
	struct FAnalogInputEvent                      InAnalogInputEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	struct FEventReply                            CallFunc_Handled_ReturnValue;
};
static_assert(alignof(ProgressModalWidget_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on ProgressModalWidget_C_OnAnalogValueChanged");
static_assert(sizeof(ProgressModalWidget_C_OnAnalogValueChanged) == 0x0002B0, "Wrong size on ProgressModalWidget_C_OnAnalogValueChanged");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000040, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, ReturnValue) == 0x000088, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x000140, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_OnAnalogValueChanged, CallFunc_Handled_ReturnValue) == 0x0001F8, "Member 'ProgressModalWidget_C_OnAnalogValueChanged::CallFunc_Handled_ReturnValue' has a wrong offset!");

struct ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
};
static_assert(alignof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget) == 0x000004, "Wrong alignment on ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget");
static_assert(sizeof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget) == 0x000034, "Wrong size on ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, EntryPoint) == 0x000000, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

}
