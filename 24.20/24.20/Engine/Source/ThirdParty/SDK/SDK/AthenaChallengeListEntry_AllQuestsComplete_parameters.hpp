#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet final
{
public:
	bool                                          bDisabled;
};
static_assert(alignof(AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet");
static_assert(sizeof(AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet) == 0x000001, "Wrong size on AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet, bDisabled) == 0x000000, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnChallengeInfoSet::bDisabled' has a wrong offset!");

struct AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	uint8                                         Pad_17A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_199[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          K2Node_Event_bDisabled;
	uint8                                         Pad_1A9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete");
static_assert(sizeof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete) == 0x0001C8, "Wrong size on AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, EntryPoint) == 0x000000, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, Temp_bool_Variable) == 0x000004, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, Temp_byte_Variable) == 0x000005, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, K2Node_Event_MyGeometry) == 0x000008, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, K2Node_Event_MouseEvent) == 0x0000E0, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_IsUsingTouch_ReturnValue) == 0x000178, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_IsUsingTouch_ReturnValue_1) == 0x000179, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_PlayAnimationForward_ReturnValue) == 0x000180, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000188, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_PlayAnimation_ReturnValue) == 0x000190, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, K2Node_Event_bIsSelected) == 0x000198, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x0001A0, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, K2Node_Event_bDisabled) == 0x0001A8, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::K2Node_Event_bDisabled' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x0001B0, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001B8, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete, K2Node_Select_Default) == 0x0001C0, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_ExecuteUbergraph_AthenaChallengeListEntry_AllQuestsComplete::K2Node_Select_Default' has a wrong offset!");

struct AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter");
static_assert(sizeof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter) == 0x0000D8, "Wrong size on AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave");
static_assert(sizeof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave) == 0x000098, "Wrong size on AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave");
static_assert(offsetof(AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaChallengeListEntry_AllQuestsComplete_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
