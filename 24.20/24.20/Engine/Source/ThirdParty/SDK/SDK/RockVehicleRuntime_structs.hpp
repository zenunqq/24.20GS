#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

enum class ERockBoostLogic : uint8
{
	Standard                                 = 0,
	Recharge                                 = 1,
	Infinite                                 = 2,
	ERockBoostLogic_MAX                      = 3,
};

struct FRockVehicleState final
{
public:
	struct FReplicatedPhysicsPawnState            RigidBodyState;
	struct FFortAthenaVehicleInputState           PrevDriverInput;
	bool                                          bWheelsOnGround;
	bool                                          bAnyWheelsOnGround;
	uint8                                         Pad_C2[0x6];
	struct FVector                                AverageSpringNormal;
};
static_assert(alignof(FRockVehicleState) == 0x000010, "Wrong alignment on FRockVehicleState");
static_assert(sizeof(FRockVehicleState) == 0x0000E0, "Wrong size on FRockVehicleState");
static_assert(offsetof(FRockVehicleState, RigidBodyState) == 0x000000, "Member 'FRockVehicleState::RigidBodyState' has a wrong offset!");
static_assert(offsetof(FRockVehicleState, PrevDriverInput) == 0x000080, "Member 'FRockVehicleState::PrevDriverInput' has a wrong offset!");
static_assert(offsetof(FRockVehicleState, bWheelsOnGround) == 0x0000C0, "Member 'FRockVehicleState::bWheelsOnGround' has a wrong offset!");
static_assert(offsetof(FRockVehicleState, bAnyWheelsOnGround) == 0x0000C1, "Member 'FRockVehicleState::bAnyWheelsOnGround' has a wrong offset!");
static_assert(offsetof(FRockVehicleState, AverageSpringNormal) == 0x0000C8, "Member 'FRockVehicleState::AverageSpringNormal' has a wrong offset!");

struct FGroundTrailsData final
{
public:
	EPhysicalSurface                              SurfaceType;
	uint8                                         Pad_1[0x7];
	class UNiagaraSystem*                         NiagaraFX;
};
static_assert(alignof(FGroundTrailsData) == 0x000008, "Wrong alignment on FGroundTrailsData");
static_assert(sizeof(FGroundTrailsData) == 0x000010, "Wrong size on FGroundTrailsData");
static_assert(offsetof(FGroundTrailsData, SurfaceType) == 0x000000, "Member 'FGroundTrailsData::SurfaceType' has a wrong offset!");
static_assert(offsetof(FGroundTrailsData, NiagaraFX) == 0x000008, "Member 'FGroundTrailsData::NiagaraFX' has a wrong offset!");

struct FGroundTrailsMap final
{
public:
	class UNiagaraSystem*                         DefaultTrails;
	TArray<struct FGroundTrailsData>              GroundTrails;
};
static_assert(alignof(FGroundTrailsMap) == 0x000008, "Wrong alignment on FGroundTrailsMap");
static_assert(sizeof(FGroundTrailsMap) == 0x000018, "Wrong size on FGroundTrailsMap");
static_assert(offsetof(FGroundTrailsMap, DefaultTrails) == 0x000000, "Member 'FGroundTrailsMap::DefaultTrails' has a wrong offset!");
static_assert(offsetof(FGroundTrailsMap, GroundTrails) == 0x000008, "Member 'FGroundTrailsMap::GroundTrails' has a wrong offset!");

struct FRockRuntimeConfigOverrides final
{
public:
	bool                                          bDamageFriendlyVehicles;
	bool                                          bDamageOtherVehicles;
	bool                                          bDamageOwnVehicle;
	bool                                          bDamageAllowedFromOtherVehicle;
};
static_assert(alignof(FRockRuntimeConfigOverrides) == 0x000001, "Wrong alignment on FRockRuntimeConfigOverrides");
static_assert(sizeof(FRockRuntimeConfigOverrides) == 0x000004, "Wrong size on FRockRuntimeConfigOverrides");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageFriendlyVehicles) == 0x000000, "Member 'FRockRuntimeConfigOverrides::bDamageFriendlyVehicles' has a wrong offset!");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageOtherVehicles) == 0x000001, "Member 'FRockRuntimeConfigOverrides::bDamageOtherVehicles' has a wrong offset!");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageOwnVehicle) == 0x000002, "Member 'FRockRuntimeConfigOverrides::bDamageOwnVehicle' has a wrong offset!");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageAllowedFromOtherVehicle) == 0x000003, "Member 'FRockRuntimeConfigOverrides::bDamageAllowedFromOtherVehicle' has a wrong offset!");

