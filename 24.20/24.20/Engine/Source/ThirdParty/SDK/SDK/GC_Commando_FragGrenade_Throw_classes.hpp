#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGC_Commando_FragGrenade_Throw_C final : public UFortGameplayCueNotify_Burst
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Commando_FragGrenade_Throw_C">();
	}
	static class UGC_Commando_FragGrenade_Throw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Commando_FragGrenade_Throw_C>();
	}
};
static_assert(alignof(UGC_Commando_FragGrenade_Throw_C) == 0x000008, "Wrong alignment on UGC_Commando_FragGrenade_Throw_C");
static_assert(sizeof(UGC_Commando_FragGrenade_Throw_C) == 0x000210, "Wrong size on UGC_Commando_FragGrenade_Throw_C");

}
