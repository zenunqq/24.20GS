#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AIComponent_OnControllerEndPlay final
{
public:
	class AActor*                                 InSource;
	EEndPlayReason                                Reason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AIComponent_OnControllerEndPlay) == 0x000008, "Wrong alignment on AIComponent_OnControllerEndPlay");
static_assert(sizeof(AIComponent_OnControllerEndPlay) == 0x000010, "Wrong size on AIComponent_OnControllerEndPlay");
static_assert(offsetof(AIComponent_OnControllerEndPlay, InSource) == 0x000000, "Member 'AIComponent_OnControllerEndPlay::InSource' has a wrong offset!");
static_assert(offsetof(AIComponent_OnControllerEndPlay, Reason) == 0x000008, "Member 'AIComponent_OnControllerEndPlay::Reason' has a wrong offset!");

struct AIComponent_OnPossessedPawnChanged final
{
public:
	class APawn*                                  OldPawn;
	class APawn*                                  NewPawn;
};
static_assert(alignof(AIComponent_OnPossessedPawnChanged) == 0x000008, "Wrong alignment on AIComponent_OnPossessedPawnChanged");
static_assert(sizeof(AIComponent_OnPossessedPawnChanged) == 0x000010, "Wrong size on AIComponent_OnPossessedPawnChanged");
static_assert(offsetof(AIComponent_OnPossessedPawnChanged, OldPawn) == 0x000000, "Member 'AIComponent_OnPossessedPawnChanged::OldPawn' has a wrong offset!");
static_assert(offsetof(AIComponent_OnPossessedPawnChanged, NewPawn) == 0x000008, "Member 'AIComponent_OnPossessedPawnChanged::NewPawn' has a wrong offset!");

struct AIBehaviorScript_OnControllerEndPlay final
{
public:
	class AActor*                                 InSource;
	EEndPlayReason                                Reason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AIBehaviorScript_OnControllerEndPlay) == 0x000008, "Wrong alignment on AIBehaviorScript_OnControllerEndPlay");
static_assert(sizeof(AIBehaviorScript_OnControllerEndPlay) == 0x000010, "Wrong size on AIBehaviorScript_OnControllerEndPlay");
static_assert(offsetof(AIBehaviorScript_OnControllerEndPlay, InSource) == 0x000000, "Member 'AIBehaviorScript_OnControllerEndPlay::InSource' has a wrong offset!");
static_assert(offsetof(AIBehaviorScript_OnControllerEndPlay, Reason) == 0x000008, "Member 'AIBehaviorScript_OnControllerEndPlay::Reason' has a wrong offset!");

struct AIBehaviorScript_OnPossessedPawnChanged final
{
public:
	class APawn*                                  OldPawn;
	class APawn*                                  NewPawn;
};
static_assert(alignof(AIBehaviorScript_OnPossessedPawnChanged) == 0x000008, "Wrong alignment on AIBehaviorScript_OnPossessedPawnChanged");
static_assert(sizeof(AIBehaviorScript_OnPossessedPawnChanged) == 0x000010, "Wrong size on AIBehaviorScript_OnPossessedPawnChanged");
static_assert(offsetof(AIBehaviorScript_OnPossessedPawnChanged, OldPawn) == 0x000000, "Member 'AIBehaviorScript_OnPossessedPawnChanged::OldPawn' has a wrong offset!");
static_assert(offsetof(AIBehaviorScript_OnPossessedPawnChanged, NewPawn) == 0x000008, "Member 'AIBehaviorScript_OnPossessedPawnChanged::NewPawn' has a wrong offset!");

struct AIBehaviorScriptComponent_GetBehaviorScript final
{
public:
	class UAIBehaviorScript*                      ReturnValue;
};
static_assert(alignof(AIBehaviorScriptComponent_GetBehaviorScript) == 0x000008, "Wrong alignment on AIBehaviorScriptComponent_GetBehaviorScript");
static_assert(sizeof(AIBehaviorScriptComponent_GetBehaviorScript) == 0x000008, "Wrong size on AIBehaviorScriptComponent_GetBehaviorScript");
static_assert(offsetof(AIBehaviorScriptComponent_GetBehaviorScript, ReturnValue) == 0x000000, "Member 'AIBehaviorScriptComponent_GetBehaviorScript::ReturnValue' has a wrong offset!");

struct FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent final
{
public:
	TSubclassOf<class UEntityComponent>           EntityComponent;
};
static_assert(alignof(FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent) == 0x000008, "Wrong alignment on FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent");
static_assert(sizeof(FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent) == 0x000008, "Wrong size on FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent");
static_assert(offsetof(FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent, EntityComponent) == 0x000000, "Member 'FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent::EntityComponent' has a wrong offset!");

struct FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance final
{
public:
	class UEntityComponent*                       EntityComponent;
};
static_assert(alignof(FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance) == 0x000008, "Wrong alignment on FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance");
static_assert(sizeof(FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance) == 0x000008, "Wrong size on FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance");
static_assert(offsetof(FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance, EntityComponent) == 0x000000, "Member 'FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance::EntityComponent' has a wrong offset!");

