#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_WilliePete_PlayerLaunch_Granted_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_WilliePete_PlayerLaunch_Granted_C">();
	}
	static class UGE_WilliePete_PlayerLaunch_Granted_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_WilliePete_PlayerLaunch_Granted_C>();
	}
};
static_assert(alignof(UGE_WilliePete_PlayerLaunch_Granted_C) == 0x000008, "Wrong alignment on UGE_WilliePete_PlayerLaunch_Granted_C");
static_assert(sizeof(UGE_WilliePete_PlayerLaunch_Granted_C) == 0x000858, "Wrong size on UGE_WilliePete_PlayerLaunch_Granted_C");

}
