#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UCinematicCamera_MatineeTransition_C final : public UFortCinematicCamera
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CinematicCamera_MatineeTransition_C">();
	}
	static class UCinematicCamera_MatineeTransition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematicCamera_MatineeTransition_C>();
	}
};
static_assert(alignof(UCinematicCamera_MatineeTransition_C) == 0x000008, "Wrong alignment on UCinematicCamera_MatineeTransition_C");
static_assert(sizeof(UCinematicCamera_MatineeTransition_C) == 0x000068, "Wrong size on UCinematicCamera_MatineeTransition_C");

}
