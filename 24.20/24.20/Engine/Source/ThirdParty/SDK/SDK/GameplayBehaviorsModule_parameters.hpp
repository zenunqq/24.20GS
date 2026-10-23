#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "AIModule_structs.hpp"

namespace SDK::Params
{

struct GameplayBehavior_K2_AbortBehavior final
{
public:
	class AActor*                                 Avatar;
};
static_assert(alignof(GameplayBehavior_K2_AbortBehavior) == 0x000008, "Wrong alignment on GameplayBehavior_K2_AbortBehavior");
static_assert(sizeof(GameplayBehavior_K2_AbortBehavior) == 0x000008, "Wrong size on GameplayBehavior_K2_AbortBehavior");
static_assert(offsetof(GameplayBehavior_K2_AbortBehavior, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_AbortBehavior::Avatar' has a wrong offset!");

struct GameplayBehavior_K2_EndBehavior final
{
public:
	class AActor*                                 Avatar;
};
static_assert(alignof(GameplayBehavior_K2_EndBehavior) == 0x000008, "Wrong alignment on GameplayBehavior_K2_EndBehavior");
static_assert(sizeof(GameplayBehavior_K2_EndBehavior) == 0x000008, "Wrong size on GameplayBehavior_K2_EndBehavior");
static_assert(offsetof(GameplayBehavior_K2_EndBehavior, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_EndBehavior::Avatar' has a wrong offset!");

struct GameplayBehavior_K2_OnFinished final
{
public:
	class AActor*                                 Avatar;
	bool                                          bWasInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameplayBehavior_K2_OnFinished) == 0x000008, "Wrong alignment on GameplayBehavior_K2_OnFinished");
static_assert(sizeof(GameplayBehavior_K2_OnFinished) == 0x000010, "Wrong size on GameplayBehavior_K2_OnFinished");
static_assert(offsetof(GameplayBehavior_K2_OnFinished, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnFinished::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnFinished, bWasInterrupted) == 0x000008, "Member 'GameplayBehavior_K2_OnFinished::bWasInterrupted' has a wrong offset!");

struct GameplayBehavior_K2_OnFinishedCharacter final
{
public:
	class ACharacter*                             Avatar;
	bool                                          bWasInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameplayBehavior_K2_OnFinishedCharacter) == 0x000008, "Wrong alignment on GameplayBehavior_K2_OnFinishedCharacter");
static_assert(sizeof(GameplayBehavior_K2_OnFinishedCharacter) == 0x000010, "Wrong size on GameplayBehavior_K2_OnFinishedCharacter");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedCharacter, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnFinishedCharacter::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedCharacter, bWasInterrupted) == 0x000008, "Member 'GameplayBehavior_K2_OnFinishedCharacter::bWasInterrupted' has a wrong offset!");

struct GameplayBehavior_K2_OnFinishedPawn final
{
public:
	class APawn*                                  Avatar;
	bool                                          bWasInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(GameplayBehavior_K2_OnFinishedPawn) == 0x000008, "Wrong alignment on GameplayBehavior_K2_OnFinishedPawn");
static_assert(sizeof(GameplayBehavior_K2_OnFinishedPawn) == 0x000010, "Wrong size on GameplayBehavior_K2_OnFinishedPawn");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedPawn, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnFinishedPawn::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnFinishedPawn, bWasInterrupted) == 0x000008, "Member 'GameplayBehavior_K2_OnFinishedPawn::bWasInterrupted' has a wrong offset!");

