#pragma once

#include "Basic.hpp"

#include "Campfire_Interface_classes.hpp"
#include "Campfire_Interface_parameters.hpp"

namespace SDK
{

void ICampfire_Interface_C::GetLocationToSpawnFireVFX(struct FVector* WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Campfire_Interface_C", "GetLocationToSpawnFireVFX");

	Params::Campfire_Interface_C_GetLocationToSpawnFireVFX Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);
}

void ICampfire_Interface_C::GetWoodComponent(class UStaticMeshComponent** WoodComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Campfire_Interface_C", "GetWoodComponent");

	Params::Campfire_Interface_C_GetWoodComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WoodComponent != nullptr)
		*WoodComponent = Parms.WoodComponent;
}

void ICampfire_Interface_C::IsStoked(bool* IsStoked_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Campfire_Interface_C", "IsStoked");

	Params::Campfire_Interface_C_IsStoked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsStoked_0 != nullptr)
		*IsStoked_0 = Parms.IsStoked_0;
}

}
