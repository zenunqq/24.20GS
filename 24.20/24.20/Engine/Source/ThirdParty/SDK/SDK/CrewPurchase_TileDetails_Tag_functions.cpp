#pragma once

#include "Basic.hpp"

#include "CrewPurchase_TileDetails_Tag_classes.hpp"
#include "CrewPurchase_TileDetails_Tag_parameters.hpp"

namespace SDK
{

void UCrewPurchase_TileDetails_Tag_C::OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchase_TileDetails_Tag_C", "OnTagSetup");

	Params::CrewPurchase_TileDetails_Tag_C_OnTagSetup Parms{};

	Parms.RewardTag = RewardTag;
	Parms.bIsOwnedTag = bIsOwnedTag;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchase_TileDetails_Tag_C::ExecuteUbergraph_CrewPurchase_TileDetails_Tag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchase_TileDetails_Tag_C", "ExecuteUbergraph_CrewPurchase_TileDetails_Tag");

	Params::CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
