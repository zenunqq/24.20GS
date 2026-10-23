#pragma once

#include "Basic.hpp"

#include "TODM_Disabled_classes.hpp"
#include "TODM_Disabled_parameters.hpp"

namespace SDK
{

void ATODM_Disabled_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ATODM_Disabled_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ATODM_Disabled_C::ExecuteUbergraph_TODM_Disabled(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "ExecuteUbergraph_TODM_Disabled");

	Params::TODM_Disabled_C_ExecuteUbergraph_TODM_Disabled Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ATODM_Disabled_C::DisableLightAndFog(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TODM_Disabled_C", "DisableLightAndFog");

	Params::TODM_Disabled_C_DisableLightAndFog Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}
