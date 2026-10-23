#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct CreativeGameStreamDeviceComponent_Init final
{
public:
	class UFortMinigameLogicComponent*            InMinigameLogicComponent;
};
static_assert(alignof(CreativeGameStreamDeviceComponent_Init) == 0x000008, "Wrong alignment on CreativeGameStreamDeviceComponent_Init");
static_assert(sizeof(CreativeGameStreamDeviceComponent_Init) == 0x000008, "Wrong size on CreativeGameStreamDeviceComponent_Init");
static_assert(offsetof(CreativeGameStreamDeviceComponent_Init, InMinigameLogicComponent) == 0x000000, "Member 'CreativeGameStreamDeviceComponent_Init::InMinigameLogicComponent' has a wrong offset!");

struct CreativeGameStreamDeviceComponent_OnMinigameStateChanged final
{
public:
	class AFortMinigame*                          Minigame;
	EFortMinigameState                            NewMinigameState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CreativeGameStreamDeviceComponent_OnMinigameStateChanged) == 0x000008, "Wrong alignment on CreativeGameStreamDeviceComponent_OnMinigameStateChanged");
static_assert(sizeof(CreativeGameStreamDeviceComponent_OnMinigameStateChanged) == 0x000010, "Wrong size on CreativeGameStreamDeviceComponent_OnMinigameStateChanged");
static_assert(offsetof(CreativeGameStreamDeviceComponent_OnMinigameStateChanged, Minigame) == 0x000000, "Member 'CreativeGameStreamDeviceComponent_OnMinigameStateChanged::Minigame' has a wrong offset!");
static_assert(offsetof(CreativeGameStreamDeviceComponent_OnMinigameStateChanged, NewMinigameState) == 0x000008, "Member 'CreativeGameStreamDeviceComponent_OnMinigameStateChanged::NewMinigameState' has a wrong offset!");

struct CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace) == 0x000001, "Wrong alignment on CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace");
static_assert(sizeof(CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace) == 0x000001, "Wrong size on CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace");
static_assert(offsetof(CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace, ReturnValue) == 0x000000, "Member 'CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace::ReturnValue' has a wrong offset!");

struct CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged final
{
public:
	class AFortMinigame*                          InMinigame;
	EFortMinigameState                            NewMinigameState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged) == 0x000008, "Wrong alignment on CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged");
static_assert(sizeof(CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged) == 0x000010, "Wrong size on CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged");
static_assert(offsetof(CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged, InMinigame) == 0x000000, "Member 'CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged::InMinigame' has a wrong offset!");
static_assert(offsetof(CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged, NewMinigameState) == 0x000008, "Member 'CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged::NewMinigameState' has a wrong offset!");

}
