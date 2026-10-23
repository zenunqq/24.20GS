#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonBase*                      K2Node_Event_Button;
	class FText                                   K2Node_Event_Text;
	class UAthena_ConfirmationButton_C*           K2Node_DynamicCast_AsAthena_Confirmation_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow) == 0x000008, "Wrong alignment on Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow");
static_assert(sizeof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow) == 0x000038, "Wrong size on Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow");
static_assert(offsetof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow, EntryPoint) == 0x000000, "Member 'Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow, K2Node_Event_Button) == 0x000008, "Member 'Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow::K2Node_Event_Button' has a wrong offset!");
static_assert(offsetof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow, K2Node_Event_Text) == 0x000010, "Member 'Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow, K2Node_DynamicCast_AsAthena_Confirmation_Button) == 0x000028, "Member 'Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow::K2Node_DynamicCast_AsAthena_Confirmation_Button' has a wrong offset!");
static_assert(offsetof(Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct Athena_ConfirmationWindow_C_OnSetButtonText final
{
public:
	class UCommonButtonBase*                      Button;
	class FText                                   Text;
};
static_assert(alignof(Athena_ConfirmationWindow_C_OnSetButtonText) == 0x000008, "Wrong alignment on Athena_ConfirmationWindow_C_OnSetButtonText");
static_assert(sizeof(Athena_ConfirmationWindow_C_OnSetButtonText) == 0x000020, "Wrong size on Athena_ConfirmationWindow_C_OnSetButtonText");
static_assert(offsetof(Athena_ConfirmationWindow_C_OnSetButtonText, Button) == 0x000000, "Member 'Athena_ConfirmationWindow_C_OnSetButtonText::Button' has a wrong offset!");
static_assert(offsetof(Athena_ConfirmationWindow_C_OnSetButtonText, Text) == 0x000008, "Member 'Athena_ConfirmationWindow_C_OnSetButtonText::Text' has a wrong offset!");

}
