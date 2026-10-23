#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled final
{
public:
	bool                                          Show;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled) == 0x000008, "Wrong alignment on AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled");
static_assert(sizeof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled) == 0x000020, "Wrong size on AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, Show) == 0x000000, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::Show' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_IsVisible_ReturnValue) == 0x000001, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct AthenaLockerTab_C_AssignAllSlots final
{
public:
	TArray<class UAthenaCustomizationSlotSelectorButton*> K2Node_MakeArray_Array;
};
static_assert(alignof(AthenaLockerTab_C_AssignAllSlots) == 0x000008, "Wrong alignment on AthenaLockerTab_C_AssignAllSlots");
static_assert(sizeof(AthenaLockerTab_C_AssignAllSlots) == 0x000010, "Wrong size on AthenaLockerTab_C_AssignAllSlots");
static_assert(offsetof(AthenaLockerTab_C_AssignAllSlots, K2Node_MakeArray_Array) == 0x000000, "Member 'AthenaLockerTab_C_AssignAllSlots::K2Node_MakeArray_Array' has a wrong offset!");

struct AthenaLockerTab_C_BeginPickingCustomization final
{
public:
	class UCommonButtonBase*                      WidgetToReturnFocusTo;
	struct FAthenaCustomizationParams             CustomizationParams_0;
	class UAthenaCustomizationSlotButton_C*       SlotButton;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive;
	uint8                                         Pad_5E[0x2];
	class UAthenaCustomizationSlotButton_C*       K2Node_DynamicCast_AsAthena_Customization_Slot_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_69[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(AthenaLockerTab_C_BeginPickingCustomization) == 0x000008, "Wrong alignment on AthenaLockerTab_C_BeginPickingCustomization");
static_assert(sizeof(AthenaLockerTab_C_BeginPickingCustomization) == 0x000078, "Wrong size on AthenaLockerTab_C_BeginPickingCustomization");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, WidgetToReturnFocusTo) == 0x000000, "Member 'AthenaLockerTab_C_BeginPickingCustomization::WidgetToReturnFocusTo' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CustomizationParams_0) == 0x000008, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CustomizationParams_0' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, SlotButton) == 0x000050, "Member 'AthenaLockerTab_C_BeginPickingCustomization::SlotButton' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000058, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000059, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_BooleanAND_ReturnValue) == 0x00005A, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue_2) == 0x00005B, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable) == 0x00005C, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_GetCustomizationSlotActiveState_bOutActive) == 0x00005D, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_GetCustomizationSlotActiveState_bOutActive' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, K2Node_DynamicCast_AsAthena_Customization_Slot_Button) == 0x000060, "Member 'AthenaLockerTab_C_BeginPickingCustomization::K2Node_DynamicCast_AsAthena_Customization_Slot_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'AthenaLockerTab_C_BeginPickingCustomization::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_BeginPickingCustomization, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'AthenaLockerTab_C_BeginPickingCustomization::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_BackToGame_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_3B[0x5];
	class FString                                 K2Node_Event_LoadoutName_1;
	bool                                          K2Node_Event_bIsShuffleTile;
	uint8                                         Pad_51[0x7];
	class FText                                   K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	uint8                                         Pad_71[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   Temp_text_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_A9[0x7];
	class FText                                   K2Node_Select_Default_1;
	class UAthenaCustomizationSlotSelectorButton* K2Node_Event_SlotButton;
	class UAthenaCustomizationSlotButton_C*       K2Node_DynamicCast_AsAthena_Customization_Slot_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_D9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams;
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams_1;
	bool                                          CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_183[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class FText                                   K2Node_Event_RowDisplayName;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_1A9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_1B9[0x7];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;
	ESlateVisibility                              Temp_byte_Variable_5;
	uint8                                         Pad_1C9[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_1DB[0x5];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          K2Node_Event_bIsModified;
	bool                                          K2Node_Event_bCanShowToolTip;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_1ED[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_204[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	bool                                          K2Node_Event_bIsAvailable;
	uint8                                         Pad_21A[0x6];
	class FText                                   K2Node_Event_LoadoutName;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	ESlateVisibility                              K2Node_Select_Default_4;
	bool                                          CallFunc_IsVisible_ReturnValue_1;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
};
static_assert(alignof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab) == 0x000008, "Wrong alignment on AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab");
static_assert(sizeof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab) == 0x000248, "Wrong size on AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, EntryPoint) == 0x000000, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable) == 0x000004, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable) == 0x000005, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_1) == 0x000007, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_text_Variable) == 0x000008, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_text_Variable_1) == 0x000020, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_2) == 0x000038, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_2) == 0x000039, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_3) == 0x00003A, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_LoadoutName_1) == 0x000040, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_LoadoutName_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_bIsShuffleTile) == 0x000050, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_bIsShuffleTile' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default) == 0x000058, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000070, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_text_Variable_2) == 0x000090, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_3) == 0x0000A8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_1) == 0x0000B0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_SlotButton) == 0x0000C8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_SlotButton' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_AsAthena_Customization_Slot_Button) == 0x0000D0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_AsAthena_Customization_Slot_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue) == 0x0000E0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000E8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_MakeStruct_AthenaCustomizationParams) == 0x0000F0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_MakeStruct_AthenaCustomizationParams' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_MakeStruct_AthenaCustomizationParams_1) == 0x000138, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_MakeStruct_AthenaCustomizationParams_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue) == 0x000180, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_BooleanAND_ReturnValue) == 0x000181, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_2) == 0x000182, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_2) == 0x000188, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_RowDisplayName) == 0x000190, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_RowDisplayName' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_TextIsEmpty_ReturnValue) == 0x0001A8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001B0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_4) == 0x0001B8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_ComponentBoundEvent_Button_1) == 0x0001C0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_byte_Variable_5) == 0x0001C8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x0001D0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_bSuccess_1) == 0x0001D8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, Temp_bool_Variable_4) == 0x0001D9, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_3) == 0x0001DA, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1) == 0x0001E0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_DynamicCast_bSuccess_2) == 0x0001E8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_bIsModified) == 0x0001E9, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_bIsModified' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_bCanShowToolTip) == 0x0001EA, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_bCanShowToolTip' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_BooleanAND_ReturnValue_1) == 0x0001EB, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_IsVisible_ReturnValue) == 0x0001EC, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_3) == 0x0001F0, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_CreateDelegate_OutputDelegate) == 0x0001F8, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_4) == 0x000208, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_PlayAnimation_ReturnValue_5) == 0x000210, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_GetIsEnabled_ReturnValue) == 0x000218, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_bIsAvailable) == 0x000219, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_bIsAvailable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Event_LoadoutName) == 0x000220, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Event_LoadoutName' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_ComponentBoundEvent_Button) == 0x000238, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, K2Node_Select_Default_4) == 0x000240, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_IsVisible_ReturnValue_1) == 0x000241, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000242, "Member 'AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

struct AthenaLockerTab_C_LoadoutButtonCustomNavigationDown final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_12[0x6];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown) == 0x000008, "Wrong alignment on AthenaLockerTab_C_LoadoutButtonCustomNavigationDown");
static_assert(sizeof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown) == 0x000020, "Wrong size on AthenaLockerTab_C_LoadoutButtonCustomNavigationDown");
static_assert(offsetof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown, Navigation_0) == 0x000000, "Member 'AthenaLockerTab_C_LoadoutButtonCustomNavigationDown::Navigation_0' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown, ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_LoadoutButtonCustomNavigationDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown, Temp_bool_Variable) == 0x000010, "Member 'AthenaLockerTab_C_LoadoutButtonCustomNavigationDown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown, CallFunc_IsVisible_ReturnValue) == 0x000011, "Member 'AthenaLockerTab_C_LoadoutButtonCustomNavigationDown::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_LoadoutButtonCustomNavigationDown, K2Node_Select_Default) == 0x000018, "Member 'AthenaLockerTab_C_LoadoutButtonCustomNavigationDown::K2Node_Select_Default' has a wrong offset!");

