#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_AthenaPlayer_DisableSliding_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AthenaPlayer_DisableSliding_C">();
	}
	static class UGE_AthenaPlayer_DisableSliding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AthenaPlayer_DisableSliding_C>();
	}
};
static_assert(alignof(UGE_AthenaPlayer_DisableSliding_C) == 0x000008, "Wrong alignment on UGE_AthenaPlayer_DisableSliding_C");
static_assert(sizeof(UGE_AthenaPlayer_DisableSliding_C) == 0x000858, "Wrong size on UGE_AthenaPlayer_DisableSliding_C");

}
