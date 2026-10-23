#pragma once

#include "Basic.hpp"

#include "PictureInPictureDescriptors_classes.hpp"

namespace SDK
{

void UPictureInPictureActionData::CallEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureActionData", "CallEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
