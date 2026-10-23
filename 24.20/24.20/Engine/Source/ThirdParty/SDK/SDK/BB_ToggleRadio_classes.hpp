#pragma once

#include "Basic.hpp"

#include "SrirachaRanchUI_classes.hpp"

namespace SDK
{

class UBB_ToggleRadio_C final : public UFortMobileActionButtonBehavior_ToggleRadio
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_ToggleRadio_C">();
	}
	static class UBB_ToggleRadio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_ToggleRadio_C>();
	}
};
static_assert(alignof(UBB_ToggleRadio_C) == 0x000008, "Wrong alignment on UBB_ToggleRadio_C");
static_assert(sizeof(UBB_ToggleRadio_C) == 0x000120, "Wrong size on UBB_ToggleRadio_C");

}
