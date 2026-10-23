#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct FortMatchmakingPortalModal_GetCodeTextFormat final
{
public:
	class FText                                   IslandCode;
	class FText                                   ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalModal_GetCodeTextFormat) == 0x000008, "Wrong alignment on FortMatchmakingPortalModal_GetCodeTextFormat");
static_assert(sizeof(FortMatchmakingPortalModal_GetCodeTextFormat) == 0x000030, "Wrong size on FortMatchmakingPortalModal_GetCodeTextFormat");
static_assert(offsetof(FortMatchmakingPortalModal_GetCodeTextFormat, IslandCode) == 0x000000, "Member 'FortMatchmakingPortalModal_GetCodeTextFormat::IslandCode' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalModal_GetCodeTextFormat, ReturnValue) == 0x000018, "Member 'FortMatchmakingPortalModal_GetCodeTextFormat::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalModal_GetCreatorTextFormat final
{
public:
	class FText                                   CreatorName;
	class FText                                   ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalModal_GetCreatorTextFormat) == 0x000008, "Wrong alignment on FortMatchmakingPortalModal_GetCreatorTextFormat");
static_assert(sizeof(FortMatchmakingPortalModal_GetCreatorTextFormat) == 0x000030, "Wrong size on FortMatchmakingPortalModal_GetCreatorTextFormat");
static_assert(offsetof(FortMatchmakingPortalModal_GetCreatorTextFormat, CreatorName) == 0x000000, "Member 'FortMatchmakingPortalModal_GetCreatorTextFormat::CreatorName' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalModal_GetCreatorTextFormat, ReturnValue) == 0x000018, "Member 'FortMatchmakingPortalModal_GetCreatorTextFormat::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalModal_OnAdditionalContentUpdate final
{
public:
	class FText                                   MatchmakingState;
	float                                         Progress;
	bool                                          bShowProgressBar;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FortMatchmakingPortalModal_OnAdditionalContentUpdate) == 0x000008, "Wrong alignment on FortMatchmakingPortalModal_OnAdditionalContentUpdate");
static_assert(sizeof(FortMatchmakingPortalModal_OnAdditionalContentUpdate) == 0x000020, "Wrong size on FortMatchmakingPortalModal_OnAdditionalContentUpdate");
static_assert(offsetof(FortMatchmakingPortalModal_OnAdditionalContentUpdate, MatchmakingState) == 0x000000, "Member 'FortMatchmakingPortalModal_OnAdditionalContentUpdate::MatchmakingState' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalModal_OnAdditionalContentUpdate, Progress) == 0x000018, "Member 'FortMatchmakingPortalModal_OnAdditionalContentUpdate::Progress' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalModal_OnAdditionalContentUpdate, bShowProgressBar) == 0x00001C, "Member 'FortMatchmakingPortalModal_OnAdditionalContentUpdate::bShowProgressBar' has a wrong offset!");

struct FortMatchmakingPortalModal_OnMatchmakingStarted final
{
public:
	class FText                                   MatchmakingState;
};
static_assert(alignof(FortMatchmakingPortalModal_OnMatchmakingStarted) == 0x000008, "Wrong alignment on FortMatchmakingPortalModal_OnMatchmakingStarted");
static_assert(sizeof(FortMatchmakingPortalModal_OnMatchmakingStarted) == 0x000018, "Wrong size on FortMatchmakingPortalModal_OnMatchmakingStarted");
static_assert(offsetof(FortMatchmakingPortalModal_OnMatchmakingStarted, MatchmakingState) == 0x000000, "Member 'FortMatchmakingPortalModal_OnMatchmakingStarted::MatchmakingState' has a wrong offset!");

struct FortMatchmakingPortalModal_SetMatchmakingStateText final
{
public:
	class FText                                   MatchmakingStateText;
};
static_assert(alignof(FortMatchmakingPortalModal_SetMatchmakingStateText) == 0x000008, "Wrong alignment on FortMatchmakingPortalModal_SetMatchmakingStateText");
static_assert(sizeof(FortMatchmakingPortalModal_SetMatchmakingStateText) == 0x000018, "Wrong size on FortMatchmakingPortalModal_SetMatchmakingStateText");
static_assert(offsetof(FortMatchmakingPortalModal_SetMatchmakingStateText, MatchmakingStateText) == 0x000000, "Member 'FortMatchmakingPortalModal_SetMatchmakingStateText::MatchmakingStateText' has a wrong offset!");

struct FortMatchmakingPortalModal_GetContentWarningStrings final
{
public:
	TArray<class FString>                         ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalModal_GetContentWarningStrings) == 0x000008, "Wrong alignment on FortMatchmakingPortalModal_GetContentWarningStrings");
static_assert(sizeof(FortMatchmakingPortalModal_GetContentWarningStrings) == 0x000010, "Wrong size on FortMatchmakingPortalModal_GetContentWarningStrings");
static_assert(offsetof(FortMatchmakingPortalModal_GetContentWarningStrings, ReturnValue) == 0x000000, "Member 'FortMatchmakingPortalModal_GetContentWarningStrings::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalModal_GetInvalidActivityReason final
{
public:
	EFortInvalidActivityReason                    ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalModal_GetInvalidActivityReason) == 0x000001, "Wrong alignment on FortMatchmakingPortalModal_GetInvalidActivityReason");
