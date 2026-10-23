#pragma once

#include "Basic.hpp"

#include "ItemReceivedAccountWidget_classes.hpp"
#include "ItemReceivedAccountWidget_parameters.hpp"

namespace SDK
{

void UItemReceivedAccountWidget_C::ExecuteUbergraph_ItemReceivedAccountWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedAccountWidget_C", "ExecuteUbergraph_ItemReceivedAccountWidget");

	Params::ItemReceivedAccountWidget_C_ExecuteUbergraph_ItemReceivedAccountWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemReceivedAccountWidget_C::OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedAccountWidget_C", "OnAccountInfoChanged");

	Params::ItemReceivedAccountWidget_C_OnAccountInfoChanged Parms{};

	Parms.Result = std::move(Result);

	UObject::ProcessEvent(Func, &Parms);
}

}
