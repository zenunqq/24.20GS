#pragma once

#include "Basic.hpp"

#include "CRDLevelInstanceRuntime_classes.hpp"
#include "CRDLevelInstanceRuntime_parameters.hpp"

namespace SDK
{

void ALevelInstanceGameplayVolume::CheckForOverlappingVolumes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "CheckForOverlappingVolumes");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortLevelInstanceSaveActor* ALevelInstanceGameplayVolume::CreateLevelInstanceSaveActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "CreateLevelInstanceSaveActor");

	Params::LevelInstanceGameplayVolume_CreateLevelInstanceSaveActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALevelInstanceGameplayVolume::HandleActorHealthChanged(class AActor* Actor, float NewHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "HandleActorHealthChanged");

	Params::LevelInstanceGameplayVolume_HandleActorHealthChanged Parms{};

	Parms.Actor = Actor;
	Parms.NewHealth = NewHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::InstantiateFromLevelInstanceSaveActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "InstantiateFromLevelInstanceSaveActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::LevelInstanceBeingDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceBeingDestroyed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::LevelInstanceContentChanged(const class AActor* InstigatorActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceContentChanged");

	Params::LevelInstanceGameplayVolume_LevelInstanceContentChanged Parms{};

	Parms.InstigatorActor = InstigatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::LevelInstanceContentCollectionChanged(const class AActor* InstigatorActor, TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceContentCollectionChanged");

	Params::LevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.ContentCollection = ContentCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::LevelInstanceNameChanged(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceNameChanged");

	Params::LevelInstanceGameplayVolume_LevelInstanceNameChanged Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::LevelInstanceSizeChanged(const class AActor* InstigatorActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "LevelInstanceSizeChanged");

	Params::LevelInstanceGameplayVolume_LevelInstanceSizeChanged Parms{};

	Parms.InstigatorActor = InstigatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnMinigameStateChanged");

	Params::LevelInstanceGameplayVolume_OnMinigameStateChanged Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::OnRep_EditMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_EditMode");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::OnRep_InstanceLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_InstanceLoaded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::OnRep_IsDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnRep_IsDisabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::OnVolumeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "OnVolumeChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void ALevelInstanceGameplayVolume::RemoveActorWhenDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "RemoveActorWhenDied");

	Params::LevelInstanceGameplayVolume_RemoveActorWhenDied Parms{};

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

void ALevelInstanceGameplayVolume::RemoveActorWhenEndPlay(class AActor* Actor, const EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "RemoveActorWhenEndPlay");

	Params::LevelInstanceGameplayVolume_RemoveActorWhenEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::SetEditMode(bool bInEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetEditMode");

	Params::LevelInstanceGameplayVolume_SetEditMode Parms{};

	Parms.bInEditMode = bInEditMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::SetLevelInstanceActorGuid(const struct FGuid& InLevelInstanceActorGuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceActorGuid");

	Params::LevelInstanceGameplayVolume_SetLevelInstanceActorGuid Parms{};

	Parms.InLevelInstanceActorGuid = std::move(InLevelInstanceActorGuid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::SetLevelInstanceContentCollection(TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceContentCollection");

	Params::LevelInstanceGameplayVolume_SetLevelInstanceContentCollection Parms{};

	Parms.ContentCollection = ContentCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::SetLevelInstanceName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetLevelInstanceName");

	Params::LevelInstanceGameplayVolume_SetLevelInstanceName Parms{};

	Parms.InName = std::move(InName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::SetReadyForInstantiation(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetReadyForInstantiation");

	Params::LevelInstanceGameplayVolume_SetReadyForInstantiation Parms{};

	Parms.bReady = bReady;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ALevelInstanceGameplayVolume::SetWantsLevelLoaded(bool bInWantsLevelLoaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "SetWantsLevelLoaded");

	Params::LevelInstanceGameplayVolume_SetWantsLevelLoaded Parms{};

	Parms.bInWantsLevelLoaded = bInWantsLevelLoaded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString ALevelInstanceGameplayVolume::GetLevelInstanceName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "GetLevelInstanceName");

	Params::LevelInstanceGameplayVolume_GetLevelInstanceName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ALevelInstanceGameplayVolume::IsDisabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsDisabled");

	Params::LevelInstanceGameplayVolume_IsDisabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ALevelInstanceGameplayVolume::IsInEditMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsInEditMode");

	Params::LevelInstanceGameplayVolume_IsInEditMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ALevelInstanceGameplayVolume::IsPreviewActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LevelInstanceGameplayVolume", "IsPreviewActor");

	Params::LevelInstanceGameplayVolume_IsPreviewActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
