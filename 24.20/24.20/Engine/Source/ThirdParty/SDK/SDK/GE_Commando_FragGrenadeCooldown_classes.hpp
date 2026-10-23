#pragma once

#include "Basic.hpp"

#include "GET_Cooldown_Hero_Active_classes.hpp"

namespace SDK
{

class UGE_Commando_FragGrenadeCooldown_C final : public UGET_Cooldown_Hero_Active_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Commando_FragGrenadeCooldown_C">();
	}
	static class UGE_Commando_FragGrenadeCooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Commando_FragGrenadeCooldown_C>();
	}
};
static_assert(alignof(UGE_Commando_FragGrenadeCooldown_C) == 0x000008, "Wrong alignment on UGE_Commando_FragGrenadeCooldown_C");
static_assert(sizeof(UGE_Commando_FragGrenadeCooldown_C) == 0x000858, "Wrong size on UGE_Commando_FragGrenadeCooldown_C");

}
