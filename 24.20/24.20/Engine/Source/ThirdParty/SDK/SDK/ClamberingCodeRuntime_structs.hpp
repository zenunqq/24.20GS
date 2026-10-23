#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EClamberingType : uint8
{
	Invalid                                  = 0,
	Ledge                                    = 1,
	Window                                   = 2,
	EClamberingType_MAX                      = 3,
};

enum class EClamberingState : uint8
{
	Inactive                                 = 0,
	Targeting                                = 1,
	Ledge_Moving                             = 2,
	Ledge_Failed                             = 3,
	Window_Moving                            = 4,
	Window_Failed                            = 5,
	EClamberingState_MAX                     = 6,
};

enum class EClamberingFailedReason : uint8
{
	None                                     = 0,
	Unknown                                  = 1,
	DebugForced                              = 2,
	OwnerDied                                = 3,
	OwnerDBNO                                = 4,
	OwnerLaunched                            = 5,
	SynchedActionNotStarted                  = 6,
	OwnerTeleported                          = 7,
	Ledge_PlayerTooFar                       = 8,
	Ledge_TargetLocationInvalid              = 9,
	Ledge_TargetActorInvalid                 = 10,
	Ledge_TargetActorDestroyed               = 11,
	Ledge_BlockerEncountered                 = 12,
	EClamberingFailedReason_MAX              = 13,
};

enum class EClamberingActivationMode : uint8
{
	ClientPreference                         = 0,
	ForceAutoClambering                      = 1,
	ForceManualClambering                    = 2,
	EClamberingActivationMode_MAX            = 3,
};

enum class EClamberingDebugTextAlign : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	Center                                   = 2,
	EClamberingDebugTextAlign_MAX            = 3,
};

struct FClamberingInputConfig final
{
public:
	struct FScalableFloat                         ClamberActivationHorizontalRange;
	struct FScalableFloat                         ClamberActivationVerticalRange;
	struct FScalableFloat                         EnableInputDelay;
	struct FScalableFloat                         QueuedInputWindow;
	struct FScalableFloat                         HeldInputDuration;
	EClamberingActivationMode                     ActivationMode;
	uint8                                         Pad_C9[0x7];
	struct FScalableFloat                         AutoStartMovementThreshold;
	struct FScalableFloat                         AutoStartLookAtThreshold;
	struct FScalableFloat                         AutoStartWallCheckCastRadius;
	struct FScalableFloat                         AutoStartWallCheckHorizontalRange;
	struct FScalableFloat                         AutoStartWallCheckLookAtThresholdMultiplier;
	struct FScalableFloat                         TargetInvalidateDistance;
	struct FScalableFloat                         TargetAimInvalidateAngle;
	struct FScalableFloat                         TargetActorMovementInvalidateDistance;
};
static_assert(alignof(FClamberingInputConfig) == 0x000008, "Wrong alignment on FClamberingInputConfig");
static_assert(sizeof(FClamberingInputConfig) == 0x000210, "Wrong size on FClamberingInputConfig");
static_assert(offsetof(FClamberingInputConfig, ClamberActivationHorizontalRange) == 0x000000, "Member 'FClamberingInputConfig::ClamberActivationHorizontalRange' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, ClamberActivationVerticalRange) == 0x000028, "Member 'FClamberingInputConfig::ClamberActivationVerticalRange' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, EnableInputDelay) == 0x000050, "Member 'FClamberingInputConfig::EnableInputDelay' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, QueuedInputWindow) == 0x000078, "Member 'FClamberingInputConfig::QueuedInputWindow' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, HeldInputDuration) == 0x0000A0, "Member 'FClamberingInputConfig::HeldInputDuration' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, ActivationMode) == 0x0000C8, "Member 'FClamberingInputConfig::ActivationMode' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, AutoStartMovementThreshold) == 0x0000D0, "Member 'FClamberingInputConfig::AutoStartMovementThreshold' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, AutoStartLookAtThreshold) == 0x0000F8, "Member 'FClamberingInputConfig::AutoStartLookAtThreshold' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, AutoStartWallCheckCastRadius) == 0x000120, "Member 'FClamberingInputConfig::AutoStartWallCheckCastRadius' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, AutoStartWallCheckHorizontalRange) == 0x000148, "Member 'FClamberingInputConfig::AutoStartWallCheckHorizontalRange' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, AutoStartWallCheckLookAtThresholdMultiplier) == 0x000170, "Member 'FClamberingInputConfig::AutoStartWallCheckLookAtThresholdMultiplier' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, TargetInvalidateDistance) == 0x000198, "Member 'FClamberingInputConfig::TargetInvalidateDistance' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, TargetAimInvalidateAngle) == 0x0001C0, "Member 'FClamberingInputConfig::TargetAimInvalidateAngle' has a wrong offset!");
static_assert(offsetof(FClamberingInputConfig, TargetActorMovementInvalidateDistance) == 0x0001E8, "Member 'FClamberingInputConfig::TargetActorMovementInvalidateDistance' has a wrong offset!");

