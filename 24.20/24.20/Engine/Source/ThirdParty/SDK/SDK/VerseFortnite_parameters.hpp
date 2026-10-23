#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VerseFortniteMinigameTeamCollection_OnMinigameDestroyed final
{
public:
	class AActor*                                 DestroyedMinigame;
};
static_assert(alignof(VerseFortniteMinigameTeamCollection_OnMinigameDestroyed) == 0x000008, "Wrong alignment on VerseFortniteMinigameTeamCollection_OnMinigameDestroyed");
static_assert(sizeof(VerseFortniteMinigameTeamCollection_OnMinigameDestroyed) == 0x000008, "Wrong size on VerseFortniteMinigameTeamCollection_OnMinigameDestroyed");
static_assert(offsetof(VerseFortniteMinigameTeamCollection_OnMinigameDestroyed, DestroyedMinigame) == 0x000000, "Member 'VerseFortniteMinigameTeamCollection_OnMinigameDestroyed::DestroyedMinigame' has a wrong offset!");

struct VerseFortniteMinigameTeamCollection_OnMinigameSetUp final
{
public:
	class AFortMinigame*                          InMinigame;
};
static_assert(alignof(VerseFortniteMinigameTeamCollection_OnMinigameSetUp) == 0x000008, "Wrong alignment on VerseFortniteMinigameTeamCollection_OnMinigameSetUp");
static_assert(sizeof(VerseFortniteMinigameTeamCollection_OnMinigameSetUp) == 0x000008, "Wrong size on VerseFortniteMinigameTeamCollection_OnMinigameSetUp");
static_assert(offsetof(VerseFortniteMinigameTeamCollection_OnMinigameSetUp, InMinigame) == 0x000000, "Member 'VerseFortniteMinigameTeamCollection_OnMinigameSetUp::InMinigame' has a wrong offset!");

struct VerseFortniteActorWrapper_OnActorDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(VerseFortniteActorWrapper_OnActorDestroyed) == 0x000008, "Wrong alignment on VerseFortniteActorWrapper_OnActorDestroyed");
static_assert(sizeof(VerseFortniteActorWrapper_OnActorDestroyed) == 0x000008, "Wrong size on VerseFortniteActorWrapper_OnActorDestroyed");
static_assert(offsetof(VerseFortniteActorWrapper_OnActorDestroyed, DestroyedActor) == 0x000000, "Member 'VerseFortniteActorWrapper_OnActorDestroyed::DestroyedActor' has a wrong offset!");

struct VerseFortniteCharacter_HandlePawnEliminated final
{
public:
	class AFortPlayerPawnAthena*                  EliminatedPawn;
};
static_assert(alignof(VerseFortniteCharacter_HandlePawnEliminated) == 0x000008, "Wrong alignment on VerseFortniteCharacter_HandlePawnEliminated");
static_assert(sizeof(VerseFortniteCharacter_HandlePawnEliminated) == 0x000008, "Wrong size on VerseFortniteCharacter_HandlePawnEliminated");
static_assert(offsetof(VerseFortniteCharacter_HandlePawnEliminated, EliminatedPawn) == 0x000000, "Member 'VerseFortniteCharacter_HandlePawnEliminated::EliminatedPawn' has a wrong offset!");

struct VerseFortniteCharacter_HandlePosessedPawnChanged final
{
public:
	class APawn*                                  OldPawn;
	class APawn*                                  NewPawn;
};
static_assert(alignof(VerseFortniteCharacter_HandlePosessedPawnChanged) == 0x000008, "Wrong alignment on VerseFortniteCharacter_HandlePosessedPawnChanged");
static_assert(sizeof(VerseFortniteCharacter_HandlePosessedPawnChanged) == 0x000010, "Wrong size on VerseFortniteCharacter_HandlePosessedPawnChanged");
static_assert(offsetof(VerseFortniteCharacter_HandlePosessedPawnChanged, OldPawn) == 0x000000, "Member 'VerseFortniteCharacter_HandlePosessedPawnChanged::OldPawn' has a wrong offset!");
static_assert(offsetof(VerseFortniteCharacter_HandlePosessedPawnChanged, NewPawn) == 0x000008, "Member 'VerseFortniteCharacter_HandlePosessedPawnChanged::NewPawn' has a wrong offset!");

}
