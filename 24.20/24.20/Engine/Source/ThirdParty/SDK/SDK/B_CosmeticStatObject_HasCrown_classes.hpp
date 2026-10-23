#pragma once

#include "Basic.hpp"

#include "VictoryCrownsRuntime_classes.hpp"

namespace SDK
{

class UB_CosmeticStatObject_HasCrown_C final : public UFortCosmeticStatObject_HasCrown
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CosmeticStatObject_HasCrown_C">();
	}
	static class UB_CosmeticStatObject_HasCrown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_CosmeticStatObject_HasCrown_C>();
	}
};
static_assert(alignof(UB_CosmeticStatObject_HasCrown_C) == 0x000008, "Wrong alignment on UB_CosmeticStatObject_HasCrown_C");
static_assert(sizeof(UB_CosmeticStatObject_HasCrown_C) == 0x000090, "Wrong size on UB_CosmeticStatObject_HasCrown_C");

}
