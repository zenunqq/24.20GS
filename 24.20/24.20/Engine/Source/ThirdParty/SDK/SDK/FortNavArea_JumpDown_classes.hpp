#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UFortNavArea_JumpDown_C final : public UFortNavArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortNavArea_JumpDown_C">();
	}
	static class UFortNavArea_JumpDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNavArea_JumpDown_C>();
	}
};
static_assert(alignof(UFortNavArea_JumpDown_C) == 0x000008, "Wrong alignment on UFortNavArea_JumpDown_C");
static_assert(sizeof(UFortNavArea_JumpDown_C) == 0x000050, "Wrong size on UFortNavArea_JumpDown_C");

}
