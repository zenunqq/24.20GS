#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ShowdownRegionPopupMenu_C_BP_SetButtonText final
{
public:
	class UCommonButtonLegacy*                    Button;
	class FText                                   Text;
};
static_assert(alignof(ShowdownRegionPopupMenu_C_BP_SetButtonText) == 0x000008, "Wrong alignment on ShowdownRegionPopupMenu_C_BP_SetButtonText");
static_assert(sizeof(ShowdownRegionPopupMenu_C_BP_SetButtonText) == 0x000020, "Wrong size on ShowdownRegionPopupMenu_C_BP_SetButtonText");
static_assert(offsetof(ShowdownRegionPopupMenu_C_BP_SetButtonText, Button) == 0x000000, "Member 'ShowdownRegionPopupMenu_C_BP_SetButtonText::Button' has a wrong offset!");
static_assert(offsetof(ShowdownRegionPopupMenu_C_BP_SetButtonText, Text) == 0x000008, "Member 'ShowdownRegionPopupMenu_C_BP_SetButtonText::Text' has a wrong offset!");

struct ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonLegacy*                    K2Node_Event_Button;
	class FText                                   K2Node_Event_Text;
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu) == 0x000008, "Wrong alignment on ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu");
static_assert(sizeof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu) == 0x000038, "Wrong size on ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu");
static_assert(offsetof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu, EntryPoint) == 0x000000, "Member 'ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu, K2Node_Event_Button) == 0x000008, "Member 'ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu::K2Node_Event_Button' has a wrong offset!");
static_assert(offsetof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu, K2Node_Event_Text) == 0x000010, "Member 'ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000028, "Member 'ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ShowdownRegionPopupMenu_C_ExecuteUbergraph_ShowdownRegionPopupMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
