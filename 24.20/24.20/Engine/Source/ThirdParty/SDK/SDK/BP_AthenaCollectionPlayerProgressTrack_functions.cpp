#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollectionPlayerProgressTrack_classes.hpp"
#include "BP_AthenaCollectionPlayerProgressTrack_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollectionPlayerProgressTrack_C::BP_OnPlayerProgressContainerReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "BP_OnPlayerProgressContainerReset");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionPlayerProgressTrack_C::BP_OnPlayerProgressEntriesCreated(const TArray<class UAthenaCollectionPlayerProgress*>& PlayerProgressEntries, int32 NumToCollect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "BP_OnPlayerProgressEntriesCreated");

	Params::BP_AthenaCollectionPlayerProgressTrack_C_BP_OnPlayerProgressEntriesCreated Parms{};

	Parms.PlayerProgressEntries = std::move(PlayerProgressEntries);
	Parms.NumToCollect = NumToCollect;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionPlayerProgressTrack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionPlayerProgressTrack_C::ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack");

	Params::BP_AthenaCollectionPlayerProgressTrack_C_ExecuteUbergraph_BP_AthenaCollectionPlayerProgressTrack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollectionPlayerProgressTrack_C::PlayIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "PlayIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollectionPlayerProgressTrack_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollectionPlayerProgressTrack_C", "PreConstruct");

	Params::BP_AthenaCollectionPlayerProgressTrack_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
