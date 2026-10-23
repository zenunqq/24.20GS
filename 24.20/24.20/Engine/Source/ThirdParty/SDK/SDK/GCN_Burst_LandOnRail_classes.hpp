#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Burst_LandOnRail_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Burst_LandOnRail_C">();
	}
	static class UGCN_Burst_LandOnRail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Burst_LandOnRail_C>();
	}
};
static_assert(alignof(UGCN_Burst_LandOnRail_C) == 0x000008, "Wrong alignment on UGCN_Burst_LandOnRail_C");
static_assert(sizeof(UGCN_Burst_LandOnRail_C) == 0x000210, "Wrong size on UGCN_Burst_LandOnRail_C");

}
