#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled final
{
public:
	bool                                          Show;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled) == 0x000008, "Wrong alignment on BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled");
static_assert(sizeof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled) == 0x000020, "Wrong size on BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled");
static_assert(offsetof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled, Show) == 0x000000, "Member 'BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled::Show' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_IsVisible_ReturnValue) == 0x000001, "Member 'BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'BacchusLockerTab_C_AnimShowRandomDisclaimerEnabled::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct BacchusLockerTab_C_AssignAllSlots final
{
public:
	TArray<class UAthenaCustomizationSlotSelectorButton*> K2Node_MakeArray_Array;
};
static_assert(alignof(BacchusLockerTab_C_AssignAllSlots) == 0x000008, "Wrong alignment on BacchusLockerTab_C_AssignAllSlots");
static_assert(sizeof(BacchusLockerTab_C_AssignAllSlots) == 0x000010, "Wrong size on BacchusLockerTab_C_AssignAllSlots");
static_assert(offsetof(BacchusLockerTab_C_AssignAllSlots, K2Node_MakeArray_Array) == 0x000000, "Member 'BacchusLockerTab_C_AssignAllSlots::K2Node_MakeArray_Array' has a wrong offset!");

struct BacchusLockerTab_C_BeginPickingCustomization final
{
public:
	class UCommonButtonBase*                      WidgetToReturnFocusTo;
	struct FAthenaCustomizationParams             CustomizationParams_0;
	class UAthenaCustomizationSlotButton_C*       SlotButton;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive;
	uint8                                         Pad_5E[0x2];
	class UAthenaCustomizationSlotButton_C*       K2Node_DynamicCast_AsAthena_Customization_Slot_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_69[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(BacchusLockerTab_C_BeginPickingCustomization) == 0x000008, "Wrong alignment on BacchusLockerTab_C_BeginPickingCustomization");
static_assert(sizeof(BacchusLockerTab_C_BeginPickingCustomization) == 0x000078, "Wrong size on BacchusLockerTab_C_BeginPickingCustomization");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, WidgetToReturnFocusTo) == 0x000000, "Member 'BacchusLockerTab_C_BeginPickingCustomization::WidgetToReturnFocusTo' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CustomizationParams_0) == 0x000008, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CustomizationParams_0' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, SlotButton) == 0x000050, "Member 'BacchusLockerTab_C_BeginPickingCustomization::SlotButton' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000058, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000059, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_NotEqual_ObjectObject_ReturnValue_2) == 0x00005A, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_NotEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_BooleanAND_ReturnValue) == 0x00005B, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable) == 0x00005C, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_GetCustomizationSlotActiveState_bOutActive) == 0x00005D, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_GetCustomizationSlotActiveState_bOutActive' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, K2Node_DynamicCast_AsAthena_Customization_Slot_Button) == 0x000060, "Member 'BacchusLockerTab_C_BeginPickingCustomization::K2Node_DynamicCast_AsAthena_Customization_Slot_Button' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BacchusLockerTab_C_BeginPickingCustomization::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_BeginPickingCustomization, CallFunc_PlayAnimation_ReturnValue) == 0x000070, "Member 'BacchusLockerTab_C_BeginPickingCustomization::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BacchusLockerTab_C_BndEvt__AthenaLockerTab_Button_QuickRename2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   Temp_text_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_24[0x4];
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_5C[0x4];
	class FString                                 K2Node_Event_LoadoutName_1;
	bool                                          K2Node_Event_bIsShuffleTile;
	uint8                                         Pad_71[0x7];
	class FText                                   K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	uint8                                         Pad_91[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_B1[0x7];
	class FText                                   K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable_5;
	uint8                                         Pad_D1[0x7];
	class UAthenaCustomizationSlotSelectorButton* K2Node_Event_SlotButton;
	class UAthenaCustomizationSlotButton_C*       K2Node_DynamicCast_AsAthena_Customization_Slot_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_E9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams;
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams_1;
	bool                                          CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_194[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_1A9[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_1BA[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          K2Node_Event_bIsAvailable;
	uint8                                         Pad_1C9[0x7];
	class FText                                   K2Node_Event_LoadoutName;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	ESlateVisibility                              K2Node_Select_Default_4;
	bool                                          K2Node_Event_bIsModified;
	bool                                          K2Node_Event_bCanShowToolTip;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_1F5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_20C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	bool                                          CallFunc_IsVisible_ReturnValue_1;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
};
static_assert(alignof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab) == 0x000008, "Wrong alignment on BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab");
static_assert(sizeof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab) == 0x000220, "Wrong size on BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, EntryPoint) == 0x000000, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_text_Variable) == 0x000008, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_bool_Variable) == 0x000020, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_byte_Variable) == 0x000021, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_byte_Variable_1) == 0x000022, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_bool_Variable_1) == 0x000023, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_text_Variable_1) == 0x000028, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_text_Variable_2) == 0x000040, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_bool_Variable_2) == 0x000058, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_byte_Variable_2) == 0x000059, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_byte_Variable_3) == 0x00005A, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_bool_Variable_3) == 0x00005B, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_LoadoutName_1) == 0x000060, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_LoadoutName_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_bIsShuffleTile) == 0x000070, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_bIsShuffleTile' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Select_Default) == 0x000078, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000090, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_Conv_StringToText_ReturnValue) == 0x000098, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_byte_Variable_4) == 0x0000B0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Select_Default_1) == 0x0000B8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_byte_Variable_5) == 0x0000D0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_SlotButton) == 0x0000D8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_SlotButton' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_DynamicCast_AsAthena_Customization_Slot_Button) == 0x0000E0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_DynamicCast_AsAthena_Customization_Slot_Button' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimation_ReturnValue) == 0x0000F0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000F8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_MakeStruct_AthenaCustomizationParams) == 0x000100, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_MakeStruct_AthenaCustomizationParams' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_MakeStruct_AthenaCustomizationParams_1) == 0x000148, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_MakeStruct_AthenaCustomizationParams_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue) == 0x000190, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_ShouldDisplayNextRandomPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_BooleanAND_ReturnValue) == 0x000191, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Select_Default_2) == 0x000192, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_CustomEvent_bNewInputType) == 0x000193, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimationForward_ReturnValue) == 0x000198, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimation_ReturnValue_2) == 0x0001A0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, Temp_bool_Variable_4) == 0x0001A8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x0001B0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_DynamicCast_bSuccess_1) == 0x0001B8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Select_Default_3) == 0x0001B9, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimation_ReturnValue_3) == 0x0001C0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_bIsAvailable) == 0x0001C8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_bIsAvailable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_LoadoutName) == 0x0001D0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_LoadoutName' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_ComponentBoundEvent_Button) == 0x0001E8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Select_Default_4) == 0x0001F0, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_bIsModified) == 0x0001F1, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_bIsModified' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_Event_bCanShowToolTip) == 0x0001F2, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_Event_bCanShowToolTip' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_BooleanAND_ReturnValue_1) == 0x0001F3, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_IsVisible_ReturnValue) == 0x0001F4, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimation_ReturnValue_4) == 0x0001F8, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, K2Node_CreateDelegate_OutputDelegate) == 0x000200, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_PlayAnimation_ReturnValue_5) == 0x000210, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_GetIsEnabled_ReturnValue) == 0x000218, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_IsVisible_ReturnValue_1) == 0x000219, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x00021A, "Member 'BacchusLockerTab_C_ExecuteUbergraph_BacchusLockerTab::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

struct BacchusLockerTab_C_LoadoutButtonCustomNavigationDown final
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
static_assert(alignof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown) == 0x000008, "Wrong alignment on BacchusLockerTab_C_LoadoutButtonCustomNavigationDown");
static_assert(sizeof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown) == 0x000020, "Wrong size on BacchusLockerTab_C_LoadoutButtonCustomNavigationDown");
static_assert(offsetof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown, Navigation_0) == 0x000000, "Member 'BacchusLockerTab_C_LoadoutButtonCustomNavigationDown::Navigation_0' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown, ReturnValue) == 0x000008, "Member 'BacchusLockerTab_C_LoadoutButtonCustomNavigationDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown, Temp_bool_Variable) == 0x000010, "Member 'BacchusLockerTab_C_LoadoutButtonCustomNavigationDown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown, CallFunc_IsVisible_ReturnValue) == 0x000011, "Member 'BacchusLockerTab_C_LoadoutButtonCustomNavigationDown::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_LoadoutButtonCustomNavigationDown, K2Node_Select_Default) == 0x000018, "Member 'BacchusLockerTab_C_LoadoutButtonCustomNavigationDown::K2Node_Select_Default' has a wrong offset!");

