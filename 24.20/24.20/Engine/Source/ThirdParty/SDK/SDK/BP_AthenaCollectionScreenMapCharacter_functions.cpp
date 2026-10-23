#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollectionScreenMapCharacter_classes.hpp"
#include "BP_AthenaCollectionScreenMapCharacter_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollectionScreenMapCharacter_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenMapCharacter_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionScreenMapCharacter_C::BP_OnFinishedLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenMapCharacter_C", "BP_OnFinishedLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionScreenMapCharacter_C::BP_OnStartedLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenMapCharacter_C", "BP_OnStartedLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionScreenMapCharacter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenMapCharacter_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionScreenMapCharacter_C::ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenMapCharacter_C", "ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter");

	Params::BP_AthenaCollectionScreenMapCharacter_C_ExecuteUbergraph_BP_AthenaCollectionScreenMapCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionScreenMapCharacter_C::PlayerProgressContainer_Event_0(class UBP_AthenaCollectionPlayerProgressTrack_C* PlayerProgressContainer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenMapCharacter_C", "PlayerProgressContainer_Event_0");

	Params::BP_AthenaCollectionScreenMapCharacter_C_PlayerProgressContainer_Event_0 Parms{};

	Parms.PlayerProgressContainer_0 = PlayerProgressContainer_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
