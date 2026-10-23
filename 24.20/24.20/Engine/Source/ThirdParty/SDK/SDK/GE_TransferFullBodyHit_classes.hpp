#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_TransferFullBodyHit_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_TransferFullBodyHit_C">();
	}
	static class UGE_TransferFullBodyHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_TransferFullBodyHit_C>();
	}
};
static_assert(alignof(UGE_TransferFullBodyHit_C) == 0x000008, "Wrong alignment on UGE_TransferFullBodyHit_C");
static_assert(sizeof(UGE_TransferFullBodyHit_C) == 0x000858, "Wrong size on UGE_TransferFullBodyHit_C");

}
