#pragma once

#include "Basic.hpp"

#include "MotionWarping_classes.hpp"
#include "MotionWarping_parameters.hpp"

namespace SDK
{

class URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, const class UAnimSequenceBase* Animation, float StartTime, float EndTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "AddRootMotionModifier");

	Params::AnimNotifyState_MotionWarping_AddRootMotionModifier Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Animation = Animation;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierActivate");

	Params::AnimNotifyState_MotionWarping_OnRootMotionModifierActivate Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Modifier = Modifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierDeactivate");

	Params::AnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Modifier = Modifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierUpdate");

	Params::AnimNotifyState_MotionWarping_OnRootMotionModifierUpdate Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Modifier = Modifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAnimNotifyState_MotionWarping::OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpBegin");

	Params::AnimNotifyState_MotionWarping_OnWarpBegin Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpEnd");

	Params::AnimNotifyState_MotionWarping_OnWarpEnd Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);
}

void UAnimNotifyState_MotionWarping::OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpUpdate");

	Params::AnimNotifyState_MotionWarping_OnWarpUpdate Parms{};

	Parms.MotionWarpingComp = MotionWarpingComp;
	Parms.Modifier = Modifier;

	UObject::ProcessEvent(Func, &Parms);
}

struct FTransform UMotionWarpingUtilities::ExtractRootMotionFromAnimation(const class UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionWarpingUtilities", "ExtractRootMotionFromAnimation");

	Params::MotionWarpingUtilities_ExtractRootMotionFromAnimation Parms{};

	Parms.Animation = Animation;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(const class UAnimSequenceBase* Animation, class FName WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionWarpingUtilities", "GetMotionWarpingWindowsForWarpTargetFromAnimation");

	Params::MotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation Parms{};

	Parms.Animation = Animation;
	Parms.WarpTargetName = WarpTargetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutWindows != nullptr)
		*OutWindows = std::move(Parms.OutWindows);
}

void UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(const class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionWarpingUtilities", "GetMotionWarpingWindowsFromAnimation");

	Params::MotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutWindows != nullptr)
		*OutWindows = std::move(Parms.OutWindows);
}

void UMotionWarpingComponent::AddOrUpdateWarpTarget(const struct FMotionWarpingTarget& WarpTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTarget");

	Params::MotionWarpingComponent_AddOrUpdateWarpTarget Parms{};

	Parms.WarpTarget = std::move(WarpTarget);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, const class USceneComponent* Component, class FName BoneName, bool bFollowComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromComponent");

	Params::MotionWarpingComponent_AddOrUpdateWarpTargetFromComponent Parms{};

	Parms.WarpTargetName = WarpTargetName;
	Parms.Component = Component;
	Parms.BoneName = BoneName;
	Parms.bFollowComponent = bFollowComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromLocation");

	Params::MotionWarpingComponent_AddOrUpdateWarpTargetFromLocation Parms{};

	Parms.WarpTargetName = WarpTargetName;
	Parms.TargetLocation = std::move(TargetLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromLocationAndRotation");

	Params::MotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation Parms{};

	Parms.WarpTargetName = WarpTargetName;
	Parms.TargetLocation = std::move(TargetLocation);
	Parms.TargetRotation = std::move(TargetRotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromTransform");

	Params::MotionWarpingComponent_AddOrUpdateWarpTargetFromTransform Parms{};

	Parms.WarpTargetName = WarpTargetName;
	Parms.TargetTransform = std::move(TargetTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMotionWarpingComponent::DisableAllRootMotionModifiers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "DisableAllRootMotionModifiers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UMotionWarpingComponent::RemoveWarpTarget(class FName WarpTargetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionWarpingComponent", "RemoveWarpTarget");

	Params::MotionWarpingComponent_RemoveWarpTarget Parms{};

	Parms.WarpTargetName = WarpTargetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URootMotionModifier_Scale* URootMotionModifier_Scale::AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RootMotionModifier_Scale", "AddRootMotionModifierScale");

	Params::RootMotionModifier_Scale_AddRootMotionModifierScale Parms{};

	Parms.InMotionWarpingComp = InMotionWarpingComp;
	Parms.InAnimation = InAnimation;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.InScale = std::move(InScale);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class URootMotionModifier_SkewWarp* URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, class FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, class FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RootMotionModifier_SkewWarp", "AddRootMotionModifierSkewWarp");

	Params::RootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp Parms{};

	Parms.InMotionWarpingComp = InMotionWarpingComp;
	Parms.InAnimation = InAnimation;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.InWarpTargetName = InWarpTargetName;
	Parms.InWarpPointAnimProvider = InWarpPointAnimProvider;
	Parms.InWarpPointAnimTransform = std::move(InWarpPointAnimTransform);
	Parms.InWarpPointAnimBoneName = InWarpPointAnimBoneName;
	Parms.bInWarpTranslation = bInWarpTranslation;
	Parms.bInIgnoreZAxis = bInIgnoreZAxis;
	Parms.bInWarpRotation = bInWarpRotation;
	Parms.InRotationType = InRotationType;
	Parms.InWarpRotationTimeMultiplier = InWarpRotationTimeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
