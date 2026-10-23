#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_RebootRallyIcon_C final : public URebootRallyIcon
{
public:
	class UWidgetAnimation*                       Highlighted;
	class UWidgetAnimation*                       Default;
	class UImage*                                 Image_RebootRally;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RebootRallyIcon_C">();
	}
	static class UWBP_RebootRallyIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RebootRallyIcon_C>();
	}
};
static_assert(alignof(UWBP_RebootRallyIcon_C) == 0x000008, "Wrong alignment on UWBP_RebootRallyIcon_C");
static_assert(sizeof(UWBP_RebootRallyIcon_C) == 0x000298, "Wrong size on UWBP_RebootRallyIcon_C");
static_assert(offsetof(UWBP_RebootRallyIcon_C, Highlighted) == 0x000280, "Member 'UWBP_RebootRallyIcon_C::Highlighted' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyIcon_C, Default) == 0x000288, "Member 'UWBP_RebootRallyIcon_C::Default' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyIcon_C, Image_RebootRally) == 0x000290, "Member 'UWBP_RebootRallyIcon_C::Image_RebootRally' has a wrong offset!");

}