static_assert(sizeof(FortMatchmakingPortalModal_GetInvalidActivityReason) == 0x000001, "Wrong size on FortMatchmakingPortalModal_GetInvalidActivityReason");
static_assert(offsetof(FortMatchmakingPortalModal_GetInvalidActivityReason, ReturnValue) == 0x000000, "Member 'FortMatchmakingPortalModal_GetInvalidActivityReason::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalModal_IsDownloadRequired final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalModal_IsDownloadRequired) == 0x000001, "Wrong alignment on FortMatchmakingPortalModal_IsDownloadRequired");
static_assert(sizeof(FortMatchmakingPortalModal_IsDownloadRequired) == 0x000001, "Wrong size on FortMatchmakingPortalModal_IsDownloadRequired");
static_assert(offsetof(FortMatchmakingPortalModal_IsDownloadRequired, ReturnValue) == 0x000000, "Member 'FortMatchmakingPortalModal_IsDownloadRequired::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalPopup_GetIslandData final
{
public:
	struct FMatchmakingPortalPopupData            OutIslandData;
	class UHeaderDescriptionHUDComponent*         HUDComponent;
	bool                                          ReturnValue;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(FortMatchmakingPortalPopup_GetIslandData) == 0x000008, "Wrong alignment on FortMatchmakingPortalPopup_GetIslandData");
static_assert(sizeof(FortMatchmakingPortalPopup_GetIslandData) == 0x000070, "Wrong size on FortMatchmakingPortalPopup_GetIslandData");
static_assert(offsetof(FortMatchmakingPortalPopup_GetIslandData, OutIslandData) == 0x000000, "Member 'FortMatchmakingPortalPopup_GetIslandData::OutIslandData' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_GetIslandData, HUDComponent) == 0x000060, "Member 'FortMatchmakingPortalPopup_GetIslandData::HUDComponent' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_GetIslandData, ReturnValue) == 0x000068, "Member 'FortMatchmakingPortalPopup_GetIslandData::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalPopup_HandleHUDShow final
{
public:
	bool                                          bShow;
	bool                                          bShouldAnimate;
};
static_assert(alignof(FortMatchmakingPortalPopup_HandleHUDShow) == 0x000001, "Wrong alignment on FortMatchmakingPortalPopup_HandleHUDShow");
static_assert(sizeof(FortMatchmakingPortalPopup_HandleHUDShow) == 0x000002, "Wrong size on FortMatchmakingPortalPopup_HandleHUDShow");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleHUDShow, bShow) == 0x000000, "Member 'FortMatchmakingPortalPopup_HandleHUDShow::bShow' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleHUDShow, bShouldAnimate) == 0x000001, "Member 'FortMatchmakingPortalPopup_HandleHUDShow::bShouldAnimate' has a wrong offset!");

struct FortMatchmakingPortalPopup_HandleLoadScreenChanged final
{
public:
	class AFortPlayerControllerAthena*            PlayerController;
	bool                                          bLoadScreenEnabled;
	uint8                                         Pad_9[0x7];
	class FText                                   HUDReason;
};
static_assert(alignof(FortMatchmakingPortalPopup_HandleLoadScreenChanged) == 0x000008, "Wrong alignment on FortMatchmakingPortalPopup_HandleLoadScreenChanged");
static_assert(sizeof(FortMatchmakingPortalPopup_HandleLoadScreenChanged) == 0x000028, "Wrong size on FortMatchmakingPortalPopup_HandleLoadScreenChanged");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleLoadScreenChanged, PlayerController) == 0x000000, "Member 'FortMatchmakingPortalPopup_HandleLoadScreenChanged::PlayerController' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleLoadScreenChanged, bLoadScreenEnabled) == 0x000008, "Member 'FortMatchmakingPortalPopup_HandleLoadScreenChanged::bLoadScreenEnabled' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleLoadScreenChanged, HUDReason) == 0x000010, "Member 'FortMatchmakingPortalPopup_HandleLoadScreenChanged::HUDReason' has a wrong offset!");

