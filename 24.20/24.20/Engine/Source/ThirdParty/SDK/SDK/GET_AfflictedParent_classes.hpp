#pragma once

#include "Basic.hpp"

#include "GET_DamageParent_classes.hpp"

namespace SDK
{

class UGET_AfflictedParent_C : public UGET_DamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_AfflictedParent_C">();
	}
	static class UGET_AfflictedParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_AfflictedParent_C>();
	}
};
static_assert(alignof(UGET_AfflictedParent_C) == 0x000008, "Wrong alignment on UGET_AfflictedParent_C");
static_assert(sizeof(UGET_AfflictedParent_C) == 0x000858, "Wrong size on UGET_AfflictedParent_C");

}
