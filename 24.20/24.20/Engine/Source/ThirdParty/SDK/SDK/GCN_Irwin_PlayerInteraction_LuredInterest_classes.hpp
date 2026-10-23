#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Irwin_PlayerInteraction_LuredInterest_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Irwin_PlayerInteraction_LuredInterest_C">();
	}
	static class UGCN_Irwin_PlayerInteraction_LuredInterest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Irwin_PlayerInteraction_LuredInterest_C>();
	}
};
static_assert(alignof(UGCN_Irwin_PlayerInteraction_LuredInterest_C) == 0x000008, "Wrong alignment on UGCN_Irwin_PlayerInteraction_LuredInterest_C");
static_assert(sizeof(UGCN_Irwin_PlayerInteraction_LuredInterest_C) == 0x000210, "Wrong size on UGCN_Irwin_PlayerInteraction_LuredInterest_C");

}
