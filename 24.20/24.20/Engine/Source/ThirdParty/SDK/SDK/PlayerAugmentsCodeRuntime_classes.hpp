#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "AIModule_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "DataRegistry_structs.hpp"
#include "PlayerAugmentsCodeRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UFortAthenaAIBotEvaluator_Augments final : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTag                           InjectionTag;
	uint8                                         Pad_94[0x4];
	class UBehaviorTree*                          BehaviorAsset;
	class FName                                   AugmentStatusKeyName;
	class FName                                   AugmentItemKeyName;
	uint8                                         Pad_A8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Augments">();
	}
	static class UFortAthenaAIBotEvaluator_Augments* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Augments>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Augments) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Augments");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Augments) == 0x0000B0, "Wrong size on UFortAthenaAIBotEvaluator_Augments");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Augments, InjectionTag) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Augments::InjectionTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Augments, BehaviorAsset) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_Augments::BehaviorAsset' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Augments, AugmentStatusKeyName) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_Augments::AugmentStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Augments, AugmentItemKeyName) == 0x0000A4, "Member 'UFortAthenaAIBotEvaluator_Augments::AugmentItemKeyName' has a wrong offset!");

class UFortAthenaBTTask_Augments final : public UBTTaskNode
{
public:
	float                                         MinSelectionTime;
	float                                         MaxSelectionTime;
	class FName                                   AugmentStatusKeyName;
	class FName                                   AugmentItemKeyName;
	uint8                                         Pad_80[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Augments">();
	}
	static class UFortAthenaBTTask_Augments* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Augments>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Augments) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Augments");
static_assert(sizeof(UFortAthenaBTTask_Augments) == 0x000088, "Wrong size on UFortAthenaBTTask_Augments");
static_assert(offsetof(UFortAthenaBTTask_Augments, MinSelectionTime) == 0x000070, "Member 'UFortAthenaBTTask_Augments::MinSelectionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Augments, MaxSelectionTime) == 0x000074, "Member 'UFortAthenaBTTask_Augments::MaxSelectionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Augments, AugmentStatusKeyName) == 0x000078, "Member 'UFortAthenaBTTask_Augments::AugmentStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Augments, AugmentItemKeyName) == 0x00007C, "Member 'UFortAthenaBTTask_Augments::AugmentItemKeyName' has a wrong offset!");

class UFortAugmentSelectionToolAbility final : public UFortGameplayAbility
{
public:
	class UInputComponent*                        SelectionInputComponent;
	struct FScalableFloat                         InputPriority;
	int32                                         NumChoices;
	int32                                         HighlightedChoiceIndex;
	uint8                                         Pad_B60[0x10];
	struct FScalableFloat                         RerollHoldInputSeconds;
	uint8                                         Pad_B98[0x8];

public:
	void OnHighlightSelectionUpdated(int32 NewHighlightedChoiceIndex);
	void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold);
	void OnRerollPressedAndCannotAfford();
	void OnSelectedChoiceIndex(int32 ChoiceIndex);
	void SetHighlightedChoiceIndex(int32 NewChoiceIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAugmentSelectionToolAbility">();
	}
	static class UFortAugmentSelectionToolAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAugmentSelectionToolAbility>();
	}
};
static_assert(alignof(UFortAugmentSelectionToolAbility) == 0x000008, "Wrong alignment on UFortAugmentSelectionToolAbility");
static_assert(sizeof(UFortAugmentSelectionToolAbility) == 0x000BA0, "Wrong size on UFortAugmentSelectionToolAbility");
static_assert(offsetof(UFortAugmentSelectionToolAbility, SelectionInputComponent) == 0x000B28, "Member 'UFortAugmentSelectionToolAbility::SelectionInputComponent' has a wrong offset!");
static_assert(offsetof(UFortAugmentSelectionToolAbility, InputPriority) == 0x000B30, "Member 'UFortAugmentSelectionToolAbility::InputPriority' has a wrong offset!");
static_assert(offsetof(UFortAugmentSelectionToolAbility, NumChoices) == 0x000B58, "Member 'UFortAugmentSelectionToolAbility::NumChoices' has a wrong offset!");
static_assert(offsetof(UFortAugmentSelectionToolAbility, HighlightedChoiceIndex) == 0x000B5C, "Member 'UFortAugmentSelectionToolAbility::HighlightedChoiceIndex' has a wrong offset!");
static_assert(offsetof(UFortAugmentSelectionToolAbility, RerollHoldInputSeconds) == 0x000B70, "Member 'UFortAugmentSelectionToolAbility::RerollHoldInputSeconds' has a wrong offset!");

