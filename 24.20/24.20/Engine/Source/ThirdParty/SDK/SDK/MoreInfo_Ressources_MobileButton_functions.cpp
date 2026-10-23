#pragma once

#include "Basic.hpp"

#include "MoreInfo_Ressources_MobileButton_classes.hpp"
#include "MoreInfo_Ressources_MobileButton_parameters.hpp"

namespace SDK
{

void UMoreInfo_Ressources_MobileButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoreInfo_Ressources_MobileButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMoreInfo_Ressources_MobileButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoreInfo_Ressources_MobileButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMoreInfo_Ressources_MobileButton_C::ExecuteUbergraph_MoreInfo_Ressources_MobileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MoreInfo_Ressources_MobileButton_C", "ExecuteUbergraph_MoreInfo_Ressources_MobileButton");

	Params::MoreInfo_Ressources_MobileButton_C_ExecuteUbergraph_MoreInfo_Ressources_MobileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
