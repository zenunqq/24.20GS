#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_NevadaTractorBeam_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_NevadaTractorBeam_C">();
	}
	static class UBB_NevadaTractorBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_NevadaTractorBeam_C>();
	}
};
static_assert(alignof(UBB_NevadaTractorBeam_C) == 0x000008, "Wrong alignment on UBB_NevadaTractorBeam_C");
static_assert(sizeof(UBB_NevadaTractorBeam_C) == 0x000110, "Wrong size on UBB_NevadaTractorBeam_C");

}
