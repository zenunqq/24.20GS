#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class URebootRallyPopupModalButtonStyle_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RebootRallyPopupModalButtonStyle_C">();
	}
	static class URebootRallyPopupModalButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URebootRallyPopupModalButtonStyle_C>();
	}
};
static_assert(alignof(URebootRallyPopupModalButtonStyle_C) == 0x000010, "Wrong alignment on URebootRallyPopupModalButtonStyle_C");
static_assert(sizeof(URebootRallyPopupModalButtonStyle_C) == 0x000730, "Wrong size on URebootRallyPopupModalButtonStyle_C");

}