struct AthenaLockerTab_C_OnBeginPickingCustomizationSlot final
{
public:
	class UAthenaCustomizationSlotSelectorButton* SlotButton;
};
static_assert(alignof(AthenaLockerTab_C_OnBeginPickingCustomizationSlot) == 0x000008, "Wrong alignment on AthenaLockerTab_C_OnBeginPickingCustomizationSlot");
static_assert(sizeof(AthenaLockerTab_C_OnBeginPickingCustomizationSlot) == 0x000008, "Wrong size on AthenaLockerTab_C_OnBeginPickingCustomizationSlot");
static_assert(offsetof(AthenaLockerTab_C_OnBeginPickingCustomizationSlot, SlotButton) == 0x000000, "Member 'AthenaLockerTab_C_OnBeginPickingCustomizationSlot::SlotButton' has a wrong offset!");

struct AthenaLockerTab_C_OnModifiedStatusUpdated final
{
public:
	bool                                          bIsModified;
	bool                                          bCanShowToolTip;
};
static_assert(alignof(AthenaLockerTab_C_OnModifiedStatusUpdated) == 0x000001, "Wrong alignment on AthenaLockerTab_C_OnModifiedStatusUpdated");
static_assert(sizeof(AthenaLockerTab_C_OnModifiedStatusUpdated) == 0x000002, "Wrong size on AthenaLockerTab_C_OnModifiedStatusUpdated");
static_assert(offsetof(AthenaLockerTab_C_OnModifiedStatusUpdated, bIsModified) == 0x000000, "Member 'AthenaLockerTab_C_OnModifiedStatusUpdated::bIsModified' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_OnModifiedStatusUpdated, bCanShowToolTip) == 0x000001, "Member 'AthenaLockerTab_C_OnModifiedStatusUpdated::bCanShowToolTip' has a wrong offset!");

struct AthenaLockerTab_C_OnPreviewActionButtonUpdated final
{
public:
	class FText                                   RowDisplayName;
};
static_assert(alignof(AthenaLockerTab_C_OnPreviewActionButtonUpdated) == 0x000008, "Wrong alignment on AthenaLockerTab_C_OnPreviewActionButtonUpdated");
static_assert(sizeof(AthenaLockerTab_C_OnPreviewActionButtonUpdated) == 0x000018, "Wrong size on AthenaLockerTab_C_OnPreviewActionButtonUpdated");
static_assert(offsetof(AthenaLockerTab_C_OnPreviewActionButtonUpdated, RowDisplayName) == 0x000000, "Member 'AthenaLockerTab_C_OnPreviewActionButtonUpdated::RowDisplayName' has a wrong offset!");

struct AthenaLockerTab_C_OnQuickRenameStatusUpdated final
{
public:
	bool                                          bIsAvailable;
	uint8                                         Pad_1[0x7];
	class FText                                   LoadoutName;
};
static_assert(alignof(AthenaLockerTab_C_OnQuickRenameStatusUpdated) == 0x000008, "Wrong alignment on AthenaLockerTab_C_OnQuickRenameStatusUpdated");
static_assert(sizeof(AthenaLockerTab_C_OnQuickRenameStatusUpdated) == 0x000020, "Wrong size on AthenaLockerTab_C_OnQuickRenameStatusUpdated");
static_assert(offsetof(AthenaLockerTab_C_OnQuickRenameStatusUpdated, bIsAvailable) == 0x000000, "Member 'AthenaLockerTab_C_OnQuickRenameStatusUpdated::bIsAvailable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_OnQuickRenameStatusUpdated, LoadoutName) == 0x000008, "Member 'AthenaLockerTab_C_OnQuickRenameStatusUpdated::LoadoutName' has a wrong offset!");

struct AthenaLockerTab_C_OnRefreshForNewLoadout final
{
public:
	class FString                                 LoadoutName;
	bool                                          bIsShuffleTile;
};
static_assert(alignof(AthenaLockerTab_C_OnRefreshForNewLoadout) == 0x000008, "Wrong alignment on AthenaLockerTab_C_OnRefreshForNewLoadout");
static_assert(sizeof(AthenaLockerTab_C_OnRefreshForNewLoadout) == 0x000018, "Wrong size on AthenaLockerTab_C_OnRefreshForNewLoadout");
static_assert(offsetof(AthenaLockerTab_C_OnRefreshForNewLoadout, LoadoutName) == 0x000000, "Member 'AthenaLockerTab_C_OnRefreshForNewLoadout::LoadoutName' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_OnRefreshForNewLoadout, bIsShuffleTile) == 0x000010, "Member 'AthenaLockerTab_C_OnRefreshForNewLoadout::bIsShuffleTile' has a wrong offset!");

struct AthenaLockerTab_C_PlayEquippedLockerMusic_STW final
{
public:
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	uint8                                         Pad_1[0x7];
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;
};
static_assert(alignof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW) == 0x000008, "Wrong alignment on AthenaLockerTab_C_PlayEquippedLockerMusic_STW");
static_assert(sizeof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW) == 0x000028, "Wrong size on AthenaLockerTab_C_PlayEquippedLockerMusic_STW");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetSubGame_ReturnValue) == 0x000000, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_Array_Get_Item) == 0x000020, "Member 'AthenaLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_Array_Get_Item' has a wrong offset!");