class UFortBattleRoyalePlayerAugmentSystem final : public UFortControllerComponent
{
public:
	float                                         ServerGrantingStartedTimestamp;
	uint8                                         Pad_AC[0x4];
	TMulticastInlineDelegate<void()>              OnMatchAugmentsResetEvent;
	bool                                          bEnableAugmentCollectionUnlocking;
	uint8                                         Pad_C1[0xF];
	struct FScalableFloat                         NumRollsForUnlock;
	struct FScalableFloat                         EnableUnlocking;
	struct FScalableFloat                         EnableBRAugmentSystem;

public:
	void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp);
	void BlueprintAugmentLog(const class FString& message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly);
	void BP_GetAugmentController(EFortBRAugmentSystemCastResult* OutExec, class AController** OutController);
	void BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult* OutExec, class AFortPlayerPawn** OutFortPlayerPawn);
	struct FFortAugmentPassiveUnlockResult ChooseUnlockFromList(const TArray<struct FPlayerAugmentLockStatus>& LockedList);
	void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void OnMatchAugmentsReset();
	void OnPossedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void OnRep_ServerGrantingStartedTimestamp();
	void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp);
	void ResetMatchAugments();
	struct FFortAugmentPassiveUnlockResult TryClaimUnlock();
	void TryIncrementUnlockRollCount();

	float GetServerGrantingStartedTimestamp() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattleRoyalePlayerAugmentSystem">();
	}
	static class UFortBattleRoyalePlayerAugmentSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattleRoyalePlayerAugmentSystem>();
	}
};
static_assert(alignof(UFortBattleRoyalePlayerAugmentSystem) == 0x000008, "Wrong alignment on UFortBattleRoyalePlayerAugmentSystem");
static_assert(sizeof(UFortBattleRoyalePlayerAugmentSystem) == 0x000148, "Wrong size on UFortBattleRoyalePlayerAugmentSystem");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, ServerGrantingStartedTimestamp) == 0x0000A8, "Member 'UFortBattleRoyalePlayerAugmentSystem::ServerGrantingStartedTimestamp' has a wrong offset!");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, OnMatchAugmentsResetEvent) == 0x0000B0, "Member 'UFortBattleRoyalePlayerAugmentSystem::OnMatchAugmentsResetEvent' has a wrong offset!");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, bEnableAugmentCollectionUnlocking) == 0x0000C0, "Member 'UFortBattleRoyalePlayerAugmentSystem::bEnableAugmentCollectionUnlocking' has a wrong offset!");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, NumRollsForUnlock) == 0x0000D0, "Member 'UFortBattleRoyalePlayerAugmentSystem::NumRollsForUnlock' has a wrong offset!");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, EnableUnlocking) == 0x0000F8, "Member 'UFortBattleRoyalePlayerAugmentSystem::EnableUnlocking' has a wrong offset!");
static_assert(offsetof(UFortBattleRoyalePlayerAugmentSystem, EnableBRAugmentSystem) == 0x000120, "Member 'UFortBattleRoyalePlayerAugmentSystem::EnableBRAugmentSystem' has a wrong offset!");

class UFortCollectionDataEntryPlayerAugment final : public UFortCollectionDataEntry
{
public:
	class UFortPlayerAugmentItemDefinition*       PlayerAugmentItemDefinition;
	class FText                                   AdditionalDescription;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionDataEntryPlayerAugment">();
	}
	static class UFortCollectionDataEntryPlayerAugment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionDataEntryPlayerAugment>();
	}
};
static_assert(alignof(UFortCollectionDataEntryPlayerAugment) == 0x000008, "Wrong alignment on UFortCollectionDataEntryPlayerAugment");
static_assert(sizeof(UFortCollectionDataEntryPlayerAugment) == 0x000050, "Wrong size on UFortCollectionDataEntryPlayerAugment");
static_assert(offsetof(UFortCollectionDataEntryPlayerAugment, PlayerAugmentItemDefinition) == 0x000030, "Member 'UFortCollectionDataEntryPlayerAugment::PlayerAugmentItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortCollectionDataEntryPlayerAugment, AdditionalDescription) == 0x000038, "Member 'UFortCollectionDataEntryPlayerAugment::AdditionalDescription' has a wrong offset!");

class UFortCollectionDataPlayerAugment final : public UFortCollectionData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionDataPlayerAugment">();
	}
	static class UFortCollectionDataPlayerAugment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionDataPlayerAugment>();
	}
};
static_assert(alignof(UFortCollectionDataPlayerAugment) == 0x000008, "Wrong alignment on UFortCollectionDataPlayerAugment");
static_assert(sizeof(UFortCollectionDataPlayerAugment) == 0x000090, "Wrong size on UFortCollectionDataPlayerAugment");

