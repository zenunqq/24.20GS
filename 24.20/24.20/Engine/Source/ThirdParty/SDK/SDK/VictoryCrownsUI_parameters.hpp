#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged final
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;
	EAthenaGamePhaseStep                          GamePhaseStep;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged) == 0x000008, "Wrong alignment on FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged");
static_assert(sizeof(FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged) == 0x000018, "Wrong size on FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged");
static_assert(offsetof(FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged, SafeZoneInterface) == 0x000000, "Member 'FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged::SafeZoneInterface' has a wrong offset!");
static_assert(offsetof(FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged, GamePhaseStep) == 0x000010, "Member 'FortUIManagerComponent_VictoryCrowns_HandleGamePhaseStepChanged::GamePhaseStep' has a wrong offset!");

struct FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators final
{
public:
	TArray<class AFortPlayerStateAthena*>         CrownBearerList;
};
static_assert(alignof(FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators) == 0x000008, "Wrong alignment on FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators");
static_assert(sizeof(FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators) == 0x000010, "Wrong size on FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators");
static_assert(offsetof(FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators, CrownBearerList) == 0x000000, "Member 'FortUIManagerComponent_VictoryCrowns_RebuildBearerIndicators::CrownBearerList' has a wrong offset!");

struct VictoryCrownsBearerInfoBase_OnSetPlayerState final
{
public:
	class AFortPlayerStateAthena*                 PSA;
};
static_assert(alignof(VictoryCrownsBearerInfoBase_OnSetPlayerState) == 0x000008, "Wrong alignment on VictoryCrownsBearerInfoBase_OnSetPlayerState");
static_assert(sizeof(VictoryCrownsBearerInfoBase_OnSetPlayerState) == 0x000008, "Wrong size on VictoryCrownsBearerInfoBase_OnSetPlayerState");
static_assert(offsetof(VictoryCrownsBearerInfoBase_OnSetPlayerState, PSA) == 0x000000, "Member 'VictoryCrownsBearerInfoBase_OnSetPlayerState::PSA' has a wrong offset!");

struct VictoryCrownsBearerInfoBase_SetPlayerState final
{
public:
	class AFortPlayerStateAthena*                 InPlayerState;
};
static_assert(alignof(VictoryCrownsBearerInfoBase_SetPlayerState) == 0x000008, "Wrong alignment on VictoryCrownsBearerInfoBase_SetPlayerState");
static_assert(sizeof(VictoryCrownsBearerInfoBase_SetPlayerState) == 0x000008, "Wrong size on VictoryCrownsBearerInfoBase_SetPlayerState");
static_assert(offsetof(VictoryCrownsBearerInfoBase_SetPlayerState, InPlayerState) == 0x000000, "Member 'VictoryCrownsBearerInfoBase_SetPlayerState::InPlayerState' has a wrong offset!");

struct VictoryCrownsIndicator_OnDistanceChanged final
{
public:
	int32                                         Distance;
};
static_assert(alignof(VictoryCrownsIndicator_OnDistanceChanged) == 0x000004, "Wrong alignment on VictoryCrownsIndicator_OnDistanceChanged");
static_assert(sizeof(VictoryCrownsIndicator_OnDistanceChanged) == 0x000004, "Wrong size on VictoryCrownsIndicator_OnDistanceChanged");
static_assert(offsetof(VictoryCrownsIndicator_OnDistanceChanged, Distance) == 0x000000, "Member 'VictoryCrownsIndicator_OnDistanceChanged::Distance' has a wrong offset!");

struct VictoryCrownsIndicator_OnScreenClampChanged final
{
public:
	bool                                          bIsClamped;
};
static_assert(alignof(VictoryCrownsIndicator_OnScreenClampChanged) == 0x000001, "Wrong alignment on VictoryCrownsIndicator_OnScreenClampChanged");
static_assert(sizeof(VictoryCrownsIndicator_OnScreenClampChanged) == 0x000001, "Wrong size on VictoryCrownsIndicator_OnScreenClampChanged");
static_assert(offsetof(VictoryCrownsIndicator_OnScreenClampChanged, bIsClamped) == 0x000000, "Member 'VictoryCrownsIndicator_OnScreenClampChanged::bIsClamped' has a wrong offset!");

