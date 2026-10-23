#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CrewUI_structs.hpp"

namespace SDK::Params
{

struct BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");
static_assert(sizeof(BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature) == 0x000001, "Wrong size on BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");
static_assert(offsetof(BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature, InVisibility) == 0x000000, "Member 'BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature::InVisibility' has a wrong offset!");

struct BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BattlePassPurchaseScreen_C_BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UTexture2D*                             K2Node_Event_NewBackground;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          Temp_bool_Variable;
	EBattlePassPurchaseState                      Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_1B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UBattlePassSeasonHeading_C*             K2Node_DynamicCast_AsBattle_Pass_Season_Heading;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          K2Node_Event_bInteractable;
	EBattlePassPurchaseState                      K2Node_Event_InCurrentState;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          K2Node_Event_IsDesignTime;
	EBattlePassPurchaseState                      Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default;
	EBattlePassPurchaseState                      Temp_byte_Variable_4;
	uint8                                         Pad_4B[0x5];
	class UWidget*                                K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UPurchaseNavButton_C*                   K2Node_DynamicCast_AsPurchase_Nav_Button;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_IsClosed_Variable;
	ESlateVisibility                              Temp_byte_Variable_6;
	uint8                                         Pad_6D[0x3];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class FText                                   K2Node_Event_NotificationText;
	bool                                          K2Node_Event_bShowNotification;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_92[0x6];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
	ESlateVisibility                              K2Node_Select_Default_2;
	bool                                          K2Node_Select_Default_3;
	ESlateVisibility                              K2Node_ComponentBoundEvent_InVisibility;
	uint8                                         Pad_A3[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;
};
static_assert(alignof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen) == 0x000008, "Wrong alignment on BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen");
static_assert(sizeof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen) == 0x0000B8, "Wrong size on BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, EntryPoint) == 0x000000, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Event_NewBackground) == 0x000008, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Event_NewBackground' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_bool_Variable) == 0x000018, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable) == 0x000019, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable_1) == 0x00001A, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_GetEndTime_ReturnValue) == 0x000028, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_DynamicCast_AsBattle_Pass_Season_Heading) == 0x000038, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_DynamicCast_AsBattle_Pass_Season_Heading' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable_2) == 0x000041, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_GetVisibility_ReturnValue) == 0x000042, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000043, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Event_bInteractable) == 0x000044, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Event_bInteractable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Event_InCurrentState) == 0x000045, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Event_InCurrentState' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_SwitchEnum_CmpSuccess) == 0x000046, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Event_IsDesignTime) == 0x000047, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable_3) == 0x000048, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Select_Default) == 0x000049, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable_4) == 0x00004A, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Select_Default_1) == 0x000050, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_2) == 0x000058, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_DynamicCast_AsPurchase_Nav_Button) == 0x000060, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_DynamicCast_AsPurchase_Nav_Button' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_bool_Has_Been_Initd_Variable) == 0x000069, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable_5) == 0x00006A, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_bool_IsClosed_Variable) == 0x00006B, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_byte_Variable_6) == 0x00006C, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_SpawnSound2D_ReturnValue) == 0x000070, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Event_NotificationText) == 0x000078, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Event_NotificationText' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Event_bShowNotification) == 0x000090, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Event_bShowNotification' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, Temp_bool_Variable_1) == 0x000091, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_ComponentBoundEvent_Button) == 0x000098, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Select_Default_2) == 0x0000A0, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_Select_Default_3) == 0x0000A1, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, K2Node_ComponentBoundEvent_InVisibility) == 0x0000A2, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::K2Node_ComponentBoundEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000A8, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen, CallFunc_SpawnSound2D_ReturnValue_1) == 0x0000B0, "Member 'BattlePassPurchaseScreen_C_ExecuteUbergraph_BattlePassPurchaseScreen::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");

struct BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete final
{
public:
	class UTexture2D*                             NewBackground;
};
static_assert(alignof(BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete) == 0x000008, "Wrong alignment on BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete");
static_assert(sizeof(BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete) == 0x000008, "Wrong size on BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete");
static_assert(offsetof(BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete, NewBackground) == 0x000000, "Member 'BattlePassPurchaseScreen_C_OnDownloadBackgroundComplete::NewBackground' has a wrong offset!");

