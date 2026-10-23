#pragma once

#include "Basic.hpp"

#include "WBP_Augment_CollectionScreenInfoOverlay_classes.hpp"
#include "WBP_Augment_CollectionScreenInfoOverlay_parameters.hpp"

namespace SDK
{

void UWBP_Augment_CollectionScreenInfoOverlay_C::BP_OnCollectedStateSet(EFortCollectedState CollectedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenInfoOverlay_C", "BP_OnCollectedStateSet");

	Params::WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnCollectedStateSet Parms{};

	Parms.CollectedState = CollectedState;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionScreenInfoOverlay_C::BP_OnLocationsFoundSet(int32 NumFound, int32 NumAvailable, bool bAllFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenInfoOverlay_C", "BP_OnLocationsFoundSet");

	Params::WBP_Augment_CollectionScreenInfoOverlay_C_BP_OnLocationsFoundSet Parms{};

	Parms.NumFound = NumFound;
	Parms.NumAvailable = NumAvailable;
	Parms.bAllFound = bAllFound;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionScreenInfoOverlay_C::ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreenInfoOverlay_C", "ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay");

	Params::WBP_Augment_CollectionScreenInfoOverlay_C_ExecuteUbergraph_WBP_Augment_CollectionScreenInfoOverlay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
