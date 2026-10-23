#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete final
{
public:
	bool                                          bSuccess;
	ERedeemCodeFailureReason                      FailureReason;
};
static_assert(alignof(RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete) == 0x000001, "Wrong alignment on RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete");
static_assert(sizeof(RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete) == 0x000002, "Wrong size on RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete");
static_assert(offsetof(RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete, bSuccess) == 0x000000, "Member 'RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete::bSuccess' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete, FailureReason) == 0x000001, "Member 'RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete::FailureReason' has a wrong offset!");

struct RedeemFriendCodeWindow_C_HandleRedeemCodeComplete final
{
public:
	bool                                          Success;
	ERedeemCodeFailureReason                      FailureReason;
	ERedeemCodeFailureReason                      Temp_byte_Variable;
	uint8                                         Pad_3[0x5];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	TArray<struct FPurchasedItemInfo>             K2Node_MakeArray_Array;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete) == 0x000008, "Wrong alignment on RedeemFriendCodeWindow_C_HandleRedeemCodeComplete");
static_assert(sizeof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete) == 0x0000B0, "Wrong size on RedeemFriendCodeWindow_C_HandleRedeemCodeComplete");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Success) == 0x000000, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Success' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, FailureReason) == 0x000001, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::FailureReason' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Temp_byte_Variable) == 0x000002, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Temp_text_Variable) == 0x000008, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Temp_text_Variable_1) == 0x000020, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Temp_text_Variable_2) == 0x000038, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Temp_text_Variable_3) == 0x000050, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, Temp_text_Variable_4) == 0x000068, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, K2Node_MakeArray_Array) == 0x000080, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, CallFunc_GetContext_ReturnValue) == 0x000090, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_HandleRedeemCodeComplete, K2Node_Select_Default) == 0x000098, "Member 'RedeemFriendCodeWindow_C_HandleRedeemCodeComplete::K2Node_Select_Default' has a wrong offset!");

struct RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	bool                                          K2Node_Event_bSuccess;
	ERedeemCodeFailureReason                      K2Node_Event_FailureReason;
	uint8                                         Pad_1A[0x6];
	class FText                                   CallFunc_GetText_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_49[0x7];
	class FText                                   K2Node_ComponentBoundEvent_Text;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_69[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
};
static_assert(alignof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow) == 0x000008, "Wrong alignment on RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow");
static_assert(sizeof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow) == 0x000078, "Wrong size on RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, EntryPoint) == 0x000000, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, K2Node_ComponentBoundEvent_Button_1) == 0x000010, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, K2Node_Event_bSuccess) == 0x000018, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::K2Node_Event_bSuccess' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, K2Node_Event_FailureReason) == 0x000019, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::K2Node_Event_FailureReason' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, CallFunc_TextIsEmpty_ReturnValue) == 0x000048, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, K2Node_ComponentBoundEvent_Text) == 0x000050, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, CallFunc_IsVisible_ReturnValue) == 0x000068, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow, K2Node_ComponentBoundEvent_Button_2) == 0x000070, "Member 'RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");

struct RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;
};
static_assert(alignof(RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");
static_assert(sizeof(RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature) == 0x000018, "Wrong size on RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");
static_assert(offsetof(RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature::Text' has a wrong offset!");

struct RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

}
