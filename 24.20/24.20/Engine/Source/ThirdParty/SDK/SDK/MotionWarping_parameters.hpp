#pragma once

#include "Basic.hpp"

#include "MotionWarping_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_MotionWarping_AddRootMotionModifier final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	const class UAnimSequenceBase*                Animation;
	float                                         StartTime;
	float                                         EndTime;
	class URootMotionModifier*                    ReturnValue;
};
static_assert(alignof(AnimNotifyState_MotionWarping_AddRootMotionModifier) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_AddRootMotionModifier");
static_assert(sizeof(AnimNotifyState_MotionWarping_AddRootMotionModifier) == 0x000020, "Wrong size on AnimNotifyState_MotionWarping_AddRootMotionModifier");
static_assert(offsetof(AnimNotifyState_MotionWarping_AddRootMotionModifier, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_AddRootMotionModifier::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_AddRootMotionModifier, Animation) == 0x000008, "Member 'AnimNotifyState_MotionWarping_AddRootMotionModifier::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_AddRootMotionModifier, StartTime) == 0x000010, "Member 'AnimNotifyState_MotionWarping_AddRootMotionModifier::StartTime' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_AddRootMotionModifier, EndTime) == 0x000014, "Member 'AnimNotifyState_MotionWarping_AddRootMotionModifier::EndTime' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_AddRootMotionModifier, ReturnValue) == 0x000018, "Member 'AnimNotifyState_MotionWarping_AddRootMotionModifier::ReturnValue' has a wrong offset!");

struct AnimNotifyState_MotionWarping_OnRootMotionModifierActivate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	class URootMotionModifier*                    Modifier;
};
static_assert(alignof(AnimNotifyState_MotionWarping_OnRootMotionModifierActivate) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_OnRootMotionModifierActivate");
static_assert(sizeof(AnimNotifyState_MotionWarping_OnRootMotionModifierActivate) == 0x000010, "Wrong size on AnimNotifyState_MotionWarping_OnRootMotionModifierActivate");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnRootMotionModifierActivate, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_OnRootMotionModifierActivate::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnRootMotionModifierActivate, Modifier) == 0x000008, "Member 'AnimNotifyState_MotionWarping_OnRootMotionModifierActivate::Modifier' has a wrong offset!");

struct AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	class URootMotionModifier*                    Modifier;
};
static_assert(alignof(AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate");
static_assert(sizeof(AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate) == 0x000010, "Wrong size on AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate, Modifier) == 0x000008, "Member 'AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate::Modifier' has a wrong offset!");

struct AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	class URootMotionModifier*                    Modifier;
};
static_assert(alignof(AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate");
static_assert(sizeof(AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate) == 0x000010, "Wrong size on AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate, Modifier) == 0x000008, "Member 'AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate::Modifier' has a wrong offset!");

struct AnimNotifyState_MotionWarping_OnWarpBegin final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	class URootMotionModifier*                    Modifier;
};
static_assert(alignof(AnimNotifyState_MotionWarping_OnWarpBegin) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_OnWarpBegin");
static_assert(sizeof(AnimNotifyState_MotionWarping_OnWarpBegin) == 0x000010, "Wrong size on AnimNotifyState_MotionWarping_OnWarpBegin");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnWarpBegin, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_OnWarpBegin::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnWarpBegin, Modifier) == 0x000008, "Member 'AnimNotifyState_MotionWarping_OnWarpBegin::Modifier' has a wrong offset!");

struct AnimNotifyState_MotionWarping_OnWarpEnd final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	class URootMotionModifier*                    Modifier;
};
static_assert(alignof(AnimNotifyState_MotionWarping_OnWarpEnd) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_OnWarpEnd");
static_assert(sizeof(AnimNotifyState_MotionWarping_OnWarpEnd) == 0x000010, "Wrong size on AnimNotifyState_MotionWarping_OnWarpEnd");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnWarpEnd, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_OnWarpEnd::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnWarpEnd, Modifier) == 0x000008, "Member 'AnimNotifyState_MotionWarping_OnWarpEnd::Modifier' has a wrong offset!");

struct AnimNotifyState_MotionWarping_OnWarpUpdate final
{
public:
	class UMotionWarpingComponent*                MotionWarpingComp;
	class URootMotionModifier*                    Modifier;
};
static_assert(alignof(AnimNotifyState_MotionWarping_OnWarpUpdate) == 0x000008, "Wrong alignment on AnimNotifyState_MotionWarping_OnWarpUpdate");
static_assert(sizeof(AnimNotifyState_MotionWarping_OnWarpUpdate) == 0x000010, "Wrong size on AnimNotifyState_MotionWarping_OnWarpUpdate");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnWarpUpdate, MotionWarpingComp) == 0x000000, "Member 'AnimNotifyState_MotionWarping_OnWarpUpdate::MotionWarpingComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_MotionWarping_OnWarpUpdate, Modifier) == 0x000008, "Member 'AnimNotifyState_MotionWarping_OnWarpUpdate::Modifier' has a wrong offset!");

