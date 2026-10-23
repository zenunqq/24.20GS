#pragma once

#include "Basic.hpp"

#include "MotionTrajectory_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x08) UMotionTrajectoryComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x1A0];
	struct FMotionTrajectorySettings              PredictionSettings;
	struct FMotionTrajectorySettings              HistorySettings;
	int32                                         SampleRate;
	int32                                         MaxSamples;
	bool                                          bPredictionIncludesHistory;
	bool                                          bUniformSampledHistory;
	bool                                          bSmoothInterpolation;
	uint8                                         Pad_263[0x5];

public:
	void SetSampleRate(int32 Rate);

	struct FTrajectorySampleRange GetHistory() const;
	struct FTrajectorySampleRange GetTrajectory() const;
	struct FTrajectorySampleRange GetTrajectoryWithSettings(const struct FMotionTrajectorySettings& Settings, bool bIncludeHistory) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrajectoryComponent">();
	}
	static class UMotionTrajectoryComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrajectoryComponent>();
	}
};
#pragma pack(pop)
static_assert(alignof(UMotionTrajectoryComponent) == 0x000008, "Wrong alignment on UMotionTrajectoryComponent");
static_assert(sizeof(UMotionTrajectoryComponent) == 0x000268, "Wrong size on UMotionTrajectoryComponent");
static_assert(offsetof(UMotionTrajectoryComponent, PredictionSettings) == 0x000240, "Member 'UMotionTrajectoryComponent::PredictionSettings' has a wrong offset!");
static_assert(offsetof(UMotionTrajectoryComponent, HistorySettings) == 0x00024C, "Member 'UMotionTrajectoryComponent::HistorySettings' has a wrong offset!");
static_assert(offsetof(UMotionTrajectoryComponent, SampleRate) == 0x000258, "Member 'UMotionTrajectoryComponent::SampleRate' has a wrong offset!");
static_assert(offsetof(UMotionTrajectoryComponent, MaxSamples) == 0x00025C, "Member 'UMotionTrajectoryComponent::MaxSamples' has a wrong offset!");
static_assert(offsetof(UMotionTrajectoryComponent, bPredictionIncludesHistory) == 0x000260, "Member 'UMotionTrajectoryComponent::bPredictionIncludesHistory' has a wrong offset!");
static_assert(offsetof(UMotionTrajectoryComponent, bUniformSampledHistory) == 0x000261, "Member 'UMotionTrajectoryComponent::bUniformSampledHistory' has a wrong offset!");
static_assert(offsetof(UMotionTrajectoryComponent, bSmoothInterpolation) == 0x000262, "Member 'UMotionTrajectoryComponent::bSmoothInterpolation' has a wrong offset!");

class alignas(0x10) UCharacterMovementTrajectoryComponent final : public UMotionTrajectoryComponent
{
public:
	struct FRotator                               LastDesiredControlRotation;
	struct FRotator                               DesiredControlRotationVelocity;
	uint8                                         Pad_298[0x8];

public:
	void OnMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharacterMovementTrajectoryComponent">();
	}
	static class UCharacterMovementTrajectoryComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterMovementTrajectoryComponent>();
	}
};
static_assert(alignof(UCharacterMovementTrajectoryComponent) == 0x000010, "Wrong alignment on UCharacterMovementTrajectoryComponent");
static_assert(sizeof(UCharacterMovementTrajectoryComponent) == 0x0002A0, "Wrong size on UCharacterMovementTrajectoryComponent");
static_assert(offsetof(UCharacterMovementTrajectoryComponent, LastDesiredControlRotation) == 0x000268, "Member 'UCharacterMovementTrajectoryComponent::LastDesiredControlRotation' has a wrong offset!");
static_assert(offsetof(UCharacterMovementTrajectoryComponent, DesiredControlRotationVelocity) == 0x000280, "Member 'UCharacterMovementTrajectoryComponent::DesiredControlRotationVelocity' has a wrong offset!");

class UMotionTrajectoryBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FTrajectorySampleRange ClampTrajectoryDirection(const struct FTrajectorySampleRange& Trajectory, const TArray<struct FTrajectoryDirectionClamp>& Directions, bool bPreserveRotation);
	static void DebugDrawTrajectory(const class AActor* Actor, const struct FTransform& WorldTransform, const struct FTrajectorySampleRange& Trajectory, const struct FLinearColor& PredictionColor, const struct FLinearColor& HistoryColor, float TransformScale, float TransformThickness, float ArrowScale, float ArrowSize, float ArrowThickness);
	static struct FTrajectorySampleRange FlattenTrajectory2D(const struct FTrajectorySampleRange& Trajectory, bool PreserveSpeed);
	static bool IsConstantSpeedTrajectory(const struct FTrajectorySampleRange& Trajectory, float Speed, float Tolerance);
	static bool IsSharpVelocityDirChange(const struct FTrajectorySampleRange& Trajectory, float MinSharpTurnAngleDegrees, ETrajectorySampleDomain RotationConstraintDomain, float RotationConstraintValue, float MaxAlignmentAngleDegrees, float MinLinearSpeed, const struct FVector& TurnAxis, const struct FVector& ForwardAxis);
	static bool IsStartingTrajectory(const struct FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed);
	static bool IsStoppingTrajectory(const struct FTrajectorySampleRange& Trajectory, float MoveMinSpeed, float IdleMaxSpeed);
	static struct FTrajectorySampleRange MakeTrajectoryRelativeToComponent(const struct FTrajectorySampleRange& ActorTrajectory, const class USceneComponent* Component);
	static struct FTrajectorySampleRange RotateTrajectory(const struct FTrajectorySampleRange& Trajectory, const struct FQuat& Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotionTrajectoryBlueprintLibrary">();
	}
	static class UMotionTrajectoryBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotionTrajectoryBlueprintLibrary>();
	}
};
static_assert(alignof(UMotionTrajectoryBlueprintLibrary) == 0x000008, "Wrong alignment on UMotionTrajectoryBlueprintLibrary");
static_assert(sizeof(UMotionTrajectoryBlueprintLibrary) == 0x000028, "Wrong size on UMotionTrajectoryBlueprintLibrary");

}
