#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "GrappleParentRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UFortCameraModifier_Swinging final : public UCameraModifier
{
public:
	float                                         MaxVelocityDeltaPerSecond;
	uint8                                         Pad_4C[0x4];
	class UCurveFloat*                            BlendInCurve;
	class UCurveFloat*                            BlendOutCurve;
	struct FSpeedScaledAxisOffsetData             ForwardOffsetData;
	struct FVector2D                              TotalForwardOffsetBounds;
	struct FSpeedScaledAxisOffsetData             RightOffsetData;
	struct FVector2D                              RightForwardOffsetMultiplierBounds;
	struct FSpeedScaledAxisOffsetData             UpOffsetData;
	struct FVector2D                              UpPositiveForwardOffsetMultiplierBounds;
	struct FVector2D                              UpNegativeForwardOffsetMultiplierBounds;
	float                                         FOVInterpSpeed;
	uint8                                         Pad_1C4[0x4];
	struct FVector2D                              FOVBounds;
	class UCurveFloat*                            BoostCurve;
	struct FScalableFloat                         BoostModifier;
	float                                         AttachBoostDuration;
	float                                         AttachBoostMagnitude;
	float                                         DetachBoostDuration;
	float                                         DetachBoostMagnitude;
	class UCurveFloat*                            SlidingHeightCurve;
	struct FGameplayTag                           SlidingGameplayTag;
	float                                         SlideHeightTransitionDuration;
	float                                         MaxSlidingSpeedMultiplierOffset;
	uint8                                         Pad_22C[0x4];
	class AFortPlayerPawnAthena*                  CachedPlayer;
	class AFortWeaponRangedDualSwing*             CachedWeapon;
	uint8                                         Pad_240[0x48];

public:
	void RemoveSelfFromCameraManager();

	void CalculateDynamicMultipliers(float* OutFOVBoundsMultiplier, float* OutBoostOffsetMultiplier) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraModifier_Swinging">();
	}
	static class UFortCameraModifier_Swinging* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraModifier_Swinging>();
	}
};
static_assert(alignof(UFortCameraModifier_Swinging) == 0x000008, "Wrong alignment on UFortCameraModifier_Swinging");
static_assert(sizeof(UFortCameraModifier_Swinging) == 0x000288, "Wrong size on UFortCameraModifier_Swinging");
static_assert(offsetof(UFortCameraModifier_Swinging, MaxVelocityDeltaPerSecond) == 0x000048, "Member 'UFortCameraModifier_Swinging::MaxVelocityDeltaPerSecond' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, BlendInCurve) == 0x000050, "Member 'UFortCameraModifier_Swinging::BlendInCurve' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, BlendOutCurve) == 0x000058, "Member 'UFortCameraModifier_Swinging::BlendOutCurve' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, ForwardOffsetData) == 0x000060, "Member 'UFortCameraModifier_Swinging::ForwardOffsetData' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, TotalForwardOffsetBounds) == 0x0000C0, "Member 'UFortCameraModifier_Swinging::TotalForwardOffsetBounds' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, RightOffsetData) == 0x0000D0, "Member 'UFortCameraModifier_Swinging::RightOffsetData' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, RightForwardOffsetMultiplierBounds) == 0x000130, "Member 'UFortCameraModifier_Swinging::RightForwardOffsetMultiplierBounds' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, UpOffsetData) == 0x000140, "Member 'UFortCameraModifier_Swinging::UpOffsetData' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, UpPositiveForwardOffsetMultiplierBounds) == 0x0001A0, "Member 'UFortCameraModifier_Swinging::UpPositiveForwardOffsetMultiplierBounds' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, UpNegativeForwardOffsetMultiplierBounds) == 0x0001B0, "Member 'UFortCameraModifier_Swinging::UpNegativeForwardOffsetMultiplierBounds' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, FOVInterpSpeed) == 0x0001C0, "Member 'UFortCameraModifier_Swinging::FOVInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, FOVBounds) == 0x0001C8, "Member 'UFortCameraModifier_Swinging::FOVBounds' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, BoostCurve) == 0x0001D8, "Member 'UFortCameraModifier_Swinging::BoostCurve' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, BoostModifier) == 0x0001E0, "Member 'UFortCameraModifier_Swinging::BoostModifier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, AttachBoostDuration) == 0x000208, "Member 'UFortCameraModifier_Swinging::AttachBoostDuration' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, AttachBoostMagnitude) == 0x00020C, "Member 'UFortCameraModifier_Swinging::AttachBoostMagnitude' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, DetachBoostDuration) == 0x000210, "Member 'UFortCameraModifier_Swinging::DetachBoostDuration' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, DetachBoostMagnitude) == 0x000214, "Member 'UFortCameraModifier_Swinging::DetachBoostMagnitude' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, SlidingHeightCurve) == 0x000218, "Member 'UFortCameraModifier_Swinging::SlidingHeightCurve' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, SlidingGameplayTag) == 0x000220, "Member 'UFortCameraModifier_Swinging::SlidingGameplayTag' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, SlideHeightTransitionDuration) == 0x000224, "Member 'UFortCameraModifier_Swinging::SlideHeightTransitionDuration' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, MaxSlidingSpeedMultiplierOffset) == 0x000228, "Member 'UFortCameraModifier_Swinging::MaxSlidingSpeedMultiplierOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, CachedPlayer) == 0x000230, "Member 'UFortCameraModifier_Swinging::CachedPlayer' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Swinging, CachedWeapon) == 0x000238, "Member 'UFortCameraModifier_Swinging::CachedWeapon' has a wrong offset!");

