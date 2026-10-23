#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_classes.hpp"
#include "DiscoveryBrowserUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UFortActivityBrowserTabButton final : public UFortTabButton
{
public:
	void OnFavoriteChanged(bool bIsFavorite);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserTabButton">();
	}
	static class UFortActivityBrowserTabButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserTabButton>();
	}
};
static_assert(alignof(UFortActivityBrowserTabButton) == 0x000010, "Wrong alignment on UFortActivityBrowserTabButton");
static_assert(sizeof(UFortActivityBrowserTabButton) == 0x001410, "Wrong size on UFortActivityBrowserTabButton");

class UFortActivityBrowser final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UCommonActivatableWidgetSwitcher*       Switcher_TabActivityBrowserViews;
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_ShowCustomMatchmakingModal;
	class UCommonButtonBase*                      Button_BackToTop;
	class UCommonButtonBase*                      Button_MobileShowGameDetails;
	class UCommonButtonBase*                      Button_MobileAccept;
	class UCommonButtonBase*                      Button_MobileClose;
	class UCommonButtonBase*                      Button_JoinAsSpectator;
	class UCommonButtonBase*                      Button_ShowSpectateMatchModal;
	class UFortTabListWidgetBase_Legacy*          TabList_BrowserTabs;
	struct FPrimaryContentSetup                   PrimaryContentSetup;
	uint8                                         Pad_403[0x5];
	TSubclassOf<class UFortTabButton>             TabButtonClass;
	TSubclassOf<class UFortActivityDetailsModal>  ActivityDetailsModalClass;
	TSubclassOf<class UFortActivityModeSetSelectionModal> ActivityModeSetSelectionModalClass;
	TSubclassOf<class UCommonActivatableWidget>   ActivityModeSetFirstTimeNotificationModalClass;
	TSubclassOf<class UFortActivityBrowserAttributionsModal> AttributionsModalClass;
	TSubclassOf<class UFortActivityCreatorPageView> CreatorPageViewClass;
	TSubclassOf<class UFortActivityCategoryPageView> CategoryPageViewClass;
	TSoftClassPtr<class UClass>                   SoftCustomMatchmakingModalClass;
	TSoftClassPtr<class UClass>                   SoftSpectateMatchModalClass;
	TSubclassOf<class UFortCampaignPurchaseScreen> CampaignPurchaseScreenClass;
	TSubclassOf<class UCommonActivatableWidget>   CCUModalClass;
	TMap<class FName, class UFortActivityBrowserColorSchemeAsset*> ColorSchemes;
	class UFortCreativeDiscoverySurfaceManager*   Manager;
	TArray<struct FCachedSurfaceData>             CachedSurfacesData;
	uint8                                         Pad_508[0x10];
	class UFortGameActivity*                      SelectedGameActivity;
	uint8                                         Pad_520[0xF0];
	class UFortGameActivityProvider*              CachedWinterfestActivityProvider;
	uint8                                         Pad_618[0x10];
	class UFortActivityBrowserColorSchemeAsset*   CurrentColorScheme;
	uint8                                         Pad_630[0x8];
	class UFortActivityCategoryPageView*          CachedCategoryPageView;
	class UFortActivityCreatorPageView*           CachedCreatorPageView;
	bool                                          bCCUModalEnabled;
	uint8                                         Pad_649[0x7];

public:
	void HandleTabChanged(class FName TabId);
	void OnActivitySelected();
	void OnEnableColorScheme(const bool bIsColorSchemeActive);
	void OnPlayerQueueTypeChanged(const EPlayerQueueType PlayerQueueType);
	void OnSwapColorScheme(const bool bInIsUsingAlternateColorScheme);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowser">();
	}
	static class UFortActivityBrowser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowser>();
	}
};
static_assert(alignof(UFortActivityBrowser) == 0x000008, "Wrong alignment on UFortActivityBrowser");
static_assert(sizeof(UFortActivityBrowser) == 0x000650, "Wrong size on UFortActivityBrowser");
static_assert(offsetof(UFortActivityBrowser, Switcher_TabActivityBrowserViews) == 0x0003B0, "Member 'UFortActivityBrowser::Switcher_TabActivityBrowserViews' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_Back) == 0x0003B8, "Member 'UFortActivityBrowser::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_ShowCustomMatchmakingModal) == 0x0003C0, "Member 'UFortActivityBrowser::Button_ShowCustomMatchmakingModal' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_BackToTop) == 0x0003C8, "Member 'UFortActivityBrowser::Button_BackToTop' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_MobileShowGameDetails) == 0x0003D0, "Member 'UFortActivityBrowser::Button_MobileShowGameDetails' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_MobileAccept) == 0x0003D8, "Member 'UFortActivityBrowser::Button_MobileAccept' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_MobileClose) == 0x0003E0, "Member 'UFortActivityBrowser::Button_MobileClose' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_JoinAsSpectator) == 0x0003E8, "Member 'UFortActivityBrowser::Button_JoinAsSpectator' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Button_ShowSpectateMatchModal) == 0x0003F0, "Member 'UFortActivityBrowser::Button_ShowSpectateMatchModal' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, TabList_BrowserTabs) == 0x0003F8, "Member 'UFortActivityBrowser::TabList_BrowserTabs' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, PrimaryContentSetup) == 0x000400, "Member 'UFortActivityBrowser::PrimaryContentSetup' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, TabButtonClass) == 0x000408, "Member 'UFortActivityBrowser::TabButtonClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, ActivityDetailsModalClass) == 0x000410, "Member 'UFortActivityBrowser::ActivityDetailsModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, ActivityModeSetSelectionModalClass) == 0x000418, "Member 'UFortActivityBrowser::ActivityModeSetSelectionModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, ActivityModeSetFirstTimeNotificationModalClass) == 0x000420, "Member 'UFortActivityBrowser::ActivityModeSetFirstTimeNotificationModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, AttributionsModalClass) == 0x000428, "Member 'UFortActivityBrowser::AttributionsModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CreatorPageViewClass) == 0x000430, "Member 'UFortActivityBrowser::CreatorPageViewClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CategoryPageViewClass) == 0x000438, "Member 'UFortActivityBrowser::CategoryPageViewClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, SoftCustomMatchmakingModalClass) == 0x000440, "Member 'UFortActivityBrowser::SoftCustomMatchmakingModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, SoftSpectateMatchModalClass) == 0x000468, "Member 'UFortActivityBrowser::SoftSpectateMatchModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CampaignPurchaseScreenClass) == 0x000490, "Member 'UFortActivityBrowser::CampaignPurchaseScreenClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CCUModalClass) == 0x000498, "Member 'UFortActivityBrowser::CCUModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, ColorSchemes) == 0x0004A0, "Member 'UFortActivityBrowser::ColorSchemes' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, Manager) == 0x0004F0, "Member 'UFortActivityBrowser::Manager' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CachedSurfacesData) == 0x0004F8, "Member 'UFortActivityBrowser::CachedSurfacesData' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, SelectedGameActivity) == 0x000518, "Member 'UFortActivityBrowser::SelectedGameActivity' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CachedWinterfestActivityProvider) == 0x000610, "Member 'UFortActivityBrowser::CachedWinterfestActivityProvider' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CurrentColorScheme) == 0x000628, "Member 'UFortActivityBrowser::CurrentColorScheme' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CachedCategoryPageView) == 0x000638, "Member 'UFortActivityBrowser::CachedCategoryPageView' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, CachedCreatorPageView) == 0x000640, "Member 'UFortActivityBrowser::CachedCreatorPageView' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowser, bCCUModalEnabled) == 0x000648, "Member 'UFortActivityBrowser::bCCUModalEnabled' has a wrong offset!");

