#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MotionWarping_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAnimNotifyState_MotionWarping final : public UAnimNotifyState
{
public:
	class URootMotionModifier*                    RootMotionModifier;

public:
	class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, const class UAnimSequenceBase* Animation, float StartTime, float EndTime) const;
	void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;
	void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_MotionWarping">();
	}
	static class UAnimNotifyState_MotionWarping* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_MotionWarping>();
	}
};
static_assert(alignof(UAnimNotifyState_MotionWarping) == 0x000008, "Wrong alignment on UAnimNotifyState_MotionWarping");
static_assert(sizeof(UAnimNotifyState_MotionWarping) == 0x000038, "Wrong size on UAnimNotifyState_MotionWarping");
static_assert(offsetof(UAnimNotifyState_MotionWarping, RootMotionModifier) == 0x000030, "Member 'UAnimNotifyState_MotionWarping::RootMotionModifier' has a wrong offset!");

class UMotionWarpingUtilities final : public UBlueprintFunctionLibrary
{
public:
	static struct FTransform ExtractRootMotionFromAnimation(const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
	static void GetMotionWarpingWindowsForWarpTargetFromAnimation(const class UAnimSequenceBase* Animation, class FName WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
	static void GetMotionWarpingWindowsFromAnimation(const class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionWarpingUtilities">();
	}
	static class UMotionWarpingUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionWarpingUtilities>();
	}
};
static_assert(alignof(UMotionWarpingUtilities) == 0x000008, "Wrong alignment on UMotionWarpingUtilities");
static_assert(sizeof(UMotionWarpingUtilities) == 0x000028, "Wrong size on UMotionWarpingUtilities");

class UMotionWarpingComponent final : public UActorComponent
{
public:
	bool                                          bSearchForWindowsInAnimsWithinMontages;
	uint8                                         Pad_A1[0x7];
	TMulticastInlineDelegate<void(class UMotionWarpingComponent* MotionWarpingComp)> OnPreUpdate;
	TWeakObjectPtr<class ACharacter>              CharacterOwner;
	TArray<class URootMotionModifier*>            Modifiers;
	TArray<struct FMotionWarpingTarget>           WarpTargets;

public:
	void AddOrUpdateWarpTarget(const struct FMotionWarpingTarget& WarpTarget);
	void AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, const class USceneComponent* Component, class FName BoneName, bool bFollowComponent);
	void AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation);
	void AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform);
	void DisableAllRootMotionModifiers();
	int32 RemoveWarpTarget(class FName WarpTargetName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionWarpingComponent">();
	}
	static class UMotionWarpingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionWarpingComponent>();
	}
};
static_assert(alignof(UMotionWarpingComponent) == 0x000008, "Wrong alignment on UMotionWarpingComponent");
static_assert(sizeof(UMotionWarpingComponent) == 0x0000E0, "Wrong size on UMotionWarpingComponent");
static_assert(offsetof(UMotionWarpingComponent, bSearchForWindowsInAnimsWithinMontages) == 0x0000A0, "Member 'UMotionWarpingComponent::bSearchForWindowsInAnimsWithinMontages' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, OnPreUpdate) == 0x0000A8, "Member 'UMotionWarpingComponent::OnPreUpdate' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, CharacterOwner) == 0x0000B8, "Member 'UMotionWarpingComponent::CharacterOwner' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, Modifiers) == 0x0000C0, "Member 'UMotionWarpingComponent::Modifiers' has a wrong offset!");
static_assert(offsetof(UMotionWarpingComponent, WarpTargets) == 0x0000D0, "Member 'UMotionWarpingComponent::WarpTargets' has a wrong offset!");

