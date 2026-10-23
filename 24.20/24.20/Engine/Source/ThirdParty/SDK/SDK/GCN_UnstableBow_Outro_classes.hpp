#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_UnstableBow_Outro_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_UnstableBow_Outro_C">();
	}
	static class UGCN_UnstableBow_Outro_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_UnstableBow_Outro_C>();
	}
};
static_assert(alignof(UGCN_UnstableBow_Outro_C) == 0x000008, "Wrong alignment on UGCN_UnstableBow_Outro_C");
static_assert(sizeof(UGCN_UnstableBow_Outro_C) == 0x000210, "Wrong size on UGCN_UnstableBow_Outro_C");

}
