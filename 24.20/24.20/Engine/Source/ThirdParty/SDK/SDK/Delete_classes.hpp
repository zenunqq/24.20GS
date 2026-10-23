#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IDelete_C final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Delete_C">();
	}
	static class IDelete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDelete_C>();
	}
};
static_assert(alignof(IDelete_C) == 0x000008, "Wrong alignment on IDelete_C");
static_assert(sizeof(IDelete_C) == 0x000028, "Wrong size on IDelete_C");

}
