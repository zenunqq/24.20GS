#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FocusButton_HandleCanUseEventModeFocusChanged final
{
public:
	bool                                          bCanUseEventModeFocus;
};
static_assert(alignof(FocusButton_HandleCanUseEventModeFocusChanged) == 0x000001, "Wrong alignment on FocusButton_HandleCanUseEventModeFocusChanged");
static_assert(sizeof(FocusButton_HandleCanUseEventModeFocusChanged) == 0x000001, "Wrong size on FocusButton_HandleCanUseEventModeFocusChanged");
static_assert(offsetof(FocusButton_HandleCanUseEventModeFocusChanged, bCanUseEventModeFocus) == 0x000000, "Member 'FocusButton_HandleCanUseEventModeFocusChanged::bCanUseEventModeFocus' has a wrong offset!");

struct FocusButton_HandleEventModeFocusingChanged final
{
public:
	bool                                          bIsEventModeFocusing;
};
static_assert(alignof(FocusButton_HandleEventModeFocusingChanged) == 0x000001, "Wrong alignment on FocusButton_HandleEventModeFocusingChanged");
static_assert(sizeof(FocusButton_HandleEventModeFocusingChanged) == 0x000001, "Wrong size on FocusButton_HandleEventModeFocusingChanged");
static_assert(offsetof(FocusButton_HandleEventModeFocusingChanged, bIsEventModeFocusing) == 0x000000, "Member 'FocusButton_HandleEventModeFocusingChanged::bIsEventModeFocusing' has a wrong offset!");

struct FortEventModeEmotesWidget_OnFocusAvailableChanged final
{
public:
	bool                                          bIsFocusAvailable;
};
static_assert(alignof(FortEventModeEmotesWidget_OnFocusAvailableChanged) == 0x000001, "Wrong alignment on FortEventModeEmotesWidget_OnFocusAvailableChanged");
static_assert(sizeof(FortEventModeEmotesWidget_OnFocusAvailableChanged) == 0x000001, "Wrong size on FortEventModeEmotesWidget_OnFocusAvailableChanged");
static_assert(offsetof(FortEventModeEmotesWidget_OnFocusAvailableChanged, bIsFocusAvailable) == 0x000000, "Member 'FortEventModeEmotesWidget_OnFocusAvailableChanged::bIsFocusAvailable' has a wrong offset!");

struct FortEventModeEmotesWidget_OnFocusStateChanged final
{
public:
	bool                                          bIsFocusing;
};
static_assert(alignof(FortEventModeEmotesWidget_OnFocusStateChanged) == 0x000001, "Wrong alignment on FortEventModeEmotesWidget_OnFocusStateChanged");
static_assert(sizeof(FortEventModeEmotesWidget_OnFocusStateChanged) == 0x000001, "Wrong size on FortEventModeEmotesWidget_OnFocusStateChanged");
static_assert(offsetof(FortEventModeEmotesWidget_OnFocusStateChanged, bIsFocusing) == 0x000000, "Member 'FortEventModeEmotesWidget_OnFocusStateChanged::bIsFocusing' has a wrong offset!");

struct FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged final
{
public:
	bool                                          bCanUseEventModeFocus;
};
static_assert(alignof(FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged) == 0x000001, "Wrong alignment on FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged");
static_assert(sizeof(FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged) == 0x000001, "Wrong size on FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged");
static_assert(offsetof(FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged, bCanUseEventModeFocus) == 0x000000, "Member 'FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged::bCanUseEventModeFocus' has a wrong offset!");

struct FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged final
{
public:
	bool                                          bIsEventModeFocusing;
};
static_assert(alignof(FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged) == 0x000001, "Wrong alignment on FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged");
static_assert(sizeof(FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged) == 0x000001, "Wrong size on FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged");
static_assert(offsetof(FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged, bIsEventModeFocusing) == 0x000000, "Member 'FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged::bIsEventModeFocusing' has a wrong offset!");

}
