#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_RebootRallyPopupModal_Image_C final : public UUserWidget
{
public:
	class UImage*                                 Image_Background;
	class UImage*                                 Image_Rewards;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RebootRallyPopupModal_Image_C">();
	}
	static class UWBP_RebootRallyPopupModal_Image_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RebootRallyPopupModal_Image_C>();
	}
};
static_assert(alignof(UWBP_RebootRallyPopupModal_Image_C) == 0x000008, "Wrong alignment on UWBP_RebootRallyPopupModal_Image_C");
static_assert(sizeof(UWBP_RebootRallyPopupModal_Image_C) == 0x000278, "Wrong size on UWBP_RebootRallyPopupModal_Image_C");
static_assert(offsetof(UWBP_RebootRallyPopupModal_Image_C, Image_Background) == 0x000268, "Member 'UWBP_RebootRallyPopupModal_Image_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_RebootRallyPopupModal_Image_C, Image_Rewards) == 0x000270, "Member 'UWBP_RebootRallyPopupModal_Image_C::Image_Rewards' has a wrong offset!");

}
