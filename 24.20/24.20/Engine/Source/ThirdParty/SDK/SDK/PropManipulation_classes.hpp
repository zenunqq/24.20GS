#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UPropManipulationNativeComponent final : public UActorComponent
{
public:
	static bool ShouldApplyHealthBoostToIslandInvulnerableProps();

	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
	void SetControlledObjectsVisibilityAndCollision(const TArray<class ABuildingSMActor*>& InObjectsOfControl, const bool InNewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropManipulationNativeComponent">();
	}
	static class UPropManipulationNativeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropManipulationNativeComponent>();
	}
};
static_assert(alignof(UPropManipulationNativeComponent) == 0x000008, "Wrong alignment on UPropManipulationNativeComponent");
static_assert(sizeof(UPropManipulationNativeComponent) == 0x0000A0, "Wrong size on UPropManipulationNativeComponent");

}
