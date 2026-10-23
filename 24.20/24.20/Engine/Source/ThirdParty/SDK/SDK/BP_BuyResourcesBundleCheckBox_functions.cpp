#pragma once

#include "Basic.hpp"

#include "BP_BuyResourcesBundleCheckBox_classes.hpp"
#include "BP_BuyResourcesBundleCheckBox_parameters.hpp"

namespace SDK
{

void UBP_BuyResourcesBundleCheckBox_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuyResourcesBundleCheckBox_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BuyResourcesBundleCheckBox_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuyResourcesBundleCheckBox_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BuyResourcesBundleCheckBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuyResourcesBundleCheckBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_BuyResourcesBundleCheckBox_C::ExecuteUbergraph_BP_BuyResourcesBundleCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuyResourcesBundleCheckBox_C", "ExecuteUbergraph_BP_BuyResourcesBundleCheckBox");

	Params::BP_BuyResourcesBundleCheckBox_C_ExecuteUbergraph_BP_BuyResourcesBundleCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_BuyResourcesBundleCheckBox_C::OnStateChanged(const bool bNewIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuyResourcesBundleCheckBox_C", "OnStateChanged");

	Params::BP_BuyResourcesBundleCheckBox_C_OnStateChanged Parms{};

	Parms.bNewIsChecked = bNewIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}