struct FRockScalableFloat final : public FScalableFloat
{
public:
	float                                         CachedValue;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FRockScalableFloat) == 0x000008, "Wrong alignment on FRockScalableFloat");
static_assert(sizeof(FRockScalableFloat) == 0x000030, "Wrong size on FRockScalableFloat");
static_assert(offsetof(FRockScalableFloat, CachedValue) == 0x000028, "Member 'FRockScalableFloat::CachedValue' has a wrong offset!");

struct FBouncyChassisState final
{
public:
	float                                         PitchDegrees;
	float                                         RollDegrees;
	float                                         TranslationZ;
};
static_assert(alignof(FBouncyChassisState) == 0x000004, "Wrong alignment on FBouncyChassisState");
static_assert(sizeof(FBouncyChassisState) == 0x00000C, "Wrong size on FBouncyChassisState");
static_assert(offsetof(FBouncyChassisState, PitchDegrees) == 0x000000, "Member 'FBouncyChassisState::PitchDegrees' has a wrong offset!");
static_assert(offsetof(FBouncyChassisState, RollDegrees) == 0x000004, "Member 'FBouncyChassisState::RollDegrees' has a wrong offset!");
static_assert(offsetof(FBouncyChassisState, TranslationZ) == 0x000008, "Member 'FBouncyChassisState::TranslationZ' has a wrong offset!");

struct FAnimNode_RockVehicleController final : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                         ChassisBone;
	struct FBouncyChassisState                    BouncyChassis;
};
static_assert(alignof(FAnimNode_RockVehicleController) == 0x000008, "Wrong alignment on FAnimNode_RockVehicleController");
static_assert(sizeof(FAnimNode_RockVehicleController) == 0x0000E0, "Wrong size on FAnimNode_RockVehicleController");
static_assert(offsetof(FAnimNode_RockVehicleController, ChassisBone) == 0x0000C8, "Member 'FAnimNode_RockVehicleController::ChassisBone' has a wrong offset!");
static_assert(offsetof(FAnimNode_RockVehicleController, BouncyChassis) == 0x0000D4, "Member 'FAnimNode_RockVehicleController::BouncyChassis' has a wrong offset!");

struct FRockBoxSpringSetup final
{
public:
	struct FVector                                Strength;
	struct FVector                                Damping;
	struct FVector                                MaxDisplacement;
	float                                         MaxSpeed;
	float                                         Mass;
};
static_assert(alignof(FRockBoxSpringSetup) == 0x000008, "Wrong alignment on FRockBoxSpringSetup");
static_assert(sizeof(FRockBoxSpringSetup) == 0x000050, "Wrong size on FRockBoxSpringSetup");
static_assert(offsetof(FRockBoxSpringSetup, Strength) == 0x000000, "Member 'FRockBoxSpringSetup::Strength' has a wrong offset!");
static_assert(offsetof(FRockBoxSpringSetup, Damping) == 0x000018, "Member 'FRockBoxSpringSetup::Damping' has a wrong offset!");
static_assert(offsetof(FRockBoxSpringSetup, MaxDisplacement) == 0x000030, "Member 'FRockBoxSpringSetup::MaxDisplacement' has a wrong offset!");
static_assert(offsetof(FRockBoxSpringSetup, MaxSpeed) == 0x000048, "Member 'FRockBoxSpringSetup::MaxSpeed' has a wrong offset!");
static_assert(offsetof(FRockBoxSpringSetup, Mass) == 0x00004C, "Member 'FRockBoxSpringSetup::Mass' has a wrong offset!");

struct FRockBoxSpring final
{
public:
	struct FRockBoxSpringSetup                    Setup;
	uint8                                         Pad_50[0x60];
};
static_assert(alignof(FRockBoxSpring) == 0x000008, "Wrong alignment on FRockBoxSpring");
static_assert(sizeof(FRockBoxSpring) == 0x0000B0, "Wrong size on FRockBoxSpring");
static_assert(offsetof(FRockBoxSpring, Setup) == 0x000000, "Member 'FRockBoxSpring::Setup' has a wrong offset!");

