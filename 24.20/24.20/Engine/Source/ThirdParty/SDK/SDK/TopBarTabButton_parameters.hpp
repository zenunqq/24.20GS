#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UClass*                                 Temp_class_Variable;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	bool                                          K2Node_CustomEvent_bIsSelected;
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;
	uint8                                         Pad_3A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;
	bool                                          K2Node_CustomEvent_Selected;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue_3;
	bool                                          CallFunc_IsMobileGame_ReturnValue_4;
	uint8                                         Pad_6E[0x2];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_5;
	uint8                                         Pad_79[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_8A[0x6];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_2;
	class UClass*                                 Temp_class_Variable_1;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UNormalBangWrapper_C*                   K2Node_DynamicCast_AsNormal_Bang_Wrapper;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_IsAlternateLabelStyleUsed_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_6;
	uint8                                         Pad_C4[0x4];
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue_7;
	uint8                                         Pad_D2[0x6];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_3;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_E2[0x6];
	class UClass*                                 K2Node_Select_Default;
	TDelegate<void(class UCommonButtonLegacy* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton) == 0x000008, "Wrong alignment on TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton");
static_assert(sizeof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton) == 0x000100, "Wrong size on TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, EntryPoint) == 0x000000, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, Temp_class_Variable) == 0x000008, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_MakeStruct_SlateColor_1) == 0x000024, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CustomEvent_bIsSelected) == 0x000038, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CustomEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000039, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000048, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000050, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000058, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CustomEvent_Button) == 0x000060, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CustomEvent_Selected) == 0x000068, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue) == 0x000069, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_1) == 0x00006A, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_2) == 0x00006B, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_3) == 0x00006C, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_4) == 0x00006D, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000070, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_5) == 0x000078, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x000080, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_BooleanAND_ReturnValue) == 0x000088, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_BooleanAND_ReturnValue_1) == 0x000089, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_GetRuntimeOptions_ReturnValue_2) == 0x000090, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_GetRuntimeOptions_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, Temp_class_Variable_1) == 0x000098, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x0000A0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_MakeStruct_Margin) == 0x0000A8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_DynamicCast_AsNormal_Bang_Wrapper) == 0x0000B8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_DynamicCast_AsNormal_Bang_Wrapper' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_Event_IsDesignTime) == 0x0000C1, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsAlternateLabelStyleUsed_ReturnValue) == 0x0000C2, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsAlternateLabelStyleUsed_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_6) == 0x0000C3, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x0000C8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_BooleanAND_ReturnValue_2) == 0x0000D0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_IsMobileGame_ReturnValue_7) == 0x0000D1, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_IsMobileGame_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_GetRuntimeOptions_ReturnValue_3) == 0x0000D8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_GetRuntimeOptions_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, Temp_bool_Variable) == 0x0000E0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, CallFunc_BooleanAND_ReturnValue_3) == 0x0000E1, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_Select_Default) == 0x0000E8, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton, K2Node_CreateDelegate_OutputDelegate) == 0x0000F0, "Member 'TopBarTabButton_C_ExecuteUbergraph_TopBarTabButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct TopBarTabButton_C_HandleSelectionChangedVisuals final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(TopBarTabButton_C_HandleSelectionChangedVisuals) == 0x000001, "Wrong alignment on TopBarTabButton_C_HandleSelectionChangedVisuals");
static_assert(sizeof(TopBarTabButton_C_HandleSelectionChangedVisuals) == 0x000001, "Wrong size on TopBarTabButton_C_HandleSelectionChangedVisuals");
static_assert(offsetof(TopBarTabButton_C_HandleSelectionChangedVisuals, bIsSelected) == 0x000000, "Member 'TopBarTabButton_C_HandleSelectionChangedVisuals::bIsSelected' has a wrong offset!");

struct TopBarTabButton_C_InitializeButtonBorderMID final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetSingleMaterialStyleMID_ReturnValue;
};
static_assert(alignof(TopBarTabButton_C_InitializeButtonBorderMID) == 0x000008, "Wrong alignment on TopBarTabButton_C_InitializeButtonBorderMID");
static_assert(sizeof(TopBarTabButton_C_InitializeButtonBorderMID) == 0x000008, "Wrong size on TopBarTabButton_C_InitializeButtonBorderMID");
static_assert(offsetof(TopBarTabButton_C_InitializeButtonBorderMID, CallFunc_GetSingleMaterialStyleMID_ReturnValue) == 0x000000, "Member 'TopBarTabButton_C_InitializeButtonBorderMID::CallFunc_GetSingleMaterialStyleMID_ReturnValue' has a wrong offset!");

