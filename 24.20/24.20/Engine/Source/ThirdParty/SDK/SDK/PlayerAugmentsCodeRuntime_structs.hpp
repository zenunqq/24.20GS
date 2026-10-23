#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EBattleRoyaleBPAugmentLogVerbosity : uint8
{
	Log                                      = 0,
	Verbose                                  = 1,
	EBattleRoyaleBPAugmentLogVerbosity_MAX   = 2,
};

enum class EFortBRAugmentSystemCastResult : uint8
{
	Valid                                    = 0,
	Invalid                                  = 1,
	EFortBRAugmentSystemCastResult_MAX       = 2,
};

enum class EAugmentHoldInputRerollState : uint8
{
	Pressed                                  = 0,
	Released                                 = 1,
	EAugmentHoldInputRerollState_MAX         = 2,
};

enum class EAugmentExecResult : uint8
{
	Success                                  = 0,
	Failure                                  = 1,
	EAugmentExecResult_MAX                   = 2,
};

enum class ERollModifierOperation : uint8
{
	Add                                      = 0,
	Multiply                                 = 1,
	Zero                                     = 2,
	ERollModifierOperation_MAX               = 3,
};

struct FFortDynamicRollWeightModifierTableRow : public FTableRowBase
{
public:
	struct FGameplayTag                           ActivatingPlayerTag;
	struct FGameplayTag                           TargetModTag;
	ERollModifierOperation                        WeightModifierOperation;
	uint8                                         Pad_11[0x3];
	float                                         WeightModificationValue;
};
static_assert(alignof(FFortDynamicRollWeightModifierTableRow) == 0x000008, "Wrong alignment on FFortDynamicRollWeightModifierTableRow");
static_assert(sizeof(FFortDynamicRollWeightModifierTableRow) == 0x000018, "Wrong size on FFortDynamicRollWeightModifierTableRow");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, ActivatingPlayerTag) == 0x000008, "Member 'FFortDynamicRollWeightModifierTableRow::ActivatingPlayerTag' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, TargetModTag) == 0x00000C, "Member 'FFortDynamicRollWeightModifierTableRow::TargetModTag' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, WeightModifierOperation) == 0x000010, "Member 'FFortDynamicRollWeightModifierTableRow::WeightModifierOperation' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, WeightModificationValue) == 0x000014, "Member 'FFortDynamicRollWeightModifierTableRow::WeightModificationValue' has a wrong offset!");

struct FFortAugmentWeightModificationDataRow final : public FFortDynamicRollWeightModifierTableRow
{
};
static_assert(alignof(FFortAugmentWeightModificationDataRow) == 0x000008, "Wrong alignment on FFortAugmentWeightModificationDataRow");
static_assert(sizeof(FFortAugmentWeightModificationDataRow) == 0x000018, "Wrong size on FFortAugmentWeightModificationDataRow");

struct FFortAugmentPassiveUnlockResult final
{
public:
	class UFortPlayerAugmentItemDefinition*       UnlockedAugment;
	bool                                          bAlreadyInInventory;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FFortAugmentPassiveUnlockResult) == 0x000008, "Wrong alignment on FFortAugmentPassiveUnlockResult");
static_assert(sizeof(FFortAugmentPassiveUnlockResult) == 0x000010, "Wrong size on FFortAugmentPassiveUnlockResult");
static_assert(offsetof(FFortAugmentPassiveUnlockResult, UnlockedAugment) == 0x000000, "Member 'FFortAugmentPassiveUnlockResult::UnlockedAugment' has a wrong offset!");
static_assert(offsetof(FFortAugmentPassiveUnlockResult, bAlreadyInInventory) == 0x000008, "Member 'FFortAugmentPassiveUnlockResult::bAlreadyInInventory' has a wrong offset!");

struct FPlayerAugmentLockStatus final
{
public:
	class UFortPlayerAugmentItemDefinition*       PlayerAugmentItemDefinition;
	bool                                          bIsLocked;
	bool                                          bWasCollectedInThisMatch;
	uint8                                         Pad_A[0x6];
	class AFortPlayerStateAthena*                 SharedFromPlayer;
};
static_assert(alignof(FPlayerAugmentLockStatus) == 0x000008, "Wrong alignment on FPlayerAugmentLockStatus");
static_assert(sizeof(FPlayerAugmentLockStatus) == 0x000018, "Wrong size on FPlayerAugmentLockStatus");
static_assert(offsetof(FPlayerAugmentLockStatus, PlayerAugmentItemDefinition) == 0x000000, "Member 'FPlayerAugmentLockStatus::PlayerAugmentItemDefinition' has a wrong offset!");
static_assert(offsetof(FPlayerAugmentLockStatus, bIsLocked) == 0x000008, "Member 'FPlayerAugmentLockStatus::bIsLocked' has a wrong offset!");
static_assert(offsetof(FPlayerAugmentLockStatus, bWasCollectedInThisMatch) == 0x000009, "Member 'FPlayerAugmentLockStatus::bWasCollectedInThisMatch' has a wrong offset!");
static_assert(offsetof(FPlayerAugmentLockStatus, SharedFromPlayer) == 0x000010, "Member 'FPlayerAugmentLockStatus::SharedFromPlayer' has a wrong offset!");

