#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_Mobile_Augment_Selection_Preview_C final : public UHUDLayoutToolV2_WidgetPreview
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mobile_Augment_Selection_Preview_C">();
	}
	static class UWBP_Mobile_Augment_Selection_Preview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mobile_Augment_Selection_Preview_C>();
	}
};
static_assert(alignof(UWBP_Mobile_Augment_Selection_Preview_C) == 0x000008, "Wrong alignment on UWBP_Mobile_Augment_Selection_Preview_C");
static_assert(sizeof(UWBP_Mobile_Augment_Selection_Preview_C) == 0x0002D8, "Wrong size on UWBP_Mobile_Augment_Selection_Preview_C");

}