struct FClamberingTargetingConfig_Ledge final
{
public:
	struct FScalableFloat                         ForwardCastDistance;
	struct FScalableFloat                         ForwardCastRadius;
	struct FScalableFloat                         FowardCast2D;
	struct FScalableFloat                         VerticalSurfaceThreshold;
	struct FScalableFloat                         HorizontalSurfaceThreshold;
	struct FScalableFloat                         UpwardDistanceCapsuleHeightMultiplier;
	struct FScalableFloat                         UpwardStartDistanceCapsuleHeightMultiplier;
	struct FScalableFloat                         DownwardDistanceCapsuleHeightMultiplier;
	struct FScalableFloat                         MinimumLedgeHeight;
	struct FScalableFloat                         MinimumLedgeHeightWater;
	struct FScalableFloat                         FallingSpeedThreshold;
	struct FScalableFloat                         MinimumLedgeFallingHeight;
	struct FScalableFloat                         MinimumLedgeFallingWaterHeight;
	struct FScalableFloat                         ForwardSphereCastRadius;
	struct FScalableFloat                         DownwardSphereCastRadius;
	struct FScalableFloat                         AllowNonWalkableSurfaces;
	struct FScalableFloat                         TargetValidationEnabled;
	struct FScalableFloat                         TargetValidationCapsuleRadiusModifier;
	struct FScalableFloat                         TargetValidationCapsuleHalfHeightModifier;
	struct FScalableFloat                         TargetValidationCapsuleBottomVerticalOffset;
};
static_assert(alignof(FClamberingTargetingConfig_Ledge) == 0x000008, "Wrong alignment on FClamberingTargetingConfig_Ledge");
static_assert(sizeof(FClamberingTargetingConfig_Ledge) == 0x000320, "Wrong size on FClamberingTargetingConfig_Ledge");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ForwardCastDistance) == 0x000000, "Member 'FClamberingTargetingConfig_Ledge::ForwardCastDistance' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ForwardCastRadius) == 0x000028, "Member 'FClamberingTargetingConfig_Ledge::ForwardCastRadius' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FowardCast2D) == 0x000050, "Member 'FClamberingTargetingConfig_Ledge::FowardCast2D' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, VerticalSurfaceThreshold) == 0x000078, "Member 'FClamberingTargetingConfig_Ledge::VerticalSurfaceThreshold' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, HorizontalSurfaceThreshold) == 0x0000A0, "Member 'FClamberingTargetingConfig_Ledge::HorizontalSurfaceThreshold' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, UpwardDistanceCapsuleHeightMultiplier) == 0x0000C8, "Member 'FClamberingTargetingConfig_Ledge::UpwardDistanceCapsuleHeightMultiplier' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, UpwardStartDistanceCapsuleHeightMultiplier) == 0x0000F0, "Member 'FClamberingTargetingConfig_Ledge::UpwardStartDistanceCapsuleHeightMultiplier' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, DownwardDistanceCapsuleHeightMultiplier) == 0x000118, "Member 'FClamberingTargetingConfig_Ledge::DownwardDistanceCapsuleHeightMultiplier' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeHeight) == 0x000140, "Member 'FClamberingTargetingConfig_Ledge::MinimumLedgeHeight' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeHeightWater) == 0x000168, "Member 'FClamberingTargetingConfig_Ledge::MinimumLedgeHeightWater' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, FallingSpeedThreshold) == 0x000190, "Member 'FClamberingTargetingConfig_Ledge::FallingSpeedThreshold' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeFallingHeight) == 0x0001B8, "Member 'FClamberingTargetingConfig_Ledge::MinimumLedgeFallingHeight' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, MinimumLedgeFallingWaterHeight) == 0x0001E0, "Member 'FClamberingTargetingConfig_Ledge::MinimumLedgeFallingWaterHeight' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, ForwardSphereCastRadius) == 0x000208, "Member 'FClamberingTargetingConfig_Ledge::ForwardSphereCastRadius' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, DownwardSphereCastRadius) == 0x000230, "Member 'FClamberingTargetingConfig_Ledge::DownwardSphereCastRadius' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, AllowNonWalkableSurfaces) == 0x000258, "Member 'FClamberingTargetingConfig_Ledge::AllowNonWalkableSurfaces' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationEnabled) == 0x000280, "Member 'FClamberingTargetingConfig_Ledge::TargetValidationEnabled' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationCapsuleRadiusModifier) == 0x0002A8, "Member 'FClamberingTargetingConfig_Ledge::TargetValidationCapsuleRadiusModifier' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationCapsuleHalfHeightModifier) == 0x0002D0, "Member 'FClamberingTargetingConfig_Ledge::TargetValidationCapsuleHalfHeightModifier' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingConfig_Ledge, TargetValidationCapsuleBottomVerticalOffset) == 0x0002F8, "Member 'FClamberingTargetingConfig_Ledge::TargetValidationCapsuleBottomVerticalOffset' has a wrong offset!");