class UFortContextualTutorial_MultipleAugmentsQueued final : public UFortContextualTutorial
{
public:
	void ActivationEventCallback(int8 NumPendingAugmentsToGrant);
	void CompletionEventCallback(const bool bIsOpened, const bool bViewingAugmentInventory);
	void HandleBindActivationTrigger(class AFortPlayerControllerZone* FortPCZone);
	void HandleBindCompletionTrigger(class AFortPlayerControllerZone* FortPCZone);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortContextualTutorial_MultipleAugmentsQueued">();
	}
	static class UFortContextualTutorial_MultipleAugmentsQueued* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortContextualTutorial_MultipleAugmentsQueued>();
	}
};
static_assert(alignof(UFortContextualTutorial_MultipleAugmentsQueued) == 0x000008, "Wrong alignment on UFortContextualTutorial_MultipleAugmentsQueued");
static_assert(sizeof(UFortContextualTutorial_MultipleAugmentsQueued) == 0x0000F8, "Wrong size on UFortContextualTutorial_MultipleAugmentsQueued");

class UFortControllerComponent_AugmentGrantingSystem final : public UFortControllerComponent
{
public:
	TMulticastInlineDelegate<void(bool bCanSelectAugment)> OnCanSelectAugmentChanged;
	TMulticastInlineDelegate<void(class UFortPlayerAugmentItemDefinition* SelectedAugment)> OnSelectedAugmentForGrant;
	TMulticastInlineDelegate<void(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent)> OnAvailableAugmentsForGrantingUpdated;
	TMulticastInlineDelegate<void(TArray<class UFortPlayerAugmentItemDefinition*>& IgnoreInRoll)> OnAuthorityRequestAugmentChoices;
	TMulticastInlineDelegate<void()>              OnLocalReroll;
	uint8                                         Pad_F8[0x20];
	TMulticastInlineDelegate<void(int8 NumPendingAugmentsToGrant)> OnReplicateNumPendingAugmentsToGrant;
	class UFortWeaponItemDefinition*              AugmentSelectionModeItem;
	class UFortWorldItem*                         SelectionModeWorldItem;
	struct FScalableFloat                         Enabled;
	int8                                          ReplicatedNumPendingAugmentsToGrant;
	uint8                                         Pad_161[0x7];
	TArray<struct FPlayerAugmentChoiceDatum>      ReplicatedAugmentChoices;
	int8                                          NumFreeRerolls;
	int8                                          NumLockedSelectionChoices;
	uint8                                         Pad_17A[0x6];
	class UInputComponent*                        PrimaryInputComponentWeaponMode;
	class UInputComponent*                        PrimaryInputComponentBuildMode;
	class UInputComponent*                        TemporaryInputComponent;
	struct FScalableFloat                         AugmentSelectInputPriority;
	struct FGameplayTagContainer                  SelectionBlockedPlayerTags;
	struct FGameplayTagContainer                  AugmentSelectInputDisablePlayerTags;
	uint8                                         Pad_200[0x28];
	TArray<struct FFortAugmentRerollCost>         RerollCosts;
	struct FFortItemEntry                         SelectorItemEntry;
	struct FFortItemEntry                         LocalCachedPreviousWeapon;
	uint8                                         Pad_578[0x38];

public:
	static class UFortControllerComponent_AugmentGrantingSystem* GetAugmentGrantingComponentFromController(const class AController* Controller);

