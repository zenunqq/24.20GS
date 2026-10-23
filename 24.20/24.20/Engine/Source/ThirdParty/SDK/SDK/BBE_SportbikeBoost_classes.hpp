#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_SportbikeBoost_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_SportbikeBoost_C">();
	}
	static class UBBE_SportbikeBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_SportbikeBoost_C>();
	}
};
static_assert(alignof(UBBE_SportbikeBoost_C) == 0x000008, "Wrong alignment on UBBE_SportbikeBoost_C");
static_assert(sizeof(UBBE_SportbikeBoost_C) == 0x000070, "Wrong size on UBBE_SportbikeBoost_C");

}
