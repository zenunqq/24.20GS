#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteAI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GrindRailRuntime_structs.hpp"

namespace SDK
{

class UFortCameraModifier_Grinding : public UCameraModifier
{
public:
	struct FScalableFloat                         bUseNativeCalculation;
	class UCurveFloat*                            BlendInCurve;
	class UCurveFloat*                            BlendOutCurve;
	struct FScalableFloat                         SnapToGrindingLocation;
	struct FScalableFloat                         ADSAlphaInterpSpeed;
	struct FScalableFloat                         CurrentForwardInterpSpeed;
	struct FScalableFloat                         MaxRightSpeedOldRangeForForward;
	struct FScalableFloat                         MaxRightSpeedNewRangeForForward;
	struct FScalableFloat                         MinForwardSpeedOldRangeForForward;
	struct FScalableFloat                         MaxForwardSpeedOldRangeForForward;
	struct FScalableFloat                         MinForwardSpeedNewRangeForForward;
	struct FScalableFloat                         MaxForwardSpeedNewRangeForForward;
	struct FScalableFloat                         MinUpSpeedOldRangeForForward;
	struct FScalableFloat                         MaxUpSpeedOldRangeForForward;
	struct FScalableFloat                         MinUpSpeedNewRangeForForward;
	struct FScalableFloat                         MaxUpSpeedNewRangeForForward;
	struct FScalableFloat                         BaseForwardMultiplier;
	struct FScalableFloat                         SpeedUpBoosterForwardMultiplier;
	struct FScalableFloat                         SprintingForwardMultiplier;
	struct FScalableFloat                         RightSpeedOldRangeForRight;
	struct FScalableFloat                         RightSpeedNewRangeForRight;
	struct FScalableFloat                         MaxUpSpeedOldRangeForRight;
	struct FScalableFloat                         MaxUpSpeedNewRangeForRight;
	struct FScalableFloat                         MinForwardSpeedOldRangeForRight;
	struct FScalableFloat                         MaxForwardSpeedOldRangeForRight;
	struct FScalableFloat                         MinForwardSpeedNewRangeForRight;
	struct FScalableFloat                         MaxForwardSpeedNewRangeForRight;
	struct FScalableFloat                         BaseRightMultiplier;
	struct FScalableFloat                         SpeedUpBoostRightMultiplier;
	struct FScalableFloat                         SprintingRightMultiplier;
	struct FScalableFloat                         CurrentRightInterpSpeed;
	struct FScalableFloat                         UpSpeedOldRangeForUp;
	struct FScalableFloat                         UpSpeedNewRangeForUp;
	struct FScalableFloat                         CurrentUpInterpSpeed;
	struct FScalableFloat                         BaseUpMultiplier;
	struct FScalableFloat                         SpeedUpBoostUpMultiplier;
	struct FScalableFloat                         SprintingUpMultiplier;
	struct FScalableFloat                         MinForwardSpeedOldRangeForLean;
	struct FScalableFloat                         MaxForwardSpeedOldRangeForLean;
	struct FScalableFloat                         MinForwardSpeedNewRangeForLean;
	struct FScalableFloat                         MaxForwardSpeedNewRangeForLean;
	struct FScalableFloat                         MultiplierForMaxNewLeanRange;
	struct FScalableFloat                         CurrentLeanInterpSpeed;
	struct FScalableFloat                         MaxSpeedOldRangeForFOV;
	struct FScalableFloat                         MaxSpeedNewRangeForFOV;
	struct FScalableFloat                         BaseFOV;
	struct FScalableFloat                         SpeedUpBoosterFOV;
	struct FScalableFloat                         SprintingFOV;
	struct FScalableFloat                         CurrentFOVInterpSpeed;
	struct FScalableFloat                         DeltaDecreaseInZForOffset;
	struct FScalableFloat                         CurrentOffsetInterpSpeed;
	struct FScalableFloat                         StraightnessMultiplierForOffset;
	struct FScalableFloat                         FinalOffsetForwardDelta;
	struct FScalableFloat                         FinalOffsetUpDelta;
	struct FScalableFloat                         FinalOffsetRightDelta;
	uint8                                         Pad_8A0[0x50];
	bool                                          bCachedUseNativeCalculation;
	uint8                                         Pad_8F1[0xCF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraModifier_Grinding">();
	}
	static class UFortCameraModifier_Grinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraModifier_Grinding>();
	}
};
static_assert(alignof(UFortCameraModifier_Grinding) == 0x000008, "Wrong alignment on UFortCameraModifier_Grinding");
static_assert(sizeof(UFortCameraModifier_Grinding) == 0x0009C0, "Wrong size on UFortCameraModifier_Grinding");
static_assert(offsetof(UFortCameraModifier_Grinding, bUseNativeCalculation) == 0x000048, "Member 'UFortCameraModifier_Grinding::bUseNativeCalculation' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, BlendInCurve) == 0x000070, "Member 'UFortCameraModifier_Grinding::BlendInCurve' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, BlendOutCurve) == 0x000078, "Member 'UFortCameraModifier_Grinding::BlendOutCurve' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SnapToGrindingLocation) == 0x000080, "Member 'UFortCameraModifier_Grinding::SnapToGrindingLocation' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, ADSAlphaInterpSpeed) == 0x0000A8, "Member 'UFortCameraModifier_Grinding::ADSAlphaInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentForwardInterpSpeed) == 0x0000D0, "Member 'UFortCameraModifier_Grinding::CurrentForwardInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxRightSpeedOldRangeForForward) == 0x0000F8, "Member 'UFortCameraModifier_Grinding::MaxRightSpeedOldRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxRightSpeedNewRangeForForward) == 0x000120, "Member 'UFortCameraModifier_Grinding::MaxRightSpeedNewRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedOldRangeForForward) == 0x000148, "Member 'UFortCameraModifier_Grinding::MinForwardSpeedOldRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedOldRangeForForward) == 0x000170, "Member 'UFortCameraModifier_Grinding::MaxForwardSpeedOldRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedNewRangeForForward) == 0x000198, "Member 'UFortCameraModifier_Grinding::MinForwardSpeedNewRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedNewRangeForForward) == 0x0001C0, "Member 'UFortCameraModifier_Grinding::MaxForwardSpeedNewRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinUpSpeedOldRangeForForward) == 0x0001E8, "Member 'UFortCameraModifier_Grinding::MinUpSpeedOldRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedOldRangeForForward) == 0x000210, "Member 'UFortCameraModifier_Grinding::MaxUpSpeedOldRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinUpSpeedNewRangeForForward) == 0x000238, "Member 'UFortCameraModifier_Grinding::MinUpSpeedNewRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedNewRangeForForward) == 0x000260, "Member 'UFortCameraModifier_Grinding::MaxUpSpeedNewRangeForForward' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseForwardMultiplier) == 0x000288, "Member 'UFortCameraModifier_Grinding::BaseForwardMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoosterForwardMultiplier) == 0x0002B0, "Member 'UFortCameraModifier_Grinding::SpeedUpBoosterForwardMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingForwardMultiplier) == 0x0002D8, "Member 'UFortCameraModifier_Grinding::SprintingForwardMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, RightSpeedOldRangeForRight) == 0x000300, "Member 'UFortCameraModifier_Grinding::RightSpeedOldRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, RightSpeedNewRangeForRight) == 0x000328, "Member 'UFortCameraModifier_Grinding::RightSpeedNewRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedOldRangeForRight) == 0x000350, "Member 'UFortCameraModifier_Grinding::MaxUpSpeedOldRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxUpSpeedNewRangeForRight) == 0x000378, "Member 'UFortCameraModifier_Grinding::MaxUpSpeedNewRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedOldRangeForRight) == 0x0003A0, "Member 'UFortCameraModifier_Grinding::MinForwardSpeedOldRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedOldRangeForRight) == 0x0003C8, "Member 'UFortCameraModifier_Grinding::MaxForwardSpeedOldRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedNewRangeForRight) == 0x0003F0, "Member 'UFortCameraModifier_Grinding::MinForwardSpeedNewRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedNewRangeForRight) == 0x000418, "Member 'UFortCameraModifier_Grinding::MaxForwardSpeedNewRangeForRight' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseRightMultiplier) == 0x000440, "Member 'UFortCameraModifier_Grinding::BaseRightMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoostRightMultiplier) == 0x000468, "Member 'UFortCameraModifier_Grinding::SpeedUpBoostRightMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingRightMultiplier) == 0x000490, "Member 'UFortCameraModifier_Grinding::SprintingRightMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentRightInterpSpeed) == 0x0004B8, "Member 'UFortCameraModifier_Grinding::CurrentRightInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, UpSpeedOldRangeForUp) == 0x0004E0, "Member 'UFortCameraModifier_Grinding::UpSpeedOldRangeForUp' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, UpSpeedNewRangeForUp) == 0x000508, "Member 'UFortCameraModifier_Grinding::UpSpeedNewRangeForUp' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentUpInterpSpeed) == 0x000530, "Member 'UFortCameraModifier_Grinding::CurrentUpInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseUpMultiplier) == 0x000558, "Member 'UFortCameraModifier_Grinding::BaseUpMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoostUpMultiplier) == 0x000580, "Member 'UFortCameraModifier_Grinding::SpeedUpBoostUpMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingUpMultiplier) == 0x0005A8, "Member 'UFortCameraModifier_Grinding::SprintingUpMultiplier' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedOldRangeForLean) == 0x0005D0, "Member 'UFortCameraModifier_Grinding::MinForwardSpeedOldRangeForLean' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedOldRangeForLean) == 0x0005F8, "Member 'UFortCameraModifier_Grinding::MaxForwardSpeedOldRangeForLean' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MinForwardSpeedNewRangeForLean) == 0x000620, "Member 'UFortCameraModifier_Grinding::MinForwardSpeedNewRangeForLean' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxForwardSpeedNewRangeForLean) == 0x000648, "Member 'UFortCameraModifier_Grinding::MaxForwardSpeedNewRangeForLean' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MultiplierForMaxNewLeanRange) == 0x000670, "Member 'UFortCameraModifier_Grinding::MultiplierForMaxNewLeanRange' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentLeanInterpSpeed) == 0x000698, "Member 'UFortCameraModifier_Grinding::CurrentLeanInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxSpeedOldRangeForFOV) == 0x0006C0, "Member 'UFortCameraModifier_Grinding::MaxSpeedOldRangeForFOV' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, MaxSpeedNewRangeForFOV) == 0x0006E8, "Member 'UFortCameraModifier_Grinding::MaxSpeedNewRangeForFOV' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, BaseFOV) == 0x000710, "Member 'UFortCameraModifier_Grinding::BaseFOV' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SpeedUpBoosterFOV) == 0x000738, "Member 'UFortCameraModifier_Grinding::SpeedUpBoosterFOV' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, SprintingFOV) == 0x000760, "Member 'UFortCameraModifier_Grinding::SprintingFOV' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentFOVInterpSpeed) == 0x000788, "Member 'UFortCameraModifier_Grinding::CurrentFOVInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, DeltaDecreaseInZForOffset) == 0x0007B0, "Member 'UFortCameraModifier_Grinding::DeltaDecreaseInZForOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, CurrentOffsetInterpSpeed) == 0x0007D8, "Member 'UFortCameraModifier_Grinding::CurrentOffsetInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, StraightnessMultiplierForOffset) == 0x000800, "Member 'UFortCameraModifier_Grinding::StraightnessMultiplierForOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, FinalOffsetForwardDelta) == 0x000828, "Member 'UFortCameraModifier_Grinding::FinalOffsetForwardDelta' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, FinalOffsetUpDelta) == 0x000850, "Member 'UFortCameraModifier_Grinding::FinalOffsetUpDelta' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, FinalOffsetRightDelta) == 0x000878, "Member 'UFortCameraModifier_Grinding::FinalOffsetRightDelta' has a wrong offset!");
static_assert(offsetof(UFortCameraModifier_Grinding, bCachedUseNativeCalculation) == 0x0008F0, "Member 'UFortCameraModifier_Grinding::bCachedUseNativeCalculation' has a wrong offset!");