struct alignas(0x04) FClamberingTargetingConfig_Ledge_CachedContextualValues final
{
public:
	uint8                                         Pad_0[0x14];
};
static_assert(alignof(FClamberingTargetingConfig_Ledge_CachedContextualValues) == 0x000004, "Wrong alignment on FClamberingTargetingConfig_Ledge_CachedContextualValues");
static_assert(sizeof(FClamberingTargetingConfig_Ledge_CachedContextualValues) == 0x000014, "Wrong size on FClamberingTargetingConfig_Ledge_CachedContextualValues");

struct alignas(0x08) FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FClamberingTargetingDebugDrawData) == 0x000008, "Wrong alignment on FClamberingTargetingDebugDrawData");
static_assert(sizeof(FClamberingTargetingDebugDrawData) == 0x000028, "Wrong size on FClamberingTargetingDebugDrawData");

struct alignas(0x10) FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x28];
};
static_assert(alignof(FClamberingTargetingDebugDrawData_Capsule) == 0x000010, "Wrong alignment on FClamberingTargetingDebugDrawData_Capsule");
static_assert(sizeof(FClamberingTargetingDebugDrawData_Capsule) == 0x000050, "Wrong size on FClamberingTargetingDebugDrawData_Capsule");

struct FClamberingTargetingDebugDrawData_Line final : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x18];
};
static_assert(alignof(FClamberingTargetingDebugDrawData_Line) == 0x000008, "Wrong alignment on FClamberingTargetingDebugDrawData_Line");
static_assert(sizeof(FClamberingTargetingDebugDrawData_Line) == 0x000040, "Wrong size on FClamberingTargetingDebugDrawData_Line");

struct FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FClamberingTargetingDebugDrawData_Sphere) == 0x000008, "Wrong alignment on FClamberingTargetingDebugDrawData_Sphere");
static_assert(sizeof(FClamberingTargetingDebugDrawData_Sphere) == 0x000030, "Wrong size on FClamberingTargetingDebugDrawData_Sphere");

struct FClamberingTargetingDebugDrawData_DirectionalArrow final : public FClamberingTargetingDebugDrawData
{
public:
	uint8                                         Pad_28[0x20];
};
static_assert(alignof(FClamberingTargetingDebugDrawData_DirectionalArrow) == 0x000008, "Wrong alignment on FClamberingTargetingDebugDrawData_DirectionalArrow");
static_assert(sizeof(FClamberingTargetingDebugDrawData_DirectionalArrow) == 0x000048, "Wrong size on FClamberingTargetingDebugDrawData_DirectionalArrow");

struct FClamberingTargetingDebugDrawData_CapsuleCast final : public FClamberingTargetingDebugDrawData_Capsule
{
public:
	uint8                                         Pad_50[0x20];
};
static_assert(alignof(FClamberingTargetingDebugDrawData_CapsuleCast) == 0x000010, "Wrong alignment on FClamberingTargetingDebugDrawData_CapsuleCast");
static_assert(sizeof(FClamberingTargetingDebugDrawData_CapsuleCast) == 0x000070, "Wrong size on FClamberingTargetingDebugDrawData_CapsuleCast");

struct FClamberingTargetingDebugDrawData_SphereCast final : public FClamberingTargetingDebugDrawData_Sphere
{
public:
	uint8                                         Pad_30[0x18];
};
static_assert(alignof(FClamberingTargetingDebugDrawData_SphereCast) == 0x000008, "Wrong alignment on FClamberingTargetingDebugDrawData_SphereCast");
static_assert(sizeof(FClamberingTargetingDebugDrawData_SphereCast) == 0x000048, "Wrong size on FClamberingTargetingDebugDrawData_SphereCast");

