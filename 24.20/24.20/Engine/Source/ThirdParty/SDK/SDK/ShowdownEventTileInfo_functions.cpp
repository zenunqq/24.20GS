#pragma once

#include "Basic.hpp"

#include "ShowdownEventTileInfo_classes.hpp"
#include "ShowdownEventTileInfo_parameters.hpp"

namespace SDK
{

void UShowdownEventTileInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTileInfo_C::EventAnimFocus(bool In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventAnimFocus");

	Params::ShowdownEventTileInfo_C_EventAnimFocus Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTileInfo_C::EventAnimHover(bool In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventAnimHover");

	Params::ShowdownEventTileInfo_C_EventAnimHover Parms{};

	Parms.In = In;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTileInfo_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTileInfo_C::EventStyleSocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "EventStyleSocket");

	UObject::ProcessEvent(Func, nullptr);
}

void UShowdownEventTileInfo_C::ExecuteUbergraph_ShowdownEventTileInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "ExecuteUbergraph_ShowdownEventTileInfo");

	Params::ShowdownEventTileInfo_C_ExecuteUbergraph_ShowdownEventTileInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownEventTileInfo_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownEventTileInfo_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
