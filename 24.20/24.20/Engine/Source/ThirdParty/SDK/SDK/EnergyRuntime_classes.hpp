#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "EnergyRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UFortComponent_Energy : public UPawnComponent
{
public:
	struct FGameplayTagQuery                      RechargeDisabledQuery;
	uint8                                         Pad_E8[0x10];
	struct FGameplayTagQuery                      EnergyUseDisabledQuery;
	struct FTimerHandle                           BeginRechargeTimerHandle;
	struct FGameplayTagContainer                  EnergyTypeIdentifierTagContainer;
	float                                         CurrentEnergy;
	float                                         NetEnergyDeltaPerSecond;
	uint8                                         Pad_170[0x8];
	struct FScalableFloat                         MaxEnergy;
	struct FScalableFloat                         MinEnergyForUsing;
	struct FScalableFloat                         RechargeAmountPerSecond;
	struct FScalableFloat                         RechargeDelayInSeconds;
	struct FScalableFloat                         RechargePercentageLimit;
	TArray<struct FEnergyChannelingData>          ActiveEnergyChannels;
	TArray<struct FEnergyChannelingData>          NewActiveEnergyChannels;
	TArray<struct FEnergyRegenOverrideData>       EnergyRegenOverrides;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent, float PreviousValue)> OnCurrentEnergyChanged;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent)> OnEnergyCompletelyDrained;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent)> OnEnergyRechargeBegun;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent)> OnEnergyRechargeInterrupted;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent)> OnEnergyRechargeComplete;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent)> OnEnergyReachedMax;
	TMulticastInlineDelegate<void(class UFortComponent_Energy* EnergyComponent)> OnEnergyReachedMinForUsing;
	uint8                                         bRechargingEnabled : 1;
	uint8                                         bIsRecharging : 1;
	uint8                                         bIsUsingEnergy : 1;
	uint8                                         Pad_2E1[0x7];

public:
	bool AddEnergy(float* OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, class UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged);
	void ApplyRegenDataOverride(const struct FGameplayTag& RegenOverrideIdentifier, const float NewRechargeAmountPerSecond, const float NewRechargeDelayInSeconds, const float NewRechargePercentageLimit);
	void HandleControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController);
	void OnMutatorUpdated();
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);
	bool RemoveRegenDataOverride(const struct FGameplayTag& RegenOverrideIdentifier);
	bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree);
	bool StartAddingEnergy(float EnergyToAddPerSecond, const struct FGameplayTag& EnergySourceIdentifier, class UObject* OptionalEnergySource);
	bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, const struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser);
	bool StopAddingEnergy(const struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergySource);
	bool StopUsingEnergy(const struct FGameplayTag& EnergyUseIdentifier, class UObject* OptionalEnergyUser);
	bool UseEnergy(float* OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, class UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged);

	float GetCurrentEnergyPercentage() const;
	bool HasSufficientEnergy(float EnergyAmountToTest) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortComponent_Energy">();
	}
	static class UFortComponent_Energy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortComponent_Energy>();
	}
};
static_assert(alignof(UFortComponent_Energy) == 0x000008, "Wrong alignment on UFortComponent_Energy");
static_assert(sizeof(UFortComponent_Energy) == 0x0002E8, "Wrong size on UFortComponent_Energy");
static_assert(offsetof(UFortComponent_Energy, RechargeDisabledQuery) == 0x0000A0, "Member 'UFortComponent_Energy::RechargeDisabledQuery' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, EnergyUseDisabledQuery) == 0x0000F8, "Member 'UFortComponent_Energy::EnergyUseDisabledQuery' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, BeginRechargeTimerHandle) == 0x000140, "Member 'UFortComponent_Energy::BeginRechargeTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, EnergyTypeIdentifierTagContainer) == 0x000148, "Member 'UFortComponent_Energy::EnergyTypeIdentifierTagContainer' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, CurrentEnergy) == 0x000168, "Member 'UFortComponent_Energy::CurrentEnergy' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, NetEnergyDeltaPerSecond) == 0x00016C, "Member 'UFortComponent_Energy::NetEnergyDeltaPerSecond' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, MaxEnergy) == 0x000178, "Member 'UFortComponent_Energy::MaxEnergy' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, MinEnergyForUsing) == 0x0001A0, "Member 'UFortComponent_Energy::MinEnergyForUsing' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, RechargeAmountPerSecond) == 0x0001C8, "Member 'UFortComponent_Energy::RechargeAmountPerSecond' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, RechargeDelayInSeconds) == 0x0001F0, "Member 'UFortComponent_Energy::RechargeDelayInSeconds' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, RechargePercentageLimit) == 0x000218, "Member 'UFortComponent_Energy::RechargePercentageLimit' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, ActiveEnergyChannels) == 0x000240, "Member 'UFortComponent_Energy::ActiveEnergyChannels' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, NewActiveEnergyChannels) == 0x000250, "Member 'UFortComponent_Energy::NewActiveEnergyChannels' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, EnergyRegenOverrides) == 0x000260, "Member 'UFortComponent_Energy::EnergyRegenOverrides' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnCurrentEnergyChanged) == 0x000270, "Member 'UFortComponent_Energy::OnCurrentEnergyChanged' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnEnergyCompletelyDrained) == 0x000280, "Member 'UFortComponent_Energy::OnEnergyCompletelyDrained' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnEnergyRechargeBegun) == 0x000290, "Member 'UFortComponent_Energy::OnEnergyRechargeBegun' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnEnergyRechargeInterrupted) == 0x0002A0, "Member 'UFortComponent_Energy::OnEnergyRechargeInterrupted' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnEnergyRechargeComplete) == 0x0002B0, "Member 'UFortComponent_Energy::OnEnergyRechargeComplete' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnEnergyReachedMax) == 0x0002C0, "Member 'UFortComponent_Energy::OnEnergyReachedMax' has a wrong offset!");
static_assert(offsetof(UFortComponent_Energy, OnEnergyReachedMinForUsing) == 0x0002D0, "Member 'UFortComponent_Energy::OnEnergyReachedMinForUsing' has a wrong offset!");

}
