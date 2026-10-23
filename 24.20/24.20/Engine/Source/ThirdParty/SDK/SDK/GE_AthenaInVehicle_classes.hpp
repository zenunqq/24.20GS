#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_AthenaInVehicle_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AthenaInVehicle_C">();
	}
	static class UGE_AthenaInVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AthenaInVehicle_C>();
	}
};
static_assert(alignof(UGE_AthenaInVehicle_C) == 0x000008, "Wrong alignment on UGE_AthenaInVehicle_C");
static_assert(sizeof(UGE_AthenaInVehicle_C) == 0x000858, "Wrong size on UGE_AthenaInVehicle_C");

}