struct MotionWarpingUtilities_ExtractRootMotionFromAnimation final
{
public:
	const class UAnimSequenceBase*                Animation;
	float                                         StartTime;
	float                                         EndTime;
	struct FTransform                             ReturnValue;
};
static_assert(alignof(MotionWarpingUtilities_ExtractRootMotionFromAnimation) == 0x000010, "Wrong alignment on MotionWarpingUtilities_ExtractRootMotionFromAnimation");
static_assert(sizeof(MotionWarpingUtilities_ExtractRootMotionFromAnimation) == 0x000070, "Wrong size on MotionWarpingUtilities_ExtractRootMotionFromAnimation");
static_assert(offsetof(MotionWarpingUtilities_ExtractRootMotionFromAnimation, Animation) == 0x000000, "Member 'MotionWarpingUtilities_ExtractRootMotionFromAnimation::Animation' has a wrong offset!");
static_assert(offsetof(MotionWarpingUtilities_ExtractRootMotionFromAnimation, StartTime) == 0x000008, "Member 'MotionWarpingUtilities_ExtractRootMotionFromAnimation::StartTime' has a wrong offset!");
static_assert(offsetof(MotionWarpingUtilities_ExtractRootMotionFromAnimation, EndTime) == 0x00000C, "Member 'MotionWarpingUtilities_ExtractRootMotionFromAnimation::EndTime' has a wrong offset!");
static_assert(offsetof(MotionWarpingUtilities_ExtractRootMotionFromAnimation, ReturnValue) == 0x000010, "Member 'MotionWarpingUtilities_ExtractRootMotionFromAnimation::ReturnValue' has a wrong offset!");

struct MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation final
{
public:
	const class UAnimSequenceBase*                Animation;
	class FName                                   WarpTargetName;
	uint8                                         Pad_C[0x4];
	TArray<struct FMotionWarpingWindowData>       OutWindows;
};
static_assert(alignof(MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation) == 0x000008, "Wrong alignment on MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation");
static_assert(sizeof(MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation) == 0x000020, "Wrong size on MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation");
static_assert(offsetof(MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation, Animation) == 0x000000, "Member 'MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation::Animation' has a wrong offset!");
static_assert(offsetof(MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation, WarpTargetName) == 0x000008, "Member 'MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation::WarpTargetName' has a wrong offset!");
static_assert(offsetof(MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation, OutWindows) == 0x000010, "Member 'MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation::OutWindows' has a wrong offset!");

struct MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation final
{
public:
	const class UAnimSequenceBase*                Animation;
	TArray<struct FMotionWarpingWindowData>       OutWindows;
};
static_assert(alignof(MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation) == 0x000008, "Wrong alignment on MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation");
static_assert(sizeof(MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation) == 0x000018, "Wrong size on MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation");
static_assert(offsetof(MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation, Animation) == 0x000000, "Member 'MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation::Animation' has a wrong offset!");
static_assert(offsetof(MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation, OutWindows) == 0x000008, "Member 'MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation::OutWindows' has a wrong offset!");

