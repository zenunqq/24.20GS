#pragma once

#include "Basic.hpp"

#include "UEKittUI_classes.hpp"
#include "UEKittUI_parameters.hpp"

namespace SDK
{

void UUEKittUIPanelWidget::SetupInput(bool bSetup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UEKittUIPanelWidget", "SetupInput");

	Params::UEKittUIPanelWidget_SetupInput Parms{};

	Parms.bSetup = bSetup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
