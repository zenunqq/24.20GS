#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_Text;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_21[0x7];
	class UWBP_MainMenuButton_C*                  K2Node_DynamicCast_AsWBP_Main_Menu_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	class FText                                   K2Node_Event_Text_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              K2Node_Event_InVisibility;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton) == 0x000008, "Wrong alignment on AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton");
static_assert(sizeof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton) == 0x000120, "Wrong size on AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, EntryPoint) == 0x000000, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_Event_Text) == 0x000008, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_Event_IsDesignTime) == 0x000020, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_DynamicCast_AsWBP_Main_Menu_Button) == 0x000028, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_DynamicCast_AsWBP_Main_Menu_Button' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_Event_Text_1) == 0x000088, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_Event_Text_1' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A0, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_MakeArray_Array) == 0x0000F0, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, CallFunc_Format_ReturnValue) == 0x000100, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_Event_InVisibility) == 0x000118, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_Event_InVisibility' has a wrong offset!");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton, K2Node_SwitchEnum_CmpSuccess) == 0x000119, "Member 'AthenaMainMenuLeaveButton_C_ExecuteUbergraph_AthenaMainMenuLeaveButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct AthenaMainMenuLeaveButton_C_OnTextChanged final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(AthenaMainMenuLeaveButton_C_OnTextChanged) == 0x000008, "Wrong alignment on AthenaMainMenuLeaveButton_C_OnTextChanged");
static_assert(sizeof(AthenaMainMenuLeaveButton_C_OnTextChanged) == 0x000018, "Wrong size on AthenaMainMenuLeaveButton_C_OnTextChanged");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_OnTextChanged, Text_0) == 0x000000, "Member 'AthenaMainMenuLeaveButton_C_OnTextChanged::Text_0' has a wrong offset!");

struct AthenaMainMenuLeaveButton_C_OnTimerTextChanged final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(AthenaMainMenuLeaveButton_C_OnTimerTextChanged) == 0x000008, "Wrong alignment on AthenaMainMenuLeaveButton_C_OnTimerTextChanged");
static_assert(sizeof(AthenaMainMenuLeaveButton_C_OnTimerTextChanged) == 0x000018, "Wrong size on AthenaMainMenuLeaveButton_C_OnTimerTextChanged");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_OnTimerTextChanged, Text_0) == 0x000000, "Member 'AthenaMainMenuLeaveButton_C_OnTimerTextChanged::Text_0' has a wrong offset!");

struct AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged) == 0x000001, "Wrong alignment on AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged");
static_assert(sizeof(AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged) == 0x000001, "Wrong size on AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged, InVisibility) == 0x000000, "Member 'AthenaMainMenuLeaveButton_C_OnTimerVisibilityChanged::InVisibility' has a wrong offset!");

struct AthenaMainMenuLeaveButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaMainMenuLeaveButton_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaMainMenuLeaveButton_C_PreConstruct");
static_assert(sizeof(AthenaMainMenuLeaveButton_C_PreConstruct) == 0x000001, "Wrong size on AthenaMainMenuLeaveButton_C_PreConstruct");
static_assert(offsetof(AthenaMainMenuLeaveButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaMainMenuLeaveButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
