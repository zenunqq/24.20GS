#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_RebootRallyPopupModal_DetailsText_C final : public UUserWidget
{
public:
	class UCommonRichTextBlock*                   RichText_Details;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RebootRallyPopupModal_DetailsText_C">();
	}
	static class UWBP_RebootRallyPopupModal_DetailsText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RebootRallyPopupModal_DetailsText_C>();
	}
};
static_assert(alignof(UWBP_RebootRallyPopupModal_DetailsText_C) == 0x000008, "Wrong alignment on UWBP_RebootRallyPopupModal_DetailsText_C");
static_assert(sizeof(UWBP_RebootRallyPopupModal_DetailsText_C) == 0x000270, "Wrong size on UWBP_RebootRallyPopupModal_DetailsText_C");
static_assert(offsetof(UWBP_RebootRallyPopupModal_DetailsText_C, RichText_Details) == 0x000268, "Member 'UWBP_RebootRallyPopupModal_DetailsText_C::RichText_Details' has a wrong offset!");

}
