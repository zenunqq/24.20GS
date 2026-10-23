#pragma once

#include "Basic.hpp"

#include "VictoryCrownsRuntime_classes.hpp"

namespace SDK
{

class UB_CosmeticStatObject_TotalRoyalRoyales_C final : public UFortCosmeticStatObject_TotalRoyalRoyales
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CosmeticStatObject_TotalRoyalRoyales_C">();
	}
	static class UB_CosmeticStatObject_TotalRoyalRoyales_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_CosmeticStatObject_TotalRoyalRoyales_C>();
	}
};
static_assert(alignof(UB_CosmeticStatObject_TotalRoyalRoyales_C) == 0x000008, "Wrong alignment on UB_CosmeticStatObject_TotalRoyalRoyales_C");
static_assert(sizeof(UB_CosmeticStatObject_TotalRoyalRoyales_C) == 0x0000A0, "Wrong size on UB_CosmeticStatObject_TotalRoyalRoyales_C");

}