class UFortActivityBrowserColorSchemeAsset final : public UDataAsset
{
public:
	TMap<class UMaterialParameterCollection*, struct FColorSchemeParamaterValues> MaterialCollectionOverrides;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserColorSchemeAsset">();
	}
	static class UFortActivityBrowserColorSchemeAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserColorSchemeAsset>();
	}
};
static_assert(alignof(UFortActivityBrowserColorSchemeAsset) == 0x000008, "Wrong alignment on UFortActivityBrowserColorSchemeAsset");
static_assert(sizeof(UFortActivityBrowserColorSchemeAsset) == 0x000080, "Wrong size on UFortActivityBrowserColorSchemeAsset");
static_assert(offsetof(UFortActivityBrowserColorSchemeAsset, MaterialCollectionOverrides) == 0x000030, "Member 'UFortActivityBrowserColorSchemeAsset::MaterialCollectionOverrides' has a wrong offset!");

class UFortActivityBrowserListView final : public UListViewBase
{
public:
	uint8                                         Pad_260[0xD8];
	float                                         DirectionalNavigationTimeThreshold;
	bool                                          bLockPositionForController;
	uint8                                         Pad_33D[0x3];
	int32                                         LockedPositionAt;
	uint8                                         Pad_344[0x4];
	TSubclassOf<class UFortActivityBrowserRow>    PromotedActivityClass;
	TMap<class FName, TSubclassOf<class UFortActivityBrowserRow>> RowTypes;
	uint8                                         Pad_3A0[0xC0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserListView">();
	}
	static class UFortActivityBrowserListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserListView>();
	}
};
static_assert(alignof(UFortActivityBrowserListView) == 0x000008, "Wrong alignment on UFortActivityBrowserListView");
static_assert(sizeof(UFortActivityBrowserListView) == 0x000460, "Wrong size on UFortActivityBrowserListView");
static_assert(offsetof(UFortActivityBrowserListView, DirectionalNavigationTimeThreshold) == 0x000338, "Member 'UFortActivityBrowserListView::DirectionalNavigationTimeThreshold' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserListView, bLockPositionForController) == 0x00033C, "Member 'UFortActivityBrowserListView::bLockPositionForController' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserListView, LockedPositionAt) == 0x000340, "Member 'UFortActivityBrowserListView::LockedPositionAt' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserListView, PromotedActivityClass) == 0x000348, "Member 'UFortActivityBrowserListView::PromotedActivityClass' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserListView, RowTypes) == 0x000350, "Member 'UFortActivityBrowserListView::RowTypes' has a wrong offset!");

class UFortActivityBrowserTileBase : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserTileBase">();
	}
	static class UFortActivityBrowserTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserTileBase>();
	}
};
static_assert(alignof(UFortActivityBrowserTileBase) == 0x000010, "Wrong alignment on UFortActivityBrowserTileBase");
static_assert(sizeof(UFortActivityBrowserTileBase) == 0x001440, "Wrong size on UFortActivityBrowserTileBase");

class UFortActivityBrowserPlayWithFriendsTile final : public UFortActivityBrowserTileBase
{
public:
	class UFortJoinablePartyPortraitsDisplay*     PartyMembersAvatarsDisplay;
	uint8                                         Pad_1448[0x8];

public:
	void OnTextureBeginLoading();
	void OnTextureLoadingComplete(const class UTexture* ThumbnailTexture);
	void OnTileActiveSet(const bool bIsTileActive);
	void UpdateIslandInformation(const class FText& ActivityName);
	void UpdateIslandInformationAndThumbnail(const class FText& ActivityName, const class UTexture* ThumbnailTexture);
	void UpdateJoinablePartySubText(const class FText& JoinablePartySubText);
	void UpdatePartyInformation(const int32 CurrentPartyCount, const int32 MaxPartyCount, const bool bIsActiveInvite, const bool bIsPartyPrivate);
	void UpdatePartyMemberNames(const class FText& Names);
	void UpdateRichPresence(const class FText& RichPresence);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserPlayWithFriendsTile">();
	}
	static class UFortActivityBrowserPlayWithFriendsTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserPlayWithFriendsTile>();
	}
};
static_assert(alignof(UFortActivityBrowserPlayWithFriendsTile) == 0x000010, "Wrong alignment on UFortActivityBrowserPlayWithFriendsTile");
static_assert(sizeof(UFortActivityBrowserPlayWithFriendsTile) == 0x001450, "Wrong size on UFortActivityBrowserPlayWithFriendsTile");
static_assert(offsetof(UFortActivityBrowserPlayWithFriendsTile, PartyMembersAvatarsDisplay) == 0x001440, "Member 'UFortActivityBrowserPlayWithFriendsTile::PartyMembersAvatarsDisplay' has a wrong offset!");

class UFortActivityBrowserRow : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x98];
	class UCommonTextBlock*                       Text_CategoryName;
	float                                         MinimumVisibilityPercentageForRowActivation;
	uint8                                         Pad_334[0x4];

