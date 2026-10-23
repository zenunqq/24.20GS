#pragma once

#include "Basic.hpp"

#include "GET_TagContainer_classes.hpp"

namespace SDK
{

class UGET_KnockbackImmunityTag_C final : public UGET_TagContainer_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_KnockbackImmunityTag_C">();
	}
	static class UGET_KnockbackImmunityTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_KnockbackImmunityTag_C>();
	}
};
static_assert(alignof(UGET_KnockbackImmunityTag_C) == 0x000008, "Wrong alignment on UGET_KnockbackImmunityTag_C");
static_assert(sizeof(UGET_KnockbackImmunityTag_C) == 0x000858, "Wrong size on UGET_KnockbackImmunityTag_C");

}
