#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class URestrictedCountryRatingIcons_C final : public URestrictedCountryRatingIcons
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RestrictedCountryRatingIcons_C">();
	}
	static class URestrictedCountryRatingIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URestrictedCountryRatingIcons_C>();
	}
};
static_assert(alignof(URestrictedCountryRatingIcons_C) == 0x000008, "Wrong alignment on URestrictedCountryRatingIcons_C");
static_assert(sizeof(URestrictedCountryRatingIcons_C) == 0x0002A0, "Wrong size on URestrictedCountryRatingIcons_C");

}
