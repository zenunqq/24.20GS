#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_ValetHandbrake_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_ValetHandbrake_C">();
	}
	static class UBB_ValetHandbrake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_ValetHandbrake_C>();
	}
};
static_assert(alignof(UBB_ValetHandbrake_C) == 0x000008, "Wrong alignment on UBB_ValetHandbrake_C");
static_assert(sizeof(UBB_ValetHandbrake_C) == 0x000110, "Wrong size on UBB_ValetHandbrake_C");

}
