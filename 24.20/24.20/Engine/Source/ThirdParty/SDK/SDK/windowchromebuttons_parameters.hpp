#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons) == 0x000008, "Wrong alignment on windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons");
static_assert(sizeof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons) == 0x000188, "Wrong size on windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons");
static_assert(offsetof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons, EntryPoint) == 0x000000, "Member 'windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons::EntryPoint' has a wrong offset!");
static_assert(offsetof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons, K2Node_Event_MyGeometry) == 0x000010, "Member 'windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons, K2Node_Event_MouseEvent_1) == 0x000050, "Member 'windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons, K2Node_Event_MouseEvent) == 0x0000E8, "Member 'windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons, CallFunc_PlayAnimation_ReturnValue_1) == 0x000180, "Member 'windowchromebuttons_C_ExecuteUbergraph_windowchromebuttons::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct windowchromebuttons_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(windowchromebuttons_C_OnMouseEnter) == 0x000008, "Wrong alignment on windowchromebuttons_C_OnMouseEnter");
static_assert(sizeof(windowchromebuttons_C_OnMouseEnter) == 0x0000D8, "Wrong size on windowchromebuttons_C_OnMouseEnter");
static_assert(offsetof(windowchromebuttons_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'windowchromebuttons_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(windowchromebuttons_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'windowchromebuttons_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct windowchromebuttons_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(windowchromebuttons_C_OnMouseLeave) == 0x000008, "Wrong alignment on windowchromebuttons_C_OnMouseLeave");
static_assert(sizeof(windowchromebuttons_C_OnMouseLeave) == 0x000098, "Wrong size on windowchromebuttons_C_OnMouseLeave");
static_assert(offsetof(windowchromebuttons_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'windowchromebuttons_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
