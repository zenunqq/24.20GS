#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ENyxGlassState : uint8
{
	Off                                      = 0,
	Swinging                                 = 1,
	AimingFromGround                         = 2,
	Hovering                                 = 3,
	Attacking                                = 4,
	Slashing                                 = 5,
	ENyxGlassState_MAX                       = 6,
};

enum class ENyxGlassSlashSubstate : uint8
{
	MovingToTarget                           = 0,
	StoppedAtTarget                          = 1,
	LeapingBack                              = 2,
	ENyxGlassSlashSubstate_MAX               = 3,
};

struct FNyxGlassTargetingData final
{
public:
	class AActor*                                 LeftActor;
	class AActor*                                 RightActor;
	struct FVector                                LeftAttachPoint;
	struct FVector                                RightAttachPoint;
	bool                                          bFoundLeftAttachPoint;
	bool                                          bFoundRightAttachPoint;
	bool                                          bUsingDirectRaycast;
	uint8                                         Pad_43[0x5];
};
static_assert(alignof(FNyxGlassTargetingData) == 0x000008, "Wrong alignment on FNyxGlassTargetingData");
static_assert(sizeof(FNyxGlassTargetingData) == 0x000048, "Wrong size on FNyxGlassTargetingData");
static_assert(offsetof(FNyxGlassTargetingData, LeftActor) == 0x000000, "Member 'FNyxGlassTargetingData::LeftActor' has a wrong offset!");
static_assert(offsetof(FNyxGlassTargetingData, RightActor) == 0x000008, "Member 'FNyxGlassTargetingData::RightActor' has a wrong offset!");
static_assert(offsetof(FNyxGlassTargetingData, LeftAttachPoint) == 0x000010, "Member 'FNyxGlassTargetingData::LeftAttachPoint' has a wrong offset!");
static_assert(offsetof(FNyxGlassTargetingData, RightAttachPoint) == 0x000028, "Member 'FNyxGlassTargetingData::RightAttachPoint' has a wrong offset!");
static_assert(offsetof(FNyxGlassTargetingData, bFoundLeftAttachPoint) == 0x000040, "Member 'FNyxGlassTargetingData::bFoundLeftAttachPoint' has a wrong offset!");
static_assert(offsetof(FNyxGlassTargetingData, bFoundRightAttachPoint) == 0x000041, "Member 'FNyxGlassTargetingData::bFoundRightAttachPoint' has a wrong offset!");
static_assert(offsetof(FNyxGlassTargetingData, bUsingDirectRaycast) == 0x000042, "Member 'FNyxGlassTargetingData::bUsingDirectRaycast' has a wrong offset!");

struct FNyxGlassVelocityMetadata final
{
public:
	struct FVector                                OrigVelocity;
	struct FVector                                FinalVelocity;
	struct FVector                                FinalGasForce;
	float                                         CalcMaxSpeedMultiplier;
	bool                                          bCloseToAttachPoint;
	bool                                          bPerformedHoverCalculation;
	bool                                          bReachedSlashTarget;
	bool                                          bShouldApplySlashDamage;
	bool                                          bShouldLeapBack;
	bool                                          bFinishedLeapingBack;
	bool                                          bCancelAttackSequence;
	uint8                                         Pad_53[0x5];
};
static_assert(alignof(FNyxGlassVelocityMetadata) == 0x000008, "Wrong alignment on FNyxGlassVelocityMetadata");
static_assert(sizeof(FNyxGlassVelocityMetadata) == 0x000058, "Wrong size on FNyxGlassVelocityMetadata");
static_assert(offsetof(FNyxGlassVelocityMetadata, OrigVelocity) == 0x000000, "Member 'FNyxGlassVelocityMetadata::OrigVelocity' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, FinalVelocity) == 0x000018, "Member 'FNyxGlassVelocityMetadata::FinalVelocity' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, FinalGasForce) == 0x000030, "Member 'FNyxGlassVelocityMetadata::FinalGasForce' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, CalcMaxSpeedMultiplier) == 0x000048, "Member 'FNyxGlassVelocityMetadata::CalcMaxSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bCloseToAttachPoint) == 0x00004C, "Member 'FNyxGlassVelocityMetadata::bCloseToAttachPoint' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bPerformedHoverCalculation) == 0x00004D, "Member 'FNyxGlassVelocityMetadata::bPerformedHoverCalculation' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bReachedSlashTarget) == 0x00004E, "Member 'FNyxGlassVelocityMetadata::bReachedSlashTarget' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bShouldApplySlashDamage) == 0x00004F, "Member 'FNyxGlassVelocityMetadata::bShouldApplySlashDamage' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bShouldLeapBack) == 0x000050, "Member 'FNyxGlassVelocityMetadata::bShouldLeapBack' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bFinishedLeapingBack) == 0x000051, "Member 'FNyxGlassVelocityMetadata::bFinishedLeapingBack' has a wrong offset!");
static_assert(offsetof(FNyxGlassVelocityMetadata, bCancelAttackSequence) == 0x000052, "Member 'FNyxGlassVelocityMetadata::bCancelAttackSequence' has a wrong offset!");

}
