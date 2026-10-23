#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Riding_Creatue_IsBeingRidden_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Riding_Creatue_IsBeingRidden_C">();
	}
	static class UGE_Riding_Creatue_IsBeingRidden_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Riding_Creatue_IsBeingRidden_C>();
	}
};
static_assert(alignof(UGE_Riding_Creatue_IsBeingRidden_C) == 0x000008, "Wrong alignment on UGE_Riding_Creatue_IsBeingRidden_C");
static_assert(sizeof(UGE_Riding_Creatue_IsBeingRidden_C) == 0x000858, "Wrong size on UGE_Riding_Creatue_IsBeingRidden_C");

}
