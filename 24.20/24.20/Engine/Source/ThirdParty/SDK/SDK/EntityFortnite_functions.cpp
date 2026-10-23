#pragma once

#include "Basic.hpp"

#include "EntityFortnite_classes.hpp"
#include "EntityFortnite_parameters.hpp"

namespace SDK
{

void AEntityFortniteStormSpawner::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Pause");

	UObject::ProcessEvent(Func, nullptr);
}

void AEntityFortniteStormSpawner::Start(const float StartRadius, const float BoundsRadius, const TArray<struct FEntityFortniteStormPhase>& Phases)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Start");

	Params::EntityFortniteStormSpawner_Start Parms{};

	Parms.StartRadius = StartRadius;
	Parms.BoundsRadius = BoundsRadius;
	Parms.Phases = std::move(Phases);

	UObject::ProcessEvent(Func, &Parms);
}

void AEntityFortniteStormSpawner::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}

bool AEntityFortniteStormSpawner::Exists() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Exists");

	Params::EntityFortniteStormSpawner_Exists Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
