#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Burst_Hot_Feet_Environmental_C final : public UFortGameplayCueNotify_Burst
{
public:
	bool                                          NewVar_0;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Burst_Hot_Feet_Environmental_C">();
	}
	static class UGCN_Burst_Hot_Feet_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Burst_Hot_Feet_Environmental_C>();
	}
};
static_assert(alignof(UGCN_Burst_Hot_Feet_Environmental_C) == 0x000008, "Wrong alignment on UGCN_Burst_Hot_Feet_Environmental_C");
static_assert(sizeof(UGCN_Burst_Hot_Feet_Environmental_C) == 0x000218, "Wrong size on UGCN_Burst_Hot_Feet_Environmental_C");
static_assert(offsetof(UGCN_Burst_Hot_Feet_Environmental_C, NewVar_0) == 0x000210, "Member 'UGCN_Burst_Hot_Feet_Environmental_C::NewVar_0' has a wrong offset!");

}
