#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_2A[0x6];
	class FText                                   K2Node_Event_Text_1;
	ESlateVisibility                              K2Node_Event_InVisibility;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_4A[0x6];
	class FText                                   K2Node_Event_Text;
};
static_assert(alignof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton) == 0x000008, "Wrong alignment on WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton");
static_assert(sizeof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton) == 0x000068, "Wrong size on WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, EntryPoint) == 0x000000, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000020, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_Event_IsDesignTime) == 0x000029, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_Event_Text_1) == 0x000030, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_Event_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_Event_InVisibility) == 0x000048, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_Event_InVisibility' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_SwitchEnum_CmpSuccess) == 0x000049, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton, K2Node_Event_Text) == 0x000050, "Member 'WBP_UIKit_SideBarLeaveButton_C_ExecuteUbergraph_WBP_UIKit_SideBarLeaveButton::K2Node_Event_Text' has a wrong offset!");

struct WBP_UIKit_SideBarLeaveButton_C_OnTextChanged final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(WBP_UIKit_SideBarLeaveButton_C_OnTextChanged) == 0x000008, "Wrong alignment on WBP_UIKit_SideBarLeaveButton_C_OnTextChanged");
static_assert(sizeof(WBP_UIKit_SideBarLeaveButton_C_OnTextChanged) == 0x000018, "Wrong size on WBP_UIKit_SideBarLeaveButton_C_OnTextChanged");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_OnTextChanged, Text_0) == 0x000000, "Member 'WBP_UIKit_SideBarLeaveButton_C_OnTextChanged::Text_0' has a wrong offset!");

struct WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged) == 0x000008, "Wrong alignment on WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged");
static_assert(sizeof(WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged) == 0x000018, "Wrong size on WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged, Text_0) == 0x000000, "Member 'WBP_UIKit_SideBarLeaveButton_C_OnTimerTextChanged::Text_0' has a wrong offset!");

struct WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged) == 0x000001, "Wrong alignment on WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged");
static_assert(sizeof(WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged) == 0x000001, "Wrong size on WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged, InVisibility) == 0x000000, "Member 'WBP_UIKit_SideBarLeaveButton_C_OnTimerVisibilityChanged::InVisibility' has a wrong offset!");

struct WBP_UIKit_SideBarLeaveButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_UIKit_SideBarLeaveButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UIKit_SideBarLeaveButton_C_PreConstruct");
static_assert(sizeof(WBP_UIKit_SideBarLeaveButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_UIKit_SideBarLeaveButton_C_PreConstruct");
static_assert(offsetof(WBP_UIKit_SideBarLeaveButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UIKit_SideBarLeaveButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