struct AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot) == 0x000008, "Wrong alignment on AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot");
static_assert(sizeof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot) == 0x000010, "Wrong size on AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_PlaySlotAnimationAndCenterSlot::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct AthenaLockerTab_C_PlaySlotClickedAnimation final
{
public:
	class UAthenaCustomizationSlotButton_C*       SlotToPlayAnimOn;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(AthenaLockerTab_C_PlaySlotClickedAnimation) == 0x000008, "Wrong alignment on AthenaLockerTab_C_PlaySlotClickedAnimation");
static_assert(sizeof(AthenaLockerTab_C_PlaySlotClickedAnimation) == 0x000018, "Wrong size on AthenaLockerTab_C_PlaySlotClickedAnimation");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotClickedAnimation, SlotToPlayAnimOn) == 0x000000, "Member 'AthenaLockerTab_C_PlaySlotClickedAnimation::SlotToPlayAnimOn' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotClickedAnimation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_PlaySlotClickedAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_PlaySlotClickedAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaLockerTab_C_PlaySlotClickedAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct AthenaLockerTab_C_TopRowCustomNavigationUp final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
	class UWidget*                                TargetWidget;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(AthenaLockerTab_C_TopRowCustomNavigationUp) == 0x000008, "Wrong alignment on AthenaLockerTab_C_TopRowCustomNavigationUp");
