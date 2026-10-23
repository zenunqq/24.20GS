#pragma once

#include "Basic.hpp"

#include "InfernoRuntime_classes.hpp"

namespace SDK
{

void UFortCurieVoxelFireNativeFXHandler::OnUserSettingsEffectQualityChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCurieVoxelFireNativeFXHandler", "OnUserSettingsEffectQualityChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
