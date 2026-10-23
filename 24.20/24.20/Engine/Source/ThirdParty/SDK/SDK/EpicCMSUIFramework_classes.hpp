#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "EpicCMSUIFramework_structs.hpp"
#include "UMG_classes.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UEpicCMSImage final : public UCommonLazyImage
{
public:
	TMulticastInlineDelegate<void()>              OnImageLoadingComplete;
	bool                                          bMatchImageSize;
	uint8                                         Pad_391[0xF];
	struct FSlateBrush                            LoadingFailFallback;
	class UTexture2D*                             ExternalMedia;
	bool                                          bDownloadingExternalMedia;
	uint8                                         Pad_469[0x7];

public:
	void SetMediaURL(const class FString& MediaUrl);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSImage">();
	}
	static class UEpicCMSImage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSImage>();
	}
};
static_assert(alignof(UEpicCMSImage) == 0x000010, "Wrong alignment on UEpicCMSImage");
static_assert(sizeof(UEpicCMSImage) == 0x000470, "Wrong size on UEpicCMSImage");
static_assert(offsetof(UEpicCMSImage, OnImageLoadingComplete) == 0x000380, "Member 'UEpicCMSImage::OnImageLoadingComplete' has a wrong offset!");
static_assert(offsetof(UEpicCMSImage, bMatchImageSize) == 0x000390, "Member 'UEpicCMSImage::bMatchImageSize' has a wrong offset!");
static_assert(offsetof(UEpicCMSImage, LoadingFailFallback) == 0x0003A0, "Member 'UEpicCMSImage::LoadingFailFallback' has a wrong offset!");
static_assert(offsetof(UEpicCMSImage, ExternalMedia) == 0x000460, "Member 'UEpicCMSImage::ExternalMedia' has a wrong offset!");
static_assert(offsetof(UEpicCMSImage, bDownloadingExternalMedia) == 0x000468, "Member 'UEpicCMSImage::bDownloadingExternalMedia' has a wrong offset!");

class UEpicCMSLayoutBase final : public UUserWidget
{
public:
	TArray<struct FSlotDescription>               CarouselSlotDescriptions;
	TSubclassOf<class UEpicCMSTileCarousel>       CarouselClass;
	uint8                                         Pad_280[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSLayoutBase">();
	}
	static class UEpicCMSLayoutBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSLayoutBase>();
	}
};
static_assert(alignof(UEpicCMSLayoutBase) == 0x000008, "Wrong alignment on UEpicCMSLayoutBase");
static_assert(sizeof(UEpicCMSLayoutBase) == 0x0002D0, "Wrong size on UEpicCMSLayoutBase");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselSlotDescriptions) == 0x000268, "Member 'UEpicCMSLayoutBase::CarouselSlotDescriptions' has a wrong offset!");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselClass) == 0x000278, "Member 'UEpicCMSLayoutBase::CarouselClass' has a wrong offset!");

class UEpicCMSManager final : public UObject
{
public:
	uint8                                         Pad_28[0x88];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSManager">();
	}
	static class UEpicCMSManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSManager>();
	}
};
static_assert(alignof(UEpicCMSManager) == 0x000008, "Wrong alignment on UEpicCMSManager");
static_assert(sizeof(UEpicCMSManager) == 0x0000B0, "Wrong size on UEpicCMSManager");

class UEpicCMSScreenBase final : public UCommonActivatablePanelLegacy
{
public:
	class FString                                 TileSetFieldName;
	TSoftObjectPtr<class UDataTable>              TileTypeToTileClassDataTable;
	TSoftClassPtr<class UClass>                   LayoutErrorClass;
	TSoftObjectPtr<class UDataTable>              LayoutTypeToLayoutClassDataTable;
	uint8                                         Pad_568[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSScreenBase">();
	}
	static class UEpicCMSScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSScreenBase>();
	}
};
static_assert(alignof(UEpicCMSScreenBase) == 0x000008, "Wrong alignment on UEpicCMSScreenBase");
static_assert(sizeof(UEpicCMSScreenBase) == 0x000570, "Wrong size on UEpicCMSScreenBase");
static_assert(offsetof(UEpicCMSScreenBase, TileSetFieldName) == 0x0004E0, "Member 'UEpicCMSScreenBase::TileSetFieldName' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, TileTypeToTileClassDataTable) == 0x0004F0, "Member 'UEpicCMSScreenBase::TileTypeToTileClassDataTable' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, LayoutErrorClass) == 0x000518, "Member 'UEpicCMSScreenBase::LayoutErrorClass' has a wrong offset!");
static_assert(offsetof(UEpicCMSScreenBase, LayoutTypeToLayoutClassDataTable) == 0x000540, "Member 'UEpicCMSScreenBase::LayoutTypeToLayoutClassDataTable' has a wrong offset!");

class UEpicCMSSimpleMessage final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       TitleText;
	class UCommonTextBlock*                       BodyText;
	class UEpicCMSImage*                          PrimaryImage;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSSimpleMessage">();
	}
	static class UEpicCMSSimpleMessage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSSimpleMessage>();
	}
};
static_assert(alignof(UEpicCMSSimpleMessage) == 0x000008, "Wrong alignment on UEpicCMSSimpleMessage");
static_assert(sizeof(UEpicCMSSimpleMessage) == 0x0002A8, "Wrong size on UEpicCMSSimpleMessage");
static_assert(offsetof(UEpicCMSSimpleMessage, TitleText) == 0x000290, "Member 'UEpicCMSSimpleMessage::TitleText' has a wrong offset!");
static_assert(offsetof(UEpicCMSSimpleMessage, BodyText) == 0x000298, "Member 'UEpicCMSSimpleMessage::BodyText' has a wrong offset!");
static_assert(offsetof(UEpicCMSSimpleMessage, PrimaryImage) == 0x0002A0, "Member 'UEpicCMSSimpleMessage::PrimaryImage' has a wrong offset!");