struct FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck final
{
public:
	bool                                          bShowWidget;
};
static_assert(alignof(FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck) == 0x000001, "Wrong alignment on FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck");
static_assert(sizeof(FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck) == 0x000001, "Wrong size on FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck, bShowWidget) == 0x000000, "Member 'FortMatchmakingPortalPopup_HandleOnPortalDetailsVisibilityCheck::bShowWidget' has a wrong offset!");

struct FortMatchmakingPortalPopup_HandleStartedRespawn final
{
public:
	class AFortPlayerControllerZone*              PlayerController;
};
static_assert(alignof(FortMatchmakingPortalPopup_HandleStartedRespawn) == 0x000008, "Wrong alignment on FortMatchmakingPortalPopup_HandleStartedRespawn");
static_assert(sizeof(FortMatchmakingPortalPopup_HandleStartedRespawn) == 0x000008, "Wrong size on FortMatchmakingPortalPopup_HandleStartedRespawn");
static_assert(offsetof(FortMatchmakingPortalPopup_HandleStartedRespawn, PlayerController) == 0x000000, "Member 'FortMatchmakingPortalPopup_HandleStartedRespawn::PlayerController' has a wrong offset!");

struct FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal) == 0x000001, "Wrong alignment on FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal");
static_assert(sizeof(FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal) == 0x000001, "Wrong size on FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal");
static_assert(offsetof(FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal, ReturnValue) == 0x000000, "Member 'FortMatchmakingPortalPopup_IsInteractingDeviceAMatchmakingPortal::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalPopup_OnPlayerCanInteractChanged final
{
public:
	bool                                          bPlayerCanInteract;
};
static_assert(alignof(FortMatchmakingPortalPopup_OnPlayerCanInteractChanged) == 0x000001, "Wrong alignment on FortMatchmakingPortalPopup_OnPlayerCanInteractChanged");
static_assert(sizeof(FortMatchmakingPortalPopup_OnPlayerCanInteractChanged) == 0x000001, "Wrong size on FortMatchmakingPortalPopup_OnPlayerCanInteractChanged");
static_assert(offsetof(FortMatchmakingPortalPopup_OnPlayerCanInteractChanged, bPlayerCanInteract) == 0x000000, "Member 'FortMatchmakingPortalPopup_OnPlayerCanInteractChanged::bPlayerCanInteract' has a wrong offset!");

struct FortMatchmakingPortalPopup_OnShowPortalPopup final
{
public:
	bool                                          bShow;
	bool                                          bAnimate;
};
static_assert(alignof(FortMatchmakingPortalPopup_OnShowPortalPopup) == 0x000001, "Wrong alignment on FortMatchmakingPortalPopup_OnShowPortalPopup");
static_assert(sizeof(FortMatchmakingPortalPopup_OnShowPortalPopup) == 0x000002, "Wrong size on FortMatchmakingPortalPopup_OnShowPortalPopup");
static_assert(offsetof(FortMatchmakingPortalPopup_OnShowPortalPopup, bShow) == 0x000000, "Member 'FortMatchmakingPortalPopup_OnShowPortalPopup::bShow' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_OnShowPortalPopup, bAnimate) == 0x000001, "Member 'FortMatchmakingPortalPopup_OnShowPortalPopup::bAnimate' has a wrong offset!");

struct FortMatchmakingPortalPopup_UpdateVisuals final
{
public:
	const class UHeaderDescriptionHUDComponent*   HUDComponent;
};
static_assert(alignof(FortMatchmakingPortalPopup_UpdateVisuals) == 0x000008, "Wrong alignment on FortMatchmakingPortalPopup_UpdateVisuals");
static_assert(sizeof(FortMatchmakingPortalPopup_UpdateVisuals) == 0x000008, "Wrong size on FortMatchmakingPortalPopup_UpdateVisuals");
static_assert(offsetof(FortMatchmakingPortalPopup_UpdateVisuals, HUDComponent) == 0x000000, "Member 'FortMatchmakingPortalPopup_UpdateVisuals::HUDComponent' has a wrong offset!");

struct FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget final
{
public:
	const class UCommonActivatableWidget*         MatchmakingFeedbackContainer;
	class UFortAthenaCreativeMatchmakingWidget*   ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget) == 0x000008, "Wrong alignment on FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget");
static_assert(sizeof(FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget) == 0x000010, "Wrong size on FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget");
static_assert(offsetof(FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget, MatchmakingFeedbackContainer) == 0x000000, "Member 'FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget::MatchmakingFeedbackContainer' has a wrong offset!");
static_assert(offsetof(FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget, ReturnValue) == 0x000008, "Member 'FortMatchmakingPortalPopup_GetMatchmakingFeedbackWidget::ReturnValue' has a wrong offset!");

struct FortMatchmakingPortalPopup_HasActivityToShow final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortMatchmakingPortalPopup_HasActivityToShow) == 0x000001, "Wrong alignment on FortMatchmakingPortalPopup_HasActivityToShow");
static_assert(sizeof(FortMatchmakingPortalPopup_HasActivityToShow) == 0x000001, "Wrong size on FortMatchmakingPortalPopup_HasActivityToShow");
static_assert(offsetof(FortMatchmakingPortalPopup_HasActivityToShow, ReturnValue) == 0x000000, "Member 'FortMatchmakingPortalPopup_HasActivityToShow::ReturnValue' has a wrong offset!");

struct FortModalBackground_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         InTexture;
};
static_assert(alignof(FortModalBackground_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortModalBackground_OnPreviewImageChanged");
static_assert(sizeof(FortModalBackground_OnPreviewImageChanged) == 0x000010, "Wrong size on FortModalBackground_OnPreviewImageChanged");
static_assert(offsetof(FortModalBackground_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortModalBackground_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortModalBackground_OnPreviewImageChanged, InTexture) == 0x000008, "Member 'FortModalBackground_OnPreviewImageChanged::InTexture' has a wrong offset!");

}