static_assert(sizeof(AthenaLockerTab_C_TopRowCustomNavigationUp) == 0x000028, "Wrong size on AthenaLockerTab_C_TopRowCustomNavigationUp");
static_assert(offsetof(AthenaLockerTab_C_TopRowCustomNavigationUp, Navigation_0) == 0x000000, "Member 'AthenaLockerTab_C_TopRowCustomNavigationUp::Navigation_0' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_TopRowCustomNavigationUp, ReturnValue) == 0x000008, "Member 'AthenaLockerTab_C_TopRowCustomNavigationUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_TopRowCustomNavigationUp, TargetWidget) == 0x000010, "Member 'AthenaLockerTab_C_TopRowCustomNavigationUp::TargetWidget' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_TopRowCustomNavigationUp, Temp_bool_Variable) == 0x000018, "Member 'AthenaLockerTab_C_TopRowCustomNavigationUp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_TopRowCustomNavigationUp, CallFunc_IsVisible_ReturnValue) == 0x000019, "Member 'AthenaLockerTab_C_TopRowCustomNavigationUp::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockerTab_C_TopRowCustomNavigationUp, K2Node_Select_Default) == 0x000020, "Member 'AthenaLockerTab_C_TopRowCustomNavigationUp::K2Node_Select_Default' has a wrong offset!");

struct AthenaLockerTab_C_UpdatePresetButtonStyles final
{
public:
	ECommonInputType                              InputPin;
};
static_assert(alignof(AthenaLockerTab_C_UpdatePresetButtonStyles) == 0x000001, "Wrong alignment on AthenaLockerTab_C_UpdatePresetButtonStyles");
static_assert(sizeof(AthenaLockerTab_C_UpdatePresetButtonStyles) == 0x000001, "Wrong size on AthenaLockerTab_C_UpdatePresetButtonStyles");
static_assert(offsetof(AthenaLockerTab_C_UpdatePresetButtonStyles, InputPin) == 0x000000, "Member 'AthenaLockerTab_C_UpdatePresetButtonStyles::InputPin' has a wrong offset!");

}