	void AuthorityGrantFreeReroll();
	void AuthorityGrantNewAugment();
	void AuthorityIncrementLockedSelectionChoices(const int32 NumLocksToAdd);
	void AuthorityRequestSelectionToolItemGrant(class UObject* Instigator);
	void AuthorityResetAugmentData();
	void AuthoritySetAvailableAugmentChoices(const TArray<struct FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant);
	void ClientSelectAvailableAugmentToGrant(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);
	void HandleChangedBuildMode(bool bEnteredBuildMode);
	void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
	void HandleHolsteredEvent();
	void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void HandleToggleFullscreenMap(bool bVisible);
	void HandleUnHolsteredEvent();
	void OnLocalEquipAugmentSelectionPressed();
	void OnLocalUnequipAugmentSelectionPressed();
	void OnRep_NumFreeRerolls();
	void OnRep_NumLockedSelectionChoices();
	void OnRep_ReplicatedAugmentChoices();
	void OnRep_ReplicatedNumPendingAugmentsToGrant();
	void OnRep_SelectorItemEntry();
	void ServerGrantAugment(class UFortPlayerAugmentItemDefinition* ChosenAugmentDef);
	void ServerRequestReroll();

	bool CanReroll() const;
	TArray<struct FPlayerAugmentChoiceDatum> GetAvailableAugmentsToGrant() const;
	int32 GetNumFreeRerolls() const;
	int32 GetPendingAugmentsToGrant() const;
	bool IsSelectionChoicesLocked() const;
	bool IsSelectionItemEquipped() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_AugmentGrantingSystem">();
	}
	static class UFortControllerComponent_AugmentGrantingSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_AugmentGrantingSystem>();
	}
};
static_assert(alignof(UFortControllerComponent_AugmentGrantingSystem) == 0x000008, "Wrong alignment on UFortControllerComponent_AugmentGrantingSystem");
static_assert(sizeof(UFortControllerComponent_AugmentGrantingSystem) == 0x0005B0, "Wrong size on UFortControllerComponent_AugmentGrantingSystem");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnCanSelectAugmentChanged) == 0x0000A8, "Member 'UFortControllerComponent_AugmentGrantingSystem::OnCanSelectAugmentChanged' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnSelectedAugmentForGrant) == 0x0000B8, "Member 'UFortControllerComponent_AugmentGrantingSystem::OnSelectedAugmentForGrant' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnAvailableAugmentsForGrantingUpdated) == 0x0000C8, "Member 'UFortControllerComponent_AugmentGrantingSystem::OnAvailableAugmentsForGrantingUpdated' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnAuthorityRequestAugmentChoices) == 0x0000D8, "Member 'UFortControllerComponent_AugmentGrantingSystem::OnAuthorityRequestAugmentChoices' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnLocalReroll) == 0x0000E8, "Member 'UFortControllerComponent_AugmentGrantingSystem::OnLocalReroll' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, OnReplicateNumPendingAugmentsToGrant) == 0x000118, "Member 'UFortControllerComponent_AugmentGrantingSystem::OnReplicateNumPendingAugmentsToGrant' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AugmentSelectionModeItem) == 0x000128, "Member 'UFortControllerComponent_AugmentGrantingSystem::AugmentSelectionModeItem' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, SelectionModeWorldItem) == 0x000130, "Member 'UFortControllerComponent_AugmentGrantingSystem::SelectionModeWorldItem' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, Enabled) == 0x000138, "Member 'UFortControllerComponent_AugmentGrantingSystem::Enabled' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, ReplicatedNumPendingAugmentsToGrant) == 0x000160, "Member 'UFortControllerComponent_AugmentGrantingSystem::ReplicatedNumPendingAugmentsToGrant' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, ReplicatedAugmentChoices) == 0x000168, "Member 'UFortControllerComponent_AugmentGrantingSystem::ReplicatedAugmentChoices' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, NumFreeRerolls) == 0x000178, "Member 'UFortControllerComponent_AugmentGrantingSystem::NumFreeRerolls' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, NumLockedSelectionChoices) == 0x000179, "Member 'UFortControllerComponent_AugmentGrantingSystem::NumLockedSelectionChoices' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, PrimaryInputComponentWeaponMode) == 0x000180, "Member 'UFortControllerComponent_AugmentGrantingSystem::PrimaryInputComponentWeaponMode' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, PrimaryInputComponentBuildMode) == 0x000188, "Member 'UFortControllerComponent_AugmentGrantingSystem::PrimaryInputComponentBuildMode' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, TemporaryInputComponent) == 0x000190, "Member 'UFortControllerComponent_AugmentGrantingSystem::TemporaryInputComponent' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AugmentSelectInputPriority) == 0x000198, "Member 'UFortControllerComponent_AugmentGrantingSystem::AugmentSelectInputPriority' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, SelectionBlockedPlayerTags) == 0x0001C0, "Member 'UFortControllerComponent_AugmentGrantingSystem::SelectionBlockedPlayerTags' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, AugmentSelectInputDisablePlayerTags) == 0x0001E0, "Member 'UFortControllerComponent_AugmentGrantingSystem::AugmentSelectInputDisablePlayerTags' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, RerollCosts) == 0x000228, "Member 'UFortControllerComponent_AugmentGrantingSystem::RerollCosts' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, SelectorItemEntry) == 0x000238, "Member 'UFortControllerComponent_AugmentGrantingSystem::SelectorItemEntry' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentGrantingSystem, LocalCachedPreviousWeapon) == 0x0003D8, "Member 'UFortControllerComponent_AugmentGrantingSystem::LocalCachedPreviousWeapon' has a wrong offset!");

