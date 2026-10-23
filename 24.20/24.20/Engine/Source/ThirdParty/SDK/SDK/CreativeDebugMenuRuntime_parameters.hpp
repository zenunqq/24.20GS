#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortControllerComponent_CreativeDebugger_OnPlayerSpawned final
{
public:
	class AFortPlayerController*                  PC;
};
static_assert(alignof(FortControllerComponent_CreativeDebugger_OnPlayerSpawned) == 0x000008, "Wrong alignment on FortControllerComponent_CreativeDebugger_OnPlayerSpawned");
static_assert(sizeof(FortControllerComponent_CreativeDebugger_OnPlayerSpawned) == 0x000008, "Wrong size on FortControllerComponent_CreativeDebugger_OnPlayerSpawned");
static_assert(offsetof(FortControllerComponent_CreativeDebugger_OnPlayerSpawned, PC) == 0x000000, "Member 'FortControllerComponent_CreativeDebugger_OnPlayerSpawned::PC' has a wrong offset!");

}
