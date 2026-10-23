#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot final
{
public:
	class FString                                 ScreenshotName;
	float                                         MaxGlobalError;
	float                                         MaxLocalError;
	class FString                                 MapNameOverride;
};
static_assert(alignof(AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot) == 0x000008, "Wrong alignment on AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot");
static_assert(sizeof(AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot) == 0x000028, "Wrong size on AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot");
static_assert(offsetof(AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, ScreenshotName) == 0x000000, "Member 'AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot::ScreenshotName' has a wrong offset!");
static_assert(offsetof(AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, MaxGlobalError) == 0x000010, "Member 'AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot::MaxGlobalError' has a wrong offset!");
static_assert(offsetof(AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, MaxLocalError) == 0x000014, "Member 'AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot::MaxLocalError' has a wrong offset!");
static_assert(offsetof(AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot, MapNameOverride) == 0x000018, "Member 'AutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot::MapNameOverride' has a wrong offset!");

}