class UFortSwingingLayerAnimInstance final : public UFortBaseLayerAnimInstance
{
public:
	class UAnimInstance*                          MainAnimBP;
	class AFortPlayerPawnAthena*                  Player;
	bool                                          IsGroundSwing;
	bool                                          IsFemale;
	uint8                                         Pad_452[0x2];
	float                                         PlayerDistanceToGround;
	bool                                          CalculateRotation;
	uint8                                         Pad_459[0x7];
	struct FScalableFloat                         ForwardInfluenceOnRotation;
	struct FScalableFloat                         TimeForMaxRotationSpeed;
	struct FScalableFloat                         MaxRotationSpeed;
	struct FScalableFloat                         RotationSpeedWhileNotAttached;
	struct FScalableFloat                         RotationSpeedWhileNotRotated;
	class AActor*                                 GetAttachedActor;
	bool                                          IsFreeFalling;
	bool                                          IsAttached;
	bool                                          IsNotAttachedToCliff;
	uint8                                         Pad_533[0x5];
	struct FVector                                Velocity;
	struct FVector                                XYVelocity;
	struct FVector                                VecFromPlayerToAttachPoint;
	float                                         PitchAngleFromAttachPoint;
	float                                         RollAngle;
	float                                         YawAngleToAttachTarget;
	class FName                                   CurveName_SwingPhase;
	class FName                                   CurveName_BlendOut;
	float                                         SwingPhase;
	struct FRotator                               CurrentRootRotation;
	struct FVector                                CurrentRootTranslation;
	bool                                          IsSwingRelease1;
	bool                                          IsSwingRelease2;
	bool                                          IsSwingRelease3;
	bool                                          IsSwingRelease4;
	bool                                          IsSwingRelease5;
	bool                                          IsSwingReleaseSkid;
	bool                                          IsMovingAttachPoint;
	bool                                          IsBlendOut;
	float                                         WebCastAttachDirection;
	bool                                          IsWebCastDown;
	bool                                          IsSwingOneHand;
	bool                                          IsRandomHandBool;
	bool                                          IsRandomSwingReleaseBool;
	bool                                          IsRandomeReleaseBool;
	bool                                          IsWithin100UnitsOfGround;
	bool                                          IsHanging;
	bool                                          IsFallRelease;
	bool                                          IsOnGroundWebCast;
	bool                                          IsSwingNearGroundToSkid;
	bool                                          IsHangToSwingInAir;
	bool                                          IsHangToSwingNearGround;

public:
	struct FVector GetAttachVectorInPlayerSpace(const struct FVector& InPlayerToAttachPoint);
	void GetPlayerAnglesFromAttachPoint(float* Pitch, float* Roll, float* Yaw);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSwingingLayerAnimInstance">();
	}
	static class UFortSwingingLayerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSwingingLayerAnimInstance>();
	}
};
static_assert(alignof(UFortSwingingLayerAnimInstance) == 0x000010, "Wrong alignment on UFortSwingingLayerAnimInstance");
static_assert(sizeof(UFortSwingingLayerAnimInstance) == 0x0005E0, "Wrong size on UFortSwingingLayerAnimInstance");
static_assert(offsetof(UFortSwingingLayerAnimInstance, MainAnimBP) == 0x000440, "Member 'UFortSwingingLayerAnimInstance::MainAnimBP' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, Player) == 0x000448, "Member 'UFortSwingingLayerAnimInstance::Player' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsGroundSwing) == 0x000450, "Member 'UFortSwingingLayerAnimInstance::IsGroundSwing' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsFemale) == 0x000451, "Member 'UFortSwingingLayerAnimInstance::IsFemale' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, PlayerDistanceToGround) == 0x000454, "Member 'UFortSwingingLayerAnimInstance::PlayerDistanceToGround' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CalculateRotation) == 0x000458, "Member 'UFortSwingingLayerAnimInstance::CalculateRotation' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, ForwardInfluenceOnRotation) == 0x000460, "Member 'UFortSwingingLayerAnimInstance::ForwardInfluenceOnRotation' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, TimeForMaxRotationSpeed) == 0x000488, "Member 'UFortSwingingLayerAnimInstance::TimeForMaxRotationSpeed' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, MaxRotationSpeed) == 0x0004B0, "Member 'UFortSwingingLayerAnimInstance::MaxRotationSpeed' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, RotationSpeedWhileNotAttached) == 0x0004D8, "Member 'UFortSwingingLayerAnimInstance::RotationSpeedWhileNotAttached' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, RotationSpeedWhileNotRotated) == 0x000500, "Member 'UFortSwingingLayerAnimInstance::RotationSpeedWhileNotRotated' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, GetAttachedActor) == 0x000528, "Member 'UFortSwingingLayerAnimInstance::GetAttachedActor' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsFreeFalling) == 0x000530, "Member 'UFortSwingingLayerAnimInstance::IsFreeFalling' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsAttached) == 0x000531, "Member 'UFortSwingingLayerAnimInstance::IsAttached' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsNotAttachedToCliff) == 0x000532, "Member 'UFortSwingingLayerAnimInstance::IsNotAttachedToCliff' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, Velocity) == 0x000538, "Member 'UFortSwingingLayerAnimInstance::Velocity' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, XYVelocity) == 0x000550, "Member 'UFortSwingingLayerAnimInstance::XYVelocity' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, VecFromPlayerToAttachPoint) == 0x000568, "Member 'UFortSwingingLayerAnimInstance::VecFromPlayerToAttachPoint' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, PitchAngleFromAttachPoint) == 0x000580, "Member 'UFortSwingingLayerAnimInstance::PitchAngleFromAttachPoint' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, RollAngle) == 0x000584, "Member 'UFortSwingingLayerAnimInstance::RollAngle' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, YawAngleToAttachTarget) == 0x000588, "Member 'UFortSwingingLayerAnimInstance::YawAngleToAttachTarget' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurveName_SwingPhase) == 0x00058C, "Member 'UFortSwingingLayerAnimInstance::CurveName_SwingPhase' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurveName_BlendOut) == 0x000590, "Member 'UFortSwingingLayerAnimInstance::CurveName_BlendOut' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, SwingPhase) == 0x000594, "Member 'UFortSwingingLayerAnimInstance::SwingPhase' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurrentRootRotation) == 0x000598, "Member 'UFortSwingingLayerAnimInstance::CurrentRootRotation' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, CurrentRootTranslation) == 0x0005B0, "Member 'UFortSwingingLayerAnimInstance::CurrentRootTranslation' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease1) == 0x0005C8, "Member 'UFortSwingingLayerAnimInstance::IsSwingRelease1' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease2) == 0x0005C9, "Member 'UFortSwingingLayerAnimInstance::IsSwingRelease2' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease3) == 0x0005CA, "Member 'UFortSwingingLayerAnimInstance::IsSwingRelease3' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease4) == 0x0005CB, "Member 'UFortSwingingLayerAnimInstance::IsSwingRelease4' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingRelease5) == 0x0005CC, "Member 'UFortSwingingLayerAnimInstance::IsSwingRelease5' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingReleaseSkid) == 0x0005CD, "Member 'UFortSwingingLayerAnimInstance::IsSwingReleaseSkid' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsMovingAttachPoint) == 0x0005CE, "Member 'UFortSwingingLayerAnimInstance::IsMovingAttachPoint' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsBlendOut) == 0x0005CF, "Member 'UFortSwingingLayerAnimInstance::IsBlendOut' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, WebCastAttachDirection) == 0x0005D0, "Member 'UFortSwingingLayerAnimInstance::WebCastAttachDirection' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsWebCastDown) == 0x0005D4, "Member 'UFortSwingingLayerAnimInstance::IsWebCastDown' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingOneHand) == 0x0005D5, "Member 'UFortSwingingLayerAnimInstance::IsSwingOneHand' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsRandomHandBool) == 0x0005D6, "Member 'UFortSwingingLayerAnimInstance::IsRandomHandBool' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsRandomSwingReleaseBool) == 0x0005D7, "Member 'UFortSwingingLayerAnimInstance::IsRandomSwingReleaseBool' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsRandomeReleaseBool) == 0x0005D8, "Member 'UFortSwingingLayerAnimInstance::IsRandomeReleaseBool' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsWithin100UnitsOfGround) == 0x0005D9, "Member 'UFortSwingingLayerAnimInstance::IsWithin100UnitsOfGround' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsHanging) == 0x0005DA, "Member 'UFortSwingingLayerAnimInstance::IsHanging' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsFallRelease) == 0x0005DB, "Member 'UFortSwingingLayerAnimInstance::IsFallRelease' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsOnGroundWebCast) == 0x0005DC, "Member 'UFortSwingingLayerAnimInstance::IsOnGroundWebCast' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsSwingNearGroundToSkid) == 0x0005DD, "Member 'UFortSwingingLayerAnimInstance::IsSwingNearGroundToSkid' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsHangToSwingInAir) == 0x0005DE, "Member 'UFortSwingingLayerAnimInstance::IsHangToSwingInAir' has a wrong offset!");
static_assert(offsetof(UFortSwingingLayerAnimInstance, IsHangToSwingNearGround) == 0x0005DF, "Member 'UFortSwingingLayerAnimInstance::IsHangToSwingNearGround' has a wrong offset!");

}