class UFortControllerComponent_AugmentUIEvents final : public UFortControllerComponent
{
public:
	uint8                                         Pad_A8[0x20];
	TMulticastInlineDelegate<void(int32 ChoiceIndex)> OnAugmentSelectorHighlightedChoice;
	TMulticastInlineDelegate<void(int32 ChoiceIndex)> OnAugmentStartedSelectionOfChoice;
	TMulticastInlineDelegate<void()>              OnAugmentGrantingTimersFinishedForMatch;
	TMulticastInlineDelegate<void()>              OnAugmentGrantingTimersResetForMatch;
	TMulticastInlineDelegate<void(EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds)> AugmentHoldInputRerollChanged;
	TMulticastInlineDelegate<void(bool ViewingInventoryAugments)> OnAugmentToolViewSwap;
	uint8                                         Pad_128[0x18];
	int32                                         NumAugmentGrantRoundsForPlaylist;
	uint8                                         Pad_144[0xC];

public:
	void HandleAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingInventory);
	void NotifyGrantingTimersFinished();
	void NotifyGrantingTimersReset();
	void SetNumGrantableAugmentsForPlaylist(const int32 NewNumRounds);
	void UpdatedTimerProgress(float TimeRemaining, float TimePercentage);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_AugmentUIEvents">();
	}
	static class UFortControllerComponent_AugmentUIEvents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_AugmentUIEvents>();
	}
};
static_assert(alignof(UFortControllerComponent_AugmentUIEvents) == 0x000008, "Wrong alignment on UFortControllerComponent_AugmentUIEvents");
static_assert(sizeof(UFortControllerComponent_AugmentUIEvents) == 0x000150, "Wrong size on UFortControllerComponent_AugmentUIEvents");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentSelectorHighlightedChoice) == 0x0000C8, "Member 'UFortControllerComponent_AugmentUIEvents::OnAugmentSelectorHighlightedChoice' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentStartedSelectionOfChoice) == 0x0000D8, "Member 'UFortControllerComponent_AugmentUIEvents::OnAugmentStartedSelectionOfChoice' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentGrantingTimersFinishedForMatch) == 0x0000E8, "Member 'UFortControllerComponent_AugmentUIEvents::OnAugmentGrantingTimersFinishedForMatch' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentGrantingTimersResetForMatch) == 0x0000F8, "Member 'UFortControllerComponent_AugmentUIEvents::OnAugmentGrantingTimersResetForMatch' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, AugmentHoldInputRerollChanged) == 0x000108, "Member 'UFortControllerComponent_AugmentUIEvents::AugmentHoldInputRerollChanged' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, OnAugmentToolViewSwap) == 0x000118, "Member 'UFortControllerComponent_AugmentUIEvents::OnAugmentToolViewSwap' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_AugmentUIEvents, NumAugmentGrantRoundsForPlaylist) == 0x000140, "Member 'UFortControllerComponent_AugmentUIEvents::NumAugmentGrantRoundsForPlaylist' has a wrong offset!");

