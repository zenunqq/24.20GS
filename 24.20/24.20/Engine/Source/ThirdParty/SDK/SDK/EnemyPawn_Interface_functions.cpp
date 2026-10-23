#pragma once

#include "Basic.hpp"

#include "EnemyPawn_Interface_classes.hpp"
#include "EnemyPawn_Interface_parameters.hpp"

namespace SDK
{

void IEnemyPawn_Interface_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Interface_C", "Orphaned");

	Params::EnemyPawn_Interface_C_Orphaned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;
}

void IEnemyPawn_Interface_C::TriggerDeathFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyPawn_Interface_C", "TriggerDeathFX");

	UObject::ProcessEvent(Func, nullptr);
}

}
