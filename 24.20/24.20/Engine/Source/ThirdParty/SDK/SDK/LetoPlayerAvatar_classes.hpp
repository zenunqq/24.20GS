#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULetoPlayerAvatar_C final : public ULetoPlayerAvatar
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LetoPlayerAvatar_C">();
	}
	static class ULetoPlayerAvatar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULetoPlayerAvatar_C>();
	}
};
static_assert(alignof(ULetoPlayerAvatar_C) == 0x000008, "Wrong alignment on ULetoPlayerAvatar_C");
static_assert(sizeof(ULetoPlayerAvatar_C) == 0x000298, "Wrong size on ULetoPlayerAvatar_C");

}
