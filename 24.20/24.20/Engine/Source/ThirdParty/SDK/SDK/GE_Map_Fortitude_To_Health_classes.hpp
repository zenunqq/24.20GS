#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Map_Fortitude_To_Health_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Map_Fortitude_To_Health_C">();
	}
	static class UGE_Map_Fortitude_To_Health_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Map_Fortitude_To_Health_C>();
	}
};
static_assert(alignof(UGE_Map_Fortitude_To_Health_C) == 0x000008, "Wrong alignment on UGE_Map_Fortitude_To_Health_C");
static_assert(sizeof(UGE_Map_Fortitude_To_Health_C) == 0x000858, "Wrong size on UGE_Map_Fortitude_To_Health_C");

}
