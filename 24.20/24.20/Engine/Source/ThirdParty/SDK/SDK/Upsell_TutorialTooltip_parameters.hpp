#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct Upsell_TutorialTooltip_C_SetTooltipEnabled final
{
public:
	bool                                          bInEnabled;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
};
static_assert(alignof(Upsell_TutorialTooltip_C_SetTooltipEnabled) == 0x000001, "Wrong alignment on Upsell_TutorialTooltip_C_SetTooltipEnabled");
static_assert(sizeof(Upsell_TutorialTooltip_C_SetTooltipEnabled) == 0x000002, "Wrong size on Upsell_TutorialTooltip_C_SetTooltipEnabled");
static_assert(offsetof(Upsell_TutorialTooltip_C_SetTooltipEnabled, bInEnabled) == 0x000000, "Member 'Upsell_TutorialTooltip_C_SetTooltipEnabled::bInEnabled' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_SetTooltipEnabled, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'Upsell_TutorialTooltip_C_SetTooltipEnabled::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

struct Upsell_TutorialTooltip_C_SetText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(Upsell_TutorialTooltip_C_SetText) == 0x000008, "Wrong alignment on Upsell_TutorialTooltip_C_SetText");
static_assert(sizeof(Upsell_TutorialTooltip_C_SetText) == 0x000018, "Wrong size on Upsell_TutorialTooltip_C_SetText");
static_assert(offsetof(Upsell_TutorialTooltip_C_SetText, Text) == 0x000000, "Member 'Upsell_TutorialTooltip_C_SetText::Text' has a wrong offset!");

struct Upsell_TutorialTooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(Upsell_TutorialTooltip_C_PreConstruct) == 0x000001, "Wrong alignment on Upsell_TutorialTooltip_C_PreConstruct");
static_assert(sizeof(Upsell_TutorialTooltip_C_PreConstruct) == 0x000001, "Wrong size on Upsell_TutorialTooltip_C_PreConstruct");
static_assert(offsetof(Upsell_TutorialTooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Upsell_TutorialTooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UBorderSlot*                            CallFunc_SlotAsBorderSlot_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip) == 0x000008, "Wrong alignment on Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip");
static_assert(sizeof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip) == 0x000030, "Wrong size on Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, EntryPoint) == 0x000000, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, Temp_bool_Variable) == 0x000004, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, Temp_byte_Variable) == 0x000005, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, Temp_byte_Variable_1) == 0x000006, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, K2Node_Event_IsDesignTime) == 0x000007, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, CallFunc_SlotAsBorderSlot_ReturnValue) == 0x000018, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::CallFunc_SlotAsBorderSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, K2Node_Select_Default) == 0x000020, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'Upsell_TutorialTooltip_C_ExecuteUbergraph_Upsell_TutorialTooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
