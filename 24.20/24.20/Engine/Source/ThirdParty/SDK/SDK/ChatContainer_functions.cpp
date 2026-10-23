#pragma once

#include "Basic.hpp"

#include "ChatContainer_classes.hpp"
#include "ChatContainer_parameters.hpp"

namespace SDK
{

void UChatContainer_C::BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UChatContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UChatContainer_C::ExecuteUbergraph_ChatContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "ExecuteUbergraph_ChatContainer");

	Params::ChatContainer_C_ExecuteUbergraph_ChatContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::FocusChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "FocusChat");

	UObject::ProcessEvent(Func, nullptr);
}

void UChatContainer_C::HandleChatOpenChanged(bool bChatShouldBeOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "HandleChatOpenChanged");

	Params::ChatContainer_C_HandleChatOpenChanged Parms{};

	Parms.bChatShouldBeOpen = bChatShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::HandleCursorModeChanged(bool bEnabled, class FName ActionName, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "HandleCursorModeChanged");

	Params::ChatContainer_C_HandleCursorModeChanged Parms{};

	Parms.bEnabled = bEnabled;
	Parms.ActionName = ActionName;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::OnChatOpenChanged(bool bShouldBeOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "OnChatOpenChanged");

	Params::ChatContainer_C_OnChatOpenChanged Parms{};

	Parms.bShouldBeOpen = bShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);
}

struct FEventReply UChatContainer_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "OnKeyDown");

	Params::ChatContainer_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UChatContainer_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "OnMouseEnter");

	Params::ChatContainer_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "OnMouseLeave");

	Params::ChatContainer_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::OnSendButtonDisplayChanged(bool bShowSendButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "OnSendButtonDisplayChanged");

	Params::ChatContainer_C_OnSendButtonDisplayChanged Parms{};

	Parms.bShowSendButton = bShowSendButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::OnSizeAnimationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "OnSizeAnimationComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UChatContainer_C::SetChatBoxStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "SetChatBoxStyle");

	UObject::ProcessEvent(Func, nullptr);
}

void UChatContainer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "Tick");

	Params::ChatContainer_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UChatContainer_C::TransitionState(class UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatContainer_C", "TransitionState");

	Params::ChatContainer_C_TransitionState Parms{};

	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionTime = TransitionTime;
	Parms.PlayForward = PlayForward;

	UObject::ProcessEvent(Func, &Parms);
}

}
