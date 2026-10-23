#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct FortGameplayAbility_PlayAnim_OnBlendOut final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(FortGameplayAbility_PlayAnim_OnBlendOut) == 0x000004, "Wrong alignment on FortGameplayAbility_PlayAnim_OnBlendOut");
static_assert(sizeof(FortGameplayAbility_PlayAnim_OnBlendOut) == 0x000004, "Wrong size on FortGameplayAbility_PlayAnim_OnBlendOut");
static_assert(offsetof(FortGameplayAbility_PlayAnim_OnBlendOut, NotifyTag) == 0x000000, "Member 'FortGameplayAbility_PlayAnim_OnBlendOut::NotifyTag' has a wrong offset!");

struct FortGameplayAbility_PlayAnim_OnCancelled final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(FortGameplayAbility_PlayAnim_OnCancelled) == 0x000004, "Wrong alignment on FortGameplayAbility_PlayAnim_OnCancelled");
static_assert(sizeof(FortGameplayAbility_PlayAnim_OnCancelled) == 0x000004, "Wrong size on FortGameplayAbility_PlayAnim_OnCancelled");
static_assert(offsetof(FortGameplayAbility_PlayAnim_OnCancelled, NotifyTag) == 0x000000, "Member 'FortGameplayAbility_PlayAnim_OnCancelled::NotifyTag' has a wrong offset!");

struct FortGameplayAbility_PlayAnim_OnCompleted final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(FortGameplayAbility_PlayAnim_OnCompleted) == 0x000004, "Wrong alignment on FortGameplayAbility_PlayAnim_OnCompleted");
static_assert(sizeof(FortGameplayAbility_PlayAnim_OnCompleted) == 0x000004, "Wrong size on FortGameplayAbility_PlayAnim_OnCompleted");
static_assert(offsetof(FortGameplayAbility_PlayAnim_OnCompleted, NotifyTag) == 0x000000, "Member 'FortGameplayAbility_PlayAnim_OnCompleted::NotifyTag' has a wrong offset!");

struct FortGameplayAbility_PlayAnim_OnInterrupted final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(FortGameplayAbility_PlayAnim_OnInterrupted) == 0x000004, "Wrong alignment on FortGameplayAbility_PlayAnim_OnInterrupted");
static_assert(sizeof(FortGameplayAbility_PlayAnim_OnInterrupted) == 0x000004, "Wrong size on FortGameplayAbility_PlayAnim_OnInterrupted");
static_assert(offsetof(FortGameplayAbility_PlayAnim_OnInterrupted, NotifyTag) == 0x000000, "Member 'FortGameplayAbility_PlayAnim_OnInterrupted::NotifyTag' has a wrong offset!");

struct FortGameplayAbility_PlayAnim_OnNotifyBegin final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(FortGameplayAbility_PlayAnim_OnNotifyBegin) == 0x000004, "Wrong alignment on FortGameplayAbility_PlayAnim_OnNotifyBegin");
static_assert(sizeof(FortGameplayAbility_PlayAnim_OnNotifyBegin) == 0x000004, "Wrong size on FortGameplayAbility_PlayAnim_OnNotifyBegin");
static_assert(offsetof(FortGameplayAbility_PlayAnim_OnNotifyBegin, NotifyTag) == 0x000000, "Member 'FortGameplayAbility_PlayAnim_OnNotifyBegin::NotifyTag' has a wrong offset!");

struct FortGameplayAbility_PlayAnim_OnNotifyEnd final
{
public:
	struct FGameplayTag                           NotifyTag;
};
static_assert(alignof(FortGameplayAbility_PlayAnim_OnNotifyEnd) == 0x000004, "Wrong alignment on FortGameplayAbility_PlayAnim_OnNotifyEnd");
static_assert(sizeof(FortGameplayAbility_PlayAnim_OnNotifyEnd) == 0x000004, "Wrong size on FortGameplayAbility_PlayAnim_OnNotifyEnd");
static_assert(offsetof(FortGameplayAbility_PlayAnim_OnNotifyEnd, NotifyTag) == 0x000000, "Member 'FortGameplayAbility_PlayAnim_OnNotifyEnd::NotifyTag' has a wrong offset!");

struct FortControllerStateHandlerComponent_NotifyOfStateChange final
{
public:
	class FString                                 State;
	bool                                          Active;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortControllerStateHandlerComponent_NotifyOfStateChange) == 0x000008, "Wrong alignment on FortControllerStateHandlerComponent_NotifyOfStateChange");
static_assert(sizeof(FortControllerStateHandlerComponent_NotifyOfStateChange) == 0x000018, "Wrong size on FortControllerStateHandlerComponent_NotifyOfStateChange");
static_assert(offsetof(FortControllerStateHandlerComponent_NotifyOfStateChange, State) == 0x000000, "Member 'FortControllerStateHandlerComponent_NotifyOfStateChange::State' has a wrong offset!");
static_assert(offsetof(FortControllerStateHandlerComponent_NotifyOfStateChange, Active) == 0x000010, "Member 'FortControllerStateHandlerComponent_NotifyOfStateChange::Active' has a wrong offset!");

struct FortPlayspaceComponentHelper_HandlePlayerDied final
{
public:
	class AFortPlayerPawnAthena*                  FortPlayerPawnAthena;
};
static_assert(alignof(FortPlayspaceComponentHelper_HandlePlayerDied) == 0x000008, "Wrong alignment on FortPlayspaceComponentHelper_HandlePlayerDied");
static_assert(sizeof(FortPlayspaceComponentHelper_HandlePlayerDied) == 0x000008, "Wrong size on FortPlayspaceComponentHelper_HandlePlayerDied");
static_assert(offsetof(FortPlayspaceComponentHelper_HandlePlayerDied, FortPlayerPawnAthena) == 0x000000, "Member 'FortPlayspaceComponentHelper_HandlePlayerDied::FortPlayerPawnAthena' has a wrong offset!");

struct FortPlayspaceComponentHelper_HandlePlayerPawnPossessed final
{
public:
	class APawn*                                  Pawn;
};
static_assert(alignof(FortPlayspaceComponentHelper_HandlePlayerPawnPossessed) == 0x000008, "Wrong alignment on FortPlayspaceComponentHelper_HandlePlayerPawnPossessed");
static_assert(sizeof(FortPlayspaceComponentHelper_HandlePlayerPawnPossessed) == 0x000008, "Wrong size on FortPlayspaceComponentHelper_HandlePlayerPawnPossessed");
static_assert(offsetof(FortPlayspaceComponentHelper_HandlePlayerPawnPossessed, Pawn) == 0x000000, "Member 'FortPlayspaceComponentHelper_HandlePlayerPawnPossessed::Pawn' has a wrong offset!");

}
