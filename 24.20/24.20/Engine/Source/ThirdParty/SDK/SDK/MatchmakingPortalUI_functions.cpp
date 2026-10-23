#pragma once

#include "Basic.hpp"

#include "MatchmakingPortalUI_classes.hpp"
#include "MatchmakingPortalUI_parameters.hpp"

namespace SDK
{

void UFortMatchmakingPortalCountdown::FinishTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalCountdown", "FinishTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortMatchmakingPortalCountdown::HandleCancelClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalCountdown", "HandleCancelClicked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMatchmakingPortalCountdown::StartCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalCountdown", "StartCountdown");

	UObject::ProcessEvent(Func, nullptr);
}

class FText UFortMatchmakingPortalModal::GetCodeTextFormat(const class FText& IslandCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetCodeTextFormat");

	Params::FortMatchmakingPortalModal_GetCodeTextFormat Parms{};

	Parms.IslandCode = std::move(IslandCode);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UFortMatchmakingPortalModal::GetCreatorTextFormat(const class FText& CreatorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetCreatorTextFormat");

	Params::FortMatchmakingPortalModal_GetCreatorTextFormat Parms{};

	Parms.CreatorName = std::move(CreatorName);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortMatchmakingPortalModal::HandleOnMatchmakingError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "HandleOnMatchmakingError");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortMatchmakingPortalModal::OnAdditionalContentUpdate(const class FText& MatchmakingState, const float Progress, bool bShowProgressBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "OnAdditionalContentUpdate");

	Params::FortMatchmakingPortalModal_OnAdditionalContentUpdate Parms{};

	Parms.MatchmakingState = std::move(MatchmakingState);
	Parms.Progress = Progress;
	Parms.bShowProgressBar = bShowProgressBar;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMatchmakingPortalModal::OnMatchmakingStarted(const class FText& MatchmakingState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "OnMatchmakingStarted");

	Params::FortMatchmakingPortalModal_OnMatchmakingStarted Parms{};

	Parms.MatchmakingState = std::move(MatchmakingState);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMatchmakingPortalModal::OnMatchmakingStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "OnMatchmakingStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortMatchmakingPortalModal::SendLinkCodeToParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "SendLinkCodeToParty");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMatchmakingPortalModal::SetMatchmakingStateText(const class FText& MatchmakingStateText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "SetMatchmakingStateText");

	Params::FortMatchmakingPortalModal_SetMatchmakingStateText Parms{};

	Parms.MatchmakingStateText = std::move(MatchmakingStateText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMatchmakingPortalModal::SetMatchmakingTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "SetMatchmakingTimer");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<class FString> UFortMatchmakingPortalModal::GetContentWarningStrings() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetContentWarningStrings");

	Params::FortMatchmakingPortalModal_GetContentWarningStrings Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortInvalidActivityReason UFortMatchmakingPortalModal::GetInvalidActivityReason() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "GetInvalidActivityReason");

	Params::FortMatchmakingPortalModal_GetInvalidActivityReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMatchmakingPortalModal::IsDownloadRequired() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalModal", "IsDownloadRequired");

	Params::FortMatchmakingPortalModal_IsDownloadRequired Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMatchmakingPortalPopup::BindOverlapEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "BindOverlapEvents");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortMatchmakingPortalPopup::GetIslandData(struct FMatchmakingPortalPopupData* OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "GetIslandData");

	Params::FortMatchmakingPortalPopup_GetIslandData Parms{};

	Parms.HUDComponent = HUDComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIslandData != nullptr)
		*OutIslandData = std::move(Parms.OutIslandData);

	return Parms.ReturnValue;
}

void UFortMatchmakingPortalPopup::HandleFinishedCountdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleFinishedCountdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMatchmakingPortalPopup::HandleHUDShow(const bool bShow, const bool bShouldAnimate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleHUDShow");

	Params::FortMatchmakingPortalPopup_HandleHUDShow Parms{};

	Parms.bShow = bShow;
	Parms.bShouldAnimate = bShouldAnimate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMatchmakingPortalPopup::HandleLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, const class FText& HUDReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleLoadScreenChanged");

	Params::FortMatchmakingPortalPopup_HandleLoadScreenChanged Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bLoadScreenEnabled = bLoadScreenEnabled;
	Parms.HUDReason = std::move(HUDReason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMatchmakingPortalPopup::HandleOnPortalDetailsVisibilityCheck(bool bShowWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleOnPortalDetailsVisibilityCheck");

	Params::FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck Parms{};

	Parms.bShowWidget = bShowWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMatchmakingPortalPopup::HandleStartedRespawn(class AFortPlayerControllerZone* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleStartedRespawn");

	Params::FortMatchmakingPortalPopup_HandleStartedRespawn Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMatchmakingPortalPopup::HandleWidgetUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HandleWidgetUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortMatchmakingPortalPopup::IsInteractingDeviceAMatchmakingPortal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "IsInteractingDeviceAMatchmakingPortal");

	Params::FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortMatchmakingPortalPopup::OnPlayerCanInteractChanged(const bool bPlayerCanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "OnPlayerCanInteractChanged");

	Params::FortMatchmakingPortalPopup_OnPlayerCanInteractChanged Parms{};

	Parms.bPlayerCanInteract = bPlayerCanInteract;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMatchmakingPortalPopup::OnShowPortalPopup(const bool bShow, const bool bAnimate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "OnShowPortalPopup");

	Params::FortMatchmakingPortalPopup_OnShowPortalPopup Parms{};

	Parms.bShow = bShow;
	Parms.bAnimate = bAnimate;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMatchmakingPortalPopup::UpdateVisuals(const class UHeaderDescriptionHUDComponent* HUDComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "UpdateVisuals");

	Params::FortMatchmakingPortalPopup_UpdateVisuals Parms{};

	Parms.HUDComponent = HUDComponent;

	UObject::ProcessEvent(Func, &Parms);
}

class UFortAthenaCreativeMatchmakingWidget* UFortMatchmakingPortalPopup::GetMatchmakingFeedbackWidget(const class UCommonActivatableWidget* MatchmakingFeedbackContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "GetMatchmakingFeedbackWidget");

	Params::FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget Parms{};

	Parms.MatchmakingFeedbackContainer = MatchmakingFeedbackContainer;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UFortMatchmakingPortalPopup::HasActivityToShow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMatchmakingPortalPopup", "HasActivityToShow");

	Params::FortMatchmakingPortalPopup_HasActivityToShow Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortModalBackground::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortModalBackground", "OnPreviewImageChanged");

	Params::FortModalBackground_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}

}
