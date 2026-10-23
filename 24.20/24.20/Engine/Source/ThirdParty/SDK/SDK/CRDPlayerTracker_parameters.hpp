#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CRDPlayerTrackerMarker_CreatePlayerTrackerWidget final
{
public:
	class AFortPlayerControllerGameplay*          InFortPlayerControllerGameplay;
	class AFortPlayerStateAthena*                 AssociatedPSA;
	class UUserWidget*                            ReturnValue;
};
static_assert(alignof(CRDPlayerTrackerMarker_CreatePlayerTrackerWidget) == 0x000008, "Wrong alignment on CRDPlayerTrackerMarker_CreatePlayerTrackerWidget");
static_assert(sizeof(CRDPlayerTrackerMarker_CreatePlayerTrackerWidget) == 0x000018, "Wrong size on CRDPlayerTrackerMarker_CreatePlayerTrackerWidget");
static_assert(offsetof(CRDPlayerTrackerMarker_CreatePlayerTrackerWidget, InFortPlayerControllerGameplay) == 0x000000, "Member 'CRDPlayerTrackerMarker_CreatePlayerTrackerWidget::InFortPlayerControllerGameplay' has a wrong offset!");
static_assert(offsetof(CRDPlayerTrackerMarker_CreatePlayerTrackerWidget, AssociatedPSA) == 0x000008, "Member 'CRDPlayerTrackerMarker_CreatePlayerTrackerWidget::AssociatedPSA' has a wrong offset!");
static_assert(offsetof(CRDPlayerTrackerMarker_CreatePlayerTrackerWidget, ReturnValue) == 0x000010, "Member 'CRDPlayerTrackerMarker_CreatePlayerTrackerWidget::ReturnValue' has a wrong offset!");

struct CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget final
{
public:
	class AFortPlayerControllerGameplay*          InFortPlayerControllerGameplay;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget) == 0x000008, "Wrong alignment on CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget");
static_assert(sizeof(CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget) == 0x000010, "Wrong size on CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget");
static_assert(offsetof(CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget, InFortPlayerControllerGameplay) == 0x000000, "Member 'CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget::InFortPlayerControllerGameplay' has a wrong offset!");
static_assert(offsetof(CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget, ReturnValue) == 0x000008, "Member 'CRDPlayerTrackerMarker_DestroyPlayerTrackerWidget::ReturnValue' has a wrong offset!");

}
