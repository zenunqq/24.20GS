#pragma once

#include "Basic.hpp"

#include "AnimationSharing_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UAnimationSharingStateProcessor : public UObject
{
public:
	TSoftObjectPtr<class UEnum>                   AnimationStateEnum;

public:
	class UEnum* GetAnimationStateEnum();
	void ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingStateProcessor">();
	}
	static class UAnimationSharingStateProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingStateProcessor>();
	}
};
static_assert(alignof(UAnimationSharingStateProcessor) == 0x000008, "Wrong alignment on UAnimationSharingStateProcessor");
static_assert(sizeof(UAnimationSharingStateProcessor) == 0x000050, "Wrong size on UAnimationSharingStateProcessor");
static_assert(offsetof(UAnimationSharingStateProcessor, AnimationStateEnum) == 0x000028, "Member 'UAnimationSharingStateProcessor::AnimationStateEnum' has a wrong offset!");

class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                          AnimationToPlay;
	float                                         PermutationTimeOffset;
	float                                         PlayRate;
	bool                                          bStateBool;
	uint8                                         Pad_359[0x7];
	class UAnimSharingInstance*                   Instance;
	uint8                                         Pad_368[0x8];

public:
	void GetInstancedActors(TArray<class AActor*>* Actors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingStateInstance">();
	}
	static class UAnimSharingStateInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingStateInstance>();
	}
};
static_assert(alignof(UAnimSharingStateInstance) == 0x000010, "Wrong alignment on UAnimSharingStateInstance");
static_assert(sizeof(UAnimSharingStateInstance) == 0x000370, "Wrong size on UAnimSharingStateInstance");
static_assert(offsetof(UAnimSharingStateInstance, AnimationToPlay) == 0x000348, "Member 'UAnimSharingStateInstance::AnimationToPlay' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, PermutationTimeOffset) == 0x000350, "Member 'UAnimSharingStateInstance::PermutationTimeOffset' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, PlayRate) == 0x000354, "Member 'UAnimSharingStateInstance::PlayRate' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, bStateBool) == 0x000358, "Member 'UAnimSharingStateInstance::bStateBool' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, Instance) == 0x000360, "Member 'UAnimSharingStateInstance::Instance' has a wrong offset!");

class UAnimSharingTransitionInstance final : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  FromComponent;
	TWeakObjectPtr<class USkeletalMeshComponent>  ToComponent;
	float                                         BlendTime;
	bool                                          bBlendBool;
	uint8                                         Pad_35D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingTransitionInstance">();
	}
	static class UAnimSharingTransitionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingTransitionInstance>();
	}
};
static_assert(alignof(UAnimSharingTransitionInstance) == 0x000010, "Wrong alignment on UAnimSharingTransitionInstance");
static_assert(sizeof(UAnimSharingTransitionInstance) == 0x000360, "Wrong size on UAnimSharingTransitionInstance");
static_assert(offsetof(UAnimSharingTransitionInstance, FromComponent) == 0x000348, "Member 'UAnimSharingTransitionInstance::FromComponent' has a wrong offset!");
static_assert(offsetof(UAnimSharingTransitionInstance, ToComponent) == 0x000350, "Member 'UAnimSharingTransitionInstance::ToComponent' has a wrong offset!");
static_assert(offsetof(UAnimSharingTransitionInstance, BlendTime) == 0x000358, "Member 'UAnimSharingTransitionInstance::BlendTime' has a wrong offset!");
static_assert(offsetof(UAnimSharingTransitionInstance, bBlendBool) == 0x00035C, "Member 'UAnimSharingTransitionInstance::bBlendBool' has a wrong offset!");

