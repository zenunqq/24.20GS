#pragma once

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_classes.hpp"

namespace SDK
{

class ABP_ProjectileTrajectory_Athena_C final : public ABP_ProjectileTrajectory_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileTrajectory_Athena_C">();
	}
	static class ABP_ProjectileTrajectory_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileTrajectory_Athena_C>();
	}
};
static_assert(alignof(ABP_ProjectileTrajectory_Athena_C) == 0x000008, "Wrong alignment on ABP_ProjectileTrajectory_Athena_C");
static_assert(sizeof(ABP_ProjectileTrajectory_Athena_C) == 0x000308, "Wrong size on ABP_ProjectileTrajectory_Athena_C");

}
