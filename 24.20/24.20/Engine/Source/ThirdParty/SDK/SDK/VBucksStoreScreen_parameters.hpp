#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct VBucksStoreScreen_C_ApplyMobileLayout final
{
public:
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
};
static_assert(alignof(VBucksStoreScreen_C_ApplyMobileLayout) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_ApplyMobileLayout");
static_assert(sizeof(VBucksStoreScreen_C_ApplyMobileLayout) == 0x000008, "Wrong size on VBucksStoreScreen_C_ApplyMobileLayout");
static_assert(offsetof(VBucksStoreScreen_C_ApplyMobileLayout, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000000, "Member 'VBucksStoreScreen_C_ApplyMobileLayout::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

struct VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_HasOtherPlatformCurrency;
	uint8                                         Pad_7[0x1];
	class FText                                   K2Node_Event_CurrencyMessageLocText;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsActivated_ReturnValue;
	uint8                                         Pad_22[0x6];
	class UStore_BannerMessage_C*                 K2Node_DynamicCast_AsStore_Banner_Message;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_42[0x6];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
};
static_assert(alignof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen");
static_assert(sizeof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen) == 0x000050, "Wrong size on VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, EntryPoint) == 0x000000, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, Temp_byte_Variable) == 0x000004, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, Temp_byte_Variable_1) == 0x000005, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, K2Node_Event_HasOtherPlatformCurrency) == 0x000006, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::K2Node_Event_HasOtherPlatformCurrency' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, K2Node_Event_CurrencyMessageLocText) == 0x000008, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::K2Node_Event_CurrencyMessageLocText' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, Temp_bool_Variable) == 0x000020, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, CallFunc_IsActivated_ReturnValue) == 0x000021, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, K2Node_DynamicCast_AsStore_Banner_Message) == 0x000028, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::K2Node_DynamicCast_AsStore_Banner_Message' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000038, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, K2Node_Event_IsDesignTime) == 0x000040, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, K2Node_Select_Default) == 0x000041, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen, CallFunc_GetContext_ReturnValue) == 0x000048, "Member 'VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");

struct VBucksStoreScreen_C_GetVisibilityByChildrenPresence final
{
public:
	class UPanelWidget*                           Panel;
	ESlateVisibility                              NewParam;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_GetVisibilityByChildrenPresence");
static_assert(sizeof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence) == 0x000010, "Wrong size on VBucksStoreScreen_C_GetVisibilityByChildrenPresence");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, Panel) == 0x000000, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::Panel' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, NewParam) == 0x000008, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::NewParam' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, Temp_bool_Variable) == 0x000009, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, CallFunc_HasAnyChildren_ReturnValue) == 0x00000A, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, Temp_byte_Variable) == 0x00000B, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, Temp_byte_Variable_1) == 0x00000C, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_GetVisibilityByChildrenPresence, K2Node_Select_Default) == 0x00000D, "Member 'VBucksStoreScreen_C_GetVisibilityByChildrenPresence::K2Node_Select_Default' has a wrong offset!");

struct VBucksStoreScreen_C_HandleBack final
{
public:
	bool                                          PassThrough;
};
static_assert(alignof(VBucksStoreScreen_C_HandleBack) == 0x000001, "Wrong alignment on VBucksStoreScreen_C_HandleBack");
static_assert(sizeof(VBucksStoreScreen_C_HandleBack) == 0x000001, "Wrong size on VBucksStoreScreen_C_HandleBack");
static_assert(offsetof(VBucksStoreScreen_C_HandleBack, PassThrough) == 0x000000, "Member 'VBucksStoreScreen_C_HandleBack::PassThrough' has a wrong offset!");

