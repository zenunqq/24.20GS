#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground) == 0x000008, "Wrong alignment on SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground");
static_assert(sizeof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground) == 0x000188, "Wrong size on SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, EntryPoint) == 0x000000, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, K2Node_Event_MyGeometry) == 0x000018, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, K2Node_Event_MouseEvent_1) == 0x000058, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground, K2Node_Event_MouseEvent) == 0x0000F0, "Member 'SidebarSettingEntryBackground_C_ExecuteUbergraph_SidebarSettingEntryBackground::K2Node_Event_MouseEvent' has a wrong offset!");

struct SidebarSettingEntryBackground_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SidebarSettingEntryBackground_C_OnMouseEnter) == 0x000008, "Wrong alignment on SidebarSettingEntryBackground_C_OnMouseEnter");
static_assert(sizeof(SidebarSettingEntryBackground_C_OnMouseEnter) == 0x0000D8, "Wrong size on SidebarSettingEntryBackground_C_OnMouseEnter");
static_assert(offsetof(SidebarSettingEntryBackground_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SidebarSettingEntryBackground_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SidebarSettingEntryBackground_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SidebarSettingEntryBackground_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SidebarSettingEntryBackground_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SidebarSettingEntryBackground_C_OnMouseLeave) == 0x000008, "Wrong alignment on SidebarSettingEntryBackground_C_OnMouseLeave");
static_assert(sizeof(SidebarSettingEntryBackground_C_OnMouseLeave) == 0x000098, "Wrong size on SidebarSettingEntryBackground_C_OnMouseLeave");
static_assert(offsetof(SidebarSettingEntryBackground_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SidebarSettingEntryBackground_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
