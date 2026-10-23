#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct StatusWidget_C_SetQuitButtonText final
{
public:
	class FText                                   QuitText;
};
static_assert(alignof(StatusWidget_C_SetQuitButtonText) == 0x000008, "Wrong alignment on StatusWidget_C_SetQuitButtonText");
static_assert(sizeof(StatusWidget_C_SetQuitButtonText) == 0x000018, "Wrong size on StatusWidget_C_SetQuitButtonText");
static_assert(offsetof(StatusWidget_C_SetQuitButtonText, QuitText) == 0x000000, "Member 'StatusWidget_C_SetQuitButtonText::QuitText' has a wrong offset!");

struct StatusWidget_C_SetContinueButtonText final
{
public:
	class FText                                   ContinueText;
};
static_assert(alignof(StatusWidget_C_SetContinueButtonText) == 0x000008, "Wrong alignment on StatusWidget_C_SetContinueButtonText");
static_assert(sizeof(StatusWidget_C_SetContinueButtonText) == 0x000018, "Wrong size on StatusWidget_C_SetContinueButtonText");
static_assert(offsetof(StatusWidget_C_SetContinueButtonText, ContinueText) == 0x000000, "Member 'StatusWidget_C_SetContinueButtonText::ContinueText' has a wrong offset!");

struct StatusWidget_C_ExecuteUbergraph_StatusWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_21[0x7];
	class FText                                   K2Node_Event_QuitText;
	class FText                                   K2Node_Event_ContinueText;
};
static_assert(alignof(StatusWidget_C_ExecuteUbergraph_StatusWidget) == 0x000008, "Wrong alignment on StatusWidget_C_ExecuteUbergraph_StatusWidget");
static_assert(sizeof(StatusWidget_C_ExecuteUbergraph_StatusWidget) == 0x000058, "Wrong size on StatusWidget_C_ExecuteUbergraph_StatusWidget");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, EntryPoint) == 0x000000, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000008, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, K2Node_DynamicCast_AsIcon_Text_Button_1) == 0x000018, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::K2Node_DynamicCast_AsIcon_Text_Button_1' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, K2Node_Event_QuitText) == 0x000028, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::K2Node_Event_QuitText' has a wrong offset!");
static_assert(offsetof(StatusWidget_C_ExecuteUbergraph_StatusWidget, K2Node_Event_ContinueText) == 0x000040, "Member 'StatusWidget_C_ExecuteUbergraph_StatusWidget::K2Node_Event_ContinueText' has a wrong offset!");

}