public:
	void OnCategoryItemChanged(const bool bPlayAnimation);
	void OnRowIsActiveChanged(const bool bIsActive);
	void OnRowIsSelectedChanged(const bool bIsSelected);
	void OnRowMoveDown(const bool bMovingOffscreen);
	void OnRowMoveUp(const bool bMovingOffscreen);
	void OnRowPeekStateChanged(const bool bIsInPeekState);

	bool GetIsActive() const;
	bool GetIsInPeekState() const;
	bool GetIsSelected() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserRow">();
	}
	static class UFortActivityBrowserRow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserRow>();
	}
};
static_assert(alignof(UFortActivityBrowserRow) == 0x000008, "Wrong alignment on UFortActivityBrowserRow");
static_assert(sizeof(UFortActivityBrowserRow) == 0x000338, "Wrong size on UFortActivityBrowserRow");
static_assert(offsetof(UFortActivityBrowserRow, Text_CategoryName) == 0x000328, "Member 'UFortActivityBrowserRow::Text_CategoryName' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRow, MinimumVisibilityPercentageForRowActivation) == 0x000330, "Member 'UFortActivityBrowserRow::MinimumVisibilityPercentageForRowActivation' has a wrong offset!");

class UFortActivityBrowserRowHero final : public UFortActivityBrowserRow
{
public:
	class UFortActivityListView*                  ListView_Activities;
	class UFortSwipePanel*                        SwipePanel_Navigation;
	uint8                                         Pad_348[0x3];
	bool                                          bPlayDetailsAnimationOnScreenOpen;
	float                                         DetailsDisplayUpdateDelay;
	class UFortActivityDetailsDisplay*            DetailsDisplay_SelectedActivity;
	class UFortActivityVideoCycle*                ActivityVideoCycleWidget;
	uint8                                         Pad_360[0x20];
	class UWidgetAnimation*                       BoundKeyArtOutroAnimation;
	uint8                                         Pad_388[0x2];
	bool                                          bShouldAutoCycle;
	uint8                                         Pad_38B[0x2D];

public:
	void CheckUpdateDetailsDelay();
	void CycleNextActivity();
	void HandleActivityVideoCycleEndReached();
	void HandleActivityVideoCycleStarted();
	void OnActivityUpdated();
	void OnListViewFinishedAddingEntries(int32 ActivityCount);
	void OnPlayKeyArtIntro();
	void OnPlayKeyArtOutro();
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnQueryActivitiesFinished();
	void OnQueryStatusChanged(bool bIsActive);
	void OnRowHeroFocusChanged(bool bHasFocus);
	void OnUpdateDetailsDisplay();
	void OnVideoEndReached();
	void OnVideoStarted();

	const class UTexture* GetCurrentTexture() const;
	class UWidgetAnimation* GetKeyArtOutroAnimation() const;
	bool IsImageLoading() const;
	bool IsInOutroState() const;
	bool IsShowingSeasonalContent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserRowHero">();
	}
	static class UFortActivityBrowserRowHero* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserRowHero>();
	}
};
static_assert(alignof(UFortActivityBrowserRowHero) == 0x000008, "Wrong alignment on UFortActivityBrowserRowHero");
static_assert(sizeof(UFortActivityBrowserRowHero) == 0x0003B8, "Wrong size on UFortActivityBrowserRowHero");
static_assert(offsetof(UFortActivityBrowserRowHero, ListView_Activities) == 0x000338, "Member 'UFortActivityBrowserRowHero::ListView_Activities' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, SwipePanel_Navigation) == 0x000340, "Member 'UFortActivityBrowserRowHero::SwipePanel_Navigation' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, bPlayDetailsAnimationOnScreenOpen) == 0x00034B, "Member 'UFortActivityBrowserRowHero::bPlayDetailsAnimationOnScreenOpen' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, DetailsDisplayUpdateDelay) == 0x00034C, "Member 'UFortActivityBrowserRowHero::DetailsDisplayUpdateDelay' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, DetailsDisplay_SelectedActivity) == 0x000350, "Member 'UFortActivityBrowserRowHero::DetailsDisplay_SelectedActivity' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, ActivityVideoCycleWidget) == 0x000358, "Member 'UFortActivityBrowserRowHero::ActivityVideoCycleWidget' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, BoundKeyArtOutroAnimation) == 0x000380, "Member 'UFortActivityBrowserRowHero::BoundKeyArtOutroAnimation' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowHero, bShouldAutoCycle) == 0x00038A, "Member 'UFortActivityBrowserRowHero::bShouldAutoCycle' has a wrong offset!");

class UFortActivityBrowserRowList final : public UFortActivityBrowserRow
{
public:
	class UFortActivityListView*                  ListView_Activities;
	class UCommonButtonBase*                      Button_PageLeft;
	class UCommonButtonBase*                      Button_PageRight;
	uint8                                         Pad_350[0x8];

public:
	void OnQueryStatusChanged(bool bIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserRowList">();
	}
	static class UFortActivityBrowserRowList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserRowList>();
	}
};
static_assert(alignof(UFortActivityBrowserRowList) == 0x000008, "Wrong alignment on UFortActivityBrowserRowList");
static_assert(sizeof(UFortActivityBrowserRowList) == 0x000358, "Wrong size on UFortActivityBrowserRowList");
static_assert(offsetof(UFortActivityBrowserRowList, ListView_Activities) == 0x000338, "Member 'UFortActivityBrowserRowList::ListView_Activities' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowList, Button_PageLeft) == 0x000340, "Member 'UFortActivityBrowserRowList::Button_PageLeft' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowList, Button_PageRight) == 0x000348, "Member 'UFortActivityBrowserRowList::Button_PageRight' has a wrong offset!");

class UFortActivityBrowserRowPromoted final : public UFortActivityBrowserRow
{
public:
	class UCommonTextBlock*                       Text_ActivityName;

public:
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserRowPromoted">();
	}
	static class UFortActivityBrowserRowPromoted* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserRowPromoted>();
	}
};
static_assert(alignof(UFortActivityBrowserRowPromoted) == 0x000008, "Wrong alignment on UFortActivityBrowserRowPromoted");
static_assert(sizeof(UFortActivityBrowserRowPromoted) == 0x000340, "Wrong size on UFortActivityBrowserRowPromoted");
static_assert(offsetof(UFortActivityBrowserRowPromoted, Text_ActivityName) == 0x000338, "Member 'UFortActivityBrowserRowPromoted::Text_ActivityName' has a wrong offset!");

class UFortActivityBrowserView : public UFortActivityView
{
public:
	uint8                                         Pad_3F8[0x8];
	bool                                          bShowCustomMatchmakingModalButton;
	bool                                          bShowSpectateMatchModalButton;
	bool                                          bShowMobileGameDetailsButton;
	bool                                          bShowMobileAcceptButton;
	bool                                          bShowBackToTopButton;
	uint8                                         Pad_405[0x3];
	class FName                                   DiscoverySurfaceName;
	uint8                                         Pad_40C[0x7C];

public:
	void OnSurfaceDataDirty();

	EFortInvalidActivityReason GetInvalidActivityReason() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserView">();
	}
	static class UFortActivityBrowserView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserView>();
	}
};
static_assert(alignof(UFortActivityBrowserView) == 0x000008, "Wrong alignment on UFortActivityBrowserView");
static_assert(sizeof(UFortActivityBrowserView) == 0x000488, "Wrong size on UFortActivityBrowserView");
static_assert(offsetof(UFortActivityBrowserView, bShowCustomMatchmakingModalButton) == 0x000400, "Member 'UFortActivityBrowserView::bShowCustomMatchmakingModalButton' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserView, bShowSpectateMatchModalButton) == 0x000401, "Member 'UFortActivityBrowserView::bShowSpectateMatchModalButton' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserView, bShowMobileGameDetailsButton) == 0x000402, "Member 'UFortActivityBrowserView::bShowMobileGameDetailsButton' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserView, bShowMobileAcceptButton) == 0x000403, "Member 'UFortActivityBrowserView::bShowMobileAcceptButton' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserView, bShowBackToTopButton) == 0x000404, "Member 'UFortActivityBrowserView::bShowBackToTopButton' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserView, DiscoverySurfaceName) == 0x000408, "Member 'UFortActivityBrowserView::DiscoverySurfaceName' has a wrong offset!");

class UFortActivityBrowserRowView : public UFortActivityBrowserView
{
public:
	uint8                                         Pad_488[0x8];
	float                                         MouseWheelScrollTimeThreshold;
	uint8                                         Pad_494[0x4];
	class UFortActivityBrowserListView*           BrowserList_Activities;
	uint8                                         Pad_4A0[0x60];
	class FName                                   TabNameID;
	uint8                                         Pad_504[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	class UFortSwipePanel*                        SwipePanel_Navigation;
	uint8                                         Pad_608[0x18];

public:
	void OnActivityUpdated();
	void OnQueryActivitiesFinished();
	void OnRowChanged(const int32 NewCategoryIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserRowView">();
	}
	static class UFortActivityBrowserRowView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserRowView>();
	}
};
static_assert(alignof(UFortActivityBrowserRowView) == 0x000010, "Wrong alignment on UFortActivityBrowserRowView");
static_assert(sizeof(UFortActivityBrowserRowView) == 0x000620, "Wrong size on UFortActivityBrowserRowView");
static_assert(offsetof(UFortActivityBrowserRowView, MouseWheelScrollTimeThreshold) == 0x000490, "Member 'UFortActivityBrowserRowView::MouseWheelScrollTimeThreshold' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowView, BrowserList_Activities) == 0x000498, "Member 'UFortActivityBrowserRowView::BrowserList_Activities' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowView, TabNameID) == 0x000500, "Member 'UFortActivityBrowserRowView::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowView, TabButtonLabelInfo) == 0x000510, "Member 'UFortActivityBrowserRowView::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortActivityBrowserRowView, SwipePanel_Navigation) == 0x000600, "Member 'UFortActivityBrowserRowView::SwipePanel_Navigation' has a wrong offset!");

