#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortAthenaMutator_HenchmanSpawner final : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                         Pad_450[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_HenchmanSpawner">();
	}
	static class AFortAthenaMutator_HenchmanSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_HenchmanSpawner>();
	}
};
static_assert(alignof(AFortAthenaMutator_HenchmanSpawner) == 0x000008, "Wrong alignment on AFortAthenaMutator_HenchmanSpawner");
static_assert(sizeof(AFortAthenaMutator_HenchmanSpawner) == 0x000458, "Wrong size on AFortAthenaMutator_HenchmanSpawner");

}
