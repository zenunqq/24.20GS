#pragma once

#include "Basic.hpp"

#include "MeshCosmetics_classes.hpp"
#include "MeshCosmetics_parameters.hpp"

namespace SDK
{

void UFortCustomizableObjectParameterVariant::ApplyVariants(class AActor* Actor, const struct FFortAthenaLoadout& Loadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortCustomizableObjectParameterVariant", "ApplyVariants");

	Params::FortCustomizableObjectParameterVariant_ApplyVariants Parms{};

	Parms.Actor = Actor;
	Parms.Loadout = std::move(Loadout);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstanceCache_FortGameInstance::OnGameInstanceWorldChanged(class UWorld* OldWorld, class UWorld* NewWorld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceCache_FortGameInstance", "OnGameInstanceWorldChanged");

	Params::InstanceCache_FortGameInstance_OnGameInstanceWorldChanged Parms{};

	Parms.OldWorld = OldWorld;
	Parms.NewWorld = NewWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstanceCache_FortGameInstance::OnGamePhaseChanged(EAthenaGamePhase GamePhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceCache_FortGameInstance", "OnGamePhaseChanged");

	Params::InstanceCache_FortGameInstance_OnGamePhaseChanged Parms{};

	Parms.GamePhase = GamePhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstanceCache_FortGameInstance::OnGameStateChanged(class AGameStateBase* InGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceCache_FortGameInstance", "OnGameStateChanged");

	Params::InstanceCache_FortGameInstance_OnGameStateChanged Parms{};

	Parms.InGameState = InGameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstanceCache_FortGameInstance::OnPreLoadMap(const struct FWorldContext& WorldContext, const class FString& MapName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstanceCache_FortGameInstance", "OnPreLoadMap");

	Params::InstanceCache_FortGameInstance_OnPreLoadMap Parms{};

	Parms.WorldContext = std::move(WorldContext);
	Parms.MapName = std::move(MapName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void IMeshCosmeticTagInterface::OnPostCustomizationAnimGameplayTags_BP(const struct FGameplayTagContainer& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshCosmeticTagInterface", "OnPostCustomizationAnimGameplayTags_BP");

	Params::MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP Parms{};

	Parms.GameplayTags = std::move(GameplayTags);

	UObject::ProcessEvent(Func, &Parms);
}

}
