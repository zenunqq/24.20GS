#pragma once

#include "Basic.hpp"

#include "DiscoveryBrowserUI_classes.hpp"
#include "DiscoveryBrowserUI_parameters.hpp"

namespace SDK
{

void UFortActivityBrowserTabButton::OnFavoriteChanged(bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserTabButton", "OnFavoriteChanged");

	Params::FortActivityBrowserTabButton_OnFavoriteChanged Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowser::HandleTabChanged(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowser", "HandleTabChanged");

	Params::FortActivityBrowser_HandleTabChanged Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortActivityBrowser::OnActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowser", "OnActivitySelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowser::OnEnableColorScheme(const bool bIsColorSchemeActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowser", "OnEnableColorScheme");

	Params::FortActivityBrowser_OnEnableColorScheme Parms{};

	Parms.bIsColorSchemeActive = bIsColorSchemeActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowser::OnPlayerQueueTypeChanged(const EPlayerQueueType PlayerQueueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowser", "OnPlayerQueueTypeChanged");

	Params::FortActivityBrowser_OnPlayerQueueTypeChanged Parms{};

	Parms.PlayerQueueType = PlayerQueueType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowser::OnSwapColorScheme(const bool bInIsUsingAlternateColorScheme)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowser", "OnSwapColorScheme");

	Params::FortActivityBrowser_OnSwapColorScheme Parms{};

	Parms.bInIsUsingAlternateColorScheme = bInIsUsingAlternateColorScheme;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::OnTextureBeginLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTextureBeginLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserPlayWithFriendsTile::OnTextureLoadingComplete(const class UTexture* ThumbnailTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTextureLoadingComplete");

	Params::FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete Parms{};

	Parms.ThumbnailTexture = ThumbnailTexture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::OnTileActiveSet(const bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "OnTileActiveSet");

	Params::FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::UpdateIslandInformation(const class FText& ActivityName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateIslandInformation");

	Params::FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation Parms{};

	Parms.ActivityName = std::move(ActivityName);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::UpdateIslandInformationAndThumbnail(const class FText& ActivityName, const class UTexture* ThumbnailTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateIslandInformationAndThumbnail");

	Params::FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail Parms{};

	Parms.ActivityName = std::move(ActivityName);
	Parms.ThumbnailTexture = ThumbnailTexture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::UpdateJoinablePartySubText(const class FText& JoinablePartySubText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateJoinablePartySubText");

	Params::FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText Parms{};

	Parms.JoinablePartySubText = std::move(JoinablePartySubText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::UpdatePartyInformation(const int32 CurrentPartyCount, const int32 MaxPartyCount, const bool bIsActiveInvite, const bool bIsPartyPrivate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdatePartyInformation");

	Params::FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation Parms{};

	Parms.CurrentPartyCount = CurrentPartyCount;
	Parms.MaxPartyCount = MaxPartyCount;
	Parms.bIsActiveInvite = bIsActiveInvite;
	Parms.bIsPartyPrivate = bIsPartyPrivate;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::UpdatePartyMemberNames(const class FText& Names)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdatePartyMemberNames");

	Params::FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames Parms{};

	Parms.Names = std::move(Names);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserPlayWithFriendsTile::UpdateRichPresence(const class FText& RichPresence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserPlayWithFriendsTile", "UpdateRichPresence");

	Params::FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence Parms{};

	Parms.RichPresence = std::move(RichPresence);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRow::OnCategoryItemChanged(const bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnCategoryItemChanged");

	Params::FortActivityBrowserRow_OnCategoryItemChanged Parms{};

	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRow::OnRowIsActiveChanged(const bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsActiveChanged");

	Params::FortActivityBrowserRow_OnRowIsActiveChanged Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRow::OnRowIsSelectedChanged(const bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowIsSelectedChanged");

	Params::FortActivityBrowserRow_OnRowIsSelectedChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRow::OnRowMoveDown(const bool bMovingOffscreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveDown");

	Params::FortActivityBrowserRow_OnRowMoveDown Parms{};

	Parms.bMovingOffscreen = bMovingOffscreen;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRow::OnRowMoveUp(const bool bMovingOffscreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowMoveUp");

	Params::FortActivityBrowserRow_OnRowMoveUp Parms{};

	Parms.bMovingOffscreen = bMovingOffscreen;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRow::OnRowPeekStateChanged(const bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "OnRowPeekStateChanged");

	Params::FortActivityBrowserRow_OnRowPeekStateChanged Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortActivityBrowserRow::GetIsActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsActive");

	Params::FortActivityBrowserRow_GetIsActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityBrowserRow::GetIsInPeekState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsInPeekState");

	Params::FortActivityBrowserRow_GetIsInPeekState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityBrowserRow::GetIsSelected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRow", "GetIsSelected");

	Params::FortActivityBrowserRow_GetIsSelected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityBrowserRowHero::CheckUpdateDetailsDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "CheckUpdateDetailsDelay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityBrowserRowHero::CycleNextActivity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "CycleNextActivity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityBrowserRowHero::HandleActivityVideoCycleEndReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "HandleActivityVideoCycleEndReached");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityBrowserRowHero::HandleActivityVideoCycleStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "HandleActivityVideoCycleStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityBrowserRowHero::OnActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnActivityUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowHero::OnListViewFinishedAddingEntries(int32 ActivityCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnListViewFinishedAddingEntries");

	Params::FortActivityBrowserRowHero_OnListViewFinishedAddingEntries Parms{};

	Parms.ActivityCount = ActivityCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRowHero::OnPlayKeyArtIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPlayKeyArtIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowHero::OnPlayKeyArtOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPlayKeyArtOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowHero::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnPreviewImageChanged");

	Params::FortActivityBrowserRowHero_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRowHero::OnQueryActivitiesFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnQueryActivitiesFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowHero::OnQueryStatusChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnQueryStatusChanged");

	Params::FortActivityBrowserRowHero_OnQueryStatusChanged Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRowHero::OnRowHeroFocusChanged(bool bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnRowHeroFocusChanged");

	Params::FortActivityBrowserRowHero_OnRowHeroFocusChanged Parms{};

	Parms.bHasFocus = bHasFocus;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRowHero::OnUpdateDetailsDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnUpdateDetailsDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowHero::OnVideoEndReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnVideoEndReached");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowHero::OnVideoStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "OnVideoStarted");

	UObject::ProcessEvent(Func, nullptr);
}

const class UTexture* UFortActivityBrowserRowHero::GetCurrentTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "GetCurrentTexture");

	Params::FortActivityBrowserRowHero_GetCurrentTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidgetAnimation* UFortActivityBrowserRowHero::GetKeyArtOutroAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "GetKeyArtOutroAnimation");

	Params::FortActivityBrowserRowHero_GetKeyArtOutroAnimation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityBrowserRowHero::IsImageLoading() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "IsImageLoading");

	Params::FortActivityBrowserRowHero_IsImageLoading Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityBrowserRowHero::IsInOutroState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "IsInOutroState");

	Params::FortActivityBrowserRowHero_IsInOutroState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityBrowserRowHero::IsShowingSeasonalContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowHero", "IsShowingSeasonalContent");

	Params::FortActivityBrowserRowHero_IsShowingSeasonalContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityBrowserRowList::OnQueryStatusChanged(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowList", "OnQueryStatusChanged");

	Params::FortActivityBrowserRowList_OnQueryStatusChanged Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserRowPromoted::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowPromoted", "OnPreviewImageChanged");

	Params::FortActivityBrowserRowPromoted_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserView::OnSurfaceDataDirty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserView", "OnSurfaceDataDirty");

	UObject::ProcessEvent(Func, nullptr);
}

EFortInvalidActivityReason UFortActivityBrowserView::GetInvalidActivityReason() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserView", "GetInvalidActivityReason");

	Params::FortActivityBrowserView_GetInvalidActivityReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityBrowserRowView::OnActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowView", "OnActivityUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowView::OnQueryActivitiesFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowView", "OnQueryActivitiesFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityBrowserRowView::OnRowChanged(const int32 NewCategoryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserRowView", "OnRowChanged");

	Params::FortActivityBrowserRowView_OnRowChanged Parms{};

	Parms.NewCategoryIndex = NewCategoryIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityBrowserTile::HandleActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityBrowserTile", "HandleActivitySelected");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityPlayerBrowserView::BP_OnTileViewUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "BP_OnTileViewUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityPlayerBrowserView::OnPlayViewIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnPlayViewIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityPlayerBrowserView::OnQueryActivitiesComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnQueryActivitiesComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityPlayerBrowserView::OnQueryActivitiesStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "OnQueryActivitiesStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityPlayerBrowserView::PlayViewIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityPlayerBrowserView", "PlayViewIntro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityCategoryTile::OnTileActiveSet(const bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCategoryTile", "OnTileActiveSet");

	Params::FortActivityCategoryTile_OnTileActiveSet Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);
}

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::NavigateFromPanel(EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCategoryView", "NavigateFromPanel");

	Params::FortActivityCategoryView_NavigateFromPanel Parms{};

	Parms.Direction = Direction;
	Parms.NavigatingPanel = NavigatingPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityCategoryView::OnCategoryTilePanelSelected(const class UFortActivityCategoryTilePanel* SelectedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCategoryView", "OnCategoryTilePanelSelected");

	Params::FortActivityCategoryView_OnCategoryTilePanelSelected Parms{};

	Parms.SelectedPanel = SelectedPanel;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityCategoryView::OnSurfaceDataReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCategoryView", "OnSurfaceDataReady");

	UObject::ProcessEvent(Func, nullptr);
}

const class UFortActivityCategoryTilePanel* UFortActivityCategoryView::GetCurrentSelectedPanel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCategoryView", "GetCurrentSelectedPanel");

	Params::FortActivityCategoryView_GetCurrentSelectedPanel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortActivityCategoryTilePanel* UFortActivityCategoryView::GetTopMostVisiblePanel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCategoryView", "GetTopMostVisiblePanel");

	Params::FortActivityCategoryView_GetTopMostVisiblePanel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityCreateView::OnCreativeActivityUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCreateView", "OnCreativeActivityUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

EFortInvalidActivityReason UFortActivityCreateView::GetInvalidCreativeActivityReason() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCreateView", "GetInvalidCreativeActivityReason");

	Params::FortActivityCreateView_GetInvalidCreativeActivityReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityCreatorPageView::OnCreatorActivitiesQueryFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCreatorPageView", "OnCreatorActivitiesQueryFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityCreatorPageView::OnNoContentFoundForCreator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityCreatorPageView", "OnNoContentFoundForCreator");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityDiscoverView::CheckUpdateDetailsDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "CheckUpdateDetailsDelay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityDiscoverView::HandleMovieWidgetMediaPreEndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaPreEndEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityDiscoverView::HandleMovieWidgetMediaStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "HandleMovieWidgetMediaStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityDiscoverView::OnMoviePlayingChanged(const bool bIsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePlayingChanged");

	Params::FortActivityDiscoverView_OnMoviePlayingChanged Parms{};

	Parms.bIsPlaying = bIsPlaying;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityDiscoverView::OnMoviePreEndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnMoviePreEndEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityDiscoverView::OnPlayKeyArtIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPlayKeyArtIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityDiscoverView::OnPlayKeyArtOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPlayKeyArtOutro");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityDiscoverView::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnPreviewImageChanged");

	Params::FortActivityDiscoverView_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityDiscoverView::OnUpdateDetailsDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "OnUpdateDetailsDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

const class UTexture* UFortActivityDiscoverView::GetCurrentTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetCurrentTexture");

	Params::FortActivityDiscoverView_GetCurrentTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidgetAnimation* UFortActivityDiscoverView::GetKeyArtOutroAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetKeyArtOutroAnimation");

	Params::FortActivityDiscoverView_GetKeyArtOutroAnimation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortActivatableMovieWidget* UFortActivityDiscoverView::GetMovieWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetMovieWidget");

	Params::FortActivityDiscoverView_GetMovieWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortActivatableMovieWidget* UFortActivityDiscoverView::GetPromotedMovieWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "GetPromotedMovieWidget");

	Params::FortActivityDiscoverView_GetPromotedMovieWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityDiscoverView::IsImageLoading() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsImageLoading");

	Params::FortActivityDiscoverView_IsImageLoading Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityDiscoverView::IsInOutroState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsInOutroState");

	Params::FortActivityDiscoverView_IsInOutroState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityDiscoverView::IsShowingPromotedContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingPromotedContent");

	Params::FortActivityDiscoverView_IsShowingPromotedContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityDiscoverView::IsShowingSeasonalContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverView", "IsShowingSeasonalContent");

	Params::FortActivityDiscoverView_IsShowingSeasonalContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityDiscoverViewV2::IsShowingPromotedContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverViewV2", "IsShowingPromotedContent");

	Params::FortActivityDiscoverViewV2_IsShowingPromotedContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityDiscoverViewV2::IsShowingSeasonalContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityDiscoverViewV2", "IsShowingSeasonalContent");

	Params::FortActivityDiscoverViewV2_IsShowingSeasonalContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortActivityListView::GetInViewCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityListView", "GetInViewCount");

	Params::FortActivityListView_GetInViewCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityLobbyTile::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnDetailsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityLobbyTile::OnHideChildActivityFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnHideChildActivityFirstTimeNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityLobbyTile::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnPreviewImageChanged");

	Params::FortActivityLobbyTile_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityLobbyTile::OnShowChildActivityChangedNotification(const class FText& DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnShowChildActivityChangedNotification");

	Params::FortActivityLobbyTile_OnShowChildActivityChangedNotification Parms{};

	Parms.DisplayName = std::move(DisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityLobbyTile::OnShowChildActivityFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "OnShowChildActivityFirstTimeNotification");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityLobbyTile::ShowModeSetSelectionModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "ShowModeSetSelectionModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityLobbyTile::TrySendFirstTimeNotification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "TrySendFirstTimeNotification");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class FText UFortActivityLobbyTile::GetChildActivityDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "GetChildActivityDisplayName");

	Params::FortActivityLobbyTile_GetChildActivityDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityLobbyTile::IsActivityEpicCreated() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "IsActivityEpicCreated");

	Params::FortActivityLobbyTile_IsActivityEpicCreated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityLobbyTile::IsModeSetActivity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityLobbyTile", "IsModeSetActivity");

	Params::FortActivityLobbyTile_IsModeSetActivity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityModeSetSelectionModal::OnActivityChanged(const class UFortGameActivity* GameActivity, const class FString& StartingSelectedMnemonic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnActivityChanged");

	Params::FortActivityModeSetSelectionModal_OnActivityChanged Parms{};

	Parms.GameActivity = GameActivity;
	Parms.StartingSelectedMnemonic = std::move(StartingSelectedMnemonic);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityModeSetSelectionModal::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnPreviewImageChanged");

	Params::FortActivityModeSetSelectionModal_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityModeSetSelectionModal::OnSubModeSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnSubModeSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityModeSetSelectionModal::OnSubModeSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "OnSubModeSelectionChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityModeSetSelectionModal::SaveSelectionAndClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityModeSetSelectionModal", "SaveSelectionAndClose");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityPlayerBrowserTile::HandleActivitySelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityPlayerBrowserTile", "HandleActivitySelected");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivitySearchView::HandleTextChanged(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivitySearchView", "HandleTextChanged");

	Params::FortActivitySearchView_HandleTextChanged Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortActivitySearchView::HandleTextCommitted(const class FText& InText, ETextCommit CommitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivitySearchView", "HandleTextCommitted");

	Params::FortActivitySearchView_HandleTextCommitted Parms{};

	Parms.InText = std::move(InText);
	Parms.CommitInfo = CommitInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortActivitySearchView::OnActivityClear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivitySearchView", "OnActivityClear");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivitySearchView::OnActivityValidated(const EFortActivityValidationResult ValidateResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivitySearchView", "OnActivityValidated");

	Params::FortActivitySearchView_OnActivityValidated Parms{};

	Parms.ValidateResult = ValidateResult;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnDetailsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnDetailsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityTileDetailsDisplay::OnIsFavoriteChanged(const bool bIsFavorite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnIsFavoriteChanged");

	Params::FortActivityTileDetailsDisplay_OnIsFavoriteChanged Parms{};

	Parms.bIsFavorite = bIsFavorite;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnLocalPlayerDemoted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerDemoted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityTileDetailsDisplay::OnLocalPlayerPromotedToLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLocalPlayerPromotedToLeader");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortActivityTileDetailsDisplay::OnLogoImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnLogoImageChanged");

	Params::FortActivityTileDetailsDisplay_OnLogoImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnPartySizeChanged(const int32 PartySize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPartySizeChanged");

	Params::FortActivityTileDetailsDisplay_OnPartySizeChanged Parms{};

	Parms.PartySize = PartySize;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnPreviewImageChanged");

	Params::FortActivityTileDetailsDisplay_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnRequiresPurchaseChanged(const bool bRequiresPurchase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnRequiresPurchaseChanged");

	Params::FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged Parms{};

	Parms.bRequiresPurchase = bRequiresPurchase;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnSocialUsersPlayingChanged(int32 NumPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnSocialUsersPlayingChanged");

	Params::FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged Parms{};

	Parms.NumPlaying = NumPlaying;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnTileActiveSet(const bool bIsTileActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnTileActiveSet");

	Params::FortActivityTileDetailsDisplay_OnTileActiveSet Parms{};

	Parms.bIsTileActive = bIsTileActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::OnUpdateColumnSize(int32 NewColumnSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "OnUpdateColumnSize");

	Params::FortActivityTileDetailsDisplay_OnUpdateColumnSize Parms{};

	Parms.NewColumnSize = NewColumnSize;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortActivityTileDetailsDisplay::ShouldPlayTileVideo(bool* bOutResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "ShouldPlayTileVideo");

	Params::FortActivityTileDetailsDisplay_ShouldPlayTileVideo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutResult != nullptr)
		*bOutResult = Parms.bOutResult;
}

void UFortActivityTileDetailsDisplay::StartTileVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "StartTileVideo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityTileDetailsDisplay::StopTileVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "StopTileVideo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortActivityTileDetailsDisplay::UpdateCCU(const int32 CCUCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "UpdateCCU");

	Params::FortActivityTileDetailsDisplay_UpdateCCU Parms{};

	Parms.CCUCount = CCUCount;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortActivityTileDetailsDisplay::DoesActivityRequirePurchase() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "DoesActivityRequirePurchase");

	Params::FortActivityTileDetailsDisplay_DoesActivityRequirePurchase Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortInvalidActivityReason UFortActivityTileDetailsDisplay::GetInvalidActivityReason() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "GetInvalidActivityReason");

	Params::FortActivityTileDetailsDisplay_GetInvalidActivityReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityTileDetailsDisplay::IsActivityEpicCreated() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityEpicCreated");

	Params::FortActivityTileDetailsDisplay_IsActivityEpicCreated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityTileDetailsDisplay::IsActivityFavorited() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsActivityFavorited");

	Params::FortActivityTileDetailsDisplay_IsActivityFavorited Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortActivityTileDetailsDisplay::IsModeSetActivity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileDetailsDisplay", "IsModeSetActivity");

	Params::FortActivityTileDetailsDisplay_IsModeSetActivity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortActivityTileView::SetListenForMouseWheelInput(bool bListenForInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortActivityTileView", "SetListenForMouseWheelInput");

	Params::FortActivityTileView_SetListenForMouseWheelInput Parms{};

	Parms.bListenForInput = bListenForInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
