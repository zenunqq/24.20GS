#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class UAthena_PlayerCamera_DBNO_C final : public UAthena_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCamera_DBNO_C">();
	}
	static class UAthena_PlayerCamera_DBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCamera_DBNO_C>();
	}
};
static_assert(alignof(UAthena_PlayerCamera_DBNO_C) == 0x000010, "Wrong alignment on UAthena_PlayerCamera_DBNO_C");
static_assert(sizeof(UAthena_PlayerCamera_DBNO_C) == 0x001B20, "Wrong size on UAthena_PlayerCamera_DBNO_C");

}
