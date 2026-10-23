#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UBP_ProjectileTrajectorySplineMesh_C final : public USplineMeshComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileTrajectorySplineMesh_C">();
	}
	static class UBP_ProjectileTrajectorySplineMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ProjectileTrajectorySplineMesh_C>();
	}
};
static_assert(alignof(UBP_ProjectileTrajectorySplineMesh_C) == 0x000010, "Wrong alignment on UBP_ProjectileTrajectorySplineMesh_C");
static_assert(sizeof(UBP_ProjectileTrajectorySplineMesh_C) == 0x000720, "Wrong size on UBP_ProjectileTrajectorySplineMesh_C");

}
