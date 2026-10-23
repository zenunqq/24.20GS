#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCurieEntityStateBehavior_FullyIgnited_C final : public UFortCurieEntityStateBehavior_Burning
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurieEntityStateBehavior_FullyIgnited_C">();
	}
	static class UCurieEntityStateBehavior_FullyIgnited_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieEntityStateBehavior_FullyIgnited_C>();
	}
};
static_assert(alignof(UCurieEntityStateBehavior_FullyIgnited_C) == 0x000008, "Wrong alignment on UCurieEntityStateBehavior_FullyIgnited_C");
static_assert(sizeof(UCurieEntityStateBehavior_FullyIgnited_C) == 0x0000E0, "Wrong size on UCurieEntityStateBehavior_FullyIgnited_C");

}