struct MotionWarpingComponent_AddOrUpdateWarpTarget final
{
public:
	struct FMotionWarpingTarget                   WarpTarget;
};
static_assert(alignof(MotionWarpingComponent_AddOrUpdateWarpTarget) == 0x000008, "Wrong alignment on MotionWarpingComponent_AddOrUpdateWarpTarget");
static_assert(sizeof(MotionWarpingComponent_AddOrUpdateWarpTarget) == 0x000048, "Wrong size on MotionWarpingComponent_AddOrUpdateWarpTarget");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTarget, WarpTarget) == 0x000000, "Member 'MotionWarpingComponent_AddOrUpdateWarpTarget::WarpTarget' has a wrong offset!");

struct MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent final
{
public:
	class FName                                   WarpTargetName;
	uint8                                         Pad_4[0x4];
	const class USceneComponent*                  Component;
	class FName                                   BoneName;
	bool                                          bFollowComponent;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent) == 0x000008, "Wrong alignment on MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent");
static_assert(sizeof(MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent) == 0x000018, "Wrong size on MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent, WarpTargetName) == 0x000000, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent::WarpTargetName' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent, Component) == 0x000008, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent::Component' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent, BoneName) == 0x000010, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent::BoneName' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent, bFollowComponent) == 0x000014, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent::bFollowComponent' has a wrong offset!");

struct MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation final
{
public:
	class FName                                   WarpTargetName;
	uint8                                         Pad_4[0x4];
	struct FVector                                TargetLocation;
};
static_assert(alignof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation) == 0x000008, "Wrong alignment on MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation");
static_assert(sizeof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation) == 0x000020, "Wrong size on MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation, WarpTargetName) == 0x000000, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation::WarpTargetName' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation, TargetLocation) == 0x000008, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation::TargetLocation' has a wrong offset!");

struct MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation final
{
public:
	class FName                                   WarpTargetName;
	uint8                                         Pad_4[0x4];
	struct FVector                                TargetLocation;
	struct FRotator                               TargetRotation;
};
static_assert(alignof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation) == 0x000008, "Wrong alignment on MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation");
static_assert(sizeof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation) == 0x000038, "Wrong size on MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation, WarpTargetName) == 0x000000, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation::WarpTargetName' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation, TargetLocation) == 0x000008, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation::TargetLocation' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation, TargetRotation) == 0x000020, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation::TargetRotation' has a wrong offset!");

