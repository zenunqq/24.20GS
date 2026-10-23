#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EntityCore_classes.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAIActionsHandlerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIActionsHandlerComponent">();
	}
	static class UAIActionsHandlerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIActionsHandlerComponent>();
	}
};
static_assert(alignof(UAIActionsHandlerComponent) == 0x000008, "Wrong alignment on UAIActionsHandlerComponent");
static_assert(sizeof(UAIActionsHandlerComponent) == 0x0000D0, "Wrong size on UAIActionsHandlerComponent");

class UAIComponent : public UEntityEnableableComponent
{
public:
	class AFortPawn*                              CachedPawn;
	class AAIController*                          CachedAIController;
	uint8                                         Pad_90[0x8];

public:
	void OnControllerEndPlay(class AActor* InSource, EEndPlayReason Reason);
	void OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIComponent">();
	}
	static class UAIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIComponent>();
	}
};
static_assert(alignof(UAIComponent) == 0x000008, "Wrong alignment on UAIComponent");
static_assert(sizeof(UAIComponent) == 0x000098, "Wrong size on UAIComponent");
static_assert(offsetof(UAIComponent, CachedPawn) == 0x000080, "Member 'UAIComponent::CachedPawn' has a wrong offset!");
static_assert(offsetof(UAIComponent, CachedAIController) == 0x000088, "Member 'UAIComponent::CachedAIController' has a wrong offset!");

class UAIActionsComponent : public UAIComponent
{
public:
	uint8                                         Pad_98[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIActionsComponent">();
	}
	static class UAIActionsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIActionsComponent>();
	}
};
static_assert(alignof(UAIActionsComponent) == 0x000008, "Wrong alignment on UAIActionsComponent");
static_assert(sizeof(UAIActionsComponent) == 0x0000B8, "Wrong size on UAIActionsComponent");

class UAIBehaviorScript : public UEntityEnableableComponent
{
public:
	uint8                                         Pad_80[0x10];

public:
	void OnControllerEndPlay(class AActor* InSource, EEndPlayReason Reason);
	void OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIBehaviorScript">();
	}
	static class UAIBehaviorScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIBehaviorScript>();
	}
};
static_assert(alignof(UAIBehaviorScript) == 0x000008, "Wrong alignment on UAIBehaviorScript");
static_assert(sizeof(UAIBehaviorScript) == 0x000090, "Wrong size on UAIBehaviorScript");

class UAIBehaviorScriptComponent final : public UActorComponent
{
public:
	class UAIBehaviorScript*                      AIBehaviorScript;

public:
	class UAIBehaviorScript* GetBehaviorScript();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIBehaviorScriptComponent">();
	}
	static class UAIBehaviorScriptComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIBehaviorScriptComponent>();
	}
};
static_assert(alignof(UAIBehaviorScriptComponent) == 0x000008, "Wrong alignment on UAIBehaviorScriptComponent");
static_assert(sizeof(UAIBehaviorScriptComponent) == 0x0000A8, "Wrong size on UAIBehaviorScriptComponent");
static_assert(offsetof(UAIBehaviorScriptComponent, AIBehaviorScript) == 0x0000A0, "Member 'UAIBehaviorScriptComponent::AIBehaviorScript' has a wrong offset!");

class UFortAthenaAISpawnerDataComponent_Verse final : public UFortAthenaAISpawnerDataComponent_ScriptBase
{
public:
	TArray<TSubclassOf<class UEntityComponent>>   EntityComponents;
	TArray<TWeakObjectPtr<class UEntityComponent>> EntityComponentInstances;

public:
	void AddUniqueEntityComponent(TSubclassOf<class UEntityComponent> EntityComponent);
	void AddUniqueEntityComponentInstance(class UEntityComponent* EntityComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAISpawnerDataComponent_Verse">();
	}
	static class UFortAthenaAISpawnerDataComponent_Verse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAISpawnerDataComponent_Verse>();
	}
};
static_assert(alignof(UFortAthenaAISpawnerDataComponent_Verse) == 0x000008, "Wrong alignment on UFortAthenaAISpawnerDataComponent_Verse");
static_assert(sizeof(UFortAthenaAISpawnerDataComponent_Verse) == 0x000050, "Wrong size on UFortAthenaAISpawnerDataComponent_Verse");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, EntityComponents) == 0x000030, "Member 'UFortAthenaAISpawnerDataComponent_Verse::EntityComponents' has a wrong offset!");
static_assert(offsetof(UFortAthenaAISpawnerDataComponent_Verse, EntityComponentInstances) == 0x000040, "Member 'UFortAthenaAISpawnerDataComponent_Verse::EntityComponentInstances' has a wrong offset!");

class AVerseAISpawner final : public AFortCreativeDeviceProp
{
public:
	TArray<TSubclassOf<class UEntityScriptComponent>> VerseScriptComponents;
	TSubclassOf<class UFortAthenaAISpawnerData>   AISpawnerData;
	TArray<class AFortPawn*>                      SpawnedList;
	class UFortMinigameProgressComponent*         MinigameProgress;
	class UFortAISpawnerUtilityComponent*         AISpawnerUtilityComponent;
	class UFortActorOptionsComponent*             OptionsComponent;
	TSoftObjectPtr<class UEnvQuery>               SpawnEQSQuery;
	uint8                                         Pad_F70[0x20];

public:
	void InternalOnAIDied(class AController* KilledController, bool bIsABot, class AFortPawn* KilledAIPawn, class AFortPlayerPawn* KilledPlayerPawn, class AController* KillerController);
	void InternalOnSpawned(class APawn* Pawn, const int32 RequestID);
	void KillAllBots(const bool bForceDoNotDropLoot);
	void OnEQSFinished(const TArray<struct FVector>& QueryResultLocations);
	void OnPreSpawn(class UFortAthenaAISpawnerDataComponentList* ComponentList);
	void OnPropertiesLoaded();
	void OnSpawned(class AFortPawn* Pawn);
	void RequestSpawn();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseAISpawner">();
	}
	static class AVerseAISpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVerseAISpawner>();
	}
};
static_assert(alignof(AVerseAISpawner) == 0x000008, "Wrong alignment on AVerseAISpawner");
static_assert(sizeof(AVerseAISpawner) == 0x000F90, "Wrong size on AVerseAISpawner");
static_assert(offsetof(AVerseAISpawner, VerseScriptComponents) == 0x000F08, "Member 'AVerseAISpawner::VerseScriptComponents' has a wrong offset!");
static_assert(offsetof(AVerseAISpawner, AISpawnerData) == 0x000F18, "Member 'AVerseAISpawner::AISpawnerData' has a wrong offset!");
static_assert(offsetof(AVerseAISpawner, SpawnedList) == 0x000F20, "Member 'AVerseAISpawner::SpawnedList' has a wrong offset!");
static_assert(offsetof(AVerseAISpawner, MinigameProgress) == 0x000F30, "Member 'AVerseAISpawner::MinigameProgress' has a wrong offset!");
static_assert(offsetof(AVerseAISpawner, AISpawnerUtilityComponent) == 0x000F38, "Member 'AVerseAISpawner::AISpawnerUtilityComponent' has a wrong offset!");
static_assert(offsetof(AVerseAISpawner, OptionsComponent) == 0x000F40, "Member 'AVerseAISpawner::OptionsComponent' has a wrong offset!");
static_assert(offsetof(AVerseAISpawner, SpawnEQSQuery) == 0x000F48, "Member 'AVerseAISpawner::SpawnEQSQuery' has a wrong offset!");

}
