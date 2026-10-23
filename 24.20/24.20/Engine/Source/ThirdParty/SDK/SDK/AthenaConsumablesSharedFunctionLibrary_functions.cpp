#pragma once

#include "Basic.hpp"

#include "AthenaConsumablesSharedFunctionLibrary_classes.hpp"
#include "AthenaConsumablesSharedFunctionLibrary_parameters.hpp"

namespace SDK
{

void UAthenaConsumablesSharedFunctionLibrary_C::Get_Actor_Forward_Cardinal_Direction(class AActor* Actor, class UObject* __WorldContext, ECardinalDirection* OutCardinalDirection, double* OutYaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AthenaConsumablesSharedFunctionLibrary_C", "Get Actor Forward Cardinal Direction");

	Params::AthenaConsumablesSharedFunctionLibrary_C_Get_Actor_Forward_Cardinal_Direction Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutCardinalDirection != nullptr)
		*OutCardinalDirection = Parms.OutCardinalDirection;

	if (OutYaw != nullptr)
		*OutYaw = Parms.OutYaw;
}

void UAthenaConsumablesSharedFunctionLibrary_C::IsOverlappingDeployableBlockVolume(class UObject* WorldContextObject, float BlockingAreaCheckRadius, const struct FVector& Location, class UObject* __WorldContext, bool* bOverlapping) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaConsumablesSharedFunctionLibrary_C", "IsOverlappingDeployableBlockVolume");

	Params::AthenaConsumablesSharedFunctionLibrary_C_IsOverlappingDeployableBlockVolume Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.BlockingAreaCheckRadius = BlockingAreaCheckRadius;
	Parms.Location = std::move(Location);
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (bOverlapping != nullptr)
		*bOverlapping = Parms.bOverlapping;
}

}
