#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_NPC_Challenged_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_NPC_Challenged_C">();
	}
	static class UGE_NPC_Challenged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_NPC_Challenged_C>();
	}
};
static_assert(alignof(UGE_NPC_Challenged_C) == 0x000008, "Wrong alignment on UGE_NPC_Challenged_C");
static_assert(sizeof(UGE_NPC_Challenged_C) == 0x000858, "Wrong size on UGE_NPC_Challenged_C");

}
