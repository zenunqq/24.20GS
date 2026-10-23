#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollectionScreenInfoOverlayCharacterServices_classes.hpp"
#include "BP_AthenaCollectionScreenInfoOverlayCharacterServices_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::BP_OnCollectedStateSet(EFortCollectedState CollectedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenInfoOverlayCharacterServices_C", "BP_OnCollectedStateSet");

	Params::BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnCollectedStateSet Parms{};

	Parms.CollectedState = CollectedState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::BP_OnLocationsFoundSet_1(int32 NumFound, int32 NumAvailable, bool bAllFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenInfoOverlayCharacterServices_C", "BP_OnLocationsFoundSet_1");

	Params::BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_BP_OnLocationsFoundSet_1 Parms{};

	Parms.NumFound = NumFound;
	Parms.NumAvailable = NumAvailable;
	Parms.bAllFound = bAllFound;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionScreenInfoOverlayCharacterServices_C::ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionScreenInfoOverlayCharacterServices_C", "ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices");

	Params::BP_AthenaCollectionScreenInfoOverlayCharacterServices_C_ExecuteUbergraph_BP_AthenaCollectionScreenInfoOverlayCharacterServices Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
