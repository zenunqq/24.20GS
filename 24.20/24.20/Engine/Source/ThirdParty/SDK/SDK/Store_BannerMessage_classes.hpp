#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UStore_BannerMessage_C final : public UFortStoreBanner
{
public:
	class UWidgetAnimation*                       Ani_Intro;
	class UImage*                                 AnimatingBorder;

public:
	void Pulse();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Store_BannerMessage_C">();
	}
	static class UStore_BannerMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStore_BannerMessage_C>();
	}
};
static_assert(alignof(UStore_BannerMessage_C) == 0x000008, "Wrong alignment on UStore_BannerMessage_C");
static_assert(sizeof(UStore_BannerMessage_C) == 0x0002A8, "Wrong size on UStore_BannerMessage_C");
static_assert(offsetof(UStore_BannerMessage_C, Ani_Intro) == 0x000298, "Member 'UStore_BannerMessage_C::Ani_Intro' has a wrong offset!");
static_assert(offsetof(UStore_BannerMessage_C, AnimatingBorder) == 0x0002A0, "Member 'UStore_BannerMessage_C::AnimatingBorder' has a wrong offset!");

}
