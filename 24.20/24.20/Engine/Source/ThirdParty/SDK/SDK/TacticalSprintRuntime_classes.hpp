#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "TacticalSprintRuntime_structs.hpp"

namespace SDK
{

class UFortPlayerControllerComponent_TacticalSprint final : public UControllerComponent
{
public:
	uint8                                         Pad_A0[0x18];
	class AFortPlayerPawn*                        CurrentBoundPlayerPawn;
	uint8                                         bTacticalSprintEnabled : 1;
	uint8                                         bWantsToTacticalSprint : 1;
	uint8                                         bHandlingMoveForward : 1;
	uint8                                         bIsSprinting : 1;
	uint8                                         bWasInBuildMode : 1;
	uint8                                         bFireAnalyticsEventOnEndPlay : 1;
	uint8                                         Pad_C1[0x3];
	struct FGameplayTag                           TacticalSprintAbilityGameplayTag;
	struct FGameplayTag                           DisableTacticalSprintAbilityGameplayTag;
	uint8                                         Pad_CC[0x4];
	struct FScalableFloat                         TacticalSprintEnabled;
	struct FScalableFloat                         TacticalSprintToggleGracePeriod;
	TMulticastInlineDelegate<void()>              OnTacticalSprintStarted;
	TMulticastInlineDelegate<void()>              OnTacticalSprintEnded;
	TMulticastInlineDelegate<void()>              OnFailedToSprint;
	struct FTimerHandle                           StopWantingToSprintTimerReceipt;
	uint8                                         Pad_158[0x50];
	class UInputComponent*                        InputComponent;
	uint8                                         Pad_1B0[0x8];

public:
	void LogAndVisualLog(class UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, const class FString& LogString);
	void OnAutoRunChanged(bool bAutoRunIsOn);
	void OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnMutatorUpdated();
	void OnPawnChanged(class AFortPawn* InPawn);
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PreviousWeapon);
	void RegisterMutatorUpdatedDelegate();
	void SetIsSprinting(bool bNewIsSprinting);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerControllerComponent_TacticalSprint">();
	}
	static class UFortPlayerControllerComponent_TacticalSprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerControllerComponent_TacticalSprint>();
	}
};
static_assert(alignof(UFortPlayerControllerComponent_TacticalSprint) == 0x000008, "Wrong alignment on UFortPlayerControllerComponent_TacticalSprint");
static_assert(sizeof(UFortPlayerControllerComponent_TacticalSprint) == 0x0001B8, "Wrong size on UFortPlayerControllerComponent_TacticalSprint");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, CurrentBoundPlayerPawn) == 0x0000B8, "Member 'UFortPlayerControllerComponent_TacticalSprint::CurrentBoundPlayerPawn' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, TacticalSprintAbilityGameplayTag) == 0x0000C4, "Member 'UFortPlayerControllerComponent_TacticalSprint::TacticalSprintAbilityGameplayTag' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, DisableTacticalSprintAbilityGameplayTag) == 0x0000C8, "Member 'UFortPlayerControllerComponent_TacticalSprint::DisableTacticalSprintAbilityGameplayTag' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, TacticalSprintEnabled) == 0x0000D0, "Member 'UFortPlayerControllerComponent_TacticalSprint::TacticalSprintEnabled' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, TacticalSprintToggleGracePeriod) == 0x0000F8, "Member 'UFortPlayerControllerComponent_TacticalSprint::TacticalSprintToggleGracePeriod' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, OnTacticalSprintStarted) == 0x000120, "Member 'UFortPlayerControllerComponent_TacticalSprint::OnTacticalSprintStarted' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, OnTacticalSprintEnded) == 0x000130, "Member 'UFortPlayerControllerComponent_TacticalSprint::OnTacticalSprintEnded' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, OnFailedToSprint) == 0x000140, "Member 'UFortPlayerControllerComponent_TacticalSprint::OnFailedToSprint' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, StopWantingToSprintTimerReceipt) == 0x000150, "Member 'UFortPlayerControllerComponent_TacticalSprint::StopWantingToSprintTimerReceipt' has a wrong offset!");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, InputComponent) == 0x0001A8, "Member 'UFortPlayerControllerComponent_TacticalSprint::InputComponent' has a wrong offset!");

}
