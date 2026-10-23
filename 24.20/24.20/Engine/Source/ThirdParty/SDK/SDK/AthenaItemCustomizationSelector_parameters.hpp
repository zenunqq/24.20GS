#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature");
static_assert(sizeof(AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature");
static_assert(offsetof(AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature, InVisibility) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature::InVisibility' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UItemInfoHeaderWidget_C*                K2Node_DynamicCast_AsItem_Info_Header_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class FText                                   K2Node_Event_CategoryDisplayName;
	class FText                                   K2Node_Event_ItemDisplayTypeName;
	EAthenaCustomizationCategory                  K2Node_Event_SelectedCategory;
	uint8                                         Pad_49[0x7];
	class UMaterialInstance*                      K2Node_Event_OverrideSlotImage;
	class UFortItem*                              K2Node_Event_SelectedItem;
	class UAthenaCustomizationPicker_C*           K2Node_DynamicCast_AsAthena_Customization_Picker;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_6A[0x6];
	class UAthenaCosmeticAccountItem*             K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_79[0x7];
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;
	class FText                                   CallFunc_GetLockerItemTypeText_ReturnValue;
	class UAthenaCosmeticItemDefinition*          K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_A9[0x7];
	class FText                                   CallFunc_GetLockerDescriptionText_ReturnValue;
	bool                                          CallFunc_IsOwnedByCampaignHero_ReturnValue;
	uint8                                         Pad_C9[0x7];
	class UFortHero*                              CallFunc_GetHero_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_DA[0x6];
	class FText                                   CallFunc_GetDisplayName_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_F9[0x7];
	class UItemInfoHeaderWidget_C*                K2Node_DynamicCast_AsItem_Info_Header_Widget_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          K2Node_Event_bShowingVariants;
	bool                                          CallFunc_HandleBack_PassThrough;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          K2Node_CustomEvent_bIsHovered;
	uint8                                         Pad_10D[0x3];
	class UAthenaCustomizationPicker_C*           K2Node_DynamicCast_AsAthena_Customization_Picker_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_119[0x3];
	TDelegate<void(bool bIsHovered)>              K2Node_CreateDelegate_OutputDelegate;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	class FText                                   K2Node_CustomEvent_NewText;
	TDelegate<void(class FText NewText)>          K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          K2Node_Event_bShouldHide;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_157[0x1];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          K2Node_Event_bShouldShow;
	uint8                                         Pad_172[0x6];
	class FText                                   K2Node_Event_CalloutText;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_199[0x7];
	class UFortItem*                              K2Node_CustomEvent_SelectedItem;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_1B2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_1C2[0x6];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_HandleBack_PassThrough_1;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              K2Node_ComponentBoundEvent_InVisibility;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_1D4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          CallFunc_IsBladeOpen_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_1ED[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_1FC[0x4];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_1;
	int32                                         CallFunc_SelectInt_ReturnValue;
	int32                                         K2Node_Event_MarkedCount;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          K2Node_Event_bShowTooltip_2;
	uint8                                         Pad_219[0x7];
	class ULockerArchivingTooltip_C*              K2Node_DynamicCast_AsLocker_Archiving_Tooltip;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          K2Node_Event_bShowTooltip_1;
	uint8                                         Pad_22A[0x6];
	class FText                                   K2Node_Event_Text_2;
	class ULockerArchivingTooltip_C*              K2Node_DynamicCast_AsLocker_Archiving_Tooltip_1;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_251[0x7];
	class ULockerArchivingTooltip_C*              K2Node_DynamicCast_AsLocker_Archiving_Tooltip_2;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_264[0x4];
	class FText                                   Temp_text_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	uint8                                         Pad_281[0x7];
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_2A1[0x7];
	class FText                                   K2Node_Select_Default;
	bool                                          K2Node_Event_bShowTooltip;
	uint8                                         Pad_2C1[0x7];
	class FText                                   K2Node_Event_Text_1;
	class ULockerArchivingTooltip_C*              K2Node_DynamicCast_AsLocker_Archiving_Tooltip_3;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_2E9[0x7];
	class ULockerArchivingTooltip_C*              K2Node_DynamicCast_AsLocker_Archiving_Tooltip_4;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_2FB[0x5];
	class ULockerArchivingTooltip_C*              K2Node_DynamicCast_AsLocker_Archiving_Tooltip_5;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	uint8                                         Pad_309[0x7];
	class FText                                   K2Node_Event_Text;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          Temp_bool_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          K2Node_Select_Default_2;
	class FText                                   K2Node_Event_RowDisplayName;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_349[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess_12;
	bool                                          Temp_bool_Variable_6;
	uint8                                         Pad_35A[0x6];
	class UFortFrontEndContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_369[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector");
static_assert(sizeof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector) == 0x000370, "Wrong size on AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, EntryPoint) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsItem_Info_Header_Widget) == 0x000008, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsItem_Info_Header_Widget' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_CategoryDisplayName) == 0x000018, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_CategoryDisplayName' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_ItemDisplayTypeName) == 0x000030, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_ItemDisplayTypeName' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_SelectedCategory) == 0x000048, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_SelectedCategory' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_OverrideSlotImage) == 0x000050, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_OverrideSlotImage' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_SelectedItem) == 0x000058, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_SelectedItem' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsAthena_Customization_Picker) == 0x000060, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsAthena_Customization_Picker' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item) == 0x000070, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000080, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetLockerItemTypeText_ReturnValue) == 0x000088, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetLockerItemTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition) == 0x0000A0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_3) == 0x0000A8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetLockerDescriptionText_ReturnValue) == 0x0000B0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetLockerDescriptionText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsOwnedByCampaignHero_ReturnValue) == 0x0000C8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsOwnedByCampaignHero_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetHero_ReturnValue) == 0x0000D0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetHero_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetRarity_ReturnValue) == 0x0000D9, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetDisplayName_ReturnValue) == 0x0000E0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsValid_ReturnValue_2) == 0x0000F8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsItem_Info_Header_Widget_1) == 0x000100, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsItem_Info_Header_Widget_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_4) == 0x000108, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_bShowingVariants) == 0x000109, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_bShowingVariants' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_HandleBack_PassThrough) == 0x00010A, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_HandleBack_PassThrough' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_IsClosed_Variable) == 0x00010B, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CustomEvent_bIsHovered) == 0x00010C, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CustomEvent_bIsHovered' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsAthena_Customization_Picker_1) == 0x000110, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsAthena_Customization_Picker_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_5) == 0x000118, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CreateDelegate_OutputDelegate) == 0x00011C, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetContext_ReturnValue) == 0x000128, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CustomEvent_NewText) == 0x000130, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CustomEvent_NewText' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CreateDelegate_OutputDelegate_1) == 0x000148, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_bShouldHide) == 0x000154, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_bShouldHide' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Has_Been_Initd_Variable) == 0x000155, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsMobileGame_ReturnValue) == 0x000156, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000158, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_MakeStruct_Margin) == 0x000160, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_BooleanAND_ReturnValue) == 0x000170, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_bShouldShow) == 0x000171, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_bShouldShow' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_CalloutText) == 0x000178, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_CalloutText' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000190, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable) == 0x000198, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CustomEvent_SelectedItem) == 0x0001A0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_PlayAnimation_ReturnValue) == 0x0001A8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsValid_ReturnValue_3) == 0x0001B0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable_1) == 0x0001B1, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001B4, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable_2) == 0x0001C0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_Not_PreBool_ReturnValue) == 0x0001C1, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001C8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_HandleBack_PassThrough_1) == 0x0001D0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_HandleBack_PassThrough_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable_3) == 0x0001D1, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_ComponentBoundEvent_InVisibility) == 0x0001D2, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_ComponentBoundEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_byte_Variable) == 0x0001D3, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_ComponentBoundEvent_Button_1) == 0x0001D8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_ComponentBoundEvent_Button) == 0x0001E0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsBladeOpen_ReturnValue) == 0x0001E8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsBladeOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001E9, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_BooleanAND_ReturnValue_1) == 0x0001EA, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001EB, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001EC, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001F0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetContext_ReturnValue_1) == 0x000200, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_SelectInt_ReturnValue) == 0x000208, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_MarkedCount) == 0x00020C, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_MarkedCount' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000210, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_bShowTooltip_2) == 0x000218, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_bShowTooltip_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsLocker_Archiving_Tooltip) == 0x000220, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsLocker_Archiving_Tooltip' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_6) == 0x000228, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_bShowTooltip_1) == 0x000229, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_bShowTooltip_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_Text_2) == 0x000230, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_Text_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsLocker_Archiving_Tooltip_1) == 0x000248, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsLocker_Archiving_Tooltip_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_7) == 0x000250, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsLocker_Archiving_Tooltip_2) == 0x000258, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsLocker_Archiving_Tooltip_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_8) == 0x000260, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000261, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000262, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_BooleanOR_ReturnValue) == 0x000263, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_text_Variable) == 0x000268, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000280, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_text_Variable_1) == 0x000288, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable_4) == 0x0002A0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Select_Default) == 0x0002A8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_bShowTooltip) == 0x0002C0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_bShowTooltip' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_Text_1) == 0x0002C8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_Text_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsLocker_Archiving_Tooltip_3) == 0x0002E0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsLocker_Archiving_Tooltip_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_9) == 0x0002E8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsLocker_Archiving_Tooltip_4) == 0x0002F0, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsLocker_Archiving_Tooltip_4' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_10) == 0x0002F8, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_byte_Variable_1) == 0x0002F9, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_byte_Variable_2) == 0x0002FA, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsLocker_Archiving_Tooltip_5) == 0x000300, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsLocker_Archiving_Tooltip_5' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_11) == 0x000308, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_Text) == 0x000310, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_IsDesignTime) == 0x000328, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_IsUsingTouch_ReturnValue) == 0x000329, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable_5) == 0x00032A, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_byte_Variable_3) == 0x00032B, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Select_Default_1) == 0x00032C, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_CustomEvent_bNewInputType) == 0x00032D, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_byte_Variable_4) == 0x00032E, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Select_Default_2) == 0x00032F, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Event_RowDisplayName) == 0x000330, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Event_RowDisplayName' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_TextIsEmpty_ReturnValue) == 0x000348, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000350, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_DynamicCast_bSuccess_12) == 0x000358, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, Temp_bool_Variable_6) == 0x000359, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000360, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, K2Node_Select_Default_3) == 0x000368, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00036C, "Member 'AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_GetCategoryImage final
{
public:
	EAthenaCustomizationCategory                  Index_0;
	uint8                                         Pad_1[0x7];
	class UMaterialInstance*                      OverrideImage;
	class UMaterialInstance*                      ReturnValue;
	EAthenaCustomizationCategory                  Temp_byte_Variable;
	uint8                                         Pad_19[0x7];
	class UMaterialInstance*                      Temp_object_Variable;
	class UMaterialInstance*                      Temp_object_Variable_1;
	class UMaterialInstance*                      Temp_object_Variable_2;
	class UMaterialInstance*                      Temp_object_Variable_3;
	class UMaterialInstance*                      Temp_object_Variable_4;
	class UMaterialInstance*                      Temp_object_Variable_5;
	class UMaterialInstance*                      Temp_object_Variable_6;
	class UMaterialInstance*                      Temp_object_Variable_7;
	class UMaterialInstance*                      Temp_object_Variable_8;
	class UMaterialInstance*                      Temp_object_Variable_9;
	class UMaterialInstance*                      Temp_object_Variable_10;
	class UMaterialInstance*                      Temp_object_Variable_11;
	class UMaterialInstance*                      Temp_object_Variable_12;
	class UMaterialInstance*                      Temp_object_Variable_13;
	class UMaterialInstance*                      Temp_object_Variable_14;
	class UMaterialInstance*                      Temp_object_Variable_15;
	class UMaterialInstance*                      Temp_object_Variable_16;
	class UMaterialInstance*                      Temp_object_Variable_17;
	class UMaterialInstance*                      Temp_object_Variable_18;
	class UMaterialInstance*                      Temp_object_Variable_19;
	class UMaterialInstance*                      Temp_object_Variable_20;
	class UMaterialInstance*                      Temp_object_Variable_21;
	class UMaterialInstance*                      K2Node_Select_Default;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_GetCategoryImage) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_GetCategoryImage");
static_assert(sizeof(AthenaItemCustomizationSelector_C_GetCategoryImage) == 0x0000D8, "Wrong size on AthenaItemCustomizationSelector_C_GetCategoryImage");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Index_0) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Index_0' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, OverrideImage) == 0x000008, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::OverrideImage' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, ReturnValue) == 0x000010, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_byte_Variable) == 0x000018, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable) == 0x000020, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_1) == 0x000028, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_2) == 0x000030, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_3) == 0x000038, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_4) == 0x000040, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_5) == 0x000048, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_6) == 0x000050, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_7) == 0x000058, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_8) == 0x000060, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_9) == 0x000068, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_10) == 0x000070, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_11) == 0x000078, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_12) == 0x000080, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_12' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_13) == 0x000088, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_13' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_14) == 0x000090, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_14' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_15) == 0x000098, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_15' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_16) == 0x0000A0, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_16' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_17) == 0x0000A8, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_17' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_18) == 0x0000B0, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_18' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_19) == 0x0000B8, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_19' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_20) == 0x0000C0, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_20' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, Temp_object_Variable_21) == 0x0000C8, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::Temp_object_Variable_21' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCategoryImage, K2Node_Select_Default) == 0x0000D0, "Member 'AthenaItemCustomizationSelector_C_GetCategoryImage::K2Node_Select_Default' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition final
{
public:
	class UAthenaCosmeticItemDefinition*          Cosmetic_Item_Definition;
	class UFortItem*                              CallFunc_GetCurrentItem_ReturnValue;
	class UAthenaCosmeticAccountItem*             K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;
	class UAthenaCosmeticItemDefinition*          K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition");
static_assert(sizeof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition) == 0x000038, "Wrong size on AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, Cosmetic_Item_Definition) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::Cosmetic_Item_Definition' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, CallFunc_GetCurrentItem_ReturnValue) == 0x000008, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::CallFunc_GetCurrentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item) == 0x000010, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000020, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition) == 0x000028, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged final
{
public:
	bool                                          bIsHovered;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged");
static_assert(sizeof(AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged, bIsHovered) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged::bIsHovered' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_HandleBack final
{
public:
	bool                                          PassThrough;
	bool                                          CallFunc_IsBladeOpen_ReturnValue;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_HandleBack) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_HandleBack");
static_assert(sizeof(AthenaItemCustomizationSelector_C_HandleBack) == 0x000002, "Wrong size on AthenaItemCustomizationSelector_C_HandleBack");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleBack, PassThrough) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_HandleBack::PassThrough' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleBack, CallFunc_IsBladeOpen_ReturnValue) == 0x000001, "Member 'AthenaItemCustomizationSelector_C_HandleBack::CallFunc_IsBladeOpen_ReturnValue' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_HandleItemSetupFinished final
{
public:
	class FText                                   InText;
	EAthenaCustomizationCategory                  category;
	uint8                                         Pad_19[0x7];
	class UMaterialInstance*                      OverrideImage;
	class UMaterialInstance*                      CallFunc_GetCategoryImage_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_HandleItemSetupFinished");
static_assert(sizeof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished) == 0x000040, "Wrong size on AthenaItemCustomizationSelector_C_HandleItemSetupFinished");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished, InText) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_HandleItemSetupFinished::InText' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished, category) == 0x000018, "Member 'AthenaItemCustomizationSelector_C_HandleItemSetupFinished::category' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished, OverrideImage) == 0x000020, "Member 'AthenaItemCustomizationSelector_C_HandleItemSetupFinished::OverrideImage' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished, CallFunc_GetCategoryImage_ReturnValue) == 0x000028, "Member 'AthenaItemCustomizationSelector_C_HandleItemSetupFinished::CallFunc_GetCategoryImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'AthenaItemCustomizationSelector_C_HandleItemSetupFinished::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleItemSetupFinished, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'AthenaItemCustomizationSelector_C_HandleItemSetupFinished::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged final
{
public:
	int32                                         MarkedCount;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged) == 0x000004, "Wrong alignment on AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged");
