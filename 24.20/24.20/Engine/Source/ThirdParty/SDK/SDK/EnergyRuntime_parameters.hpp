#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct FortComponent_Energy_AddEnergy final
{
public:
	float                                         OutAmountOfEnergyAdded;
	float                                         AmountOfEnergyToAdd;
	class UObject*                                OptionalEnergySource;
	bool                                          bBroadcastEnergyPercentChanged;
	bool                                          ReturnValue;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(FortComponent_Energy_AddEnergy) == 0x000008, "Wrong alignment on FortComponent_Energy_AddEnergy");
static_assert(sizeof(FortComponent_Energy_AddEnergy) == 0x000018, "Wrong size on FortComponent_Energy_AddEnergy");
static_assert(offsetof(FortComponent_Energy_AddEnergy, OutAmountOfEnergyAdded) == 0x000000, "Member 'FortComponent_Energy_AddEnergy::OutAmountOfEnergyAdded' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_AddEnergy, AmountOfEnergyToAdd) == 0x000004, "Member 'FortComponent_Energy_AddEnergy::AmountOfEnergyToAdd' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_AddEnergy, OptionalEnergySource) == 0x000008, "Member 'FortComponent_Energy_AddEnergy::OptionalEnergySource' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_AddEnergy, bBroadcastEnergyPercentChanged) == 0x000010, "Member 'FortComponent_Energy_AddEnergy::bBroadcastEnergyPercentChanged' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_AddEnergy, ReturnValue) == 0x000011, "Member 'FortComponent_Energy_AddEnergy::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_ApplyRegenDataOverride final
{
public:
	struct FGameplayTag                           RegenOverrideIdentifier;
	float                                         NewRechargeAmountPerSecond;
	float                                         NewRechargeDelayInSeconds;
	float                                         NewRechargePercentageLimit;
};
static_assert(alignof(FortComponent_Energy_ApplyRegenDataOverride) == 0x000004, "Wrong alignment on FortComponent_Energy_ApplyRegenDataOverride");
static_assert(sizeof(FortComponent_Energy_ApplyRegenDataOverride) == 0x000010, "Wrong size on FortComponent_Energy_ApplyRegenDataOverride");
static_assert(offsetof(FortComponent_Energy_ApplyRegenDataOverride, RegenOverrideIdentifier) == 0x000000, "Member 'FortComponent_Energy_ApplyRegenDataOverride::RegenOverrideIdentifier' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_ApplyRegenDataOverride, NewRechargeAmountPerSecond) == 0x000004, "Member 'FortComponent_Energy_ApplyRegenDataOverride::NewRechargeAmountPerSecond' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_ApplyRegenDataOverride, NewRechargeDelayInSeconds) == 0x000008, "Member 'FortComponent_Energy_ApplyRegenDataOverride::NewRechargeDelayInSeconds' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_ApplyRegenDataOverride, NewRechargePercentageLimit) == 0x00000C, "Member 'FortComponent_Energy_ApplyRegenDataOverride::NewRechargePercentageLimit' has a wrong offset!");

struct FortComponent_Energy_HandleControllerChanged final
{
public:
	class APawn*                                  Pawn;
	class AController*                            OldController;
	class AController*                            NewController;
};
static_assert(alignof(FortComponent_Energy_HandleControllerChanged) == 0x000008, "Wrong alignment on FortComponent_Energy_HandleControllerChanged");
static_assert(sizeof(FortComponent_Energy_HandleControllerChanged) == 0x000018, "Wrong size on FortComponent_Energy_HandleControllerChanged");
static_assert(offsetof(FortComponent_Energy_HandleControllerChanged, Pawn) == 0x000000, "Member 'FortComponent_Energy_HandleControllerChanged::Pawn' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_HandleControllerChanged, OldController) == 0x000008, "Member 'FortComponent_Energy_HandleControllerChanged::OldController' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_HandleControllerChanged, NewController) == 0x000010, "Member 'FortComponent_Energy_HandleControllerChanged::NewController' has a wrong offset!");

