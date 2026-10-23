#pragma once

#include "Basic.hpp"

#include "IrwinRuntime_classes.hpp"
#include "IrwinRuntime_parameters.hpp"

namespace SDK
{

void UFortAIFaunaAnimInstance::CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "CalculateLookAtAlpha");

	Params::FortAIFaunaAnimInstance_CalculateLookAtAlpha Parms{};

	Parms.bForceDisableLookAt = bForceDisableLookAt;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::FinishFootPhaseStopUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "FinishFootPhaseStopUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateBackwardsPlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBackwardsPlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateBackwardVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBackwardVelocity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateBodyRoll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBodyRoll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateBoostPlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateBoostPlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateFootPhaseStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateFootPhaseStop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdatePlayLandAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdatePlayLandAdditive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateRidingMovePlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateRidingMovePlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateSwimmingYaw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateSwimmingYaw");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance::UpdateTurnAngleStored()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance", "UpdateTurnAngleStored");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateBlinkAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateBlinkAlpha");

	Params::FortAIFaunaAnimInstance_Grandma_CalculateBlinkAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateLocomotionPoseAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateLocomotionPoseAlpha");

	Params::FortAIFaunaAnimInstance_Grandma_CalculateLocomotionPoseAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateMeshScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateMeshScale");

	Params::FortAIFaunaAnimInstance_Grandma_CalculateMeshScale Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateWalkRunPlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "CalculateWalkRunPlayRate");

	Params::FortAIFaunaAnimInstance_Grandma_CalculateWalkRunPlayRate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableAlertAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineEnableAlertAdditive");

	Params::FortAIFaunaAnimInstance_Grandma_DetermineEnableAlertAdditive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableSniffAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineEnableSniffAdditive");

	Params::FortAIFaunaAnimInstance_Grandma_DetermineEnableSniffAdditive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineIdleStartTurn");

	Params::FortAIFaunaAnimInstance_Grandma_DetermineIdleStartTurn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineShouldPlayFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "DetermineShouldPlayFullBodyInPlace");

	Params::FortAIFaunaAnimInstance_Grandma_DetermineShouldPlayFullBodyInPlace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateBlinkAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateBlinkAlpha");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableAlertAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateEnableAlertAdditive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableSniffAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateEnableSniffAdditive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateIdleStartTurn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateLocomotionPoseAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateLocomotionPoseAlpha");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateMeshScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateMeshScale");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateMovingRates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateMovingRates");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateShouldPlayFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateShouldPlayFullBodyInPlace");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateStateVariables(const bool bAccelerating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Grandma", "UpdateStateVariables");

	Params::FortAIFaunaAnimInstance_Grandma_UpdateStateVariables Parms{};

	Parms.bAccelerating = bAccelerating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UFortAIFaunaAnimInstance_Robert::CalculateLocomotionPoseAdditiveAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "CalculateLocomotionPoseAdditiveAlpha");

	Params::FortAIFaunaAnimInstance_Robert_CalculateLocomotionPoseAdditiveAlpha Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Robert::DetermineEnableHeadTiltDownAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineEnableHeadTiltDownAdditive");

	Params::FortAIFaunaAnimInstance_Robert_DetermineEnableHeadTiltDownAdditive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Robert::DetermineIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineIdleStartTurn");

	Params::FortAIFaunaAnimInstance_Robert_DetermineIdleStartTurn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAIFaunaAnimInstance_Robert::DetermineIsFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "DetermineIsFullBodyInPlace");

	Params::FortAIFaunaAnimInstance_Robert_DetermineIsFullBodyInPlace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAIFaunaAnimInstance_Robert::UpdateEnableHeadTiltDownAdditive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateEnableHeadTiltDownAdditive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Robert::UpdateIdleStartTurn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateIdleStartTurn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Robert::UpdateIsFullBodyInPlace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateIsFullBodyInPlace");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Robert::UpdateLocomotionPoseAdditiveAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateLocomotionPoseAdditiveAlpha");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAIFaunaAnimInstance_Robert::UpdateStateVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAIFaunaAnimInstance_Robert", "UpdateStateVariables");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