static_assert(sizeof(AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged) == 0x000004, "Wrong size on AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged, MarkedCount) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged::MarkedCount' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_HandleShowInfoPanel final
{
public:
	class UFortItem*                              SelectedItem;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_HandleShowInfoPanel) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_HandleShowInfoPanel");
static_assert(sizeof(AthenaItemCustomizationSelector_C_HandleShowInfoPanel) == 0x000008, "Wrong size on AthenaItemCustomizationSelector_C_HandleShowInfoPanel");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleShowInfoPanel, SelectedItem) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_HandleShowInfoPanel::SelectedItem' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_HandleTextChanged final
{
public:
	class FText                                   NewText;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_HandleTextChanged) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_HandleTextChanged");
static_assert(sizeof(AthenaItemCustomizationSelector_C_HandleTextChanged) == 0x000018, "Wrong size on AthenaItemCustomizationSelector_C_HandleTextChanged");
static_assert(offsetof(AthenaItemCustomizationSelector_C_HandleTextChanged, NewText) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_HandleTextChanged::NewText' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnCurrentItemChanged final
{
public:
	class UFortItem*                              SelectedItem;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnCurrentItemChanged) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnCurrentItemChanged");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnCurrentItemChanged) == 0x000008, "Wrong size on AthenaItemCustomizationSelector_C_OnCurrentItemChanged");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnCurrentItemChanged, SelectedItem) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnCurrentItemChanged::SelectedItem' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnFinishedItemSetup final
{
public:
	class FText                                   CategoryDisplayName;
	class FText                                   ItemDisplayTypeName;
	EAthenaCustomizationCategory                  SelectedCategory;
	uint8                                         Pad_31[0x7];
	class UMaterialInstance*                      OverrideSlotImage;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnFinishedItemSetup) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnFinishedItemSetup");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnFinishedItemSetup) == 0x000040, "Wrong size on AthenaItemCustomizationSelector_C_OnFinishedItemSetup");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnFinishedItemSetup, CategoryDisplayName) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnFinishedItemSetup::CategoryDisplayName' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnFinishedItemSetup, ItemDisplayTypeName) == 0x000018, "Member 'AthenaItemCustomizationSelector_C_OnFinishedItemSetup::ItemDisplayTypeName' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnFinishedItemSetup, SelectedCategory) == 0x000030, "Member 'AthenaItemCustomizationSelector_C_OnFinishedItemSetup::SelectedCategory' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnFinishedItemSetup, OverrideSlotImage) == 0x000038, "Member 'AthenaItemCustomizationSelector_C_OnFinishedItemSetup::OverrideSlotImage' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnHideItemInfoHeader final
{
public:
	bool                                          bShouldHide;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnHideItemInfoHeader) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_OnHideItemInfoHeader");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnHideItemInfoHeader) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_OnHideItemInfoHeader");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnHideItemInfoHeader, bShouldHide) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnHideItemInfoHeader::bShouldHide' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_OnInputMethodChanged");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnInputMethodChanged) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_OnInputMethodChanged");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated final
{
public:
	class FText                                   RowDisplayName;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated) == 0x000018, "Wrong size on AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated, RowDisplayName) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated::RowDisplayName' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip final
{
public:
	bool                                          bShowTooltip;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip, bShowTooltip) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip::bShowTooltip' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip final
{
public:
	bool                                          bShowTooltip;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip, bShowTooltip) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip::bShowTooltip' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip final
{
public:
	bool                                          bShowTooltip;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip, bShowTooltip) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip::bShowTooltip' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnTabSelectionChanged final
{
public:
	bool                                          bShowingVariants;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnTabSelectionChanged) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_OnTabSelectionChanged");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnTabSelectionChanged) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_OnTabSelectionChanged");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnTabSelectionChanged, bShowingVariants) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnTabSelectionChanged::bShowingVariants' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText) == 0x000018, "Wrong size on AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText, Text) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText::Text' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText) == 0x000018, "Wrong size on AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText, Text) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText::Text' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout final
{
public:
	bool                                          bShouldShow;
	uint8                                         Pad_1[0x7];
	class FText                                   CalloutText;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout) == 0x000020, "Wrong size on AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout, bShouldShow) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout::bShouldShow' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout, CalloutText) == 0x000008, "Member 'AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout::CalloutText' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText");
