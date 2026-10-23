#pragma once

#include "Basic.hpp"

#include "AthenaWatchers_classes.hpp"
#include "AthenaWatchers_parameters.hpp"

namespace SDK
{

void UAthenaWatchers_C::SpectatorsEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorsEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaWatchers_C::SpectatorsBegan(bool bBigGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorsBegan");

	Params::AthenaWatchers_C_SpectatorsBegan Parms{};

	Parms.bBigGroup = bBigGroup;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaWatchers_C::SpectatorsAdded(bool bBigGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorsAdded");

	Params::AthenaWatchers_C_SpectatorsAdded Parms{};

	Parms.bBigGroup = bBigGroup;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaWatchers_C::SpectatorRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorRemoved");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaWatchers_C::SpectatorCountChanged_BP(int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatchers_C", "SpectatorCountChanged_BP");

	Params::AthenaWatchers_C_SpectatorCountChanged_BP Parms{};

	Parms.NewCount = NewCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaWatchers_C::ExecuteUbergraph_AthenaWatchers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWatchers_C", "ExecuteUbergraph_AthenaWatchers");

	Params::AthenaWatchers_C_ExecuteUbergraph_AthenaWatchers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
