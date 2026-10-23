#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerCameraMode1P_C">();
	}
	static class UPlayerCameraMode1P_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerCameraMode1P_C>();
	}
};
static_assert(alignof(UPlayerCameraMode1P_C) == 0x000010, "Wrong alignment on UPlayerCameraMode1P_C");
static_assert(sizeof(UPlayerCameraMode1P_C) == 0x001B20, "Wrong size on UPlayerCameraMode1P_C");

}