struct FFortAugmentRerollCost final
{
public:
	class UFortItemDefinition*                    ResourceCurrency;
	struct FScalableFloat                         Amount;
};
static_assert(alignof(FFortAugmentRerollCost) == 0x000008, "Wrong alignment on FFortAugmentRerollCost");
static_assert(sizeof(FFortAugmentRerollCost) == 0x000030, "Wrong size on FFortAugmentRerollCost");
static_assert(offsetof(FFortAugmentRerollCost, ResourceCurrency) == 0x000000, "Member 'FFortAugmentRerollCost::ResourceCurrency' has a wrong offset!");
static_assert(offsetof(FFortAugmentRerollCost, Amount) == 0x000008, "Member 'FFortAugmentRerollCost::Amount' has a wrong offset!");

struct FPlayerAugmentChoiceDatum final
{
public:
	class UFortPlayerAugmentItemDefinition*       ItemDef;
	struct FGameplayTagContainer                  ChoiceMetaTags;
};
static_assert(alignof(FPlayerAugmentChoiceDatum) == 0x000008, "Wrong alignment on FPlayerAugmentChoiceDatum");
static_assert(sizeof(FPlayerAugmentChoiceDatum) == 0x000028, "Wrong size on FPlayerAugmentChoiceDatum");
static_assert(offsetof(FPlayerAugmentChoiceDatum, ItemDef) == 0x000000, "Member 'FPlayerAugmentChoiceDatum::ItemDef' has a wrong offset!");
static_assert(offsetof(FPlayerAugmentChoiceDatum, ChoiceMetaTags) == 0x000008, "Member 'FPlayerAugmentChoiceDatum::ChoiceMetaTags' has a wrong offset!");

struct FPlayerAugmentGameplayEffectHandlesStackEntry final
{
public:
	TArray<struct FActiveGameplayEffectHandle>    GEHandles;
};
static_assert(alignof(FPlayerAugmentGameplayEffectHandlesStackEntry) == 0x000008, "Wrong alignment on FPlayerAugmentGameplayEffectHandlesStackEntry");
static_assert(sizeof(FPlayerAugmentGameplayEffectHandlesStackEntry) == 0x000010, "Wrong size on FPlayerAugmentGameplayEffectHandlesStackEntry");
static_assert(offsetof(FPlayerAugmentGameplayEffectHandlesStackEntry, GEHandles) == 0x000000, "Member 'FPlayerAugmentGameplayEffectHandlesStackEntry::GEHandles' has a wrong offset!");

struct FPlayerAugmentTrackedData final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<struct FFortAbilitySetHandle>          AbilitySetHandles;
	TArray<struct FPlayerAugmentGameplayEffectHandlesStackEntry> GEHandlesStack;
};
static_assert(alignof(FPlayerAugmentTrackedData) == 0x000008, "Wrong alignment on FPlayerAugmentTrackedData");
static_assert(sizeof(FPlayerAugmentTrackedData) == 0x000028, "Wrong size on FPlayerAugmentTrackedData");
static_assert(offsetof(FPlayerAugmentTrackedData, AbilitySetHandles) == 0x000008, "Member 'FPlayerAugmentTrackedData::AbilitySetHandles' has a wrong offset!");
static_assert(offsetof(FPlayerAugmentTrackedData, GEHandlesStack) == 0x000018, "Member 'FPlayerAugmentTrackedData::GEHandlesStack' has a wrong offset!");

struct FCarryOverPlayerAugment final
{
public:
	struct FPrimaryAssetId                        AugmentAssetId;
	class FName                                   SourcePlaylistName;
};
static_assert(alignof(FCarryOverPlayerAugment) == 0x000004, "Wrong alignment on FCarryOverPlayerAugment");
static_assert(sizeof(FCarryOverPlayerAugment) == 0x00000C, "Wrong size on FCarryOverPlayerAugment");
static_assert(offsetof(FCarryOverPlayerAugment, AugmentAssetId) == 0x000000, "Member 'FCarryOverPlayerAugment::AugmentAssetId' has a wrong offset!");
static_assert(offsetof(FCarryOverPlayerAugment, SourcePlaylistName) == 0x000008, "Member 'FCarryOverPlayerAugment::SourcePlaylistName' has a wrong offset!");

