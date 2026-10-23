#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_BoostJump_IsUsingJetpack_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BoostJump_IsUsingJetpack_C">();
	}
	static class UGE_BoostJump_IsUsingJetpack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BoostJump_IsUsingJetpack_C>();
	}
};
static_assert(alignof(UGE_BoostJump_IsUsingJetpack_C) == 0x000008, "Wrong alignment on UGE_BoostJump_IsUsingJetpack_C");
static_assert(sizeof(UGE_BoostJump_IsUsingJetpack_C) == 0x000858, "Wrong size on UGE_BoostJump_IsUsingJetpack_C");

}
