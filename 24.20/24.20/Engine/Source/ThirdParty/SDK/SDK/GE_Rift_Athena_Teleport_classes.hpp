#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Rift_Athena_Teleport_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Rift_Athena_Teleport_C">();
	}
	static class UGE_Rift_Athena_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Rift_Athena_Teleport_C>();
	}
};
static_assert(alignof(UGE_Rift_Athena_Teleport_C) == 0x000008, "Wrong alignment on UGE_Rift_Athena_Teleport_C");
static_assert(sizeof(UGE_Rift_Athena_Teleport_C) == 0x000858, "Wrong size on UGE_Rift_Athena_Teleport_C");

}
