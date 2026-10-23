#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ChaosClothingInteractor_ResetAndTeleport final
{
public:
	bool                                          bReset;
	bool                                          bTeleport;
};
static_assert(alignof(ChaosClothingInteractor_ResetAndTeleport) == 0x000001, "Wrong alignment on ChaosClothingInteractor_ResetAndTeleport");
static_assert(sizeof(ChaosClothingInteractor_ResetAndTeleport) == 0x000002, "Wrong size on ChaosClothingInteractor_ResetAndTeleport");
static_assert(offsetof(ChaosClothingInteractor_ResetAndTeleport, bReset) == 0x000000, "Member 'ChaosClothingInteractor_ResetAndTeleport::bReset' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_ResetAndTeleport, bTeleport) == 0x000001, "Member 'ChaosClothingInteractor_ResetAndTeleport::bTeleport' has a wrong offset!");

struct ChaosClothingInteractor_SetAerodynamics final
{
public:
	float                                         DragCoefficient;
	float                                         LiftCoefficient;
	struct FVector                                WindVelocity;
};
static_assert(alignof(ChaosClothingInteractor_SetAerodynamics) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetAerodynamics");
static_assert(sizeof(ChaosClothingInteractor_SetAerodynamics) == 0x000020, "Wrong size on ChaosClothingInteractor_SetAerodynamics");
static_assert(offsetof(ChaosClothingInteractor_SetAerodynamics, DragCoefficient) == 0x000000, "Member 'ChaosClothingInteractor_SetAerodynamics::DragCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetAerodynamics, LiftCoefficient) == 0x000004, "Member 'ChaosClothingInteractor_SetAerodynamics::LiftCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetAerodynamics, WindVelocity) == 0x000008, "Member 'ChaosClothingInteractor_SetAerodynamics::WindVelocity' has a wrong offset!");

struct ChaosClothingInteractor_SetAnimDrive final
{
public:
	struct FVector2D                              AnimDriveStiffness;
	struct FVector2D                              AnimDriveDamping;
};
static_assert(alignof(ChaosClothingInteractor_SetAnimDrive) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetAnimDrive");
static_assert(sizeof(ChaosClothingInteractor_SetAnimDrive) == 0x000020, "Wrong size on ChaosClothingInteractor_SetAnimDrive");
static_assert(offsetof(ChaosClothingInteractor_SetAnimDrive, AnimDriveStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetAnimDrive::AnimDriveStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetAnimDrive, AnimDriveDamping) == 0x000010, "Member 'ChaosClothingInteractor_SetAnimDrive::AnimDriveDamping' has a wrong offset!");

struct ChaosClothingInteractor_SetAnimDriveLinear final
{
public:
	float                                         AnimDriveStiffness;
};
static_assert(alignof(ChaosClothingInteractor_SetAnimDriveLinear) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetAnimDriveLinear");
static_assert(sizeof(ChaosClothingInteractor_SetAnimDriveLinear) == 0x000004, "Wrong size on ChaosClothingInteractor_SetAnimDriveLinear");
static_assert(offsetof(ChaosClothingInteractor_SetAnimDriveLinear, AnimDriveStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetAnimDriveLinear::AnimDriveStiffness' has a wrong offset!");

struct ChaosClothingInteractor_SetBackstop final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(ChaosClothingInteractor_SetBackstop) == 0x000001, "Wrong alignment on ChaosClothingInteractor_SetBackstop");
static_assert(sizeof(ChaosClothingInteractor_SetBackstop) == 0x000001, "Wrong size on ChaosClothingInteractor_SetBackstop");
static_assert(offsetof(ChaosClothingInteractor_SetBackstop, bEnabled) == 0x000000, "Member 'ChaosClothingInteractor_SetBackstop::bEnabled' has a wrong offset!");

struct ChaosClothingInteractor_SetCollision final
{
public:
	float                                         CollisionThickness;
	float                                         FrictionCoefficient;
	bool                                          bUseCCD;
	uint8                                         Pad_9[0x3];
	float                                         SelfCollisionThickness;
};
static_assert(alignof(ChaosClothingInteractor_SetCollision) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetCollision");
static_assert(sizeof(ChaosClothingInteractor_SetCollision) == 0x000010, "Wrong size on ChaosClothingInteractor_SetCollision");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, CollisionThickness) == 0x000000, "Member 'ChaosClothingInteractor_SetCollision::CollisionThickness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, FrictionCoefficient) == 0x000004, "Member 'ChaosClothingInteractor_SetCollision::FrictionCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, bUseCCD) == 0x000008, "Member 'ChaosClothingInteractor_SetCollision::bUseCCD' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetCollision, SelfCollisionThickness) == 0x00000C, "Member 'ChaosClothingInteractor_SetCollision::SelfCollisionThickness' has a wrong offset!");

struct ChaosClothingInteractor_SetDamping final
{
public:
	float                                         DampingCoefficient;
	float                                         LocalDampingCoefficient;
};
static_assert(alignof(ChaosClothingInteractor_SetDamping) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetDamping");
static_assert(sizeof(ChaosClothingInteractor_SetDamping) == 0x000008, "Wrong size on ChaosClothingInteractor_SetDamping");
static_assert(offsetof(ChaosClothingInteractor_SetDamping, DampingCoefficient) == 0x000000, "Member 'ChaosClothingInteractor_SetDamping::DampingCoefficient' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetDamping, LocalDampingCoefficient) == 0x000004, "Member 'ChaosClothingInteractor_SetDamping::LocalDampingCoefficient' has a wrong offset!");

struct ChaosClothingInteractor_SetGravity final
{
public:
	float                                         GravityScale;
	bool                                          bIsGravityOverridden;
	uint8                                         Pad_5[0x3];
	struct FVector                                GravityOverride;
};
static_assert(alignof(ChaosClothingInteractor_SetGravity) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetGravity");
static_assert(sizeof(ChaosClothingInteractor_SetGravity) == 0x000020, "Wrong size on ChaosClothingInteractor_SetGravity");
static_assert(offsetof(ChaosClothingInteractor_SetGravity, GravityScale) == 0x000000, "Member 'ChaosClothingInteractor_SetGravity::GravityScale' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetGravity, bIsGravityOverridden) == 0x000004, "Member 'ChaosClothingInteractor_SetGravity::bIsGravityOverridden' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetGravity, GravityOverride) == 0x000008, "Member 'ChaosClothingInteractor_SetGravity::GravityOverride' has a wrong offset!");

struct ChaosClothingInteractor_SetLongRangeAttachment final
{
public:
	struct FVector2D                              TetherStiffness;
	struct FVector2D                              TetherScale;
};
static_assert(alignof(ChaosClothingInteractor_SetLongRangeAttachment) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetLongRangeAttachment");
static_assert(sizeof(ChaosClothingInteractor_SetLongRangeAttachment) == 0x000020, "Wrong size on ChaosClothingInteractor_SetLongRangeAttachment");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachment, TetherStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetLongRangeAttachment::TetherStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachment, TetherScale) == 0x000010, "Member 'ChaosClothingInteractor_SetLongRangeAttachment::TetherScale' has a wrong offset!");

struct ChaosClothingInteractor_SetLongRangeAttachmentLinear final
{
public:
	float                                         TetherStiffness;
	float                                         TetherScale;
};
static_assert(alignof(ChaosClothingInteractor_SetLongRangeAttachmentLinear) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetLongRangeAttachmentLinear");
static_assert(sizeof(ChaosClothingInteractor_SetLongRangeAttachmentLinear) == 0x000008, "Wrong size on ChaosClothingInteractor_SetLongRangeAttachmentLinear");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachmentLinear, TetherStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetLongRangeAttachmentLinear::TetherStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetLongRangeAttachmentLinear, TetherScale) == 0x000004, "Member 'ChaosClothingInteractor_SetLongRangeAttachmentLinear::TetherScale' has a wrong offset!");

struct ChaosClothingInteractor_SetMaterial final
{
public:
	struct FVector2D                              EdgeStiffness;
	struct FVector2D                              BendingStiffness;
	struct FVector2D                              AreaStiffness;
};
static_assert(alignof(ChaosClothingInteractor_SetMaterial) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetMaterial");
static_assert(sizeof(ChaosClothingInteractor_SetMaterial) == 0x000030, "Wrong size on ChaosClothingInteractor_SetMaterial");
static_assert(offsetof(ChaosClothingInteractor_SetMaterial, EdgeStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetMaterial::EdgeStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterial, BendingStiffness) == 0x000010, "Member 'ChaosClothingInteractor_SetMaterial::BendingStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterial, AreaStiffness) == 0x000020, "Member 'ChaosClothingInteractor_SetMaterial::AreaStiffness' has a wrong offset!");

struct ChaosClothingInteractor_SetMaterialLinear final
{
public:
	float                                         EdgeStiffness;
	float                                         BendingStiffness;
	float                                         AreaStiffness;
};
static_assert(alignof(ChaosClothingInteractor_SetMaterialLinear) == 0x000004, "Wrong alignment on ChaosClothingInteractor_SetMaterialLinear");
static_assert(sizeof(ChaosClothingInteractor_SetMaterialLinear) == 0x00000C, "Wrong size on ChaosClothingInteractor_SetMaterialLinear");
static_assert(offsetof(ChaosClothingInteractor_SetMaterialLinear, EdgeStiffness) == 0x000000, "Member 'ChaosClothingInteractor_SetMaterialLinear::EdgeStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterialLinear, BendingStiffness) == 0x000004, "Member 'ChaosClothingInteractor_SetMaterialLinear::BendingStiffness' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetMaterialLinear, AreaStiffness) == 0x000008, "Member 'ChaosClothingInteractor_SetMaterialLinear::AreaStiffness' has a wrong offset!");

struct ChaosClothingInteractor_SetPressure final
{
public:
	struct FVector2D                              Pressure;
};
static_assert(alignof(ChaosClothingInteractor_SetPressure) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetPressure");
static_assert(sizeof(ChaosClothingInteractor_SetPressure) == 0x000010, "Wrong size on ChaosClothingInteractor_SetPressure");
static_assert(offsetof(ChaosClothingInteractor_SetPressure, Pressure) == 0x000000, "Member 'ChaosClothingInteractor_SetPressure::Pressure' has a wrong offset!");

struct ChaosClothingInteractor_SetVelocityScale final
{
public:
	struct FVector                                LinearVelocityScale;
	float                                         AngularVelocityScale;
	float                                         FictitiousAngularScale;
};
static_assert(alignof(ChaosClothingInteractor_SetVelocityScale) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetVelocityScale");
static_assert(sizeof(ChaosClothingInteractor_SetVelocityScale) == 0x000020, "Wrong size on ChaosClothingInteractor_SetVelocityScale");
static_assert(offsetof(ChaosClothingInteractor_SetVelocityScale, LinearVelocityScale) == 0x000000, "Member 'ChaosClothingInteractor_SetVelocityScale::LinearVelocityScale' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetVelocityScale, AngularVelocityScale) == 0x000018, "Member 'ChaosClothingInteractor_SetVelocityScale::AngularVelocityScale' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetVelocityScale, FictitiousAngularScale) == 0x00001C, "Member 'ChaosClothingInteractor_SetVelocityScale::FictitiousAngularScale' has a wrong offset!");

struct ChaosClothingInteractor_SetWind final
{
public:
	struct FVector2D                              Drag;
	struct FVector2D                              Lift;
	float                                         AirDensity;
	uint8                                         Pad_24[0x4];
	struct FVector                                WindVelocity;
};
static_assert(alignof(ChaosClothingInteractor_SetWind) == 0x000008, "Wrong alignment on ChaosClothingInteractor_SetWind");
static_assert(sizeof(ChaosClothingInteractor_SetWind) == 0x000040, "Wrong size on ChaosClothingInteractor_SetWind");
static_assert(offsetof(ChaosClothingInteractor_SetWind, Drag) == 0x000000, "Member 'ChaosClothingInteractor_SetWind::Drag' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetWind, Lift) == 0x000010, "Member 'ChaosClothingInteractor_SetWind::Lift' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetWind, AirDensity) == 0x000020, "Member 'ChaosClothingInteractor_SetWind::AirDensity' has a wrong offset!");
static_assert(offsetof(ChaosClothingInteractor_SetWind, WindVelocity) == 0x000028, "Member 'ChaosClothingInteractor_SetWind::WindVelocity' has a wrong offset!");

}
