#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteVersion_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EHurdleType : uint8
{
	Invalid                                  = 0,
	HurdleOver                               = 1,
	HurdleOnTop                              = 2,
	EHurdleType_MAX                          = 3,
};

enum class EHurdleState : uint8
{
	Inactive                                 = 0,
	Targeting                                = 1,
	HurdleOver                               = 2,
	HurdleOn                                 = 3,
	EHurdleState_MAX                         = 4,
};

struct FHurdleInputConfig final
{
public:
	struct FScalableFloat                         CastRadius;
	struct FScalableFloat                         MaxAllowedFallDistance;
	struct FScalableFloat                         ForwardCastIndicatorDistance_Phase1;
	struct FScalableFloat                         ForwardCastDistance_Phase1;
	struct FScalableFloat                         ForwardCastDistance_Phase1_HurdleFromJog;
	struct FScalableFloat                         ForwardCastDistance_Phase1_ManualHurdle;
	struct FScalableFloat                         Phase1_WallAngleToleranceFlat;
	struct FScalableFloat                         Phase1_SweepGroundBufferHeight;
	struct FScalableFloat                         Phase1_SweepGroundMaxHeight;
	struct FScalableFloat                         Phase1_Floor_WallOffset;
	struct FScalableFloat                         Phase1_Floor_MinHeightForHurlde;
	uint8                                         Pad_1B8[0x28];
	struct FScalableFloat                         Phase2_UpAngleTolerance;
	struct FScalableFloat                         Phase2_Floor_MaxHeightForHurlde;
	uint8                                         Pad_230[0x28];
	struct FScalableFloat                         Phase3_CapsuleOffset;
	struct FScalableFloat                         Phase3_ClearanceCapsuleSize;
	struct FScalableFloat                         Phase3_ForwardCastDistance;
	struct FScalableFloat                         Phase3_MinTopClearanceForHurdleOn;
	struct FScalableFloat                         Phase4_MaxDownDistance;
	struct FScalableFloat                         Phase4_UpAngleTolerance;
	struct FScalableFloat                         Phase4_HurdleOnZTolerance;
	struct FScalableFloat                         Phase5_CapsuleOffset;
	struct FScalableFloat                         Phase5_ClearanceCapsuleSize;
	struct FScalableFloat                         FinalResult_GroundAimOffset;
	struct FScalableFloat                         SlideBufferTime;
	struct FScalableFloat                         MinimumSpeedToHurdle;
	struct FScalableFloat                         MinimumForwardStickDeflection;
	struct FFortReleaseVersion                    ContextualActionPrototypeVersion;
	uint8                                         Pad_464[0x4];
};
static_assert(alignof(FHurdleInputConfig) == 0x000008, "Wrong alignment on FHurdleInputConfig");
static_assert(sizeof(FHurdleInputConfig) == 0x000468, "Wrong size on FHurdleInputConfig");
static_assert(offsetof(FHurdleInputConfig, CastRadius) == 0x000000, "Member 'FHurdleInputConfig::CastRadius' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, MaxAllowedFallDistance) == 0x000028, "Member 'FHurdleInputConfig::MaxAllowedFallDistance' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, ForwardCastIndicatorDistance_Phase1) == 0x000050, "Member 'FHurdleInputConfig::ForwardCastIndicatorDistance_Phase1' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, ForwardCastDistance_Phase1) == 0x000078, "Member 'FHurdleInputConfig::ForwardCastDistance_Phase1' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, ForwardCastDistance_Phase1_HurdleFromJog) == 0x0000A0, "Member 'FHurdleInputConfig::ForwardCastDistance_Phase1_HurdleFromJog' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, ForwardCastDistance_Phase1_ManualHurdle) == 0x0000C8, "Member 'FHurdleInputConfig::ForwardCastDistance_Phase1_ManualHurdle' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase1_WallAngleToleranceFlat) == 0x0000F0, "Member 'FHurdleInputConfig::Phase1_WallAngleToleranceFlat' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase1_SweepGroundBufferHeight) == 0x000118, "Member 'FHurdleInputConfig::Phase1_SweepGroundBufferHeight' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase1_SweepGroundMaxHeight) == 0x000140, "Member 'FHurdleInputConfig::Phase1_SweepGroundMaxHeight' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase1_Floor_WallOffset) == 0x000168, "Member 'FHurdleInputConfig::Phase1_Floor_WallOffset' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase1_Floor_MinHeightForHurlde) == 0x000190, "Member 'FHurdleInputConfig::Phase1_Floor_MinHeightForHurlde' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase2_UpAngleTolerance) == 0x0001E0, "Member 'FHurdleInputConfig::Phase2_UpAngleTolerance' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase2_Floor_MaxHeightForHurlde) == 0x000208, "Member 'FHurdleInputConfig::Phase2_Floor_MaxHeightForHurlde' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase3_CapsuleOffset) == 0x000258, "Member 'FHurdleInputConfig::Phase3_CapsuleOffset' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase3_ClearanceCapsuleSize) == 0x000280, "Member 'FHurdleInputConfig::Phase3_ClearanceCapsuleSize' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase3_ForwardCastDistance) == 0x0002A8, "Member 'FHurdleInputConfig::Phase3_ForwardCastDistance' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase3_MinTopClearanceForHurdleOn) == 0x0002D0, "Member 'FHurdleInputConfig::Phase3_MinTopClearanceForHurdleOn' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase4_MaxDownDistance) == 0x0002F8, "Member 'FHurdleInputConfig::Phase4_MaxDownDistance' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase4_UpAngleTolerance) == 0x000320, "Member 'FHurdleInputConfig::Phase4_UpAngleTolerance' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase4_HurdleOnZTolerance) == 0x000348, "Member 'FHurdleInputConfig::Phase4_HurdleOnZTolerance' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase5_CapsuleOffset) == 0x000370, "Member 'FHurdleInputConfig::Phase5_CapsuleOffset' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, Phase5_ClearanceCapsuleSize) == 0x000398, "Member 'FHurdleInputConfig::Phase5_ClearanceCapsuleSize' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, FinalResult_GroundAimOffset) == 0x0003C0, "Member 'FHurdleInputConfig::FinalResult_GroundAimOffset' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, SlideBufferTime) == 0x0003E8, "Member 'FHurdleInputConfig::SlideBufferTime' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, MinimumSpeedToHurdle) == 0x000410, "Member 'FHurdleInputConfig::MinimumSpeedToHurdle' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, MinimumForwardStickDeflection) == 0x000438, "Member 'FHurdleInputConfig::MinimumForwardStickDeflection' has a wrong offset!");
static_assert(offsetof(FHurdleInputConfig, ContextualActionPrototypeVersion) == 0x000460, "Member 'FHurdleInputConfig::ContextualActionPrototypeVersion' has a wrong offset!");

