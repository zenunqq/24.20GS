#pragma once

#include "Basic.hpp"

#include "CosmeticsFrameworkEvents_classes.hpp"
#include "CosmeticsFrameworkEvents_parameters.hpp"

namespace SDK
{

struct FCosmeticsEventHandle ICosmeticsEventTarget::RegisterOnCosmeticApplicationCompleted_BP(const TDelegate<void(TScriptInterface<class ICosmeticsEventTarget>& EventTarget)>& Delegate, int32 Flags_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CosmeticsEventTarget", "RegisterOnCosmeticApplicationCompleted_BP");

	Params::CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP Parms{};

	Parms.Delegate = Delegate;
	Parms.Flags_0 = Flags_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
