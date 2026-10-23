#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct FortActivityBrowserTabButton_OnFavoriteChanged final
{
public:
	bool                                          bIsFavorite;
};
static_assert(alignof(FortActivityBrowserTabButton_OnFavoriteChanged) == 0x000001, "Wrong alignment on FortActivityBrowserTabButton_OnFavoriteChanged");
static_assert(sizeof(FortActivityBrowserTabButton_OnFavoriteChanged) == 0x000001, "Wrong size on FortActivityBrowserTabButton_OnFavoriteChanged");
static_assert(offsetof(FortActivityBrowserTabButton_OnFavoriteChanged, bIsFavorite) == 0x000000, "Member 'FortActivityBrowserTabButton_OnFavoriteChanged::bIsFavorite' has a wrong offset!");

struct FortActivityBrowser_HandleTabChanged final
{
public:
	class FName                                   TabId;
};
static_assert(alignof(FortActivityBrowser_HandleTabChanged) == 0x000004, "Wrong alignment on FortActivityBrowser_HandleTabChanged");
static_assert(sizeof(FortActivityBrowser_HandleTabChanged) == 0x000004, "Wrong size on FortActivityBrowser_HandleTabChanged");
static_assert(offsetof(FortActivityBrowser_HandleTabChanged, TabId) == 0x000000, "Member 'FortActivityBrowser_HandleTabChanged::TabId' has a wrong offset!");

struct FortActivityBrowser_OnEnableColorScheme final
{
public:
	bool                                          bIsColorSchemeActive;
};
static_assert(alignof(FortActivityBrowser_OnEnableColorScheme) == 0x000001, "Wrong alignment on FortActivityBrowser_OnEnableColorScheme");
static_assert(sizeof(FortActivityBrowser_OnEnableColorScheme) == 0x000001, "Wrong size on FortActivityBrowser_OnEnableColorScheme");
static_assert(offsetof(FortActivityBrowser_OnEnableColorScheme, bIsColorSchemeActive) == 0x000000, "Member 'FortActivityBrowser_OnEnableColorScheme::bIsColorSchemeActive' has a wrong offset!");

struct FortActivityBrowser_OnPlayerQueueTypeChanged final
{
public:
	EPlayerQueueType                              PlayerQueueType;
};
static_assert(alignof(FortActivityBrowser_OnPlayerQueueTypeChanged) == 0x000001, "Wrong alignment on FortActivityBrowser_OnPlayerQueueTypeChanged");
static_assert(sizeof(FortActivityBrowser_OnPlayerQueueTypeChanged) == 0x000001, "Wrong size on FortActivityBrowser_OnPlayerQueueTypeChanged");
static_assert(offsetof(FortActivityBrowser_OnPlayerQueueTypeChanged, PlayerQueueType) == 0x000000, "Member 'FortActivityBrowser_OnPlayerQueueTypeChanged::PlayerQueueType' has a wrong offset!");

struct FortActivityBrowser_OnSwapColorScheme final
{
public:
	bool                                          bInIsUsingAlternateColorScheme;
};
static_assert(alignof(FortActivityBrowser_OnSwapColorScheme) == 0x000001, "Wrong alignment on FortActivityBrowser_OnSwapColorScheme");
static_assert(sizeof(FortActivityBrowser_OnSwapColorScheme) == 0x000001, "Wrong size on FortActivityBrowser_OnSwapColorScheme");
static_assert(offsetof(FortActivityBrowser_OnSwapColorScheme, bInIsUsingAlternateColorScheme) == 0x000000, "Member 'FortActivityBrowser_OnSwapColorScheme::bInIsUsingAlternateColorScheme' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete final
{
public:
	const class UTexture*                         ThumbnailTexture;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete) == 0x000008, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete) == 0x000008, "Wrong size on FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete, ThumbnailTexture) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_OnTextureLoadingComplete::ThumbnailTexture' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet final
{
public:
	bool                                          bIsTileActive;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet) == 0x000001, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet) == 0x000001, "Wrong size on FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet, bIsTileActive) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_OnTileActiveSet::bIsTileActive' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation final
{
public:
	class FText                                   ActivityName;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation) == 0x000008, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation) == 0x000018, "Wrong size on FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation, ActivityName) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformation::ActivityName' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail final
{
public:
	class FText                                   ActivityName;
	const class UTexture*                         ThumbnailTexture;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail) == 0x000008, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail) == 0x000020, "Wrong size on FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail, ActivityName) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail::ActivityName' has a wrong offset!");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail, ThumbnailTexture) == 0x000018, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdateIslandInformationAndThumbnail::ThumbnailTexture' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText final
{
public:
	class FText                                   JoinablePartySubText;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText) == 0x000008, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText) == 0x000018, "Wrong size on FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText, JoinablePartySubText) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdateJoinablePartySubText::JoinablePartySubText' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation final
{
public:
	int32                                         CurrentPartyCount;
	int32                                         MaxPartyCount;
	bool                                          bIsActiveInvite;
	bool                                          bIsPartyPrivate;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation) == 0x000004, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation) == 0x00000C, "Wrong size on FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation, CurrentPartyCount) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation::CurrentPartyCount' has a wrong offset!");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation, MaxPartyCount) == 0x000004, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation::MaxPartyCount' has a wrong offset!");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation, bIsActiveInvite) == 0x000008, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation::bIsActiveInvite' has a wrong offset!");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation, bIsPartyPrivate) == 0x000009, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdatePartyInformation::bIsPartyPrivate' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames final
{
public:
	class FText                                   Names;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames) == 0x000008, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames) == 0x000018, "Wrong size on FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames, Names) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdatePartyMemberNames::Names' has a wrong offset!");

struct FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence final
{
public:
	class FText                                   RichPresence;
};
static_assert(alignof(FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence) == 0x000008, "Wrong alignment on FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence");
static_assert(sizeof(FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence) == 0x000018, "Wrong size on FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence");
static_assert(offsetof(FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence, RichPresence) == 0x000000, "Member 'FortActivityBrowserPlayWithFriendsTile_UpdateRichPresence::RichPresence' has a wrong offset!");