class AFortGrindRail : public ABuildingGameplayActor
{
public:
	TArray<struct FGrindRailMeshInfo>             GrindRailMeshInfos;
	TArray<struct FGrindRailBoosterInfo>          BoosterInfos;
	class USplineComponent*                       SplineComponent;
	struct FScalableFloat                         EnableBoosters;
	struct FScalableFloat                         EnableGrinding;
	struct FScalableFloat                         EnableProjectileCollision;
	bool                                          bDisableBooster;
	uint8                                         Pad_AD1[0xF];

public:
	void BPRerunConstructionScript();
	void ForceClearBoosters();
	void GetConnectionForGrinding(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float NextDistanceOnRail, const float RightLeanValue, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection);
	bool IsTipCapped(const bool bStartTip);
	bool IsTipConnected(const bool bStartTip);
	void NativeGetNextPositionToGrind(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float RightLeanValue, struct FVector* OutNextLocation, bool* bGotToEnd, float* NextLocationOnRail, EGrindRailBoosterMode* BoosterMode, bool* bHitObstacle, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection);
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_DisableBooster();
	void SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent, const int32 StartIndex, const int32 EndIndex, const float StartDistance, const float EndDistance);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGrindRail">();
	}
	static class AFortGrindRail* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortGrindRail>();
	}
};
static_assert(alignof(AFortGrindRail) == 0x000008, "Wrong alignment on AFortGrindRail");
static_assert(sizeof(AFortGrindRail) == 0x000AE0, "Wrong size on AFortGrindRail");
static_assert(offsetof(AFortGrindRail, GrindRailMeshInfos) == 0x000A30, "Member 'AFortGrindRail::GrindRailMeshInfos' has a wrong offset!");
static_assert(offsetof(AFortGrindRail, BoosterInfos) == 0x000A40, "Member 'AFortGrindRail::BoosterInfos' has a wrong offset!");
static_assert(offsetof(AFortGrindRail, SplineComponent) == 0x000A50, "Member 'AFortGrindRail::SplineComponent' has a wrong offset!");
static_assert(offsetof(AFortGrindRail, EnableBoosters) == 0x000A58, "Member 'AFortGrindRail::EnableBoosters' has a wrong offset!");
static_assert(offsetof(AFortGrindRail, EnableGrinding) == 0x000A80, "Member 'AFortGrindRail::EnableGrinding' has a wrong offset!");
static_assert(offsetof(AFortGrindRail, EnableProjectileCollision) == 0x000AA8, "Member 'AFortGrindRail::EnableProjectileCollision' has a wrong offset!");
static_assert(offsetof(AFortGrindRail, bDisableBooster) == 0x000AD0, "Member 'AFortGrindRail::bDisableBooster' has a wrong offset!");

class AFortGrindRailConnector : public ABuildingGameplayActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGrindRailConnector">();
	}
	static class AFortGrindRailConnector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortGrindRailConnector>();
	}
};
static_assert(alignof(AFortGrindRailConnector) == 0x000008, "Wrong alignment on AFortGrindRailConnector");
static_assert(sizeof(AFortGrindRailConnector) == 0x000A30, "Wrong size on AFortGrindRailConnector");

