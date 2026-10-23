#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMultiFactorAuthWidget_C final : public UFortMultiFactorAuthWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultiFactorAuthWidget_C">();
	}
	static class UMultiFactorAuthWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiFactorAuthWidget_C>();
	}
};
static_assert(alignof(UMultiFactorAuthWidget_C) == 0x000008, "Wrong alignment on UMultiFactorAuthWidget_C");
static_assert(sizeof(UMultiFactorAuthWidget_C) == 0x000528, "Wrong size on UMultiFactorAuthWidget_C");

}
