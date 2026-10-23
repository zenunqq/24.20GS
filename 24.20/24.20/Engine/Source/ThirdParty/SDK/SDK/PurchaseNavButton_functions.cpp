#pragma once

#include "Basic.hpp"

#include "PurchaseNavButton_classes.hpp"
#include "PurchaseNavButton_parameters.hpp"

namespace SDK
{

void UPurchaseNavButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::EventSetupPeriodicTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "EventSetupPeriodicTimer");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::ExecuteUbergraph_PurchaseNavButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "ExecuteUbergraph_PurchaseNavButton");

	Params::PurchaseNavButton_C_ExecuteUbergraph_PurchaseNavButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPurchaseNavButton_C::PlayPeriodicAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "PlayPeriodicAnim");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "PreConstruct");

	Params::PurchaseNavButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPurchaseNavButton_C::ResetHoverAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "ResetHoverAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UPurchaseNavButton_C::UpdateTextSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseNavButton_C", "UpdateTextSize");

	UObject::ProcessEvent(Func, nullptr);
}

}
