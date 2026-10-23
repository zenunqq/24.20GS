#pragma once

#include "Basic.hpp"

#include "ShowdownEventTileViolator_classes.hpp"
#include "ShowdownEventTileViolator_parameters.hpp"

namespace SDK
{

void UShowdownEventTileViolator_C::RefreshViolatorData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "RefreshViolatorData");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTileViolator_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTileViolator_C::ExecuteUbergraph_ShowdownEventTileViolator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "ExecuteUbergraph_ShowdownEventTileViolator");

	Params::ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTileViolator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
