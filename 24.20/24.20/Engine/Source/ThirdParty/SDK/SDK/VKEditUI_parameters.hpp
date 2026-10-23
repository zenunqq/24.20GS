#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct VKConnectionIndicator_HandleMemorySamplerProgressUpdated final
{
public:
	float                                         Progress;
};
static_assert(alignof(VKConnectionIndicator_HandleMemorySamplerProgressUpdated) == 0x000004, "Wrong alignment on VKConnectionIndicator_HandleMemorySamplerProgressUpdated");
static_assert(sizeof(VKConnectionIndicator_HandleMemorySamplerProgressUpdated) == 0x000004, "Wrong size on VKConnectionIndicator_HandleMemorySamplerProgressUpdated");
static_assert(offsetof(VKConnectionIndicator_HandleMemorySamplerProgressUpdated, Progress) == 0x000000, "Member 'VKConnectionIndicator_HandleMemorySamplerProgressUpdated::Progress' has a wrong offset!");

struct VKConnectionIndicator_OnMinigameStateChanged final
{
public:
	EFortMinigameState                            MinigameState;
	EFortMinigameState                            PreviousMinigameState;
};
static_assert(alignof(VKConnectionIndicator_OnMinigameStateChanged) == 0x000001, "Wrong alignment on VKConnectionIndicator_OnMinigameStateChanged");
static_assert(sizeof(VKConnectionIndicator_OnMinigameStateChanged) == 0x000002, "Wrong size on VKConnectionIndicator_OnMinigameStateChanged");
static_assert(offsetof(VKConnectionIndicator_OnMinigameStateChanged, MinigameState) == 0x000000, "Member 'VKConnectionIndicator_OnMinigameStateChanged::MinigameState' has a wrong offset!");
static_assert(offsetof(VKConnectionIndicator_OnMinigameStateChanged, PreviousMinigameState) == 0x000001, "Member 'VKConnectionIndicator_OnMinigameStateChanged::PreviousMinigameState' has a wrong offset!");

struct VKDebugMessagesBase_BP_OnGameStateInitialized final
{
public:
	class AFortGameState*                         GameState;
};
static_assert(alignof(VKDebugMessagesBase_BP_OnGameStateInitialized) == 0x000008, "Wrong alignment on VKDebugMessagesBase_BP_OnGameStateInitialized");
static_assert(sizeof(VKDebugMessagesBase_BP_OnGameStateInitialized) == 0x000008, "Wrong size on VKDebugMessagesBase_BP_OnGameStateInitialized");
static_assert(offsetof(VKDebugMessagesBase_BP_OnGameStateInitialized, GameState) == 0x000000, "Member 'VKDebugMessagesBase_BP_OnGameStateInitialized::GameState' has a wrong offset!");

struct VKDebugMessagesBase_HandleGameStateInitialized final
{
public:
	class AFortGameState*                         GameState;
};
static_assert(alignof(VKDebugMessagesBase_HandleGameStateInitialized) == 0x000008, "Wrong alignment on VKDebugMessagesBase_HandleGameStateInitialized");
static_assert(sizeof(VKDebugMessagesBase_HandleGameStateInitialized) == 0x000008, "Wrong size on VKDebugMessagesBase_HandleGameStateInitialized");
static_assert(offsetof(VKDebugMessagesBase_HandleGameStateInitialized, GameState) == 0x000000, "Member 'VKDebugMessagesBase_HandleGameStateInitialized::GameState' has a wrong offset!");

}
