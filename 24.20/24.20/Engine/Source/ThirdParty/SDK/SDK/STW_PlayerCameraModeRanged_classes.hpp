#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeRanged_classes.hpp"

namespace SDK
{

class USTW_PlayerCameraModeRanged_C final : public UAthena_PlayerCameraModeRanged_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STW_PlayerCameraModeRanged_C">();
	}
	static class USTW_PlayerCameraModeRanged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTW_PlayerCameraModeRanged_C>();
	}
};
static_assert(alignof(USTW_PlayerCameraModeRanged_C) == 0x000010, "Wrong alignment on USTW_PlayerCameraModeRanged_C");
static_assert(sizeof(USTW_PlayerCameraModeRanged_C) == 0x001B20, "Wrong size on USTW_PlayerCameraModeRanged_C");

}
