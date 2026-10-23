#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PageNavigator_C_ExecuteUbergraph_PageNavigator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UPageNavigatorButton_C*                 K2Node_DynamicCast_AsPage_Navigator_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UFortTextButton*                        K2Node_Event_NewPipButton;
	class UPageNavigatorPipButton_C*              K2Node_DynamicCast_AsPage_Navigator_Pip_Button;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_29[0x7];
	class UPageNavigatorButton_C*                 K2Node_DynamicCast_AsPage_Navigator_Button_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(PageNavigator_C_ExecuteUbergraph_PageNavigator) == 0x000008, "Wrong alignment on PageNavigator_C_ExecuteUbergraph_PageNavigator");
static_assert(sizeof(PageNavigator_C_ExecuteUbergraph_PageNavigator) == 0x000040, "Wrong size on PageNavigator_C_ExecuteUbergraph_PageNavigator");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, EntryPoint) == 0x000000, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::EntryPoint' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_AsPage_Navigator_Button) == 0x000008, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_AsPage_Navigator_Button' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_Event_NewPipButton) == 0x000018, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_Event_NewPipButton' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_AsPage_Navigator_Pip_Button) == 0x000020, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_AsPage_Navigator_Pip_Button' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_AsPage_Navigator_Button_1) == 0x000030, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_AsPage_Navigator_Button_1' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_DynamicCast_bSuccess_2) == 0x000038, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PageNavigator_C_ExecuteUbergraph_PageNavigator, K2Node_Event_IsDesignTime) == 0x000039, "Member 'PageNavigator_C_ExecuteUbergraph_PageNavigator::K2Node_Event_IsDesignTime' has a wrong offset!");

struct PageNavigator_C_OnPipButtonCreated final
{
public:
	class UFortTextButton*                        NewPipButton;
};
static_assert(alignof(PageNavigator_C_OnPipButtonCreated) == 0x000008, "Wrong alignment on PageNavigator_C_OnPipButtonCreated");
static_assert(sizeof(PageNavigator_C_OnPipButtonCreated) == 0x000008, "Wrong size on PageNavigator_C_OnPipButtonCreated");
static_assert(offsetof(PageNavigator_C_OnPipButtonCreated, NewPipButton) == 0x000000, "Member 'PageNavigator_C_OnPipButtonCreated::NewPipButton' has a wrong offset!");

struct PageNavigator_C_Play_intro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(PageNavigator_C_Play_intro) == 0x000008, "Wrong alignment on PageNavigator_C_Play_intro");
static_assert(sizeof(PageNavigator_C_Play_intro) == 0x000008, "Wrong size on PageNavigator_C_Play_intro");
static_assert(offsetof(PageNavigator_C_Play_intro, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'PageNavigator_C_Play_intro::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct PageNavigator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PageNavigator_C_PreConstruct) == 0x000001, "Wrong alignment on PageNavigator_C_PreConstruct");
static_assert(sizeof(PageNavigator_C_PreConstruct) == 0x000001, "Wrong size on PageNavigator_C_PreConstruct");
static_assert(offsetof(PageNavigator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PageNavigator_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
