#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_12[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	bool                                          K2Node_CustomEvent_bBladeOpen;
	uint8                                         Pad_1A9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;
	bool                                          CallFunc_BooleanXOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1BA[0x6];
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_4;
};
static_assert(alignof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton) == 0x000008, "Wrong alignment on SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton");
static_assert(sizeof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton) == 0x0001D0, "Wrong size on SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, EntryPoint) == 0x000000, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, Temp_bool_Variable) == 0x000010, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, K2Node_Event_IsDesignTime) == 0x000011, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000018, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, K2Node_Event_MyGeometry) == 0x000028, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, K2Node_Event_MouseEvent_1) == 0x000068, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, K2Node_Event_MouseEvent) == 0x000100, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000198, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x0001A0, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, K2Node_CustomEvent_bBladeOpen) == 0x0001A8, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::K2Node_CustomEvent_bBladeOpen' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x0001B0, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_BooleanXOR_ReturnValue) == 0x0001B8, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_BooleanAND_ReturnValue) == 0x0001B9, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, K2Node_Select_Default) == 0x0001C0, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton, CallFunc_PlayAnimationForward_ReturnValue_4) == 0x0001C8, "Member 'SortAndFilterButton_C_ExecuteUbergraph_SortAndFilterButton::CallFunc_PlayAnimationForward_ReturnValue_4' has a wrong offset!");

struct SortAndFilterButton_C_HandleBladeOpenChanged final
{
public:
	bool                                          bBladeOpen;
};
static_assert(alignof(SortAndFilterButton_C_HandleBladeOpenChanged) == 0x000001, "Wrong alignment on SortAndFilterButton_C_HandleBladeOpenChanged");
static_assert(sizeof(SortAndFilterButton_C_HandleBladeOpenChanged) == 0x000001, "Wrong size on SortAndFilterButton_C_HandleBladeOpenChanged");
static_assert(offsetof(SortAndFilterButton_C_HandleBladeOpenChanged, bBladeOpen) == 0x000000, "Member 'SortAndFilterButton_C_HandleBladeOpenChanged::bBladeOpen' has a wrong offset!");

struct SortAndFilterButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SortAndFilterButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on SortAndFilterButton_C_OnMouseEnter");
static_assert(sizeof(SortAndFilterButton_C_OnMouseEnter) == 0x0000D8, "Wrong size on SortAndFilterButton_C_OnMouseEnter");
static_assert(offsetof(SortAndFilterButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SortAndFilterButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SortAndFilterButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SortAndFilterButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SortAndFilterButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on SortAndFilterButton_C_OnMouseLeave");
static_assert(sizeof(SortAndFilterButton_C_OnMouseLeave) == 0x000098, "Wrong size on SortAndFilterButton_C_OnMouseLeave");
static_assert(offsetof(SortAndFilterButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SortAndFilterButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct SortAndFilterButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SortAndFilterButton_C_PreConstruct) == 0x000001, "Wrong alignment on SortAndFilterButton_C_PreConstruct");
static_assert(sizeof(SortAndFilterButton_C_PreConstruct) == 0x000001, "Wrong size on SortAndFilterButton_C_PreConstruct");
static_assert(offsetof(SortAndFilterButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SortAndFilterButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SortAndFilterButton_C_SetHighlightBorderVisibility final
{
public:
	bool                                          bVisible;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(SortAndFilterButton_C_SetHighlightBorderVisibility) == 0x000001, "Wrong alignment on SortAndFilterButton_C_SetHighlightBorderVisibility");
static_assert(sizeof(SortAndFilterButton_C_SetHighlightBorderVisibility) == 0x000005, "Wrong size on SortAndFilterButton_C_SetHighlightBorderVisibility");
static_assert(offsetof(SortAndFilterButton_C_SetHighlightBorderVisibility, bVisible) == 0x000000, "Member 'SortAndFilterButton_C_SetHighlightBorderVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SetHighlightBorderVisibility, Temp_bool_Variable) == 0x000001, "Member 'SortAndFilterButton_C_SetHighlightBorderVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SetHighlightBorderVisibility, Temp_byte_Variable) == 0x000002, "Member 'SortAndFilterButton_C_SetHighlightBorderVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SetHighlightBorderVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'SortAndFilterButton_C_SetHighlightBorderVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SetHighlightBorderVisibility, K2Node_Select_Default) == 0x000004, "Member 'SortAndFilterButton_C_SetHighlightBorderVisibility::K2Node_Select_Default' has a wrong offset!");

struct SortAndFilterButton_C_SetText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(SortAndFilterButton_C_SetText) == 0x000008, "Wrong alignment on SortAndFilterButton_C_SetText");
static_assert(sizeof(SortAndFilterButton_C_SetText) == 0x000018, "Wrong size on SortAndFilterButton_C_SetText");
static_assert(offsetof(SortAndFilterButton_C_SetText, Text) == 0x000000, "Member 'SortAndFilterButton_C_SetText::Text' has a wrong offset!");

struct SortAndFilterButton_C_SnapToEndOfAnimation final
{
public:
	class UWidgetAnimation*                       Animation;
	EUMGSequencePlayMode                          PlayMode;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SortAndFilterButton_C_SnapToEndOfAnimation) == 0x000008, "Wrong alignment on SortAndFilterButton_C_SnapToEndOfAnimation");
static_assert(sizeof(SortAndFilterButton_C_SnapToEndOfAnimation) == 0x000018, "Wrong size on SortAndFilterButton_C_SnapToEndOfAnimation");
static_assert(offsetof(SortAndFilterButton_C_SnapToEndOfAnimation, Animation) == 0x000000, "Member 'SortAndFilterButton_C_SnapToEndOfAnimation::Animation' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SnapToEndOfAnimation, PlayMode) == 0x000008, "Member 'SortAndFilterButton_C_SnapToEndOfAnimation::PlayMode' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SnapToEndOfAnimation, CallFunc_GetEndTime_ReturnValue) == 0x00000C, "Member 'SortAndFilterButton_C_SnapToEndOfAnimation::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SortAndFilterButton_C_SnapToEndOfAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SortAndFilterButton_C_SnapToEndOfAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
