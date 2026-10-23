#pragma once

#include "Basic.hpp"

#include "EnergyRuntime_classes.hpp"
#include "EnergyRuntime_parameters.hpp"

namespace SDK
{

bool UFortComponent_Energy::AddEnergy(float* OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, class UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "AddEnergy");

	Params::FortComponent_Energy_AddEnergy Parms{};

	Parms.AmountOfEnergyToAdd = AmountOfEnergyToAdd;
	Parms.OptionalEnergySource = OptionalEnergySource;
	Parms.bBroadcastEnergyPercentChanged = bBroadcastEnergyPercentChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAmountOfEnergyAdded != nullptr)
		*OutAmountOfEnergyAdded = Parms.OutAmountOfEnergyAdded;

	return Parms.ReturnValue;
}

void UFortComponent_Energy::ApplyRegenDataOverride(const struct FGameplayTag& RegenOverrideIdentifier, const float NewRechargeAmountPerSecond, const float NewRechargeDelayInSeconds, const float NewRechargePercentageLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "ApplyRegenDataOverride");

	Params::FortComponent_Energy_ApplyRegenDataOverride Parms{};

	Parms.RegenOverrideIdentifier = std::move(RegenOverrideIdentifier);
	Parms.NewRechargeAmountPerSecond = NewRechargeAmountPerSecond;
	Parms.NewRechargeDelayInSeconds = NewRechargeDelayInSeconds;
	Parms.NewRechargePercentageLimit = NewRechargePercentageLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortComponent_Energy::HandleControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "HandleControllerChanged");

	Params::FortComponent_Energy_HandleControllerChanged Parms{};

	Parms.Pawn = Pawn;
	Parms.OldController = OldController;
	Parms.NewController = NewController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortComponent_Energy::OnMutatorUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "OnMutatorUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortComponent_Energy::OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "OnPlayerStatePawnSet");

	Params::FortComponent_Energy_OnPlayerStatePawnSet Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortComponent_Energy::RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "RegisterMutatorUpdatedDelegate");

	Params::FortComponent_Energy_RegisterMutatorUpdatedDelegate Parms{};

	Parms.AffectedPawn = AffectedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortComponent_Energy::RemoveRegenDataOverride(const struct FGameplayTag& RegenOverrideIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "RemoveRegenDataOverride");

	Params::FortComponent_Energy_RemoveRegenDataOverride Parms{};

	Parms.RegenOverrideIdentifier = std::move(RegenOverrideIdentifier);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "SetAllEnergyUsageFree");

	Params::FortComponent_Energy_SetAllEnergyUsageFree Parms{};

	Parms.bShouldEnergyUsageBeFree = bShouldEnergyUsageBeFree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::StartAddingEnergy(float EnergyToAddPerSecond, const struct FGameplayTag& EnergySourceIdentifier, class UObject* OptionalEnergySource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "StartAddingEnergy");

	Params::FortComponent_Energy_StartAddingEnergy Parms{};

	Parms.EnergyToAddPerSecond = EnergyToAddPerSecond;
	Parms.EnergySourceIdentifier = std::move(EnergySourceIdentifier);
	Parms.OptionalEnergySource = OptionalEnergySource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, const struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "StartUsingEnergy");

	Params::FortComponent_Energy_StartUsingEnergy Parms{};

	Parms.EnergyToUseToStart = EnergyToUseToStart;
	Parms.EnergyToUsePerSecond = EnergyToUsePerSecond;
	Parms.EnergyUseIdentifier = std::move(EnergyUseIdentifier);
	Parms.OptionalEnergyUser = OptionalEnergyUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::StopAddingEnergy(const struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergySource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "StopAddingEnergy");

	Params::FortComponent_Energy_StopAddingEnergy Parms{};

	Parms.EnergyUseIdentifier = std::move(EnergyUseIdentifier);
	Parms.OptionalEnergySource = OptionalEnergySource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::StopUsingEnergy(const struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "StopUsingEnergy");

	Params::FortComponent_Energy_StopUsingEnergy Parms{};

	Parms.EnergyUseIdentifier = std::move(EnergyUseIdentifier);
	Parms.OptionalEnergyUser = OptionalEnergyUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::UseEnergy(float* OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, class UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "UseEnergy");

	Params::FortComponent_Energy_UseEnergy Parms{};

	Parms.AmountOfEnergyToUse = AmountOfEnergyToUse;
	Parms.bUseEnergyEvenOnFailure = bUseEnergyEvenOnFailure;
	Parms.OptionalEnergyUser = OptionalEnergyUser;
	Parms.bBroadcastEnergyPercentChanged = bBroadcastEnergyPercentChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAmountOfEnergyUsed != nullptr)
		*OutAmountOfEnergyUsed = Parms.OutAmountOfEnergyUsed;

	return Parms.ReturnValue;
}

float UFortComponent_Energy::GetCurrentEnergyPercentage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "GetCurrentEnergyPercentage");

	Params::FortComponent_Energy_GetCurrentEnergyPercentage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortComponent_Energy::HasSufficientEnergy(float EnergyAmountToTest) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortComponent_Energy", "HasSufficientEnergy");

	Params::FortComponent_Energy_HasSufficientEnergy Parms{};

	Parms.EnergyAmountToTest = EnergyAmountToTest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
