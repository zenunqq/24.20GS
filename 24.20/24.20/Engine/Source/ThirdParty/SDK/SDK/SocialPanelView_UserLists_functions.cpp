#pragma once

#include "Basic.hpp"

#include "SocialPanelView_UserLists_classes.hpp"
#include "SocialPanelView_UserLists_parameters.hpp"

namespace SDK
{

void USocialPanelView_UserLists_C::BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelView_UserLists_C", "BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	Params::SocialPanelView_UserLists_C_BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialPanelView_UserLists_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelView_UserLists_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void USocialPanelView_UserLists_C::ExecuteUbergraph_SocialPanelView_UserLists(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelView_UserLists_C", "ExecuteUbergraph_SocialPanelView_UserLists");

	Params::SocialPanelView_UserLists_C_ExecuteUbergraph_SocialPanelView_UserLists Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USocialPanelView_UserLists_C::OnSetVoiceChannelButtonText(const class FText& ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelView_UserLists_C", "OnSetVoiceChannelButtonText");

	Params::SocialPanelView_UserLists_C_OnSetVoiceChannelButtonText Parms{};

	Parms.ButtonText = std::move(ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void USocialPanelView_UserLists_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelView_UserLists_C", "PreConstruct");

	Params::SocialPanelView_UserLists_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