struct FortComponent_Energy_OnPlayerStatePawnSet final
{
public:
	class APlayerState*                           Player;
	class APawn*                                  NewPawn;
	class APawn*                                  OldPawn;
};
static_assert(alignof(FortComponent_Energy_OnPlayerStatePawnSet) == 0x000008, "Wrong alignment on FortComponent_Energy_OnPlayerStatePawnSet");
static_assert(sizeof(FortComponent_Energy_OnPlayerStatePawnSet) == 0x000018, "Wrong size on FortComponent_Energy_OnPlayerStatePawnSet");
static_assert(offsetof(FortComponent_Energy_OnPlayerStatePawnSet, Player) == 0x000000, "Member 'FortComponent_Energy_OnPlayerStatePawnSet::Player' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_OnPlayerStatePawnSet, NewPawn) == 0x000008, "Member 'FortComponent_Energy_OnPlayerStatePawnSet::NewPawn' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_OnPlayerStatePawnSet, OldPawn) == 0x000010, "Member 'FortComponent_Energy_OnPlayerStatePawnSet::OldPawn' has a wrong offset!");

struct FortComponent_Energy_RegisterMutatorUpdatedDelegate final
{
public:
	class APawn*                                  AffectedPawn;
};
static_assert(alignof(FortComponent_Energy_RegisterMutatorUpdatedDelegate) == 0x000008, "Wrong alignment on FortComponent_Energy_RegisterMutatorUpdatedDelegate");
static_assert(sizeof(FortComponent_Energy_RegisterMutatorUpdatedDelegate) == 0x000008, "Wrong size on FortComponent_Energy_RegisterMutatorUpdatedDelegate");
static_assert(offsetof(FortComponent_Energy_RegisterMutatorUpdatedDelegate, AffectedPawn) == 0x000000, "Member 'FortComponent_Energy_RegisterMutatorUpdatedDelegate::AffectedPawn' has a wrong offset!");

struct FortComponent_Energy_RemoveRegenDataOverride final
{
public:
	struct FGameplayTag                           RegenOverrideIdentifier;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortComponent_Energy_RemoveRegenDataOverride) == 0x000004, "Wrong alignment on FortComponent_Energy_RemoveRegenDataOverride");
