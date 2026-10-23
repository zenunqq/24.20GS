#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UFortNavArea_JumpDownSmashable2_C final : public UFortNavArea_SmashableJump
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortNavArea_JumpDownSmashable2_C">();
	}
	static class UFortNavArea_JumpDownSmashable2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_JumpDownSmashable2_C>();
	}
};
static_assert(alignof(UFortNavArea_JumpDownSmashable2_C) == 0x000008, "Wrong alignment on UFortNavArea_JumpDownSmashable2_C");
static_assert(sizeof(UFortNavArea_JumpDownSmashable2_C) == 0x000058, "Wrong size on UFortNavArea_JumpDownSmashable2_C");

}