struct BacchusLockerTab_C_OnBeginPickingCustomizationSlot final
{
public:
	class UAthenaCustomizationSlotSelectorButton* SlotButton;
};
static_assert(alignof(BacchusLockerTab_C_OnBeginPickingCustomizationSlot) == 0x000008, "Wrong alignment on BacchusLockerTab_C_OnBeginPickingCustomizationSlot");
static_assert(sizeof(BacchusLockerTab_C_OnBeginPickingCustomizationSlot) == 0x000008, "Wrong size on BacchusLockerTab_C_OnBeginPickingCustomizationSlot");
static_assert(offsetof(BacchusLockerTab_C_OnBeginPickingCustomizationSlot, SlotButton) == 0x000000, "Member 'BacchusLockerTab_C_OnBeginPickingCustomizationSlot::SlotButton' has a wrong offset!");

struct BacchusLockerTab_C_OnInputMethodChanged_Event_0 final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(BacchusLockerTab_C_OnInputMethodChanged_Event_0) == 0x000001, "Wrong alignment on BacchusLockerTab_C_OnInputMethodChanged_Event_0");
static_assert(sizeof(BacchusLockerTab_C_OnInputMethodChanged_Event_0) == 0x000001, "Wrong size on BacchusLockerTab_C_OnInputMethodChanged_Event_0");
static_assert(offsetof(BacchusLockerTab_C_OnInputMethodChanged_Event_0, bNewInputType) == 0x000000, "Member 'BacchusLockerTab_C_OnInputMethodChanged_Event_0::bNewInputType' has a wrong offset!");