struct VictoryCrownsIndicator_GetIndicatedPlayerStateAthena final
{
public:
	const class AFortPlayerStateAthena*           ReturnValue;
};
static_assert(alignof(VictoryCrownsIndicator_GetIndicatedPlayerStateAthena) == 0x000008, "Wrong alignment on VictoryCrownsIndicator_GetIndicatedPlayerStateAthena");
static_assert(sizeof(VictoryCrownsIndicator_GetIndicatedPlayerStateAthena) == 0x000008, "Wrong size on VictoryCrownsIndicator_GetIndicatedPlayerStateAthena");
static_assert(offsetof(VictoryCrownsIndicator_GetIndicatedPlayerStateAthena, ReturnValue) == 0x000000, "Member 'VictoryCrownsIndicator_GetIndicatedPlayerStateAthena::ReturnValue' has a wrong offset!");

struct VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged final
{
public:
	TArray<class AFortPlayerStateAthena*>         CrownBearerList;
};
static_assert(alignof(VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged) == 0x000008, "Wrong alignment on VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged");
static_assert(sizeof(VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged) == 0x000010, "Wrong size on VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged");
static_assert(offsetof(VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged, CrownBearerList) == 0x000000, "Member 'VictoryCrownsPlayerInfoWidget_HandleCrownBearerListChanged::CrownBearerList' has a wrong offset!");

struct VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged final
{
public:
	bool                                          bHasCrown;
};
static_assert(alignof(VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged) == 0x000001, "Wrong alignment on VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged");
static_assert(sizeof(VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged) == 0x000001, "Wrong size on VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged");
static_assert(offsetof(VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged, bHasCrown) == 0x000000, "Member 'VictoryCrownsPlayerInfoWidget_OnPlayerVictoryCrownStatusChanged::bHasCrown' has a wrong offset!");

struct VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged final
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;
	EAthenaGamePhaseStep                          GamePhaseStep;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged) == 0x000008, "Wrong alignment on VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged");
static_assert(sizeof(VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged) == 0x000018, "Wrong size on VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged");
static_assert(offsetof(VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged, SafeZoneInterface) == 0x000000, "Member 'VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged::SafeZoneInterface' has a wrong offset!");
static_assert(offsetof(VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged, GamePhaseStep) == 0x000010, "Member 'VictoryCrownsPreGameWidget_HandleGamePhaseStepChanged::GamePhaseStep' has a wrong offset!");

struct VictoryCrownsPreGameWidget_OnButtonCloseProgress final
{
public:
	float                                         Progress;
};
static_assert(alignof(VictoryCrownsPreGameWidget_OnButtonCloseProgress) == 0x000004, "Wrong alignment on VictoryCrownsPreGameWidget_OnButtonCloseProgress");
static_assert(sizeof(VictoryCrownsPreGameWidget_OnButtonCloseProgress) == 0x000004, "Wrong size on VictoryCrownsPreGameWidget_OnButtonCloseProgress");
static_assert(offsetof(VictoryCrownsPreGameWidget_OnButtonCloseProgress, Progress) == 0x000000, "Member 'VictoryCrownsPreGameWidget_OnButtonCloseProgress::Progress' has a wrong offset!");

struct VictoryCrownsPreGameWidget_OnInputMethodChanged final
{
public:
	ECommonInputType                              CurrentInput;
};
static_assert(alignof(VictoryCrownsPreGameWidget_OnInputMethodChanged) == 0x000001, "Wrong alignment on VictoryCrownsPreGameWidget_OnInputMethodChanged");
static_assert(sizeof(VictoryCrownsPreGameWidget_OnInputMethodChanged) == 0x000001, "Wrong size on VictoryCrownsPreGameWidget_OnInputMethodChanged");
static_assert(offsetof(VictoryCrownsPreGameWidget_OnInputMethodChanged, CurrentInput) == 0x000000, "Member 'VictoryCrownsPreGameWidget_OnInputMethodChanged::CurrentInput' has a wrong offset!");

struct VictoryCrownsPreGameWidget_RebuildBearerList final
{
public:
	TArray<class AFortPlayerStateAthena*>         CrownBearerList;
};
static_assert(alignof(VictoryCrownsPreGameWidget_RebuildBearerList) == 0x000008, "Wrong alignment on VictoryCrownsPreGameWidget_RebuildBearerList");
static_assert(sizeof(VictoryCrownsPreGameWidget_RebuildBearerList) == 0x000010, "Wrong size on VictoryCrownsPreGameWidget_RebuildBearerList");
static_assert(offsetof(VictoryCrownsPreGameWidget_RebuildBearerList, CrownBearerList) == 0x000000, "Member 'VictoryCrownsPreGameWidget_RebuildBearerList::CrownBearerList' has a wrong offset!");

}
