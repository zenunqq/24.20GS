#pragma once

#include "Basic.hpp"

#include "AutomationUtils_classes.hpp"
#include "AutomationUtils_parameters.hpp"

namespace SDK
{

void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AutomationUtilsBlueprintLibrary", "TakeGameplayAutomationScreenshot");

	Params::AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot Parms{};

	Parms.ScreenshotName = std::move(ScreenshotName);
	Parms.MaxGlobalError = MaxGlobalError;
	Parms.MaxLocalError = MaxLocalError;
	Parms.MapNameOverride = std::move(MapNameOverride);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