class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent
{
public:
	TSubclassOf<class UFortGamestateComponent_DynamicRollTableManager> AssociatedManagerClass;
	struct FScalableFloat                         Enabled;
	class UFortGamestateComponent_DynamicRollTableManager* TableManager;
	uint8                                         Pad_E0[0x64];
	struct FRandomStream                          SeededRNG;
	uint8                                         Pad_14C[0x54];

public:
	TArray<struct FFortDynamicRollResult> AuthorityRollChoices(const int32 NumChoices, const TArray<class UFortItemDefinition*>& IgnoreItems);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_DynamicRollPlayerComponent">();
	}
	static class UFortControllerComponent_DynamicRollPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_DynamicRollPlayerComponent>();
	}
};
static_assert(alignof(UFortControllerComponent_DynamicRollPlayerComponent) == 0x000008, "Wrong alignment on UFortControllerComponent_DynamicRollPlayerComponent");
static_assert(sizeof(UFortControllerComponent_DynamicRollPlayerComponent) == 0x0001A0, "Wrong size on UFortControllerComponent_DynamicRollPlayerComponent");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, AssociatedManagerClass) == 0x0000A8, "Member 'UFortControllerComponent_DynamicRollPlayerComponent::AssociatedManagerClass' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, Enabled) == 0x0000B0, "Member 'UFortControllerComponent_DynamicRollPlayerComponent::Enabled' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, TableManager) == 0x0000D8, "Member 'UFortControllerComponent_DynamicRollPlayerComponent::TableManager' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, SeededRNG) == 0x000144, "Member 'UFortControllerComponent_DynamicRollPlayerComponent::SeededRNG' has a wrong offset!");

class UFortControllerComponent_PlayerAugmentPersistence final : public UFortControllerComponent
{
public:
	struct FScalableFloat                         Enabled;
	struct FScalableFloat                         LockMissingCollectionAugmentsEnabled;
	class AFortPlayerControllerAthena*            PlayerController;
	class UFortCollectionDataPlayerAugment*       CollectionData;
	struct FPlayerAugmentsPersistenceData         LivePlayerAugmentsPersistenceData;
	TSet<class UFortPlayerAugmentItemDefinition*> AugmentsCollectedThisMatch;
	TArray<struct FReplicatedSharedPlayerAugment> ReplicatedSharedPlayerAugments;
	uint8                                         Pad_180[0x20];

public:
	void AuthoritySetCarryOverPlayerAugments(const TArray<struct FCarryOverPlayerAugment>& NewCarryOverPlayerAugments);
	void AuthoritySetRollCountSinceLastRandomUnlock(int32 NewRollCount);
	void AuthorityUnlockPlayerAugment(class UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock);
	void HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase);
	void HandleCollectionDataLoaded(TSoftObjectPtr<class UFortCollectionData> BaseCollectionDataSoftPtr);
	void HandleCollectionDataTableLoaded(TSoftObjectPtr<class UFortCollectionsDataTable> CollectionsDataTableSoftPtr);
	void HandleMcpProfilesInitialized();

	void GetCarryOverPlayerAugments(TArray<struct FCarryOverPlayerAugment>* OutCarryOverPlayerAugments) const;
	void GetLockedList(TArray<struct FPlayerAugmentLockStatus>* OutLockedList, bool bIncludeSharedAugments) const;
	struct FPlayerAugmentLockStatus GetLockStatus(class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition) const;
	void GetLockStatusForAll(TArray<struct FPlayerAugmentLockStatus>* OutLockStatusArray) const;
	int32 GetRollCountSinceLastRandomUnlock() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_PlayerAugmentPersistence">();
	}
	static class UFortControllerComponent_PlayerAugmentPersistence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_PlayerAugmentPersistence>();
	}
};
static_assert(alignof(UFortControllerComponent_PlayerAugmentPersistence) == 0x000008, "Wrong alignment on UFortControllerComponent_PlayerAugmentPersistence");
static_assert(sizeof(UFortControllerComponent_PlayerAugmentPersistence) == 0x0001A0, "Wrong size on UFortControllerComponent_PlayerAugmentPersistence");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, Enabled) == 0x0000A8, "Member 'UFortControllerComponent_PlayerAugmentPersistence::Enabled' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, LockMissingCollectionAugmentsEnabled) == 0x0000D0, "Member 'UFortControllerComponent_PlayerAugmentPersistence::LockMissingCollectionAugmentsEnabled' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, PlayerController) == 0x0000F8, "Member 'UFortControllerComponent_PlayerAugmentPersistence::PlayerController' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, CollectionData) == 0x000100, "Member 'UFortControllerComponent_PlayerAugmentPersistence::CollectionData' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, LivePlayerAugmentsPersistenceData) == 0x000108, "Member 'UFortControllerComponent_PlayerAugmentPersistence::LivePlayerAugmentsPersistenceData' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, AugmentsCollectedThisMatch) == 0x000120, "Member 'UFortControllerComponent_PlayerAugmentPersistence::AugmentsCollectedThisMatch' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_PlayerAugmentPersistence, ReplicatedSharedPlayerAugments) == 0x000170, "Member 'UFortControllerComponent_PlayerAugmentPersistence::ReplicatedSharedPlayerAugments' has a wrong offset!");

