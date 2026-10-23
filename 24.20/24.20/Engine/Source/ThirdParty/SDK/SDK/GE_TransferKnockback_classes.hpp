#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_TransferKnockback_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_TransferKnockback_C">();
	}
	static class UGE_TransferKnockback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TransferKnockback_C>();
	}
};
static_assert(alignof(UGE_TransferKnockback_C) == 0x000008, "Wrong alignment on UGE_TransferKnockback_C");
static_assert(sizeof(UGE_TransferKnockback_C) == 0x000858, "Wrong size on UGE_TransferKnockback_C");

}
