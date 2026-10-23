#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayBehaviorsModule_structs.hpp"

namespace SDK
{

class UBTDecorator_GameplayTagQuery final : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                 ActorForGameplayTagQuery;
	struct FGameplayTagQuery                      GameplayTagQuery;
	TArray<struct FGameplayTag>                   QueryTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_GameplayTagQuery">();
	}
	static class UBTDecorator_GameplayTagQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_GameplayTagQuery>();
	}
};
static_assert(alignof(UBTDecorator_GameplayTagQuery) == 0x000008, "Wrong alignment on UBTDecorator_GameplayTagQuery");
static_assert(sizeof(UBTDecorator_GameplayTagQuery) == 0x0000E8, "Wrong size on UBTDecorator_GameplayTagQuery");
static_assert(offsetof(UBTDecorator_GameplayTagQuery, ActorForGameplayTagQuery) == 0x000068, "Member 'UBTDecorator_GameplayTagQuery::ActorForGameplayTagQuery' has a wrong offset!");
static_assert(offsetof(UBTDecorator_GameplayTagQuery, GameplayTagQuery) == 0x000090, "Member 'UBTDecorator_GameplayTagQuery::GameplayTagQuery' has a wrong offset!");
static_assert(offsetof(UBTDecorator_GameplayTagQuery, QueryTags) == 0x0000D8, "Member 'UBTDecorator_GameplayTagQuery::QueryTags' has a wrong offset!");

class UBTTask_StopGameplayBehavior final : public UBTTaskNode
{
public:
	TSubclassOf<class UGameplayBehavior>          BehaviorToStop;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_StopGameplayBehavior">();
	}
	static class UBTTask_StopGameplayBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_StopGameplayBehavior>();
	}
};
static_assert(alignof(UBTTask_StopGameplayBehavior) == 0x000008, "Wrong alignment on UBTTask_StopGameplayBehavior");
static_assert(sizeof(UBTTask_StopGameplayBehavior) == 0x000078, "Wrong size on UBTTask_StopGameplayBehavior");
static_assert(offsetof(UBTTask_StopGameplayBehavior, BehaviorToStop) == 0x000070, "Member 'UBTTask_StopGameplayBehavior::BehaviorToStop' has a wrong offset!");

class UGameplayBehaviorConfig : public UObject
{
public:
	TSubclassOf<class UGameplayBehavior>          BehaviorClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorConfig">();
	}
	static class UGameplayBehaviorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorConfig>();
	}
};
static_assert(alignof(UGameplayBehaviorConfig) == 0x000008, "Wrong alignment on UGameplayBehaviorConfig");
static_assert(sizeof(UGameplayBehaviorConfig) == 0x000030, "Wrong size on UGameplayBehaviorConfig");
static_assert(offsetof(UGameplayBehaviorConfig, BehaviorClass) == 0x000028, "Member 'UGameplayBehaviorConfig::BehaviorClass' has a wrong offset!");

class UGameplayBehaviorConfig_BehaviorTree final : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UBehaviorTree>           BehaviorTree;
	uint8                                         bRevertToPreviousBTOnFinish : 1;
	uint8                                         Pad_59[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorConfig_BehaviorTree">();
	}
	static class UGameplayBehaviorConfig_BehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorConfig_BehaviorTree>();
	}
};
static_assert(alignof(UGameplayBehaviorConfig_BehaviorTree) == 0x000008, "Wrong alignment on UGameplayBehaviorConfig_BehaviorTree");
static_assert(sizeof(UGameplayBehaviorConfig_BehaviorTree) == 0x000060, "Wrong size on UGameplayBehaviorConfig_BehaviorTree");
static_assert(offsetof(UGameplayBehaviorConfig_BehaviorTree, BehaviorTree) == 0x000030, "Member 'UGameplayBehaviorConfig_BehaviorTree::BehaviorTree' has a wrong offset!");

class UGameplayBehavior : public UObject
{
public:
	uint8                                         Pad_28[0x14];
	struct FGameplayTag                           ActionTag;
	uint8                                         Pad_40[0x18];
	TArray<class AActor*>                         RelevantActors;
	class AActor*                                 TransientSmartObjectOwner;
	class AActor*                                 TransientAvatar;
	TArray<class UGameplayTask*>                  ActiveTasks;

public:
	void K2_AbortBehavior(class AActor* Avatar);
	void K2_EndBehavior(class AActor* Avatar);
	void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);
	void K2_OnTriggered(class AActor* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggeredCharacter(class ACharacter* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnTriggeredPawn(class APawn* Avatar, const class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);

	int32 K2_GetNextActorIndexInSequence(int32 CurrentIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehavior">();
	}
	static class UGameplayBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehavior>();
	}
};
static_assert(alignof(UGameplayBehavior) == 0x000008, "Wrong alignment on UGameplayBehavior");
static_assert(sizeof(UGameplayBehavior) == 0x000088, "Wrong size on UGameplayBehavior");
static_assert(offsetof(UGameplayBehavior, ActionTag) == 0x00003C, "Member 'UGameplayBehavior::ActionTag' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, RelevantActors) == 0x000058, "Member 'UGameplayBehavior::RelevantActors' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, TransientSmartObjectOwner) == 0x000068, "Member 'UGameplayBehavior::TransientSmartObjectOwner' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, TransientAvatar) == 0x000070, "Member 'UGameplayBehavior::TransientAvatar' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior, ActiveTasks) == 0x000078, "Member 'UGameplayBehavior::ActiveTasks' has a wrong offset!");