struct FClamberingTargetingDebugData
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FClamberingTargetingDebugData) == 0x000001, "Wrong alignment on FClamberingTargetingDebugData");
static_assert(sizeof(FClamberingTargetingDebugData) == 0x000001, "Wrong size on FClamberingTargetingDebugData");

struct FClamberingTargetingDebugData_Ledge final : public FClamberingTargetingDebugData
{
};
static_assert(alignof(FClamberingTargetingDebugData_Ledge) == 0x000001, "Wrong alignment on FClamberingTargetingDebugData_Ledge");
static_assert(sizeof(FClamberingTargetingDebugData_Ledge) == 0x000001, "Wrong size on FClamberingTargetingDebugData_Ledge");

struct FClamberingTargetingData final
{
public:
	EClamberingType                               Type;
	uint8                                         bValid : 1;
	uint8                                         Pad_2[0x6];
	class AActor*                                 SourceActor;
	struct FVector                                SourceLocation;
	struct FVector                                SourceAim;
	struct FVector                                WallLocation;
	struct FVector                                WallNormal;
	struct FVector                                TargetLocation;
	struct FVector                                TargetNormal;
	class AActor*                                 TargetActor;
	class UActorComponent*                        TargetActorComponent;
	struct FVector                                TargetActorComponentLocation;
	class FName                                   TargetActorBoneName;
	uint8                                         Pad_CC[0x4];
};
static_assert(alignof(FClamberingTargetingData) == 0x000008, "Wrong alignment on FClamberingTargetingData");
static_assert(sizeof(FClamberingTargetingData) == 0x0000D0, "Wrong size on FClamberingTargetingData");
static_assert(offsetof(FClamberingTargetingData, Type) == 0x000000, "Member 'FClamberingTargetingData::Type' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, SourceActor) == 0x000008, "Member 'FClamberingTargetingData::SourceActor' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, SourceLocation) == 0x000010, "Member 'FClamberingTargetingData::SourceLocation' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, SourceAim) == 0x000028, "Member 'FClamberingTargetingData::SourceAim' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, WallLocation) == 0x000040, "Member 'FClamberingTargetingData::WallLocation' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, WallNormal) == 0x000058, "Member 'FClamberingTargetingData::WallNormal' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, TargetLocation) == 0x000070, "Member 'FClamberingTargetingData::TargetLocation' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, TargetNormal) == 0x000088, "Member 'FClamberingTargetingData::TargetNormal' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, TargetActor) == 0x0000A0, "Member 'FClamberingTargetingData::TargetActor' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, TargetActorComponent) == 0x0000A8, "Member 'FClamberingTargetingData::TargetActorComponent' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, TargetActorComponentLocation) == 0x0000B0, "Member 'FClamberingTargetingData::TargetActorComponentLocation' has a wrong offset!");
static_assert(offsetof(FClamberingTargetingData, TargetActorBoneName) == 0x0000C8, "Member 'FClamberingTargetingData::TargetActorBoneName' has a wrong offset!");

struct FReplicatedClamberingTargetingData final
{
public:
	EClamberingType                               Type;
	uint8                                         Pad_1[0x7];
	struct FVector_NetQuantize10                  SourceLocation;
	struct FVector_NetQuantize100                 WallLocation;
	uint16                                        WallNormalYawQuantized;
	uint16                                        WallNormalPitchQuantized;
	uint8                                         Pad_3C[0x4];
	struct FVector_NetQuantize100                 TargetLocation;
	uint16                                        TargetNormalYawQuantized;
	uint16                                        TargetNormalPitchQuantized;
	uint8                                         Pad_5C[0x4];
	class AActor*                                 TargetActor;
	class UActorComponent*                        TargetActorComponent;
	class FName                                   TargetActorBoneName;
	uint8                                         Pad_74[0x4];
};
static_assert(alignof(FReplicatedClamberingTargetingData) == 0x000008, "Wrong alignment on FReplicatedClamberingTargetingData");
static_assert(sizeof(FReplicatedClamberingTargetingData) == 0x000078, "Wrong size on FReplicatedClamberingTargetingData");
static_assert(offsetof(FReplicatedClamberingTargetingData, Type) == 0x000000, "Member 'FReplicatedClamberingTargetingData::Type' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, SourceLocation) == 0x000008, "Member 'FReplicatedClamberingTargetingData::SourceLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, WallLocation) == 0x000020, "Member 'FReplicatedClamberingTargetingData::WallLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, WallNormalYawQuantized) == 0x000038, "Member 'FReplicatedClamberingTargetingData::WallNormalYawQuantized' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, WallNormalPitchQuantized) == 0x00003A, "Member 'FReplicatedClamberingTargetingData::WallNormalPitchQuantized' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetLocation) == 0x000040, "Member 'FReplicatedClamberingTargetingData::TargetLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetNormalYawQuantized) == 0x000058, "Member 'FReplicatedClamberingTargetingData::TargetNormalYawQuantized' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetNormalPitchQuantized) == 0x00005A, "Member 'FReplicatedClamberingTargetingData::TargetNormalPitchQuantized' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetActor) == 0x000060, "Member 'FReplicatedClamberingTargetingData::TargetActor' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetActorComponent) == 0x000068, "Member 'FReplicatedClamberingTargetingData::TargetActorComponent' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData, TargetActorBoneName) == 0x000070, "Member 'FReplicatedClamberingTargetingData::TargetActorBoneName' has a wrong offset!");

