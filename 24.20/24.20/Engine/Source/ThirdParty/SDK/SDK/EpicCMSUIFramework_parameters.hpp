#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EpicCMSImage_SetMediaURL final
{
public:
	class FString                                 MediaUrl;
};
static_assert(alignof(EpicCMSImage_SetMediaURL) == 0x000008, "Wrong alignment on EpicCMSImage_SetMediaURL");
static_assert(sizeof(EpicCMSImage_SetMediaURL) == 0x000010, "Wrong size on EpicCMSImage_SetMediaURL");
static_assert(offsetof(EpicCMSImage_SetMediaURL, MediaUrl) == 0x000000, "Member 'EpicCMSImage_SetMediaURL::MediaUrl' has a wrong offset!");

struct EpicCMSTileCarousel_AddTilePage final
{
public:
	class UWidget*                                TilePageWidget;
};
static_assert(alignof(EpicCMSTileCarousel_AddTilePage) == 0x000008, "Wrong alignment on EpicCMSTileCarousel_AddTilePage");
static_assert(sizeof(EpicCMSTileCarousel_AddTilePage) == 0x000008, "Wrong size on EpicCMSTileCarousel_AddTilePage");
static_assert(offsetof(EpicCMSTileCarousel_AddTilePage, TilePageWidget) == 0x000000, "Member 'EpicCMSTileCarousel_AddTilePage::TilePageWidget' has a wrong offset!");

struct EpicCMSTileCarousel_HandleTilePageAdded final
{
public:
	class UWidget*                                TileWidget;
};
static_assert(alignof(EpicCMSTileCarousel_HandleTilePageAdded) == 0x000008, "Wrong alignment on EpicCMSTileCarousel_HandleTilePageAdded");
static_assert(sizeof(EpicCMSTileCarousel_HandleTilePageAdded) == 0x000008, "Wrong size on EpicCMSTileCarousel_HandleTilePageAdded");
static_assert(offsetof(EpicCMSTileCarousel_HandleTilePageAdded, TileWidget) == 0x000000, "Member 'EpicCMSTileCarousel_HandleTilePageAdded::TileWidget' has a wrong offset!");

struct EpicCMSTileCarousel_NavigationVisibilityChanged final
{
public:
	bool                                          bShowNavigation;
};
static_assert(alignof(EpicCMSTileCarousel_NavigationVisibilityChanged) == 0x000001, "Wrong alignment on EpicCMSTileCarousel_NavigationVisibilityChanged");
static_assert(sizeof(EpicCMSTileCarousel_NavigationVisibilityChanged) == 0x000001, "Wrong size on EpicCMSTileCarousel_NavigationVisibilityChanged");
static_assert(offsetof(EpicCMSTileCarousel_NavigationVisibilityChanged, bShowNavigation) == 0x000000, "Member 'EpicCMSTileCarousel_NavigationVisibilityChanged::bShowNavigation' has a wrong offset!");

struct EpicCMSTileCarousel_SetCurrentPageByIndex final
{
public:
	int32                                         PageIndex;
};
static_assert(alignof(EpicCMSTileCarousel_SetCurrentPageByIndex) == 0x000004, "Wrong alignment on EpicCMSTileCarousel_SetCurrentPageByIndex");
static_assert(sizeof(EpicCMSTileCarousel_SetCurrentPageByIndex) == 0x000004, "Wrong size on EpicCMSTileCarousel_SetCurrentPageByIndex");
static_assert(offsetof(EpicCMSTileCarousel_SetCurrentPageByIndex, PageIndex) == 0x000000, "Member 'EpicCMSTileCarousel_SetCurrentPageByIndex::PageIndex' has a wrong offset!");

struct EpicCMSTileCarousel_GetCurrentPageIndex final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(EpicCMSTileCarousel_GetCurrentPageIndex) == 0x000004, "Wrong alignment on EpicCMSTileCarousel_GetCurrentPageIndex");
static_assert(sizeof(EpicCMSTileCarousel_GetCurrentPageIndex) == 0x000004, "Wrong size on EpicCMSTileCarousel_GetCurrentPageIndex");
static_assert(offsetof(EpicCMSTileCarousel_GetCurrentPageIndex, ReturnValue) == 0x000000, "Member 'EpicCMSTileCarousel_GetCurrentPageIndex::ReturnValue' has a wrong offset!");

}