struct MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform final
{
public:
	class FName                                   WarpTargetName;
	uint8                                         Pad_4[0xC];
	struct FTransform                             TargetTransform;
};
static_assert(alignof(MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform) == 0x000010, "Wrong alignment on MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform");
static_assert(sizeof(MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform) == 0x000070, "Wrong size on MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform, WarpTargetName) == 0x000000, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform::WarpTargetName' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform, TargetTransform) == 0x000010, "Member 'MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform::TargetTransform' has a wrong offset!");

struct MotionWarpingComponent_RemoveWarpTarget final
{
public:
	class FName                                   WarpTargetName;
	int32                                         ReturnValue;
};
static_assert(alignof(MotionWarpingComponent_RemoveWarpTarget) == 0x000004, "Wrong alignment on MotionWarpingComponent_RemoveWarpTarget");
static_assert(sizeof(MotionWarpingComponent_RemoveWarpTarget) == 0x000008, "Wrong size on MotionWarpingComponent_RemoveWarpTarget");
static_assert(offsetof(MotionWarpingComponent_RemoveWarpTarget, WarpTargetName) == 0x000000, "Member 'MotionWarpingComponent_RemoveWarpTarget::WarpTargetName' has a wrong offset!");
static_assert(offsetof(MotionWarpingComponent_RemoveWarpTarget, ReturnValue) == 0x000004, "Member 'MotionWarpingComponent_RemoveWarpTarget::ReturnValue' has a wrong offset!");

struct RootMotionModifier_Scale_AddRootMotionModifierScale final
{
public:
	class UMotionWarpingComponent*                InMotionWarpingComp;
	const class UAnimSequenceBase*                InAnimation;
	float                                         InStartTime;
	float                                         InEndTime;
	struct FVector                                InScale;
	class URootMotionModifier_Scale*              ReturnValue;
};
static_assert(alignof(RootMotionModifier_Scale_AddRootMotionModifierScale) == 0x000008, "Wrong alignment on RootMotionModifier_Scale_AddRootMotionModifierScale");
static_assert(sizeof(RootMotionModifier_Scale_AddRootMotionModifierScale) == 0x000038, "Wrong size on RootMotionModifier_Scale_AddRootMotionModifierScale");
static_assert(offsetof(RootMotionModifier_Scale_AddRootMotionModifierScale, InMotionWarpingComp) == 0x000000, "Member 'RootMotionModifier_Scale_AddRootMotionModifierScale::InMotionWarpingComp' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_Scale_AddRootMotionModifierScale, InAnimation) == 0x000008, "Member 'RootMotionModifier_Scale_AddRootMotionModifierScale::InAnimation' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_Scale_AddRootMotionModifierScale, InStartTime) == 0x000010, "Member 'RootMotionModifier_Scale_AddRootMotionModifierScale::InStartTime' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_Scale_AddRootMotionModifierScale, InEndTime) == 0x000014, "Member 'RootMotionModifier_Scale_AddRootMotionModifierScale::InEndTime' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_Scale_AddRootMotionModifierScale, InScale) == 0x000018, "Member 'RootMotionModifier_Scale_AddRootMotionModifierScale::InScale' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_Scale_AddRootMotionModifierScale, ReturnValue) == 0x000030, "Member 'RootMotionModifier_Scale_AddRootMotionModifierScale::ReturnValue' has a wrong offset!");

struct RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp final
{
public:
	class UMotionWarpingComponent*                InMotionWarpingComp;
	const class UAnimSequenceBase*                InAnimation;
	float                                         InStartTime;
	float                                         InEndTime;
	class FName                                   InWarpTargetName;
	EWarpPointAnimProvider                        InWarpPointAnimProvider;
	uint8                                         Pad_1D[0x3];
	struct FTransform                             InWarpPointAnimTransform;
	class FName                                   InWarpPointAnimBoneName;
	bool                                          bInWarpTranslation;
	bool                                          bInIgnoreZAxis;
	bool                                          bInWarpRotation;
	EMotionWarpRotationType                       InRotationType;
	float                                         InWarpRotationTimeMultiplier;
	uint8                                         Pad_8C[0x4];
	class URootMotionModifier_SkewWarp*           ReturnValue;
	uint8                                         Pad_98[0x8];
};
static_assert(alignof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp) == 0x000010, "Wrong alignment on RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp");
static_assert(sizeof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp) == 0x0000A0, "Wrong size on RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InMotionWarpingComp) == 0x000000, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InMotionWarpingComp' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InAnimation) == 0x000008, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InAnimation' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InStartTime) == 0x000010, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InStartTime' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InEndTime) == 0x000014, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InEndTime' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InWarpTargetName) == 0x000018, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InWarpTargetName' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InWarpPointAnimProvider) == 0x00001C, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InWarpPointAnimProvider' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InWarpPointAnimTransform) == 0x000020, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InWarpPointAnimTransform' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InWarpPointAnimBoneName) == 0x000080, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InWarpPointAnimBoneName' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, bInWarpTranslation) == 0x000084, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::bInWarpTranslation' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, bInIgnoreZAxis) == 0x000085, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::bInIgnoreZAxis' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, bInWarpRotation) == 0x000086, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::bInWarpRotation' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InRotationType) == 0x000087, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InRotationType' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, InWarpRotationTimeMultiplier) == 0x000088, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::InWarpRotationTimeMultiplier' has a wrong offset!");
static_assert(offsetof(RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, ReturnValue) == 0x000090, "Member 'RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp::ReturnValue' has a wrong offset!");

}
