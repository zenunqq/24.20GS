#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortPlayerAnimComponentBP_C final : public UFortPlayerAnimationComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortPlayerAnimComponentBP_C">();
	}
	static class UFortPlayerAnimComponentBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAnimComponentBP_C>();
	}
};
static_assert(alignof(UFortPlayerAnimComponentBP_C) == 0x000010, "Wrong alignment on UFortPlayerAnimComponentBP_C");
static_assert(sizeof(UFortPlayerAnimComponentBP_C) == 0x000D10, "Wrong size on UFortPlayerAnimComponentBP_C");

}
