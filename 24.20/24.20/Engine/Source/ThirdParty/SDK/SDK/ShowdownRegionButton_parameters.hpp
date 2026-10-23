#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton) == 0x000004, "Wrong alignment on ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton");
static_assert(sizeof(ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton) == 0x000004, "Wrong size on ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton");
static_assert(offsetof(ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton, EntryPoint) == 0x000000, "Member 'ShowdownRegionButton_C_ExecuteUbergraph_ShowdownRegionButton::EntryPoint' has a wrong offset!");

struct ShowdownRegionButton_C_TransitionState final
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
static_assert(alignof(ShowdownRegionButton_C_TransitionState) == 0x000008, "Wrong alignment on ShowdownRegionButton_C_TransitionState");
static_assert(sizeof(ShowdownRegionButton_C_TransitionState) == 0x000040, "Wrong size on ShowdownRegionButton_C_TransitionState");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, TransitionAnimation) == 0x000000, "Member 'ShowdownRegionButton_C_TransitionState::TransitionAnimation' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, TransitionTime) == 0x000008, "Member 'ShowdownRegionButton_C_TransitionState::TransitionTime' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, PlayForward) == 0x000010, "Member 'ShowdownRegionButton_C_TransitionState::PlayForward' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000011, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_SafeDivide_ReturnValue) == 0x000018, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast) == 0x000038, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownRegionButton_C_TransitionState, CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast) == 0x00003C, "Member 'ShowdownRegionButton_C_TransitionState::CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast' has a wrong offset!");

}
