#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          K2Node_Event_bIsInvite;
	uint8                                         Pad_22[0x6];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;
	uint8                                         Pad_31[0x7];
	class FString                                 CallFunc_GetPlatformName_ReturnValue;
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;
};
static_assert(alignof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode) == 0x000008, "Wrong alignment on WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode");
static_assert(sizeof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode) == 0x000050, "Wrong size on WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, EntryPoint) == 0x000000, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000018, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_GetCurrentInputType_ReturnValue) == 0x000020, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, K2Node_Event_bIsInvite) == 0x000021, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::K2Node_Event_bIsInvite' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_GetLocalPlayerSubsystem_ReturnValue_2) == 0x000028, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_GetLocalPlayerSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000030, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_GetPlatformName_ReturnValue) == 0x000038, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_GetPlatformName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000048, "Member 'WBP_RebootRallyPopupModal_QRCode_C_ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");

struct WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged) == 0x000001, "Wrong alignment on WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged");
static_assert(sizeof(WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged) == 0x000001, "Wrong size on WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged, NewInputType) == 0x000000, "Member 'WBP_RebootRallyPopupModal_QRCode_C_InputMethodChanged::NewInputType' has a wrong offset!");

struct WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite final
{
public:
	bool                                          bIsInvite_0;
};
static_assert(alignof(WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite) == 0x000001, "Wrong alignment on WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite");
static_assert(sizeof(WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite) == 0x000001, "Wrong size on WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite, bIsInvite_0) == 0x000000, "Member 'WBP_RebootRallyPopupModal_QRCode_C_SetIsInvite::bIsInvite_0' has a wrong offset!");

struct WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode final
{
public:
	ECommonInputType                              NewInputType;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_2[0x6];
	class UTexture2D*                             Temp_object_Variable;
	class UTexture2D*                             Temp_object_Variable_1;
	class UTexture2D*                             Temp_object_Variable_2;
	class UTexture2D*                             Temp_object_Variable_3;
	ECommonInputType                              Temp_byte_Variable_1;
	uint8                                         Pad_29[0x7];
	class UTexture2D*                             K2Node_Select_Default;
	class UTexture2D*                             Temp_object_Variable_4;
	class UTexture2D*                             Temp_object_Variable_5;
	class UTexture2D*                             Temp_object_Variable_6;
	class UTexture2D*                             Temp_object_Variable_7;
	class UTexture2D*                             K2Node_Select_Default_1;
};
static_assert(alignof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode) == 0x000008, "Wrong alignment on WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode");
static_assert(sizeof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode) == 0x000060, "Wrong size on WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, NewInputType) == 0x000000, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::NewInputType' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_byte_Variable) == 0x000001, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable) == 0x000008, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_1) == 0x000010, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_2) == 0x000018, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_3) == 0x000020, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_byte_Variable_1) == 0x000028, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, K2Node_Select_Default) == 0x000030, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_4) == 0x000038, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_5) == 0x000040, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_6) == 0x000048, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, Temp_object_Variable_7) == 0x000050, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode, K2Node_Select_Default_1) == 0x000058, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateQRCode::K2Node_Select_Default_1' has a wrong offset!");

struct WBP_RebootRallyPopupModal_QRCode_C_UpdateText final
{
public:
	ECommonInputType                              NewInputType;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ECommonInputType                              Temp_byte_Variable_4;
	uint8                                         Pad_6[0x2];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	ECommonInputType                              Temp_byte_Variable_5;
	uint8                                         Pad_69[0x7];
	class FText                                   K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText) == 0x000008, "Wrong alignment on WBP_RebootRallyPopupModal_QRCode_C_UpdateText");
static_assert(sizeof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText) == 0x000090, "Wrong size on WBP_RebootRallyPopupModal_QRCode_C_UpdateText");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, NewInputType) == 0x000000, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::NewInputType' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_byte_Variable) == 0x000001, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_byte_Variable_2) == 0x000003, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_byte_Variable_3) == 0x000004, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_byte_Variable_4) == 0x000005, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_text_Variable) == 0x000008, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_text_Variable_1) == 0x000020, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_text_Variable_2) == 0x000038, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_text_Variable_3) == 0x000050, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, Temp_byte_Variable_5) == 0x000068, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, K2Node_Select_Default) == 0x000070, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateText, K2Node_Select_Default_1) == 0x000088, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateText::K2Node_Select_Default_1' has a wrong offset!");

struct WBP_RebootRallyPopupModal_QRCode_C_UpdateURL final
{
public:
	ECommonInputType                              NewInputType;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_2[0x6];
	class FString                                 Temp_string_Variable;
	class FString                                 Temp_string_Variable_1;
	class FString                                 Temp_string_Variable_2;
	class FString                                 Temp_string_Variable_3;
	ECommonInputType                              Temp_byte_Variable_1;
	uint8                                         Pad_49[0x7];
	class FString                                 K2Node_Select_Default;
	class FString                                 Temp_string_Variable_4;
	class FString                                 Temp_string_Variable_5;
	class FString                                 Temp_string_Variable_6;
	class FString                                 Temp_string_Variable_7;
	class FString                                 K2Node_Select_Default_1;
};
static_assert(alignof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL) == 0x000008, "Wrong alignment on WBP_RebootRallyPopupModal_QRCode_C_UpdateURL");
static_assert(sizeof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL) == 0x0000B0, "Wrong size on WBP_RebootRallyPopupModal_QRCode_C_UpdateURL");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, NewInputType) == 0x000000, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::NewInputType' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_byte_Variable) == 0x000001, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable) == 0x000008, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_1) == 0x000018, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_2) == 0x000028, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_3) == 0x000038, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_byte_Variable_1) == 0x000048, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, K2Node_Select_Default) == 0x000050, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_4) == 0x000060, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_5) == 0x000070, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_6) == 0x000080, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, Temp_string_Variable_7) == 0x000090, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::Temp_string_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_RebootRallyPopupModal_QRCode_C_UpdateURL, K2Node_Select_Default_1) == 0x0000A0, "Member 'WBP_RebootRallyPopupModal_QRCode_C_UpdateURL::K2Node_Select_Default_1' has a wrong offset!");

}
