#pragma once

#include "Basic.hpp"

#include "Tooltip_Custom_S_classes.hpp"
#include "Tooltip_Custom_S_parameters.hpp"

namespace SDK
{

void UTooltip_Custom_S_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Custom-S_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UTooltip_Custom_S_C::ExecuteUbergraph_Tooltip_Custom_S(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Custom-S_C", "ExecuteUbergraph_Tooltip-Custom-S");

	Params::Tooltip_Custom_S_C_ExecuteUbergraph_Tooltip_Custom_S Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class FText UTooltip_Custom_S_C::Get_Body_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Custom-S_C", "Get Body Text");

	Params::Tooltip_Custom_S_C_Get_Body_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UTooltip_Custom_S_C::Get_Header_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Custom-S_C", "Get Header Text");

	Params::Tooltip_Custom_S_C_Get_Header_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FSlateBrush UTooltip_Custom_S_C::Get_Icon_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Custom-S_C", "Get Icon Brush");

	Params::Tooltip_Custom_S_C_Get_Icon_Brush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
