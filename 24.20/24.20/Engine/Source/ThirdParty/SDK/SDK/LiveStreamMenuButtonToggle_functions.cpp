#pragma once

#include "Basic.hpp"

#include "LiveStreamMenuButtonToggle_classes.hpp"
#include "LiveStreamMenuButtonToggle_parameters.hpp"

namespace SDK
{

void ULiveStreamMenuButtonToggle_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULiveStreamMenuButtonToggle_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void ULiveStreamMenuButtonToggle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void ULiveStreamMenuButtonToggle_C::ExecuteUbergraph_LiveStreamMenuButtonToggle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "ExecuteUbergraph_LiveStreamMenuButtonToggle");

	Params::LiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULiveStreamMenuButtonToggle_C::RefreshButton(bool IsLiveStreamEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "RefreshButton");

	Params::LiveStreamMenuButtonToggle_C_RefreshButton Parms{};

	Parms.IsLiveStreamEnabled = IsLiveStreamEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}
