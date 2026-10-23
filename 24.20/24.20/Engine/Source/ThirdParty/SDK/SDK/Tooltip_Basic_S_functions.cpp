#pragma once

#include "Basic.hpp"

#include "Tooltip_Basic_S_classes.hpp"
#include "Tooltip_Basic_S_parameters.hpp"

namespace SDK
{

void UTooltip_Basic_S_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Basic-S_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UTooltip_Basic_S_C::ExecuteUbergraph_Tooltip_Basic_S(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Basic-S_C", "ExecuteUbergraph_Tooltip-Basic-S");

	Params::Tooltip_Basic_S_C_ExecuteUbergraph_Tooltip_Basic_S Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class FText UTooltip_Basic_S_C::Get_Body_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Basic-S_C", "Get Body Text");

	Params::Tooltip_Basic_S_C_Get_Body_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UTooltip_Basic_S_C::Get_Header_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Basic-S_C", "Get Header Text");

	Params::Tooltip_Basic_S_C_Get_Header_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FSlateBrush UTooltip_Basic_S_C::Get_Icon_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Tooltip-Basic-S_C", "Get Icon Brush");

	Params::Tooltip_Basic_S_C_Get_Icon_Brush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
