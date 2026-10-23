#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UShowdownDivisionPayoutInfo_C final : public UFortDivisionPayoutInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownDivisionPayoutInfo_C">();
	}
	static class UShowdownDivisionPayoutInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownDivisionPayoutInfo_C>();
	}
};
static_assert(alignof(UShowdownDivisionPayoutInfo_C) == 0x000008, "Wrong alignment on UShowdownDivisionPayoutInfo_C");
static_assert(sizeof(UShowdownDivisionPayoutInfo_C) == 0x000758, "Wrong size on UShowdownDivisionPayoutInfo_C");

}
