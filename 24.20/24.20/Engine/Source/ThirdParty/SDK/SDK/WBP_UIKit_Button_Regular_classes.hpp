#pragma once

#include "Basic.hpp"

#include "WBP_UIKit_ButtonCTA_Base_classes.hpp"

namespace SDK
{

class UWBP_UIKit_Button_Regular_C final : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UIKit_Button_Regular_C">();
	}
	static class UWBP_UIKit_Button_Regular_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UIKit_Button_Regular_C>();
	}
};
static_assert(alignof(UWBP_UIKit_Button_Regular_C) == 0x000010, "Wrong alignment on UWBP_UIKit_Button_Regular_C");
static_assert(sizeof(UWBP_UIKit_Button_Regular_C) == 0x0019F0, "Wrong size on UWBP_UIKit_Button_Regular_C");

}