struct BacchusLockerTab_C_OnModifiedStatusUpdated final
{
public:
	bool                                          bIsModified;
	bool                                          bCanShowToolTip;
};
static_assert(alignof(BacchusLockerTab_C_OnModifiedStatusUpdated) == 0x000001, "Wrong alignment on BacchusLockerTab_C_OnModifiedStatusUpdated");
static_assert(sizeof(BacchusLockerTab_C_OnModifiedStatusUpdated) == 0x000002, "Wrong size on BacchusLockerTab_C_OnModifiedStatusUpdated");
static_assert(offsetof(BacchusLockerTab_C_OnModifiedStatusUpdated, bIsModified) == 0x000000, "Member 'BacchusLockerTab_C_OnModifiedStatusUpdated::bIsModified' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_OnModifiedStatusUpdated, bCanShowToolTip) == 0x000001, "Member 'BacchusLockerTab_C_OnModifiedStatusUpdated::bCanShowToolTip' has a wrong offset!");

struct BacchusLockerTab_C_OnQuickRenameStatusUpdated final
{
public:
	bool                                          bIsAvailable;
	uint8                                         Pad_1[0x7];
	class FText                                   LoadoutName;
};
static_assert(alignof(BacchusLockerTab_C_OnQuickRenameStatusUpdated) == 0x000008, "Wrong alignment on BacchusLockerTab_C_OnQuickRenameStatusUpdated");
static_assert(sizeof(BacchusLockerTab_C_OnQuickRenameStatusUpdated) == 0x000020, "Wrong size on BacchusLockerTab_C_OnQuickRenameStatusUpdated");
static_assert(offsetof(BacchusLockerTab_C_OnQuickRenameStatusUpdated, bIsAvailable) == 0x000000, "Member 'BacchusLockerTab_C_OnQuickRenameStatusUpdated::bIsAvailable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_OnQuickRenameStatusUpdated, LoadoutName) == 0x000008, "Member 'BacchusLockerTab_C_OnQuickRenameStatusUpdated::LoadoutName' has a wrong offset!");

struct BacchusLockerTab_C_OnRefreshForNewLoadout final
{
public:
	class FString                                 LoadoutName;
	bool                                          bIsShuffleTile;
};
static_assert(alignof(BacchusLockerTab_C_OnRefreshForNewLoadout) == 0x000008, "Wrong alignment on BacchusLockerTab_C_OnRefreshForNewLoadout");
static_assert(sizeof(BacchusLockerTab_C_OnRefreshForNewLoadout) == 0x000018, "Wrong size on BacchusLockerTab_C_OnRefreshForNewLoadout");
static_assert(offsetof(BacchusLockerTab_C_OnRefreshForNewLoadout, LoadoutName) == 0x000000, "Member 'BacchusLockerTab_C_OnRefreshForNewLoadout::LoadoutName' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_OnRefreshForNewLoadout, bIsShuffleTile) == 0x000010, "Member 'BacchusLockerTab_C_OnRefreshForNewLoadout::bIsShuffleTile' has a wrong offset!");

struct BacchusLockerTab_C_PlayEquippedLockerMusic_STW final
{
public:
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	uint8                                         Pad_9[0x7];
	class UAthenaMusicPackItemDefinition*         CallFunc_GetEquippedMusicPack_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BacchusLockerTab_C_PlayEquippedLockerMusic_STW) == 0x000008, "Wrong alignment on BacchusLockerTab_C_PlayEquippedLockerMusic_STW");
static_assert(sizeof(BacchusLockerTab_C_PlayEquippedLockerMusic_STW) == 0x000020, "Wrong size on BacchusLockerTab_C_PlayEquippedLockerMusic_STW");
static_assert(offsetof(BacchusLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BacchusLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetSubGame_ReturnValue) == 0x000008, "Member 'BacchusLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_GetEquippedMusicPack_ReturnValue) == 0x000010, "Member 'BacchusLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_GetEquippedMusicPack_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_PlayEquippedLockerMusic_STW, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'BacchusLockerTab_C_PlayEquippedLockerMusic_STW::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot) == 0x000008, "Wrong alignment on BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot");
static_assert(sizeof(BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot) == 0x000010, "Wrong size on BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot");
static_assert(offsetof(BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'BacchusLockerTab_C_PlaySlotAnimationAndCenterSlot::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct BacchusLockerTab_C_PlaySlotClickedAnimation final
{
public:
	class UAthenaCustomizationSlotButton_C*       SlotToPlayAnimOn;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(BacchusLockerTab_C_PlaySlotClickedAnimation) == 0x000008, "Wrong alignment on BacchusLockerTab_C_PlaySlotClickedAnimation");
static_assert(sizeof(BacchusLockerTab_C_PlaySlotClickedAnimation) == 0x000018, "Wrong size on BacchusLockerTab_C_PlaySlotClickedAnimation");
static_assert(offsetof(BacchusLockerTab_C_PlaySlotClickedAnimation, SlotToPlayAnimOn) == 0x000000, "Member 'BacchusLockerTab_C_PlaySlotClickedAnimation::SlotToPlayAnimOn' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_PlaySlotClickedAnimation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BacchusLockerTab_C_PlaySlotClickedAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_PlaySlotClickedAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'BacchusLockerTab_C_PlaySlotClickedAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct BacchusLockerTab_C_TopRowCustomNavigationUp final
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
static_assert(alignof(BacchusLockerTab_C_TopRowCustomNavigationUp) == 0x000008, "Wrong alignment on BacchusLockerTab_C_TopRowCustomNavigationUp");
static_assert(sizeof(BacchusLockerTab_C_TopRowCustomNavigationUp) == 0x000028, "Wrong size on BacchusLockerTab_C_TopRowCustomNavigationUp");
static_assert(offsetof(BacchusLockerTab_C_TopRowCustomNavigationUp, Navigation_0) == 0x000000, "Member 'BacchusLockerTab_C_TopRowCustomNavigationUp::Navigation_0' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_TopRowCustomNavigationUp, ReturnValue) == 0x000008, "Member 'BacchusLockerTab_C_TopRowCustomNavigationUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_TopRowCustomNavigationUp, TargetWidget) == 0x000010, "Member 'BacchusLockerTab_C_TopRowCustomNavigationUp::TargetWidget' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_TopRowCustomNavigationUp, Temp_bool_Variable) == 0x000018, "Member 'BacchusLockerTab_C_TopRowCustomNavigationUp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_TopRowCustomNavigationUp, CallFunc_IsVisible_ReturnValue) == 0x000019, "Member 'BacchusLockerTab_C_TopRowCustomNavigationUp::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusLockerTab_C_TopRowCustomNavigationUp, K2Node_Select_Default) == 0x000020, "Member 'BacchusLockerTab_C_TopRowCustomNavigationUp::K2Node_Select_Default' has a wrong offset!");

struct BacchusLockerTab_C_UpdatePresetButtonStyles final
{
public:
	ECommonInputType                              InputPin;
};
static_assert(alignof(BacchusLockerTab_C_UpdatePresetButtonStyles) == 0x000001, "Wrong alignment on BacchusLockerTab_C_UpdatePresetButtonStyles");
static_assert(sizeof(BacchusLockerTab_C_UpdatePresetButtonStyles) == 0x000001, "Wrong size on BacchusLockerTab_C_UpdatePresetButtonStyles");
static_assert(offsetof(BacchusLockerTab_C_UpdatePresetButtonStyles, InputPin) == 0x000000, "Member 'BacchusLockerTab_C_UpdatePresetButtonStyles::InputPin' has a wrong offset!");

}
