#pragma once

#include "Basic.hpp"

#include "EntityCore_classes.hpp"

namespace SDK
{

void UEntityEnableableComponent::OnRep_Enabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EntityEnableableComponent", "OnRep_Enabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
