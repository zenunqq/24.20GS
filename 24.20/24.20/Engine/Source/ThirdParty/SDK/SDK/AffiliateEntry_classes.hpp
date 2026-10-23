#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAffiliateEntry_C final : public UFortAffiliateEntry
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AffiliateEntry_C">();
	}
	static class UAffiliateEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAffiliateEntry_C>();
	}
};
static_assert(alignof(UAffiliateEntry_C) == 0x000010, "Wrong alignment on UAffiliateEntry_C");
static_assert(sizeof(UAffiliateEntry_C) == 0x001450, "Wrong size on UAffiliateEntry_C");

}
