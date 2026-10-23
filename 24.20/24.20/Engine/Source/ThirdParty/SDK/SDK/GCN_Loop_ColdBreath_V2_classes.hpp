#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_ColdBreath_V2_C final : public AFortGameplayCueNotify_Loop
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_ColdBreath_V2_C">();
	}
	static class AGCN_Loop_ColdBreath_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_ColdBreath_V2_C>();
	}
};
static_assert(alignof(AGCN_Loop_ColdBreath_V2_C) == 0x000008, "Wrong alignment on AGCN_Loop_ColdBreath_V2_C");
static_assert(sizeof(AGCN_Loop_ColdBreath_V2_C) == 0x000960, "Wrong size on AGCN_Loop_ColdBreath_V2_C");

}
