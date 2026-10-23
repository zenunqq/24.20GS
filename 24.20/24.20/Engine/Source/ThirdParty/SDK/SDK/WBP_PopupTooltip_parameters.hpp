#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_6[0x2];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
};
static_assert(alignof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip) == 0x000008, "Wrong alignment on WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip");
static_assert(sizeof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip) == 0x000030, "Wrong size on WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, EntryPoint) == 0x000000, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_TextIsEmpty_ReturnValue) == 0x000005, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_IsMobileGame_ReturnValue) == 0x000010, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_GetEndTime_ReturnValue) == 0x000014, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'WBP_PopupTooltip_C_ExecuteUbergraph_WBP_PopupTooltip::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

struct WBP_PopupTooltip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_PopupTooltip_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PopupTooltip_C_PreConstruct");
static_assert(sizeof(WBP_PopupTooltip_C_PreConstruct) == 0x000001, "Wrong size on WBP_PopupTooltip_C_PreConstruct");
static_assert(offsetof(WBP_PopupTooltip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PopupTooltip_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_PopupTooltip_C_SetFirstLineText final
{
public:
	class FText                                   FirstLineText_0;
};
static_assert(alignof(WBP_PopupTooltip_C_SetFirstLineText) == 0x000008, "Wrong alignment on WBP_PopupTooltip_C_SetFirstLineText");
static_assert(sizeof(WBP_PopupTooltip_C_SetFirstLineText) == 0x000018, "Wrong size on WBP_PopupTooltip_C_SetFirstLineText");
static_assert(offsetof(WBP_PopupTooltip_C_SetFirstLineText, FirstLineText_0) == 0x000000, "Member 'WBP_PopupTooltip_C_SetFirstLineText::FirstLineText_0' has a wrong offset!");

}
