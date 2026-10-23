#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireWaterInteractHandler_C final : public UFortCurieElementInteractWithElementHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireWaterInteractHandler_C">();
	}
	static class UFireWaterInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireWaterInteractHandler_C>();
	}
};
static_assert(alignof(UFireWaterInteractHandler_C) == 0x000008, "Wrong alignment on UFireWaterInteractHandler_C");
static_assert(sizeof(UFireWaterInteractHandler_C) == 0x000080, "Wrong size on UFireWaterInteractHandler_C");

}