struct VerseAISpawner_InternalOnAIDied final
{
public:
	class AController*                            KilledController;
	bool                                          bIsABot;
	uint8                                         Pad_9[0x7];
	class AFortPawn*                              KilledAIPawn;
	class AFortPlayerPawn*                        KilledPlayerPawn;
	class AController*                            KillerController;
};
static_assert(alignof(VerseAISpawner_InternalOnAIDied) == 0x000008, "Wrong alignment on VerseAISpawner_InternalOnAIDied");
static_assert(sizeof(VerseAISpawner_InternalOnAIDied) == 0x000028, "Wrong size on VerseAISpawner_InternalOnAIDied");
static_assert(offsetof(VerseAISpawner_InternalOnAIDied, KilledController) == 0x000000, "Member 'VerseAISpawner_InternalOnAIDied::KilledController' has a wrong offset!");
static_assert(offsetof(VerseAISpawner_InternalOnAIDied, bIsABot) == 0x000008, "Member 'VerseAISpawner_InternalOnAIDied::bIsABot' has a wrong offset!");
static_assert(offsetof(VerseAISpawner_InternalOnAIDied, KilledAIPawn) == 0x000010, "Member 'VerseAISpawner_InternalOnAIDied::KilledAIPawn' has a wrong offset!");
static_assert(offsetof(VerseAISpawner_InternalOnAIDied, KilledPlayerPawn) == 0x000018, "Member 'VerseAISpawner_InternalOnAIDied::KilledPlayerPawn' has a wrong offset!");
static_assert(offsetof(VerseAISpawner_InternalOnAIDied, KillerController) == 0x000020, "Member 'VerseAISpawner_InternalOnAIDied::KillerController' has a wrong offset!");

struct VerseAISpawner_InternalOnSpawned final
{
public:
	class APawn*                                  Pawn;
	int32                                         RequestID;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(VerseAISpawner_InternalOnSpawned) == 0x000008, "Wrong alignment on VerseAISpawner_InternalOnSpawned");
static_assert(sizeof(VerseAISpawner_InternalOnSpawned) == 0x000010, "Wrong size on VerseAISpawner_InternalOnSpawned");
static_assert(offsetof(VerseAISpawner_InternalOnSpawned, Pawn) == 0x000000, "Member 'VerseAISpawner_InternalOnSpawned::Pawn' has a wrong offset!");
static_assert(offsetof(VerseAISpawner_InternalOnSpawned, RequestID) == 0x000008, "Member 'VerseAISpawner_InternalOnSpawned::RequestID' has a wrong offset!");

struct VerseAISpawner_KillAllBots final
{
public:
	bool                                          bForceDoNotDropLoot;
};
static_assert(alignof(VerseAISpawner_KillAllBots) == 0x000001, "Wrong alignment on VerseAISpawner_KillAllBots");
static_assert(sizeof(VerseAISpawner_KillAllBots) == 0x000001, "Wrong size on VerseAISpawner_KillAllBots");
static_assert(offsetof(VerseAISpawner_KillAllBots, bForceDoNotDropLoot) == 0x000000, "Member 'VerseAISpawner_KillAllBots::bForceDoNotDropLoot' has a wrong offset!");

struct VerseAISpawner_OnEQSFinished final
{
public:
	TArray<struct FVector>                        QueryResultLocations;
};
static_assert(alignof(VerseAISpawner_OnEQSFinished) == 0x000008, "Wrong alignment on VerseAISpawner_OnEQSFinished");
static_assert(sizeof(VerseAISpawner_OnEQSFinished) == 0x000010, "Wrong size on VerseAISpawner_OnEQSFinished");
static_assert(offsetof(VerseAISpawner_OnEQSFinished, QueryResultLocations) == 0x000000, "Member 'VerseAISpawner_OnEQSFinished::QueryResultLocations' has a wrong offset!");

struct VerseAISpawner_OnPreSpawn final
{
public:
	class UFortAthenaAISpawnerDataComponentList*  ComponentList;
};
static_assert(alignof(VerseAISpawner_OnPreSpawn) == 0x000008, "Wrong alignment on VerseAISpawner_OnPreSpawn");
static_assert(sizeof(VerseAISpawner_OnPreSpawn) == 0x000008, "Wrong size on VerseAISpawner_OnPreSpawn");
static_assert(offsetof(VerseAISpawner_OnPreSpawn, ComponentList) == 0x000000, "Member 'VerseAISpawner_OnPreSpawn::ComponentList' has a wrong offset!");

struct VerseAISpawner_OnSpawned final
{
public:
	class AFortPawn*                              Pawn;
};
static_assert(alignof(VerseAISpawner_OnSpawned) == 0x000008, "Wrong alignment on VerseAISpawner_OnSpawned");
static_assert(sizeof(VerseAISpawner_OnSpawned) == 0x000008, "Wrong size on VerseAISpawner_OnSpawned");
static_assert(offsetof(VerseAISpawner_OnSpawned, Pawn) == 0x000000, "Member 'VerseAISpawner_OnSpawned::Pawn' has a wrong offset!");

}
