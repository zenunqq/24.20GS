#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCorrectiveActionFlow_C final : public UFortCorrectiveActionFlow
{
public:
	class UImage*                                 FortniteLogo;
	class USafeZone*                              SafeZone;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CorrectiveActionFlow_C">();
	}
	static class UCorrectiveActionFlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCorrectiveActionFlow_C>();
	}
};
static_assert(alignof(UCorrectiveActionFlow_C) == 0x000008, "Wrong alignment on UCorrectiveActionFlow_C");
static_assert(sizeof(UCorrectiveActionFlow_C) == 0x000408, "Wrong size on UCorrectiveActionFlow_C");
static_assert(offsetof(UCorrectiveActionFlow_C, FortniteLogo) == 0x0003F8, "Member 'UCorrectiveActionFlow_C::FortniteLogo' has a wrong offset!");
static_assert(offsetof(UCorrectiveActionFlow_C, SafeZone) == 0x000400, "Member 'UCorrectiveActionFlow_C::SafeZone' has a wrong offset!");

}