class UEpicCMSTileBase final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	TSubclassOf<class UCommonTextStyle>           DefaultTitleTextStyle;
	TSubclassOf<class UCommonTextStyle>           FeaturedTitleTextStyle;
	class FText                                   Title;
	class FString                                 Link;
	bool                                          bDownloadingExternalMedia;
	bool                                          bRefreshingMcpCatalog;
	uint8                                         Pad_1472[0x6];
	class UTexture2D*                             ExternalMedia;
	uint8                                         Pad_1480[0x18];
	class UCommonLazyImage*                       LazyImage_Icon;
	class UCommonTextBlock*                       TitleTextBlock;
	class UCommonTextBlock*                       SubtitleTextBlock;
	class UCommonTextBlock*                       EyebrowTextBlock;
	uint8                                         Pad_14B8[0x88];

public:
	void Launch();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileBase">();
	}
	static class UEpicCMSTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileBase>();
	}
};
static_assert(alignof(UEpicCMSTileBase) == 0x000010, "Wrong alignment on UEpicCMSTileBase");
static_assert(sizeof(UEpicCMSTileBase) == 0x001540, "Wrong size on UEpicCMSTileBase");
static_assert(offsetof(UEpicCMSTileBase, DefaultTitleTextStyle) == 0x001438, "Member 'UEpicCMSTileBase::DefaultTitleTextStyle' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, FeaturedTitleTextStyle) == 0x001440, "Member 'UEpicCMSTileBase::FeaturedTitleTextStyle' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, Title) == 0x001448, "Member 'UEpicCMSTileBase::Title' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, Link) == 0x001460, "Member 'UEpicCMSTileBase::Link' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, bDownloadingExternalMedia) == 0x001470, "Member 'UEpicCMSTileBase::bDownloadingExternalMedia' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, bRefreshingMcpCatalog) == 0x001471, "Member 'UEpicCMSTileBase::bRefreshingMcpCatalog' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, ExternalMedia) == 0x001478, "Member 'UEpicCMSTileBase::ExternalMedia' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, LazyImage_Icon) == 0x001498, "Member 'UEpicCMSTileBase::LazyImage_Icon' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, TitleTextBlock) == 0x0014A0, "Member 'UEpicCMSTileBase::TitleTextBlock' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, SubtitleTextBlock) == 0x0014A8, "Member 'UEpicCMSTileBase::SubtitleTextBlock' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileBase, EyebrowTextBlock) == 0x0014B0, "Member 'UEpicCMSTileBase::EyebrowTextBlock' has a wrong offset!");

class UEpicCMSTileCarousel final : public UUserWidget
{
public:
	struct FSlateSound                            PreviousButtonSound;
	struct FSlateSound                            NextButtonSound;
	class UCommonWidgetCarousel*                  Carousel;
	class UWidget*                                NextPageButton;
	class UWidget*                                PreviousPageButton;
	bool                                          bShouldShowNavigationOnlyOnHover;
	bool                                          bInputActionsForPaging;
	bool                                          bIsShowingNavigation;
	uint8                                         Pad_2B3[0x5];

public:
	void AddTilePage(class UWidget* TilePageWidget);
	void BeginAutoScrolling();
	void HandleTilePageAdded(class UWidget* TileWidget);
	void NavigationVisibilityChanged(bool bShowNavigation);
	void NextPage();
	void PreviousPage();
	void SetCurrentPageByIndex(const int32 PageIndex);

	int32 GetCurrentPageIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicCMSTileCarousel">();
	}
	static class UEpicCMSTileCarousel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicCMSTileCarousel>();
	}
};
static_assert(alignof(UEpicCMSTileCarousel) == 0x000008, "Wrong alignment on UEpicCMSTileCarousel");
static_assert(sizeof(UEpicCMSTileCarousel) == 0x0002B8, "Wrong size on UEpicCMSTileCarousel");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousButtonSound) == 0x000268, "Member 'UEpicCMSTileCarousel::PreviousButtonSound' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, NextButtonSound) == 0x000280, "Member 'UEpicCMSTileCarousel::NextButtonSound' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, Carousel) == 0x000298, "Member 'UEpicCMSTileCarousel::Carousel' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, NextPageButton) == 0x0002A0, "Member 'UEpicCMSTileCarousel::NextPageButton' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousPageButton) == 0x0002A8, "Member 'UEpicCMSTileCarousel::PreviousPageButton' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bShouldShowNavigationOnlyOnHover) == 0x0002B0, "Member 'UEpicCMSTileCarousel::bShouldShowNavigationOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bInputActionsForPaging) == 0x0002B1, "Member 'UEpicCMSTileCarousel::bInputActionsForPaging' has a wrong offset!");
static_assert(offsetof(UEpicCMSTileCarousel, bIsShowingNavigation) == 0x0002B2, "Member 'UEpicCMSTileCarousel::bIsShowingNavigation' has a wrong offset!");

}