struct FSpringSettings final
{
public:
	float                                         Strength;
	float                                         Damping;
};
static_assert(alignof(FSpringSettings) == 0x000004, "Wrong alignment on FSpringSettings");
static_assert(sizeof(FSpringSettings) == 0x000008, "Wrong size on FSpringSettings");
static_assert(offsetof(FSpringSettings, Strength) == 0x000000, "Member 'FSpringSettings::Strength' has a wrong offset!");
static_assert(offsetof(FSpringSettings, Damping) == 0x000004, "Member 'FSpringSettings::Damping' has a wrong offset!");

struct FBouncyChassisSetup final
{
public:
	struct FSpringSettings                        PitchSpring;
	float                                         PitchMaxAngleDegrees;
	struct FSpringSettings                        RollSpring;
	float                                         RollMaxAngleDegrees;
	struct FSpringSettings                        ZSpring;
	float                                         ZMaxDrop;
	float                                         ZMaxRaise;
	struct FVector                                MaxDisplacement;
	struct FVector                                MassOffset;
};
static_assert(alignof(FBouncyChassisSetup) == 0x000008, "Wrong alignment on FBouncyChassisSetup");
static_assert(sizeof(FBouncyChassisSetup) == 0x000058, "Wrong size on FBouncyChassisSetup");
static_assert(offsetof(FBouncyChassisSetup, PitchSpring) == 0x000000, "Member 'FBouncyChassisSetup::PitchSpring' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, PitchMaxAngleDegrees) == 0x000008, "Member 'FBouncyChassisSetup::PitchMaxAngleDegrees' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, RollSpring) == 0x00000C, "Member 'FBouncyChassisSetup::RollSpring' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, RollMaxAngleDegrees) == 0x000014, "Member 'FBouncyChassisSetup::RollMaxAngleDegrees' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, ZSpring) == 0x000018, "Member 'FBouncyChassisSetup::ZSpring' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, ZMaxDrop) == 0x000020, "Member 'FBouncyChassisSetup::ZMaxDrop' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, ZMaxRaise) == 0x000024, "Member 'FBouncyChassisSetup::ZMaxRaise' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, MaxDisplacement) == 0x000028, "Member 'FBouncyChassisSetup::MaxDisplacement' has a wrong offset!");
static_assert(offsetof(FBouncyChassisSetup, MassOffset) == 0x000040, "Member 'FBouncyChassisSetup::MassOffset' has a wrong offset!");

struct FBouncyChassisInstance final
{
public:
	struct FRockBoxSpring                         Spring;
	uint8                                         Pad_B0[0x68];
};
static_assert(alignof(FBouncyChassisInstance) == 0x000008, "Wrong alignment on FBouncyChassisInstance");
static_assert(sizeof(FBouncyChassisInstance) == 0x000118, "Wrong size on FBouncyChassisInstance");
static_assert(offsetof(FBouncyChassisInstance, Spring) == 0x000000, "Member 'FBouncyChassisInstance::Spring' has a wrong offset!");

struct alignas(0x08) FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FRockVehicleAbilityInPersistent) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent");
static_assert(sizeof(FRockVehicleAbilityInPersistent) == 0x000008, "Wrong size on FRockVehicleAbilityInPersistent");

struct FRockVehicleAbilityInPersistent_AirControl final : public FRockVehicleAbilityInPersistent
{
public:
	struct FVector                                TorqueAccel;
	struct FVector                                TorqueDamping;
	float                                         DisableForDodgeTime;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_AirControl) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_AirControl");
static_assert(sizeof(FRockVehicleAbilityInPersistent_AirControl) == 0x000040, "Wrong size on FRockVehicleAbilityInPersistent_AirControl");
static_assert(offsetof(FRockVehicleAbilityInPersistent_AirControl, TorqueAccel) == 0x000008, "Member 'FRockVehicleAbilityInPersistent_AirControl::TorqueAccel' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInPersistent_AirControl, TorqueDamping) == 0x000020, "Member 'FRockVehicleAbilityInPersistent_AirControl::TorqueDamping' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInPersistent_AirControl, DisableForDodgeTime) == 0x000038, "Member 'FRockVehicleAbilityInPersistent_AirControl::DisableForDodgeTime' has a wrong offset!");

struct FRockVehicleAbilityInContinuous
{
public:
	struct FFortAthenaVehicleInputState           InputState;
};
static_assert(alignof(FRockVehicleAbilityInContinuous) == 0x000008, "Wrong alignment on FRockVehicleAbilityInContinuous");
static_assert(sizeof(FRockVehicleAbilityInContinuous) == 0x000040, "Wrong size on FRockVehicleAbilityInContinuous");
static_assert(offsetof(FRockVehicleAbilityInContinuous, InputState) == 0x000000, "Member 'FRockVehicleAbilityInContinuous::InputState' has a wrong offset!");