struct TopBarTabButton_C_OnSelectedChangedEvent final
{
public:
	class UCommonButtonLegacy*                    Button;
	bool                                          Selected_0;
};
static_assert(alignof(TopBarTabButton_C_OnSelectedChangedEvent) == 0x000008, "Wrong alignment on TopBarTabButton_C_OnSelectedChangedEvent");
static_assert(sizeof(TopBarTabButton_C_OnSelectedChangedEvent) == 0x000010, "Wrong size on TopBarTabButton_C_OnSelectedChangedEvent");
static_assert(offsetof(TopBarTabButton_C_OnSelectedChangedEvent, Button) == 0x000000, "Member 'TopBarTabButton_C_OnSelectedChangedEvent::Button' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OnSelectedChangedEvent, Selected_0) == 0x000008, "Member 'TopBarTabButton_C_OnSelectedChangedEvent::Selected_0' has a wrong offset!");

struct TopBarTabButton_C_OverrideIcon final
{
public:
	bool                                          Show;
	uint8                                         Pad_1[0xF];
	struct FSlateBrush                            inSlateBrush;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(TopBarTabButton_C_OverrideIcon) == 0x000010, "Wrong alignment on TopBarTabButton_C_OverrideIcon");
static_assert(sizeof(TopBarTabButton_C_OverrideIcon) == 0x0000E0, "Wrong size on TopBarTabButton_C_OverrideIcon");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Show) == 0x000000, "Member 'TopBarTabButton_C_OverrideIcon::Show' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, inSlateBrush) == 0x000010, "Member 'TopBarTabButton_C_OverrideIcon::inSlateBrush' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Temp_bool_Variable) == 0x0000D0, "Member 'TopBarTabButton_C_OverrideIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Temp_byte_Variable) == 0x0000D1, "Member 'TopBarTabButton_C_OverrideIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, Temp_byte_Variable_1) == 0x0000D2, "Member 'TopBarTabButton_C_OverrideIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, K2Node_Select_Default) == 0x0000D3, "Member 'TopBarTabButton_C_OverrideIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_OverrideIcon, CallFunc_IsValid_ReturnValue) == 0x0000D4, "Member 'TopBarTabButton_C_OverrideIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct TopBarTabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(TopBarTabButton_C_PreConstruct) == 0x000001, "Wrong alignment on TopBarTabButton_C_PreConstruct");
static_assert(sizeof(TopBarTabButton_C_PreConstruct) == 0x000001, "Wrong size on TopBarTabButton_C_PreConstruct");
static_assert(offsetof(TopBarTabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TopBarTabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct TopBarTabButton_C_SeedRandomValues final
{
public:
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_3;
};
static_assert(alignof(TopBarTabButton_C_SeedRandomValues) == 0x000008, "Wrong alignment on TopBarTabButton_C_SeedRandomValues");
static_assert(sizeof(TopBarTabButton_C_SeedRandomValues) == 0x000020, "Wrong size on TopBarTabButton_C_SeedRandomValues");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000008, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000010, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SeedRandomValues, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000018, "Member 'TopBarTabButton_C_SeedRandomValues::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");

struct TopBarTabButton_C_SetText final
{
public:
	class FText                                   ButtonText_0;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(TopBarTabButton_C_SetText) == 0x000008, "Wrong alignment on TopBarTabButton_C_SetText");
static_assert(sizeof(TopBarTabButton_C_SetText) == 0x000020, "Wrong size on TopBarTabButton_C_SetText");
static_assert(offsetof(TopBarTabButton_C_SetText, ButtonText_0) == 0x000000, "Member 'TopBarTabButton_C_SetText::ButtonText_0' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SetText, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'TopBarTabButton_C_SetText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_SetText, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'TopBarTabButton_C_SetText::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct TopBarTabButton_C_UpdateMIDWithRandomValues final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
};
static_assert(alignof(TopBarTabButton_C_UpdateMIDWithRandomValues) == 0x000004, "Wrong alignment on TopBarTabButton_C_UpdateMIDWithRandomValues");
static_assert(sizeof(TopBarTabButton_C_UpdateMIDWithRandomValues) == 0x000014, "Wrong size on TopBarTabButton_C_UpdateMIDWithRandomValues");
static_assert(offsetof(TopBarTabButton_C_UpdateMIDWithRandomValues, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'TopBarTabButton_C_UpdateMIDWithRandomValues::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_UpdateMIDWithRandomValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000004, "Member 'TopBarTabButton_C_UpdateMIDWithRandomValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_UpdateMIDWithRandomValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000008, "Member 'TopBarTabButton_C_UpdateMIDWithRandomValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_UpdateMIDWithRandomValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x00000C, "Member 'TopBarTabButton_C_UpdateMIDWithRandomValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(TopBarTabButton_C_UpdateMIDWithRandomValues, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x000010, "Member 'TopBarTabButton_C_UpdateMIDWithRandomValues::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");

}
