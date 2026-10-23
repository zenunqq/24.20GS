#pragma once

#include "Basic.hpp"

#include "XpBarToolTip_classes.hpp"
#include "XpBarToolTip_parameters.hpp"

namespace SDK
{

class FText UXpBarToolTip_C::GetBodyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetBodyText");

	Params::XpBarToolTip_C_GetBodyText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UXpBarToolTip_C::GetBoostXPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetBoostXPText");

	Params::XpBarToolTip_C_GetBoostXPText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UXpBarToolTip_C::GetCommanderXPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetCommanderXPText");

	Params::XpBarToolTip_C_GetCommanderXPText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UXpBarToolTip_C::GetHeaderText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetHeaderText");

	Params::XpBarToolTip_C_GetHeaderText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText UXpBarToolTip_C::GetRestedXPText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBarToolTip_C", "GetRestedXPText");

	Params::XpBarToolTip_C_GetRestedXPText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