struct FRockVehicleAbilityInContinuous_AirControl final : public FRockVehicleAbilityInContinuous
{
public:
	bool                                          bAnyWheelsOnGround;
	bool                                          bDodgeActive;
	bool                                          bAutoUprightActive;
	uint8                                         Pad_43[0x5];
};
static_assert(alignof(FRockVehicleAbilityInContinuous_AirControl) == 0x000008, "Wrong alignment on FRockVehicleAbilityInContinuous_AirControl");
static_assert(sizeof(FRockVehicleAbilityInContinuous_AirControl) == 0x000048, "Wrong size on FRockVehicleAbilityInContinuous_AirControl");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AirControl, bAnyWheelsOnGround) == 0x000040, "Member 'FRockVehicleAbilityInContinuous_AirControl::bAnyWheelsOnGround' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AirControl, bDodgeActive) == 0x000041, "Member 'FRockVehicleAbilityInContinuous_AirControl::bDodgeActive' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AirControl, bAutoUprightActive) == 0x000042, "Member 'FRockVehicleAbilityInContinuous_AirControl::bAutoUprightActive' has a wrong offset!");

struct FRockVehicleAbilityInPersistent_AutoUpright final : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_AutoUpright) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_AutoUpright");
static_assert(sizeof(FRockVehicleAbilityInPersistent_AutoUpright) == 0x000018, "Wrong size on FRockVehicleAbilityInPersistent_AutoUpright");

struct FRockVehicleAbilityInContinuous_AutoUpright final : public FRockVehicleAbilityInContinuous
{
public:
	int32                                         LastWorldContactFrame;
	bool                                          bWheelsOnGround;
	bool                                          bAnyWheelsOnGround;
	bool                                          bDodgeActive;
	bool                                          bBodyContact;
	float                                         TimeSinceLastBodyContact;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FRockVehicleAbilityInContinuous_AutoUpright) == 0x000008, "Wrong alignment on FRockVehicleAbilityInContinuous_AutoUpright");
static_assert(sizeof(FRockVehicleAbilityInContinuous_AutoUpright) == 0x000050, "Wrong size on FRockVehicleAbilityInContinuous_AutoUpright");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, LastWorldContactFrame) == 0x000040, "Member 'FRockVehicleAbilityInContinuous_AutoUpright::LastWorldContactFrame' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bWheelsOnGround) == 0x000044, "Member 'FRockVehicleAbilityInContinuous_AutoUpright::bWheelsOnGround' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bAnyWheelsOnGround) == 0x000045, "Member 'FRockVehicleAbilityInContinuous_AutoUpright::bAnyWheelsOnGround' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bDodgeActive) == 0x000046, "Member 'FRockVehicleAbilityInContinuous_AutoUpright::bDodgeActive' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bBodyContact) == 0x000047, "Member 'FRockVehicleAbilityInContinuous_AutoUpright::bBodyContact' has a wrong offset!");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, TimeSinceLastBodyContact) == 0x000048, "Member 'FRockVehicleAbilityInContinuous_AutoUpright::TimeSinceLastBodyContact' has a wrong offset!");

struct FRockVehicleAbilityInPersistent_Boost final : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_Boost) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_Boost");
static_assert(sizeof(FRockVehicleAbilityInPersistent_Boost) == 0x000010, "Wrong size on FRockVehicleAbilityInPersistent_Boost");

struct FRockVehicleAbilityInContinuous_Boost final : public FRockVehicleAbilityInContinuous
{
public:
	bool                                          bHasBoost;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FRockVehicleAbilityInContinuous_Boost) == 0x000008, "Wrong alignment on FRockVehicleAbilityInContinuous_Boost");
static_assert(sizeof(FRockVehicleAbilityInContinuous_Boost) == 0x000048, "Wrong size on FRockVehicleAbilityInContinuous_Boost");
static_assert(offsetof(FRockVehicleAbilityInContinuous_Boost, bHasBoost) == 0x000040, "Member 'FRockVehicleAbilityInContinuous_Boost::bHasBoost' has a wrong offset!");

struct alignas(0x04) FRockDodgeImpulse_PhysicsThread final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FRockDodgeImpulse_PhysicsThread) == 0x000004, "Wrong alignment on FRockDodgeImpulse_PhysicsThread");
static_assert(sizeof(FRockDodgeImpulse_PhysicsThread) == 0x000008, "Wrong size on FRockDodgeImpulse_PhysicsThread");