class UGameplayBehavior_BehaviorTree final : public UGameplayBehavior
{
public:
	class UBehaviorTree*                          PreviousBT;
	class AAIController*                          AIController;
	bool                                          bSingleRun;
	uint8                                         Pad_99[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehavior_BehaviorTree">();
	}
	static class UGameplayBehavior_BehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehavior_BehaviorTree>();
	}
};
static_assert(alignof(UGameplayBehavior_BehaviorTree) == 0x000008, "Wrong alignment on UGameplayBehavior_BehaviorTree");
static_assert(sizeof(UGameplayBehavior_BehaviorTree) == 0x0000A8, "Wrong size on UGameplayBehavior_BehaviorTree");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, PreviousBT) == 0x000088, "Member 'UGameplayBehavior_BehaviorTree::PreviousBT' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, AIController) == 0x000090, "Member 'UGameplayBehavior_BehaviorTree::AIController' has a wrong offset!");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, bSingleRun) == 0x000098, "Member 'UGameplayBehavior_BehaviorTree::bSingleRun' has a wrong offset!");

class UBlackboardKeyType_GameplayTag final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_GameplayTag">();
	}
	static class UBlackboardKeyType_GameplayTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_GameplayTag>();
	}
};
static_assert(alignof(UBlackboardKeyType_GameplayTag) == 0x000008, "Wrong alignment on UBlackboardKeyType_GameplayTag");
static_assert(sizeof(UBlackboardKeyType_GameplayTag) == 0x000030, "Wrong size on UBlackboardKeyType_GameplayTag");

class UGameplayBehaviorConfig_Animation final : public UGameplayBehaviorConfig
{
public:
	TSoftObjectPtr<class UAnimMontage>            AnimMontage;
	float                                         PlayRate;
	class FName                                   StartSectionName;
	uint8                                         bLoop : 1;
	uint8                                         Pad_61[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorConfig_Animation">();
	}
	static class UGameplayBehaviorConfig_Animation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorConfig_Animation>();
	}
};
static_assert(alignof(UGameplayBehaviorConfig_Animation) == 0x000008, "Wrong alignment on UGameplayBehaviorConfig_Animation");
static_assert(sizeof(UGameplayBehaviorConfig_Animation) == 0x000068, "Wrong size on UGameplayBehaviorConfig_Animation");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, AnimMontage) == 0x000030, "Member 'UGameplayBehaviorConfig_Animation::AnimMontage' has a wrong offset!");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, PlayRate) == 0x000058, "Member 'UGameplayBehaviorConfig_Animation::PlayRate' has a wrong offset!");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, StartSectionName) == 0x00005C, "Member 'UGameplayBehaviorConfig_Animation::StartSectionName' has a wrong offset!");

class UGameplayBehaviorsBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddGameplayTagFilterToBlackboardKeySelector(struct FBlackboardKeySelector* InSelector, class UObject* Owner, class FName PropertyName);
	static struct FGameplayTagContainer GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FGameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, const class FName& KeyName);
	static void SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FGameplayTagContainer& Value);
	static void SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, const class FName& KeyName, const struct FGameplayTagContainer& GameplayTagValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorsBlueprintFunctionLibrary">();
	}
	static class UGameplayBehaviorsBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorsBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UGameplayBehaviorsBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UGameplayBehaviorsBlueprintFunctionLibrary");
static_assert(sizeof(UGameplayBehaviorsBlueprintFunctionLibrary) == 0x000028, "Wrong size on UGameplayBehaviorsBlueprintFunctionLibrary");

class UGameplayBehaviorSubsystem final : public UWorldSubsystem
{
public:
	TMap<class AActor*, struct FAgentGameplayBehaviors> AgentGameplayBehaviors;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorSubsystem">();
	}
	static class UGameplayBehaviorSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorSubsystem>();
	}
};
static_assert(alignof(UGameplayBehaviorSubsystem) == 0x000008, "Wrong alignment on UGameplayBehaviorSubsystem");
static_assert(sizeof(UGameplayBehaviorSubsystem) == 0x000080, "Wrong size on UGameplayBehaviorSubsystem");
static_assert(offsetof(UGameplayBehaviorSubsystem, AgentGameplayBehaviors) == 0x000030, "Member 'UGameplayBehaviorSubsystem::AgentGameplayBehaviors' has a wrong offset!");

class UGameplayBehavior_AnimationBased final : public UGameplayBehavior
{
public:
	TArray<struct FMontagePlaybackData>           ActivePlayback;

public:
	void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehavior_AnimationBased">();
	}
	static class UGameplayBehavior_AnimationBased* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehavior_AnimationBased>();
	}
};
static_assert(alignof(UGameplayBehavior_AnimationBased) == 0x000008, "Wrong alignment on UGameplayBehavior_AnimationBased");
static_assert(sizeof(UGameplayBehavior_AnimationBased) == 0x000098, "Wrong size on UGameplayBehavior_AnimationBased");
static_assert(offsetof(UGameplayBehavior_AnimationBased, ActivePlayback) == 0x000088, "Member 'UGameplayBehavior_AnimationBased::ActivePlayback' has a wrong offset!");

}
