#pragma once

#include "Basic.hpp"

#include "MotionTrajectory_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct MotionTrajectoryComponent_SetSampleRate final
{
public:
	int32                                         Rate;
};
static_assert(alignof(MotionTrajectoryComponent_SetSampleRate) == 0x000004, "Wrong alignment on MotionTrajectoryComponent_SetSampleRate");
static_assert(sizeof(MotionTrajectoryComponent_SetSampleRate) == 0x000004, "Wrong size on MotionTrajectoryComponent_SetSampleRate");
static_assert(offsetof(MotionTrajectoryComponent_SetSampleRate, Rate) == 0x000000, "Member 'MotionTrajectoryComponent_SetSampleRate::Rate' has a wrong offset!");

struct MotionTrajectoryComponent_GetHistory final
{
public:
	struct FTrajectorySampleRange                 ReturnValue;
};
static_assert(alignof(MotionTrajectoryComponent_GetHistory) == 0x000008, "Wrong alignment on MotionTrajectoryComponent_GetHistory");
static_assert(sizeof(MotionTrajectoryComponent_GetHistory) == 0x000018, "Wrong size on MotionTrajectoryComponent_GetHistory");
static_assert(offsetof(MotionTrajectoryComponent_GetHistory, ReturnValue) == 0x000000, "Member 'MotionTrajectoryComponent_GetHistory::ReturnValue' has a wrong offset!");

struct MotionTrajectoryComponent_GetTrajectory final
{
public:
	struct FTrajectorySampleRange                 ReturnValue;
};
static_assert(alignof(MotionTrajectoryComponent_GetTrajectory) == 0x000008, "Wrong alignment on MotionTrajectoryComponent_GetTrajectory");
static_assert(sizeof(MotionTrajectoryComponent_GetTrajectory) == 0x000018, "Wrong size on MotionTrajectoryComponent_GetTrajectory");
static_assert(offsetof(MotionTrajectoryComponent_GetTrajectory, ReturnValue) == 0x000000, "Member 'MotionTrajectoryComponent_GetTrajectory::ReturnValue' has a wrong offset!");