struct FRockDodgeImpulse final
{
public:
	struct FRockScalableFloat                     VelocityChange;
	struct FRockScalableFloat                     MaxSpeedScale;
};
static_assert(alignof(FRockDodgeImpulse) == 0x000008, "Wrong alignment on FRockDodgeImpulse");
static_assert(sizeof(FRockDodgeImpulse) == 0x000060, "Wrong size on FRockDodgeImpulse");
static_assert(offsetof(FRockDodgeImpulse, VelocityChange) == 0x000000, "Member 'FRockDodgeImpulse::VelocityChange' has a wrong offset!");
static_assert(offsetof(FRockDodgeImpulse, MaxSpeedScale) == 0x000030, "Member 'FRockDodgeImpulse::MaxSpeedScale' has a wrong offset!");

struct FRockVehicleAbilityInPersistent_Dodge final : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_8[0x40];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_Dodge) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_Dodge");
static_assert(sizeof(FRockVehicleAbilityInPersistent_Dodge) == 0x000048, "Wrong size on FRockVehicleAbilityInPersistent_Dodge");

struct FRockVehicleAbilityInContinuous_Dodge final : public FRockVehicleAbilityInContinuous
{
public:
	bool                                          bWheelsOnGround;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FRockVehicleAbilityInContinuous_Dodge) == 0x000008, "Wrong alignment on FRockVehicleAbilityInContinuous_Dodge");
static_assert(sizeof(FRockVehicleAbilityInContinuous_Dodge) == 0x000048, "Wrong size on FRockVehicleAbilityInContinuous_Dodge");
static_assert(offsetof(FRockVehicleAbilityInContinuous_Dodge, bWheelsOnGround) == 0x000040, "Member 'FRockVehicleAbilityInContinuous_Dodge::bWheelsOnGround' has a wrong offset!");

struct FRockVehicleAbilityInPersistent_DoubleJump final : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_DoubleJump) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_DoubleJump");
static_assert(sizeof(FRockVehicleAbilityInPersistent_DoubleJump) == 0x000010, "Wrong size on FRockVehicleAbilityInPersistent_DoubleJump");

struct FRockVehicleAbilityInPersistent_Flip final : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_Flip) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_Flip");
static_assert(sizeof(FRockVehicleAbilityInPersistent_Flip) == 0x000018, "Wrong size on FRockVehicleAbilityInPersistent_Flip");

struct FRockVehicleAbilityInContinuous_Flip final : public FRockVehicleAbilityInContinuous
{
public:
	bool                                          bWheelsOnGround;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FRockVehicleAbilityInContinuous_Flip) == 0x000008, "Wrong alignment on FRockVehicleAbilityInContinuous_Flip");
static_assert(sizeof(FRockVehicleAbilityInContinuous_Flip) == 0x000048, "Wrong size on FRockVehicleAbilityInContinuous_Flip");
static_assert(offsetof(FRockVehicleAbilityInContinuous_Flip, bWheelsOnGround) == 0x000040, "Member 'FRockVehicleAbilityInContinuous_Flip::bWheelsOnGround' has a wrong offset!");

struct FRockVehicleAbilityInPersistent_Jump final : public FRockVehicleAbilityInPersistent
{
public:
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FRockVehicleAbilityInPersistent_Jump) == 0x000008, "Wrong alignment on FRockVehicleAbilityInPersistent_Jump");
static_assert(sizeof(FRockVehicleAbilityInPersistent_Jump) == 0x000018, "Wrong size on FRockVehicleAbilityInPersistent_Jump");

struct FRockVehicleAbilityOutContinuous final
{
public:
	bool                                          bShouldStayActive;
};
static_assert(alignof(FRockVehicleAbilityOutContinuous) == 0x000001, "Wrong alignment on FRockVehicleAbilityOutContinuous");
static_assert(sizeof(FRockVehicleAbilityOutContinuous) == 0x000001, "Wrong size on FRockVehicleAbilityOutContinuous");
static_assert(offsetof(FRockVehicleAbilityOutContinuous, bShouldStayActive) == 0x000000, "Member 'FRockVehicleAbilityOutContinuous::bShouldStayActive' has a wrong offset!");