static_assert(sizeof(FortComponent_Energy_RemoveRegenDataOverride) == 0x000008, "Wrong size on FortComponent_Energy_RemoveRegenDataOverride");
static_assert(offsetof(FortComponent_Energy_RemoveRegenDataOverride, RegenOverrideIdentifier) == 0x000000, "Member 'FortComponent_Energy_RemoveRegenDataOverride::RegenOverrideIdentifier' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_RemoveRegenDataOverride, ReturnValue) == 0x000004, "Member 'FortComponent_Energy_RemoveRegenDataOverride::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_SetAllEnergyUsageFree final
{
public:
	bool                                          bShouldEnergyUsageBeFree;
	bool                                          ReturnValue;
};
static_assert(alignof(FortComponent_Energy_SetAllEnergyUsageFree) == 0x000001, "Wrong alignment on FortComponent_Energy_SetAllEnergyUsageFree");
static_assert(sizeof(FortComponent_Energy_SetAllEnergyUsageFree) == 0x000002, "Wrong size on FortComponent_Energy_SetAllEnergyUsageFree");
static_assert(offsetof(FortComponent_Energy_SetAllEnergyUsageFree, bShouldEnergyUsageBeFree) == 0x000000, "Member 'FortComponent_Energy_SetAllEnergyUsageFree::bShouldEnergyUsageBeFree' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_SetAllEnergyUsageFree, ReturnValue) == 0x000001, "Member 'FortComponent_Energy_SetAllEnergyUsageFree::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_StartAddingEnergy final
{
public:
	float                                         EnergyToAddPerSecond;
	struct FGameplayTag                           EnergySourceIdentifier;
	class UObject*                                OptionalEnergySource;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortComponent_Energy_StartAddingEnergy) == 0x000008, "Wrong alignment on FortComponent_Energy_StartAddingEnergy");
static_assert(sizeof(FortComponent_Energy_StartAddingEnergy) == 0x000018, "Wrong size on FortComponent_Energy_StartAddingEnergy");
static_assert(offsetof(FortComponent_Energy_StartAddingEnergy, EnergyToAddPerSecond) == 0x000000, "Member 'FortComponent_Energy_StartAddingEnergy::EnergyToAddPerSecond' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartAddingEnergy, EnergySourceIdentifier) == 0x000004, "Member 'FortComponent_Energy_StartAddingEnergy::EnergySourceIdentifier' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartAddingEnergy, OptionalEnergySource) == 0x000008, "Member 'FortComponent_Energy_StartAddingEnergy::OptionalEnergySource' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartAddingEnergy, ReturnValue) == 0x000010, "Member 'FortComponent_Energy_StartAddingEnergy::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_StartUsingEnergy final
{
public:
	float                                         EnergyToUseToStart;
	float                                         EnergyToUsePerSecond;
	struct FGameplayTag                           EnergyUseIdentifier;
	uint8                                         Pad_C[0x4];
	class UObject*                                OptionalEnergyUser;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FortComponent_Energy_StartUsingEnergy) == 0x000008, "Wrong alignment on FortComponent_Energy_StartUsingEnergy");
static_assert(sizeof(FortComponent_Energy_StartUsingEnergy) == 0x000020, "Wrong size on FortComponent_Energy_StartUsingEnergy");
static_assert(offsetof(FortComponent_Energy_StartUsingEnergy, EnergyToUseToStart) == 0x000000, "Member 'FortComponent_Energy_StartUsingEnergy::EnergyToUseToStart' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartUsingEnergy, EnergyToUsePerSecond) == 0x000004, "Member 'FortComponent_Energy_StartUsingEnergy::EnergyToUsePerSecond' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartUsingEnergy, EnergyUseIdentifier) == 0x000008, "Member 'FortComponent_Energy_StartUsingEnergy::EnergyUseIdentifier' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartUsingEnergy, OptionalEnergyUser) == 0x000010, "Member 'FortComponent_Energy_StartUsingEnergy::OptionalEnergyUser' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StartUsingEnergy, ReturnValue) == 0x000018, "Member 'FortComponent_Energy_StartUsingEnergy::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_StopAddingEnergy final
{
public:
	struct FGameplayTag                           EnergyUseIdentifier;
	uint8                                         Pad_4[0x4];
	class UObject*                                OptionalEnergySource;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortComponent_Energy_StopAddingEnergy) == 0x000008, "Wrong alignment on FortComponent_Energy_StopAddingEnergy");
static_assert(sizeof(FortComponent_Energy_StopAddingEnergy) == 0x000018, "Wrong size on FortComponent_Energy_StopAddingEnergy");
static_assert(offsetof(FortComponent_Energy_StopAddingEnergy, EnergyUseIdentifier) == 0x000000, "Member 'FortComponent_Energy_StopAddingEnergy::EnergyUseIdentifier' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StopAddingEnergy, OptionalEnergySource) == 0x000008, "Member 'FortComponent_Energy_StopAddingEnergy::OptionalEnergySource' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StopAddingEnergy, ReturnValue) == 0x000010, "Member 'FortComponent_Energy_StopAddingEnergy::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_StopUsingEnergy final
{
public:
	struct FGameplayTag                           EnergyUseIdentifier;
	uint8                                         Pad_4[0x4];
	class UObject*                                OptionalEnergyUser;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortComponent_Energy_StopUsingEnergy) == 0x000008, "Wrong alignment on FortComponent_Energy_StopUsingEnergy");
