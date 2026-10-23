#pragma once

#include "Basic.hpp"

#include "AthenaMapLayerContainer_classes.hpp"
#include "AthenaMapLayerContainer_parameters.hpp"

namespace SDK
{

void UAthenaMapLayerContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapLayerContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapLayerContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapLayerContainer_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaMapLayerContainer_C::ExecuteUbergraph_AthenaMapLayerContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapLayerContainer_C", "ExecuteUbergraph_AthenaMapLayerContainer");

	Params::AthenaMapLayerContainer_C_ExecuteUbergraph_AthenaMapLayerContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaMapLayerContainer_C::OnFullScreenMapToggle(bool bFullscreenMapVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaMapLayerContainer_C", "OnFullScreenMapToggle");

	Params::AthenaMapLayerContainer_C_OnFullScreenMapToggle Parms{};

	Parms.bFullscreenMapVisible = bFullscreenMapVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}