struct GameplayBehavior_K2_OnTriggered final
{
public:
	class AActor*                                 Avatar;
	const class UGameplayBehaviorConfig*          Config;
	class AActor*                                 SmartObjectOwner;
};
static_assert(alignof(GameplayBehavior_K2_OnTriggered) == 0x000008, "Wrong alignment on GameplayBehavior_K2_OnTriggered");
static_assert(sizeof(GameplayBehavior_K2_OnTriggered) == 0x000018, "Wrong size on GameplayBehavior_K2_OnTriggered");
static_assert(offsetof(GameplayBehavior_K2_OnTriggered, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnTriggered::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggered, Config) == 0x000008, "Member 'GameplayBehavior_K2_OnTriggered::Config' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggered, SmartObjectOwner) == 0x000010, "Member 'GameplayBehavior_K2_OnTriggered::SmartObjectOwner' has a wrong offset!");

struct GameplayBehavior_K2_OnTriggeredCharacter final
{
public:
	class ACharacter*                             Avatar;
	const class UGameplayBehaviorConfig*          Config;
	class AActor*                                 SmartObjectOwner;
};
static_assert(alignof(GameplayBehavior_K2_OnTriggeredCharacter) == 0x000008, "Wrong alignment on GameplayBehavior_K2_OnTriggeredCharacter");
static_assert(sizeof(GameplayBehavior_K2_OnTriggeredCharacter) == 0x000018, "Wrong size on GameplayBehavior_K2_OnTriggeredCharacter");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredCharacter, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnTriggeredCharacter::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredCharacter, Config) == 0x000008, "Member 'GameplayBehavior_K2_OnTriggeredCharacter::Config' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredCharacter, SmartObjectOwner) == 0x000010, "Member 'GameplayBehavior_K2_OnTriggeredCharacter::SmartObjectOwner' has a wrong offset!");

struct GameplayBehavior_K2_OnTriggeredPawn final
{
public:
	class APawn*                                  Avatar;
	const class UGameplayBehaviorConfig*          Config;
	class AActor*                                 SmartObjectOwner;
};
static_assert(alignof(GameplayBehavior_K2_OnTriggeredPawn) == 0x000008, "Wrong alignment on GameplayBehavior_K2_OnTriggeredPawn");
static_assert(sizeof(GameplayBehavior_K2_OnTriggeredPawn) == 0x000018, "Wrong size on GameplayBehavior_K2_OnTriggeredPawn");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredPawn, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_OnTriggeredPawn::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredPawn, Config) == 0x000008, "Member 'GameplayBehavior_K2_OnTriggeredPawn::Config' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_OnTriggeredPawn, SmartObjectOwner) == 0x000010, "Member 'GameplayBehavior_K2_OnTriggeredPawn::SmartObjectOwner' has a wrong offset!");

struct GameplayBehavior_K2_TriggerBehavior final
{
public:
	class AActor*                                 Avatar;
	class UGameplayBehaviorConfig*                Config;
	class AActor*                                 SmartObjectOwner;
};
static_assert(alignof(GameplayBehavior_K2_TriggerBehavior) == 0x000008, "Wrong alignment on GameplayBehavior_K2_TriggerBehavior");
static_assert(sizeof(GameplayBehavior_K2_TriggerBehavior) == 0x000018, "Wrong size on GameplayBehavior_K2_TriggerBehavior");
static_assert(offsetof(GameplayBehavior_K2_TriggerBehavior, Avatar) == 0x000000, "Member 'GameplayBehavior_K2_TriggerBehavior::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_TriggerBehavior, Config) == 0x000008, "Member 'GameplayBehavior_K2_TriggerBehavior::Config' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_TriggerBehavior, SmartObjectOwner) == 0x000010, "Member 'GameplayBehavior_K2_TriggerBehavior::SmartObjectOwner' has a wrong offset!");

struct GameplayBehavior_K2_GetNextActorIndexInSequence final
{
public:
	int32                                         CurrentIndex;
	int32                                         ReturnValue;
};
static_assert(alignof(GameplayBehavior_K2_GetNextActorIndexInSequence) == 0x000004, "Wrong alignment on GameplayBehavior_K2_GetNextActorIndexInSequence");
static_assert(sizeof(GameplayBehavior_K2_GetNextActorIndexInSequence) == 0x000008, "Wrong size on GameplayBehavior_K2_GetNextActorIndexInSequence");
static_assert(offsetof(GameplayBehavior_K2_GetNextActorIndexInSequence, CurrentIndex) == 0x000000, "Member 'GameplayBehavior_K2_GetNextActorIndexInSequence::CurrentIndex' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_K2_GetNextActorIndexInSequence, ReturnValue) == 0x000004, "Member 'GameplayBehavior_K2_GetNextActorIndexInSequence::ReturnValue' has a wrong offset!");

struct GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector final
{
public:
	struct FBlackboardKeySelector                 InSelector;
	class UObject*                                Owner;
	class FName                                   PropertyName;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector) == 0x000008, "Wrong alignment on GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector");
