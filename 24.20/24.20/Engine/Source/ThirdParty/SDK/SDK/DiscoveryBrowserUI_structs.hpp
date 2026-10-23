#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EActivityBrowserTileStyle : uint8
{
	Default                                  = 0,
	Minimal                                  = 1,
	Detailed                                 = 2,
	EActivityBrowserTileStyle_MAX            = 3,
};

struct FCachedSurfaceData final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<class UFortCreativeDiscoveryActivityProvider*> CachedDataProviders;
};
static_assert(alignof(FCachedSurfaceData) == 0x000008, "Wrong alignment on FCachedSurfaceData");
static_assert(sizeof(FCachedSurfaceData) == 0x000018, "Wrong size on FCachedSurfaceData");
static_assert(offsetof(FCachedSurfaceData, CachedDataProviders) == 0x000008, "Member 'FCachedSurfaceData::CachedDataProviders' has a wrong offset!");

struct FColorSchemeParamaterValues final
{
public:
	class UMaterialParameterCollection*           AlternateMaterialCollection;
	TMap<class FName, float>                      ScalarParameterValues;
	TMap<class FName, struct FLinearColor>        VectorParameterValues;
};
static_assert(alignof(FColorSchemeParamaterValues) == 0x000008, "Wrong alignment on FColorSchemeParamaterValues");
static_assert(sizeof(FColorSchemeParamaterValues) == 0x0000A8, "Wrong size on FColorSchemeParamaterValues");
static_assert(offsetof(FColorSchemeParamaterValues, AlternateMaterialCollection) == 0x000000, "Member 'FColorSchemeParamaterValues::AlternateMaterialCollection' has a wrong offset!");
static_assert(offsetof(FColorSchemeParamaterValues, ScalarParameterValues) == 0x000008, "Member 'FColorSchemeParamaterValues::ScalarParameterValues' has a wrong offset!");
static_assert(offsetof(FColorSchemeParamaterValues, VectorParameterValues) == 0x000058, "Member 'FColorSchemeParamaterValues::VectorParameterValues' has a wrong offset!");

}
