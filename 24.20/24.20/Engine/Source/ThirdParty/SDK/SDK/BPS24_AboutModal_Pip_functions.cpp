#pragma once

#include "Basic.hpp"

#include "BPS24_AboutModal_Pip_classes.hpp"
#include "BPS24_AboutModal_Pip_parameters.hpp"

namespace SDK
{

void UBPS24_AboutModal_Pip_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_AboutModal_Pip_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_AboutModal_Pip_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_AboutModal_Pip_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_AboutModal_Pip_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_AboutModal_Pip_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UBPS24_AboutModal_Pip_C::ExecuteUbergraph_BPS24_AboutModal_Pip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_AboutModal_Pip_C", "ExecuteUbergraph_BPS24_AboutModal_Pip");

	Params::BPS24_AboutModal_Pip_C_ExecuteUbergraph_BPS24_AboutModal_Pip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBPS24_AboutModal_Pip_C::Is_Focused(bool Is_Focused_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPS24_AboutModal_Pip_C", "Is Focused");

	Params::BPS24_AboutModal_Pip_C_Is_Focused Parms{};

	Parms.Is_Focused_0 = Is_Focused_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
