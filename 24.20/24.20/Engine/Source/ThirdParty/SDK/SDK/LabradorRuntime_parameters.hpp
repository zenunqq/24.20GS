#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortLabradorComponent_Telemetry_OnDamaged final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(FortLabradorComponent_Telemetry_OnDamaged) == 0x000008, "Wrong alignment on FortLabradorComponent_Telemetry_OnDamaged");
static_assert(sizeof(FortLabradorComponent_Telemetry_OnDamaged) == 0x000060, "Wrong size on FortLabradorComponent_Telemetry_OnDamaged");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, DamagedActor) == 0x000000, "Member 'FortLabradorComponent_Telemetry_OnDamaged::DamagedActor' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, Damage) == 0x000008, "Member 'FortLabradorComponent_Telemetry_OnDamaged::Damage' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, InstigatedBy) == 0x000010, "Member 'FortLabradorComponent_Telemetry_OnDamaged::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, DamageCauser) == 0x000018, "Member 'FortLabradorComponent_Telemetry_OnDamaged::DamageCauser' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, HitLocation) == 0x000020, "Member 'FortLabradorComponent_Telemetry_OnDamaged::HitLocation' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, FHitComponent) == 0x000038, "Member 'FortLabradorComponent_Telemetry_OnDamaged::FHitComponent' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, BoneName) == 0x000040, "Member 'FortLabradorComponent_Telemetry_OnDamaged::BoneName' has a wrong offset!");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnDamaged, Momentum) == 0x000048, "Member 'FortLabradorComponent_Telemetry_OnDamaged::Momentum' has a wrong offset!");

struct FortLabradorComponent_Telemetry_OnWakeUp final
{
public:
	class AActor*                                 GoalActor;
};
static_assert(alignof(FortLabradorComponent_Telemetry_OnWakeUp) == 0x000008, "Wrong alignment on FortLabradorComponent_Telemetry_OnWakeUp");
static_assert(sizeof(FortLabradorComponent_Telemetry_OnWakeUp) == 0x000008, "Wrong size on FortLabradorComponent_Telemetry_OnWakeUp");
static_assert(offsetof(FortLabradorComponent_Telemetry_OnWakeUp, GoalActor) == 0x000000, "Member 'FortLabradorComponent_Telemetry_OnWakeUp::GoalActor' has a wrong offset!");

}
