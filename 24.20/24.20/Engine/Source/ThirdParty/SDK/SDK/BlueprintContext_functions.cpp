#pragma once

#include "Basic.hpp"

#include "BlueprintContext_classes.hpp"
#include "BlueprintContext_parameters.hpp"

namespace SDK
{

class USubsystem* UBlueprintContextLibrary::GetContext(class UObject* ContextObject, TSubclassOf<class USubsystem> Class_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BlueprintContextLibrary", "GetContext");

	Params::BlueprintContextLibrary_GetContext Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Class_0 = Class_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
