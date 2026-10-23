#pragma once

#include "Basic.hpp"

#include "CRD_ModalDialogRuntime_classes.hpp"
#include "CRD_ModalDialogRuntime_parameters.hpp"

namespace SDK
{

bool UModalDialogVariant::ShouldUseModalDialogTemplateWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ModalDialogVariant", "ShouldUseModalDialogTemplateWidgets");

	Params::ModalDialogVariant_ShouldUseModalDialogTemplateWidgets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UModalDialogVariant::AttemptToPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModalDialogVariant", "AttemptToPlayOpenAnimation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UModalDialogVariant::AttemptToPlayResponseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModalDialogVariant", "AttemptToPlayResponseAnimation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UModalDialogVariant::HandleResponseAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModalDialogVariant", "HandleResponseAnimationFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UModalDialogVariant::HasResponseAnimation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModalDialogVariant", "HasResponseAnimation");

	Params::ModalDialogVariant_HasResponseAnimation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
