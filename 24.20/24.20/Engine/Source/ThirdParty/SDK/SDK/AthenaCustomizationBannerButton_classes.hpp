#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaCustomizationBannerButton_C final : public UFortBannerSlotButton
{
public:
	class UNormalBangWrapper_C*                   NormalBangWrapper;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationBannerButton_C">();
	}
	static class UAthenaCustomizationBannerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationBannerButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationBannerButton_C) == 0x000010, "Wrong alignment on UAthenaCustomizationBannerButton_C");
static_assert(sizeof(UAthenaCustomizationBannerButton_C) == 0x001450, "Wrong size on UAthenaCustomizationBannerButton_C");
static_assert(offsetof(UAthenaCustomizationBannerButton_C, NormalBangWrapper) == 0x001440, "Member 'UAthenaCustomizationBannerButton_C::NormalBangWrapper' has a wrong offset!");

}
