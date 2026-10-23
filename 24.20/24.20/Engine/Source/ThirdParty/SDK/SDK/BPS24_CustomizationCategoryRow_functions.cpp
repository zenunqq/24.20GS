#pragma once

#include "Basic.hpp"

#include "BPS24_CustomizationCategoryRow_classes.hpp"
#include "BPS24_CustomizationCategoryRow_parameters.hpp"

namespace SDK
{

void UBPS24_CustomizationCategoryRow_C::ExecuteUbergraph_BPS24_CustomizationCategoryRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_CustomizationCategoryRow_C", "ExecuteUbergraph_BPS24_CustomizationCategoryRow");

	Params::BPS24_CustomizationCategoryRow_C_ExecuteUbergraph_BPS24_CustomizationCategoryRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_CustomizationCategoryRow_C::OnLockedProgressUpdated(const int32 CurrentlyOwnedBeforeCategory, const int32 TotalRewardsBeforeCategory, const float LockedProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_CustomizationCategoryRow_C", "OnLockedProgressUpdated");

	Params::BPS24_CustomizationCategoryRow_C_OnLockedProgressUpdated Parms{};

	Parms.CurrentlyOwnedBeforeCategory = CurrentlyOwnedBeforeCategory;
	Parms.TotalRewardsBeforeCategory = TotalRewardsBeforeCategory;
	Parms.LockedProgress = LockedProgress;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_CustomizationCategoryRow_C::OnLockedStateChanged(const bool bCategoryLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_CustomizationCategoryRow_C", "OnLockedStateChanged");

	Params::BPS24_CustomizationCategoryRow_C_OnLockedStateChanged Parms{};

	Parms.bCategoryLocked = bCategoryLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_CustomizationCategoryRow_C::OnOwnedTilesUpdated(const int32 CurrentlyOwnedRewards, const int32 TotalRewards, const float CategoryProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_CustomizationCategoryRow_C", "OnOwnedTilesUpdated");

	Params::BPS24_CustomizationCategoryRow_C_OnOwnedTilesUpdated Parms{};

	Parms.CurrentlyOwnedRewards = CurrentlyOwnedRewards;
	Parms.TotalRewards = TotalRewards;
	Parms.CategoryProgress = CategoryProgress;

	UObject::ProcessEvent(Func, &Parms);
}

}