class UFortGrindRailLayerAnimInstance : public UFortBaseLayerAnimInstance
{
public:
	class UAnimMontage*                           LancePickaxeMontage;
	class UAnimMontage*                           ScythePickaxeMontage;
	class UAnimMontage*                           FruitCakePickaxeMontage;
	class FName                                   LeanAlphaCurve;
	class FName                                   MeleeTwistCurve;
	class FName                                   InterruptibleCurve;
	uint8                                         Pad_464[0x4];
	TMap<class FName, float>                      SlopeWarpingCurveMap;
	double                                        LeanBwdVelocityThreshold;
	struct FCachedAnimRelevancyData               BwdStartCachedData;
	uint8                                         Pad_4D4[0x4];
	double                                        IsMovingThresholdSpeed;
	double                                        NoisePlayRateSprintSpeedThreshold;
	struct FVector2D                              NoisePlayRateNormalSpeedInputRange;
	struct FVector2D                              NoisePlayRateNormalSpeedOutputRange;
	struct FVector2D                              NoisePlayRateHighSpeedInputRange;
	struct FVector2D                              NoisePlayRateHighSpeedOutputRange;
	struct FVector2D                              CombatNoisePlayRateSpeedInputRange;
	struct FVector2D                              CombatNoisePlayRateSpeedOutputRange;
	double                                        CombatNoiseAlphaTargeting;
	double                                        CombatNoiseAlphaNonTargeting;
	double                                        RootLeanAlphaInterpSpeed;
	double                                        SlopeWarpAlphaInterpSpeed;
	double                                        SplineRelativeAimYawDeltaThreshold;
	double                                        AimYawSmoothInterpolationCoefficient;
	double                                        IsSmoothingYawThreshold;
	double                                        LeanBWDThreshold;
	double                                        MuteUpperBodyAlphaMeleeWeapon;
	double                                        MuteUpperBodyAlphaNonMeleeWeapon;
	double                                        MuteUpperBodyAlphaFruitcakePickaxe;
	double                                        MuteUpperBodyAlphaLanceSyctheOrDualWeild;
	double                                        BaseLeanDirection;
	bool                                          bIsGrinding;
	uint8                                         Pad_5B1[0x7];
	double                                        CurrentSpeed;
	double                                        LeanDirection;
	bool                                          bSprinting;
	uint8                                         Pad_5C9[0x7];
	double                                        LeanForward;
	bool                                          bIsWeaponActive;
	uint8                                         Pad_5D9[0x7];
	struct FRotator                               SplineRelativeAim;
	struct FFortAnimInput_GrindRail               GrindRailInput;
	TWeakObjectPtr<class UFortPawnComponent_GrindRail> GrindingComponent;
	TWeakObjectPtr<class UCharacterMovementComponent> MovementComponent;
	TWeakObjectPtr<class AFortPlayerPawn>         FortPlayerPawn;
	bool                                          bIsFalling;
	uint8                                         Pad_629[0x7];
	double                                        LeanAlpha;
	bool                                          bIsMoving;
	bool                                          bShould180Turn;
	bool                                          bShouldPlayEntry;
	uint8                                         Pad_63B[0x5];
	double                                        NoisePlayRate;
	bool                                          bIsLeanBwd;
	bool                                          bIsLeft180Turn;
	bool                                          bShould180TurnAgain;
	bool                                          bIsTurning;
	bool                                          bShouldExitLocomotion;
	bool                                          bIsBoosting;
	bool                                          bEarlyExitFromEntry;
	bool                                          bAimFWD;
	bool                                          bAimBWD;
	bool                                          bAimLFT;
	bool                                          bAimRGT;
	uint8                                         Pad_653[0x5];
	double                                        AimFWDDeltaAngleDegrees;
	double                                        AimBWDDeltaAngleDegrees;
	double                                        AimLFTDeltaAngleDegrees;
	double                                        AimRGTDeltaAngleDegrees;
	double                                        NegativeYaw;
	struct FRotator                               MeleeTwistRot;
	double                                        BwdStartCachedTime;
	double                                        Velocity;
	bool                                          bIsEntryLeft;
	bool                                          bIsEntryFromAir;
	bool                                          bIsEntryRight;
	bool                                          bEnteredFromInteraction;
	uint8                                         Pad_6AC[0x4];
	double                                        SlopeWarpAlpha;
	double                                        SplineRelativeAimYaw;
	double                                        AimYawSmoothed;
	bool                                          bIsSmoothingYaw;
	uint8                                         Pad_6C9[0x7];
	double                                        LastSplineRelativeAimYaw;
	double                                        RootLeanAlpha;
	double                                        MuteUpperBodyAlpha;
	bool                                          bIsLanceType;
	bool                                          bWasSprinting;
	bool                                          bStateRuleToBoostLoop;
	bool                                          bIsInAction;
	uint8                                         Pad_6EC[0x4];
	double                                        CombatNoisePlayRate;
	double                                        CombatNoiseAlpha;
	bool                                          bIsTwoHandedMelee;
	bool                                          bShouldCorrectUpperBody;
	bool                                          bBothHandsDown;
	uint8                                         Pad_703[0x5];
	double                                        TurnInPlaceAnimCurveValue;
	double                                        TurnRotationAmountCurveValue;
	uint8                                         Pad_718[0x18];

public:
	void AnimNotify_EntryEnter(const class UAnimNotify* Notify);
	void AnimNotify_EntryExit(const class UAnimNotify* Notify);
	void AnimNotify_IdleEnter(const class UAnimNotify* Notify);
	void HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, const struct FVector& PreviousPlayerLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGrindRailLayerAnimInstance">();
	}
	static class UFortGrindRailLayerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGrindRailLayerAnimInstance>();
	}
};
static_assert(alignof(UFortGrindRailLayerAnimInstance) == 0x000010, "Wrong alignment on UFortGrindRailLayerAnimInstance");
static_assert(sizeof(UFortGrindRailLayerAnimInstance) == 0x000730, "Wrong size on UFortGrindRailLayerAnimInstance");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LancePickaxeMontage) == 0x000440, "Member 'UFortGrindRailLayerAnimInstance::LancePickaxeMontage' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, ScythePickaxeMontage) == 0x000448, "Member 'UFortGrindRailLayerAnimInstance::ScythePickaxeMontage' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, FruitCakePickaxeMontage) == 0x000450, "Member 'UFortGrindRailLayerAnimInstance::FruitCakePickaxeMontage' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanAlphaCurve) == 0x000458, "Member 'UFortGrindRailLayerAnimInstance::LeanAlphaCurve' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MeleeTwistCurve) == 0x00045C, "Member 'UFortGrindRailLayerAnimInstance::MeleeTwistCurve' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, InterruptibleCurve) == 0x000460, "Member 'UFortGrindRailLayerAnimInstance::InterruptibleCurve' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SlopeWarpingCurveMap) == 0x000468, "Member 'UFortGrindRailLayerAnimInstance::SlopeWarpingCurveMap' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanBwdVelocityThreshold) == 0x0004B8, "Member 'UFortGrindRailLayerAnimInstance::LeanBwdVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, BwdStartCachedData) == 0x0004C0, "Member 'UFortGrindRailLayerAnimInstance::BwdStartCachedData' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, IsMovingThresholdSpeed) == 0x0004D8, "Member 'UFortGrindRailLayerAnimInstance::IsMovingThresholdSpeed' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateSprintSpeedThreshold) == 0x0004E0, "Member 'UFortGrindRailLayerAnimInstance::NoisePlayRateSprintSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateNormalSpeedInputRange) == 0x0004E8, "Member 'UFortGrindRailLayerAnimInstance::NoisePlayRateNormalSpeedInputRange' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateNormalSpeedOutputRange) == 0x0004F8, "Member 'UFortGrindRailLayerAnimInstance::NoisePlayRateNormalSpeedOutputRange' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateHighSpeedInputRange) == 0x000508, "Member 'UFortGrindRailLayerAnimInstance::NoisePlayRateHighSpeedInputRange' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRateHighSpeedOutputRange) == 0x000518, "Member 'UFortGrindRailLayerAnimInstance::NoisePlayRateHighSpeedOutputRange' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoisePlayRateSpeedInputRange) == 0x000528, "Member 'UFortGrindRailLayerAnimInstance::CombatNoisePlayRateSpeedInputRange' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoisePlayRateSpeedOutputRange) == 0x000538, "Member 'UFortGrindRailLayerAnimInstance::CombatNoisePlayRateSpeedOutputRange' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoiseAlphaTargeting) == 0x000548, "Member 'UFortGrindRailLayerAnimInstance::CombatNoiseAlphaTargeting' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoiseAlphaNonTargeting) == 0x000550, "Member 'UFortGrindRailLayerAnimInstance::CombatNoiseAlphaNonTargeting' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, RootLeanAlphaInterpSpeed) == 0x000558, "Member 'UFortGrindRailLayerAnimInstance::RootLeanAlphaInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SlopeWarpAlphaInterpSpeed) == 0x000560, "Member 'UFortGrindRailLayerAnimInstance::SlopeWarpAlphaInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SplineRelativeAimYawDeltaThreshold) == 0x000568, "Member 'UFortGrindRailLayerAnimInstance::SplineRelativeAimYawDeltaThreshold' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimYawSmoothInterpolationCoefficient) == 0x000570, "Member 'UFortGrindRailLayerAnimInstance::AimYawSmoothInterpolationCoefficient' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, IsSmoothingYawThreshold) == 0x000578, "Member 'UFortGrindRailLayerAnimInstance::IsSmoothingYawThreshold' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanBWDThreshold) == 0x000580, "Member 'UFortGrindRailLayerAnimInstance::LeanBWDThreshold' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaMeleeWeapon) == 0x000588, "Member 'UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaMeleeWeapon' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaNonMeleeWeapon) == 0x000590, "Member 'UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaNonMeleeWeapon' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaFruitcakePickaxe) == 0x000598, "Member 'UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaFruitcakePickaxe' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlphaLanceSyctheOrDualWeild) == 0x0005A0, "Member 'UFortGrindRailLayerAnimInstance::MuteUpperBodyAlphaLanceSyctheOrDualWeild' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, BaseLeanDirection) == 0x0005A8, "Member 'UFortGrindRailLayerAnimInstance::BaseLeanDirection' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsGrinding) == 0x0005B0, "Member 'UFortGrindRailLayerAnimInstance::bIsGrinding' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CurrentSpeed) == 0x0005B8, "Member 'UFortGrindRailLayerAnimInstance::CurrentSpeed' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanDirection) == 0x0005C0, "Member 'UFortGrindRailLayerAnimInstance::LeanDirection' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bSprinting) == 0x0005C8, "Member 'UFortGrindRailLayerAnimInstance::bSprinting' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanForward) == 0x0005D0, "Member 'UFortGrindRailLayerAnimInstance::LeanForward' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsWeaponActive) == 0x0005D8, "Member 'UFortGrindRailLayerAnimInstance::bIsWeaponActive' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SplineRelativeAim) == 0x0005E0, "Member 'UFortGrindRailLayerAnimInstance::SplineRelativeAim' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, GrindRailInput) == 0x0005F8, "Member 'UFortGrindRailLayerAnimInstance::GrindRailInput' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, GrindingComponent) == 0x000610, "Member 'UFortGrindRailLayerAnimInstance::GrindingComponent' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MovementComponent) == 0x000618, "Member 'UFortGrindRailLayerAnimInstance::MovementComponent' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, FortPlayerPawn) == 0x000620, "Member 'UFortGrindRailLayerAnimInstance::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsFalling) == 0x000628, "Member 'UFortGrindRailLayerAnimInstance::bIsFalling' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LeanAlpha) == 0x000630, "Member 'UFortGrindRailLayerAnimInstance::LeanAlpha' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsMoving) == 0x000638, "Member 'UFortGrindRailLayerAnimInstance::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShould180Turn) == 0x000639, "Member 'UFortGrindRailLayerAnimInstance::bShould180Turn' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShouldPlayEntry) == 0x00063A, "Member 'UFortGrindRailLayerAnimInstance::bShouldPlayEntry' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NoisePlayRate) == 0x000640, "Member 'UFortGrindRailLayerAnimInstance::NoisePlayRate' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsLeanBwd) == 0x000648, "Member 'UFortGrindRailLayerAnimInstance::bIsLeanBwd' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsLeft180Turn) == 0x000649, "Member 'UFortGrindRailLayerAnimInstance::bIsLeft180Turn' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShould180TurnAgain) == 0x00064A, "Member 'UFortGrindRailLayerAnimInstance::bShould180TurnAgain' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsTurning) == 0x00064B, "Member 'UFortGrindRailLayerAnimInstance::bIsTurning' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShouldExitLocomotion) == 0x00064C, "Member 'UFortGrindRailLayerAnimInstance::bShouldExitLocomotion' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsBoosting) == 0x00064D, "Member 'UFortGrindRailLayerAnimInstance::bIsBoosting' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bEarlyExitFromEntry) == 0x00064E, "Member 'UFortGrindRailLayerAnimInstance::bEarlyExitFromEntry' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimFWD) == 0x00064F, "Member 'UFortGrindRailLayerAnimInstance::bAimFWD' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimBWD) == 0x000650, "Member 'UFortGrindRailLayerAnimInstance::bAimBWD' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimLFT) == 0x000651, "Member 'UFortGrindRailLayerAnimInstance::bAimLFT' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bAimRGT) == 0x000652, "Member 'UFortGrindRailLayerAnimInstance::bAimRGT' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimFWDDeltaAngleDegrees) == 0x000658, "Member 'UFortGrindRailLayerAnimInstance::AimFWDDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimBWDDeltaAngleDegrees) == 0x000660, "Member 'UFortGrindRailLayerAnimInstance::AimBWDDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimLFTDeltaAngleDegrees) == 0x000668, "Member 'UFortGrindRailLayerAnimInstance::AimLFTDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimRGTDeltaAngleDegrees) == 0x000670, "Member 'UFortGrindRailLayerAnimInstance::AimRGTDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, NegativeYaw) == 0x000678, "Member 'UFortGrindRailLayerAnimInstance::NegativeYaw' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MeleeTwistRot) == 0x000680, "Member 'UFortGrindRailLayerAnimInstance::MeleeTwistRot' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, BwdStartCachedTime) == 0x000698, "Member 'UFortGrindRailLayerAnimInstance::BwdStartCachedTime' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, Velocity) == 0x0006A0, "Member 'UFortGrindRailLayerAnimInstance::Velocity' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsEntryLeft) == 0x0006A8, "Member 'UFortGrindRailLayerAnimInstance::bIsEntryLeft' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsEntryFromAir) == 0x0006A9, "Member 'UFortGrindRailLayerAnimInstance::bIsEntryFromAir' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsEntryRight) == 0x0006AA, "Member 'UFortGrindRailLayerAnimInstance::bIsEntryRight' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bEnteredFromInteraction) == 0x0006AB, "Member 'UFortGrindRailLayerAnimInstance::bEnteredFromInteraction' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SlopeWarpAlpha) == 0x0006B0, "Member 'UFortGrindRailLayerAnimInstance::SlopeWarpAlpha' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, SplineRelativeAimYaw) == 0x0006B8, "Member 'UFortGrindRailLayerAnimInstance::SplineRelativeAimYaw' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, AimYawSmoothed) == 0x0006C0, "Member 'UFortGrindRailLayerAnimInstance::AimYawSmoothed' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsSmoothingYaw) == 0x0006C8, "Member 'UFortGrindRailLayerAnimInstance::bIsSmoothingYaw' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, LastSplineRelativeAimYaw) == 0x0006D0, "Member 'UFortGrindRailLayerAnimInstance::LastSplineRelativeAimYaw' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, RootLeanAlpha) == 0x0006D8, "Member 'UFortGrindRailLayerAnimInstance::RootLeanAlpha' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, MuteUpperBodyAlpha) == 0x0006E0, "Member 'UFortGrindRailLayerAnimInstance::MuteUpperBodyAlpha' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsLanceType) == 0x0006E8, "Member 'UFortGrindRailLayerAnimInstance::bIsLanceType' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bWasSprinting) == 0x0006E9, "Member 'UFortGrindRailLayerAnimInstance::bWasSprinting' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bStateRuleToBoostLoop) == 0x0006EA, "Member 'UFortGrindRailLayerAnimInstance::bStateRuleToBoostLoop' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsInAction) == 0x0006EB, "Member 'UFortGrindRailLayerAnimInstance::bIsInAction' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoisePlayRate) == 0x0006F0, "Member 'UFortGrindRailLayerAnimInstance::CombatNoisePlayRate' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, CombatNoiseAlpha) == 0x0006F8, "Member 'UFortGrindRailLayerAnimInstance::CombatNoiseAlpha' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bIsTwoHandedMelee) == 0x000700, "Member 'UFortGrindRailLayerAnimInstance::bIsTwoHandedMelee' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bShouldCorrectUpperBody) == 0x000701, "Member 'UFortGrindRailLayerAnimInstance::bShouldCorrectUpperBody' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, bBothHandsDown) == 0x000702, "Member 'UFortGrindRailLayerAnimInstance::bBothHandsDown' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, TurnInPlaceAnimCurveValue) == 0x000708, "Member 'UFortGrindRailLayerAnimInstance::TurnInPlaceAnimCurveValue' has a wrong offset!");
static_assert(offsetof(UFortGrindRailLayerAnimInstance, TurnRotationAmountCurveValue) == 0x000710, "Member 'UFortGrindRailLayerAnimInstance::TurnRotationAmountCurveValue' has a wrong offset!");

