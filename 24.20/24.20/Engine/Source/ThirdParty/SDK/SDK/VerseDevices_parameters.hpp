#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ScriptDevice_HandleMinigameEndGame final
{
public:
	class AFortPlayerController*                  PlayerController;
	EFortMinigameEnd                              EndMethod;
	EFortMinigameState                            NextState;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(ScriptDevice_HandleMinigameEndGame) == 0x000008, "Wrong alignment on ScriptDevice_HandleMinigameEndGame");
static_assert(sizeof(ScriptDevice_HandleMinigameEndGame) == 0x000010, "Wrong size on ScriptDevice_HandleMinigameEndGame");
static_assert(offsetof(ScriptDevice_HandleMinigameEndGame, PlayerController) == 0x000000, "Member 'ScriptDevice_HandleMinigameEndGame::PlayerController' has a wrong offset!");
static_assert(offsetof(ScriptDevice_HandleMinigameEndGame, EndMethod) == 0x000008, "Member 'ScriptDevice_HandleMinigameEndGame::EndMethod' has a wrong offset!");
static_assert(offsetof(ScriptDevice_HandleMinigameEndGame, NextState) == 0x000009, "Member 'ScriptDevice_HandleMinigameEndGame::NextState' has a wrong offset!");

struct ScriptDevice_SetEnabled final
{
public:
	bool                                          bInEnabled;
};
static_assert(alignof(ScriptDevice_SetEnabled) == 0x000001, "Wrong alignment on ScriptDevice_SetEnabled");
static_assert(sizeof(ScriptDevice_SetEnabled) == 0x000001, "Wrong size on ScriptDevice_SetEnabled");
static_assert(offsetof(ScriptDevice_SetEnabled, bInEnabled) == 0x000000, "Member 'ScriptDevice_SetEnabled::bInEnabled' has a wrong offset!");

struct VerseCreativeObject_OnActorEndPlayDestroyActorAndReset final
{
public:
	class AActor*                                 Actor;
	EEndPlayReason                                EndPlayReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(VerseCreativeObject_OnActorEndPlayDestroyActorAndReset) == 0x000008, "Wrong alignment on VerseCreativeObject_OnActorEndPlayDestroyActorAndReset");
static_assert(sizeof(VerseCreativeObject_OnActorEndPlayDestroyActorAndReset) == 0x000010, "Wrong size on VerseCreativeObject_OnActorEndPlayDestroyActorAndReset");
static_assert(offsetof(VerseCreativeObject_OnActorEndPlayDestroyActorAndReset, Actor) == 0x000000, "Member 'VerseCreativeObject_OnActorEndPlayDestroyActorAndReset::Actor' has a wrong offset!");
static_assert(offsetof(VerseCreativeObject_OnActorEndPlayDestroyActorAndReset, EndPlayReason) == 0x000008, "Member 'VerseCreativeObject_OnActorEndPlayDestroyActorAndReset::EndPlayReason' has a wrong offset!");

}
