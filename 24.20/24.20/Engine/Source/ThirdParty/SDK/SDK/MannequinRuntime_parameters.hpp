#pragma once

#include "Basic.hpp"

#include "MannequinRuntime_structs.hpp"

namespace SDK::Params
{

struct MannequinAnalyticsComponent_FireMannequinAnalytics_Interact final
{
public:
	class AFortPlayerController*                  Controller;
	ECreativeMannequinAnalyticsInteractType       InteractType;
	uint8                                         Pad_9[0x7];
	const class UFortItemDefinition*              Character;
	const class UFortItemDefinition*              BackBling;
};
static_assert(alignof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact) == 0x000008, "Wrong alignment on MannequinAnalyticsComponent_FireMannequinAnalytics_Interact");
static_assert(sizeof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact) == 0x000020, "Wrong size on MannequinAnalyticsComponent_FireMannequinAnalytics_Interact");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, Controller) == 0x000000, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::Controller' has a wrong offset!");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, InteractType) == 0x000008, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::InteractType' has a wrong offset!");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, Character) == 0x000010, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::Character' has a wrong offset!");
static_assert(offsetof(MannequinAnalyticsComponent_FireMannequinAnalytics_Interact, BackBling) == 0x000018, "Member 'MannequinAnalyticsComponent_FireMannequinAnalytics_Interact::BackBling' has a wrong offset!");

}
