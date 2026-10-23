#pragma once

#include "Basic.hpp"

#include "TournamentPayoutModal_classes.hpp"
#include "TournamentPayoutModal_parameters.hpp"

namespace SDK
{

void UTournamentPayoutModal_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::TournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentPayoutModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::TournamentPayoutModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentPayoutModal_C::EmptyFunction(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "EmptyFunction");

	Params::TournamentPayoutModal_C_EmptyFunction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;
}

void UTournamentPayoutModal_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "EventColorize");

	Params::TournamentPayoutModal_C_EventColorize Parms{};

	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentPayoutModal_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "EventIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentPayoutModal_C::ExecuteUbergraph_TournamentPayoutModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "ExecuteUbergraph_TournamentPayoutModal");

	Params::TournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentPayoutModal_C::Init(const class FString& EventWindowId, const class FString& TournamentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "Init");

	Params::TournamentPayoutModal_C_Init Parms{};

	Parms.EventWindowId = std::move(EventWindowId);
	Parms.TournamentId = std::move(TournamentId);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentPayoutModal_C::InitializeTabButton(class UCommonButtonLegacy* TabButton, const class FText& TabText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "InitializeTabButton");

	Params::TournamentPayoutModal_C_InitializeTabButton Parms{};

	Parms.TabButton = TabButton;
	Parms.TabText = std::move(TabText);

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentPayoutModal_C::NotifyNoPayouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "NotifyNoPayouts");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentPayoutModal_C::OnTabVisibilityChange(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentPayoutModal_C", "OnTabVisibilityChange");

	Params::TournamentPayoutModal_C_OnTabVisibilityChange Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
