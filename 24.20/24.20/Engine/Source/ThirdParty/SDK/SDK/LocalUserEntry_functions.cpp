#pragma once

#include "Basic.hpp"

#include "LocalUserEntry_classes.hpp"
#include "LocalUserEntry_parameters.hpp"

namespace SDK
{

void ULocalUserEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULocalUserEntry_C::ExecuteUbergraph_LocalUserEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "ExecuteUbergraph_LocalUserEntry");

	Params::LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULocalUserEntry_C::HandleOnlineIndicatorView(ELocalUserOnlineStatus InLocalUserOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "HandleOnlineIndicatorView");

	Params::LocalUserEntry_C_HandleOnlineIndicatorView Parms{};

	Parms.InLocalUserOnlineStatus = InLocalUserOnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

void ULocalUserEntry_C::OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LocalUserEntry_C", "OnOnlineStatusChanged");

	Params::LocalUserEntry_C_OnOnlineStatusChanged Parms{};

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}
