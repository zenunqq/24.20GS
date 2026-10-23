#pragma once

#include "Basic.hpp"

#include "LagerRuntime_classes.hpp"
#include "LagerRuntime_parameters.hpp"

namespace SDK
{

void AFortAthenaLivingWorldPointProvidersEnabler::EvaluateAndEnablePointProviders()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "EvaluateAndEnablePointProviders");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPointProvidersEnabler::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPointProvidersEnabler::RemoveClosestPointProvidersToPoint(const struct FVector& Point, const float MaximumDistance, const int32 PointsToDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "RemoveClosestPointProvidersToPoint");

	Params::FortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint Parms{};

	Parms.Point = std::move(Point);
	Parms.MaximumDistance = MaximumDistance;
	Parms.PointsToDisable = PointsToDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AFortAthenaLivingWorldPointProvidersEnabler::DoesStartEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "DoesStartEnabled");

	Params::FortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> AFortAthenaLivingWorldPointProvidersEnabler::GetEnabledLinkedPointProviders() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnabledLinkedPointProviders");

	Params::FortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer AFortAthenaLivingWorldPointProvidersEnabler::GetEnablerTags() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "GetEnablerTags");

	Params::FortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAthenaLivingWorldPointProvidersEnabler::HasCompletedEvaluation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProvidersEnabler", "HasCompletedEvaluation");

	Params::FortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnAttackerSpawned(class AActor* SpawnedAttacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnAttackerSpawned");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnAttackerSpawned Parms{};

	Parms.SpawnedAttacker = SpawnedAttacker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDamaged");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnDefenderDamaged Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDidDamage");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnDefenderDidDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderDied");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnDefenderDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnDefenderSpawned(class AActor* SpawnedDefender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnDefenderSpawned");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnDefenderSpawned Parms{};

	Parms.SpawnedDefender = SpawnedDefender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnEncounterEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnEncounterEnd");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnEncounterStart(class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnEncounterStart");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnEncounterStart Parms{};

	Parms.InAttackerEncounter = InAttackerEncounter;
	Parms.InDefenderEncounter = InDefenderEncounter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLinearEncounterAnalyticComponent::OnStageCompleted(const TArray<class AFortPickup*>& SpawnedRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLinearEncounterAnalyticComponent", "OnStageCompleted");

	Params::FortAthenaLinearEncounterAnalyticComponent_OnStageCompleted Parms{};

	Parms.SpawnedRewards = std::move(SpawnedRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::AddAllowedPointProvider(const TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>& PointProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AddAllowedPointProvider");

	Params::FortAthenaLivingWorldEncounterInstance_AddAllowedPointProvider Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::AdvanceEncounterStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "AdvanceEncounterStage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::PauseEncounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "PauseEncounter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::RemoveAllowedPointProvider(const TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>& PointProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RemoveAllowedPointProvider");

	Params::FortAthenaLivingWorldEncounterInstance_RemoveAllowedPointProvider Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::RequestEventGeneration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "RequestEventGeneration");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::ResumeEncounter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "ResumeEncounter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldEncounterInstance::StartEncounterStage(const int32 StageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "StartEncounterStage");

	Params::FortAthenaLivingWorldEncounterInstance_StartEncounterStage Parms{};

	Parms.StageIndex = StageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UFortAthenaLivingWorldEncounterInstance::GetTotalActorCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "GetTotalActorCount");

	Params::FortAthenaLivingWorldEncounterInstance_GetTotalActorCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaLivingWorldEncounterInstance::OwnsActor(class AActor* Actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldEncounterInstance", "OwnsActor");

	Params::FortAthenaLivingWorldEncounterInstance_OwnsActor Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAthenaLivingWorldManager* UFortAthenaLivingWorldManager::GetLivingWorldManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaLivingWorldManager", "GetLivingWorldManager");

	Params::FortAthenaLivingWorldManager_GetLivingWorldManager Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerRegisterPointProvider");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerUnregisterPointProvider");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider Parms{};

	Parms.PointProvider = PointProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::CancelSpawnRequest(const int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "CancelSpawnRequest");

	Params::FortAthenaLivingWorldManager_CancelSpawnRequest Parms{};

	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::EndEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "EndEncounter");

	Params::FortAthenaLivingWorldManager_EndEncounter Parms{};

	Parms.EncounterInstance = EncounterInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerDebugEvent(const class FString& EventName, int32 DebugIndex, const class FString& RuntimeSpawnDataName, const class FString& EncounterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDebugEvent");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerDebugEvent Parms{};

	Parms.EventName = std::move(EventName);
	Parms.DebugIndex = DebugIndex;
	Parms.RuntimeSpawnDataName = std::move(RuntimeSpawnDataName);
	Parms.EncounterName = std::move(EncounterName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance, float MinDisplayDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDisplaySpawnPoints");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerDisplaySpawnPoints Parms{};

	Parms.MaxDisplayDistance = MaxDisplayDistance;
	Parms.MinDisplayDistance = MinDisplayDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpEventInstances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpEventInstances");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpPrefabLevelBounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpPrefabLevelBounds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerDumpSpawnCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerDumpSpawnCount");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerFlush");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerGenerateEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerProviderDebugActor");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor Parms{};

	Parms.ProviderIndex = ProviderIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerSetEventGenerationEnabled(const bool bInGenerateEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerSetEventGenerationEnabled");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerSetEventGenerationEnabled Parms{};

	Parms.bInGenerateEvents = bInGenerateEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleActorMinimap");

	Params::FortAthenaLivingWorldManager_LivingWorldManagerToggleActorMinimap Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleDensityDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleDensityDisplay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleGenerateEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LivingWorldManagerToggleVerboseLogging");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LWMF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LWMF");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::LWMTAM(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "LWMTAM");

	Params::FortAthenaLivingWorldManager_LWMTAM Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnActorSpawned(class AActor* Actor, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnActorSpawned");

	Params::FortAthenaLivingWorldManager_OnActorSpawned Parms{};

	Parms.Actor = Actor;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldManager_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnDebugSpawnEventSpawned(const TArray<class AActor*>& SpawnedActors, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnDebugSpawnEventSpawned");

	Params::FortAthenaLivingWorldManager_OnDebugSpawnEventSpawned Parms{};

	Parms.SpawnedActors = std::move(SpawnedActors);
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnPatrolPathAdded");

	Params::FortAthenaLivingWorldManager_OnPatrolPathAdded Parms{};

	Parms.PatrolPath = PatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnRep_ActorClassToPreloadOnClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_ActorClassToPreloadOnClient");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnRep_DebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnRep_DebugDensityMinimapIndicator");

	Params::FortAthenaLivingWorldManager_OnRep_DebugDensityMinimapIndicator Parms{};

	Parms.OldMapIndicator = OldMapIndicator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnSpawnedActorDestroy");

	Params::FortAthenaLivingWorldManager_OnSpawnedActorDestroy Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnUnmanagedDensityReservoirActorDestroy(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnUnmanagedDensityReservoirActorDestroy");

	Params::FortAthenaLivingWorldManager_OnUnmanagedDensityReservoirActorDestroy Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::OnWorldFinishedInitialization(const struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "OnWorldFinishedInitialization");

	Params::FortAthenaLivingWorldManager_OnWorldFinishedInitialization Parms{};

	Parms.ContextTags = std::move(ContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::RegisterDensityReservoir(class AActor* ActorDensityReservoir, float Density, float Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "RegisterDensityReservoir");

	Params::FortAthenaLivingWorldManager_RegisterDensityReservoir Parms{};

	Parms.ActorDensityReservoir = ActorDensityReservoir;
	Parms.Density = Density;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::RequestEventGeneration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "RequestEventGeneration");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldManager::ResetEncounter(class UFortAthenaLivingWorldEncounterInstance* EncounterInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "ResetEncounter");

	Params::FortAthenaLivingWorldManager_ResetEncounter Parms{};

	Parms.EncounterInstance = EncounterInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::StartEncounter(const TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType, const TArray<TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class AActor* ActorDensityReservoir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "StartEncounter");

	Params::FortAthenaLivingWorldManager_StartEncounter Parms{};

	Parms.EncounterType = EncounterType;
	Parms.EncounterPointProviders = std::move(EncounterPointProviders);
	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaLivingWorldManager::TrySpawnEvent(const struct FDataTableRowHandle& EventEntry, const struct FTransform& SpawnLocation, const TDelegate<void(TArray<class AActor*>& SpawnedActors, bool bSuccess)>& OnRequestFinished, int32* RequestID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "TrySpawnEvent");

	Params::FortAthenaLivingWorldManager_TrySpawnEvent Parms{};

	Parms.EventEntry = std::move(EventEntry);
	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.OnRequestFinished = OnRequestFinished;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (RequestID != nullptr)
		*RequestID = Parms.RequestID;

	return Parms.ReturnValue;
}

void UFortAthenaLivingWorldManager::UnregisterDensityReservoir(class AActor* ActorDensityReservoir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "UnregisterDensityReservoir");

	Params::FortAthenaLivingWorldManager_UnregisterDensityReservoir Parms{};

	Parms.ActorDensityReservoir = ActorDensityReservoir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAthenaLivingWorldManager::BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "BuildDataRegistryResolverScope_Implementation");

	Params::FortAthenaLivingWorldManager_BuildDataRegistryResolverScope_Implementation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InOutResolverScopes != nullptr)
		*InOutResolverScopes = std::move(Parms.InOutResolverScopes);

	if (InOutPriority != nullptr)
		*InOutPriority = Parms.InOutPriority;

	return Parms.ReturnValue;
}