struct FortActivityBrowserRow_OnCategoryItemChanged final
{
public:
	bool                                          bPlayAnimation;
};
static_assert(alignof(FortActivityBrowserRow_OnCategoryItemChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRow_OnCategoryItemChanged");
static_assert(sizeof(FortActivityBrowserRow_OnCategoryItemChanged) == 0x000001, "Wrong size on FortActivityBrowserRow_OnCategoryItemChanged");
static_assert(offsetof(FortActivityBrowserRow_OnCategoryItemChanged, bPlayAnimation) == 0x000000, "Member 'FortActivityBrowserRow_OnCategoryItemChanged::bPlayAnimation' has a wrong offset!");

struct FortActivityBrowserRow_OnRowIsActiveChanged final
{
public:
	bool                                          bIsActive;
};
static_assert(alignof(FortActivityBrowserRow_OnRowIsActiveChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRow_OnRowIsActiveChanged");
static_assert(sizeof(FortActivityBrowserRow_OnRowIsActiveChanged) == 0x000001, "Wrong size on FortActivityBrowserRow_OnRowIsActiveChanged");
static_assert(offsetof(FortActivityBrowserRow_OnRowIsActiveChanged, bIsActive) == 0x000000, "Member 'FortActivityBrowserRow_OnRowIsActiveChanged::bIsActive' has a wrong offset!");

struct FortActivityBrowserRow_OnRowIsSelectedChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(FortActivityBrowserRow_OnRowIsSelectedChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRow_OnRowIsSelectedChanged");
static_assert(sizeof(FortActivityBrowserRow_OnRowIsSelectedChanged) == 0x000001, "Wrong size on FortActivityBrowserRow_OnRowIsSelectedChanged");
static_assert(offsetof(FortActivityBrowserRow_OnRowIsSelectedChanged, bIsSelected) == 0x000000, "Member 'FortActivityBrowserRow_OnRowIsSelectedChanged::bIsSelected' has a wrong offset!");

struct FortActivityBrowserRow_OnRowMoveDown final
{
public:
	bool                                          bMovingOffscreen;
};
static_assert(alignof(FortActivityBrowserRow_OnRowMoveDown) == 0x000001, "Wrong alignment on FortActivityBrowserRow_OnRowMoveDown");
static_assert(sizeof(FortActivityBrowserRow_OnRowMoveDown) == 0x000001, "Wrong size on FortActivityBrowserRow_OnRowMoveDown");
static_assert(offsetof(FortActivityBrowserRow_OnRowMoveDown, bMovingOffscreen) == 0x000000, "Member 'FortActivityBrowserRow_OnRowMoveDown::bMovingOffscreen' has a wrong offset!");

struct FortActivityBrowserRow_OnRowMoveUp final
{
public:
	bool                                          bMovingOffscreen;
};
static_assert(alignof(FortActivityBrowserRow_OnRowMoveUp) == 0x000001, "Wrong alignment on FortActivityBrowserRow_OnRowMoveUp");
static_assert(sizeof(FortActivityBrowserRow_OnRowMoveUp) == 0x000001, "Wrong size on FortActivityBrowserRow_OnRowMoveUp");
static_assert(offsetof(FortActivityBrowserRow_OnRowMoveUp, bMovingOffscreen) == 0x000000, "Member 'FortActivityBrowserRow_OnRowMoveUp::bMovingOffscreen' has a wrong offset!");

struct FortActivityBrowserRow_OnRowPeekStateChanged final
{
public:
	bool                                          bIsInPeekState;
};
static_assert(alignof(FortActivityBrowserRow_OnRowPeekStateChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRow_OnRowPeekStateChanged");
static_assert(sizeof(FortActivityBrowserRow_OnRowPeekStateChanged) == 0x000001, "Wrong size on FortActivityBrowserRow_OnRowPeekStateChanged");
static_assert(offsetof(FortActivityBrowserRow_OnRowPeekStateChanged, bIsInPeekState) == 0x000000, "Member 'FortActivityBrowserRow_OnRowPeekStateChanged::bIsInPeekState' has a wrong offset!");

struct FortActivityBrowserRow_GetIsActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityBrowserRow_GetIsActive) == 0x000001, "Wrong alignment on FortActivityBrowserRow_GetIsActive");
static_assert(sizeof(FortActivityBrowserRow_GetIsActive) == 0x000001, "Wrong size on FortActivityBrowserRow_GetIsActive");
static_assert(offsetof(FortActivityBrowserRow_GetIsActive, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRow_GetIsActive::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRow_GetIsInPeekState final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityBrowserRow_GetIsInPeekState) == 0x000001, "Wrong alignment on FortActivityBrowserRow_GetIsInPeekState");
static_assert(sizeof(FortActivityBrowserRow_GetIsInPeekState) == 0x000001, "Wrong size on FortActivityBrowserRow_GetIsInPeekState");
static_assert(offsetof(FortActivityBrowserRow_GetIsInPeekState, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRow_GetIsInPeekState::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRow_GetIsSelected final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityBrowserRow_GetIsSelected) == 0x000001, "Wrong alignment on FortActivityBrowserRow_GetIsSelected");
static_assert(sizeof(FortActivityBrowserRow_GetIsSelected) == 0x000001, "Wrong size on FortActivityBrowserRow_GetIsSelected");
static_assert(offsetof(FortActivityBrowserRow_GetIsSelected, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRow_GetIsSelected::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowHero_OnListViewFinishedAddingEntries final
{
public:
	int32                                         ActivityCount;
};
static_assert(alignof(FortActivityBrowserRowHero_OnListViewFinishedAddingEntries) == 0x000004, "Wrong alignment on FortActivityBrowserRowHero_OnListViewFinishedAddingEntries");
static_assert(sizeof(FortActivityBrowserRowHero_OnListViewFinishedAddingEntries) == 0x000004, "Wrong size on FortActivityBrowserRowHero_OnListViewFinishedAddingEntries");
static_assert(offsetof(FortActivityBrowserRowHero_OnListViewFinishedAddingEntries, ActivityCount) == 0x000000, "Member 'FortActivityBrowserRowHero_OnListViewFinishedAddingEntries::ActivityCount' has a wrong offset!");

struct FortActivityBrowserRowHero_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityBrowserRowHero_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortActivityBrowserRowHero_OnPreviewImageChanged");
static_assert(sizeof(FortActivityBrowserRowHero_OnPreviewImageChanged) == 0x000010, "Wrong size on FortActivityBrowserRowHero_OnPreviewImageChanged");
static_assert(offsetof(FortActivityBrowserRowHero_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityBrowserRowHero_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityBrowserRowHero_OnPreviewImageChanged, Texture) == 0x000008, "Member 'FortActivityBrowserRowHero_OnPreviewImageChanged::Texture' has a wrong offset!");

struct FortActivityBrowserRowHero_OnQueryStatusChanged final
{
public:
	bool                                          bIsActive;
};
static_assert(alignof(FortActivityBrowserRowHero_OnQueryStatusChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRowHero_OnQueryStatusChanged");
static_assert(sizeof(FortActivityBrowserRowHero_OnQueryStatusChanged) == 0x000001, "Wrong size on FortActivityBrowserRowHero_OnQueryStatusChanged");
static_assert(offsetof(FortActivityBrowserRowHero_OnQueryStatusChanged, bIsActive) == 0x000000, "Member 'FortActivityBrowserRowHero_OnQueryStatusChanged::bIsActive' has a wrong offset!");

struct FortActivityBrowserRowHero_OnRowHeroFocusChanged final
{
public:
	bool                                          bHasFocus;
};
static_assert(alignof(FortActivityBrowserRowHero_OnRowHeroFocusChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRowHero_OnRowHeroFocusChanged");
static_assert(sizeof(FortActivityBrowserRowHero_OnRowHeroFocusChanged) == 0x000001, "Wrong size on FortActivityBrowserRowHero_OnRowHeroFocusChanged");
static_assert(offsetof(FortActivityBrowserRowHero_OnRowHeroFocusChanged, bHasFocus) == 0x000000, "Member 'FortActivityBrowserRowHero_OnRowHeroFocusChanged::bHasFocus' has a wrong offset!");

struct FortActivityBrowserRowHero_GetCurrentTexture final
{
public:
	const class UTexture*                         ReturnValue;
};
static_assert(alignof(FortActivityBrowserRowHero_GetCurrentTexture) == 0x000008, "Wrong alignment on FortActivityBrowserRowHero_GetCurrentTexture");
static_assert(sizeof(FortActivityBrowserRowHero_GetCurrentTexture) == 0x000008, "Wrong size on FortActivityBrowserRowHero_GetCurrentTexture");
static_assert(offsetof(FortActivityBrowserRowHero_GetCurrentTexture, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRowHero_GetCurrentTexture::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowHero_GetKeyArtOutroAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;
};
static_assert(alignof(FortActivityBrowserRowHero_GetKeyArtOutroAnimation) == 0x000008, "Wrong alignment on FortActivityBrowserRowHero_GetKeyArtOutroAnimation");
static_assert(sizeof(FortActivityBrowserRowHero_GetKeyArtOutroAnimation) == 0x000008, "Wrong size on FortActivityBrowserRowHero_GetKeyArtOutroAnimation");
static_assert(offsetof(FortActivityBrowserRowHero_GetKeyArtOutroAnimation, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRowHero_GetKeyArtOutroAnimation::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowHero_IsImageLoading final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityBrowserRowHero_IsImageLoading) == 0x000001, "Wrong alignment on FortActivityBrowserRowHero_IsImageLoading");
static_assert(sizeof(FortActivityBrowserRowHero_IsImageLoading) == 0x000001, "Wrong size on FortActivityBrowserRowHero_IsImageLoading");
static_assert(offsetof(FortActivityBrowserRowHero_IsImageLoading, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRowHero_IsImageLoading::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowHero_IsInOutroState final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityBrowserRowHero_IsInOutroState) == 0x000001, "Wrong alignment on FortActivityBrowserRowHero_IsInOutroState");
static_assert(sizeof(FortActivityBrowserRowHero_IsInOutroState) == 0x000001, "Wrong size on FortActivityBrowserRowHero_IsInOutroState");
static_assert(offsetof(FortActivityBrowserRowHero_IsInOutroState, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRowHero_IsInOutroState::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowHero_IsShowingSeasonalContent final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityBrowserRowHero_IsShowingSeasonalContent) == 0x000001, "Wrong alignment on FortActivityBrowserRowHero_IsShowingSeasonalContent");
static_assert(sizeof(FortActivityBrowserRowHero_IsShowingSeasonalContent) == 0x000001, "Wrong size on FortActivityBrowserRowHero_IsShowingSeasonalContent");
static_assert(offsetof(FortActivityBrowserRowHero_IsShowingSeasonalContent, ReturnValue) == 0x000000, "Member 'FortActivityBrowserRowHero_IsShowingSeasonalContent::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowList_OnQueryStatusChanged final
{
public:
	bool                                          bIsActive;
};
static_assert(alignof(FortActivityBrowserRowList_OnQueryStatusChanged) == 0x000001, "Wrong alignment on FortActivityBrowserRowList_OnQueryStatusChanged");
static_assert(sizeof(FortActivityBrowserRowList_OnQueryStatusChanged) == 0x000001, "Wrong size on FortActivityBrowserRowList_OnQueryStatusChanged");
static_assert(offsetof(FortActivityBrowserRowList_OnQueryStatusChanged, bIsActive) == 0x000000, "Member 'FortActivityBrowserRowList_OnQueryStatusChanged::bIsActive' has a wrong offset!");

struct FortActivityBrowserRowPromoted_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityBrowserRowPromoted_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortActivityBrowserRowPromoted_OnPreviewImageChanged");
static_assert(sizeof(FortActivityBrowserRowPromoted_OnPreviewImageChanged) == 0x000010, "Wrong size on FortActivityBrowserRowPromoted_OnPreviewImageChanged");
static_assert(offsetof(FortActivityBrowserRowPromoted_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityBrowserRowPromoted_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityBrowserRowPromoted_OnPreviewImageChanged, Texture) == 0x000008, "Member 'FortActivityBrowserRowPromoted_OnPreviewImageChanged::Texture' has a wrong offset!");

struct FortActivityBrowserView_GetInvalidActivityReason final
{
public:
	EFortInvalidActivityReason                    ReturnValue;
};
static_assert(alignof(FortActivityBrowserView_GetInvalidActivityReason) == 0x000001, "Wrong alignment on FortActivityBrowserView_GetInvalidActivityReason");
static_assert(sizeof(FortActivityBrowserView_GetInvalidActivityReason) == 0x000001, "Wrong size on FortActivityBrowserView_GetInvalidActivityReason");
static_assert(offsetof(FortActivityBrowserView_GetInvalidActivityReason, ReturnValue) == 0x000000, "Member 'FortActivityBrowserView_GetInvalidActivityReason::ReturnValue' has a wrong offset!");

struct FortActivityBrowserRowView_OnRowChanged final
{
public:
	int32                                         NewCategoryIndex;
};
static_assert(alignof(FortActivityBrowserRowView_OnRowChanged) == 0x000004, "Wrong alignment on FortActivityBrowserRowView_OnRowChanged");
static_assert(sizeof(FortActivityBrowserRowView_OnRowChanged) == 0x000004, "Wrong size on FortActivityBrowserRowView_OnRowChanged");
static_assert(offsetof(FortActivityBrowserRowView_OnRowChanged, NewCategoryIndex) == 0x000000, "Member 'FortActivityBrowserRowView_OnRowChanged::NewCategoryIndex' has a wrong offset!");

struct FortActivityCategoryTile_OnTileActiveSet final
{
public:
	bool                                          bIsTileActive;
};
static_assert(alignof(FortActivityCategoryTile_OnTileActiveSet) == 0x000001, "Wrong alignment on FortActivityCategoryTile_OnTileActiveSet");
static_assert(sizeof(FortActivityCategoryTile_OnTileActiveSet) == 0x000001, "Wrong size on FortActivityCategoryTile_OnTileActiveSet");
static_assert(offsetof(FortActivityCategoryTile_OnTileActiveSet, bIsTileActive) == 0x000000, "Member 'FortActivityCategoryTile_OnTileActiveSet::bIsTileActive' has a wrong offset!");

struct FortActivityCategoryView_NavigateFromPanel final
{
public:
	EUINavigation                                 Direction;
	uint8                                         Pad_1[0x7];
	class UFortActivityCategoryTilePanel*         NavigatingPanel;
	class UFortActivityCategoryTilePanel*         ReturnValue;
};
static_assert(alignof(FortActivityCategoryView_NavigateFromPanel) == 0x000008, "Wrong alignment on FortActivityCategoryView_NavigateFromPanel");
static_assert(sizeof(FortActivityCategoryView_NavigateFromPanel) == 0x000018, "Wrong size on FortActivityCategoryView_NavigateFromPanel");
static_assert(offsetof(FortActivityCategoryView_NavigateFromPanel, Direction) == 0x000000, "Member 'FortActivityCategoryView_NavigateFromPanel::Direction' has a wrong offset!");
static_assert(offsetof(FortActivityCategoryView_NavigateFromPanel, NavigatingPanel) == 0x000008, "Member 'FortActivityCategoryView_NavigateFromPanel::NavigatingPanel' has a wrong offset!");
static_assert(offsetof(FortActivityCategoryView_NavigateFromPanel, ReturnValue) == 0x000010, "Member 'FortActivityCategoryView_NavigateFromPanel::ReturnValue' has a wrong offset!");

struct FortActivityCategoryView_OnCategoryTilePanelSelected final
{
public:
	const class UFortActivityCategoryTilePanel*   SelectedPanel;
};
static_assert(alignof(FortActivityCategoryView_OnCategoryTilePanelSelected) == 0x000008, "Wrong alignment on FortActivityCategoryView_OnCategoryTilePanelSelected");
static_assert(sizeof(FortActivityCategoryView_OnCategoryTilePanelSelected) == 0x000008, "Wrong size on FortActivityCategoryView_OnCategoryTilePanelSelected");
static_assert(offsetof(FortActivityCategoryView_OnCategoryTilePanelSelected, SelectedPanel) == 0x000000, "Member 'FortActivityCategoryView_OnCategoryTilePanelSelected::SelectedPanel' has a wrong offset!");

struct FortActivityCategoryView_GetCurrentSelectedPanel final
{
public:
	const class UFortActivityCategoryTilePanel*   ReturnValue;
};
static_assert(alignof(FortActivityCategoryView_GetCurrentSelectedPanel) == 0x000008, "Wrong alignment on FortActivityCategoryView_GetCurrentSelectedPanel");
static_assert(sizeof(FortActivityCategoryView_GetCurrentSelectedPanel) == 0x000008, "Wrong size on FortActivityCategoryView_GetCurrentSelectedPanel");
static_assert(offsetof(FortActivityCategoryView_GetCurrentSelectedPanel, ReturnValue) == 0x000000, "Member 'FortActivityCategoryView_GetCurrentSelectedPanel::ReturnValue' has a wrong offset!");

struct FortActivityCategoryView_GetTopMostVisiblePanel final
{
public:
	class UFortActivityCategoryTilePanel*         ReturnValue;
};
static_assert(alignof(FortActivityCategoryView_GetTopMostVisiblePanel) == 0x000008, "Wrong alignment on FortActivityCategoryView_GetTopMostVisiblePanel");
static_assert(sizeof(FortActivityCategoryView_GetTopMostVisiblePanel) == 0x000008, "Wrong size on FortActivityCategoryView_GetTopMostVisiblePanel");
static_assert(offsetof(FortActivityCategoryView_GetTopMostVisiblePanel, ReturnValue) == 0x000000, "Member 'FortActivityCategoryView_GetTopMostVisiblePanel::ReturnValue' has a wrong offset!");

struct FortActivityCreateView_GetInvalidCreativeActivityReason final
{
public:
	EFortInvalidActivityReason                    ReturnValue;
};
static_assert(alignof(FortActivityCreateView_GetInvalidCreativeActivityReason) == 0x000001, "Wrong alignment on FortActivityCreateView_GetInvalidCreativeActivityReason");
static_assert(sizeof(FortActivityCreateView_GetInvalidCreativeActivityReason) == 0x000001, "Wrong size on FortActivityCreateView_GetInvalidCreativeActivityReason");
static_assert(offsetof(FortActivityCreateView_GetInvalidCreativeActivityReason, ReturnValue) == 0x000000, "Member 'FortActivityCreateView_GetInvalidCreativeActivityReason::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_OnMoviePlayingChanged final
{
public:
	bool                                          bIsPlaying;
};
static_assert(alignof(FortActivityDiscoverView_OnMoviePlayingChanged) == 0x000001, "Wrong alignment on FortActivityDiscoverView_OnMoviePlayingChanged");
static_assert(sizeof(FortActivityDiscoverView_OnMoviePlayingChanged) == 0x000001, "Wrong size on FortActivityDiscoverView_OnMoviePlayingChanged");
static_assert(offsetof(FortActivityDiscoverView_OnMoviePlayingChanged, bIsPlaying) == 0x000000, "Member 'FortActivityDiscoverView_OnMoviePlayingChanged::bIsPlaying' has a wrong offset!");

struct FortActivityDiscoverView_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityDiscoverView_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortActivityDiscoverView_OnPreviewImageChanged");
static_assert(sizeof(FortActivityDiscoverView_OnPreviewImageChanged) == 0x000010, "Wrong size on FortActivityDiscoverView_OnPreviewImageChanged");
static_assert(offsetof(FortActivityDiscoverView_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityDiscoverView_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityDiscoverView_OnPreviewImageChanged, Texture) == 0x000008, "Member 'FortActivityDiscoverView_OnPreviewImageChanged::Texture' has a wrong offset!");

struct FortActivityDiscoverView_GetCurrentTexture final
{
public:
	const class UTexture*                         ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_GetCurrentTexture) == 0x000008, "Wrong alignment on FortActivityDiscoverView_GetCurrentTexture");
static_assert(sizeof(FortActivityDiscoverView_GetCurrentTexture) == 0x000008, "Wrong size on FortActivityDiscoverView_GetCurrentTexture");
static_assert(offsetof(FortActivityDiscoverView_GetCurrentTexture, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_GetCurrentTexture::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_GetKeyArtOutroAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_GetKeyArtOutroAnimation) == 0x000008, "Wrong alignment on FortActivityDiscoverView_GetKeyArtOutroAnimation");
static_assert(sizeof(FortActivityDiscoverView_GetKeyArtOutroAnimation) == 0x000008, "Wrong size on FortActivityDiscoverView_GetKeyArtOutroAnimation");
static_assert(offsetof(FortActivityDiscoverView_GetKeyArtOutroAnimation, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_GetKeyArtOutroAnimation::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_GetMovieWidget final
{
public:
	class UFortActivatableMovieWidget*            ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_GetMovieWidget) == 0x000008, "Wrong alignment on FortActivityDiscoverView_GetMovieWidget");
static_assert(sizeof(FortActivityDiscoverView_GetMovieWidget) == 0x000008, "Wrong size on FortActivityDiscoverView_GetMovieWidget");
static_assert(offsetof(FortActivityDiscoverView_GetMovieWidget, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_GetMovieWidget::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_GetPromotedMovieWidget final
{
public:
	class UFortActivatableMovieWidget*            ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_GetPromotedMovieWidget) == 0x000008, "Wrong alignment on FortActivityDiscoverView_GetPromotedMovieWidget");
static_assert(sizeof(FortActivityDiscoverView_GetPromotedMovieWidget) == 0x000008, "Wrong size on FortActivityDiscoverView_GetPromotedMovieWidget");
static_assert(offsetof(FortActivityDiscoverView_GetPromotedMovieWidget, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_GetPromotedMovieWidget::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_IsImageLoading final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_IsImageLoading) == 0x000001, "Wrong alignment on FortActivityDiscoverView_IsImageLoading");
static_assert(sizeof(FortActivityDiscoverView_IsImageLoading) == 0x000001, "Wrong size on FortActivityDiscoverView_IsImageLoading");
static_assert(offsetof(FortActivityDiscoverView_IsImageLoading, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_IsImageLoading::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_IsInOutroState final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_IsInOutroState) == 0x000001, "Wrong alignment on FortActivityDiscoverView_IsInOutroState");
static_assert(sizeof(FortActivityDiscoverView_IsInOutroState) == 0x000001, "Wrong size on FortActivityDiscoverView_IsInOutroState");
static_assert(offsetof(FortActivityDiscoverView_IsInOutroState, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_IsInOutroState::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_IsShowingPromotedContent final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_IsShowingPromotedContent) == 0x000001, "Wrong alignment on FortActivityDiscoverView_IsShowingPromotedContent");
static_assert(sizeof(FortActivityDiscoverView_IsShowingPromotedContent) == 0x000001, "Wrong size on FortActivityDiscoverView_IsShowingPromotedContent");
static_assert(offsetof(FortActivityDiscoverView_IsShowingPromotedContent, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_IsShowingPromotedContent::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverView_IsShowingSeasonalContent final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityDiscoverView_IsShowingSeasonalContent) == 0x000001, "Wrong alignment on FortActivityDiscoverView_IsShowingSeasonalContent");
static_assert(sizeof(FortActivityDiscoverView_IsShowingSeasonalContent) == 0x000001, "Wrong size on FortActivityDiscoverView_IsShowingSeasonalContent");
static_assert(offsetof(FortActivityDiscoverView_IsShowingSeasonalContent, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverView_IsShowingSeasonalContent::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverViewV2_IsShowingPromotedContent final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityDiscoverViewV2_IsShowingPromotedContent) == 0x000001, "Wrong alignment on FortActivityDiscoverViewV2_IsShowingPromotedContent");
static_assert(sizeof(FortActivityDiscoverViewV2_IsShowingPromotedContent) == 0x000001, "Wrong size on FortActivityDiscoverViewV2_IsShowingPromotedContent");
static_assert(offsetof(FortActivityDiscoverViewV2_IsShowingPromotedContent, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverViewV2_IsShowingPromotedContent::ReturnValue' has a wrong offset!");

struct FortActivityDiscoverViewV2_IsShowingSeasonalContent final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityDiscoverViewV2_IsShowingSeasonalContent) == 0x000001, "Wrong alignment on FortActivityDiscoverViewV2_IsShowingSeasonalContent");
static_assert(sizeof(FortActivityDiscoverViewV2_IsShowingSeasonalContent) == 0x000001, "Wrong size on FortActivityDiscoverViewV2_IsShowingSeasonalContent");
static_assert(offsetof(FortActivityDiscoverViewV2_IsShowingSeasonalContent, ReturnValue) == 0x000000, "Member 'FortActivityDiscoverViewV2_IsShowingSeasonalContent::ReturnValue' has a wrong offset!");

struct FortActivityListView_GetInViewCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(FortActivityListView_GetInViewCount) == 0x000004, "Wrong alignment on FortActivityListView_GetInViewCount");
static_assert(sizeof(FortActivityListView_GetInViewCount) == 0x000004, "Wrong size on FortActivityListView_GetInViewCount");
static_assert(offsetof(FortActivityListView_GetInViewCount, ReturnValue) == 0x000000, "Member 'FortActivityListView_GetInViewCount::ReturnValue' has a wrong offset!");

struct FortActivityLobbyTile_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityLobbyTile_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortActivityLobbyTile_OnPreviewImageChanged");
static_assert(sizeof(FortActivityLobbyTile_OnPreviewImageChanged) == 0x000010, "Wrong size on FortActivityLobbyTile_OnPreviewImageChanged");
static_assert(offsetof(FortActivityLobbyTile_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityLobbyTile_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityLobbyTile_OnPreviewImageChanged, Texture) == 0x000008, "Member 'FortActivityLobbyTile_OnPreviewImageChanged::Texture' has a wrong offset!");

struct FortActivityLobbyTile_OnShowChildActivityChangedNotification final
{
public:
	class FText                                   DisplayName;
};
static_assert(alignof(FortActivityLobbyTile_OnShowChildActivityChangedNotification) == 0x000008, "Wrong alignment on FortActivityLobbyTile_OnShowChildActivityChangedNotification");
static_assert(sizeof(FortActivityLobbyTile_OnShowChildActivityChangedNotification) == 0x000018, "Wrong size on FortActivityLobbyTile_OnShowChildActivityChangedNotification");
static_assert(offsetof(FortActivityLobbyTile_OnShowChildActivityChangedNotification, DisplayName) == 0x000000, "Member 'FortActivityLobbyTile_OnShowChildActivityChangedNotification::DisplayName' has a wrong offset!");

struct FortActivityLobbyTile_GetChildActivityDisplayName final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(FortActivityLobbyTile_GetChildActivityDisplayName) == 0x000008, "Wrong alignment on FortActivityLobbyTile_GetChildActivityDisplayName");
static_assert(sizeof(FortActivityLobbyTile_GetChildActivityDisplayName) == 0x000018, "Wrong size on FortActivityLobbyTile_GetChildActivityDisplayName");
static_assert(offsetof(FortActivityLobbyTile_GetChildActivityDisplayName, ReturnValue) == 0x000000, "Member 'FortActivityLobbyTile_GetChildActivityDisplayName::ReturnValue' has a wrong offset!");

struct FortActivityLobbyTile_IsActivityEpicCreated final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityLobbyTile_IsActivityEpicCreated) == 0x000001, "Wrong alignment on FortActivityLobbyTile_IsActivityEpicCreated");
static_assert(sizeof(FortActivityLobbyTile_IsActivityEpicCreated) == 0x000001, "Wrong size on FortActivityLobbyTile_IsActivityEpicCreated");
static_assert(offsetof(FortActivityLobbyTile_IsActivityEpicCreated, ReturnValue) == 0x000000, "Member 'FortActivityLobbyTile_IsActivityEpicCreated::ReturnValue' has a wrong offset!");

struct FortActivityLobbyTile_IsModeSetActivity final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityLobbyTile_IsModeSetActivity) == 0x000001, "Wrong alignment on FortActivityLobbyTile_IsModeSetActivity");
static_assert(sizeof(FortActivityLobbyTile_IsModeSetActivity) == 0x000001, "Wrong size on FortActivityLobbyTile_IsModeSetActivity");
static_assert(offsetof(FortActivityLobbyTile_IsModeSetActivity, ReturnValue) == 0x000000, "Member 'FortActivityLobbyTile_IsModeSetActivity::ReturnValue' has a wrong offset!");

struct FortActivityModeSetSelectionModal_OnActivityChanged final
{
public:
	const class UFortGameActivity*                GameActivity;
	class FString                                 StartingSelectedMnemonic;
};
static_assert(alignof(FortActivityModeSetSelectionModal_OnActivityChanged) == 0x000008, "Wrong alignment on FortActivityModeSetSelectionModal_OnActivityChanged");
static_assert(sizeof(FortActivityModeSetSelectionModal_OnActivityChanged) == 0x000018, "Wrong size on FortActivityModeSetSelectionModal_OnActivityChanged");
static_assert(offsetof(FortActivityModeSetSelectionModal_OnActivityChanged, GameActivity) == 0x000000, "Member 'FortActivityModeSetSelectionModal_OnActivityChanged::GameActivity' has a wrong offset!");
static_assert(offsetof(FortActivityModeSetSelectionModal_OnActivityChanged, StartingSelectedMnemonic) == 0x000008, "Member 'FortActivityModeSetSelectionModal_OnActivityChanged::StartingSelectedMnemonic' has a wrong offset!");

struct FortActivityModeSetSelectionModal_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityModeSetSelectionModal_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortActivityModeSetSelectionModal_OnPreviewImageChanged");
static_assert(sizeof(FortActivityModeSetSelectionModal_OnPreviewImageChanged) == 0x000010, "Wrong size on FortActivityModeSetSelectionModal_OnPreviewImageChanged");
static_assert(offsetof(FortActivityModeSetSelectionModal_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityModeSetSelectionModal_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityModeSetSelectionModal_OnPreviewImageChanged, Texture) == 0x000008, "Member 'FortActivityModeSetSelectionModal_OnPreviewImageChanged::Texture' has a wrong offset!");

struct FortActivitySearchView_HandleTextChanged final
{
public:
	class FText                                   Text;
};
static_assert(alignof(FortActivitySearchView_HandleTextChanged) == 0x000008, "Wrong alignment on FortActivitySearchView_HandleTextChanged");
static_assert(sizeof(FortActivitySearchView_HandleTextChanged) == 0x000018, "Wrong size on FortActivitySearchView_HandleTextChanged");
static_assert(offsetof(FortActivitySearchView_HandleTextChanged, Text) == 0x000000, "Member 'FortActivitySearchView_HandleTextChanged::Text' has a wrong offset!");

struct FortActivitySearchView_HandleTextCommitted final
{
public:
	class FText                                   InText;
	ETextCommit                                   CommitInfo;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FortActivitySearchView_HandleTextCommitted) == 0x000008, "Wrong alignment on FortActivitySearchView_HandleTextCommitted");
static_assert(sizeof(FortActivitySearchView_HandleTextCommitted) == 0x000020, "Wrong size on FortActivitySearchView_HandleTextCommitted");
static_assert(offsetof(FortActivitySearchView_HandleTextCommitted, InText) == 0x000000, "Member 'FortActivitySearchView_HandleTextCommitted::InText' has a wrong offset!");
static_assert(offsetof(FortActivitySearchView_HandleTextCommitted, CommitInfo) == 0x000018, "Member 'FortActivitySearchView_HandleTextCommitted::CommitInfo' has a wrong offset!");

struct FortActivitySearchView_OnActivityValidated final
{
public:
	EFortActivityValidationResult                 ValidateResult;
};
static_assert(alignof(FortActivitySearchView_OnActivityValidated) == 0x000001, "Wrong alignment on FortActivitySearchView_OnActivityValidated");
static_assert(sizeof(FortActivitySearchView_OnActivityValidated) == 0x000001, "Wrong size on FortActivitySearchView_OnActivityValidated");
static_assert(offsetof(FortActivitySearchView_OnActivityValidated, ValidateResult) == 0x000000, "Member 'FortActivitySearchView_OnActivityValidated::ValidateResult' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnIsFavoriteChanged final
{
public:
	bool                                          bIsFavorite;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnIsFavoriteChanged) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_OnIsFavoriteChanged");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnIsFavoriteChanged) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_OnIsFavoriteChanged");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnIsFavoriteChanged, bIsFavorite) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnIsFavoriteChanged::bIsFavorite' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnLogoImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnLogoImageChanged) == 0x000008, "Wrong alignment on FortActivityTileDetailsDisplay_OnLogoImageChanged");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnLogoImageChanged) == 0x000010, "Wrong size on FortActivityTileDetailsDisplay_OnLogoImageChanged");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnLogoImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnLogoImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnLogoImageChanged, Texture) == 0x000008, "Member 'FortActivityTileDetailsDisplay_OnLogoImageChanged::Texture' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnPartySizeChanged final
{
public:
	int32                                         PartySize;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnPartySizeChanged) == 0x000004, "Wrong alignment on FortActivityTileDetailsDisplay_OnPartySizeChanged");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnPartySizeChanged) == 0x000004, "Wrong size on FortActivityTileDetailsDisplay_OnPartySizeChanged");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnPartySizeChanged, PartySize) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnPartySizeChanged::PartySize' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnPreviewImageChanged final
{
public:
	bool                                          bIsLoading;
	uint8                                         Pad_1[0x7];
	const class UTexture*                         Texture;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnPreviewImageChanged) == 0x000008, "Wrong alignment on FortActivityTileDetailsDisplay_OnPreviewImageChanged");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnPreviewImageChanged) == 0x000010, "Wrong size on FortActivityTileDetailsDisplay_OnPreviewImageChanged");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnPreviewImageChanged, bIsLoading) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnPreviewImageChanged::bIsLoading' has a wrong offset!");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnPreviewImageChanged, Texture) == 0x000008, "Member 'FortActivityTileDetailsDisplay_OnPreviewImageChanged::Texture' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged final
{
public:
	bool                                          bRequiresPurchase;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged, bRequiresPurchase) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnRequiresPurchaseChanged::bRequiresPurchase' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged final
{
public:
	int32                                         NumPlaying;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged) == 0x000004, "Wrong alignment on FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged) == 0x000004, "Wrong size on FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged, NumPlaying) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnSocialUsersPlayingChanged::NumPlaying' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnTileActiveSet final
{
public:
	bool                                          bIsTileActive;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnTileActiveSet) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_OnTileActiveSet");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnTileActiveSet) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_OnTileActiveSet");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnTileActiveSet, bIsTileActive) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnTileActiveSet::bIsTileActive' has a wrong offset!");