class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;
	float                                         StartTime;
	float                                         EndTime;
	float                                         PreviousPosition;
	float                                         CurrentPosition;
	float                                         Weight;
	uint8                                         Pad_44[0xC];
	struct FTransform                             StartTransform;
	float                                         ActualStartTime;
	TDelegate<void(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier)> OnActivateDelegate;
	TDelegate<void(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier)> OnUpdateDelegate;
	TDelegate<void(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier)> OnDeactivateDelegate;
	ERootMotionModifierState                      State;
	uint8                                         Pad_D9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier">();
	}
	static class URootMotionModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier>();
	}
};
static_assert(alignof(URootMotionModifier) == 0x000010, "Wrong alignment on URootMotionModifier");
static_assert(sizeof(URootMotionModifier) == 0x0000E0, "Wrong size on URootMotionModifier");
static_assert(offsetof(URootMotionModifier, Animation) == 0x000028, "Member 'URootMotionModifier::Animation' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, StartTime) == 0x000030, "Member 'URootMotionModifier::StartTime' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, EndTime) == 0x000034, "Member 'URootMotionModifier::EndTime' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, PreviousPosition) == 0x000038, "Member 'URootMotionModifier::PreviousPosition' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, CurrentPosition) == 0x00003C, "Member 'URootMotionModifier::CurrentPosition' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, Weight) == 0x000040, "Member 'URootMotionModifier::Weight' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, StartTransform) == 0x000050, "Member 'URootMotionModifier::StartTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, ActualStartTime) == 0x0000B0, "Member 'URootMotionModifier::ActualStartTime' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, OnActivateDelegate) == 0x0000B4, "Member 'URootMotionModifier::OnActivateDelegate' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, OnUpdateDelegate) == 0x0000C0, "Member 'URootMotionModifier::OnUpdateDelegate' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, OnDeactivateDelegate) == 0x0000CC, "Member 'URootMotionModifier::OnDeactivateDelegate' has a wrong offset!");
static_assert(offsetof(URootMotionModifier, State) == 0x0000D8, "Member 'URootMotionModifier::State' has a wrong offset!");

class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                   WarpTargetName;
	EWarpPointAnimProvider                        WarpPointAnimProvider;
	uint8                                         Pad_E5[0xB];
	struct FTransform                             WarpPointAnimTransform;
	class FName                                   WarpPointAnimBoneName;
	bool                                          bWarpTranslation;
	bool                                          bIgnoreZAxis;
	EAlphaBlendOption                             AddTranslationEasingFunc;
	uint8                                         Pad_157[0x1];
	class UCurveFloat*                            AddTranslationEasingCurve;
	bool                                          bWarpRotation;
	EMotionWarpRotationType                       RotationType;
	uint8                                         Pad_162[0x2];
	float                                         WarpRotationTimeMultiplier;
	uint8                                         Pad_168[0x8];
	struct FTransform                             CachedTargetTransform;
	uint8                                         Pad_1D0[0x70];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_Warp">();
	}
	static class URootMotionModifier_Warp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_Warp>();
	}
};
static_assert(alignof(URootMotionModifier_Warp) == 0x000010, "Wrong alignment on URootMotionModifier_Warp");
static_assert(sizeof(URootMotionModifier_Warp) == 0x000240, "Wrong size on URootMotionModifier_Warp");
static_assert(offsetof(URootMotionModifier_Warp, WarpTargetName) == 0x0000E0, "Member 'URootMotionModifier_Warp::WarpTargetName' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimProvider) == 0x0000E4, "Member 'URootMotionModifier_Warp::WarpPointAnimProvider' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimTransform) == 0x0000F0, "Member 'URootMotionModifier_Warp::WarpPointAnimTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimBoneName) == 0x000150, "Member 'URootMotionModifier_Warp::WarpPointAnimBoneName' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, bWarpTranslation) == 0x000154, "Member 'URootMotionModifier_Warp::bWarpTranslation' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, bIgnoreZAxis) == 0x000155, "Member 'URootMotionModifier_Warp::bIgnoreZAxis' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingFunc) == 0x000156, "Member 'URootMotionModifier_Warp::AddTranslationEasingFunc' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingCurve) == 0x000158, "Member 'URootMotionModifier_Warp::AddTranslationEasingCurve' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, bWarpRotation) == 0x000160, "Member 'URootMotionModifier_Warp::bWarpRotation' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, RotationType) == 0x000161, "Member 'URootMotionModifier_Warp::RotationType' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, WarpRotationTimeMultiplier) == 0x000164, "Member 'URootMotionModifier_Warp::WarpRotationTimeMultiplier' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_Warp, CachedTargetTransform) == 0x000170, "Member 'URootMotionModifier_Warp::CachedTargetTransform' has a wrong offset!");

