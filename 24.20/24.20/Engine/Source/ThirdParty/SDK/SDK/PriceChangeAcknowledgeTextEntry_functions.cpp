#pragma once

#include "Basic.hpp"

#include "PriceChangeAcknowledgeTextEntry_classes.hpp"
#include "PriceChangeAcknowledgeTextEntry_parameters.hpp"

namespace SDK
{

void UPriceChangeAcknowledgeTextEntry_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PriceChangeAcknowledgeTextEntry_C", "SetText");

	Params::PriceChangeAcknowledgeTextEntry_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

void UPriceChangeAcknowledgeTextEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PriceChangeAcknowledgeTextEntry_C", "PreConstruct");

	Params::PriceChangeAcknowledgeTextEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPriceChangeAcknowledgeTextEntry_C::ExecuteUbergraph_PriceChangeAcknowledgeTextEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PriceChangeAcknowledgeTextEntry_C", "ExecuteUbergraph_PriceChangeAcknowledgeTextEntry");

	Params::PriceChangeAcknowledgeTextEntry_C_ExecuteUbergraph_PriceChangeAcknowledgeTextEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPriceChangeAcknowledgeTextEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PriceChangeAcknowledgeTextEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