static_assert(sizeof(AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText) == 0x000018, "Wrong size on AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText");
static_assert(offsetof(AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText, Text) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText::Text' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaItemCustomizationSelector_C_PreConstruct");
static_assert(sizeof(AthenaItemCustomizationSelector_C_PreConstruct) == 0x000001, "Wrong size on AthenaItemCustomizationSelector_C_PreConstruct");
static_assert(offsetof(AthenaItemCustomizationSelector_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaItemCustomizationSelector_C_UpdateArchivingButtonText final
{
public:
	int32                                         MarkedCount;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_69[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_79[0x7];
	class FString                                 CallFunc_SelectString_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_1;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText) == 0x000008, "Wrong alignment on AthenaItemCustomizationSelector_C_UpdateArchivingButtonText");
static_assert(sizeof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText) == 0x0001C8, "Wrong size on AthenaItemCustomizationSelector_C_UpdateArchivingButtonText");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, MarkedCount) == 0x000000, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::MarkedCount' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, Temp_bool_Variable) == 0x000004, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000068, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000070, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_SelectString_ReturnValue) == 0x000080, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_MakeStruct_FormatArgumentData_2) == 0x000110, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_MakeArray_Array) == 0x000160, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_MakeArray_Array_1) == 0x000170, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_Format_ReturnValue) == 0x000180, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, CallFunc_Format_ReturnValue_1) == 0x000198, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaItemCustomizationSelector_C_UpdateArchivingButtonText, K2Node_Select_Default) == 0x0001B0, "Member 'AthenaItemCustomizationSelector_C_UpdateArchivingButtonText::K2Node_Select_Default' has a wrong offset!");

}
