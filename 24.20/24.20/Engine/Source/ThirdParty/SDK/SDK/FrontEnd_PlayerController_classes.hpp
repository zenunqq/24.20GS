#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontEnd_PlayerController_C final : public AFortPlayerControllerFrontEnd
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEnd_PlayerController_C">();
	}
	static class AFrontEnd_PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEnd_PlayerController_C>();
	}
};
static_assert(alignof(AFrontEnd_PlayerController_C) == 0x000010, "Wrong alignment on AFrontEnd_PlayerController_C");
static_assert(sizeof(AFrontEnd_PlayerController_C) == 0x002E50, "Wrong size on AFrontEnd_PlayerController_C");

}
