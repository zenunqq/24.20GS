#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UF5PlayerFactorySettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"F5PlayerFactorySettings">();
	}
	static class UF5PlayerFactorySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF5PlayerFactorySettings>();
	}
};
static_assert(alignof(UF5PlayerFactorySettings) == 0x000008, "Wrong alignment on UF5PlayerFactorySettings");
static_assert(sizeof(UF5PlayerFactorySettings) == 0x000028, "Wrong size on UF5PlayerFactorySettings");

}