struct FRockVehicleAbilityOutPersistent final
{
public:
	float                                         ActiveSeconds;
};
static_assert(alignof(FRockVehicleAbilityOutPersistent) == 0x000004, "Wrong alignment on FRockVehicleAbilityOutPersistent");
static_assert(sizeof(FRockVehicleAbilityOutPersistent) == 0x000004, "Wrong size on FRockVehicleAbilityOutPersistent");
static_assert(offsetof(FRockVehicleAbilityOutPersistent, ActiveSeconds) == 0x000000, "Member 'FRockVehicleAbilityOutPersistent::ActiveSeconds' has a wrong offset!");

struct FRockVehileAbilityInContinous_StickyWheels final : public FRockVehicleAbilityInContinuous
{
public:
	struct FVector                                ContactNormal;
	float                                         Scale;
	bool                                          bAnyWheelsOnGround;
	uint8                                         Pad_5D[0x3];
};
static_assert(alignof(FRockVehileAbilityInContinous_StickyWheels) == 0x000008, "Wrong alignment on FRockVehileAbilityInContinous_StickyWheels");
static_assert(sizeof(FRockVehileAbilityInContinous_StickyWheels) == 0x000060, "Wrong size on FRockVehileAbilityInContinous_StickyWheels");
static_assert(offsetof(FRockVehileAbilityInContinous_StickyWheels, ContactNormal) == 0x000040, "Member 'FRockVehileAbilityInContinous_StickyWheels::ContactNormal' has a wrong offset!");
static_assert(offsetof(FRockVehileAbilityInContinous_StickyWheels, Scale) == 0x000058, "Member 'FRockVehileAbilityInContinous_StickyWheels::Scale' has a wrong offset!");
static_assert(offsetof(FRockVehileAbilityInContinous_StickyWheels, bAnyWheelsOnGround) == 0x00005C, "Member 'FRockVehileAbilityInContinous_StickyWheels::bAnyWheelsOnGround' has a wrong offset!");

struct FRockVehicleAnalyticsSession final
{
public:
	class AFortPlayerController*                  DriverPC;
	uint8                                         Pad_8[0x20];
};
static_assert(alignof(FRockVehicleAnalyticsSession) == 0x000008, "Wrong alignment on FRockVehicleAnalyticsSession");
static_assert(sizeof(FRockVehicleAnalyticsSession) == 0x000028, "Wrong size on FRockVehicleAnalyticsSession");
static_assert(offsetof(FRockVehicleAnalyticsSession, DriverPC) == 0x000000, "Member 'FRockVehicleAnalyticsSession::DriverPC' has a wrong offset!");

struct FRockVehicleWheelAnimInfo final
{
public:
	float                                         SpringToWheelOffsetZ;
	struct FFloatInterval                         SpringTravelRange;
	float                                         WheelRadius;
	uint8                                         Pad_10[0x4];
};
static_assert(alignof(FRockVehicleWheelAnimInfo) == 0x000004, "Wrong alignment on FRockVehicleWheelAnimInfo");
static_assert(sizeof(FRockVehicleWheelAnimInfo) == 0x000014, "Wrong size on FRockVehicleWheelAnimInfo");
static_assert(offsetof(FRockVehicleWheelAnimInfo, SpringToWheelOffsetZ) == 0x000000, "Member 'FRockVehicleWheelAnimInfo::SpringToWheelOffsetZ' has a wrong offset!");
static_assert(offsetof(FRockVehicleWheelAnimInfo, SpringTravelRange) == 0x000004, "Member 'FRockVehicleWheelAnimInfo::SpringTravelRange' has a wrong offset!");
static_assert(offsetof(FRockVehicleWheelAnimInfo, WheelRadius) == 0x00000C, "Member 'FRockVehicleWheelAnimInfo::WheelRadius' has a wrong offset!");

struct FRockCameraSettings final
{
public:
	float                                         FOV;
	float                                         Height;
	float                                         Pitch;
	float                                         Distance;
	float                                         Stiffness;
	float                                         SwivelSpeed;
	float                                         TransitionSpeed;
};
static_assert(alignof(FRockCameraSettings) == 0x000004, "Wrong alignment on FRockCameraSettings");
static_assert(sizeof(FRockCameraSettings) == 0x00001C, "Wrong size on FRockCameraSettings");
static_assert(offsetof(FRockCameraSettings, FOV) == 0x000000, "Member 'FRockCameraSettings::FOV' has a wrong offset!");
static_assert(offsetof(FRockCameraSettings, Height) == 0x000004, "Member 'FRockCameraSettings::Height' has a wrong offset!");
static_assert(offsetof(FRockCameraSettings, Pitch) == 0x000008, "Member 'FRockCameraSettings::Pitch' has a wrong offset!");
static_assert(offsetof(FRockCameraSettings, Distance) == 0x00000C, "Member 'FRockCameraSettings::Distance' has a wrong offset!");
static_assert(offsetof(FRockCameraSettings, Stiffness) == 0x000010, "Member 'FRockCameraSettings::Stiffness' has a wrong offset!");
static_assert(offsetof(FRockCameraSettings, SwivelSpeed) == 0x000014, "Member 'FRockCameraSettings::SwivelSpeed' has a wrong offset!");
static_assert(offsetof(FRockCameraSettings, TransitionSpeed) == 0x000018, "Member 'FRockCameraSettings::TransitionSpeed' has a wrong offset!");