static_assert(sizeof(FortComponent_Energy_StopUsingEnergy) == 0x000018, "Wrong size on FortComponent_Energy_StopUsingEnergy");
static_assert(offsetof(FortComponent_Energy_StopUsingEnergy, EnergyUseIdentifier) == 0x000000, "Member 'FortComponent_Energy_StopUsingEnergy::EnergyUseIdentifier' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StopUsingEnergy, OptionalEnergyUser) == 0x000008, "Member 'FortComponent_Energy_StopUsingEnergy::OptionalEnergyUser' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_StopUsingEnergy, ReturnValue) == 0x000010, "Member 'FortComponent_Energy_StopUsingEnergy::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_UseEnergy final
{
public:
	float                                         OutAmountOfEnergyUsed;
	float                                         AmountOfEnergyToUse;
	bool                                          bUseEnergyEvenOnFailure;
	uint8                                         Pad_9[0x7];
	class UObject*                                OptionalEnergyUser;
	bool                                          bBroadcastEnergyPercentChanged;
	bool                                          ReturnValue;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FortComponent_Energy_UseEnergy) == 0x000008, "Wrong alignment on FortComponent_Energy_UseEnergy");
static_assert(sizeof(FortComponent_Energy_UseEnergy) == 0x000020, "Wrong size on FortComponent_Energy_UseEnergy");
static_assert(offsetof(FortComponent_Energy_UseEnergy, OutAmountOfEnergyUsed) == 0x000000, "Member 'FortComponent_Energy_UseEnergy::OutAmountOfEnergyUsed' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_UseEnergy, AmountOfEnergyToUse) == 0x000004, "Member 'FortComponent_Energy_UseEnergy::AmountOfEnergyToUse' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_UseEnergy, bUseEnergyEvenOnFailure) == 0x000008, "Member 'FortComponent_Energy_UseEnergy::bUseEnergyEvenOnFailure' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_UseEnergy, OptionalEnergyUser) == 0x000010, "Member 'FortComponent_Energy_UseEnergy::OptionalEnergyUser' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_UseEnergy, bBroadcastEnergyPercentChanged) == 0x000018, "Member 'FortComponent_Energy_UseEnergy::bBroadcastEnergyPercentChanged' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_UseEnergy, ReturnValue) == 0x000019, "Member 'FortComponent_Energy_UseEnergy::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_GetCurrentEnergyPercentage final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortComponent_Energy_GetCurrentEnergyPercentage) == 0x000004, "Wrong alignment on FortComponent_Energy_GetCurrentEnergyPercentage");
static_assert(sizeof(FortComponent_Energy_GetCurrentEnergyPercentage) == 0x000004, "Wrong size on FortComponent_Energy_GetCurrentEnergyPercentage");
static_assert(offsetof(FortComponent_Energy_GetCurrentEnergyPercentage, ReturnValue) == 0x000000, "Member 'FortComponent_Energy_GetCurrentEnergyPercentage::ReturnValue' has a wrong offset!");

struct FortComponent_Energy_HasSufficientEnergy final
{
public:
	float                                         EnergyAmountToTest;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortComponent_Energy_HasSufficientEnergy) == 0x000004, "Wrong alignment on FortComponent_Energy_HasSufficientEnergy");
static_assert(sizeof(FortComponent_Energy_HasSufficientEnergy) == 0x000008, "Wrong size on FortComponent_Energy_HasSufficientEnergy");
static_assert(offsetof(FortComponent_Energy_HasSufficientEnergy, EnergyAmountToTest) == 0x000000, "Member 'FortComponent_Energy_HasSufficientEnergy::EnergyAmountToTest' has a wrong offset!");
static_assert(offsetof(FortComponent_Energy_HasSufficientEnergy, ReturnValue) == 0x000004, "Member 'FortComponent_Energy_HasSufficientEnergy::ReturnValue' has a wrong offset!");

}