class UFortAthenaLivingWorldEncounterInstance* UFortAthenaLivingWorldManager::GetOwningEncounter(class AActor* Actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "GetOwningEncounter");

	Params::FortAthenaLivingWorldManager_GetOwningEncounter Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAthenaLivingWorldManager::IsEncounterCategoryActive(const TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "IsEncounterCategoryActive");

	Params::FortAthenaLivingWorldManager_IsEncounterCategoryActive Parms{};

	Parms.EncounterType = EncounterType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortAthenaLivingWorldManager::QueryEventBudget(const struct FDataTableRowHandle& EventEntry, const class AActor* SpawnLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldManager", "QueryEventBudget");

	Params::FortAthenaLivingWorldManager_QueryEventBudget Parms{};

	Parms.EventEntry = std::move(EventEntry);
	Parms.SpawnLocation = SpawnLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IFortAthenaLivingWorldPointProviderInterface::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "DisablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IFortAthenaLivingWorldPointProviderInterface::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "EnablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FVector IFortAthenaLivingWorldPointProviderInterface::GetPointProviderLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetPointProviderLocation");

	Params::FortAthenaLivingWorldPointProviderInterface_GetPointProviderLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPointProviderInterface", "GetFiltersTags");

	Params::FortAthenaLivingWorldPointProviderInterface_GetFiltersTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FilterTags != nullptr)
		*FilterTags = std::move(Parms.FilterTags);
}

