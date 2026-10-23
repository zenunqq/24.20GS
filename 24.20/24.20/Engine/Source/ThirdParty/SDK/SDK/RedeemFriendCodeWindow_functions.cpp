#pragma once

#include "Basic.hpp"

#include "RedeemFriendCodeWindow_classes.hpp"
#include "RedeemFriendCodeWindow_parameters.hpp"

namespace SDK
{

void URedeemFriendCodeWindow_C::OnRedeemFriendCodeComplete(bool bSuccess, ERedeemCodeFailureReason FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "OnRedeemFriendCodeComplete");

	Params::RedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.FailureReason = FailureReason;

	UObject::ProcessEvent(Func, &Parms);
}

void URedeemFriendCodeWindow_C::HandleRedeemCodeComplete(bool Success, ERedeemCodeFailureReason FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "HandleRedeemCodeComplete");

	Params::RedeemFriendCodeWindow_C_HandleRedeemCodeComplete Parms{};

	Parms.Success = Success;
	Parms.FailureReason = FailureReason;

	UObject::ProcessEvent(Func, &Parms);
}

void URedeemFriendCodeWindow_C::ExecuteUbergraph_RedeemFriendCodeWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "ExecuteUbergraph_RedeemFriendCodeWindow");

	Params::RedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URedeemFriendCodeWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void URedeemFriendCodeWindow_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}

void URedeemFriendCodeWindow_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::RedeemFriendCodeWindow_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void URedeemFriendCodeWindow_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	Params::RedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void URedeemFriendCodeWindow_C::BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	Params::RedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void URedeemFriendCodeWindow_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RedeemFriendCodeWindow_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature");

	Params::RedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}
