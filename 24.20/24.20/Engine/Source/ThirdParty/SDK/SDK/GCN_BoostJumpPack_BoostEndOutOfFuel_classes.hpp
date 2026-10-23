#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_BoostJumpPack_BoostEndOutOfFuel_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_BoostJumpPack_BoostEndOutOfFuel_C">();
	}
	static class UGCN_BoostJumpPack_BoostEndOutOfFuel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_BoostJumpPack_BoostEndOutOfFuel_C>();
	}
};
static_assert(alignof(UGCN_BoostJumpPack_BoostEndOutOfFuel_C) == 0x000008, "Wrong alignment on UGCN_BoostJumpPack_BoostEndOutOfFuel_C");
static_assert(sizeof(UGCN_BoostJumpPack_BoostEndOutOfFuel_C) == 0x000210, "Wrong size on UGCN_BoostJumpPack_BoostEndOutOfFuel_C");

}
