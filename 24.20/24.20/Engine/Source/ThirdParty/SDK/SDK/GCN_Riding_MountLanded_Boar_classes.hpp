#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Riding_MountLanded_Boar_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Riding_MountLanded_Boar_C">();
	}
	static class UGCN_Riding_MountLanded_Boar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Riding_MountLanded_Boar_C>();
	}
};
static_assert(alignof(UGCN_Riding_MountLanded_Boar_C) == 0x000008, "Wrong alignment on UGCN_Riding_MountLanded_Boar_C");
static_assert(sizeof(UGCN_Riding_MountLanded_Boar_C) == 0x000210, "Wrong size on UGCN_Riding_MountLanded_Boar_C");

}
