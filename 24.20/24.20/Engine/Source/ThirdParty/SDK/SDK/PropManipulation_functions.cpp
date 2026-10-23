#pragma once

#include "Basic.hpp"

#include "PropManipulation_classes.hpp"
#include "PropManipulation_parameters.hpp"

namespace SDK
{

bool UPropManipulationNativeComponent::ShouldApplyHealthBoostToIslandInvulnerableProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PropManipulationNativeComponent", "ShouldApplyHealthBoostToIslandInvulnerableProps");

	Params::PropManipulationNativeComponent_ShouldApplyHealthBoostToIslandInvulnerableProps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPropManipulationNativeComponent::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropManipulationNativeComponent", "RefreshTrackedActors");

	Params::PropManipulationNativeComponent_RefreshTrackedActors Parms{};

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPropManipulationNativeComponent::SetControlledObjectsVisibilityAndCollision(const TArray<class ABuildingSMActor*>& InObjectsOfControl, const bool InNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropManipulationNativeComponent", "SetControlledObjectsVisibilityAndCollision");

	Params::PropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision Parms{};

	Parms.InObjectsOfControl = std::move(InObjectsOfControl);
	Parms.InNewVisibility = InNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
