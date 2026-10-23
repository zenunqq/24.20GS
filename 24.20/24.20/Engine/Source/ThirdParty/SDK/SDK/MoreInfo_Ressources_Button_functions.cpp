#pragma once

#include "Basic.hpp"

#include "MoreInfo_Ressources_Button_classes.hpp"
#include "MoreInfo_Ressources_Button_parameters.hpp"

namespace SDK
{

void UMoreInfo_Ressources_Button_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoreInfo_Ressources_Button_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMoreInfo_Ressources_Button_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoreInfo_Ressources_Button_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMoreInfo_Ressources_Button_C::ExecuteUbergraph_MoreInfo_Ressources_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoreInfo_Ressources_Button_C", "ExecuteUbergraph_MoreInfo_Ressources_Button");

	Params::MoreInfo_Ressources_Button_C_ExecuteUbergraph_MoreInfo_Ressources_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