class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent
{
public:
	uint8                                         Pad_A0[0x30];
	struct FDataRegistryType                      DataRegistryType_BaseWeights;
	struct FDataRegistryType                      DataRegistryType_WeightModifiers;
	struct FScalableFloat                         Enabled;
	uint8                                         Pad_100[0x1D8];

public:
	void HandlePlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGamestateComponent_DynamicRollTableManager">();
	}
	static class UFortGamestateComponent_DynamicRollTableManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGamestateComponent_DynamicRollTableManager>();
	}
};
static_assert(alignof(UFortGamestateComponent_DynamicRollTableManager) == 0x000008, "Wrong alignment on UFortGamestateComponent_DynamicRollTableManager");
static_assert(sizeof(UFortGamestateComponent_DynamicRollTableManager) == 0x0002D8, "Wrong size on UFortGamestateComponent_DynamicRollTableManager");
static_assert(offsetof(UFortGamestateComponent_DynamicRollTableManager, DataRegistryType_BaseWeights) == 0x0000D0, "Member 'UFortGamestateComponent_DynamicRollTableManager::DataRegistryType_BaseWeights' has a wrong offset!");
static_assert(offsetof(UFortGamestateComponent_DynamicRollTableManager, DataRegistryType_WeightModifiers) == 0x0000D4, "Member 'UFortGamestateComponent_DynamicRollTableManager::DataRegistryType_WeightModifiers' has a wrong offset!");
static_assert(offsetof(UFortGamestateComponent_DynamicRollTableManager, Enabled) == 0x0000D8, "Member 'UFortGamestateComponent_DynamicRollTableManager::Enabled' has a wrong offset!");

class UFortGamestateComponent_AugmentTableManager final : public UFortGamestateComponent_DynamicRollTableManager
{
public:
	uint8                                         Pad_2D8[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGamestateComponent_AugmentTableManager">();
	}
	static class UFortGamestateComponent_AugmentTableManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGamestateComponent_AugmentTableManager>();
	}
};
static_assert(alignof(UFortGamestateComponent_AugmentTableManager) == 0x000008, "Wrong alignment on UFortGamestateComponent_AugmentTableManager");
static_assert(sizeof(UFortGamestateComponent_AugmentTableManager) == 0x000328, "Wrong size on UFortGamestateComponent_AugmentTableManager");

class UFortControllerComponent_AugmentDynamicRollPlayerComponent final : public UFortControllerComponent_DynamicRollPlayerComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_AugmentDynamicRollPlayerComponent">();
	}
	static class UFortControllerComponent_AugmentDynamicRollPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_AugmentDynamicRollPlayerComponent>();
	}
};
static_assert(alignof(UFortControllerComponent_AugmentDynamicRollPlayerComponent) == 0x000008, "Wrong alignment on UFortControllerComponent_AugmentDynamicRollPlayerComponent");
static_assert(sizeof(UFortControllerComponent_AugmentDynamicRollPlayerComponent) == 0x0001A0, "Wrong size on UFortControllerComponent_AugmentDynamicRollPlayerComponent");

class UFortMcpCollectionPlayerAugment final : public UFortMcpCollectionBase
{
public:
	uint8                                         Pad_98[0x10];

public:
	static void AddToPlayerCollection(const class AFortPlayerController* PlayerController, const struct FGameplayTag& PlayerAugmentVariantTag);
	static void MarkSeenForPlayer(class AFortPlayerController* PlayerController, const struct FGameplayTag& VariantTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMcpCollectionPlayerAugment">();
	}
	static class UFortMcpCollectionPlayerAugment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMcpCollectionPlayerAugment>();
	}
};
static_assert(alignof(UFortMcpCollectionPlayerAugment) == 0x000008, "Wrong alignment on UFortMcpCollectionPlayerAugment");
static_assert(sizeof(UFortMcpCollectionPlayerAugment) == 0x0000A8, "Wrong size on UFortMcpCollectionPlayerAugment");