class UFortActivityBrowserTile final : public UFortActivityBrowserTileBase
{
public:
	class UFortActivityTileDetailsDisplay*        Display_TileDetails;
	uint8                                         Pad_1448[0x38];

public:
	void HandleActivitySelected();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserTile">();
	}
	static class UFortActivityBrowserTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserTile>();
	}
};
static_assert(alignof(UFortActivityBrowserTile) == 0x000010, "Wrong alignment on UFortActivityBrowserTile");
static_assert(sizeof(UFortActivityBrowserTile) == 0x001480, "Wrong size on UFortActivityBrowserTile");
static_assert(offsetof(UFortActivityBrowserTile, Display_TileDetails) == 0x001440, "Member 'UFortActivityBrowserTile::Display_TileDetails' has a wrong offset!");

class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{
public:
	uint8                                         Pad_488[0x8];
	class UFortGameActivityProvider*              ActivityProvider;
	class UFortActivityTileView*                  TileView_PlayerActivities;
	class FName                                   TabNameID;
	uint8                                         Pad_4A4[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	EFortCreativeDiscoveryPlayHistoryType         PlayHistoryProviderType;
	uint8                                         Pad_5A1[0x1F];

public:
	void BP_OnTileViewUpdated();
	void OnPlayViewIntro();
	void OnQueryActivitiesComplete();
	void OnQueryActivitiesStarted();
	void PlayViewIntro();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityPlayerBrowserView">();
	}
	static class UFortActivityPlayerBrowserView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityPlayerBrowserView>();
	}
};
static_assert(alignof(UFortActivityPlayerBrowserView) == 0x000010, "Wrong alignment on UFortActivityPlayerBrowserView");
static_assert(sizeof(UFortActivityPlayerBrowserView) == 0x0005C0, "Wrong size on UFortActivityPlayerBrowserView");
static_assert(offsetof(UFortActivityPlayerBrowserView, ActivityProvider) == 0x000490, "Member 'UFortActivityPlayerBrowserView::ActivityProvider' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerBrowserView, TileView_PlayerActivities) == 0x000498, "Member 'UFortActivityPlayerBrowserView::TileView_PlayerActivities' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerBrowserView, TabNameID) == 0x0004A0, "Member 'UFortActivityPlayerBrowserView::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerBrowserView, TabButtonLabelInfo) == 0x0004B0, "Member 'UFortActivityPlayerBrowserView::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerBrowserView, PlayHistoryProviderType) == 0x0005A0, "Member 'UFortActivityPlayerBrowserView::PlayHistoryProviderType' has a wrong offset!");

class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{
public:
	uint8                                         Pad_5C0[0x8];
	class UCommonRichTextBlock*                   Text_CategoryTitle;
	class UCommonButtonBase*                      Button_BackToTop;
	class UCommonButtonBase*                      Button_MobileClose;
	class UCommonButtonBase*                      Button_MobileAccept;
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_MobileShowGameDetails;
	uint8                                         Pad_5F8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityCategoryPageView">();
	}
	static class UFortActivityCategoryPageView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityCategoryPageView>();
	}
};
static_assert(alignof(UFortActivityCategoryPageView) == 0x000010, "Wrong alignment on UFortActivityCategoryPageView");
static_assert(sizeof(UFortActivityCategoryPageView) == 0x000600, "Wrong size on UFortActivityCategoryPageView");
static_assert(offsetof(UFortActivityCategoryPageView, Text_CategoryTitle) == 0x0005C8, "Member 'UFortActivityCategoryPageView::Text_CategoryTitle' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryPageView, Button_BackToTop) == 0x0005D0, "Member 'UFortActivityCategoryPageView::Button_BackToTop' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryPageView, Button_MobileClose) == 0x0005D8, "Member 'UFortActivityCategoryPageView::Button_MobileClose' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryPageView, Button_MobileAccept) == 0x0005E0, "Member 'UFortActivityCategoryPageView::Button_MobileAccept' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryPageView, Button_Back) == 0x0005E8, "Member 'UFortActivityCategoryPageView::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryPageView, Button_MobileShowGameDetails) == 0x0005F0, "Member 'UFortActivityCategoryPageView::Button_MobileShowGameDetails' has a wrong offset!");

class UFortActivityTileViewTileBase : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x90];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityTileViewTileBase">();
	}
	static class UFortActivityTileViewTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityTileViewTileBase>();
	}
};
static_assert(alignof(UFortActivityTileViewTileBase) == 0x000010, "Wrong alignment on UFortActivityTileViewTileBase");
static_assert(sizeof(UFortActivityTileViewTileBase) == 0x001470, "Wrong size on UFortActivityTileViewTileBase");

class UFortActivityCategoryTile final : public UFortActivityTileViewTileBase
{
public:
	class UCommonTextBlock*                       Text_CategoryTitle;
	uint8                                         Pad_1478[0x8];

public:
	void OnTileActiveSet(const bool bIsTileActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityCategoryTile">();
	}
	static class UFortActivityCategoryTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityCategoryTile>();
	}
};
static_assert(alignof(UFortActivityCategoryTile) == 0x000010, "Wrong alignment on UFortActivityCategoryTile");
static_assert(sizeof(UFortActivityCategoryTile) == 0x001480, "Wrong size on UFortActivityCategoryTile");
static_assert(offsetof(UFortActivityCategoryTile, Text_CategoryTitle) == 0x001470, "Member 'UFortActivityCategoryTile::Text_CategoryTitle' has a wrong offset!");

class UFortActivityCategoryTilePanel final : public UCommonUserWidget
{
public:
	class UFortActivityTileView*                  TileView_Categories;
	class UCommonTextBlock*                       Text_Title;
	int32                                         TileViewQueryThreshold;
	uint8                                         Pad_2A4[0x4];
	class UFortCreativeDiscoveryActivityProvider* CachedActivityProvider;
	uint8                                         Pad_2B0[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityCategoryTilePanel">();
	}
	static class UFortActivityCategoryTilePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityCategoryTilePanel>();
	}
};
static_assert(alignof(UFortActivityCategoryTilePanel) == 0x000008, "Wrong alignment on UFortActivityCategoryTilePanel");
static_assert(sizeof(UFortActivityCategoryTilePanel) == 0x000300, "Wrong size on UFortActivityCategoryTilePanel");
static_assert(offsetof(UFortActivityCategoryTilePanel, TileView_Categories) == 0x000290, "Member 'UFortActivityCategoryTilePanel::TileView_Categories' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryTilePanel, Text_Title) == 0x000298, "Member 'UFortActivityCategoryTilePanel::Text_Title' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryTilePanel, TileViewQueryThreshold) == 0x0002A0, "Member 'UFortActivityCategoryTilePanel::TileViewQueryThreshold' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryTilePanel, CachedActivityProvider) == 0x0002A8, "Member 'UFortActivityCategoryTilePanel::CachedActivityProvider' has a wrong offset!");

