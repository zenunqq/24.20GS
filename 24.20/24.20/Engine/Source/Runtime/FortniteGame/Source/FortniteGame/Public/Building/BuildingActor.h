#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

class BuildingActor
{
private:
	static bool CanBePlacedByPlayer(UClass* BuildClass);
	static void ForwardCreateBuildingActor(AFortPlayerController* PlayerController, FCreateBuildingActorData& CreateData);

	DefUHookOg(ServerCreateBuildingActor);
	static void ServerBeginEditingBuildingActor(UObject* Context, FFrame& Stack);
	static void ServerEditBuildingActor(UObject* Context, FFrame& Stack);
	static void ServerEndEditingBuildingActor(UObject* Context, FFrame& Stack);
	static void ServerRepairBuildingActor(UObject* Context, FFrame& Stack);
	DefHookOg(void, OnDamageServer, ABuildingSMActor*, float, FGameplayTagContainer, FVector, FHitResult, AFortPlayerControllerAthena*, AActor*, FGameplayEffectContextHandle);
	DefUHookOg(ServerSpawnDeco);
	static void ServerCreateBuildingAndSpawnDeco(UObject* Context, FFrame& Stack);

	InitHooks;
};
