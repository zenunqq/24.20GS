#pragma once

#include "Basic.hpp"

#include "BackButtonSmall_classes.hpp"
#include "BackButtonSmall_parameters.hpp"

namespace SDK
{

void UBackButtonSmall_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackButtonSmall_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UBackButtonSmall_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackButtonSmall_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBackButtonSmall_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackButtonSmall_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBackButtonSmall_C::ExecuteUbergraph_BackButtonSmall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackButtonSmall_C", "ExecuteUbergraph_BackButtonSmall");

	Params::BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBackButtonSmall_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackButtonSmall_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}
