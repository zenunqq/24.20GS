#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortTimeDilationComponent_C final : public UFortGameStateComponent_TimeDilation
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortTimeDilationComponent_C">();
	}
	static class UFortTimeDilationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTimeDilationComponent_C>();
	}
};
static_assert(alignof(UFortTimeDilationComponent_C) == 0x000008, "Wrong alignment on UFortTimeDilationComponent_C");
static_assert(sizeof(UFortTimeDilationComponent_C) == 0x0000D8, "Wrong size on UFortTimeDilationComponent_C");

}