class UFortActivityCategoryView final : public UFortActivityBrowserView
{
public:
	uint8                                         Pad_488[0x8];
	class FName                                   TabNameID;
	uint8                                         Pad_494[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	class UFortActivityCategoryTilePanel*         TilePanel_Featured;
	class UFortActivityCategoryTilePanel*         TilePanel_All;
	class UFortActivityCategoryTilePanel*         CurrentSelectedPanel;
	uint8                                         Pad_5A8[0x8];

public:
	class UFortActivityCategoryTilePanel* NavigateFromPanel(EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel);
	void OnCategoryTilePanelSelected(const class UFortActivityCategoryTilePanel* SelectedPanel);
	void OnSurfaceDataReady();

	const class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel() const;
	class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityCategoryView">();
	}
	static class UFortActivityCategoryView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityCategoryView>();
	}
};
static_assert(alignof(UFortActivityCategoryView) == 0x000010, "Wrong alignment on UFortActivityCategoryView");
static_assert(sizeof(UFortActivityCategoryView) == 0x0005B0, "Wrong size on UFortActivityCategoryView");
static_assert(offsetof(UFortActivityCategoryView, TabNameID) == 0x000490, "Member 'UFortActivityCategoryView::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryView, TabButtonLabelInfo) == 0x0004A0, "Member 'UFortActivityCategoryView::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryView, TilePanel_Featured) == 0x000590, "Member 'UFortActivityCategoryView::TilePanel_Featured' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryView, TilePanel_All) == 0x000598, "Member 'UFortActivityCategoryView::TilePanel_All' has a wrong offset!");
static_assert(offsetof(UFortActivityCategoryView, CurrentSelectedPanel) == 0x0005A0, "Member 'UFortActivityCategoryView::CurrentSelectedPanel' has a wrong offset!");

class UFortActivityCreateView final : public UFortActivityBrowserView
{
public:
	uint8                                         Pad_488[0x8];
	class FName                                   TabNameID;
	uint8                                         Pad_494[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	class UCommonButtonBase*                      Button_Create;
	uint8                                         Pad_598[0x18];

public:
	void OnCreativeActivityUpdated();

	EFortInvalidActivityReason GetInvalidCreativeActivityReason() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityCreateView">();
	}
	static class UFortActivityCreateView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityCreateView>();
	}
};
static_assert(alignof(UFortActivityCreateView) == 0x000010, "Wrong alignment on UFortActivityCreateView");
static_assert(sizeof(UFortActivityCreateView) == 0x0005B0, "Wrong size on UFortActivityCreateView");
static_assert(offsetof(UFortActivityCreateView, TabNameID) == 0x000490, "Member 'UFortActivityCreateView::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortActivityCreateView, TabButtonLabelInfo) == 0x0004A0, "Member 'UFortActivityCreateView::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortActivityCreateView, Button_Create) == 0x000590, "Member 'UFortActivityCreateView::Button_Create' has a wrong offset!");

class UFortActivityCreatorPageView final : public UFortActivityCategoryPageView
{
public:
	uint8                                         Pad_600[0x8];
	class UFortGameActivity*                      ActivityDetailsSelectedGameActivity;
	uint8                                         Pad_610[0x20];
	int32                                         AmountOfCreatorLinkEntriesQueried;
	int32                                         ProcessedCreatorLinkEntries;
	int32                                         AmountOfEntriesQueried;
	uint8                                         Pad_63C[0x34];

public:
	void OnCreatorActivitiesQueryFinished();
	void OnNoContentFoundForCreator();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityCreatorPageView">();
	}
	static class UFortActivityCreatorPageView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityCreatorPageView>();
	}
};
static_assert(alignof(UFortActivityCreatorPageView) == 0x000010, "Wrong alignment on UFortActivityCreatorPageView");
static_assert(sizeof(UFortActivityCreatorPageView) == 0x000670, "Wrong size on UFortActivityCreatorPageView");
static_assert(offsetof(UFortActivityCreatorPageView, ActivityDetailsSelectedGameActivity) == 0x000608, "Member 'UFortActivityCreatorPageView::ActivityDetailsSelectedGameActivity' has a wrong offset!");
static_assert(offsetof(UFortActivityCreatorPageView, AmountOfCreatorLinkEntriesQueried) == 0x000630, "Member 'UFortActivityCreatorPageView::AmountOfCreatorLinkEntriesQueried' has a wrong offset!");
static_assert(offsetof(UFortActivityCreatorPageView, ProcessedCreatorLinkEntries) == 0x000634, "Member 'UFortActivityCreatorPageView::ProcessedCreatorLinkEntries' has a wrong offset!");
static_assert(offsetof(UFortActivityCreatorPageView, AmountOfEntriesQueried) == 0x000638, "Member 'UFortActivityCreatorPageView::AmountOfEntriesQueried' has a wrong offset!");

class UFortActivityDiscoverView final : public UFortActivityBrowserRowView
{
public:
	bool                                          bPlayDetailsAnimationOnScreenOpen;
	uint8                                         Pad_621[0x3];
	float                                         DetailsDisplayUpdateDelay;
	TSubclassOf<class UFortActivatableMovieWidget> MovieWidgetClass;
	class UFortActivityDetailsDisplay*            DetailsDisplay_SelectedActivity;
	class UFortActivityDetailsDisplay*            DetailsDisplay_PromotedActivity;
	class UPanelWidget*                           Panel_VideoSlot;
	class UPanelWidget*                           Panel_PromotedVideoSlot;
	class UFortActivatableMovieWidget*            ActivityMovieWidget;
	class UFortActivatableMovieWidget*            PromotedActivityMovieWidget;
	uint8                                         Pad_660[0x48];
	class UWidgetAnimation*                       BoundKeyArtOutroAnimation;
	uint8                                         Pad_6B0[0x10];

public:
	void CheckUpdateDetailsDelay();
	void HandleMovieWidgetMediaPreEndEvent();
	void HandleMovieWidgetMediaStarted();
	void OnMoviePlayingChanged(const bool bIsPlaying);
	void OnMoviePreEndEvent();
	void OnPlayKeyArtIntro();
	void OnPlayKeyArtOutro();
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnUpdateDetailsDisplay();

	const class UTexture* GetCurrentTexture() const;
	class UWidgetAnimation* GetKeyArtOutroAnimation() const;
	class UFortActivatableMovieWidget* GetMovieWidget() const;
	class UFortActivatableMovieWidget* GetPromotedMovieWidget() const;
	bool IsImageLoading() const;
	bool IsInOutroState() const;
	bool IsShowingPromotedContent() const;
	bool IsShowingSeasonalContent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityDiscoverView">();
	}
	static class UFortActivityDiscoverView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityDiscoverView>();
	}
};
static_assert(alignof(UFortActivityDiscoverView) == 0x000010, "Wrong alignment on UFortActivityDiscoverView");
static_assert(sizeof(UFortActivityDiscoverView) == 0x0006C0, "Wrong size on UFortActivityDiscoverView");
static_assert(offsetof(UFortActivityDiscoverView, bPlayDetailsAnimationOnScreenOpen) == 0x000620, "Member 'UFortActivityDiscoverView::bPlayDetailsAnimationOnScreenOpen' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, DetailsDisplayUpdateDelay) == 0x000624, "Member 'UFortActivityDiscoverView::DetailsDisplayUpdateDelay' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, MovieWidgetClass) == 0x000628, "Member 'UFortActivityDiscoverView::MovieWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, DetailsDisplay_SelectedActivity) == 0x000630, "Member 'UFortActivityDiscoverView::DetailsDisplay_SelectedActivity' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, DetailsDisplay_PromotedActivity) == 0x000638, "Member 'UFortActivityDiscoverView::DetailsDisplay_PromotedActivity' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, Panel_VideoSlot) == 0x000640, "Member 'UFortActivityDiscoverView::Panel_VideoSlot' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, Panel_PromotedVideoSlot) == 0x000648, "Member 'UFortActivityDiscoverView::Panel_PromotedVideoSlot' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, ActivityMovieWidget) == 0x000650, "Member 'UFortActivityDiscoverView::ActivityMovieWidget' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, PromotedActivityMovieWidget) == 0x000658, "Member 'UFortActivityDiscoverView::PromotedActivityMovieWidget' has a wrong offset!");
static_assert(offsetof(UFortActivityDiscoverView, BoundKeyArtOutroAnimation) == 0x0006A8, "Member 'UFortActivityDiscoverView::BoundKeyArtOutroAnimation' has a wrong offset!");

class UFortActivityDiscoverViewV2 final : public UFortActivityBrowserRowView
{
public:
	uint8                                         Pad_620[0x30];

public:
	bool IsShowingPromotedContent() const;
	bool IsShowingSeasonalContent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityDiscoverViewV2">();
	}
	static class UFortActivityDiscoverViewV2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityDiscoverViewV2>();
	}
};
static_assert(alignof(UFortActivityDiscoverViewV2) == 0x000010, "Wrong alignment on UFortActivityDiscoverViewV2");
static_assert(sizeof(UFortActivityDiscoverViewV2) == 0x000650, "Wrong size on UFortActivityDiscoverViewV2");

class UFortActivityFavoriteBrowserView final : public UFortActivityPlayerBrowserView
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityFavoriteBrowserView">();
	}
	static class UFortActivityFavoriteBrowserView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityFavoriteBrowserView>();
	}
};
static_assert(alignof(UFortActivityFavoriteBrowserView) == 0x000010, "Wrong alignment on UFortActivityFavoriteBrowserView");
static_assert(sizeof(UFortActivityFavoriteBrowserView) == 0x0005C0, "Wrong size on UFortActivityFavoriteBrowserView");

class UFortActivityListItemWrapper final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UFortGameActivity*                      GameActivity;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityListItemWrapper">();
	}
	static class UFortActivityListItemWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityListItemWrapper>();
	}
};
static_assert(alignof(UFortActivityListItemWrapper) == 0x000008, "Wrong alignment on UFortActivityListItemWrapper");
static_assert(sizeof(UFortActivityListItemWrapper) == 0x000040, "Wrong size on UFortActivityListItemWrapper");
static_assert(offsetof(UFortActivityListItemWrapper, GameActivity) == 0x000038, "Member 'UFortActivityListItemWrapper::GameActivity' has a wrong offset!");

class UFortActivityListView final : public UListViewBase
{
public:
	uint8                                         Pad_260[0xD8];
	float                                         DirectionalNavigationTimeThreshold;
	EOrientation                                  Orientation;
	uint8                                         Pad_33D[0x3];
	float                                         EntrySpacing;
	bool                                          bCircularNavigationEnabled;
	uint8                                         Pad_345[0x3];
	TMap<EActivityBrowserTileStyle, TSubclassOf<class UFortActivityBrowserTileBase>> TileTypes;
	uint8                                         Pad_398[0x40];

public:
	int32 GetInViewCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityListView">();
	}
	static class UFortActivityListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityListView>();
	}
};
static_assert(alignof(UFortActivityListView) == 0x000008, "Wrong alignment on UFortActivityListView");
static_assert(sizeof(UFortActivityListView) == 0x0003D8, "Wrong size on UFortActivityListView");
static_assert(offsetof(UFortActivityListView, DirectionalNavigationTimeThreshold) == 0x000338, "Member 'UFortActivityListView::DirectionalNavigationTimeThreshold' has a wrong offset!");
static_assert(offsetof(UFortActivityListView, Orientation) == 0x00033C, "Member 'UFortActivityListView::Orientation' has a wrong offset!");
static_assert(offsetof(UFortActivityListView, EntrySpacing) == 0x000340, "Member 'UFortActivityListView::EntrySpacing' has a wrong offset!");
static_assert(offsetof(UFortActivityListView, bCircularNavigationEnabled) == 0x000344, "Member 'UFortActivityListView::bCircularNavigationEnabled' has a wrong offset!");
static_assert(offsetof(UFortActivityListView, TileTypes) == 0x000348, "Member 'UFortActivityListView::TileTypes' has a wrong offset!");

class UFortActivityLobbyTile : public UCommonButtonLegacy
{
public:
	class UCommonTextBlock*                       Text_ActivityName;
	class UFortActivityBrowserTag*                ActivityBrowserTag_EpicOriginal;
	TSubclassOf<class UFortActivityModeSetSelectionModal> ActivityModeSetSelectionModalClass;
	class UFortGameActivityProvider*              ActivityProvider;
	TArray<class UFortGameActivity*>              CachedQueriedActivities;
	uint8                                         Pad_1460[0x40];

public:
	void OnDetailsUpdated();
	void OnHideChildActivityFirstTimeNotification();
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnShowChildActivityChangedNotification(const class FText& DisplayName);
	void OnShowChildActivityFirstTimeNotification();
	void ShowModeSetSelectionModal();
	void TrySendFirstTimeNotification();

	class FText GetChildActivityDisplayName() const;
	bool IsActivityEpicCreated() const;
	bool IsModeSetActivity() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityLobbyTile">();
	}
	static class UFortActivityLobbyTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityLobbyTile>();
	}
};
static_assert(alignof(UFortActivityLobbyTile) == 0x000010, "Wrong alignment on UFortActivityLobbyTile");
static_assert(sizeof(UFortActivityLobbyTile) == 0x0014A0, "Wrong size on UFortActivityLobbyTile");
static_assert(offsetof(UFortActivityLobbyTile, Text_ActivityName) == 0x001430, "Member 'UFortActivityLobbyTile::Text_ActivityName' has a wrong offset!");
static_assert(offsetof(UFortActivityLobbyTile, ActivityBrowserTag_EpicOriginal) == 0x001438, "Member 'UFortActivityLobbyTile::ActivityBrowserTag_EpicOriginal' has a wrong offset!");
static_assert(offsetof(UFortActivityLobbyTile, ActivityModeSetSelectionModalClass) == 0x001440, "Member 'UFortActivityLobbyTile::ActivityModeSetSelectionModalClass' has a wrong offset!");
static_assert(offsetof(UFortActivityLobbyTile, ActivityProvider) == 0x001448, "Member 'UFortActivityLobbyTile::ActivityProvider' has a wrong offset!");
static_assert(offsetof(UFortActivityLobbyTile, CachedQueriedActivities) == 0x001450, "Member 'UFortActivityLobbyTile::CachedQueriedActivities' has a wrong offset!");

