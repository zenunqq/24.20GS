#pragma once

#include "Basic.hpp"

#include "EpicMediaCDNHostnames_classes.hpp"
#include "EpicMediaCDNHostnames_parameters.hpp"

namespace SDK
{

class FString UEpicMediaCDNHostnames::GetSelectedHostName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicMediaCDNHostnames", "GetSelectedHostName");

	Params::EpicMediaCDNHostnames_GetSelectedHostName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
