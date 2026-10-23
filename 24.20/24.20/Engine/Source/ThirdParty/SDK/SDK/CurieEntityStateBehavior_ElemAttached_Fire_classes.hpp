#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCurieEntityStateBehavior_ElemAttached_Fire_C final : public UFortCurieEntityStateBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurieEntityStateBehavior_ElemAttached_Fire_C">();
	}
	static class UCurieEntityStateBehavior_ElemAttached_Fire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieEntityStateBehavior_ElemAttached_Fire_C>();
	}
};
static_assert(alignof(UCurieEntityStateBehavior_ElemAttached_Fire_C) == 0x000008, "Wrong alignment on UCurieEntityStateBehavior_ElemAttached_Fire_C");
static_assert(sizeof(UCurieEntityStateBehavior_ElemAttached_Fire_C) == 0x0000E0, "Wrong size on UCurieEntityStateBehavior_ElemAttached_Fire_C");

}
