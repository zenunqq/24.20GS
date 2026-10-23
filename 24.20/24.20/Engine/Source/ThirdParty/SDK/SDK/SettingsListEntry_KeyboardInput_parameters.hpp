#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_5[0x3];
	class FText                                   K2Node_Event_PrimaryKeyText;
	class FText                                   K2Node_Event_SecondaryKeyText;
	class UScrollingTextButton_C*                 K2Node_DynamicCast_AsScrolling_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x7];
	class UScrollingTextButton_C*                 K2Node_DynamicCast_AsScrolling_Text_Button_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_51[0x7];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput) == 0x000008, "Wrong alignment on SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput");
static_assert(sizeof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput) == 0x0001D8, "Wrong size on SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, EntryPoint) == 0x000000, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_Event_PrimaryKeyText) == 0x000008, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_Event_PrimaryKeyText' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_Event_SecondaryKeyText) == 0x000020, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_Event_SecondaryKeyText' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_DynamicCast_AsScrolling_Text_Button) == 0x000038, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_DynamicCast_AsScrolling_Text_Button' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_DynamicCast_AsScrolling_Text_Button_1) == 0x000048, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_DynamicCast_AsScrolling_Text_Button_1' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_Event_MyGeometry) == 0x000058, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_Event_MouseEvent_1) == 0x000098, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000130, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, CallFunc_PlayAnimationForward_ReturnValue) == 0x000138, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput, K2Node_Event_MouseEvent) == 0x000140, "Member 'SettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput::K2Node_Event_MouseEvent' has a wrong offset!");

struct SettingsListEntry_KeyboardInput_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_KeyboardInput_C_OnMouseEnter) == 0x000008, "Wrong alignment on SettingsListEntry_KeyboardInput_C_OnMouseEnter");
static_assert(sizeof(SettingsListEntry_KeyboardInput_C_OnMouseEnter) == 0x0000D8, "Wrong size on SettingsListEntry_KeyboardInput_C_OnMouseEnter");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SettingsListEntry_KeyboardInput_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SettingsListEntry_KeyboardInput_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SettingsListEntry_KeyboardInput_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SettingsListEntry_KeyboardInput_C_OnMouseLeave) == 0x000008, "Wrong alignment on SettingsListEntry_KeyboardInput_C_OnMouseLeave");
static_assert(sizeof(SettingsListEntry_KeyboardInput_C_OnMouseLeave) == 0x000098, "Wrong size on SettingsListEntry_KeyboardInput_C_OnMouseLeave");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SettingsListEntry_KeyboardInput_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct SettingsListEntry_KeyboardInput_C_OnUpdateKeyText final
{
public:
	class FText                                   PrimaryKeyText;
	class FText                                   SecondaryKeyText;
};
static_assert(alignof(SettingsListEntry_KeyboardInput_C_OnUpdateKeyText) == 0x000008, "Wrong alignment on SettingsListEntry_KeyboardInput_C_OnUpdateKeyText");
static_assert(sizeof(SettingsListEntry_KeyboardInput_C_OnUpdateKeyText) == 0x000030, "Wrong size on SettingsListEntry_KeyboardInput_C_OnUpdateKeyText");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_OnUpdateKeyText, PrimaryKeyText) == 0x000000, "Member 'SettingsListEntry_KeyboardInput_C_OnUpdateKeyText::PrimaryKeyText' has a wrong offset!");
static_assert(offsetof(SettingsListEntry_KeyboardInput_C_OnUpdateKeyText, SecondaryKeyText) == 0x000018, "Member 'SettingsListEntry_KeyboardInput_C_OnUpdateKeyText::SecondaryKeyText' has a wrong offset!");

}