struct MotionTrajectoryComponent_GetTrajectoryWithSettings final
{
public:
	struct FMotionTrajectorySettings              Settings;
	bool                                          bIncludeHistory;
	uint8                                         Pad_D[0x3];
	struct FTrajectorySampleRange                 ReturnValue;
};
static_assert(alignof(MotionTrajectoryComponent_GetTrajectoryWithSettings) == 0x000008, "Wrong alignment on MotionTrajectoryComponent_GetTrajectoryWithSettings");
static_assert(sizeof(MotionTrajectoryComponent_GetTrajectoryWithSettings) == 0x000028, "Wrong size on MotionTrajectoryComponent_GetTrajectoryWithSettings");
static_assert(offsetof(MotionTrajectoryComponent_GetTrajectoryWithSettings, Settings) == 0x000000, "Member 'MotionTrajectoryComponent_GetTrajectoryWithSettings::Settings' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryComponent_GetTrajectoryWithSettings, bIncludeHistory) == 0x00000C, "Member 'MotionTrajectoryComponent_GetTrajectoryWithSettings::bIncludeHistory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryComponent_GetTrajectoryWithSettings, ReturnValue) == 0x000010, "Member 'MotionTrajectoryComponent_GetTrajectoryWithSettings::ReturnValue' has a wrong offset!");

struct CharacterMovementTrajectoryComponent_OnMovementUpdated final
{
public:
	float                                         DeltaSeconds;
	uint8                                         Pad_4[0x4];
	struct FVector                                OldLocation;
	struct FVector                                OldVelocity;
};
static_assert(alignof(CharacterMovementTrajectoryComponent_OnMovementUpdated) == 0x000008, "Wrong alignment on CharacterMovementTrajectoryComponent_OnMovementUpdated");
static_assert(sizeof(CharacterMovementTrajectoryComponent_OnMovementUpdated) == 0x000038, "Wrong size on CharacterMovementTrajectoryComponent_OnMovementUpdated");
static_assert(offsetof(CharacterMovementTrajectoryComponent_OnMovementUpdated, DeltaSeconds) == 0x000000, "Member 'CharacterMovementTrajectoryComponent_OnMovementUpdated::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(CharacterMovementTrajectoryComponent_OnMovementUpdated, OldLocation) == 0x000008, "Member 'CharacterMovementTrajectoryComponent_OnMovementUpdated::OldLocation' has a wrong offset!");
static_assert(offsetof(CharacterMovementTrajectoryComponent_OnMovementUpdated, OldVelocity) == 0x000020, "Member 'CharacterMovementTrajectoryComponent_OnMovementUpdated::OldVelocity' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	TArray<struct FTrajectoryDirectionClamp>      Directions;
	bool                                          bPreserveRotation;
	uint8                                         Pad_29[0x7];
	struct FTrajectorySampleRange                 ReturnValue;
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection) == 0x000048, "Wrong size on MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection, Directions) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection::Directions' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection, bPreserveRotation) == 0x000028, "Member 'MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection::bPreserveRotation' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection, ReturnValue) == 0x000030, "Member 'MotionTrajectoryBlueprintLibrary_ClampTrajectoryDirection::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory final
{
public:
	const class AActor*                           Actor;
	uint8                                         Pad_8[0x8];
	struct FTransform                             WorldTransform;
	struct FTrajectorySampleRange                 Trajectory;
	struct FLinearColor                           PredictionColor;
	struct FLinearColor                           HistoryColor;
	float                                         TransformScale;
	float                                         TransformThickness;
	float                                         ArrowScale;
	float                                         ArrowSize;
	float                                         ArrowThickness;
	uint8                                         Pad_BC[0x4];
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory) == 0x000010, "Wrong alignment on MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory) == 0x0000C0, "Wrong size on MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, Actor) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::Actor' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, WorldTransform) == 0x000010, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::WorldTransform' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, Trajectory) == 0x000070, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, PredictionColor) == 0x000088, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::PredictionColor' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, HistoryColor) == 0x000098, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::HistoryColor' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, TransformScale) == 0x0000A8, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::TransformScale' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, TransformThickness) == 0x0000AC, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::TransformThickness' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, ArrowScale) == 0x0000B0, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::ArrowScale' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, ArrowSize) == 0x0000B4, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::ArrowSize' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, ArrowThickness) == 0x0000B8, "Member 'MotionTrajectoryBlueprintLibrary_DebugDrawTrajectory::ArrowThickness' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	bool                                          PreserveSpeed;
	uint8                                         Pad_19[0x7];
	struct FTrajectorySampleRange                 ReturnValue;
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D) == 0x000038, "Wrong size on MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D, PreserveSpeed) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D::PreserveSpeed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D, ReturnValue) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_FlattenTrajectory2D::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	float                                         Speed;
	float                                         Tolerance;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory) == 0x000028, "Wrong size on MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory, Speed) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory::Speed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory, Tolerance) == 0x00001C, "Member 'MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory::Tolerance' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory, ReturnValue) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	float                                         MinSharpTurnAngleDegrees;
	ETrajectorySampleDomain                       RotationConstraintDomain;
	uint8                                         Pad_1D[0x3];
	float                                         RotationConstraintValue;
	float                                         MaxAlignmentAngleDegrees;
	float                                         MinLinearSpeed;
	uint8                                         Pad_2C[0x4];
	struct FVector                                TurnAxis;
	struct FVector                                ForwardAxis;
	bool                                          ReturnValue;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange) == 0x000068, "Wrong size on MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, MinSharpTurnAngleDegrees) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::MinSharpTurnAngleDegrees' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, RotationConstraintDomain) == 0x00001C, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::RotationConstraintDomain' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, RotationConstraintValue) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::RotationConstraintValue' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, MaxAlignmentAngleDegrees) == 0x000024, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::MaxAlignmentAngleDegrees' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, MinLinearSpeed) == 0x000028, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::MinLinearSpeed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, TurnAxis) == 0x000030, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::TurnAxis' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, ForwardAxis) == 0x000048, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::ForwardAxis' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange, ReturnValue) == 0x000060, "Member 'MotionTrajectoryBlueprintLibrary_IsSharpVelocityDirChange::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_IsStartingTrajectory final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	float                                         MoveMinSpeed;
	float                                         IdleMaxSpeed;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_IsStartingTrajectory) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_IsStartingTrajectory");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_IsStartingTrajectory) == 0x000028, "Wrong size on MotionTrajectoryBlueprintLibrary_IsStartingTrajectory");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStartingTrajectory, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_IsStartingTrajectory::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStartingTrajectory, MoveMinSpeed) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_IsStartingTrajectory::MoveMinSpeed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStartingTrajectory, IdleMaxSpeed) == 0x00001C, "Member 'MotionTrajectoryBlueprintLibrary_IsStartingTrajectory::IdleMaxSpeed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStartingTrajectory, ReturnValue) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_IsStartingTrajectory::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	float                                         MoveMinSpeed;
	float                                         IdleMaxSpeed;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory) == 0x000028, "Wrong size on MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory, MoveMinSpeed) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory::MoveMinSpeed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory, IdleMaxSpeed) == 0x00001C, "Member 'MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory::IdleMaxSpeed' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory, ReturnValue) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_IsStoppingTrajectory::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent final
{
public:
	struct FTrajectorySampleRange                 ActorTrajectory;
	const class USceneComponent*                  Component;
	struct FTrajectorySampleRange                 ReturnValue;
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent) == 0x000008, "Wrong alignment on MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent) == 0x000038, "Wrong size on MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent, ActorTrajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent::ActorTrajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent, Component) == 0x000018, "Member 'MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent::Component' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent, ReturnValue) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent::ReturnValue' has a wrong offset!");

struct MotionTrajectoryBlueprintLibrary_RotateTrajectory final
{
public:
	struct FTrajectorySampleRange                 Trajectory;
	uint8                                         Pad_18[0x8];
	struct FQuat                                  Rotation;
	struct FTrajectorySampleRange                 ReturnValue;
	uint8                                         Pad_58[0x8];
};
static_assert(alignof(MotionTrajectoryBlueprintLibrary_RotateTrajectory) == 0x000010, "Wrong alignment on MotionTrajectoryBlueprintLibrary_RotateTrajectory");
static_assert(sizeof(MotionTrajectoryBlueprintLibrary_RotateTrajectory) == 0x000060, "Wrong size on MotionTrajectoryBlueprintLibrary_RotateTrajectory");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_RotateTrajectory, Trajectory) == 0x000000, "Member 'MotionTrajectoryBlueprintLibrary_RotateTrajectory::Trajectory' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_RotateTrajectory, Rotation) == 0x000020, "Member 'MotionTrajectoryBlueprintLibrary_RotateTrajectory::Rotation' has a wrong offset!");
static_assert(offsetof(MotionTrajectoryBlueprintLibrary_RotateTrajectory, ReturnValue) == 0x000040, "Member 'MotionTrajectoryBlueprintLibrary_RotateTrajectory::ReturnValue' has a wrong offset!");

}
