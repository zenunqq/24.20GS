#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA, EntryPoint) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_UIKit_ButtonText_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonText_CTA::K2Node_Event_IsDesignTime' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_PreConstruct");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_PreConstruct) == 0x000001, "Wrong size on WBP_UIKit_ButtonText_CTA_C_PreConstruct");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_SetFont final
{
public:
	struct FSlateFontInfo                         Font_0;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_SetFont) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_SetFont");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_SetFont) == 0x000060, "Wrong size on WBP_UIKit_ButtonText_CTA_C_SetFont");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetFont, Font_0) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_SetFont::Font_0' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetFont, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000058, "Member 'WBP_UIKit_ButtonText_CTA_C_SetFont::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier final
{
public:
	float                                         MobileFontSizeMultiplier;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier) == 0x000004, "Wrong size on WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier, MobileFontSizeMultiplier) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_SetMobileFontSizeMultiplier::MobileFontSizeMultiplier' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_SetText final
{
public:
	class FText                                   Text;
	bool                                          Empty;
	uint8                                         Pad_19[0x7];
	class FText                                   CallFunc_GetText_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_SetText) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_SetText");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_SetText) == 0x000040, "Wrong size on WBP_UIKit_ButtonText_CTA_C_SetText");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetText, Text) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_SetText::Text' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetText, Empty) == 0x000018, "Member 'WBP_UIKit_ButtonText_CTA_C_SetText::Empty' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetText, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'WBP_UIKit_ButtonText_CTA_C_SetText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_SetText, CallFunc_TextIsEmpty_ReturnValue) == 0x000038, "Member 'WBP_UIKit_ButtonText_CTA_C_SetText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_TransitionDisabled final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_TransitionDisabled) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_TransitionDisabled");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_TransitionDisabled) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_TransitionDisabled");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_TransitionDisabled, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_TransitionDisabled::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_TransitionEnabled final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_TransitionEnabled) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_TransitionEnabled");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_TransitionEnabled) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_TransitionEnabled");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_TransitionEnabled, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_TransitionEnabled::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_TransitionFocused final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_TransitionFocused) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_TransitionFocused");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_TransitionFocused) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_TransitionFocused");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_TransitionFocused, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_TransitionFocused::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_TransitionPressed final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_TransitionPressed) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_TransitionPressed");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_TransitionPressed) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_TransitionPressed");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_TransitionPressed, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_TransitionPressed::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_TransitionReleased final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_TransitionReleased) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_TransitionReleased");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_TransitionReleased) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_TransitionReleased");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_TransitionReleased, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_TransitionReleased::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused");
static_assert(sizeof(WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused) == 0x000008, "Wrong size on WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused");
static_assert(offsetof(WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonText_CTA_C_TransitionUnfocused::AnimTransition' has a wrong offset!");

}
