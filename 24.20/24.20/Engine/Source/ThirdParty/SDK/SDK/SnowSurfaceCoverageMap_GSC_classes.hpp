#pragma once

#include "Basic.hpp"

#include "SpecialSurfaceCoverageRuntime_classes.hpp"

namespace SDK
{

class USnowSurfaceCoverageMap_GSC_C final : public UFortGameStateComponent_SurfaceCoverageMap
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SnowSurfaceCoverageMap_GSC_C">();
	}
	static class USnowSurfaceCoverageMap_GSC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USnowSurfaceCoverageMap_GSC_C>();
	}
};
static_assert(alignof(USnowSurfaceCoverageMap_GSC_C) == 0x000008, "Wrong alignment on USnowSurfaceCoverageMap_GSC_C");
static_assert(sizeof(USnowSurfaceCoverageMap_GSC_C) == 0x000110, "Wrong size on USnowSurfaceCoverageMap_GSC_C");

}
