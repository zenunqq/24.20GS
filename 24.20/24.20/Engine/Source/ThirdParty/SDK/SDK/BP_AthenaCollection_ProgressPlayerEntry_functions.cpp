#pragma once

#include "Basic.hpp"

#include "BP_AthenaCollection_ProgressPlayerEntry_classes.hpp"
#include "BP_AthenaCollection_ProgressPlayerEntry_parameters.hpp"

namespace SDK
{

void UBP_AthenaCollection_ProgressPlayerEntry_C::BP_OnPlayerProgressInitialized(bool bIsLocalPlayer, int32 NumCollected, int32 NumToCollect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollection_ProgressPlayerEntry_C", "BP_OnPlayerProgressInitialized");

	Params::BP_AthenaCollection_ProgressPlayerEntry_C_BP_OnPlayerProgressInitialized Parms{};

	Parms.bIsLocalPlayer = bIsLocalPlayer;
	Parms.NumCollected = NumCollected;
	Parms.NumToCollect = NumToCollect;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollection_ProgressPlayerEntry_C::BP_OnShowPlayerInfoSet(bool bShowPlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollection_ProgressPlayerEntry_C", "BP_OnShowPlayerInfoSet");

	Params::BP_AthenaCollection_ProgressPlayerEntry_C_BP_OnShowPlayerInfoSet Parms{};

	Parms.bShowPlayerInfo = bShowPlayerInfo;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollection_ProgressPlayerEntry_C::ExecuteUbergraph_BP_AthenaCollection_ProgressPlayerEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollection_ProgressPlayerEntry_C", "ExecuteUbergraph_BP_AthenaCollection_ProgressPlayerEntry");

	Params::BP_AthenaCollection_ProgressPlayerEntry_C_ExecuteUbergraph_BP_AthenaCollection_ProgressPlayerEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_AthenaCollection_ProgressPlayerEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollection_ProgressPlayerEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_AthenaCollection_ProgressPlayerEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaCollection_ProgressPlayerEntry_C", "PreConstruct");

	Params::BP_AthenaCollection_ProgressPlayerEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
