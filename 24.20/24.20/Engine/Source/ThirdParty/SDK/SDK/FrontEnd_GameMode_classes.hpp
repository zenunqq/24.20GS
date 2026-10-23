#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontEnd_GameMode_C final : public AFortGameModeFrontEnd
{
public:
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEnd_GameMode_C">();
	}
	static class AFrontEnd_GameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEnd_GameMode_C>();
	}
};
static_assert(alignof(AFrontEnd_GameMode_C) == 0x000008, "Wrong alignment on AFrontEnd_GameMode_C");
static_assert(sizeof(AFrontEnd_GameMode_C) == 0x0007A8, "Wrong size on AFrontEnd_GameMode_C");
static_assert(offsetof(AFrontEnd_GameMode_C, DefaultSceneRoot) == 0x0007A0, "Member 'AFrontEnd_GameMode_C::DefaultSceneRoot' has a wrong offset!");

}
