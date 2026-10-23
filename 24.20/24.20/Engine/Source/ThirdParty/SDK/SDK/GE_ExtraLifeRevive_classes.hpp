#pragma once

#include "Basic.hpp"

#include "GE_Generic_Revive_classes.hpp"

namespace SDK
{

class UGE_ExtraLifeRevive_C final : public UGE_Generic_Revive_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ExtraLifeRevive_C">();
	}
	static class UGE_ExtraLifeRevive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ExtraLifeRevive_C>();
	}
};
static_assert(alignof(UGE_ExtraLifeRevive_C) == 0x000008, "Wrong alignment on UGE_ExtraLifeRevive_C");
static_assert(sizeof(UGE_ExtraLifeRevive_C) == 0x000858, "Wrong size on UGE_ExtraLifeRevive_C");

}
