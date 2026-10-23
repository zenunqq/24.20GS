#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class ULocalizedCountdownDisplay_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalizedCountdownDisplay_C">();
	}
	static class ULocalizedCountdownDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalizedCountdownDisplay_C>();
	}
};
static_assert(alignof(ULocalizedCountdownDisplay_C) == 0x000008, "Wrong alignment on ULocalizedCountdownDisplay_C");
static_assert(sizeof(ULocalizedCountdownDisplay_C) == 0x000268, "Wrong size on ULocalizedCountdownDisplay_C");

}
