#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ProgressiveTableOfContentsScreen_C_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BlockScreenContent) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BlockScreenContent");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BlockScreenContent) == 0x000020, "Wrong size on ProgressiveTableOfContentsScreen_C_BlockScreenContent");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'ProgressiveTableOfContentsScreen_C_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x3];
	float                                         SpacingAdjustmentForTabs;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated) == 0x000004, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated) == 0x000008, "Wrong size on ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated, bTabsVisible) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated::bTabsVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated, SpacingAdjustmentForTabs) == 0x000004, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnContainerTabVisibilityUpdated::SpacingAdjustmentForTabs' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText final
{
public:
	class FText                                   ProductDescription;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText) == 0x000018, "Wrong size on ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText, ProductDescription) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnSetDescriptionText::ProductDescription' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner final
{
public:
	class FText                                   BannerText;
	bool                                          bAllSetsCompleted;
	bool                                          bSubscribed;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner) == 0x000020, "Wrong size on ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner, BannerText) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner::BannerText' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner, bAllSetsCompleted) == 0x000018, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner::bAllSetsCompleted' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner, bSubscribed) == 0x000019, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnUpdateBanner::bSubscribed' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText final
{
public:
	class FText                                   ErrorStateText;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText) == 0x000018, "Wrong size on ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText, ErrorStateText) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnUpdateErrorStateText::ErrorStateText' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable final
{
public:
	int32                                         NumTiles;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable) == 0x000004, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable) == 0x000004, "Wrong size on ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable, NumTiles) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnUpdateNumTilesAvailable::NumTiles' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState) == 0x000001, "Wrong alignment on ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState) == 0x000001, "Wrong size on ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState, bSubscribed) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_BP_OnUpdateSubscriptionState::bSubscribed' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_ContentBlocking final
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
static_assert(alignof(ProgressiveTableOfContentsScreen_C_ContentBlocking) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_ContentBlocking");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_ContentBlocking) == 0x000028, "Wrong size on ProgressiveTableOfContentsScreen_C_ContentBlocking");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, isContentBlocked) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::isContentBlocked' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, ContentBlockedText) == 0x000008, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::ContentBlockedText' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, Temp_bool_Variable) == 0x000020, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, Temp_byte_Variable) == 0x000021, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, Temp_byte_Variable_1) == 0x000022, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, Temp_bool_Variable_1) == 0x000023, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, K2Node_Select_Default) == 0x000024, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, Temp_byte_Variable_2) == 0x000025, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, Temp_byte_Variable_3) == 0x000026, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ContentBlocking, K2Node_Select_Default_1) == 0x000027, "Member 'ProgressiveTableOfContentsScreen_C_ContentBlocking::K2Node_Select_Default_1' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	class FText                                   K2Node_Event_ProductDescription;
	class FText                                   K2Node_Event_BannerText;
	bool                                          K2Node_Event_bAllSetsCompleted;
	bool                                          K2Node_Event_bSubscribed_1;
	bool                                          K2Node_Event_bSubscribed;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_3C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	int32                                         K2Node_Event_NumTiles;
	bool                                          K2Node_Event_bTabsVisible;
	uint8                                         Pad_4D[0x3];
	float                                         K2Node_Event_SpacingAdjustmentForTabs;
	uint8                                         Pad_54[0x4];
	class FText                                   K2Node_Event_ErrorStateText;
	bool                                          K2Node_Event_bBlockScreen;
	uint8                                         Pad_71[0x7];
	class FText                                   K2Node_Event_ContentBlockedText;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen) == 0x000090, "Wrong size on ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, EntryPoint) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, Temp_bool_Variable) == 0x000004, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, Temp_byte_Variable) == 0x000005, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, Temp_byte_Variable_1) == 0x000006, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_ProductDescription) == 0x000008, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_ProductDescription' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_BannerText) == 0x000020, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_BannerText' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_bAllSetsCompleted) == 0x000038, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_bAllSetsCompleted' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_bSubscribed_1) == 0x000039, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_bSubscribed_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_bSubscribed) == 0x00003A, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_bSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Select_Default) == 0x00003B, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_NumTiles) == 0x000048, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_NumTiles' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_bTabsVisible) == 0x00004C, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_bTabsVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_SpacingAdjustmentForTabs) == 0x000050, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_SpacingAdjustmentForTabs' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_ErrorStateText) == 0x000058, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_ErrorStateText' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_bBlockScreen) == 0x000070, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_bBlockScreen' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen, K2Node_Event_ContentBlockedText) == 0x000078, "Member 'ProgressiveTableOfContentsScreen_C_ExecuteUbergraph_ProgressiveTableOfContentsScreen::K2Node_Event_ContentBlockedText' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_No_Items_to_Show final
{
public:
	int32                                         ItemsShown;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show) == 0x000004, "Wrong alignment on ProgressiveTableOfContentsScreen_C_No_Items_to_Show");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show) == 0x000010, "Wrong size on ProgressiveTableOfContentsScreen_C_No_Items_to_Show");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, ItemsShown) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::ItemsShown' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, Temp_bool_Variable) == 0x000004, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000005, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, Temp_byte_Variable) == 0x000006, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, Temp_byte_Variable_1) == 0x000007, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, Temp_bool_Variable_1) == 0x000008, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, K2Node_Select_Default) == 0x000009, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, Temp_byte_Variable_2) == 0x00000A, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, Temp_byte_Variable_3) == 0x00000B, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_No_Items_to_Show, K2Node_Select_Default_1) == 0x00000C, "Member 'ProgressiveTableOfContentsScreen_C_No_Items_to_Show::K2Node_Select_Default_1' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals final
{
public:
	bool                                          Subscribed;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           SelectColor;
	struct FLinearColor                           HoverColor;
	struct FLinearColor                           BaseColor;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	uint8                                         Pad_64[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_84[0x4];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	class UUserWidget*                            CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_A4[0x4];
	class UNoInputActionPipButton_C*              K2Node_DynamicCast_AsNo_Input_Action_Pip_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals) == 0x0000B8, "Wrong size on ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, Subscribed) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::Subscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, SelectColor) == 0x000004, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::SelectColor' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, HoverColor) == 0x000014, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::HoverColor' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, BaseColor) == 0x000024, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::BaseColor' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue) == 0x000034, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_1) == 0x000044, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue_2) == 0x000054, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000068, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000070, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_GetAllEntries_ReturnValue) == 0x000088, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_Array_Get_Item) == 0x000098, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, K2Node_DynamicCast_AsNo_Input_Action_Pip_Button) == 0x0000A8, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::K2Node_DynamicCast_AsNo_Input_Action_Pip_Button' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals, CallFunc_Less_IntInt_ReturnValue) == 0x0000B1, "Member 'ProgressiveTableOfContentsScreen_C_Update_Subscribed_Visuals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x7];
	double                                        Spacing_Adjustment_For_Tabs;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
};
static_assert(alignof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs) == 0x000008, "Wrong alignment on ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs");
static_assert(sizeof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs) == 0x000040, "Wrong size on ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, bTabsVisible) == 0x000000, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::bTabsVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, Spacing_Adjustment_For_Tabs) == 0x000008, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::Spacing_Adjustment_For_Tabs' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000018, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Margin) == 0x000028, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs, K2Node_MakeStruct_Top_ImplicitCast) == 0x000038, "Member 'ProgressiveTableOfContentsScreen_C_UpdateLayoutForTabs::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

}
