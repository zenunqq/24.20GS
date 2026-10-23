#pragma once

#include "Basic.hpp"

#include "DiscoveryLobbyMatchmakingPlay_classes.hpp"
#include "DiscoveryLobbyMatchmakingPlay_parameters.hpp"

namespace SDK
{

void UDiscoveryLobbyMatchmakingPlay_C::AnimateViolator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "AnimateViolator");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_0_OnActivityChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_3_OnShowChildModeChangedNotification__DelegateSignature(const class FText& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_3_OnShowChildModeChangedNotification__DelegateSignature");

	Params::DiscoveryLobbyMatchmakingPlay_C_BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_3_OnShowChildModeChangedNotification__DelegateSignature Parms{};

	Parms.DisplayName = std::move(DisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_4_OnShowChildModeFirstTimeNotification__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_4_OnShowChildModeFirstTimeNotification__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_5_OnHideChildModeFirstTimeNotification__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_5_OnHideChildModeFirstTimeNotification__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::DiscoveryLobbyMatchmakingPlay_C_BndEvt__DiscoveryLobbyMatchmakingPlay_Button_MatchmakingMode_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::DiscoveryLobbyMatchmakingPlay_C_BndEvt__DiscoveryLobbyMatchmakingPlay_Button_ModeSet_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::DiscoveryLobbyMatchmakingPlay_C_BndEvt__DiscoveryLobbyMatchmakingPlay_Button_Play_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay");

	Params::DiscoveryLobbyMatchmakingPlay_C_ExecuteUbergraph_DiscoveryLobbyMatchmakingPlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::Hide_Tooltip_After_Delay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "Hide Tooltip After Delay");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnCrossplayPreferencesChanged(bool IsCrossplayEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnCrossplayPreferencesChanged");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged Parms{};

	Parms.IsCrossplayEnabled = IsCrossplayEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnInputMethodChanged");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnLocalPlayerPromotedToLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnLocalPlayerPromotedToLeader");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnMatchmakingFinishedBlueprint(bool bSuccess, const class UFortPlaylistAthena* Playlist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnMatchmakingFinishedBlueprint");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint Parms{};

	Parms.bSuccess = bSuccess;
	Parms.Playlist = Playlist;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnPlayButtonLockStateChanged(const bool bLockState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnPlayButtonLockStateChanged");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnPlayButtonLockStateChanged Parms{};

	Parms.bLockState = bLockState;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnPrivateMatchButtonEnabledStateUpdated(const bool bIsLocalPlayerPartyLeader, const bool bIsMatchmaking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnPrivateMatchButtonEnabledStateUpdated");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnPrivateMatchButtonEnabledStateUpdated Parms{};

	Parms.bIsLocalPlayerPartyLeader = bIsLocalPlayerPartyLeader;
	Parms.bIsMatchmaking = bIsMatchmaking;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnSetCancelButtonText(const class FText& CancelButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnSetCancelButtonText");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnSetCancelButtonText Parms{};

	Parms.CancelButtonText = std::move(CancelButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnSetPlayButtonSecondaryText(const class FText& PlayButtonSecondaryText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnSetPlayButtonSecondaryText");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnSetPlayButtonSecondaryText Parms{};

	Parms.PlayButtonSecondaryText = std::move(PlayButtonSecondaryText);

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnSetPlayButtonText(const class FText& PlayButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnSetPlayButtonText");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnSetPlayButtonText Parms{};

	Parms.PlayButtonText = std::move(PlayButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnSquadFillButtonEnabledStateUpdated(const bool bIsLocalPlayerPartyLeader, const bool bIsMatchmaking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnSquadFillButtonEnabledStateUpdated");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnSquadFillButtonEnabledStateUpdated Parms{};

	Parms.bIsLocalPlayerPartyLeader = bIsLocalPlayerPartyLeader;
	Parms.bIsMatchmaking = bIsMatchmaking;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::OnViolatorStyleRefreshed(const EFortMatchmakingViolatorStyle NewViolatorStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "OnViolatorStyleRefreshed");

	Params::DiscoveryLobbyMatchmakingPlay_C_OnViolatorStyleRefreshed Parms{};

	Parms.NewViolatorStyle = NewViolatorStyle;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::PickMatchmakingSucceededSound(class USoundBase** SelectedMatchmakingSucceededSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "PickMatchmakingSucceededSound");

	Params::DiscoveryLobbyMatchmakingPlay_C_PickMatchmakingSucceededSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMatchmakingSucceededSound != nullptr)
		*SelectedMatchmakingSucceededSound = Parms.SelectedMatchmakingSucceededSound;
}

void UDiscoveryLobbyMatchmakingPlay_C::PlaylistChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "PlaylistChanged");

	Params::DiscoveryLobbyMatchmakingPlay_C_PlaylistChanged Parms{};

	Parms.NewPlaylist = std::move(NewPlaylist);
	Parms.PlaylistCMSOverrideName = std::move(PlaylistCMSOverrideName);
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::Set_Mobile_Style()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "Set Mobile Style");

	UObject::ProcessEvent(Func, nullptr);
}

void UDiscoveryLobbyMatchmakingPlay_C::SetShowingDiscoveryEntryFlowToolTip(bool bShowTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "SetShowingDiscoveryEntryFlowToolTip");

	Params::DiscoveryLobbyMatchmakingPlay_C_SetShowingDiscoveryEntryFlowToolTip Parms{};

	Parms.bShowTooltip = bShowTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::ShouldShowMatchmakingDetails(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "ShouldShowMatchmakingDetails");

	Params::DiscoveryLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UDiscoveryLobbyMatchmakingPlay_C::UpdateModeSetButtonText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "UpdateModeSetButtonText");

	UObject::ProcessEvent(Func, nullptr);
}

class FText UDiscoveryLobbyMatchmakingPlay_C::GetButtonPrivateMatchText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "GetButtonPrivateMatchText");

	Params::DiscoveryLobbyMatchmakingPlay_C_GetButtonPrivateMatchText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UDiscoveryLobbyMatchmakingPlay_C::GetButtonPublicMatchText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DiscoveryLobbyMatchmakingPlay_C", "GetButtonPublicMatchText");

	Params::DiscoveryLobbyMatchmakingPlay_C_GetButtonPublicMatchText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