struct VBucksStoreScreen_C_HandleRedeem final
{
public:
	bool                                          bPassThrough;
	uint8                                         Pad_1[0x7];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class URedeemFriendCodeWindow_C*              CallFunc_Create_ReturnValue;
};
static_assert(alignof(VBucksStoreScreen_C_HandleRedeem) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_HandleRedeem");
static_assert(sizeof(VBucksStoreScreen_C_HandleRedeem) == 0x000018, "Wrong size on VBucksStoreScreen_C_HandleRedeem");
static_assert(offsetof(VBucksStoreScreen_C_HandleRedeem, bPassThrough) == 0x000000, "Member 'VBucksStoreScreen_C_HandleRedeem::bPassThrough' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_HandleRedeem, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'VBucksStoreScreen_C_HandleRedeem::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_HandleRedeem, CallFunc_Create_ReturnValue) == 0x000010, "Member 'VBucksStoreScreen_C_HandleRedeem::CallFunc_Create_ReturnValue' has a wrong offset!");

struct VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage final
{
public:
	bool                                          HasOtherPlatformCurrency;
	uint8                                         Pad_1[0x7];
	class FText                                   CurrencyMessageLocText;
};
static_assert(alignof(VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage");
static_assert(sizeof(VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage) == 0x000020, "Wrong size on VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage");
static_assert(offsetof(VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage, HasOtherPlatformCurrency) == 0x000000, "Member 'VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage::HasOtherPlatformCurrency' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage, CurrencyMessageLocText) == 0x000008, "Member 'VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage::CurrencyMessageLocText' has a wrong offset!");

struct VBucksStoreScreen_C_PlayEquippedLockerMusic final
{
public:
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	uint8                                         Pad_1[0x7];
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;
};
static_assert(alignof(VBucksStoreScreen_C_PlayEquippedLockerMusic) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_PlayEquippedLockerMusic");
static_assert(sizeof(VBucksStoreScreen_C_PlayEquippedLockerMusic) == 0x000028, "Wrong size on VBucksStoreScreen_C_PlayEquippedLockerMusic");
static_assert(offsetof(VBucksStoreScreen_C_PlayEquippedLockerMusic, CallFunc_GetSubGame_ReturnValue) == 0x000000, "Member 'VBucksStoreScreen_C_PlayEquippedLockerMusic::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_PlayEquippedLockerMusic, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'VBucksStoreScreen_C_PlayEquippedLockerMusic::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_PlayEquippedLockerMusic, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'VBucksStoreScreen_C_PlayEquippedLockerMusic::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_PlayEquippedLockerMusic, CallFunc_Array_Get_Item) == 0x000020, "Member 'VBucksStoreScreen_C_PlayEquippedLockerMusic::CallFunc_Array_Get_Item' has a wrong offset!");

struct VBucksStoreScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(VBucksStoreScreen_C_PreConstruct) == 0x000001, "Wrong alignment on VBucksStoreScreen_C_PreConstruct");
static_assert(sizeof(VBucksStoreScreen_C_PreConstruct) == 0x000001, "Wrong size on VBucksStoreScreen_C_PreConstruct");
static_assert(offsetof(VBucksStoreScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'VBucksStoreScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct VBucksStoreScreen_C_UpdateCurrencyNotification final
{
public:
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_3[0x1];
	struct FMtxBreakdown                          CallFunc_GetMtxBreakdown_ReturnValue;
	uint8                                         Pad_14[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_21[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_89[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(VBucksStoreScreen_C_UpdateCurrencyNotification) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_UpdateCurrencyNotification");
static_assert(sizeof(VBucksStoreScreen_C_UpdateCurrencyNotification) == 0x0000A8, "Wrong size on VBucksStoreScreen_C_UpdateCurrencyNotification");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, Temp_byte_Variable) == 0x000000, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, Temp_byte_Variable_1) == 0x000001, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, Temp_bool_Variable) == 0x000002, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, CallFunc_GetMtxBreakdown_ReturnValue) == 0x000004, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::CallFunc_GetMtxBreakdown_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, K2Node_MakeArray_Array) == 0x000078, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, K2Node_Select_Default) == 0x000088, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(VBucksStoreScreen_C_UpdateCurrencyNotification, CallFunc_Format_ReturnValue) == 0x000090, "Member 'VBucksStoreScreen_C_UpdateCurrencyNotification::CallFunc_Format_ReturnValue' has a wrong offset!");

struct VBucksStoreScreen_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;
};
static_assert(alignof(VBucksStoreScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on VBucksStoreScreen_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(VBucksStoreScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on VBucksStoreScreen_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(VBucksStoreScreen_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'VBucksStoreScreen_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}
