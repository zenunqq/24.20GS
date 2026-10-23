#pragma once

#include "Basic.hpp"

#include "Spatial_Specialbutton_classes.hpp"
#include "Spatial_Specialbutton_parameters.hpp"

namespace SDK
{

void USpatial_Specialbutton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spatial_Specialbutton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USpatial_Specialbutton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spatial_Specialbutton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void USpatial_Specialbutton_C::ExecuteUbergraph_Spatial_Specialbutton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spatial_Specialbutton_C", "ExecuteUbergraph_Spatial_Specialbutton");

	Params::Spatial_Specialbutton_C_ExecuteUbergraph_Spatial_Specialbutton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USpatial_Specialbutton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spatial_Specialbutton_C", "PreConstruct");

	Params::Spatial_Specialbutton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
