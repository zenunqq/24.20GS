#pragma once

#include "Basic.hpp"

#include "WBP_Augment_CollectionScreen_classes.hpp"
#include "WBP_Augment_CollectionScreen_parameters.hpp"

namespace SDK
{

void UWBP_Augment_CollectionScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionScreen_C::BP_OnFinishedLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreen_C", "BP_OnFinishedLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionScreen_C::BP_OnStartedLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreen_C", "BP_OnStartedLoading");

	UObject::ProcessEvent(Func, nullptr);
}

void UWBP_Augment_CollectionScreen_C::ExecuteUbergraph_WBP_Augment_CollectionScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreen_C", "ExecuteUbergraph_WBP_Augment_CollectionScreen");

	Params::WBP_Augment_CollectionScreen_C_ExecuteUbergraph_WBP_Augment_CollectionScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionScreen_C::PlayerProgressContainer_Event(class UWBP_Augments_CollectionPlayerProgressTrack_C* PlayerProgressContainer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreen_C", "PlayerProgressContainer_Event");

	Params::WBP_Augment_CollectionScreen_C_PlayerProgressContainer_Event Parms{};

	Parms.PlayerProgressContainer_0 = PlayerProgressContainer_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UWBP_Augment_CollectionScreen_C::SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen(class UWBP_Augments_CollectionPlayerProgressTrack_C* PlayerProgressContainer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Augment_CollectionScreen_C", "SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen");

	Params::WBP_Augment_CollectionScreen_C_SequenceEvent__ENTRYPOINTWBP_Augment_CollectionScreen Parms{};

	Parms.PlayerProgressContainer_0 = PlayerProgressContainer_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
