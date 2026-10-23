#pragma once

#include "Basic.hpp"

#include "KoalaUI_classes.hpp"
#include "KoalaUI_parameters.hpp"

namespace SDK
{

void UFortSidebarPanelKoala::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSidebarPanelKoala", "OnConnectionChanged");

	Params::FortSidebarPanelKoala_OnConnectionChanged Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);
}

int32 UKoalaHUDWidget::GetTrackedClipCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "GetTrackedClipCount");

	Params::KoalaHUDWidget_GetTrackedClipCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UKoalaHUDWidget::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandleAthenaGamePhaseChanged");

	Params::KoalaHUDWidget_HandleAthenaGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::HandleLocalPlayerKilledPlayer(const class AFortPlayerStateAthena* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandleLocalPlayerKilledPlayer");

	Params::KoalaHUDWidget_HandleLocalPlayerKilledPlayer Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::HandlePlayerMatchWon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerMatchWon");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::HandlePlayerPawnEmoteStopped(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "HandlePlayerPawnEmoteStopped");

	Params::KoalaHUDWidget_HandlePlayerPawnEmoteStopped Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::OnAvailabilityChanged(EKoalaAvailability Availability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnAvailabilityChanged");

	Params::KoalaHUDWidget_OnAvailabilityChanged Parms{};

	Parms.Availability = Availability;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaHUDWidget::OnClipStatusChanged(int32 InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnClipStatusChanged");

	Params::KoalaHUDWidget_OnClipStatusChanged Parms{};

	Parms.InClipID = InClipID;
	Parms.InClipStatus = InClipStatus;
	Parms.InUploadProgress = InUploadProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaHUDWidget::OnConnectionChanged(EKoalaConnectionStatus InStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnConnectionChanged");

	Params::KoalaHUDWidget_OnConnectionChanged Parms{};

	Parms.InStatus = InStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaHUDWidget::OnInputComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnInputComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UKoalaHUDWidget::OnInputProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnInputProgress");

	Params::KoalaHUDWidget_OnInputProgress Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaHUDWidget::OnRecordingStatusChanged(EKoalaRecording InRecordingStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnRecordingStatusChanged");

	Params::KoalaHUDWidget_OnRecordingStatusChanged Parms{};

	Parms.InRecordingStatus = InRecordingStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaHUDWidget::OnReminderEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnReminderEnded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::OnReminderTimerStarted(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnReminderTimerStarted");

	Params::KoalaHUDWidget_OnReminderTimerStarted Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaHUDWidget::OnTouchAreaMouseDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "OnTouchAreaMouseDown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::RegisterClipButtonInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "RegisterClipButtonInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UKoalaHUDWidget::UnregisterClipButtonInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "UnregisterClipButtonInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UKoalaHUDWidget::GetUploadingClipCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaHUDWidget", "GetUploadingClipCount");

	Params::KoalaHUDWidget_GetUploadingClipCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UKoalaSettingDetailExtension::OnAvailabilityChanged(bool bAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaSettingDetailExtension", "OnAvailabilityChanged");

	Params::KoalaSettingDetailExtension_OnAvailabilityChanged Parms{};

	Parms.bAvailable = bAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UKoalaSettingDetailExtension::OnConnectionChanged(bool bConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KoalaSettingDetailExtension", "OnConnectionChanged");

	Params::KoalaSettingDetailExtension_OnConnectionChanged Parms{};

	Parms.bConnected = bConnected;

	UObject::ProcessEvent(Func, &Parms);
}

}
