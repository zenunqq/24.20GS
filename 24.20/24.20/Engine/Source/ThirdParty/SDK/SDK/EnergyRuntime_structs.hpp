#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FEnergyChannelingData final
{
public:
	float                                         EnergyPerSecond;
	struct FGameplayTag                           EnergyChannelingPurposeIdentifier;
	class UObject*                                OptionalEnergyChannelingSource;
	bool                                          bShouldStopApplyingNextTick;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FEnergyChannelingData) == 0x000008, "Wrong alignment on FEnergyChannelingData");
static_assert(sizeof(FEnergyChannelingData) == 0x000018, "Wrong size on FEnergyChannelingData");
static_assert(offsetof(FEnergyChannelingData, EnergyPerSecond) == 0x000000, "Member 'FEnergyChannelingData::EnergyPerSecond' has a wrong offset!");
static_assert(offsetof(FEnergyChannelingData, EnergyChannelingPurposeIdentifier) == 0x000004, "Member 'FEnergyChannelingData::EnergyChannelingPurposeIdentifier' has a wrong offset!");
static_assert(offsetof(FEnergyChannelingData, OptionalEnergyChannelingSource) == 0x000008, "Member 'FEnergyChannelingData::OptionalEnergyChannelingSource' has a wrong offset!");
static_assert(offsetof(FEnergyChannelingData, bShouldStopApplyingNextTick) == 0x000010, "Member 'FEnergyChannelingData::bShouldStopApplyingNextTick' has a wrong offset!");

struct FEnergyRegenOverrideData final
{
public:
	struct FGameplayTag                           EnergyRegenIdentifier;
	float                                         RechargeAmountPerSecond;
	float                                         RechargeDelayInSeconds;
	float                                         RechargePercentageLimit;
};
static_assert(alignof(FEnergyRegenOverrideData) == 0x000004, "Wrong alignment on FEnergyRegenOverrideData");
static_assert(sizeof(FEnergyRegenOverrideData) == 0x000010, "Wrong size on FEnergyRegenOverrideData");
static_assert(offsetof(FEnergyRegenOverrideData, EnergyRegenIdentifier) == 0x000000, "Member 'FEnergyRegenOverrideData::EnergyRegenIdentifier' has a wrong offset!");
static_assert(offsetof(FEnergyRegenOverrideData, RechargeAmountPerSecond) == 0x000004, "Member 'FEnergyRegenOverrideData::RechargeAmountPerSecond' has a wrong offset!");
static_assert(offsetof(FEnergyRegenOverrideData, RechargeDelayInSeconds) == 0x000008, "Member 'FEnergyRegenOverrideData::RechargeDelayInSeconds' has a wrong offset!");
static_assert(offsetof(FEnergyRegenOverrideData, RechargePercentageLimit) == 0x00000C, "Member 'FEnergyRegenOverrideData::RechargePercentageLimit' has a wrong offset!");

}
