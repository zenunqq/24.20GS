#pragma once

#include "Basic.hpp"

#include "CollectionNPCServiceWidget_classes.hpp"
#include "CollectionNPCServiceWidget_parameters.hpp"

namespace SDK
{

void UCollectionNPCServiceWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCollectionNPCServiceWidget_C::ExecuteUbergraph_CollectionNPCServiceWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget_C", "ExecuteUbergraph_CollectionNPCServiceWidget");

	Params::CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCollectionNPCServiceWidget_C::PopulateData(const struct FNPCServiceWidgetData& WidgetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget_C", "PopulateData");

	Params::CollectionNPCServiceWidget_C_PopulateData Parms{};

	Parms.WidgetData = std::move(WidgetData);

	UObject::ProcessEvent(Func, &Parms);
}

void UCollectionNPCServiceWidget_C::PopulateEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget_C", "PopulateEmpty");

	UObject::ProcessEvent(Func, nullptr);
}

}
