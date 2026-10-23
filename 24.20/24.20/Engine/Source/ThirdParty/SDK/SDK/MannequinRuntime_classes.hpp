#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "MannequinRuntime_structs.hpp"

namespace SDK
{

class UMannequinAnalyticsComponent final : public UActorComponent
{
public:
	void FireMannequinAnalytics_Interact(class AFortPlayerController* Controller, const ECreativeMannequinAnalyticsInteractType InteractType, const class UFortItemDefinition* Character, const class UFortItemDefinition* BackBling) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MannequinAnalyticsComponent">();
	}
	static class UMannequinAnalyticsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMannequinAnalyticsComponent>();
	}
};
static_assert(alignof(UMannequinAnalyticsComponent) == 0x000008, "Wrong alignment on UMannequinAnalyticsComponent");
static_assert(sizeof(UMannequinAnalyticsComponent) == 0x0000A0, "Wrong size on UMannequinAnalyticsComponent");

}
