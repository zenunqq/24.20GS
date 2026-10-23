#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps) == 0x000001, "Wrong alignment on PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps");
static_assert(sizeof(PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps) == 0x000001, "Wrong size on PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps");
static_assert(offsetof(PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps, ReturnValue) == 0x000000, "Member 'PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps::ReturnValue' has a wrong offset!");

struct PropManipulationNativeComponent_RefreshTrackedActors final
{
public:
	class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker;
};
static_assert(alignof(PropManipulationNativeComponent_RefreshTrackedActors) == 0x000008, "Wrong alignment on PropManipulationNativeComponent_RefreshTrackedActors");
static_assert(sizeof(PropManipulationNativeComponent_RefreshTrackedActors) == 0x000008, "Wrong size on PropManipulationNativeComponent_RefreshTrackedActors");
static_assert(offsetof(PropManipulationNativeComponent_RefreshTrackedActors, InPlaySpaceComponent_SpatialActorTracker) == 0x000000, "Member 'PropManipulationNativeComponent_RefreshTrackedActors::InPlaySpaceComponent_SpatialActorTracker' has a wrong offset!");

struct PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision final
{
public:
	TArray<class ABuildingSMActor*>               InObjectsOfControl;
	bool                                          InNewVisibility;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision) == 0x000008, "Wrong alignment on PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision");
static_assert(sizeof(PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision) == 0x000018, "Wrong size on PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision");
static_assert(offsetof(PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision, InObjectsOfControl) == 0x000000, "Member 'PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision::InObjectsOfControl' has a wrong offset!");
static_assert(offsetof(PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision, InNewVisibility) == 0x000010, "Member 'PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision::InNewVisibility' has a wrong offset!");

}
