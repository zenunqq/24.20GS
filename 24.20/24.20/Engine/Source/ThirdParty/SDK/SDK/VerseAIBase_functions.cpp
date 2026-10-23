#pragma once

#include "Basic.hpp"

#include "VerseAIBase_classes.hpp"
#include "VerseAIBase_parameters.hpp"

namespace SDK
{

void UAIComponent::OnControllerEndPlay(class AActor* InSource, EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIComponent", "OnControllerEndPlay");

	Params::AIComponent_OnControllerEndPlay Parms{};

	Parms.InSource = InSource;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIComponent::OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIComponent", "OnPossessedPawnChanged");

	Params::AIComponent_OnPossessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIBehaviorScript::OnControllerEndPlay(class AActor* InSource, EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIBehaviorScript", "OnControllerEndPlay");

	Params::AIBehaviorScript_OnControllerEndPlay Parms{};

	Parms.InSource = InSource;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAIBehaviorScript::OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIBehaviorScript", "OnPossessedPawnChanged");

	Params::AIBehaviorScript_OnPossessedPawnChanged Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAIBehaviorScript* UAIBehaviorScriptComponent::GetBehaviorScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIBehaviorScriptComponent", "GetBehaviorScript");

	Params::AIBehaviorScriptComponent_GetBehaviorScript Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaAISpawnerDataComponent_Verse::AddUniqueEntityComponent(TSubclassOf<class UEntityComponent> EntityComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_Verse", "AddUniqueEntityComponent");

	Params::FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponent Parms{};

	Parms.EntityComponent = EntityComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaAISpawnerDataComponent_Verse::AddUniqueEntityComponentInstance(class UEntityComponent* EntityComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_Verse", "AddUniqueEntityComponentInstance");

	Params::FortAthenaAISpawnerDataComponent_Verse_AddUniqueEntityComponentInstance Parms{};

	Parms.EntityComponent = EntityComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::InternalOnAIDied(class AController* KilledController, bool bIsABot, class AFortPawn* KilledAIPawn, class AFortPlayerPawn* KilledPlayerPawn, class AController* KillerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "InternalOnAIDied");

	Params::VerseAISpawner_InternalOnAIDied Parms{};

	Parms.KilledController = KilledController;
	Parms.bIsABot = bIsABot;
	Parms.KilledAIPawn = KilledAIPawn;
	Parms.KilledPlayerPawn = KilledPlayerPawn;
	Parms.KillerController = KillerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::InternalOnSpawned(class APawn* Pawn, const int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "InternalOnSpawned");

	Params::VerseAISpawner_InternalOnSpawned Parms{};

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::KillAllBots(const bool bForceDoNotDropLoot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "KillAllBots");

	Params::VerseAISpawner_KillAllBots Parms{};

	Parms.bForceDoNotDropLoot = bForceDoNotDropLoot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::OnEQSFinished(const TArray<struct FVector>& QueryResultLocations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "OnEQSFinished");

	Params::VerseAISpawner_OnEQSFinished Parms{};

	Parms.QueryResultLocations = std::move(QueryResultLocations);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::OnPreSpawn(class UFortAthenaAISpawnerDataComponentList* ComponentList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "OnPreSpawn");

	Params::VerseAISpawner_OnPreSpawn Parms{};

	Parms.ComponentList = ComponentList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::OnPropertiesLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "OnPropertiesLoaded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::OnSpawned(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "OnSpawned");

	Params::VerseAISpawner_OnSpawned Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AVerseAISpawner::RequestSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAISpawner", "RequestSpawn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
