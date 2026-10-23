#pragma once

#include "Basic.hpp"

#include "AthenaFrontend_classes.hpp"
#include "AthenaFrontend_parameters.hpp"

namespace SDK
{

void UAthenaFrontend_C::BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButtonLegacy* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature");

	Params::AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::DisplayDebugFlowText(const class FText& DebugFlowText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "DisplayDebugFlowText");

	Params::AthenaFrontend_C_DisplayDebugFlowText Parms{};

	Parms.DebugFlowText = std::move(DebugFlowText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::ExecuteUbergraph_AthenaFrontend(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "ExecuteUbergraph_AthenaFrontend");

	Params::AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::HideDebugFlowText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "HideDebugFlowText");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::InitChatVisibilityButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "InitChatVisibilityButton");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::On_Can_PTT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "On Can PTT");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::OnSetFrontendVisibilityMode(EFrontendVisibilityMode InFrontendVisibilityMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "OnSetFrontendVisibilityMode");

	Params::AthenaFrontend_C_OnSetFrontendVisibilityMode Parms{};

	Parms.InFrontendVisibilityMode = InFrontendVisibilityMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::OnTrailerMediaEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "OnTrailerMediaEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::OnTrailerMediaOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "OnTrailerMediaOpened");

	Params::AthenaFrontend_C_OnTrailerMediaOpened Parms{};

	Parms.OpenedUrl = std::move(OpenedUrl);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::OnTrailerTransitionAudioCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "OnTrailerTransitionAudioCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::PlayTrailer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "PlayTrailer");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::SetChatWidgetVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "SetChatWidgetVisibility");

	Params::AthenaFrontend_C_SetChatWidgetVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::SetOverlayTitleBarVisibility(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "SetOverlayTitleBarVisibility");

	Params::AthenaFrontend_C_SetOverlayTitleBarVisibility Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::StartTrailerTransitionAudioCheck(class UMediaPlayer* MediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "StartTrailerTransitionAudioCheck");

	Params::AthenaFrontend_C_StartTrailerTransitionAudioCheck Parms{};

	Parms.MediaPlayer = MediaPlayer;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaFrontend_C::StopTrailerTransitionAudioCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "StopTrailerTransitionAudioCheck");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaFrontend_C::UpdatePttVisibility(EPTTState PTTState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaFrontend_C", "UpdatePttVisibility");

	Params::AthenaFrontend_C_UpdatePttVisibility Parms{};

	Parms.PTTState = PTTState;

	UObject::ProcessEvent(Func, &Parms);
}

}
