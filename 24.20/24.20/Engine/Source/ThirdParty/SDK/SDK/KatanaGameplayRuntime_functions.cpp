#pragma once

#include "Basic.hpp"

#include "KatanaGameplayRuntime_classes.hpp"
#include "KatanaGameplayRuntime_parameters.hpp"

namespace SDK
{

bool UKatanaTargetingComponent::PerformDashTargeting(struct FFortKatanaDashTargetingInfo* OutDashTargetingInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KatanaTargetingComponent", "PerformDashTargeting");

	Params::KatanaTargetingComponent_PerformDashTargeting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDashTargetingInfo != nullptr)
		*OutDashTargetingInfo = std::move(Parms.OutDashTargetingInfo);

	return Parms.ReturnValue;
}

struct FVector UKatanaTargetingComponent::PerformPrimaryAttackTargeting(const EFortKatanaPrimaryAttackVariation AttackVariation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KatanaTargetingComponent", "PerformPrimaryAttackTargeting");

	Params::KatanaTargetingComponent_PerformPrimaryAttackTargeting Parms{};

	Parms.AttackVariation = AttackVariation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAbilityTask_ApplyRootMotion_KatanaDashForce* UAbilityTask_ApplyRootMotion_KatanaDashForce::ApplyRootMotion_KatanaDashForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InTargetLocation, float InDuration, float InHeightAboveGround, bool bInSetNewMovementMode, EMovementMode InMovementMode, bool bInRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AbilityTask_ApplyRootMotion_KatanaDashForce", "ApplyRootMotion_KatanaDashForce");

	Params::AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce Parms{};

	Parms.InOwningAbility = InOwningAbility;
	Parms.InTaskInstanceName = InTaskInstanceName;
	Parms.InTargetLocation = std::move(InTargetLocation);
	Parms.InDuration = InDuration;
	Parms.InHeightAboveGround = InHeightAboveGround;
	Parms.bInSetNewMovementMode = bInSetNewMovementMode;
	Parms.InMovementMode = InMovementMode;
	Parms.bInRestrictSpeedToExpected = bInRestrictSpeedToExpected;
	Parms.InPathOffsetCurve = InPathOffsetCurve;
	Parms.InVelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.InSetVelocityOnFinish = std::move(InSetVelocityOnFinish);
	Parms.InClampVelocityOnFinish = InClampVelocityOnFinish;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
