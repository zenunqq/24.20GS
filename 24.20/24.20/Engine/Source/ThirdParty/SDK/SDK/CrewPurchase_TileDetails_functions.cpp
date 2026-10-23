#pragma once

#include "Basic.hpp"

#include "CrewPurchase_TileDetails_classes.hpp"
#include "CrewPurchase_TileDetails_parameters.hpp"

namespace SDK
{

void UCrewPurchase_TileDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchase_TileDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchase_TileDetails_C::EventIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchase_TileDetails_C", "EventIntro");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchase_TileDetails_C::ExecuteUbergraph_CrewPurchase_TileDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchase_TileDetails_C", "ExecuteUbergraph_CrewPurchase_TileDetails");

	Params::CrewPurchase_TileDetails_C_ExecuteUbergraph_CrewPurchase_TileDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchase_TileDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchase_TileDetails_C", "PreConstruct");

	Params::CrewPurchase_TileDetails_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
