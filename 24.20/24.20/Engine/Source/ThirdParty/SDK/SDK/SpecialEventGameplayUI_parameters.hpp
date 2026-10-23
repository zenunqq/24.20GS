#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct SpecialEventCursorWidget_BP_OnCursorModeChanged final
{
public:
	class USpecialEventCursorPawnComponent*       InCursorPawnComponent;
	struct FGameplayTag                           NewCursorModeTag;
	struct FGameplayTag                           OldCursorModeTag;
};
static_assert(alignof(SpecialEventCursorWidget_BP_OnCursorModeChanged) == 0x000008, "Wrong alignment on SpecialEventCursorWidget_BP_OnCursorModeChanged");
static_assert(sizeof(SpecialEventCursorWidget_BP_OnCursorModeChanged) == 0x000010, "Wrong size on SpecialEventCursorWidget_BP_OnCursorModeChanged");
static_assert(offsetof(SpecialEventCursorWidget_BP_OnCursorModeChanged, InCursorPawnComponent) == 0x000000, "Member 'SpecialEventCursorWidget_BP_OnCursorModeChanged::InCursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_BP_OnCursorModeChanged, NewCursorModeTag) == 0x000008, "Member 'SpecialEventCursorWidget_BP_OnCursorModeChanged::NewCursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_BP_OnCursorModeChanged, OldCursorModeTag) == 0x00000C, "Member 'SpecialEventCursorWidget_BP_OnCursorModeChanged::OldCursorModeTag' has a wrong offset!");

struct SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged final
{
public:
	class USpecialEventCursorPawnComponent*       InCursorPawnComponent;
	struct FGameplayTag                           CursorModeTag;
	bool                                          bShouldBeVisible;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged) == 0x000008, "Wrong alignment on SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged");