class URootMotionModifier_SimpleWarp final : public URootMotionModifier_Warp
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_SimpleWarp">();
	}
	static class URootMotionModifier_SimpleWarp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_SimpleWarp>();
	}
};
static_assert(alignof(URootMotionModifier_SimpleWarp) == 0x000010, "Wrong alignment on URootMotionModifier_SimpleWarp");
static_assert(sizeof(URootMotionModifier_SimpleWarp) == 0x000240, "Wrong size on URootMotionModifier_SimpleWarp");

class URootMotionModifier_Scale final : public URootMotionModifier
{
public:
	struct FVector                                Scale;
	uint8                                         Pad_F8[0x8];

public:
	static class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_Scale">();
	}
	static class URootMotionModifier_Scale* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_Scale>();
	}
};
static_assert(alignof(URootMotionModifier_Scale) == 0x000010, "Wrong alignment on URootMotionModifier_Scale");
static_assert(sizeof(URootMotionModifier_Scale) == 0x000100, "Wrong size on URootMotionModifier_Scale");
static_assert(offsetof(URootMotionModifier_Scale, Scale) == 0x0000E0, "Member 'URootMotionModifier_Scale::Scale' has a wrong offset!");

class URootMotionModifier_AdjustmentBlendWarp final : public URootMotionModifier_Warp
{
public:
	bool                                          bWarpIKBones;
	uint8                                         Pad_241[0x7];
	TArray<class FName>                           IKBones;
	uint8                                         Pad_258[0x8];
	struct FTransform                             CachedMeshTransform;
	struct FTransform                             CachedMeshRelativeTransform;
	struct FTransform                             CachedRootMotion;
	struct FAnimSequenceTrackContainer            Result;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_AdjustmentBlendWarp">();
	}
	static class URootMotionModifier_AdjustmentBlendWarp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_AdjustmentBlendWarp>();
	}
};
static_assert(alignof(URootMotionModifier_AdjustmentBlendWarp) == 0x000010, "Wrong alignment on URootMotionModifier_AdjustmentBlendWarp");
static_assert(sizeof(URootMotionModifier_AdjustmentBlendWarp) == 0x0003A0, "Wrong size on URootMotionModifier_AdjustmentBlendWarp");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, bWarpIKBones) == 0x000240, "Member 'URootMotionModifier_AdjustmentBlendWarp::bWarpIKBones' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, IKBones) == 0x000248, "Member 'URootMotionModifier_AdjustmentBlendWarp::IKBones' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform) == 0x000260, "Member 'URootMotionModifier_AdjustmentBlendWarp::CachedMeshTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform) == 0x0002C0, "Member 'URootMotionModifier_AdjustmentBlendWarp::CachedMeshRelativeTransform' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion) == 0x000320, "Member 'URootMotionModifier_AdjustmentBlendWarp::CachedRootMotion' has a wrong offset!");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, Result) == 0x000380, "Member 'URootMotionModifier_AdjustmentBlendWarp::Result' has a wrong offset!");

class URootMotionModifier_SkewWarp final : public URootMotionModifier_Warp
{
public:
	static class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RootMotionModifier_SkewWarp">();
	}
	static class URootMotionModifier_SkewWarp* GetDefaultObj()
	{
		return GetDefaultObjImpl<URootMotionModifier_SkewWarp>();
	}
};
static_assert(alignof(URootMotionModifier_SkewWarp) == 0x000010, "Wrong alignment on URootMotionModifier_SkewWarp");
static_assert(sizeof(URootMotionModifier_SkewWarp) == 0x000240, "Wrong size on URootMotionModifier_SkewWarp");

}
