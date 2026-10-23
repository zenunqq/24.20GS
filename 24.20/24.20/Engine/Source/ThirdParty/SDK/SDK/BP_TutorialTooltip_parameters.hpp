#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_1B[0x5];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UBorderSlot*                            CallFunc_SlotAsBorderSlot_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_49[0x3];
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
};
static_assert(alignof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip) == 0x000008, "Wrong alignment on BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip");
static_assert(sizeof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip) == 0x000050, "Wrong size on BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, EntryPoint) == 0x000000, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, Temp_bool_Variable) == 0x000004, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, K2Node_MakeStruct_Margin) == 0x000008, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, Temp_byte_Variable) == 0x000018, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, Temp_byte_Variable_1) == 0x000019, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, K2Node_Event_IsDesignTime) == 0x00001A, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000020, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, CallFunc_SlotAsBorderSlot_ReturnValue) == 0x000040, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::CallFunc_SlotAsBorderSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, K2Node_Select_Default) == 0x000048, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip, K2Node_MakeStruct_Right_ImplicitCast) == 0x00004C, "Member 'BP_TutorialTooltip_C_ExecuteUbergraph_BP_TutorialTooltip::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");

struct BP_TutorialTooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BP_TutorialTooltip_C_PreConstruct) == 0x000001, "Wrong alignment on BP_TutorialTooltip_C_PreConstruct");
static_assert(sizeof(BP_TutorialTooltip_C_PreConstruct) == 0x000001, "Wrong size on BP_TutorialTooltip_C_PreConstruct");
static_assert(offsetof(BP_TutorialTooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_TutorialTooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
