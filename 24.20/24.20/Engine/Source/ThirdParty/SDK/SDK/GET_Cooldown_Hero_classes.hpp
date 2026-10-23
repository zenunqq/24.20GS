#pragma once

#include "Basic.hpp"

#include "GET_Cooldown_classes.hpp"

namespace SDK
{

class UGET_Cooldown_Hero_C : public UGET_Cooldown_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_Cooldown_Hero_C">();
	}
	static class UGET_Cooldown_Hero_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_Cooldown_Hero_C>();
	}
};
static_assert(alignof(UGET_Cooldown_Hero_C) == 0x000008, "Wrong alignment on UGET_Cooldown_Hero_C");
static_assert(sizeof(UGET_Cooldown_Hero_C) == 0x000858, "Wrong size on UGET_Cooldown_Hero_C");

}