class UGrindRailMovementControls final : public UFortMovementControls
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GrindRailMovementControls">();
	}
	static class UGrindRailMovementControls* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGrindRailMovementControls>();
	}
};
static_assert(alignof(UGrindRailMovementControls) == 0x000008, "Wrong alignment on UGrindRailMovementControls");
static_assert(sizeof(UGrindRailMovementControls) == 0x000030, "Wrong size on UGrindRailMovementControls");

class UFortAthenaAIBotEvaluator_GrindRail final : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTag                           GrindRailTag;
	uint8                                         Pad_94[0x4];
	struct FScalableFloat                         GrindDuration;
	struct FScalableFloat                         GrindDurationRandomDeviation;
	uint8                                         Pad_E8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_GrindRail">();
	}
	static class UFortAthenaAIBotEvaluator_GrindRail* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_GrindRail>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_GrindRail) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_GrindRail");
static_assert(sizeof(UFortAthenaAIBotEvaluator_GrindRail) == 0x0000F8, "Wrong size on UFortAthenaAIBotEvaluator_GrindRail");
static_assert(offsetof(UFortAthenaAIBotEvaluator_GrindRail, GrindRailTag) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_GrindRail::GrindRailTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_GrindRail, GrindDuration) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_GrindRail::GrindDuration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_GrindRail, GrindDurationRandomDeviation) == 0x0000C0, "Member 'UFortAthenaAIBotEvaluator_GrindRail::GrindDurationRandomDeviation' has a wrong offset!");