static_assert(sizeof(GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector) == 0x000038, "Wrong size on GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector, InSelector) == 0x000000, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector::InSelector' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector, Owner) == 0x000028, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector::Owner' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector, PropertyName) == 0x000030, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_AddGameplayTagFilterToBlackboardKeySelector::PropertyName' has a wrong offset!");

struct GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag final
{
public:
	class UBTNode*                                NodeOwner;
	struct FBlackboardKeySelector                 Key;
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag) == 0x000008, "Wrong alignment on GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag");
static_assert(sizeof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag) == 0x000050, "Wrong size on GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag, NodeOwner) == 0x000000, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag::NodeOwner' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag, Key) == 0x000008, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag::Key' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag, ReturnValue) == 0x000030, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTag::ReturnValue' has a wrong offset!");

struct GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp final
{
public:
	class UBlackboardComponent*                   BlackboardComp;
	class FName                                   KeyName;
	uint8                                         Pad_C[0x4];
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp) == 0x000008, "Wrong alignment on GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp");
static_assert(sizeof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp) == 0x000030, "Wrong size on GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp, BlackboardComp) == 0x000000, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp::BlackboardComp' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp, KeyName) == 0x000008, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp::KeyName' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp, ReturnValue) == 0x000010, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_GetBlackboardValueAsGameplayTagFromBlackboardComp::ReturnValue' has a wrong offset!");

struct GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag final
{
public:
	class UBTNode*                                NodeOwner;
	struct FBlackboardKeySelector                 Key;
	struct FGameplayTagContainer                  Value;
};
static_assert(alignof(GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag) == 0x000008, "Wrong alignment on GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag");
static_assert(sizeof(GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag) == 0x000050, "Wrong size on GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag, NodeOwner) == 0x000000, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag::NodeOwner' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag, Key) == 0x000008, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag::Key' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag, Value) == 0x000030, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_SetBlackboardValueAsGameplayTag::Value' has a wrong offset!");

struct GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp final
{
public:
	class UBlackboardComponent*                   BlackboardComp;
	class FName                                   KeyName;
	uint8                                         Pad_C[0x4];
	struct FGameplayTagContainer                  GameplayTagValue;
};
static_assert(alignof(GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp) == 0x000008, "Wrong alignment on GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp");
static_assert(sizeof(GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp) == 0x000030, "Wrong size on GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp, BlackboardComp) == 0x000000, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp::BlackboardComp' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp, KeyName) == 0x000008, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp::KeyName' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp, GameplayTagValue) == 0x000010, "Member 'GameplayBehaviorsBlueprintFunctionLibrary_SetValueAsGameplayTagForBlackboardComp::GameplayTagValue' has a wrong offset!");

struct GameplayBehavior_AnimationBased_OnMontageFinished final
{
public:
	class UAnimMontage*                           Montage;
	bool                                          bInterrupted;
	uint8                                         Pad_9[0x7];
	class AActor*                                 InAvatar;
};
static_assert(alignof(GameplayBehavior_AnimationBased_OnMontageFinished) == 0x000008, "Wrong alignment on GameplayBehavior_AnimationBased_OnMontageFinished");
static_assert(sizeof(GameplayBehavior_AnimationBased_OnMontageFinished) == 0x000018, "Wrong size on GameplayBehavior_AnimationBased_OnMontageFinished");
static_assert(offsetof(GameplayBehavior_AnimationBased_OnMontageFinished, Montage) == 0x000000, "Member 'GameplayBehavior_AnimationBased_OnMontageFinished::Montage' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_AnimationBased_OnMontageFinished, bInterrupted) == 0x000008, "Member 'GameplayBehavior_AnimationBased_OnMontageFinished::bInterrupted' has a wrong offset!");
static_assert(offsetof(GameplayBehavior_AnimationBased_OnMontageFinished, InAvatar) == 0x000010, "Member 'GameplayBehavior_AnimationBased_OnMontageFinished::InAvatar' has a wrong offset!");

}