struct FortActivityTileDetailsDisplay_OnUpdateColumnSize final
{
public:
	int32                                         NewColumnSize;
};
static_assert(alignof(FortActivityTileDetailsDisplay_OnUpdateColumnSize) == 0x000004, "Wrong alignment on FortActivityTileDetailsDisplay_OnUpdateColumnSize");
static_assert(sizeof(FortActivityTileDetailsDisplay_OnUpdateColumnSize) == 0x000004, "Wrong size on FortActivityTileDetailsDisplay_OnUpdateColumnSize");
static_assert(offsetof(FortActivityTileDetailsDisplay_OnUpdateColumnSize, NewColumnSize) == 0x000000, "Member 'FortActivityTileDetailsDisplay_OnUpdateColumnSize::NewColumnSize' has a wrong offset!");

struct FortActivityTileDetailsDisplay_ShouldPlayTileVideo final
{
public:
	bool                                          bOutResult;
};
static_assert(alignof(FortActivityTileDetailsDisplay_ShouldPlayTileVideo) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_ShouldPlayTileVideo");
static_assert(sizeof(FortActivityTileDetailsDisplay_ShouldPlayTileVideo) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_ShouldPlayTileVideo");
static_assert(offsetof(FortActivityTileDetailsDisplay_ShouldPlayTileVideo, bOutResult) == 0x000000, "Member 'FortActivityTileDetailsDisplay_ShouldPlayTileVideo::bOutResult' has a wrong offset!");

struct FortActivityTileDetailsDisplay_UpdateCCU final
{
public:
	int32                                         CCUCount;
};
static_assert(alignof(FortActivityTileDetailsDisplay_UpdateCCU) == 0x000004, "Wrong alignment on FortActivityTileDetailsDisplay_UpdateCCU");
static_assert(sizeof(FortActivityTileDetailsDisplay_UpdateCCU) == 0x000004, "Wrong size on FortActivityTileDetailsDisplay_UpdateCCU");
static_assert(offsetof(FortActivityTileDetailsDisplay_UpdateCCU, CCUCount) == 0x000000, "Member 'FortActivityTileDetailsDisplay_UpdateCCU::CCUCount' has a wrong offset!");

struct FortActivityTileDetailsDisplay_DoesActivityRequirePurchase final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityTileDetailsDisplay_DoesActivityRequirePurchase) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_DoesActivityRequirePurchase");
static_assert(sizeof(FortActivityTileDetailsDisplay_DoesActivityRequirePurchase) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_DoesActivityRequirePurchase");
static_assert(offsetof(FortActivityTileDetailsDisplay_DoesActivityRequirePurchase, ReturnValue) == 0x000000, "Member 'FortActivityTileDetailsDisplay_DoesActivityRequirePurchase::ReturnValue' has a wrong offset!");

struct FortActivityTileDetailsDisplay_GetInvalidActivityReason final
{
public:
	EFortInvalidActivityReason                    ReturnValue;
};
static_assert(alignof(FortActivityTileDetailsDisplay_GetInvalidActivityReason) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_GetInvalidActivityReason");
static_assert(sizeof(FortActivityTileDetailsDisplay_GetInvalidActivityReason) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_GetInvalidActivityReason");
static_assert(offsetof(FortActivityTileDetailsDisplay_GetInvalidActivityReason, ReturnValue) == 0x000000, "Member 'FortActivityTileDetailsDisplay_GetInvalidActivityReason::ReturnValue' has a wrong offset!");

struct FortActivityTileDetailsDisplay_IsActivityEpicCreated final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityTileDetailsDisplay_IsActivityEpicCreated) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_IsActivityEpicCreated");
static_assert(sizeof(FortActivityTileDetailsDisplay_IsActivityEpicCreated) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_IsActivityEpicCreated");
static_assert(offsetof(FortActivityTileDetailsDisplay_IsActivityEpicCreated, ReturnValue) == 0x000000, "Member 'FortActivityTileDetailsDisplay_IsActivityEpicCreated::ReturnValue' has a wrong offset!");

struct FortActivityTileDetailsDisplay_IsActivityFavorited final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityTileDetailsDisplay_IsActivityFavorited) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_IsActivityFavorited");
static_assert(sizeof(FortActivityTileDetailsDisplay_IsActivityFavorited) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_IsActivityFavorited");
static_assert(offsetof(FortActivityTileDetailsDisplay_IsActivityFavorited, ReturnValue) == 0x000000, "Member 'FortActivityTileDetailsDisplay_IsActivityFavorited::ReturnValue' has a wrong offset!");

struct FortActivityTileDetailsDisplay_IsModeSetActivity final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortActivityTileDetailsDisplay_IsModeSetActivity) == 0x000001, "Wrong alignment on FortActivityTileDetailsDisplay_IsModeSetActivity");
static_assert(sizeof(FortActivityTileDetailsDisplay_IsModeSetActivity) == 0x000001, "Wrong size on FortActivityTileDetailsDisplay_IsModeSetActivity");
static_assert(offsetof(FortActivityTileDetailsDisplay_IsModeSetActivity, ReturnValue) == 0x000000, "Member 'FortActivityTileDetailsDisplay_IsModeSetActivity::ReturnValue' has a wrong offset!");

struct FortActivityTileView_SetListenForMouseWheelInput final
{
public:
	bool                                          bListenForInput;
};
static_assert(alignof(FortActivityTileView_SetListenForMouseWheelInput) == 0x000001, "Wrong alignment on FortActivityTileView_SetListenForMouseWheelInput");
static_assert(sizeof(FortActivityTileView_SetListenForMouseWheelInput) == 0x000001, "Wrong size on FortActivityTileView_SetListenForMouseWheelInput");
static_assert(offsetof(FortActivityTileView_SetListenForMouseWheelInput, bListenForInput) == 0x000000, "Member 'FortActivityTileView_SetListenForMouseWheelInput::bListenForInput' has a wrong offset!");

}