class AFortAthenaLivingWorldPrefab* AFortAthenaLivingWorldPrefab::GetOwningLivingWorldPrefab(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortAthenaLivingWorldPrefab", "GetOwningLivingWorldPrefab");

	Params::FortAthenaLivingWorldPrefab_GetOwningLivingWorldPrefab Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaLivingWorldPrefab::AllowSpawnerToSpawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "AllowSpawnerToSpawn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefab::CallWhenAllActorHaveSpawned(const TDelegate<void(TArray<class AActor*>& SpawnedActors)>& DelegateToCall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "CallWhenAllActorHaveSpawned");

	Params::FortAthenaLivingWorldPrefab_CallWhenAllActorHaveSpawned Parms{};

	Parms.DelegateToCall = DelegateToCall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefab::DestroyBuildingsInLevelBounds(const TDelegate<void()>& FinishedDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "DestroyBuildingsInLevelBounds");

	Params::FortAthenaLivingWorldPrefab_DestroyBuildingsInLevelBounds Parms{};

	Parms.FinishedDelegate = FinishedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefab::MakeLevelVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "MakeLevelVisible");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefab::OnLevelShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnLevelShown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefab::OnRep_ShouldLevelBeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "OnRep_ShouldLevelBeVisible");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefab::RemoveFoliageInsideLevelBound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "RemoveFoliageInsideLevelBound");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FBox AFortAthenaLivingWorldPrefab::GetLevelBounds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefab", "GetLevelBounds");

	Params::FortAthenaLivingWorldPrefab_GetLevelBounds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaLivingWorldPrefabActorSpawner::CallWhenActorSpawned(const TDelegate<void(class AActor* SpawnedActor)>& DelegateToCall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "CallWhenActorSpawned");

	Params::FortAthenaLivingWorldPrefabActorSpawner_CallWhenActorSpawned Parms{};

	Parms.DelegateToCall = DelegateToCall;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldPrefabActorSpawner::OnSnapCompleted(class UFortSnapOnSurfaceComponent* Component, const struct FTransform& OldTransform, const struct FTransform& NewTransfom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "OnSnapCompleted");

	Params::FortAthenaLivingWorldPrefabActorSpawner_OnSnapCompleted Parms{};

	Parms.Component = Component;
	Parms.OldTransform = std::move(OldTransform);
	Parms.NewTransfom = std::move(NewTransfom);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* AFortAthenaLivingWorldPrefabActorSpawner::GetSpawnedActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldPrefabActorSpawner", "GetSpawnedActor");

	Params::FortAthenaLivingWorldPrefabActorSpawner_GetSpawnedActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaLivingWorldSpawnActionBlueprint::K2_OnAllActorSpawned(const TArray<class AActor*>& SpawnedActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldSpawnActionBlueprint", "K2_OnAllActorSpawned");

	Params::FortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned Parms{};

	Parms.SpawnedActor = std::move(SpawnedActor);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortAthenaLivingWorldStaticPointProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "DisablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldStaticPointProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "EnablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldStaticPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldStaticPointProvider", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldStaticPointProvider_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DisablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "EnablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::OnWorldFinishedInitialization(const struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "OnWorldFinishedInitialization");

	Params::FortAthenaLivingWorldVolume_OnWorldFinishedInitialization Parms{};

	Parms.ContextTags = std::move(ContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::ResetSpawnRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "ResetSpawnRotation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::RunEQS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "RunEQS");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::SetEQSQuery(class UEnvQuery* Query)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQuery");

	Params::FortAthenaLivingWorldVolume_SetEQSQuery Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::SetEQSQueryConfigParam(const class FName ParameterName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetEQSQueryConfigParam");

	Params::FortAthenaLivingWorldVolume_SetEQSQueryConfigParam Parms{};

	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::SetFiltersTags(const struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetFiltersTags");

	Params::FortAthenaLivingWorldVolume_SetFiltersTags Parms{};

	Parms.TagContainer = std::move(TagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaLivingWorldVolume::SetSpawnRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "SetSpawnRotation");

	Params::FortAthenaLivingWorldVolume_SetSpawnRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AFortAthenaLivingWorldVolume::DoesStartEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "DoesStartEnabled");

	Params::FortAthenaLivingWorldVolume_DoesStartEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortAthenaLivingWorldVolume::IsPointProviderEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldVolume", "IsPointProviderEnabled");

	Params::FortAthenaLivingWorldVolume_IsPointProviderEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaLivingWorldWardComponent::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "OnCurrentPlaylistLoaded");

	Params::FortAthenaLivingWorldWardComponent_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldWardComponent::OnWorldFinishedInitialization(const struct FGameplayTagContainer& ContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "OnWorldFinishedInitialization");

	Params::FortAthenaLivingWorldWardComponent_OnWorldFinishedInitialization Parms{};

	Parms.ContextTags = std::move(ContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAthenaLivingWorldWardComponent::SetWardRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaLivingWorldWardComponent", "SetWardRadius");

	Params::FortAthenaLivingWorldWardComponent_SetWardRadius Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPathPointProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "DisablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPathPointProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "EnablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPatrolPathPointProvider", "OnCurrentPlaylistLoaded");

	Params::FortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPointAroundPlayerProvider::DisablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "DisablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPointAroundPlayerProvider::EnablePointProvider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "EnablePointProvider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaPointAroundPlayerProvider::OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPointAroundPlayerProvider", "OnCurrentPlaylistLoaded");

	Params::FortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawn");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerSpawn Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnAtLocation");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerSpawnAtLocation Parms{};

	Parms.EventDataName = std::move(EventDataName);
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnEvent(const class FString& EventDataName, const class FString& SpawnerDataNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnEvent");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEvent Parms{};

	Parms.EventDataName = std::move(EventDataName);
	Parms.SpawnerDataNames = std::move(SpawnerDataNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawnEventAtLocation(const class FString& EventDataName, const struct FVector& Location, const struct FRotator& Rotation, const class FString& SpawnerDataNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerSpawnEventAtLocation");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEventAtLocation Parms{};

	Parms.EventDataName = std::move(EventDataName);
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.SpawnerDataNames = std::move(SpawnerDataNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportTo(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportTo");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerTeleportTo Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTeleportToSpawnPosition(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTeleportToSpawnPosition");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerTeleportToSpawnPosition Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LivingWorldManagerTriggerEvent(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LivingWorldManagerTriggerEvent");

	Params::FortCheatManager_LivingWorldManager_LivingWorldManagerTriggerEvent Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LWMS(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMS");

	Params::FortCheatManager_LivingWorldManager_LWMS Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LWMSE(const class FString& EventDataName, const class FString& SpawnerDataNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMSE");

	Params::FortCheatManager_LivingWorldManager_LWMSE Parms{};

	Parms.EventDataName = std::move(EventDataName);
	Parms.SpawnerDataNames = std::move(SpawnerDataNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCheatManager_LivingWorldManager::LWMTE(const class FString& EventDataName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCheatManager_LivingWorldManager", "LWMTE");

	Params::FortCheatManager_LivingWorldManager_LWMTE Parms{};

	Parms.EventDataName = std::move(EventDataName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
