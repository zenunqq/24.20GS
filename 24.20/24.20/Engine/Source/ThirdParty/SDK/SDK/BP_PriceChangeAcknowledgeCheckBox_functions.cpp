#pragma once

#include "Basic.hpp"

#include "BP_PriceChangeAcknowledgeCheckBox_classes.hpp"
#include "BP_PriceChangeAcknowledgeCheckBox_parameters.hpp"

namespace SDK
{

void UBP_PriceChangeAcknowledgeCheckBox_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PriceChangeAcknowledgeCheckBox_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_PriceChangeAcknowledgeCheckBox_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PriceChangeAcknowledgeCheckBox_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_PriceChangeAcknowledgeCheckBox_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PriceChangeAcknowledgeCheckBox_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_PriceChangeAcknowledgeCheckBox_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PriceChangeAcknowledgeCheckBox_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_PriceChangeAcknowledgeCheckBox_C::ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PriceChangeAcknowledgeCheckBox_C", "ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox");

	Params::BP_PriceChangeAcknowledgeCheckBox_C_ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