class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop
{
public:
	bool                                          bFeetHasLanded;
	bool                                          bEnableNativeAudioUpdate;
	uint8                                         Pad_962[0x2];
	float                                         ForwardChangedValueThreshold;
	struct FFortAudioFloatParameter               Speed;
	struct FFortAudioFloatParameter               Forward;
	struct FFortAudioFloatParameter               Boost;
	struct FFortAudioFloatParameter               Curve;
	struct FFortAudioFloatParameter               IsGrinding;
	struct FFortAudioFloatParameter               IsSlowDown;
	class FName                                   LeanForwardSpeedName;
	class FName                                   TurnOnSpeedFXName;
	float                                         TurnOnSpeedFXThreshold;
	TWeakObjectPtr<class UFXSystemComponent>      EffectsComponent;
	uint8                                         Pad_ACC[0x4];
	class UAudioComponent*                        AudioComponent;
	class AFortPlayerPawn*                        PlayerPawn;
	class UFortPawnComponent_GrindRail*           GrindComponent;
	uint8                                         Pad_AE8[0x8];

public:
	void CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class AFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindRail* InGrindComponent);
	void OnForwardChanged(bool bNewState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayCueNotifyLoop_Grinding">();
	}
	static class AFortGameplayCueNotifyLoop_Grinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortGameplayCueNotifyLoop_Grinding>();
	}
};
static_assert(alignof(AFortGameplayCueNotifyLoop_Grinding) == 0x000008, "Wrong alignment on AFortGameplayCueNotifyLoop_Grinding");
static_assert(sizeof(AFortGameplayCueNotifyLoop_Grinding) == 0x000AF0, "Wrong size on AFortGameplayCueNotifyLoop_Grinding");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, bFeetHasLanded) == 0x000960, "Member 'AFortGameplayCueNotifyLoop_Grinding::bFeetHasLanded' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, bEnableNativeAudioUpdate) == 0x000961, "Member 'AFortGameplayCueNotifyLoop_Grinding::bEnableNativeAudioUpdate' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, ForwardChangedValueThreshold) == 0x000964, "Member 'AFortGameplayCueNotifyLoop_Grinding::ForwardChangedValueThreshold' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, Speed) == 0x000968, "Member 'AFortGameplayCueNotifyLoop_Grinding::Speed' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, Forward) == 0x0009A0, "Member 'AFortGameplayCueNotifyLoop_Grinding::Forward' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, Boost) == 0x0009D8, "Member 'AFortGameplayCueNotifyLoop_Grinding::Boost' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, Curve) == 0x000A10, "Member 'AFortGameplayCueNotifyLoop_Grinding::Curve' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, IsGrinding) == 0x000A48, "Member 'AFortGameplayCueNotifyLoop_Grinding::IsGrinding' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, IsSlowDown) == 0x000A80, "Member 'AFortGameplayCueNotifyLoop_Grinding::IsSlowDown' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, LeanForwardSpeedName) == 0x000AB8, "Member 'AFortGameplayCueNotifyLoop_Grinding::LeanForwardSpeedName' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, TurnOnSpeedFXName) == 0x000ABC, "Member 'AFortGameplayCueNotifyLoop_Grinding::TurnOnSpeedFXName' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, TurnOnSpeedFXThreshold) == 0x000AC0, "Member 'AFortGameplayCueNotifyLoop_Grinding::TurnOnSpeedFXThreshold' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, EffectsComponent) == 0x000AC4, "Member 'AFortGameplayCueNotifyLoop_Grinding::EffectsComponent' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, AudioComponent) == 0x000AD0, "Member 'AFortGameplayCueNotifyLoop_Grinding::AudioComponent' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, PlayerPawn) == 0x000AD8, "Member 'AFortGameplayCueNotifyLoop_Grinding::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Grinding, GrindComponent) == 0x000AE0, "Member 'AFortGameplayCueNotifyLoop_Grinding::GrindComponent' has a wrong offset!");

