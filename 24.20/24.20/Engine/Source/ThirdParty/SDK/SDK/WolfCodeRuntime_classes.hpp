#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortCheatManager_Wolf final : public UChildCheatManager
{
public:
	void WolfEnable(const bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_Wolf">();
	}
	static class UFortCheatManager_Wolf* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_Wolf>();
	}
};
static_assert(alignof(UFortCheatManager_Wolf) == 0x000008, "Wrong alignment on UFortCheatManager_Wolf");
static_assert(sizeof(UFortCheatManager_Wolf) == 0x000028, "Wrong size on UFortCheatManager_Wolf");

}