static_assert(sizeof(SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged) == 0x000010, "Wrong size on SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged");
static_assert(offsetof(SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged, InCursorPawnComponent) == 0x000000, "Member 'SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged::InCursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged, CursorModeTag) == 0x000008, "Member 'SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged, bShouldBeVisible) == 0x00000C, "Member 'SpecialEventCursorWidget_BP_OnDesiredVisibilityChanged::bShouldBeVisible' has a wrong offset!");

struct SpecialEventCursorWidget_OnCursorModeChanged final
{
public:
	class USpecialEventCursorPawnComponent*       InCursorPawnComponent;
	struct FGameplayTag                           NewCursorModeTag;
	struct FGameplayTag                           OldCursorModeTag;
};
static_assert(alignof(SpecialEventCursorWidget_OnCursorModeChanged) == 0x000008, "Wrong alignment on SpecialEventCursorWidget_OnCursorModeChanged");
static_assert(sizeof(SpecialEventCursorWidget_OnCursorModeChanged) == 0x000010, "Wrong size on SpecialEventCursorWidget_OnCursorModeChanged");
static_assert(offsetof(SpecialEventCursorWidget_OnCursorModeChanged, InCursorPawnComponent) == 0x000000, "Member 'SpecialEventCursorWidget_OnCursorModeChanged::InCursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_OnCursorModeChanged, NewCursorModeTag) == 0x000008, "Member 'SpecialEventCursorWidget_OnCursorModeChanged::NewCursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_OnCursorModeChanged, OldCursorModeTag) == 0x00000C, "Member 'SpecialEventCursorWidget_OnCursorModeChanged::OldCursorModeTag' has a wrong offset!");

struct SpecialEventCursorWidget_OnDesiredVisibilityChanged final
{
public:
	class USpecialEventCursorPawnComponent*       InCursorPawnComponent;
	struct FGameplayTag                           CursorModeTag;
	bool                                          bShouldBeVisible;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(SpecialEventCursorWidget_OnDesiredVisibilityChanged) == 0x000008, "Wrong alignment on SpecialEventCursorWidget_OnDesiredVisibilityChanged");
static_assert(sizeof(SpecialEventCursorWidget_OnDesiredVisibilityChanged) == 0x000010, "Wrong size on SpecialEventCursorWidget_OnDesiredVisibilityChanged");
static_assert(offsetof(SpecialEventCursorWidget_OnDesiredVisibilityChanged, InCursorPawnComponent) == 0x000000, "Member 'SpecialEventCursorWidget_OnDesiredVisibilityChanged::InCursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_OnDesiredVisibilityChanged, CursorModeTag) == 0x000008, "Member 'SpecialEventCursorWidget_OnDesiredVisibilityChanged::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_OnDesiredVisibilityChanged, bShouldBeVisible) == 0x00000C, "Member 'SpecialEventCursorWidget_OnDesiredVisibilityChanged::bShouldBeVisible' has a wrong offset!");

struct SpecialEventCursorWidget_OnViewportLocationChanged final
{
public:
	class USpecialEventCursorPawnComponent*       InCursorPawnComponent;
	struct FVector2D                              NormalizedLocation;
	struct FVector2D                              ViewportLocation;
};
static_assert(alignof(SpecialEventCursorWidget_OnViewportLocationChanged) == 0x000008, "Wrong alignment on SpecialEventCursorWidget_OnViewportLocationChanged");
static_assert(sizeof(SpecialEventCursorWidget_OnViewportLocationChanged) == 0x000028, "Wrong size on SpecialEventCursorWidget_OnViewportLocationChanged");
static_assert(offsetof(SpecialEventCursorWidget_OnViewportLocationChanged, InCursorPawnComponent) == 0x000000, "Member 'SpecialEventCursorWidget_OnViewportLocationChanged::InCursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_OnViewportLocationChanged, NormalizedLocation) == 0x000008, "Member 'SpecialEventCursorWidget_OnViewportLocationChanged::NormalizedLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWidget_OnViewportLocationChanged, ViewportLocation) == 0x000018, "Member 'SpecialEventCursorWidget_OnViewportLocationChanged::ViewportLocation' has a wrong offset!");

struct SpecialEventCursorWidget_GetCursorModeTags final
{
public:
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(SpecialEventCursorWidget_GetCursorModeTags) == 0x000008, "Wrong alignment on SpecialEventCursorWidget_GetCursorModeTags");
static_assert(sizeof(SpecialEventCursorWidget_GetCursorModeTags) == 0x000020, "Wrong size on SpecialEventCursorWidget_GetCursorModeTags");
static_assert(offsetof(SpecialEventCursorWidget_GetCursorModeTags, ReturnValue) == 0x000000, "Member 'SpecialEventCursorWidget_GetCursorModeTags::ReturnValue' has a wrong offset!");

struct SpecialEventPlayerInfoWidget_GetRepresentedPlayerState final
{
public:
	class AFortPlayerStateAthena*                 ReturnValue;
};
static_assert(alignof(SpecialEventPlayerInfoWidget_GetRepresentedPlayerState) == 0x000008, "Wrong alignment on SpecialEventPlayerInfoWidget_GetRepresentedPlayerState");
static_assert(sizeof(SpecialEventPlayerInfoWidget_GetRepresentedPlayerState) == 0x000008, "Wrong size on SpecialEventPlayerInfoWidget_GetRepresentedPlayerState");
static_assert(offsetof(SpecialEventPlayerInfoWidget_GetRepresentedPlayerState, ReturnValue) == 0x000000, "Member 'SpecialEventPlayerInfoWidget_GetRepresentedPlayerState::ReturnValue' has a wrong offset!");

struct SpecialEventUILibrary_HideFrontEndStateWidget final
{
public:
	const class UObject*                          WorldContextObject;
	bool                                          bNewlyHidden;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SpecialEventUILibrary_HideFrontEndStateWidget) == 0x000008, "Wrong alignment on SpecialEventUILibrary_HideFrontEndStateWidget");
static_assert(sizeof(SpecialEventUILibrary_HideFrontEndStateWidget) == 0x000010, "Wrong size on SpecialEventUILibrary_HideFrontEndStateWidget");
static_assert(offsetof(SpecialEventUILibrary_HideFrontEndStateWidget, WorldContextObject) == 0x000000, "Member 'SpecialEventUILibrary_HideFrontEndStateWidget::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventUILibrary_HideFrontEndStateWidget, bNewlyHidden) == 0x000008, "Member 'SpecialEventUILibrary_HideFrontEndStateWidget::bNewlyHidden' has a wrong offset!");

}
