#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCurieEntityStateBehavior_ElemInteraction_Water_C final : public UFortCurieEntityStateBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurieEntityStateBehavior_ElemInteraction_Water_C">();
	}
	static class UCurieEntityStateBehavior_ElemInteraction_Water_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieEntityStateBehavior_ElemInteraction_Water_C>();
	}
};
static_assert(alignof(UCurieEntityStateBehavior_ElemInteraction_Water_C) == 0x000008, "Wrong alignment on UCurieEntityStateBehavior_ElemInteraction_Water_C");
static_assert(sizeof(UCurieEntityStateBehavior_ElemInteraction_Water_C) == 0x0000E0, "Wrong size on UCurieEntityStateBehavior_ElemInteraction_Water_C");

}
