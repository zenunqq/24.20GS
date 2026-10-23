#pragma once

#include "Basic.hpp"

#include "TeamMemberPedestal_classes.hpp"
#include "TeamMemberPedestal_parameters.hpp"

namespace SDK
{

void ATeamMemberPedestal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::Update_Add_Friend_Button_Interaction_Enabled(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Update Add Friend Button Interaction Enabled");

	Params::TeamMemberPedestal_C_Update_Add_Friend_Button_Interaction_Enabled Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::TransitionToLoadingScreen(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "TransitionToLoadingScreen");

	Params::TeamMemberPedestal_C_TransitionToLoadingScreen Parms{};

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::TransitionToCharacterScreen(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "TransitionToCharacterScreen");

	Params::TeamMemberPedestal_C_TransitionToCharacterScreen Parms{};

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::TransitionfromCharactertoLoadingscreen(bool Bool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "TransitionfromCharactertoLoadingscreen");

	Params::TeamMemberPedestal_C_TransitionfromCharactertoLoadingscreen Parms{};

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Timeline_1__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Timeline_1__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::StopLobbyAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "StopLobbyAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::SpawnPad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "SpawnPad");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::SetSparkleParticlesEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "SetSparkleParticlesEnabled");

	Params::TeamMemberPedestal_C_SetSparkleParticlesEnabled Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::SetFNCrew()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "SetFNCrew");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::SetFakeBlobShadowVisiblity(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "SetFakeBlobShadowVisiblity");

	Params::TeamMemberPedestal_C_SetFakeBlobShadowVisiblity Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::RefreshWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "RefreshWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::PlayLobbyAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "PlayLobbyAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& Team_Member_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnTeamMemberStateChanged");

	Params::TeamMemberPedestal_C_OnTeamMemberStateChanged Parms{};

	Parms.Team_Member_Info = std::move(Team_Member_Info);

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnTeamMemberSet(bool bHasValidTeamMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnTeamMemberSet");

	Params::TeamMemberPedestal_C_OnTeamMemberSet Parms{};

	Parms.bHasValidTeamMember = bHasValidTeamMember;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnPreviewActorSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnPreviewActorSpawned");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnPedestalIsPopulatedChanged(bool bIsPopulated, bool bOwningSquadContainsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnPedestalIsPopulatedChanged");

	Params::TeamMemberPedestal_C_OnPedestalIsPopulatedChanged Parms{};

	Parms.bIsPopulated = bIsPopulated;
	Parms.bOwningSquadContainsLocalPlayer = bOwningSquadContainsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnPartyDataChanged(struct FFortTeamMemberInfo& Member_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnPartyDataChanged");

	Params::TeamMemberPedestal_C_OnPartyDataChanged Parms{};

	Parms.Member_Info = std::move(Member_Info);

	UObject::ProcessEvent(Func, &Parms);

	Member_Info = std::move(Parms.Member_Info);
}

void ATeamMemberPedestal_C::OnOwningPedestalGroupEstablished(int32 SquadIdx, bool bSquadHasLocalPlayer, bool bIsPopulated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnOwningPedestalGroupEstablished");

	Params::TeamMemberPedestal_C_OnOwningPedestalGroupEstablished Parms{};

	Parms.SquadIdx = SquadIdx;
	Parms.bSquadHasLocalPlayer = bSquadHasLocalPlayer;
	Parms.bIsPopulated = bIsPopulated;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnNewSquadEstablished(bool bMultipleSquadsPopulated, bool bOwningSquadContainsLocalPlayer, const struct FAthenaTeamDisplayInfo& OwningSquadStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnNewSquadEstablished");

	Params::TeamMemberPedestal_C_OnNewSquadEstablished Parms{};

	Parms.bMultipleSquadsPopulated = bMultipleSquadsPopulated;
	Parms.bOwningSquadContainsLocalPlayer = bOwningSquadContainsLocalPlayer;
	Parms.OwningSquadStyle = std::move(OwningSquadStyle);

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9");

	Params::TeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnItemClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnItemClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnIsCurrentlyInMatchChanged(bool bIsInMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnIsCurrentlyInMatchChanged");

	Params::TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged Parms{};

	Parms.bIsInMatch = bIsInMatch;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnGameReadinessChanged(EGameReadiness GameReadiness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnGameReadinessChanged");

	Params::TeamMemberPedestal_C_OnGameReadinessChanged Parms{};

	Parms.GameReadiness = GameReadiness;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnFrontEndCameraChanged(EFrontEndCamera New_Camera, EFrontEndCamera Old_Camera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnFrontEndCameraChanged");

	Params::TeamMemberPedestal_C_OnFrontEndCameraChanged Parms{};

	Parms.New_Camera = New_Camera;
	Parms.Old_Camera = Old_Camera;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::OnDisconnectedToCampaignLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnDisconnectedToCampaignLobby");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnConnectedToCampaignLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnConnectedToCampaignLobby");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::OnAvatarChanged(class UTexture2D* AvatarImage, const struct FColor& AvatarBackground, const struct FColor& HighlightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnAvatarChanged");

	Params::TeamMemberPedestal_C_OnAvatarChanged Parms{};

	Parms.AvatarImage = AvatarImage;
	Parms.AvatarBackground = std::move(AvatarBackground);
	Parms.HighlightColor = std::move(HighlightColor);

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::InitializeInputActionRefs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "InitializeInputActionRefs");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::InitializeContextEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "InitializeContextEvents");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::HidePad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HidePad");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::HandleHoverInputActions(bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HandleHoverInputActions");

	Params::TeamMemberPedestal_C_HandleHoverInputActions Parms{};

	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HandleClientEvent_StoreTabSelected");

	Params::TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HandleClientEvent_StoreTabClosed");

	Params::TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::FadeInPodium__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "FadeInPodium__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::FadeInPodium__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "FadeInPodium__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::ExecuteUbergraph_TeamMemberPedestal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "ExecuteUbergraph_TeamMemberPedestal");

	Params::TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::EnableHologram(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "EnableHologram");

	Params::TeamMemberPedestal_C_EnableHologram Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void ATeamMemberPedestal_C::ClearPawnMaterialOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "ClearPawnMaterialOverride");

	UObject::ProcessEvent(Func, nullptr);
}

void ATeamMemberPedestal_C::ApplyHoloMaterialOverrideToPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "ApplyHoloMaterialOverrideToPawn");

	UObject::ProcessEvent(Func, nullptr);
}

}