class UFortPawnComponent_GrindRail : public UFortPawnComponent
{
public:
	uint8                                         Pad_A8[0x8];
	bool                                          bUseNativeSpeedCalculation;
	uint8                                         Pad_B1[0x7];
	TMulticastInlineDelegate<void(struct FGrindRailMeshInfo& PreviousRailMeshInfo, struct FGrindRailMeshInfo& NewRailMeshInfo)> GrindMeshChangedDelegate;
	TMulticastInlineDelegate<void(class AFortGrindRail* OldRail, class AFortGrindRail* NewRail)> GrindRailChangedDelegate;
	TMulticastInlineDelegate<void(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, const struct FVector& PreviousPlayerLocation)> BegunGrindingDelegate;
	TMulticastInlineDelegate<void()>              HitObstacleWhenGrindingDelegate;
	TMulticastInlineDelegate<void(EGrindRailBoosterMode PreviousBoosterMode)> BoosterModeChangedDelegate;
	TMulticastInlineDelegate<void(bool bNewIsSprinting)> SprintingStateChangedDelegate;
	TMulticastInlineDelegate<void()>              EndedGrindingDelegate;
	float                                         LeanForward;
	float                                         LeanRight;
	float                                         BaseLeanRight;
	float                                         CurrentSpeedAlongSpline;
	struct FVector                                CurrentDirection;
	EGrindRailBoosterMode                         CurrentBoosterMode;
	bool                                          bShould180Turn;
	bool                                          bShould180TurnAgain;
	bool                                          bUseProtoRotation;
	uint8                                         Pad_154[0x4];
	struct FScalableFloat                         BaseMaxLeanAngularSpeed;
	struct FScalableFloat                         BaseLeanInterpSpeed;
	TWeakObjectPtr<class AFortGrindRail>          ReplicatedGrindingRail;
	TWeakObjectPtr<class AFortGrindRail>          PreviousGrindingRail;
	TWeakObjectPtr<class AFortGrindRail>          GrindingRail;
	TWeakObjectPtr<class AFortGrindRail>          NextGrindingRail;
	struct FGrindRailMeshInfo                     CurrentRailMeshInfo;
	bool                                          bIsGrinding;
	bool                                          bIsGrindJumping;
	bool                                          bIsSprinting;
	bool                                          bWeaponHolstered;
	bool                                          bJumpInputReady;
	uint8                                         Pad_1E5[0x3];
	float                                         GrindStartDistance;
	float                                         CurrentDistanceAlongSpline;
	struct FVector                                NativeLastRailLocation;
	float                                         NativeMaxSpeed;
	uint8                                         Pad_20C[0x4];
	struct FRotator                               GoalRotation;
	bool                                          bIs180Turning;
	uint8                                         Pad_229[0x3];
	float                                         HorizontalSplineAngleDeltaDegrees;
	struct FScalableFloat                         MaxAllowedInclineSplinePitch;
	struct FScalableFloat                         MaxAllowedDeclineSplinePitch;
	struct FScalableFloat                         MaxAllowedShootingSplinePitch;
	struct FScalableFloat                         TurnAngleThreshold;
	struct FScalableFloat                         AnimatedTurnDuration;
	struct FScalableFloat                         BaseGrindRailYawRotationInterpSpeed;
	struct FScalableFloat                         InclineGrindRailPitchRotationInterpSpeed;
	struct FScalableFloat                         DeclineGrindRailPitchRotationInterpSpeed;
	struct FScalableFloat                         ShootingGrindRailRotationInterpSpeed;
	struct FScalableFloat                         NextGrindRailDetectionOffset;
	struct FGameplayTag                           CancelGrindingTag;
	uint8                                         Pad_3C4[0x4];
	struct FScalableFloat                         GrindInteractionReentryCooldownTime;
	struct FScalableFloat                         ForceGrindingFromWalking;
	struct FScalableFloat                         MinTimeBeforeJumpSinceEntry;
	struct FScalableFloat                         CancelSprintLeanBackThreshold;
	struct FScalableFloat                         WeaponHolsterCooldown;
	struct FScalableFloat                         WeaponIsShootingCooldown;
	struct FScalableFloat                         GravityForceWhenGoingDown;
	struct FScalableFloat                         GravityForceWhenGoingUp;
	struct FScalableFloat                         BoosterSprintingAccelerationOnSlowDownBooster;
	struct FScalableFloat                         BoosterAccelerationOnSpeedUpBooster;
	struct FScalableFloat                         BoosterSlowDownBoosterDragMultiplier;
	struct FScalableFloat                         BoosterSlowDownBoosterGoalSpeed;
	struct FScalableFloat                         BoosterMaxSpeed;
	struct FScalableFloat                         ShootingMaxSpeedMultiplier;
	struct FScalableFloat                         AngleForMaxSpeedIncreaseFromDownwardSlope;
	struct FScalableFloat                         MaxSpeedIncreaseFromDownwardSlope;
	struct FScalableFloat                         MaxDragForSpeedSoftCap;
	struct FScalableFloat                         SpeedHardCap;
	struct FScalableFloat                         SprintingAcceleration;
	struct FScalableFloat                         SprintingMaxSpeed;
	struct FScalableFloat                         SpeedThresholdForTurn;
	struct FScalableFloat                         TimeToTurnAround;
	struct FScalableFloat                         SpeedForMaxLeanAcceleration;
	struct FScalableFloat                         SpeedForMinLeanAcceleration;
	struct FScalableFloat                         MaxLeanAcceleration;
	struct FScalableFloat                         MinLeanAcceleration;
	struct FScalableFloat                         CanAccelerateByLeaningIntoTurns;
	struct FScalableFloat                         CurvatureForMaxLeanIntoTurnsAcceleration;
	struct FScalableFloat                         LeanIntoTurnsMaxAcceleration;
	struct FScalableFloat                         IncreasedMaxSpeedFromLeanIntoTurn;
	struct FScalableFloat                         UseNewCalculationForSidewaysLeanBoost;
	struct FScalableFloat                         SidewaysLeanBoostReductionRate;
	struct FScalableFloat                         SpeedForMaxBaseAcceleration;
	struct FScalableFloat                         SpeedForMinBaseAcceleration;
	struct FScalableFloat                         MaxBaseAcceleration;
	struct FScalableFloat                         MinBaseAcceleration;
	struct FScalableFloat                         BaseGoalSpeed;
	struct FScalableFloat                         BaseMaxSpeed;
	struct FScalableFloat                         EnableFriction;
	struct FScalableFloat                         BaseGoalDecelerationSpeed;
	struct FScalableFloat                         FrictionWhenNotLeaning;
	struct FScalableFloat                         SpeedMultiplierOnHitRailCap;
	struct FScalableFloat                         MinSpeedAfterBouncedOffRailCap;
	uint8                                         Pad_A80[0x38];
	struct FGrindRailMeshInfo                     PreviousRailMeshInfo;
	uint8                                         Pad_AD0[0x180];

public:
	void AddMoveIgnoreActor(class ABuildingActor* BuildingActor);
	bool AttemptDestroyVehicleWhileGrinding(class AFortAthenaVehicle* Vehicle);
	void BeginGrinding(class AFortGrindRail* GrindRail, const float OptionalStartDistance, const bool bFromInteraction);
	void CalculateVelocity(const float DeltaTime, const bool bReplayingMovement, struct FVector* OutVelocity);
	bool CanBeginGrinding();
	void EndGrinding(const bool bSetEndMovementMode);
	void HandleGrindFinishedAfterJumping();
	void HandleGrindingBegun();
	void HandleGrindingEnded();
	void HandleGrindingEndedFromReplication();
	void HandleHitWhenGrinding(const struct FHitResult& Hit);
	void HandleJumpOffEnd();
	void HandleRailJump();
	void OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);
	void OnIgnoredBuildingEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
	void OnJumpInput(bool bPressed);
	void OnMovementModeChanged(class ACharacter* InCharacter, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnReloadInput();
	void OnRep_CurrentBoosterMode(const EGrindRailBoosterMode PreviousBoosterMode);
	void OnRep_CurrentRailMeshInfo();
	void OnRep_GrindingRail();
	void OnRep_IsSprinting();
	void OnWalkingBaseChanged(class AActor* NewBase);
	void RemoveMoveIgnoreActors();
	void ServerUpdateWeaponHolstered(const bool bNewHolstered, const bool bPlayEquipAnim);
	void SetGrindBaseActor(class AActor* NewBaseActor);
	void SetGrindDistanceOnSpline(const float NewDistanceOnSpline);
	void SetIsSprinting(const bool bNewIsSprinting);
	void SetMovementStatus(const struct FVector& NewStatus);

	void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas) const;
	void GetCameraOrientedLeanValues(const float RawLeanForward, const float RawLeanRight, float* OrientedLeanForward, float* OrientedLeanRight) const;
	class AActor* GetGrindBaseActor() const;
	float GetGrindDistanceOnSpline() const;
	bool GetGrindRequestJump() const;
	float GetHorizontalSplineAngleDeltaDegrees() const;
	float GetLeanForwardSpeedNormalized() const;
	struct FVector GetMovementStatus() const;
	float GetSpeedHardCap() const;
	bool GetWantsToGrind() const;
	bool IsGrinding() const;
	bool IsUsingToggleSprint() const;
	bool IsWeaponActive() const;
	bool IsWeaponADS() const;
	bool NativeIsShooting() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_GrindRail">();
	}
	static class UFortPawnComponent_GrindRail* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_GrindRail>();
	}
};
static_assert(alignof(UFortPawnComponent_GrindRail) == 0x000008, "Wrong alignment on UFortPawnComponent_GrindRail");
static_assert(sizeof(UFortPawnComponent_GrindRail) == 0x000C50, "Wrong size on UFortPawnComponent_GrindRail");
static_assert(offsetof(UFortPawnComponent_GrindRail, bUseNativeSpeedCalculation) == 0x0000B0, "Member 'UFortPawnComponent_GrindRail::bUseNativeSpeedCalculation' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GrindMeshChangedDelegate) == 0x0000B8, "Member 'UFortPawnComponent_GrindRail::GrindMeshChangedDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GrindRailChangedDelegate) == 0x0000C8, "Member 'UFortPawnComponent_GrindRail::GrindRailChangedDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BegunGrindingDelegate) == 0x0000D8, "Member 'UFortPawnComponent_GrindRail::BegunGrindingDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, HitObstacleWhenGrindingDelegate) == 0x0000E8, "Member 'UFortPawnComponent_GrindRail::HitObstacleWhenGrindingDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BoosterModeChangedDelegate) == 0x0000F8, "Member 'UFortPawnComponent_GrindRail::BoosterModeChangedDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SprintingStateChangedDelegate) == 0x000108, "Member 'UFortPawnComponent_GrindRail::SprintingStateChangedDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, EndedGrindingDelegate) == 0x000118, "Member 'UFortPawnComponent_GrindRail::EndedGrindingDelegate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, LeanForward) == 0x000128, "Member 'UFortPawnComponent_GrindRail::LeanForward' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, LeanRight) == 0x00012C, "Member 'UFortPawnComponent_GrindRail::LeanRight' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseLeanRight) == 0x000130, "Member 'UFortPawnComponent_GrindRail::BaseLeanRight' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CurrentSpeedAlongSpline) == 0x000134, "Member 'UFortPawnComponent_GrindRail::CurrentSpeedAlongSpline' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CurrentDirection) == 0x000138, "Member 'UFortPawnComponent_GrindRail::CurrentDirection' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CurrentBoosterMode) == 0x000150, "Member 'UFortPawnComponent_GrindRail::CurrentBoosterMode' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bShould180Turn) == 0x000151, "Member 'UFortPawnComponent_GrindRail::bShould180Turn' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bShould180TurnAgain) == 0x000152, "Member 'UFortPawnComponent_GrindRail::bShould180TurnAgain' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bUseProtoRotation) == 0x000153, "Member 'UFortPawnComponent_GrindRail::bUseProtoRotation' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseMaxLeanAngularSpeed) == 0x000158, "Member 'UFortPawnComponent_GrindRail::BaseMaxLeanAngularSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseLeanInterpSpeed) == 0x000180, "Member 'UFortPawnComponent_GrindRail::BaseLeanInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, ReplicatedGrindingRail) == 0x0001A8, "Member 'UFortPawnComponent_GrindRail::ReplicatedGrindingRail' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, PreviousGrindingRail) == 0x0001B0, "Member 'UFortPawnComponent_GrindRail::PreviousGrindingRail' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GrindingRail) == 0x0001B8, "Member 'UFortPawnComponent_GrindRail::GrindingRail' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, NextGrindingRail) == 0x0001C0, "Member 'UFortPawnComponent_GrindRail::NextGrindingRail' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CurrentRailMeshInfo) == 0x0001C8, "Member 'UFortPawnComponent_GrindRail::CurrentRailMeshInfo' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bIsGrinding) == 0x0001E0, "Member 'UFortPawnComponent_GrindRail::bIsGrinding' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bIsGrindJumping) == 0x0001E1, "Member 'UFortPawnComponent_GrindRail::bIsGrindJumping' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bIsSprinting) == 0x0001E2, "Member 'UFortPawnComponent_GrindRail::bIsSprinting' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bWeaponHolstered) == 0x0001E3, "Member 'UFortPawnComponent_GrindRail::bWeaponHolstered' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bJumpInputReady) == 0x0001E4, "Member 'UFortPawnComponent_GrindRail::bJumpInputReady' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GrindStartDistance) == 0x0001E8, "Member 'UFortPawnComponent_GrindRail::GrindStartDistance' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CurrentDistanceAlongSpline) == 0x0001EC, "Member 'UFortPawnComponent_GrindRail::CurrentDistanceAlongSpline' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, NativeLastRailLocation) == 0x0001F0, "Member 'UFortPawnComponent_GrindRail::NativeLastRailLocation' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, NativeMaxSpeed) == 0x000208, "Member 'UFortPawnComponent_GrindRail::NativeMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GoalRotation) == 0x000210, "Member 'UFortPawnComponent_GrindRail::GoalRotation' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, bIs180Turning) == 0x000228, "Member 'UFortPawnComponent_GrindRail::bIs180Turning' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, HorizontalSplineAngleDeltaDegrees) == 0x00022C, "Member 'UFortPawnComponent_GrindRail::HorizontalSplineAngleDeltaDegrees' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxAllowedInclineSplinePitch) == 0x000230, "Member 'UFortPawnComponent_GrindRail::MaxAllowedInclineSplinePitch' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxAllowedDeclineSplinePitch) == 0x000258, "Member 'UFortPawnComponent_GrindRail::MaxAllowedDeclineSplinePitch' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxAllowedShootingSplinePitch) == 0x000280, "Member 'UFortPawnComponent_GrindRail::MaxAllowedShootingSplinePitch' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, TurnAngleThreshold) == 0x0002A8, "Member 'UFortPawnComponent_GrindRail::TurnAngleThreshold' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, AnimatedTurnDuration) == 0x0002D0, "Member 'UFortPawnComponent_GrindRail::AnimatedTurnDuration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseGrindRailYawRotationInterpSpeed) == 0x0002F8, "Member 'UFortPawnComponent_GrindRail::BaseGrindRailYawRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, InclineGrindRailPitchRotationInterpSpeed) == 0x000320, "Member 'UFortPawnComponent_GrindRail::InclineGrindRailPitchRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, DeclineGrindRailPitchRotationInterpSpeed) == 0x000348, "Member 'UFortPawnComponent_GrindRail::DeclineGrindRailPitchRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, ShootingGrindRailRotationInterpSpeed) == 0x000370, "Member 'UFortPawnComponent_GrindRail::ShootingGrindRailRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, NextGrindRailDetectionOffset) == 0x000398, "Member 'UFortPawnComponent_GrindRail::NextGrindRailDetectionOffset' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CancelGrindingTag) == 0x0003C0, "Member 'UFortPawnComponent_GrindRail::CancelGrindingTag' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GrindInteractionReentryCooldownTime) == 0x0003C8, "Member 'UFortPawnComponent_GrindRail::GrindInteractionReentryCooldownTime' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, ForceGrindingFromWalking) == 0x0003F0, "Member 'UFortPawnComponent_GrindRail::ForceGrindingFromWalking' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MinTimeBeforeJumpSinceEntry) == 0x000418, "Member 'UFortPawnComponent_GrindRail::MinTimeBeforeJumpSinceEntry' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CancelSprintLeanBackThreshold) == 0x000440, "Member 'UFortPawnComponent_GrindRail::CancelSprintLeanBackThreshold' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, WeaponHolsterCooldown) == 0x000468, "Member 'UFortPawnComponent_GrindRail::WeaponHolsterCooldown' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, WeaponIsShootingCooldown) == 0x000490, "Member 'UFortPawnComponent_GrindRail::WeaponIsShootingCooldown' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GravityForceWhenGoingDown) == 0x0004B8, "Member 'UFortPawnComponent_GrindRail::GravityForceWhenGoingDown' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, GravityForceWhenGoingUp) == 0x0004E0, "Member 'UFortPawnComponent_GrindRail::GravityForceWhenGoingUp' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BoosterSprintingAccelerationOnSlowDownBooster) == 0x000508, "Member 'UFortPawnComponent_GrindRail::BoosterSprintingAccelerationOnSlowDownBooster' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BoosterAccelerationOnSpeedUpBooster) == 0x000530, "Member 'UFortPawnComponent_GrindRail::BoosterAccelerationOnSpeedUpBooster' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BoosterSlowDownBoosterDragMultiplier) == 0x000558, "Member 'UFortPawnComponent_GrindRail::BoosterSlowDownBoosterDragMultiplier' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BoosterSlowDownBoosterGoalSpeed) == 0x000580, "Member 'UFortPawnComponent_GrindRail::BoosterSlowDownBoosterGoalSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BoosterMaxSpeed) == 0x0005A8, "Member 'UFortPawnComponent_GrindRail::BoosterMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, ShootingMaxSpeedMultiplier) == 0x0005D0, "Member 'UFortPawnComponent_GrindRail::ShootingMaxSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, AngleForMaxSpeedIncreaseFromDownwardSlope) == 0x0005F8, "Member 'UFortPawnComponent_GrindRail::AngleForMaxSpeedIncreaseFromDownwardSlope' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxSpeedIncreaseFromDownwardSlope) == 0x000620, "Member 'UFortPawnComponent_GrindRail::MaxSpeedIncreaseFromDownwardSlope' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxDragForSpeedSoftCap) == 0x000648, "Member 'UFortPawnComponent_GrindRail::MaxDragForSpeedSoftCap' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedHardCap) == 0x000670, "Member 'UFortPawnComponent_GrindRail::SpeedHardCap' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SprintingAcceleration) == 0x000698, "Member 'UFortPawnComponent_GrindRail::SprintingAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SprintingMaxSpeed) == 0x0006C0, "Member 'UFortPawnComponent_GrindRail::SprintingMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedThresholdForTurn) == 0x0006E8, "Member 'UFortPawnComponent_GrindRail::SpeedThresholdForTurn' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, TimeToTurnAround) == 0x000710, "Member 'UFortPawnComponent_GrindRail::TimeToTurnAround' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedForMaxLeanAcceleration) == 0x000738, "Member 'UFortPawnComponent_GrindRail::SpeedForMaxLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedForMinLeanAcceleration) == 0x000760, "Member 'UFortPawnComponent_GrindRail::SpeedForMinLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxLeanAcceleration) == 0x000788, "Member 'UFortPawnComponent_GrindRail::MaxLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MinLeanAcceleration) == 0x0007B0, "Member 'UFortPawnComponent_GrindRail::MinLeanAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CanAccelerateByLeaningIntoTurns) == 0x0007D8, "Member 'UFortPawnComponent_GrindRail::CanAccelerateByLeaningIntoTurns' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, CurvatureForMaxLeanIntoTurnsAcceleration) == 0x000800, "Member 'UFortPawnComponent_GrindRail::CurvatureForMaxLeanIntoTurnsAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, LeanIntoTurnsMaxAcceleration) == 0x000828, "Member 'UFortPawnComponent_GrindRail::LeanIntoTurnsMaxAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, IncreasedMaxSpeedFromLeanIntoTurn) == 0x000850, "Member 'UFortPawnComponent_GrindRail::IncreasedMaxSpeedFromLeanIntoTurn' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, UseNewCalculationForSidewaysLeanBoost) == 0x000878, "Member 'UFortPawnComponent_GrindRail::UseNewCalculationForSidewaysLeanBoost' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SidewaysLeanBoostReductionRate) == 0x0008A0, "Member 'UFortPawnComponent_GrindRail::SidewaysLeanBoostReductionRate' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedForMaxBaseAcceleration) == 0x0008C8, "Member 'UFortPawnComponent_GrindRail::SpeedForMaxBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedForMinBaseAcceleration) == 0x0008F0, "Member 'UFortPawnComponent_GrindRail::SpeedForMinBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MaxBaseAcceleration) == 0x000918, "Member 'UFortPawnComponent_GrindRail::MaxBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MinBaseAcceleration) == 0x000940, "Member 'UFortPawnComponent_GrindRail::MinBaseAcceleration' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseGoalSpeed) == 0x000968, "Member 'UFortPawnComponent_GrindRail::BaseGoalSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseMaxSpeed) == 0x000990, "Member 'UFortPawnComponent_GrindRail::BaseMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, EnableFriction) == 0x0009B8, "Member 'UFortPawnComponent_GrindRail::EnableFriction' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, BaseGoalDecelerationSpeed) == 0x0009E0, "Member 'UFortPawnComponent_GrindRail::BaseGoalDecelerationSpeed' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, FrictionWhenNotLeaning) == 0x000A08, "Member 'UFortPawnComponent_GrindRail::FrictionWhenNotLeaning' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, SpeedMultiplierOnHitRailCap) == 0x000A30, "Member 'UFortPawnComponent_GrindRail::SpeedMultiplierOnHitRailCap' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, MinSpeedAfterBouncedOffRailCap) == 0x000A58, "Member 'UFortPawnComponent_GrindRail::MinSpeedAfterBouncedOffRailCap' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_GrindRail, PreviousRailMeshInfo) == 0x000AB8, "Member 'UFortPawnComponent_GrindRail::PreviousRailMeshInfo' has a wrong offset!");

}