struct FRockThrottledValue final
{
public:
	float                                         RiseRate;
	float                                         FallRate;
};
static_assert(alignof(FRockThrottledValue) == 0x000004, "Wrong alignment on FRockThrottledValue");
static_assert(sizeof(FRockThrottledValue) == 0x000008, "Wrong size on FRockThrottledValue");
static_assert(offsetof(FRockThrottledValue, RiseRate) == 0x000000, "Member 'FRockThrottledValue::RiseRate' has a wrong offset!");
static_assert(offsetof(FRockThrottledValue, FallRate) == 0x000004, "Member 'FRockThrottledValue::FallRate' has a wrong offset!");

struct FRockVehicleDriveConfig final
{
public:
	struct FRockScalableFloat                     DriveAccel;
	struct FRockScalableFloat                     DriveTopSpeed;
	struct FRockScalableFloat                     BrakeAccel;
	struct FRockScalableFloat                     StopSpeed;
	float                                         IdleBrakeFactor;
	uint8                                         Pad_C4[0x4];
	struct FRuntimeFloatCurve                     DriveAccelCurve;
	struct FRuntimeFloatCurve                     SteerAngleCurve;
	struct FRuntimeFloatCurve                     LatFrictionCurve;
	struct FRuntimeFloatCurve                     LongFrictionCurve;
	struct FRuntimeFloatCurve                     WallFrictionCurve;
	struct FRuntimeFloatCurve                     HandbrakeSteerAngleCurve;
	struct FRuntimeFloatCurve                     HandbrakeLatFrictionCurve;
	struct FRuntimeFloatCurve                     HandbrakeLongFrictionCurve;
	struct FRockThrottledValue                    HandbrakeRate;
};
static_assert(alignof(FRockVehicleDriveConfig) == 0x000008, "Wrong alignment on FRockVehicleDriveConfig");
static_assert(sizeof(FRockVehicleDriveConfig) == 0x000510, "Wrong size on FRockVehicleDriveConfig");
static_assert(offsetof(FRockVehicleDriveConfig, DriveAccel) == 0x000000, "Member 'FRockVehicleDriveConfig::DriveAccel' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, DriveTopSpeed) == 0x000030, "Member 'FRockVehicleDriveConfig::DriveTopSpeed' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, BrakeAccel) == 0x000060, "Member 'FRockVehicleDriveConfig::BrakeAccel' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, StopSpeed) == 0x000090, "Member 'FRockVehicleDriveConfig::StopSpeed' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, IdleBrakeFactor) == 0x0000C0, "Member 'FRockVehicleDriveConfig::IdleBrakeFactor' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, DriveAccelCurve) == 0x0000C8, "Member 'FRockVehicleDriveConfig::DriveAccelCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, SteerAngleCurve) == 0x000150, "Member 'FRockVehicleDriveConfig::SteerAngleCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, LatFrictionCurve) == 0x0001D8, "Member 'FRockVehicleDriveConfig::LatFrictionCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, LongFrictionCurve) == 0x000260, "Member 'FRockVehicleDriveConfig::LongFrictionCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, WallFrictionCurve) == 0x0002E8, "Member 'FRockVehicleDriveConfig::WallFrictionCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeSteerAngleCurve) == 0x000370, "Member 'FRockVehicleDriveConfig::HandbrakeSteerAngleCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeLatFrictionCurve) == 0x0003F8, "Member 'FRockVehicleDriveConfig::HandbrakeLatFrictionCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeLongFrictionCurve) == 0x000480, "Member 'FRockVehicleDriveConfig::HandbrakeLongFrictionCurve' has a wrong offset!");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeRate) == 0x000508, "Member 'FRockVehicleDriveConfig::HandbrakeRate' has a wrong offset!");

