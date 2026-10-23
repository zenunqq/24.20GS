#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu final
{
public:
	int32                                         EntryPoint;
	struct FMargin                                K2Node_MakeStruct_Margin;
	uint8                                         Pad_14[0x4];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UWidget*                                K2Node_Event_NewWidget;
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;
};
static_assert(alignof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu) == 0x000008, "Wrong alignment on DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu");
static_assert(sizeof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu) == 0x000038, "Wrong size on DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, EntryPoint) == 0x000000, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, K2Node_MakeStruct_Margin) == 0x000004, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000018, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, CallFunc_IsMobileGame_ReturnValue) == 0x000020, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, K2Node_Event_NewWidget) == 0x000028, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::K2Node_Event_NewWidget' has a wrong offset!");
static_assert(offsetof(DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu, CallFunc_AddChildToOverlay_ReturnValue) == 0x000030, "Member 'DualBladeMenu_C_ExecuteUbergraph_DualBladeMenu::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

struct DualBladeMenu_C_OnFullScreenWidgetCreated final
{
public:
	class UWidget*                                NewWidget;
};
static_assert(alignof(DualBladeMenu_C_OnFullScreenWidgetCreated) == 0x000008, "Wrong alignment on DualBladeMenu_C_OnFullScreenWidgetCreated");
static_assert(sizeof(DualBladeMenu_C_OnFullScreenWidgetCreated) == 0x000008, "Wrong size on DualBladeMenu_C_OnFullScreenWidgetCreated");
static_assert(offsetof(DualBladeMenu_C_OnFullScreenWidgetCreated, NewWidget) == 0x000000, "Member 'DualBladeMenu_C_OnFullScreenWidgetCreated::NewWidget' has a wrong offset!");

}