struct FFortDynamicRollResult final
{
public:
	class UFortItemDefinition*                    Item;
};
static_assert(alignof(FFortDynamicRollResult) == 0x000008, "Wrong alignment on FFortDynamicRollResult");
static_assert(sizeof(FFortDynamicRollResult) == 0x000008, "Wrong size on FFortDynamicRollResult");
static_assert(offsetof(FFortDynamicRollResult, Item) == 0x000000, "Member 'FFortDynamicRollResult::Item' has a wrong offset!");

struct FReplicatedSharedPlayerAugment final
{
public:
	int32                                         PlayerAugmentIndex;
	TWeakObjectPtr<class AFortPlayerStateAthena>  SharedFromPlayer;
};
static_assert(alignof(FReplicatedSharedPlayerAugment) == 0x000004, "Wrong alignment on FReplicatedSharedPlayerAugment");
static_assert(sizeof(FReplicatedSharedPlayerAugment) == 0x00000C, "Wrong size on FReplicatedSharedPlayerAugment");
static_assert(offsetof(FReplicatedSharedPlayerAugment, PlayerAugmentIndex) == 0x000000, "Member 'FReplicatedSharedPlayerAugment::PlayerAugmentIndex' has a wrong offset!");
static_assert(offsetof(FReplicatedSharedPlayerAugment, SharedFromPlayer) == 0x000004, "Member 'FReplicatedSharedPlayerAugment::SharedFromPlayer' has a wrong offset!");

struct FFortDynamicRollBaseWeightTableRow : public FTableRowBase
{
public:
	class UFortItemDefinition*                    ItemDefinition;
	float                                         BaseWeight;
	uint8                                         Pad_14[0x4];
	TArray<struct FGameplayTag>                   ModTags;
	bool                                          bOwningItemZerosWeight;
	uint8                                         Pad_29[0x3];
	float                                         MaxModifiedWeight;
	float                                         MinModifiedWeight;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FFortDynamicRollBaseWeightTableRow) == 0x000008, "Wrong alignment on FFortDynamicRollBaseWeightTableRow");
static_assert(sizeof(FFortDynamicRollBaseWeightTableRow) == 0x000038, "Wrong size on FFortDynamicRollBaseWeightTableRow");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, ItemDefinition) == 0x000008, "Member 'FFortDynamicRollBaseWeightTableRow::ItemDefinition' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, BaseWeight) == 0x000010, "Member 'FFortDynamicRollBaseWeightTableRow::BaseWeight' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, ModTags) == 0x000018, "Member 'FFortDynamicRollBaseWeightTableRow::ModTags' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, bOwningItemZerosWeight) == 0x000028, "Member 'FFortDynamicRollBaseWeightTableRow::bOwningItemZerosWeight' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, MaxModifiedWeight) == 0x00002C, "Member 'FFortDynamicRollBaseWeightTableRow::MaxModifiedWeight' has a wrong offset!");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, MinModifiedWeight) == 0x000030, "Member 'FFortDynamicRollBaseWeightTableRow::MinModifiedWeight' has a wrong offset!");

struct FFortAugmentBaseWeightTableRow final : public FFortDynamicRollBaseWeightTableRow
{
};
static_assert(alignof(FFortAugmentBaseWeightTableRow) == 0x000008, "Wrong alignment on FFortAugmentBaseWeightTableRow");
static_assert(sizeof(FFortAugmentBaseWeightTableRow) == 0x000038, "Wrong size on FFortAugmentBaseWeightTableRow");

struct alignas(0x08) FDynamicRollModifiersActivatedByPlayerTagContainer final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FDynamicRollModifiersActivatedByPlayerTagContainer) == 0x000008, "Wrong alignment on FDynamicRollModifiersActivatedByPlayerTagContainer");
static_assert(sizeof(FDynamicRollModifiersActivatedByPlayerTagContainer) == 0x000010, "Wrong size on FDynamicRollModifiersActivatedByPlayerTagContainer");

struct FFortMcpCollectedPlayerAugmentProperties final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FFortMcpCollectedPlayerAugmentProperties) == 0x000001, "Wrong alignment on FFortMcpCollectedPlayerAugmentProperties");
static_assert(sizeof(FFortMcpCollectedPlayerAugmentProperties) == 0x000001, "Wrong size on FFortMcpCollectedPlayerAugmentProperties");

}