class UFortPlayerAugmentCheatManager final : public UChildCheatManager
{
public:
	void ForceSelectionAugments(const class FString& AugmentNameFirst, const class FString& AugmentNameSecond);
	void GiveAugment(const class FString& AugmentName);
	void GiveAugmentToBots(const class FString& AugmentName);
	void LogPlayerAugmentsLockStatus();
	void RemoveAllAugments();
	void RemoveAllAugmentsFromBots();
	void ResetAugmentGrantingToSeed(const int32 Seed);
	void ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport);
	void SetPlayerAugmentRollCountSinceLastUnlock(const int32 RollCount);
	void StartAugmentGrantingFlow();

	void CollectAllPlayerAugments() const;
	void CollectPlayerAugment(const class FString& TagMatch) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentCheatManager">();
	}
	static class UFortPlayerAugmentCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentCheatManager>();
	}
};
static_assert(alignof(UFortPlayerAugmentCheatManager) == 0x000008, "Wrong alignment on UFortPlayerAugmentCheatManager");
static_assert(sizeof(UFortPlayerAugmentCheatManager) == 0x000028, "Wrong size on UFortPlayerAugmentCheatManager");

class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{
public:
	uint8                                         Pad_A0[0x18];
	TMulticastInlineDelegate<void(class UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent)> OnAugmentListUpdated;
	struct FScalableFloat                         EnableAugmentsFeature;
	TSubclassOf<class UGameplayEffect>            DynamicTagGEClass;
	TMap<struct FPrimaryAssetId, struct FPlayerAugmentTrackedData> AugmentToRuntimeDataMap;
	TArray<class UFortPlayerAugmentItemDefinition*> ActiveAugments;
	TMap<struct FGameplayTag, double>             RuntimeAugmentMatchDataCacheFloat;

public:
	static TArray<class UFortPlayerAugmentItemDefinition*> GetActiveAugments(class AActor* Actor);
	static class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponent(const class AActor* PlayerContextActor);
	static class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponentValidated(EAugmentExecResult* OutExec, const class AActor* PlayerContextActor);

	void ClientClearMatchAugmentDataCache();
	double GetAugmentMatchDataCacheFloat(EAugmentExecResult* OutExec, const struct FGameplayTag& TargetAugmentCacheTag);
	void HandleBotPlayerPawnSpawned(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn);
	void HandlePlayerPawnSpawned();
	void OnRep_ActiveAugments();
	void SetAugmentMatchDataCacheFloat(const struct FGameplayTag& TargetAugmentCacheTag, double InData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerStateComponent_PlayerAugmentSystem">();
	}
	static class UFortPlayerStateComponent_PlayerAugmentSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerStateComponent_PlayerAugmentSystem>();
	}
};
static_assert(alignof(UFortPlayerStateComponent_PlayerAugmentSystem) == 0x000008, "Wrong alignment on UFortPlayerStateComponent_PlayerAugmentSystem");
static_assert(sizeof(UFortPlayerStateComponent_PlayerAugmentSystem) == 0x0001A8, "Wrong size on UFortPlayerStateComponent_PlayerAugmentSystem");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, OnAugmentListUpdated) == 0x0000B8, "Member 'UFortPlayerStateComponent_PlayerAugmentSystem::OnAugmentListUpdated' has a wrong offset!");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, EnableAugmentsFeature) == 0x0000C8, "Member 'UFortPlayerStateComponent_PlayerAugmentSystem::EnableAugmentsFeature' has a wrong offset!");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, DynamicTagGEClass) == 0x0000F0, "Member 'UFortPlayerStateComponent_PlayerAugmentSystem::DynamicTagGEClass' has a wrong offset!");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, AugmentToRuntimeDataMap) == 0x0000F8, "Member 'UFortPlayerStateComponent_PlayerAugmentSystem::AugmentToRuntimeDataMap' has a wrong offset!");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, ActiveAugments) == 0x000148, "Member 'UFortPlayerStateComponent_PlayerAugmentSystem::ActiveAugments' has a wrong offset!");
static_assert(offsetof(UFortPlayerStateComponent_PlayerAugmentSystem, RuntimeAugmentMatchDataCacheFloat) == 0x000158, "Member 'UFortPlayerStateComponent_PlayerAugmentSystem::RuntimeAugmentMatchDataCacheFloat' has a wrong offset!");

}
