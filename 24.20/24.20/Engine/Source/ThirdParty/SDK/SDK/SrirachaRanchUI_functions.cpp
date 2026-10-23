#pragma once

#include "Basic.hpp"

#include "SrirachaRanchUI_classes.hpp"
#include "SrirachaRanchUI_parameters.hpp"

namespace SDK
{

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_ToggleRadio", "HandleRadioPlaying");

	Params::FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying Parms{};

	Parms.Radio = Radio;
	Parms.Source = std::move(Source);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_ToggleRadio", "HandleRadioStopped");

	Params::FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped Parms{};

	Parms.Radio = Radio;
	Parms.Source = std::move(Source);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URadioPlayerWidgetBase::NativeEnteredVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "NativeEnteredVehicle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URadioPlayerWidgetBase::NativeExitedVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "NativeExitedVehicle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URadioPlayerWidgetBase::OnControllerGainedNewFortPawn(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnControllerGainedNewFortPawn");

	Params::RadioPlayerWidgetBase_OnControllerGainedNewFortPawn Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URadioPlayerWidgetBase::OnDisconnectFromComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnDisconnectFromComp");

	UObject::ProcessEvent(Func, nullptr);
}

void URadioPlayerWidgetBase::OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnFailedToOpenSource");

	Params::RadioPlayerWidgetBase_OnFailedToOpenSource Parms{};

	Parms.Radio = Radio;
	Parms.Source = std::move(Source);

	UObject::ProcessEvent(Func, &Parms);
}

void URadioPlayerWidgetBase::OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnLoadingNewSource");

	Params::RadioPlayerWidgetBase_OnLoadingNewSource Parms{};

	Parms.Radio = Radio;
	Parms.Source = std::move(Source);

	UObject::ProcessEvent(Func, &Parms);
}

void URadioPlayerWidgetBase::OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& LastSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnRadioStopped");

	Params::RadioPlayerWidgetBase_OnRadioStopped Parms{};

	Parms.Radio = Radio;
	Parms.LastSource = std::move(LastSource);

	UObject::ProcessEvent(Func, &Parms);
}

void URadioPlayerWidgetBase::OnShouldShowDueToEntrance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnShouldShowDueToEntrance");

	UObject::ProcessEvent(Func, nullptr);
}

void URadioPlayerWidgetBase::OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnSourceFinished");

	Params::RadioPlayerWidgetBase_OnSourceFinished Parms{};

	Parms.Radio = Radio;
	Parms.Source = std::move(Source);

	UObject::ProcessEvent(Func, &Parms);
}

void URadioPlayerWidgetBase::OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "OnSourcePlaying");

	Params::RadioPlayerWidgetBase_OnSourcePlaying Parms{};

	Parms.Radio = Radio;
	Parms.Source = std::move(Source);

	UObject::ProcessEvent(Func, &Parms);
}

void URadioPlayerWidgetBase::SetControllable(bool bCanControl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioPlayerWidgetBase", "SetControllable");

	Params::RadioPlayerWidgetBase_SetControllable Parms{};

	Parms.bCanControl = bCanControl;

	UObject::ProcessEvent(Func, &Parms);
}

}
