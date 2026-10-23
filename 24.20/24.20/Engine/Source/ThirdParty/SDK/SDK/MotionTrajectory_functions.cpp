#pragma once

#include "Basic.hpp"

#include "MotionTrajectory_classes.hpp"
#include "MotionTrajectory_parameters.hpp"

namespace SDK
{

void UMotionTrajectoryComponent::SetSampleRate(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionTrajectoryComponent", "SetSampleRate");

	Params::MotionTrajectoryComponent_SetSampleRate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTrajectorySampleRange UMotionTrajectoryComponent::GetHistory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionTrajectoryComponent", "GetHistory");

	Params::MotionTrajectoryComponent_GetHistory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTrajectorySampleRange UMotionTrajectoryComponent::GetTrajectory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionTrajectoryComponent", "GetTrajectory");

	Params::MotionTrajectoryComponent_GetTrajectory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTrajectorySampleRange UMotionTrajectoryComponent::GetTrajectoryWithSettings(const struct FMotionTrajectorySettings& Settings, bool bIncludeHistory) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionTrajectoryComponent", "GetTrajectoryWithSettings");

	Params::MotionTrajectoryComponent_GetTrajectoryWithSettings Parms{};

	Parms.Settings = std::move(Settings);
	Parms.bIncludeHistory = bIncludeHistory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCharacterMovementTrajectoryComponent::OnMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterMovementTrajectoryComponent", "OnMovementUpdated");

	Params::CharacterMovementTrajectoryComponent_OnMovementUpdated Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = std::move(OldLocation);
	Parms.OldVelocity = std::move(OldVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::ClampTrajectoryDirection(const struct FTrajectorySampleRange& Trajectory, const TArray<struct FTrajectoryDirectionClamp>& Directions, bool bPreserveRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "ClampTrajectoryDirection");

	Params::MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.Directions = std::move(Directions);
	Parms.bPreserveRotation = bPreserveRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMotionTrajectoryBlueprintLibrary::DebugDrawTrajectory(const class AActor* Actor, const struct FTransform& WorldTransform, const struct FTrajectorySampleRange& Trajectory, const struct FLinearColor& PredictionColor, const struct FLinearColor& HistoryColor, float TransformScale, float TransformThickness, float ArrowScale, float ArrowSize, float ArrowThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "DebugDrawTrajectory");

	Params::MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory Parms{};

	Parms.Actor = Actor;
	Parms.WorldTransform = std::move(WorldTransform);
	Parms.Trajectory = std::move(Trajectory);
	Parms.PredictionColor = std::move(PredictionColor);
	Parms.HistoryColor = std::move(HistoryColor);
	Parms.TransformScale = TransformScale;
	Parms.TransformThickness = TransformThickness;
	Parms.ArrowScale = ArrowScale;
	Parms.ArrowSize = ArrowSize;
	Parms.ArrowThickness = ArrowThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::FlattenTrajectory2D(const struct FTrajectorySampleRange& Trajectory, bool PreserveSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "FlattenTrajectory2D");

	Params::MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.PreserveSpeed = PreserveSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrajectoryBlueprintLibrary::IsConstantSpeedTrajectory(const struct FTrajectorySampleRange& Trajectory, float Speed, float Tolerance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "IsConstantSpeedTrajectory");

	Params::MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.Speed = Speed;
	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrajectoryBlueprintLibrary::IsSharpVelocityDirChange(const struct FTrajectorySampleRange& Trajectory, float MinSharpTurnAngleDegrees, ETrajectorySampleDomain RotationConstraintDomain, float RotationConstraintValue, float MaxAlignmentAngleDegrees, float MinLinearSpeed, const struct FVector& TurnAxis, const struct FVector& ForwardAxis)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "IsSharpVelocityDirChange");

	Params::MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.MinSharpTurnAngleDegrees = MinSharpTurnAngleDegrees;
	Parms.RotationConstraintDomain = RotationConstraintDomain;
	Parms.RotationConstraintValue = RotationConstraintValue;
	Parms.MaxAlignmentAngleDegrees = MaxAlignmentAngleDegrees;
	Parms.MinLinearSpeed = MinLinearSpeed;
	Parms.TurnAxis = std::move(TurnAxis);
	Parms.ForwardAxis = std::move(ForwardAxis);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrajectoryBlueprintLibrary::IsStartingTrajectory(const struct FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "IsStartingTrajectory");

	Params::MotionTrajectoryBlueprintLibrary_IsStartingTrajectory Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.MoveMinSpeed = MoveMinSpeed;
	Parms.IdleMaxSpeed = IdleMaxSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMotionTrajectoryBlueprintLibrary::IsStoppingTrajectory(const struct FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "IsStoppingTrajectory");

	Params::MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.MoveMinSpeed = MoveMinSpeed;
	Parms.IdleMaxSpeed = IdleMaxSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::MakeTrajectoryRelativeToComponent(const struct FTrajectorySampleRange& ActorTrajectory, const class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "MakeTrajectoryRelativeToComponent");

	Params::MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent Parms{};

	Parms.ActorTrajectory = std::move(ActorTrajectory);
	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTrajectorySampleRange UMotionTrajectoryBlueprintLibrary::RotateTrajectory(const struct FTrajectorySampleRange& Trajectory, const struct FQuat& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MotionTrajectoryBlueprintLibrary", "RotateTrajectory");

	Params::MotionTrajectoryBlueprintLibrary_RotateTrajectory Parms{};

	Parms.Trajectory = std::move(Trajectory);
	Parms.Rotation = std::move(Rotation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
