#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_31[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_41[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	uint8                                         Pad_54[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton) == 0x000008, "Wrong alignment on BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton");
static_assert(sizeof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton) == 0x000080, "Wrong size on BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, EntryPoint) == 0x000000, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_GetSelected_ReturnValue) == 0x000010, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000018, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000028, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, K2Node_Event_IsDesignTime) == 0x000030, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000038, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_IsMobileGame_ReturnValue) == 0x000040, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, K2Node_MakeStruct_Margin) == 0x000044, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000058, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, K2Node_MakeStruct_Margin_1) == 0x000060, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000070, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'BP_SkewedTabButton_C_ExecuteUbergraph_BP_SkewedTabButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BP_SkewedTabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BP_SkewedTabButton_C_PreConstruct) == 0x000001, "Wrong alignment on BP_SkewedTabButton_C_PreConstruct");
static_assert(sizeof(BP_SkewedTabButton_C_PreConstruct) == 0x000001, "Wrong size on BP_SkewedTabButton_C_PreConstruct");
static_assert(offsetof(BP_SkewedTabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_SkewedTabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BP_SkewedTabButton_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
};
static_assert(alignof(BP_SkewedTabButton_C_SetTextColor) == 0x000008, "Wrong alignment on BP_SkewedTabButton_C_SetTextColor");
static_assert(sizeof(BP_SkewedTabButton_C_SetTextColor) == 0x000018, "Wrong size on BP_SkewedTabButton_C_SetTextColor");
static_assert(offsetof(BP_SkewedTabButton_C_SetTextColor, Color) == 0x000000, "Member 'BP_SkewedTabButton_C_SetTextColor::Color' has a wrong offset!");
static_assert(offsetof(BP_SkewedTabButton_C_SetTextColor, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000010, "Member 'BP_SkewedTabButton_C_SetTextColor::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");

}
