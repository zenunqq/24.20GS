#pragma once

#include "Basic.hpp"

#include "BPS24_BulkClaimRewards_classes.hpp"
#include "BPS24_BulkClaimRewards_parameters.hpp"

namespace SDK
{

void UBPS24_BulkClaimRewards_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BulkClaimRewards_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BulkClaimRewards_C::ExecuteUbergraph_BPS24_BulkClaimRewards(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BulkClaimRewards_C", "ExecuteUbergraph_BPS24_BulkClaimRewards");

	Params::BPS24_BulkClaimRewards_C_ExecuteUbergraph_BPS24_BulkClaimRewards Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BulkClaimRewards_C::OnCostChanged(const int32 Cost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BulkClaimRewards_C", "OnCostChanged");

	Params::BPS24_BulkClaimRewards_C_OnCostChanged Parms{};

	Parms.Cost = Cost;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BulkClaimRewards_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BulkClaimRewards_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_BulkClaimRewards_C::OnPageRangeChanged(const int32 FromPage, const int32 ToPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BulkClaimRewards_C", "OnPageRangeChanged");

	Params::BPS24_BulkClaimRewards_C_OnPageRangeChanged Parms{};

	Parms.FromPage = FromPage;
	Parms.ToPage = ToPage;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_BulkClaimRewards_C::OnRewardCountChanged(const int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_BulkClaimRewards_C", "OnRewardCountChanged");

	Params::BPS24_BulkClaimRewards_C_OnRewardCountChanged Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

}
