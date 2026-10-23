#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ErrorWindow_C_ExecuteUbergraph_ErrorWindow final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	TArray<class UErrorLlama_C*>                  K2Node_MakeArray_Array;
	class UErrorLlama_C*                          CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_95[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_C1[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	uint8                                         Pad_CC[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	float                                         CallFunc_GetEndTime_ReturnValue_2;
	uint8                                         Pad_E4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
	class FText                                   K2Node_Event_OverrideText;
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_111[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
};
static_assert(alignof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow) == 0x000008, "Wrong alignment on ErrorWindow_C_ExecuteUbergraph_ErrorWindow");
static_assert(sizeof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow) == 0x000120, "Wrong size on ErrorWindow_C_ExecuteUbergraph_ErrorWindow");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, EntryPoint) == 0x000000, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, Temp_int_Variable) == 0x000004, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, Temp_int_Variable_1) == 0x000008, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000018, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_Select_Default) == 0x000020, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x000028, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_PlayAnimation_ReturnValue_2) == 0x000048, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_RandomFloatInRange_ReturnValue) == 0x000050, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_CreateDelegate_OutputDelegate_3) == 0x000064, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_MakeArray_Array) == 0x000078, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_Array_Get_Item) == 0x000088, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_CreateDelegate_OutputDelegate_4) == 0x000098, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000A4, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000B0, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0000B8, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_IsMobileGame_ReturnValue) == 0x0000C0, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_GetEndTime_ReturnValue) == 0x0000C4, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_GetEndTime_ReturnValue_1) == 0x0000C8, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000D0, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_PlayAnimation_ReturnValue_4) == 0x0000D8, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_GetEndTime_ReturnValue_2) == 0x0000E0, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_GetEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_PlayAnimation_ReturnValue_5) == 0x0000E8, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_Event_OverrideText) == 0x0000F0, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_Event_OverrideText' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000108, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000114, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_ExecuteUbergraph_ErrorWindow, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000118, "Member 'ErrorWindow_C_ExecuteUbergraph_ErrorWindow::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

struct ErrorWindow_C_Initialize_Close_Button final
{
public:
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	int32                                         CallFunc_GetInputPriority_ReturnValue;
};
static_assert(alignof(ErrorWindow_C_Initialize_Close_Button) == 0x000008, "Wrong alignment on ErrorWindow_C_Initialize_Close_Button");
static_assert(sizeof(ErrorWindow_C_Initialize_Close_Button) == 0x000010, "Wrong size on ErrorWindow_C_Initialize_Close_Button");
static_assert(offsetof(ErrorWindow_C_Initialize_Close_Button, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'ErrorWindow_C_Initialize_Close_Button::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_Initialize_Close_Button, CallFunc_GetInputPriority_ReturnValue) == 0x000008, "Member 'ErrorWindow_C_Initialize_Close_Button::CallFunc_GetInputPriority_ReturnValue' has a wrong offset!");

struct ErrorWindow_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;
	struct FAnalogInputEvent                      InAnalogInputEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
};
static_assert(alignof(ErrorWindow_C_OnAnalogValueChanged) == 0x000008, "Wrong alignment on ErrorWindow_C_OnAnalogValueChanged");
static_assert(sizeof(ErrorWindow_C_OnAnalogValueChanged) == 0x0001F8, "Wrong size on ErrorWindow_C_OnAnalogValueChanged");
static_assert(offsetof(ErrorWindow_C_OnAnalogValueChanged, MyGeometry) == 0x000000, "Member 'ErrorWindow_C_OnAnalogValueChanged::MyGeometry' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_OnAnalogValueChanged, InAnalogInputEvent) == 0x000040, "Member 'ErrorWindow_C_OnAnalogValueChanged::InAnalogInputEvent' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_OnAnalogValueChanged, ReturnValue) == 0x000088, "Member 'ErrorWindow_C_OnAnalogValueChanged::ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorWindow_C_OnAnalogValueChanged, CallFunc_Unhandled_ReturnValue) == 0x000140, "Member 'ErrorWindow_C_OnAnalogValueChanged::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

struct ErrorWindow_C_OnOverrideCloseButtonText final
{
public:
	class FText                                   OverrideText;
};
static_assert(alignof(ErrorWindow_C_OnOverrideCloseButtonText) == 0x000008, "Wrong alignment on ErrorWindow_C_OnOverrideCloseButtonText");
static_assert(sizeof(ErrorWindow_C_OnOverrideCloseButtonText) == 0x000018, "Wrong size on ErrorWindow_C_OnOverrideCloseButtonText");
static_assert(offsetof(ErrorWindow_C_OnOverrideCloseButtonText, OverrideText) == 0x000000, "Member 'ErrorWindow_C_OnOverrideCloseButtonText::OverrideText' has a wrong offset!");

}
