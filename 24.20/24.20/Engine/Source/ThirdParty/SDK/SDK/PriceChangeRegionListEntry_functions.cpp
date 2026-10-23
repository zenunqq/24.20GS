#pragma once

#include "Basic.hpp"

#include "PriceChangeRegionListEntry_classes.hpp"
#include "PriceChangeRegionListEntry_parameters.hpp"

namespace SDK
{

void UPriceChangeRegionListEntry_C::SetItem(const struct FCrewTableRow& CrewTableRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PriceChangeRegionListEntry_C", "SetItem");

	Params::PriceChangeRegionListEntry_C_SetItem Parms{};

	Parms.CrewTableRow = std::move(CrewTableRow);

	UObject::ProcessEvent(Func, &Parms);
}

void UPriceChangeRegionListEntry_C::ExecuteUbergraph_PriceChangeRegionListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PriceChangeRegionListEntry_C", "ExecuteUbergraph_PriceChangeRegionListEntry");

	Params::PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