struct FRockVehicleSuspensionConfig final
{
public:
	float                                         MaxRaise;
	float                                         MaxDrop;
	float                                         Stiffness;
	float                                         DampingCompression;
	float                                         DampingRelaxation;
	float                                         Strength;
	float                                         RockDampingCompression;
	float                                         RockDampingRelaxation;
};
static_assert(alignof(FRockVehicleSuspensionConfig) == 0x000004, "Wrong alignment on FRockVehicleSuspensionConfig");
static_assert(sizeof(FRockVehicleSuspensionConfig) == 0x000020, "Wrong size on FRockVehicleSuspensionConfig");
static_assert(offsetof(FRockVehicleSuspensionConfig, MaxRaise) == 0x000000, "Member 'FRockVehicleSuspensionConfig::MaxRaise' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, MaxDrop) == 0x000004, "Member 'FRockVehicleSuspensionConfig::MaxDrop' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, Stiffness) == 0x000008, "Member 'FRockVehicleSuspensionConfig::Stiffness' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, DampingCompression) == 0x00000C, "Member 'FRockVehicleSuspensionConfig::DampingCompression' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, DampingRelaxation) == 0x000010, "Member 'FRockVehicleSuspensionConfig::DampingRelaxation' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, Strength) == 0x000014, "Member 'FRockVehicleSuspensionConfig::Strength' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, RockDampingCompression) == 0x000018, "Member 'FRockVehicleSuspensionConfig::RockDampingCompression' has a wrong offset!");
static_assert(offsetof(FRockVehicleSuspensionConfig, RockDampingRelaxation) == 0x00001C, "Member 'FRockVehicleSuspensionConfig::RockDampingRelaxation' has a wrong offset!");

struct FRockVehicleAxleConfig final
{
public:
	float                                         TranslateX;
	float                                         TranslateY;
	float                                         TranslateZ;
	float                                         WheelRadius;
	float                                         RestDistanceZ;
	struct FRockVehicleSuspensionConfig           Suspension;
};
static_assert(alignof(FRockVehicleAxleConfig) == 0x000004, "Wrong alignment on FRockVehicleAxleConfig");
static_assert(sizeof(FRockVehicleAxleConfig) == 0x000034, "Wrong size on FRockVehicleAxleConfig");
static_assert(offsetof(FRockVehicleAxleConfig, TranslateX) == 0x000000, "Member 'FRockVehicleAxleConfig::TranslateX' has a wrong offset!");
static_assert(offsetof(FRockVehicleAxleConfig, TranslateY) == 0x000004, "Member 'FRockVehicleAxleConfig::TranslateY' has a wrong offset!");
static_assert(offsetof(FRockVehicleAxleConfig, TranslateZ) == 0x000008, "Member 'FRockVehicleAxleConfig::TranslateZ' has a wrong offset!");
static_assert(offsetof(FRockVehicleAxleConfig, WheelRadius) == 0x00000C, "Member 'FRockVehicleAxleConfig::WheelRadius' has a wrong offset!");
static_assert(offsetof(FRockVehicleAxleConfig, RestDistanceZ) == 0x000010, "Member 'FRockVehicleAxleConfig::RestDistanceZ' has a wrong offset!");
static_assert(offsetof(FRockVehicleAxleConfig, Suspension) == 0x000014, "Member 'FRockVehicleAxleConfig::Suspension' has a wrong offset!");

struct FRockVehicleDemoConfig final
{
public:
	struct FGameplayTagContainer                  VehiclesThatCanBeDemolished;
	float                                         DemolishAngleYaw;
	float                                         DemolishAnglePitch;
};
static_assert(alignof(FRockVehicleDemoConfig) == 0x000008, "Wrong alignment on FRockVehicleDemoConfig");
static_assert(sizeof(FRockVehicleDemoConfig) == 0x000028, "Wrong size on FRockVehicleDemoConfig");
static_assert(offsetof(FRockVehicleDemoConfig, VehiclesThatCanBeDemolished) == 0x000000, "Member 'FRockVehicleDemoConfig::VehiclesThatCanBeDemolished' has a wrong offset!");
static_assert(offsetof(FRockVehicleDemoConfig, DemolishAngleYaw) == 0x000020, "Member 'FRockVehicleDemoConfig::DemolishAngleYaw' has a wrong offset!");
static_assert(offsetof(FRockVehicleDemoConfig, DemolishAnglePitch) == 0x000024, "Member 'FRockVehicleDemoConfig::DemolishAnglePitch' has a wrong offset!");

}
