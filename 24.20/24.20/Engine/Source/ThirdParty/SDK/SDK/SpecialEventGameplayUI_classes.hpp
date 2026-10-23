#pragma once

#include "Basic.hpp"

#include "SpecialEventGameplayUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UFortGameplayCinematicHostWidget final : public UFortHUDElementWidget
{
public:
	class FName                                   IntroWidgetEntryName;
	uint8                                         Pad_2D4[0x4];
	TArray<struct FCinematicWidgetData>           WidgetEntries;
	class UAthenaLoadingScreenItemDefinition*     LoadingScreenDefinition;
	uint8                                         Pad_2F0[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayCinematicHostWidget">();
	}
	static class UFortGameplayCinematicHostWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayCinematicHostWidget>();
	}
};
static_assert(alignof(UFortGameplayCinematicHostWidget) == 0x000008, "Wrong alignment on UFortGameplayCinematicHostWidget");
static_assert(sizeof(UFortGameplayCinematicHostWidget) == 0x000308, "Wrong size on UFortGameplayCinematicHostWidget");
static_assert(offsetof(UFortGameplayCinematicHostWidget, IntroWidgetEntryName) == 0x0002D0, "Member 'UFortGameplayCinematicHostWidget::IntroWidgetEntryName' has a wrong offset!");
static_assert(offsetof(UFortGameplayCinematicHostWidget, WidgetEntries) == 0x0002D8, "Member 'UFortGameplayCinematicHostWidget::WidgetEntries' has a wrong offset!");
static_assert(offsetof(UFortGameplayCinematicHostWidget, LoadingScreenDefinition) == 0x0002E8, "Member 'UFortGameplayCinematicHostWidget::LoadingScreenDefinition' has a wrong offset!");

class UFortGameplayCinematicWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	bool                                          bSkipCinematics;
	uint8                                         Pad_3B1[0x17];

public:
	void OnCinematicFinished();
	void OnStartCinematic();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayCinematicWidget">();
	}
	static class UFortGameplayCinematicWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayCinematicWidget>();
	}
};
static_assert(alignof(UFortGameplayCinematicWidget) == 0x000008, "Wrong alignment on UFortGameplayCinematicWidget");
static_assert(sizeof(UFortGameplayCinematicWidget) == 0x0003C8, "Wrong size on UFortGameplayCinematicWidget");
static_assert(offsetof(UFortGameplayCinematicWidget, bSkipCinematics) == 0x0003B0, "Member 'UFortGameplayCinematicWidget::bSkipCinematics' has a wrong offset!");

class UFortGameplayIntroPanelWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x20];

public:
	void OnIntroFinished();
	void OnStartIntro();
	void OnWaitingForMinTime();
	void OnWaitingForPawn();
	void OnWaitingForReadyForGameplay();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayIntroPanelWidget">();
	}
	static class UFortGameplayIntroPanelWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayIntroPanelWidget>();
	}
};
static_assert(alignof(UFortGameplayIntroPanelWidget) == 0x000008, "Wrong alignment on UFortGameplayIntroPanelWidget");
static_assert(sizeof(UFortGameplayIntroPanelWidget) == 0x0003C8, "Wrong size on UFortGameplayIntroPanelWidget");

class USpecialEventCursorWidget final : public UUserWidget
{
public:
	uint8                                         Pad_268[0x8];
	bool                                          bAutomaticallyChangeVisibility;
	uint8                                         Pad_271[0x7];
	class USpecialEventCursorPawnComponent*       CursorPawnComponent;
	uint8                                         Pad_280[0x8];

public:
	void BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& NewCursorModeTag, const struct FGameplayTag& OldCursorModeTag);
	void BP_OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& CursorModeTag, const bool bShouldBeVisible);
	void OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& NewCursorModeTag, const struct FGameplayTag& OldCursorModeTag);
	void OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FGameplayTag& CursorModeTag, const bool bShouldBeVisible);
	void OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, const struct FVector2D& NormalizedLocation, const struct FVector2D& ViewportLocation);

	struct FGameplayTagContainer GetCursorModeTags() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventCursorWidget">();
	}
	static class USpecialEventCursorWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventCursorWidget>();
	}
};
static_assert(alignof(USpecialEventCursorWidget) == 0x000008, "Wrong alignment on USpecialEventCursorWidget");
static_assert(sizeof(USpecialEventCursorWidget) == 0x000288, "Wrong size on USpecialEventCursorWidget");
static_assert(offsetof(USpecialEventCursorWidget, bAutomaticallyChangeVisibility) == 0x000270, "Member 'USpecialEventCursorWidget::bAutomaticallyChangeVisibility' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWidget, CursorPawnComponent) == 0x000278, "Member 'USpecialEventCursorWidget::CursorPawnComponent' has a wrong offset!");

class USpecialEventPlayerInfoWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x8];
	TMulticastInlineDelegate<void(class AFortPlayerStateAthena* OldPlayerState, class AFortPlayerStateAthena* NewPlayerState)> OnRepresentedPlayerStateChanged;
	uint8                                         Pad_2E8[0x8];

public:
	class AFortPlayerStateAthena* GetRepresentedPlayerState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventPlayerInfoWidget">();
	}
	static class USpecialEventPlayerInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventPlayerInfoWidget>();
	}
};
static_assert(alignof(USpecialEventPlayerInfoWidget) == 0x000008, "Wrong alignment on USpecialEventPlayerInfoWidget");
static_assert(sizeof(USpecialEventPlayerInfoWidget) == 0x0002F0, "Wrong size on USpecialEventPlayerInfoWidget");
static_assert(offsetof(USpecialEventPlayerInfoWidget, OnRepresentedPlayerStateChanged) == 0x0002D8, "Member 'USpecialEventPlayerInfoWidget::OnRepresentedPlayerStateChanged' has a wrong offset!");

class USpecialEventUILibrary final : public UBlueprintFunctionLibrary
{
public:
	static void HideFrontEndStateWidget(const class UObject* WorldContextObject, bool bNewlyHidden);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventUILibrary">();
	}
	static class USpecialEventUILibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventUILibrary>();
	}
};
static_assert(alignof(USpecialEventUILibrary) == 0x000008, "Wrong alignment on USpecialEventUILibrary");
static_assert(sizeof(USpecialEventUILibrary) == 0x000028, "Wrong size on USpecialEventUILibrary");

}
