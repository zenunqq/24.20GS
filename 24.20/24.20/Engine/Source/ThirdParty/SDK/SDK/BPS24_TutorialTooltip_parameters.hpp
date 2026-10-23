#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_7[0x1];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UBorderSlot*                            CallFunc_SlotAsBorderSlot_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_31[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_45[0x3];
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
};
static_assert(alignof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip) == 0x000008, "Wrong alignment on BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip");
static_assert(sizeof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip) == 0x000050, "Wrong size on BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, EntryPoint) == 0x000000, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, Temp_bool_Variable) == 0x000004, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, Temp_byte_Variable) == 0x000005, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, K2Node_Event_IsDesignTime) == 0x000006, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, CallFunc_SlotAsBorderSlot_ReturnValue) == 0x000028, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::CallFunc_SlotAsBorderSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, Temp_byte_Variable_1) == 0x000030, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, K2Node_MakeStruct_Margin) == 0x000034, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, K2Node_Select_Default) == 0x000044, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip, K2Node_MakeStruct_Right_ImplicitCast) == 0x000048, "Member 'BPS24_TutorialTooltip_C_ExecuteUbergraph_BPS24_TutorialTooltip::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");

struct BPS24_TutorialTooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BPS24_TutorialTooltip_C_PreConstruct) == 0x000001, "Wrong alignment on BPS24_TutorialTooltip_C_PreConstruct");
static_assert(sizeof(BPS24_TutorialTooltip_C_PreConstruct) == 0x000001, "Wrong size on BPS24_TutorialTooltip_C_PreConstruct");
static_assert(offsetof(BPS24_TutorialTooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BPS24_TutorialTooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
