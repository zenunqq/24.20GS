#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_UIKit_Block_Base_C_TransitionDisabled final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionDisabled) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionDisabled");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionDisabled) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionDisabled");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionDisabled, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionDisabled::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionEnabled final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionEnabled) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionEnabled");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionEnabled) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionEnabled");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionEnabled, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionEnabled::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionFocused final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionFocused) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionFocused");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionFocused) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionFocused");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionFocused, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionFocused::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionHovered final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionHovered) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionHovered");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionHovered) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionHovered");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionHovered, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionHovered::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionPressed final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionPressed) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionPressed");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionPressed) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionPressed");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionPressed, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionPressed::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionReleased final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionReleased) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionReleased");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionReleased) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionReleased");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionReleased, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionReleased::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionState final
{
public:
	class UWidgetAnimation*                       TransitionAnimation;
	double                                        TransitionTime;
	bool                                          PlayForward;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_12[0x6];
	double                                        CallFunc_SafeDivide_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	float                                         CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionState) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionState");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionState) == 0x000040, "Wrong size on WBP_UIKit_Block_Base_C_TransitionState");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, TransitionAnimation) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionState::TransitionAnimation' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, TransitionTime) == 0x000008, "Member 'WBP_UIKit_Block_Base_C_TransitionState::TransitionTime' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, PlayForward) == 0x000010, "Member 'WBP_UIKit_Block_Base_C_TransitionState::PlayForward' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000011, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_SafeDivide_ReturnValue) == 0x000018, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast) == 0x000038, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionState, CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast) == 0x00003C, "Member 'WBP_UIKit_Block_Base_C_TransitionState::CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionUnfocused final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionUnfocused) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionUnfocused");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionUnfocused) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionUnfocused");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionUnfocused, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionUnfocused::AnimTransition' has a wrong offset!");

struct WBP_UIKit_Block_Base_C_TransitionUnhovered final
{
public:
	class UWidgetAnimation*                       AnimTransition;
};
static_assert(alignof(WBP_UIKit_Block_Base_C_TransitionUnhovered) == 0x000008, "Wrong alignment on WBP_UIKit_Block_Base_C_TransitionUnhovered");
static_assert(sizeof(WBP_UIKit_Block_Base_C_TransitionUnhovered) == 0x000008, "Wrong size on WBP_UIKit_Block_Base_C_TransitionUnhovered");
static_assert(offsetof(WBP_UIKit_Block_Base_C_TransitionUnhovered, AnimTransition) == 0x000000, "Member 'WBP_UIKit_Block_Base_C_TransitionUnhovered::AnimTransition' has a wrong offset!");

}
