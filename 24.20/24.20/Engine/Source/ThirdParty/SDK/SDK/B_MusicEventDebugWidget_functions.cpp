#pragma once

#include "Basic.hpp"

#include "B_MusicEventDebugWidget_classes.hpp"
#include "B_MusicEventDebugWidget_parameters.hpp"

namespace SDK
{

void UB_MusicEventDebugWidget_C::ExecuteUbergraph_B_MusicEventDebugWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventDebugWidget_C", "ExecuteUbergraph_B_MusicEventDebugWidget");

	Params::B_MusicEventDebugWidget_C_ExecuteUbergraph_B_MusicEventDebugWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventDebugWidget_C::FilterInstances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventDebugWidget_C", "FilterInstances");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_MusicEventDebugWidget_C::SetEventInstances(const TArray<class UMusicEventInstance*>& Instances_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventDebugWidget_C", "SetEventInstances");

	Params::B_MusicEventDebugWidget_C_SetEventInstances Parms{};

	Parms.Instances_0 = std::move(Instances_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventDebugWidget_C::SetMusicEventAssetFilter(const class FString& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventDebugWidget_C", "SetMusicEventAssetFilter");

	Params::B_MusicEventDebugWidget_C_SetMusicEventAssetFilter Parms{};

	Parms.Filter = std::move(Filter);

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventDebugWidget_C::SetMusicEventFontSize(int32 Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventDebugWidget_C", "SetMusicEventFontSize");

	Params::B_MusicEventDebugWidget_C_SetMusicEventFontSize Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_MusicEventDebugWidget_C::SetMusicEventPos(double X, double Y)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_MusicEventDebugWidget_C", "SetMusicEventPos");

	Params::B_MusicEventDebugWidget_C_SetMusicEventPos Parms{};

	Parms.X = X;
	Parms.Y = Y;

	UObject::ProcessEvent(Func, &Parms);
}

}
