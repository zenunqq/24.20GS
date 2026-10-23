#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing) == 0x000008, "Wrong alignment on SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing");
static_assert(sizeof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing) == 0x000188, "Wrong size on SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, EntryPoint) == 0x000000, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, K2Node_Event_MyGeometry) == 0x000008, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000E0, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000E8, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing, K2Node_Event_MouseEvent) == 0x0000F0, "Member 'SettingsListEntry_Missing_C_ExecuteUbergraph_SettingsListEntry_Missing::K2Node_Event_MouseEvent' has a wrong offset!");

struct SettingsListEntry_Missing_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_Missing_C_OnMouseEnter) == 0x000008, "Wrong alignment on SettingsListEntry_Missing_C_OnMouseEnter");
static_assert(sizeof(SettingsListEntry_Missing_C_OnMouseEnter) == 0x0000D8, "Wrong size on SettingsListEntry_Missing_C_OnMouseEnter");
static_assert(offsetof(SettingsListEntry_Missing_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SettingsListEntry_Missing_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_Missing_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SettingsListEntry_Missing_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SettingsListEntry_Missing_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_Missing_C_OnMouseLeave) == 0x000008, "Wrong alignment on SettingsListEntry_Missing_C_OnMouseLeave");
static_assert(sizeof(SettingsListEntry_Missing_C_OnMouseLeave) == 0x000098, "Wrong size on SettingsListEntry_Missing_C_OnMouseLeave");
static_assert(offsetof(SettingsListEntry_Missing_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SettingsListEntry_Missing_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