class UFortActivityModeSetSelectionModal : public UCommonActivatableWidget
{
public:
	class UCommonTextBlock*                       Text_ActivityName;
	uint8                                         Pad_3B0[0x40];
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_BackBoard;
	class UFortActivityModeSetSelection*          List_SubModeList;
	class UFortActivitySquadFillButton*           Button_ActivitySquadFill;
	class UFortActivityPrivacyButton*             Button_ActivityPrivacy;

public:
	void OnActivityChanged(const class UFortGameActivity* GameActivity, const class FString& StartingSelectedMnemonic);
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnSubModeSelected();
	void OnSubModeSelectionChanged();
	void SaveSelectionAndClose();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityModeSetSelectionModal">();
	}
	static class UFortActivityModeSetSelectionModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityModeSetSelectionModal>();
	}
};
static_assert(alignof(UFortActivityModeSetSelectionModal) == 0x000008, "Wrong alignment on UFortActivityModeSetSelectionModal");
static_assert(sizeof(UFortActivityModeSetSelectionModal) == 0x000418, "Wrong size on UFortActivityModeSetSelectionModal");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Text_ActivityName) == 0x0003A8, "Member 'UFortActivityModeSetSelectionModal::Text_ActivityName' has a wrong offset!");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_Back) == 0x0003F0, "Member 'UFortActivityModeSetSelectionModal::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_BackBoard) == 0x0003F8, "Member 'UFortActivityModeSetSelectionModal::Button_BackBoard' has a wrong offset!");
static_assert(offsetof(UFortActivityModeSetSelectionModal, List_SubModeList) == 0x000400, "Member 'UFortActivityModeSetSelectionModal::List_SubModeList' has a wrong offset!");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_ActivitySquadFill) == 0x000408, "Member 'UFortActivityModeSetSelectionModal::Button_ActivitySquadFill' has a wrong offset!");
static_assert(offsetof(UFortActivityModeSetSelectionModal, Button_ActivityPrivacy) == 0x000410, "Member 'UFortActivityModeSetSelectionModal::Button_ActivityPrivacy' has a wrong offset!");

class UFortActivityPlayerBrowserTile final : public UFortActivityTileViewTileBase
{
public:
	class UFortActivityTileDetailsDisplay*        Display_TileDetails;
	class UCommonTextBlock*                       Text_LastPlayedDate;
	uint8                                         Pad_1480[0x40];

public:
	void HandleActivitySelected();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityPlayerBrowserTile">();
	}
	static class UFortActivityPlayerBrowserTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityPlayerBrowserTile>();
	}
};
static_assert(alignof(UFortActivityPlayerBrowserTile) == 0x000010, "Wrong alignment on UFortActivityPlayerBrowserTile");
static_assert(sizeof(UFortActivityPlayerBrowserTile) == 0x0014C0, "Wrong size on UFortActivityPlayerBrowserTile");
static_assert(offsetof(UFortActivityPlayerBrowserTile, Display_TileDetails) == 0x001470, "Member 'UFortActivityPlayerBrowserTile::Display_TileDetails' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerBrowserTile, Text_LastPlayedDate) == 0x001478, "Member 'UFortActivityPlayerBrowserTile::Text_LastPlayedDate' has a wrong offset!");

class UFortActivityPlayerView final : public UFortActivityBrowserView
{
public:
	uint8                                         Pad_488[0x8];
	class FName                                   TabNameID;
	uint8                                         Pad_494[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	TSubclassOf<class UCommonButtonBase>          TabButtonClass;
	class UFortTabListWidgetBase_Legacy*          TabList_PlayerViewTabs;
	class UCommonActivatableWidgetSwitcher*       Switcher_PlayerBrowserViews;
	class UFortActivityPlayerBrowserView*         BrowserView_Favorites;
	class UFortActivityPlayerBrowserView*         BrowserView_History;
	uint8                                         Pad_5B8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityPlayerView">();
	}
	static class UFortActivityPlayerView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityPlayerView>();
	}
};
static_assert(alignof(UFortActivityPlayerView) == 0x000010, "Wrong alignment on UFortActivityPlayerView");
static_assert(sizeof(UFortActivityPlayerView) == 0x0005D0, "Wrong size on UFortActivityPlayerView");
static_assert(offsetof(UFortActivityPlayerView, TabNameID) == 0x000490, "Member 'UFortActivityPlayerView::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerView, TabButtonLabelInfo) == 0x0004A0, "Member 'UFortActivityPlayerView::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerView, TabButtonClass) == 0x000590, "Member 'UFortActivityPlayerView::TabButtonClass' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerView, TabList_PlayerViewTabs) == 0x000598, "Member 'UFortActivityPlayerView::TabList_PlayerViewTabs' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerView, Switcher_PlayerBrowserViews) == 0x0005A0, "Member 'UFortActivityPlayerView::Switcher_PlayerBrowserViews' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerView, BrowserView_Favorites) == 0x0005A8, "Member 'UFortActivityPlayerView::BrowserView_Favorites' has a wrong offset!");
static_assert(offsetof(UFortActivityPlayerView, BrowserView_History) == 0x0005B0, "Member 'UFortActivityPlayerView::BrowserView_History' has a wrong offset!");

class UFortActivityPlayerViewTabButton final : public UFortTabButton
{
public:
	class UCommonTextBlock*                       Text_Count;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityPlayerViewTabButton">();
	}
	static class UFortActivityPlayerViewTabButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityPlayerViewTabButton>();
	}
};
static_assert(alignof(UFortActivityPlayerViewTabButton) == 0x000010, "Wrong alignment on UFortActivityPlayerViewTabButton");
static_assert(sizeof(UFortActivityPlayerViewTabButton) == 0x001410, "Wrong size on UFortActivityPlayerViewTabButton");
static_assert(offsetof(UFortActivityPlayerViewTabButton, Text_Count) == 0x001408, "Member 'UFortActivityPlayerViewTabButton::Text_Count' has a wrong offset!");

class UFortActivitySearchView final : public UFortActivityBrowserView
{
public:
	uint8                                         Pad_488[0x8];
	class FName                                   TabNameID;
	uint8                                         Pad_494[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	class UEditableText*                          EditableText_IslandLink;
	uint8                                         Pad_598[0x58];

public:
	void HandleTextChanged(const class FText& Text);
	void HandleTextCommitted(const class FText& InText, ETextCommit CommitInfo);
	void OnActivityClear();
	void OnActivityValidated(const EFortActivityValidationResult ValidateResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivitySearchView">();
	}
	static class UFortActivitySearchView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivitySearchView>();
	}
};
static_assert(alignof(UFortActivitySearchView) == 0x000010, "Wrong alignment on UFortActivitySearchView");
static_assert(sizeof(UFortActivitySearchView) == 0x0005F0, "Wrong size on UFortActivitySearchView");
static_assert(offsetof(UFortActivitySearchView, TabNameID) == 0x000490, "Member 'UFortActivitySearchView::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortActivitySearchView, TabButtonLabelInfo) == 0x0004A0, "Member 'UFortActivitySearchView::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortActivitySearchView, EditableText_IslandLink) == 0x000590, "Member 'UFortActivitySearchView::EditableText_IslandLink' has a wrong offset!");

class UFortActivitySeasonalBrowserView final : public UFortActivityPlayerBrowserView
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivitySeasonalBrowserView">();
	}
	static class UFortActivitySeasonalBrowserView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivitySeasonalBrowserView>();
	}
};
static_assert(alignof(UFortActivitySeasonalBrowserView) == 0x000010, "Wrong alignment on UFortActivitySeasonalBrowserView");
static_assert(sizeof(UFortActivitySeasonalBrowserView) == 0x0005C0, "Wrong size on UFortActivitySeasonalBrowserView");

