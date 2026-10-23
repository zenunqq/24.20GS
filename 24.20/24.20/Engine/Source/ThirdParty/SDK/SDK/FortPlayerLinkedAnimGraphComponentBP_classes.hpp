#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortPlayerLinkedAnimGraphComponentBP_C final : public UFortLinkedAnimGraphComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortPlayerLinkedAnimGraphComponentBP_C">();
	}
	static class UFortPlayerLinkedAnimGraphComponentBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerLinkedAnimGraphComponentBP_C>();
	}
};
static_assert(alignof(UFortPlayerLinkedAnimGraphComponentBP_C) == 0x000008, "Wrong alignment on UFortPlayerLinkedAnimGraphComponentBP_C");
static_assert(sizeof(UFortPlayerLinkedAnimGraphComponentBP_C) == 0x0001C8, "Wrong size on UFortPlayerLinkedAnimGraphComponentBP_C");

}
