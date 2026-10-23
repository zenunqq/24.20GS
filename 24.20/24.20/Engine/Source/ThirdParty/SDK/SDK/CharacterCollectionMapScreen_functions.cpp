#pragma once

#include "Basic.hpp"

#include "CharacterCollectionMapScreen_classes.hpp"
#include "CharacterCollectionMapScreen_parameters.hpp"

namespace SDK
{

void UCollectionNPCServiceWidget::PopulateData(const struct FNPCServiceWidgetData& WidgetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget", "PopulateData");

	Params::CollectionNPCServiceWidget_PopulateData Parms{};

	Parms.WidgetData = std::move(WidgetData);

	UObject::ProcessEvent(Func, &Parms);
}

void UCollectionNPCServiceWidget::PopulateEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionNPCServiceWidget", "PopulateEmpty");

	UObject::ProcessEvent(Func, nullptr);
}

}
