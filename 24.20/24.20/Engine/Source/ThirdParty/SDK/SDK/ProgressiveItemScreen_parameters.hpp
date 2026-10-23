#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ProgressiveItemScreen_C_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(ProgressiveItemScreen_C_BlockScreenContent) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_BlockScreenContent");
static_assert(sizeof(ProgressiveItemScreen_C_BlockScreenContent) == 0x000020, "Wrong size on ProgressiveItemScreen_C_BlockScreenContent");
static_assert(offsetof(ProgressiveItemScreen_C_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'ProgressiveItemScreen_C_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'ProgressiveItemScreen_C_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x3];
	float                                         SpacingAdjustmentForTabs;
};
static_assert(alignof(ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated) == 0x000004, "Wrong alignment on ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated");
static_assert(sizeof(ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated) == 0x000008, "Wrong size on ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated");
static_assert(offsetof(ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated, bTabsVisible) == 0x000000, "Member 'ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated::bTabsVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated, SpacingAdjustmentForTabs) == 0x000004, "Member 'ProgressiveItemScreen_C_BP_OnContainerTabVisibilityUpdated::SpacingAdjustmentForTabs' has a wrong offset!");

struct ProgressiveItemScreen_C_ContentBlocking final
{
public:
	bool                                          isContentBlocked;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(ProgressiveItemScreen_C_ContentBlocking) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_ContentBlocking");
static_assert(sizeof(ProgressiveItemScreen_C_ContentBlocking) == 0x000028, "Wrong size on ProgressiveItemScreen_C_ContentBlocking");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, isContentBlocked) == 0x000000, "Member 'ProgressiveItemScreen_C_ContentBlocking::isContentBlocked' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, ContentBlockedText) == 0x000008, "Member 'ProgressiveItemScreen_C_ContentBlocking::ContentBlockedText' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, Temp_bool_Variable) == 0x000020, "Member 'ProgressiveItemScreen_C_ContentBlocking::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, Temp_byte_Variable) == 0x000021, "Member 'ProgressiveItemScreen_C_ContentBlocking::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, Temp_byte_Variable_1) == 0x000022, "Member 'ProgressiveItemScreen_C_ContentBlocking::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, Temp_bool_Variable_1) == 0x000023, "Member 'ProgressiveItemScreen_C_ContentBlocking::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, K2Node_Select_Default) == 0x000024, "Member 'ProgressiveItemScreen_C_ContentBlocking::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, Temp_byte_Variable_2) == 0x000025, "Member 'ProgressiveItemScreen_C_ContentBlocking::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, Temp_byte_Variable_3) == 0x000026, "Member 'ProgressiveItemScreen_C_ContentBlocking::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ContentBlocking, K2Node_Select_Default_1) == 0x000027, "Member 'ProgressiveItemScreen_C_ContentBlocking::K2Node_Select_Default_1' has a wrong offset!");