class UFortActivityTileDetailsDisplay final : public UCommonButtonBase
{
public:
	TMulticastInlineDelegate<void()>              OnActivitySelectedDelegate;
	TMulticastInlineDelegate<void()>              OnActivityUnSelectedDelegate;
	bool                                          bShowDetailsButton;
	uint8                                         Pad_1401[0x7];
	class UCommonTextBlock*                       Text_ActivityName;
	class UCommonTextBlock*                       Text_PlayerCount;
	class UCommonButtonBase*                      Button_Favorite;
	class UCommonButtonBase*                      Button_Details;
	class UFortActivityBrowserTag*                ActivityBrowserTag_EpicOriginal;
	class UTextBlock*                             Text_DebugId;
	class UFortSqueegeeLabelWidget*               SqueegeeLabel;
	class UFortActivityVideoCycle*                ActivityVideoCycleWidget;
	TMap<uint32, ECreativeLinkPreviewSize>        MinColumnSizeToImageSize;
	uint8                                         MaxMobileColumnSize;
	uint8                                         MinMobileColumnSize;
	bool                                          bIsVideoEnabledForDynamicTileSizingV2;
	uint8                                         Pad_149B[0x2D];
	class UTexture*                               ActivityTexture;
	uint8                                         Pad_14D0[0x50];

public:
	void OnDetailsUpdated();
	void OnIsFavoriteChanged(const bool bIsFavorite);
	void OnLocalPlayerDemoted();
	void OnLocalPlayerPromotedToLeader();
	void OnLogoImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnPartySizeChanged(const int32 PartySize);
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnRequiresPurchaseChanged(const bool bRequiresPurchase);
	void OnSocialUsersPlayingChanged(int32 NumPlaying);
	void OnTileActiveSet(const bool bIsTileActive);
	void OnUpdateColumnSize(int32 NewColumnSize);
	void ShouldPlayTileVideo(bool* bOutResult);
	void StartTileVideo();
	void StopTileVideo();
	void UpdateCCU(const int32 CCUCount);

	bool DoesActivityRequirePurchase() const;
	EFortInvalidActivityReason GetInvalidActivityReason() const;
	bool IsActivityEpicCreated() const;
	bool IsActivityFavorited() const;
	bool IsModeSetActivity() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityTileDetailsDisplay">();
	}
	static class UFortActivityTileDetailsDisplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityTileDetailsDisplay>();
	}
};
static_assert(alignof(UFortActivityTileDetailsDisplay) == 0x000010, "Wrong alignment on UFortActivityTileDetailsDisplay");
static_assert(sizeof(UFortActivityTileDetailsDisplay) == 0x001520, "Wrong size on UFortActivityTileDetailsDisplay");
static_assert(offsetof(UFortActivityTileDetailsDisplay, OnActivitySelectedDelegate) == 0x0013E0, "Member 'UFortActivityTileDetailsDisplay::OnActivitySelectedDelegate' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, OnActivityUnSelectedDelegate) == 0x0013F0, "Member 'UFortActivityTileDetailsDisplay::OnActivityUnSelectedDelegate' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, bShowDetailsButton) == 0x001400, "Member 'UFortActivityTileDetailsDisplay::bShowDetailsButton' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Text_ActivityName) == 0x001408, "Member 'UFortActivityTileDetailsDisplay::Text_ActivityName' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Text_PlayerCount) == 0x001410, "Member 'UFortActivityTileDetailsDisplay::Text_PlayerCount' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Button_Favorite) == 0x001418, "Member 'UFortActivityTileDetailsDisplay::Button_Favorite' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Button_Details) == 0x001420, "Member 'UFortActivityTileDetailsDisplay::Button_Details' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityBrowserTag_EpicOriginal) == 0x001428, "Member 'UFortActivityTileDetailsDisplay::ActivityBrowserTag_EpicOriginal' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, Text_DebugId) == 0x001430, "Member 'UFortActivityTileDetailsDisplay::Text_DebugId' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, SqueegeeLabel) == 0x001438, "Member 'UFortActivityTileDetailsDisplay::SqueegeeLabel' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityVideoCycleWidget) == 0x001440, "Member 'UFortActivityTileDetailsDisplay::ActivityVideoCycleWidget' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, MinColumnSizeToImageSize) == 0x001448, "Member 'UFortActivityTileDetailsDisplay::MinColumnSizeToImageSize' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, MaxMobileColumnSize) == 0x001498, "Member 'UFortActivityTileDetailsDisplay::MaxMobileColumnSize' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, MinMobileColumnSize) == 0x001499, "Member 'UFortActivityTileDetailsDisplay::MinMobileColumnSize' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, bIsVideoEnabledForDynamicTileSizingV2) == 0x00149A, "Member 'UFortActivityTileDetailsDisplay::bIsVideoEnabledForDynamicTileSizingV2' has a wrong offset!");
static_assert(offsetof(UFortActivityTileDetailsDisplay, ActivityTexture) == 0x0014C8, "Member 'UFortActivityTileDetailsDisplay::ActivityTexture' has a wrong offset!");

class UFortActivityTileView final : public UCommonTileView
{
public:
	void SetListenForMouseWheelInput(bool bListenForInput);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityTileView">();
	}
	static class UFortActivityTileView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityTileView>();
	}
};
static_assert(alignof(UFortActivityTileView) == 0x000010, "Wrong alignment on UFortActivityTileView");
static_assert(sizeof(UFortActivityTileView) == 0x000BB0, "Wrong size on UFortActivityTileView");

class UActivityLibraryComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActivityLibraryComponent">();
	}
	static class UActivityLibraryComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivityLibraryComponent>();
	}
};
static_assert(alignof(UActivityLibraryComponent) == 0x000008, "Wrong alignment on UActivityLibraryComponent");
static_assert(sizeof(UActivityLibraryComponent) == 0x0000B0, "Wrong size on UActivityLibraryComponent");

class UFortActivityBrowserContext final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortActivityBrowserContext">();
	}
	static class UFortActivityBrowserContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortActivityBrowserContext>();
	}
};
static_assert(alignof(UFortActivityBrowserContext) == 0x000008, "Wrong alignment on UFortActivityBrowserContext");
static_assert(sizeof(UFortActivityBrowserContext) == 0x000048, "Wrong size on UFortActivityBrowserContext");

class UOverrideMatchmakingUIComponent : public UActorComponent
{
public:
	struct FMatchmakingUIOverride                 MatchmakingUIOverride;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OverrideMatchmakingUIComponent">();
	}
	static class UOverrideMatchmakingUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOverrideMatchmakingUIComponent>();
	}
};
static_assert(alignof(UOverrideMatchmakingUIComponent) == 0x000008, "Wrong alignment on UOverrideMatchmakingUIComponent");
static_assert(sizeof(UOverrideMatchmakingUIComponent) == 0x000118, "Wrong size on UOverrideMatchmakingUIComponent");
static_assert(offsetof(UOverrideMatchmakingUIComponent, MatchmakingUIOverride) == 0x0000A0, "Member 'UOverrideMatchmakingUIComponent::MatchmakingUIOverride' has a wrong offset!");

}