struct FReplicatedClamberingTargetingData_SimClient final
{
public:
	EClamberingType                               Type;
	uint8                                         Pad_1[0x1];
	uint16                                        WallNormalYawQuantized;
	uint8                                         Pad_4[0x4];
	struct FVector_NetQuantize100                 TargetLocation;
	class AActor*                                 TargetActor;
	class UActorComponent*                        TargetActorComponent;
	class FName                                   TargetActorBoneName;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FReplicatedClamberingTargetingData_SimClient) == 0x000008, "Wrong alignment on FReplicatedClamberingTargetingData_SimClient");
static_assert(sizeof(FReplicatedClamberingTargetingData_SimClient) == 0x000038, "Wrong size on FReplicatedClamberingTargetingData_SimClient");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, Type) == 0x000000, "Member 'FReplicatedClamberingTargetingData_SimClient::Type' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, WallNormalYawQuantized) == 0x000002, "Member 'FReplicatedClamberingTargetingData_SimClient::WallNormalYawQuantized' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetLocation) == 0x000008, "Member 'FReplicatedClamberingTargetingData_SimClient::TargetLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetActor) == 0x000020, "Member 'FReplicatedClamberingTargetingData_SimClient::TargetActor' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetActorComponent) == 0x000028, "Member 'FReplicatedClamberingTargetingData_SimClient::TargetActorComponent' has a wrong offset!");
static_assert(offsetof(FReplicatedClamberingTargetingData_SimClient, TargetActorBoneName) == 0x000030, "Member 'FReplicatedClamberingTargetingData_SimClient::TargetActorBoneName' has a wrong offset!");

struct FClamberingMovementConfig_Ledge final
{
public:
	struct FScalableFloat                         Duration;
	struct FScalableFloat                         BlockCheckTickRate;
};
static_assert(alignof(FClamberingMovementConfig_Ledge) == 0x000008, "Wrong alignment on FClamberingMovementConfig_Ledge");
static_assert(sizeof(FClamberingMovementConfig_Ledge) == 0x000050, "Wrong size on FClamberingMovementConfig_Ledge");
static_assert(offsetof(FClamberingMovementConfig_Ledge, Duration) == 0x000000, "Member 'FClamberingMovementConfig_Ledge::Duration' has a wrong offset!");
static_assert(offsetof(FClamberingMovementConfig_Ledge, BlockCheckTickRate) == 0x000028, "Member 'FClamberingMovementConfig_Ledge::BlockCheckTickRate' has a wrong offset!");

struct FClamberingAnalytics_ClamberEvent final
{
public:
	int32                                         MatchTime;
	EClamberingType                               ClamberType;
	uint8                                         Pad_5[0x3];
	struct FVector                                ClamberLocation;
	EClamberingFailedReason                       FailureReason;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FClamberingAnalytics_ClamberEvent) == 0x000008, "Wrong alignment on FClamberingAnalytics_ClamberEvent");
static_assert(sizeof(FClamberingAnalytics_ClamberEvent) == 0x000028, "Wrong size on FClamberingAnalytics_ClamberEvent");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, MatchTime) == 0x000000, "Member 'FClamberingAnalytics_ClamberEvent::MatchTime' has a wrong offset!");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, ClamberType) == 0x000004, "Member 'FClamberingAnalytics_ClamberEvent::ClamberType' has a wrong offset!");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, ClamberLocation) == 0x000008, "Member 'FClamberingAnalytics_ClamberEvent::ClamberLocation' has a wrong offset!");
static_assert(offsetof(FClamberingAnalytics_ClamberEvent, FailureReason) == 0x000020, "Member 'FClamberingAnalytics_ClamberEvent::FailureReason' has a wrong offset!");

}
