#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCurieEntityStateBehavior_Drying_C final : public UFortCurieEntityStateBehavior_Drying
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurieEntityStateBehavior_Drying_C">();
	}
	static class UCurieEntityStateBehavior_Drying_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieEntityStateBehavior_Drying_C>();
	}
};
static_assert(alignof(UCurieEntityStateBehavior_Drying_C) == 0x000008, "Wrong alignment on UCurieEntityStateBehavior_Drying_C");
static_assert(sizeof(UCurieEntityStateBehavior_Drying_C) == 0x0000E8, "Wrong size on UCurieEntityStateBehavior_Drying_C");

}
