#pragma once

#include "Basic.hpp"

#include "AthenaLobbyMatchmakingPlay_classes.hpp"
#include "AthenaLobbyMatchmakingPlay_parameters.hpp"

namespace SDK
{

void UAthenaLobbyMatchmakingPlay_C::AnimateViolator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "AnimateViolator");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLobbyMatchmakingPlay_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLobbyMatchmakingPlay_C::ExecuteUbergraph_AthenaLobbyMatchmakingPlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "ExecuteUbergraph_AthenaLobbyMatchmakingPlay");

	Params::AthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::InitFonts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "InitFonts");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLobbyMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnAvailablePlaylistsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLobbyMatchmakingPlay_C::OnCrossplayPreferencesChanged(bool IsCrossplayEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnCrossplayPreferencesChanged");

	Params::AthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged Parms{};

	Parms.IsCrossplayEnabled = IsCrossplayEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaLobbyMatchmakingPlay_C::OnMatchmakingFinishedBlueprint(bool bSuccess, const class UFortPlaylistAthena* Playlist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnMatchmakingFinishedBlueprint");

	Params::AthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint Parms{};

	Parms.bSuccess = bSuccess;
	Parms.Playlist = Playlist;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::OnSetCancelButtonText(const class FText& CancelButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnSetCancelButtonText");

	Params::AthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText Parms{};

	Parms.CancelButtonText = std::move(CancelButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::OnSetPlayButtonText(const class FText& PlayButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnSetPlayButtonText");

	Params::AthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText Parms{};

	Parms.PlayButtonText = std::move(PlayButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::OnViolatorStyleRefreshed(const EFortMatchmakingViolatorStyle NewViolatorStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnViolatorStyleRefreshed");

	Params::AthenaLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed Parms{};

	Parms.NewViolatorStyle = NewViolatorStyle;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::PickMatchmakingSucceededSound(class USoundBase** SelectedMatchmakingSucceededSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "PickMatchmakingSucceededSound");

	Params::AthenaLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMatchmakingSucceededSound != nullptr)
		*SelectedMatchmakingSucceededSound = Parms.SelectedMatchmakingSucceededSound;
}

void UAthenaLobbyMatchmakingPlay_C::PlaylistActivityChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& ActivityName, EFortLobbyType LobbyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "PlaylistActivityChanged");

	Params::AthenaLobbyMatchmakingPlay_C_PlaylistActivityChanged Parms{};

	Parms.NewPlaylist = std::move(NewPlaylist);
	Parms.ActivityName = std::move(ActivityName);
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::PlaylistChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "PlaylistChanged");

	Params::AthenaLobbyMatchmakingPlay_C_PlaylistChanged Parms{};

	Parms.NewPlaylist = std::move(NewPlaylist);
	Parms.PlaylistCMSOverrideName = std::move(PlaylistCMSOverrideName);
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::SetBasePanelColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "SetBasePanelColor");

	Params::AthenaLobbyMatchmakingPlay_C_SetBasePanelColor Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::ShouldShowMatchmakingDetails(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "ShouldShowMatchmakingDetails");

	Params::AthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaLobbyMatchmakingPlay_C::Update_Playlist_Info(struct FPlaylistFrontEndData& NewPlaylist, class FText& PlaylistTitleOverride, EFortLobbyType& LobbyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "Update Playlist Info");

	Params::AthenaLobbyMatchmakingPlay_C_Update_Playlist_Info Parms{};

	Parms.NewPlaylist = std::move(NewPlaylist);
	Parms.PlaylistTitleOverride = std::move(PlaylistTitleOverride);
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);

	NewPlaylist = std::move(Parms.NewPlaylist);
	PlaylistTitleOverride = std::move(Parms.PlaylistTitleOverride);
	LobbyType = Parms.LobbyType;
}

}