struct FHurdleTargetingData final
{
public:
	EHurdleType                                   Type;
	EFortSynchedActionEndMovementMode             EndMovementMode;
	uint8                                         bValid : 1;
	uint8                                         bInRange : 1;
	uint8                                         Pad_3[0x5];
	struct FVector                                FacingCornerLocation;
	struct FVector                                FacingCornerNormal;
	struct FVector                                BackCornerLocation;
	struct FVector                                FinalLandingPosition;
	class AActor*                                 SourceActor;
	struct FVector                                SourceLocation;
	struct FVector                                SourceAim;
	struct FVector                                WallLocation;
	struct FVector                                WallNormal;
	struct FVector                                TargetLocation;
	struct FVector                                TargetNormal;
	TWeakObjectPtr<class AActor>                  TargetActor;
	TWeakObjectPtr<class UActorComponent>         TargetActorComponent;
	struct FVector                                TargetActorComponentLocation;
	class FName                                   TargetActorBoneName;
	uint8                                         Pad_12C[0x4];
};
static_assert(alignof(FHurdleTargetingData) == 0x000008, "Wrong alignment on FHurdleTargetingData");
static_assert(sizeof(FHurdleTargetingData) == 0x000130, "Wrong size on FHurdleTargetingData");
static_assert(offsetof(FHurdleTargetingData, Type) == 0x000000, "Member 'FHurdleTargetingData::Type' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, EndMovementMode) == 0x000001, "Member 'FHurdleTargetingData::EndMovementMode' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, FacingCornerLocation) == 0x000008, "Member 'FHurdleTargetingData::FacingCornerLocation' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, FacingCornerNormal) == 0x000020, "Member 'FHurdleTargetingData::FacingCornerNormal' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, BackCornerLocation) == 0x000038, "Member 'FHurdleTargetingData::BackCornerLocation' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, FinalLandingPosition) == 0x000050, "Member 'FHurdleTargetingData::FinalLandingPosition' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, SourceActor) == 0x000068, "Member 'FHurdleTargetingData::SourceActor' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, SourceLocation) == 0x000070, "Member 'FHurdleTargetingData::SourceLocation' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, SourceAim) == 0x000088, "Member 'FHurdleTargetingData::SourceAim' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, WallLocation) == 0x0000A0, "Member 'FHurdleTargetingData::WallLocation' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, WallNormal) == 0x0000B8, "Member 'FHurdleTargetingData::WallNormal' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, TargetLocation) == 0x0000D0, "Member 'FHurdleTargetingData::TargetLocation' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, TargetNormal) == 0x0000E8, "Member 'FHurdleTargetingData::TargetNormal' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, TargetActor) == 0x000100, "Member 'FHurdleTargetingData::TargetActor' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, TargetActorComponent) == 0x000108, "Member 'FHurdleTargetingData::TargetActorComponent' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, TargetActorComponentLocation) == 0x000110, "Member 'FHurdleTargetingData::TargetActorComponentLocation' has a wrong offset!");
static_assert(offsetof(FHurdleTargetingData, TargetActorBoneName) == 0x000128, "Member 'FHurdleTargetingData::TargetActorBoneName' has a wrong offset!");

