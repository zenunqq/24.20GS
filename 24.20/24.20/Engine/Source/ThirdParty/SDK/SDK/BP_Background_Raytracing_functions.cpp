#pragma once

#include "Basic.hpp"

#include "BP_Background_Raytracing_classes.hpp"
#include "BP_Background_Raytracing_parameters.hpp"

namespace SDK
{

void ABP_Background_Raytracing_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Background_Raytracing_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
