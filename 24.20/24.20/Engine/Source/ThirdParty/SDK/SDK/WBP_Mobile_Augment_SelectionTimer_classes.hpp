#pragma once

#include "Basic.hpp"

#include "PlayerAugmentsUI_classes.hpp"

namespace SDK
{

class UWBP_Mobile_Augment_SelectionTimer_C final : public UFortMobilePlayerAugmentTimer
{
public:
	class UWBP_Augment_SelectionTimer_C*          WBP_Augment_SelectionTimer_34;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Mobile_Augment_SelectionTimer_C">();
	}
	static class UWBP_Mobile_Augment_SelectionTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Mobile_Augment_SelectionTimer_C>();
	}
};
static_assert(alignof(UWBP_Mobile_Augment_SelectionTimer_C) == 0x000008, "Wrong alignment on UWBP_Mobile_Augment_SelectionTimer_C");
static_assert(sizeof(UWBP_Mobile_Augment_SelectionTimer_C) == 0x000310, "Wrong size on UWBP_Mobile_Augment_SelectionTimer_C");
static_assert(offsetof(UWBP_Mobile_Augment_SelectionTimer_C, WBP_Augment_SelectionTimer_34) == 0x000308, "Member 'UWBP_Mobile_Augment_SelectionTimer_C::WBP_Augment_SelectionTimer_34' has a wrong offset!");

}
