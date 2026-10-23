#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA) == 0x000008, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA, EntryPoint) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_UIKit_ButtonBackground_CTA_C_ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA::K2Node_Event_IsDesignTime' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_PreConstruct");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_PreConstruct) == 0x000001, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_PreConstruct");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial final
{
public:
	class UMaterialInstance*                      Brush;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial) == 0x000010, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial, Brush) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial::Brush' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_UIKit_ButtonBackground_CTA_C_SetBackgroundMaterial::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial final
{
public:
	class UMaterialInstance*                      Border_Material;
	bool                                          IsAdditive;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial) == 0x000010, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial, Border_Material) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial::Border_Material' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial, IsAdditive) == 0x000008, "Member 'WBP_UIKit_ButtonBackground_CTA_C_SetBorderMaterial::IsAdditive' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled) == 0x000008, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionDisabled::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled) == 0x000008, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionEnabled::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused final
{
public:
	class UWidgetAnimation*                       AnimTransition;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused) == 0x000010, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused::AnimTransition' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionFocused::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed) == 0x000008, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionPressed::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased) == 0x000008, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionReleased::AnimTransition' has a wrong offset!");

struct WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused");
static_assert(sizeof(WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused) == 0x000008, "Wrong size on WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused");
static_assert(offsetof(WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused, AnimTransition) == 0x000000, "Member 'WBP_UIKit_ButtonBackground_CTA_C_TransitionUnfocused::AnimTransition' has a wrong offset!");

}