class UAnimSharingAdditiveInstance final : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  BaseComponent;
	TWeakObjectPtr<class UAnimSequence>           AdditiveAnimation;
	float                                         Alpha;
	bool                                          bStateBool;
	uint8                                         Pad_35D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingAdditiveInstance">();
	}
	static class UAnimSharingAdditiveInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingAdditiveInstance>();
	}
};
static_assert(alignof(UAnimSharingAdditiveInstance) == 0x000010, "Wrong alignment on UAnimSharingAdditiveInstance");
static_assert(sizeof(UAnimSharingAdditiveInstance) == 0x000360, "Wrong size on UAnimSharingAdditiveInstance");
static_assert(offsetof(UAnimSharingAdditiveInstance, BaseComponent) == 0x000348, "Member 'UAnimSharingAdditiveInstance::BaseComponent' has a wrong offset!");
static_assert(offsetof(UAnimSharingAdditiveInstance, AdditiveAnimation) == 0x000350, "Member 'UAnimSharingAdditiveInstance::AdditiveAnimation' has a wrong offset!");
static_assert(offsetof(UAnimSharingAdditiveInstance, Alpha) == 0x000358, "Member 'UAnimSharingAdditiveInstance::Alpha' has a wrong offset!");
static_assert(offsetof(UAnimSharingAdditiveInstance, bStateBool) == 0x00035C, "Member 'UAnimSharingAdditiveInstance::bStateBool' has a wrong offset!");

class UAnimSharingInstance final : public UObject
{
public:
	TArray<class AActor*>                         RegisteredActors;
	uint8                                         Pad_38[0x50];
	class UAnimationSharingStateProcessor*        StateProcessor;
	uint8                                         Pad_90[0x38];
	TArray<class UAnimSequence*>                  UsedAnimationSequences;
	uint8                                         Pad_D8[0x10];
	class UEnum*                                  StateEnum;
	class AActor*                                 SharingActor;
	uint8                                         Pad_F8[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingInstance">();
	}
	static class UAnimSharingInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingInstance>();
	}
};
static_assert(alignof(UAnimSharingInstance) == 0x000008, "Wrong alignment on UAnimSharingInstance");
static_assert(sizeof(UAnimSharingInstance) == 0x000120, "Wrong size on UAnimSharingInstance");
static_assert(offsetof(UAnimSharingInstance, RegisteredActors) == 0x000028, "Member 'UAnimSharingInstance::RegisteredActors' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, StateProcessor) == 0x000088, "Member 'UAnimSharingInstance::StateProcessor' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, UsedAnimationSequences) == 0x0000C8, "Member 'UAnimSharingInstance::UsedAnimationSequences' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, StateEnum) == 0x0000E8, "Member 'UAnimSharingInstance::StateEnum' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, SharingActor) == 0x0000F0, "Member 'UAnimSharingInstance::SharingActor' has a wrong offset!");

class UAnimationSharingManager final : public UObject
{
public:
	TArray<class USkeleton*>                      Skeletons;
	TArray<class UAnimSharingInstance*>           PerSkeletonData;
	uint8                                         Pad_48[0x40];

public:
	static bool AnimationSharingEnabled();
	static bool CreateAnimationSharingManager(class UObject* WorldContextObject, const class UAnimationSharingSetup* Setup);
	static class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);

	void RegisterActorWithSkeletonBP(class AActor* InActor, const class USkeleton* SharingSkeleton);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingManager">();
	}
	static class UAnimationSharingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingManager>();
	}
};
static_assert(alignof(UAnimationSharingManager) == 0x000008, "Wrong alignment on UAnimationSharingManager");
static_assert(sizeof(UAnimationSharingManager) == 0x000088, "Wrong size on UAnimationSharingManager");
static_assert(offsetof(UAnimationSharingManager, Skeletons) == 0x000028, "Member 'UAnimationSharingManager::Skeletons' has a wrong offset!");
static_assert(offsetof(UAnimationSharingManager, PerSkeletonData) == 0x000038, "Member 'UAnimationSharingManager::PerSkeletonData' has a wrong offset!");

class UAnimationSharingSetup final : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;
	struct FAnimationSharingScalability           ScalabilitySettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingSetup">();
	}
	static class UAnimationSharingSetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingSetup>();
	}
};
static_assert(alignof(UAnimationSharingSetup) == 0x000008, "Wrong alignment on UAnimationSharingSetup");
static_assert(sizeof(UAnimationSharingSetup) == 0x000048, "Wrong size on UAnimationSharingSetup");
static_assert(offsetof(UAnimationSharingSetup, SkeletonSetups) == 0x000028, "Member 'UAnimationSharingSetup::SkeletonSetups' has a wrong offset!");
static_assert(offsetof(UAnimationSharingSetup, ScalabilitySettings) == 0x000038, "Member 'UAnimationSharingSetup::ScalabilitySettings' has a wrong offset!");

}