struct BattlePassPurchaseScreen_C_OnPurchaseStateChanged final
{
public:
	EBattlePassPurchaseState                      InCurrentState;
};
static_assert(alignof(BattlePassPurchaseScreen_C_OnPurchaseStateChanged) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_C_OnPurchaseStateChanged");
static_assert(sizeof(BattlePassPurchaseScreen_C_OnPurchaseStateChanged) == 0x000001, "Wrong size on BattlePassPurchaseScreen_C_OnPurchaseStateChanged");
static_assert(offsetof(BattlePassPurchaseScreen_C_OnPurchaseStateChanged, InCurrentState) == 0x000000, "Member 'BattlePassPurchaseScreen_C_OnPurchaseStateChanged::InCurrentState' has a wrong offset!");

struct BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText final
{
public:
	class FText                                   NotificationText;
};
static_assert(alignof(BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText) == 0x000008, "Wrong alignment on BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText");
static_assert(sizeof(BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText) == 0x000018, "Wrong size on BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText");
static_assert(offsetof(BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText, NotificationText) == 0x000000, "Member 'BattlePassPurchaseScreen_C_OnSetNavButtonNotificationText::NotificationText' has a wrong offset!");

struct BattlePassPurchaseScreen_C_OnSetScreenInteractable final
{
public:
	bool                                          bInteractable;
};
static_assert(alignof(BattlePassPurchaseScreen_C_OnSetScreenInteractable) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_C_OnSetScreenInteractable");
static_assert(sizeof(BattlePassPurchaseScreen_C_OnSetScreenInteractable) == 0x000001, "Wrong size on BattlePassPurchaseScreen_C_OnSetScreenInteractable");
static_assert(offsetof(BattlePassPurchaseScreen_C_OnSetScreenInteractable, bInteractable) == 0x000000, "Member 'BattlePassPurchaseScreen_C_OnSetScreenInteractable::bInteractable' has a wrong offset!");

struct BattlePassPurchaseScreen_C_OnShowNavButtonNotification final
{
public:
	bool                                          bShowNotification;
};
static_assert(alignof(BattlePassPurchaseScreen_C_OnShowNavButtonNotification) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_C_OnShowNavButtonNotification");
static_assert(sizeof(BattlePassPurchaseScreen_C_OnShowNavButtonNotification) == 0x000001, "Wrong size on BattlePassPurchaseScreen_C_OnShowNavButtonNotification");
static_assert(offsetof(BattlePassPurchaseScreen_C_OnShowNavButtonNotification, bShowNotification) == 0x000000, "Member 'BattlePassPurchaseScreen_C_OnShowNavButtonNotification::bShowNotification' has a wrong offset!");

struct BattlePassPurchaseScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BattlePassPurchaseScreen_C_PreConstruct) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_C_PreConstruct");
static_assert(sizeof(BattlePassPurchaseScreen_C_PreConstruct) == 0x000001, "Wrong size on BattlePassPurchaseScreen_C_PreConstruct");
static_assert(offsetof(BattlePassPurchaseScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BattlePassPurchaseScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BattlePassPurchaseScreen_C_SetMobileVisuals final
{
public:
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_1[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	EHorizontalAlignment                          Temp_byte_Variable_2;
	uint8                                         Pad_13[0x5];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	EHorizontalAlignment                          Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_22[0x6];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_31[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	EHorizontalAlignment                          K2Node_Select_Default;
	uint8                                         Pad_51[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_61[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
};
static_assert(alignof(BattlePassPurchaseScreen_C_SetMobileVisuals) == 0x000008, "Wrong alignment on BattlePassPurchaseScreen_C_SetMobileVisuals");
static_assert(sizeof(BattlePassPurchaseScreen_C_SetMobileVisuals) == 0x000080, "Wrong size on BattlePassPurchaseScreen_C_SetMobileVisuals");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, Temp_byte_Variable) == 0x000000, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, Temp_byte_Variable_1) == 0x000010, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, Temp_bool_Variable) == 0x000011, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, Temp_byte_Variable_2) == 0x000012, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000018, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, Temp_byte_Variable_3) == 0x000020, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, Temp_bool_Variable_1) == 0x000021, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000028, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, CallFunc_IsMobileGame_ReturnValue) == 0x000030, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, K2Node_MakeStruct_Margin) == 0x000040, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, K2Node_Select_Default) == 0x000050, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, CallFunc_SelectFloat_ReturnValue_1) == 0x000058, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, K2Node_Select_Default_1) == 0x000060, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, K2Node_MakeStruct_Margin_1) == 0x000064, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, K2Node_MakeStruct_Right_ImplicitCast) == 0x000074, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassPurchaseScreen_C_SetMobileVisuals, K2Node_MakeStruct_Left_ImplicitCast) == 0x000078, "Member 'BattlePassPurchaseScreen_C_SetMobileVisuals::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");

}
