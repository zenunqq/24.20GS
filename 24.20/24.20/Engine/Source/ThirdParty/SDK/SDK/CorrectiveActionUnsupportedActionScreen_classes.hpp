#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCorrectiveActionUnsupportedActionScreen_C final : public UFortCorrectiveActionUnsupportedActionScreen
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CorrectiveActionUnsupportedActionScreen_C">();
	}
	static class UCorrectiveActionUnsupportedActionScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorrectiveActionUnsupportedActionScreen_C>();
	}
};
static_assert(alignof(UCorrectiveActionUnsupportedActionScreen_C) == 0x000008, "Wrong alignment on UCorrectiveActionUnsupportedActionScreen_C");
static_assert(sizeof(UCorrectiveActionUnsupportedActionScreen_C) == 0x0003E0, "Wrong size on UCorrectiveActionUnsupportedActionScreen_C");

}