struct ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_7[0x1];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_3B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class FText                                   K2Node_Event_ErrorStateText;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_Event_bInIsSoloScreen;
	bool                                          K2Node_Event_bSubscribed;
	uint8                                         Pad_6A[0x6];
	class FText                                   K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          K2Node_Event_bTabsVisible;
	uint8                                         Pad_8A[0x2];
	float                                         K2Node_Event_SpacingAdjustmentForTabs;
	class FText                                   K2Node_Event_RowDisplayName;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_B3[0x5];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	bool                                          K2Node_Event_bBlockScreen;
	uint8                                         Pad_C3[0x5];
	class FText                                   K2Node_Event_ContentBlockedText;
};
static_assert(alignof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen");
static_assert(sizeof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen) == 0x0000E0, "Wrong size on ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, EntryPoint) == 0x000000, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_byte_Variable) == 0x000004, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_byte_Variable_1) == 0x000005, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_bool_Variable) == 0x000006, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_text_Variable) == 0x000008, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_text_Variable_1) == 0x000020, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_bool_Variable_1) == 0x000038, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_byte_Variable_2) == 0x000039, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_byte_Variable_3) == 0x00003A, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_ErrorStateText) == 0x000048, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_ErrorStateText' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, CallFunc_PlayAnimation_ReturnValue_1) == 0x000060, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_bInIsSoloScreen) == 0x000068, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_bInIsSoloScreen' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_bSubscribed) == 0x000069, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_bSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Select_Default) == 0x000070, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Select_Default_1) == 0x000088, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_bTabsVisible) == 0x000089, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_bTabsVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_SpacingAdjustmentForTabs) == 0x00008C, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_SpacingAdjustmentForTabs' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_RowDisplayName) == 0x000090, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_RowDisplayName' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x0000A8, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, CallFunc_TextIsEmpty_ReturnValue) == 0x0000B1, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, Temp_bool_Variable_2) == 0x0000B2, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1) == 0x0000B8, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Select_Default_2) == 0x0000C1, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_bBlockScreen) == 0x0000C2, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_bBlockScreen' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen, K2Node_Event_ContentBlockedText) == 0x0000C8, "Member 'ProgressiveItemScreen_C_ExecuteUbergraph_ProgressiveItemScreen::K2Node_Event_ContentBlockedText' has a wrong offset!");

struct ProgressiveItemScreen_C_Navigate_Right_from_Items_List final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
};
static_assert(alignof(ProgressiveItemScreen_C_Navigate_Right_from_Items_List) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_Navigate_Right_from_Items_List");
static_assert(sizeof(ProgressiveItemScreen_C_Navigate_Right_from_Items_List) == 0x000010, "Wrong size on ProgressiveItemScreen_C_Navigate_Right_from_Items_List");
static_assert(offsetof(ProgressiveItemScreen_C_Navigate_Right_from_Items_List, Navigation_0) == 0x000000, "Member 'ProgressiveItemScreen_C_Navigate_Right_from_Items_List::Navigation_0' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_Navigate_Right_from_Items_List, ReturnValue) == 0x000008, "Member 'ProgressiveItemScreen_C_Navigate_Right_from_Items_List::ReturnValue' has a wrong offset!");

struct ProgressiveItemScreen_C_OnErrorStateTextUpdated final
{
public:
	class FText                                   ErrorStateText;
};
static_assert(alignof(ProgressiveItemScreen_C_OnErrorStateTextUpdated) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_OnErrorStateTextUpdated");
static_assert(sizeof(ProgressiveItemScreen_C_OnErrorStateTextUpdated) == 0x000018, "Wrong size on ProgressiveItemScreen_C_OnErrorStateTextUpdated");
static_assert(offsetof(ProgressiveItemScreen_C_OnErrorStateTextUpdated, ErrorStateText) == 0x000000, "Member 'ProgressiveItemScreen_C_OnErrorStateTextUpdated::ErrorStateText' has a wrong offset!");

struct ProgressiveItemScreen_C_OnPreviewActionButtonUpdated final
{
public:
	class FText                                   RowDisplayName;
};
static_assert(alignof(ProgressiveItemScreen_C_OnPreviewActionButtonUpdated) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_OnPreviewActionButtonUpdated");
static_assert(sizeof(ProgressiveItemScreen_C_OnPreviewActionButtonUpdated) == 0x000018, "Wrong size on ProgressiveItemScreen_C_OnPreviewActionButtonUpdated");
static_assert(offsetof(ProgressiveItemScreen_C_OnPreviewActionButtonUpdated, RowDisplayName) == 0x000000, "Member 'ProgressiveItemScreen_C_OnPreviewActionButtonUpdated::RowDisplayName' has a wrong offset!");

struct ProgressiveItemScreen_C_OnSetIsSoloScreen final
{
public:
	bool                                          bInIsSoloScreen;
};
static_assert(alignof(ProgressiveItemScreen_C_OnSetIsSoloScreen) == 0x000001, "Wrong alignment on ProgressiveItemScreen_C_OnSetIsSoloScreen");
static_assert(sizeof(ProgressiveItemScreen_C_OnSetIsSoloScreen) == 0x000001, "Wrong size on ProgressiveItemScreen_C_OnSetIsSoloScreen");
static_assert(offsetof(ProgressiveItemScreen_C_OnSetIsSoloScreen, bInIsSoloScreen) == 0x000000, "Member 'ProgressiveItemScreen_C_OnSetIsSoloScreen::bInIsSoloScreen' has a wrong offset!");

struct ProgressiveItemScreen_C_OnUpdateSubscriptionState final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(ProgressiveItemScreen_C_OnUpdateSubscriptionState) == 0x000001, "Wrong alignment on ProgressiveItemScreen_C_OnUpdateSubscriptionState");
static_assert(sizeof(ProgressiveItemScreen_C_OnUpdateSubscriptionState) == 0x000001, "Wrong size on ProgressiveItemScreen_C_OnUpdateSubscriptionState");
static_assert(offsetof(ProgressiveItemScreen_C_OnUpdateSubscriptionState, bSubscribed) == 0x000000, "Member 'ProgressiveItemScreen_C_OnUpdateSubscriptionState::bSubscribed' has a wrong offset!");

struct ProgressiveItemScreen_C_UpdateLayoutForTabs final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x7];
	double                                        Spacing_Adjustment_For_Tabs;
	double                                        Temp_real_Variable;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	double                                        Temp_real_Variable_1;
	double                                        K2Node_Select_Default;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_41[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	double                                        K2Node_Select_Default_1;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast_1;
};
static_assert(alignof(ProgressiveItemScreen_C_UpdateLayoutForTabs) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_UpdateLayoutForTabs");
static_assert(sizeof(ProgressiveItemScreen_C_UpdateLayoutForTabs) == 0x000088, "Wrong size on ProgressiveItemScreen_C_UpdateLayoutForTabs");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, bTabsVisible) == 0x000000, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::bTabsVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, Spacing_Adjustment_For_Tabs) == 0x000008, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::Spacing_Adjustment_For_Tabs' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, Temp_real_Variable) == 0x000010, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, Temp_bool_Variable) == 0x000020, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, Temp_real_Variable_1) == 0x000028, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, K2Node_Select_Default) == 0x000030, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, Temp_bool_Variable_1) == 0x000040, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000048, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, K2Node_Select_Default_1) == 0x000050, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000058, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Margin) == 0x000060, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Margin_1) == 0x000070, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Top_ImplicitCast) == 0x000080, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Top_ImplicitCast_1) == 0x000084, "Member 'ProgressiveItemScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Top_ImplicitCast_1' has a wrong offset!");

struct ProgressiveItemScreen_C_UpdateSubscribedVisuals final
{
public:
	bool                                          Subscribed;
	uint8                                         Pad_1[0x3];
	struct FSlateColor                            SubscribedTextColor_Legal;
	struct FSlateColor                            UnsubscribedTextColor_Legal;
	uint8                                         Pad_2C[0x4];
	class UProgressiveStageListView_C*            K2Node_DynamicCast_AsProgressive_Stage_List_View;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	class UProgressiveItemDetails_C*              K2Node_DynamicCast_AsProgressive_Item_Details;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_49[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_9C[0x4];
	class UNoInputActionPipButton_C*              K2Node_DynamicCast_AsNo_Input_Action_Pip_Button;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_A9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_B1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
};
static_assert(alignof(ProgressiveItemScreen_C_UpdateSubscribedVisuals) == 0x000008, "Wrong alignment on ProgressiveItemScreen_C_UpdateSubscribedVisuals");
static_assert(sizeof(ProgressiveItemScreen_C_UpdateSubscribedVisuals) == 0x0000C8, "Wrong size on ProgressiveItemScreen_C_UpdateSubscribedVisuals");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, Subscribed) == 0x000000, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::Subscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, SubscribedTextColor_Legal) == 0x000004, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::SubscribedTextColor_Legal' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, UnsubscribedTextColor_Legal) == 0x000018, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::UnsubscribedTextColor_Legal' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, K2Node_DynamicCast_AsProgressive_Stage_List_View) == 0x000030, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::K2Node_DynamicCast_AsProgressive_Stage_List_View' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, K2Node_DynamicCast_AsProgressive_Item_Details) == 0x000040, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::K2Node_DynamicCast_AsProgressive_Item_Details' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_SelectColor_ReturnValue) == 0x000050, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_SelectColor_ReturnValue_1) == 0x000060, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_SelectColor_ReturnValue_2) == 0x000070, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_GetAllEntries_ReturnValue) == 0x000080, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_Array_Get_Item) == 0x000090, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, K2Node_DynamicCast_AsNo_Input_Action_Pip_Button) == 0x0000A0, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::K2Node_DynamicCast_AsNo_Input_Action_Pip_Button' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, Temp_int_Loop_Counter_Variable) == 0x0000AC, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000B8, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveItemScreen_C_UpdateSubscribedVisuals, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000C0, "Member 'ProgressiveItemScreen_C_UpdateSubscribedVisuals::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

}
