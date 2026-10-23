#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CommonUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UFortUIManagerComponent_VictoryCrowns final : public UFortControllerComponent
{
public:
	TSubclassOf<class UVictoryCrownsIndicator>    VictoryCrownsIndicatorClass;
	struct FUserWidgetPool                        IndicatorPool;

public:
	void HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
	void RebuildBearerIndicators(const TArray<class AFortPlayerStateAthena*>& CrownBearerList);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUIManagerComponent_VictoryCrowns">();
	}
	static class UFortUIManagerComponent_VictoryCrowns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUIManagerComponent_VictoryCrowns>();
	}
};
static_assert(alignof(UFortUIManagerComponent_VictoryCrowns) == 0x000008, "Wrong alignment on UFortUIManagerComponent_VictoryCrowns");
static_assert(sizeof(UFortUIManagerComponent_VictoryCrowns) == 0x000138, "Wrong size on UFortUIManagerComponent_VictoryCrowns");
static_assert(offsetof(UFortUIManagerComponent_VictoryCrowns, VictoryCrownsIndicatorClass) == 0x0000A8, "Member 'UFortUIManagerComponent_VictoryCrowns::VictoryCrownsIndicatorClass' has a wrong offset!");
static_assert(offsetof(UFortUIManagerComponent_VictoryCrowns, IndicatorPool) == 0x0000B0, "Member 'UFortUIManagerComponent_VictoryCrowns::IndicatorPool' has a wrong offset!");

class UVictoryCrownsBearerInfoBase final : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class AFortPlayerStateAthena>  WeakPSA;
	class UCommonTextBlock*                       Text_PlayerName;

public:
	void OnSetPlayerState(class AFortPlayerStateAthena* PSA);
	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VictoryCrownsBearerInfoBase">();
	}
	static class UVictoryCrownsBearerInfoBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownsBearerInfoBase>();
	}
};
static_assert(alignof(UVictoryCrownsBearerInfoBase) == 0x000008, "Wrong alignment on UVictoryCrownsBearerInfoBase");
static_assert(sizeof(UVictoryCrownsBearerInfoBase) == 0x0002A0, "Wrong size on UVictoryCrownsBearerInfoBase");
static_assert(offsetof(UVictoryCrownsBearerInfoBase, WeakPSA) == 0x000290, "Member 'UVictoryCrownsBearerInfoBase::WeakPSA' has a wrong offset!");
static_assert(offsetof(UVictoryCrownsBearerInfoBase, Text_PlayerName) == 0x000298, "Member 'UVictoryCrownsBearerInfoBase::Text_PlayerName' has a wrong offset!");

class UVictoryCrownsIndicator final : public UFortActorIndicatorWidget
{
public:
	uint8                                         Pad_378[0x28];

public:
	void OnDistanceChanged(int32 Distance);
	void OnScreenClampChanged(bool bIsClamped);

	const class AFortPlayerStateAthena* GetIndicatedPlayerStateAthena() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VictoryCrownsIndicator">();
	}
	static class UVictoryCrownsIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownsIndicator>();
	}
};
static_assert(alignof(UVictoryCrownsIndicator) == 0x000008, "Wrong alignment on UVictoryCrownsIndicator");
static_assert(sizeof(UVictoryCrownsIndicator) == 0x0003A0, "Wrong size on UVictoryCrownsIndicator");

class UVictoryCrownsPlacementOverlay final : public UPostGamePlacementOverlay
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VictoryCrownsPlacementOverlay">();
	}
	static class UVictoryCrownsPlacementOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownsPlacementOverlay>();
	}
};
static_assert(alignof(UVictoryCrownsPlacementOverlay) == 0x000008, "Wrong alignment on UVictoryCrownsPlacementOverlay");
static_assert(sizeof(UVictoryCrownsPlacementOverlay) == 0x0002F0, "Wrong size on UVictoryCrownsPlacementOverlay");

class UVictoryCrownsPlayerInfoWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x10];

public:
	void HandleCrownBearerListChanged(const TArray<class AFortPlayerStateAthena*>& CrownBearerList);
	void OnPlayerVictoryCrownStatusChanged(const bool bHasCrown);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VictoryCrownsPlayerInfoWidget">();
	}
	static class UVictoryCrownsPlayerInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownsPlayerInfoWidget>();
	}
};
static_assert(alignof(UVictoryCrownsPlayerInfoWidget) == 0x000008, "Wrong alignment on UVictoryCrownsPlayerInfoWidget");
static_assert(sizeof(UVictoryCrownsPlayerInfoWidget) == 0x0002E0, "Wrong size on UVictoryCrownsPlayerInfoWidget");

class UVictoryCrownsPreGameWidget final : public UCommonActivatableWidget
{
public:
	class UDynamicEntryBox*                       EntryBox_BearerList;
	class UCommonActionWidget*                    TipActionWidget;
	struct FDataTableRowHandle                    CloseObjectInputAction;
	uint8                                         Pad_3C8[0x18];

public:
	void FadeOutTimerFinished();
	void HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
	void OnButtonClose();
	void OnButtonCloseProgress(float Progress);
	void OnCloseActionsComplete();
	void OnInputMethodChanged(ECommonInputType CurrentInput);
	void RebuildBearerList(const TArray<class AFortPlayerStateAthena*>& CrownBearerList);
	void RegisterCloseButtonInput();
	void StartFadeOut();
	void UnregisterCloseButtonInput();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VictoryCrownsPreGameWidget">();
	}
	static class UVictoryCrownsPreGameWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownsPreGameWidget>();
	}
};
static_assert(alignof(UVictoryCrownsPreGameWidget) == 0x000008, "Wrong alignment on UVictoryCrownsPreGameWidget");
static_assert(sizeof(UVictoryCrownsPreGameWidget) == 0x0003E0, "Wrong size on UVictoryCrownsPreGameWidget");
static_assert(offsetof(UVictoryCrownsPreGameWidget, EntryBox_BearerList) == 0x0003A8, "Member 'UVictoryCrownsPreGameWidget::EntryBox_BearerList' has a wrong offset!");
static_assert(offsetof(UVictoryCrownsPreGameWidget, TipActionWidget) == 0x0003B0, "Member 'UVictoryCrownsPreGameWidget::TipActionWidget' has a wrong offset!");
static_assert(offsetof(UVictoryCrownsPreGameWidget, CloseObjectInputAction) == 0x0003B8, "Member 'UVictoryCrownsPreGameWidget::CloseObjectInputAction' has a wrong offset!");

}
