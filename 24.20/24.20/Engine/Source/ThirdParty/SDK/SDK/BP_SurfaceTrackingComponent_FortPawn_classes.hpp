#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBP_SurfaceTrackingComponent_FortPawn_C final : public UFortSurfaceTrackingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SurfaceTrackingComponent_FortPawn_C">();
	}
	static class UBP_SurfaceTrackingComponent_FortPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SurfaceTrackingComponent_FortPawn_C>();
	}
};
static_assert(alignof(UBP_SurfaceTrackingComponent_FortPawn_C) == 0x000008, "Wrong alignment on UBP_SurfaceTrackingComponent_FortPawn_C");
static_assert(sizeof(UBP_SurfaceTrackingComponent_FortPawn_C) == 0x000180, "Wrong size on UBP_SurfaceTrackingComponent_FortPawn_C");

}