struct FReplicatedHurdleTargetingData final
{
public:
	EHurdleType                                   Type;
	EFortSynchedActionEndMovementMode             EndMovementMode;
	uint8                                         Pad_2[0x6];
	struct FVector_NetQuantize10                  FacingCornerLocation;
	struct FVector_NetQuantize10                  FacingCornerNormal;
	struct FVector_NetQuantize10                  BackCornerLocation;
	struct FVector_NetQuantize10                  FinalLandingPosition;
	bool                                          bValid;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(FReplicatedHurdleTargetingData) == 0x000008, "Wrong alignment on FReplicatedHurdleTargetingData");
static_assert(sizeof(FReplicatedHurdleTargetingData) == 0x000070, "Wrong size on FReplicatedHurdleTargetingData");
static_assert(offsetof(FReplicatedHurdleTargetingData, Type) == 0x000000, "Member 'FReplicatedHurdleTargetingData::Type' has a wrong offset!");
static_assert(offsetof(FReplicatedHurdleTargetingData, EndMovementMode) == 0x000001, "Member 'FReplicatedHurdleTargetingData::EndMovementMode' has a wrong offset!");
static_assert(offsetof(FReplicatedHurdleTargetingData, FacingCornerLocation) == 0x000008, "Member 'FReplicatedHurdleTargetingData::FacingCornerLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedHurdleTargetingData, FacingCornerNormal) == 0x000020, "Member 'FReplicatedHurdleTargetingData::FacingCornerNormal' has a wrong offset!");
static_assert(offsetof(FReplicatedHurdleTargetingData, BackCornerLocation) == 0x000038, "Member 'FReplicatedHurdleTargetingData::BackCornerLocation' has a wrong offset!");
static_assert(offsetof(FReplicatedHurdleTargetingData, FinalLandingPosition) == 0x000050, "Member 'FReplicatedHurdleTargetingData::FinalLandingPosition' has a wrong offset!");
static_assert(offsetof(FReplicatedHurdleTargetingData, bValid) == 0x000068, "Member 'FReplicatedHurdleTargetingData::bValid' has a wrong offset!");

}
