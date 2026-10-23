#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

enum class EHoagieBoostState : uint8
{
	Unknown                                  = 0,
	Ready                                    = 1,
	Started                                  = 2,
	Finished                                 = 3,
	Failed                                   = 4,
	EHoagieBoostState_MAX                    = 5,
};

enum class EHoagieState : uint32
{
	STARTUP                                  = 0,
	STARTUP_LIFT                             = 1,
	FLIGHT                                   = 2,
	AUTO_LANDING                             = 3,
	SPIN_CRASHING                            = 4,
	CRASHING_NO_SPIN                         = 5,
	CRASH_LANDED                             = 6,
	LANDED                                   = 7,
	EXPLODING                                = 8,
	NONE                                     = 9,
	EHoagieState_MAX                         = 10,
};

struct FFortHeliFlightModel final
{
public:
	uint8                                         Pad_0[0x1E0];
	class UFortHoagieVehicleConfigs*              Configs;
};
static_assert(alignof(FFortHeliFlightModel) == 0x000008, "Wrong alignment on FFortHeliFlightModel");
static_assert(sizeof(FFortHeliFlightModel) == 0x0001E8, "Wrong size on FFortHeliFlightModel");
static_assert(offsetof(FFortHeliFlightModel, Configs) == 0x0001E0, "Member 'FFortHeliFlightModel::Configs' has a wrong offset!");

struct FRotorHit final
{
public:
	struct FActorInstanceHandle                   HitObjectHandle;
	float                                         LastHitTimer;
};
static_assert(alignof(FRotorHit) == 0x000004, "Wrong alignment on FRotorHit");
static_assert(sizeof(FRotorHit) == 0x00001C, "Wrong size on FRotorHit");
static_assert(offsetof(FRotorHit, HitObjectHandle) == 0x000000, "Member 'FRotorHit::HitObjectHandle' has a wrong offset!");
static_assert(offsetof(FRotorHit, LastHitTimer) == 0x000018, "Member 'FRotorHit::LastHitTimer' has a wrong offset!");

struct FCachedSeatCollision final
{
public:
	int32                                         SeatIndex;
	bool                                          bOccupied;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FCachedSeatCollision) == 0x000004, "Wrong alignment on FCachedSeatCollision");
static_assert(sizeof(FCachedSeatCollision) == 0x000008, "Wrong size on FCachedSeatCollision");
static_assert(offsetof(FCachedSeatCollision, SeatIndex) == 0x000000, "Member 'FCachedSeatCollision::SeatIndex' has a wrong offset!");
static_assert(offsetof(FCachedSeatCollision, bOccupied) == 0x000004, "Member 'FCachedSeatCollision::bOccupied' has a wrong offset!");

struct FReplicatedHeliControlState final
{
public:
	struct FVector_NetQuantizeNormal              Up;
	struct FVector_NetQuantizeNormal              Forward;
};
static_assert(alignof(FReplicatedHeliControlState) == 0x000008, "Wrong alignment on FReplicatedHeliControlState");
static_assert(sizeof(FReplicatedHeliControlState) == 0x000030, "Wrong size on FReplicatedHeliControlState");
static_assert(offsetof(FReplicatedHeliControlState, Up) == 0x000000, "Member 'FReplicatedHeliControlState::Up' has a wrong offset!");
static_assert(offsetof(FReplicatedHeliControlState, Forward) == 0x000018, "Member 'FReplicatedHeliControlState::Forward' has a wrong offset!");

struct alignas(0x08) FHoagieCmd final
{
public:
	uint8                                         Pad_0[0x78];
};
static_assert(alignof(FHoagieCmd) == 0x000008, "Wrong alignment on FHoagieCmd");
static_assert(sizeof(FHoagieCmd) == 0x000078, "Wrong size on FHoagieCmd");

struct FHoagieInPersistent final : public FFortVehicleInPersistent
{
public:
	class UFortHoagieVehicleConfigs*              FortHoagieVehicleConfigs;
	EHoagieState                                  CurrentHoagieState;
	float                                         LastRotorImpulseTime;
	struct FVector                                RotorHitLinearImpulse;
	struct FVector                                RotorHitAngularImpulse;
};
static_assert(alignof(FHoagieInPersistent) == 0x000008, "Wrong alignment on FHoagieInPersistent");
static_assert(sizeof(FHoagieInPersistent) == 0x0001C8, "Wrong size on FHoagieInPersistent");
static_assert(offsetof(FHoagieInPersistent, FortHoagieVehicleConfigs) == 0x000188, "Member 'FHoagieInPersistent::FortHoagieVehicleConfigs' has a wrong offset!");
static_assert(offsetof(FHoagieInPersistent, CurrentHoagieState) == 0x000190, "Member 'FHoagieInPersistent::CurrentHoagieState' has a wrong offset!");
static_assert(offsetof(FHoagieInPersistent, LastRotorImpulseTime) == 0x000194, "Member 'FHoagieInPersistent::LastRotorImpulseTime' has a wrong offset!");
static_assert(offsetof(FHoagieInPersistent, RotorHitLinearImpulse) == 0x000198, "Member 'FHoagieInPersistent::RotorHitLinearImpulse' has a wrong offset!");
static_assert(offsetof(FHoagieInPersistent, RotorHitAngularImpulse) == 0x0001B0, "Member 'FHoagieInPersistent::RotorHitAngularImpulse' has a wrong offset!");

struct FHoagieInternal final : public FFortVehicleInternalPersistent
{
public:
	struct FFortHeliFlightModel                   FlightModel;
	uint8                                         Pad_268[0x8];
};
static_assert(alignof(FHoagieInternal) == 0x000008, "Wrong alignment on FHoagieInternal");
static_assert(sizeof(FHoagieInternal) == 0x000270, "Wrong size on FHoagieInternal");
static_assert(offsetof(FHoagieInternal, FlightModel) == 0x000080, "Member 'FHoagieInternal::FlightModel' has a wrong offset!");

struct FHoagieOutContinuous final : public FFortVehicleOutContinuous
{
};
static_assert(alignof(FHoagieOutContinuous) == 0x000008, "Wrong alignment on FHoagieOutContinuous");
static_assert(sizeof(FHoagieOutContinuous) == 0x000038, "Wrong size on FHoagieOutContinuous");

struct FHoagieOutPersistent final : public FFortVehicleOutPersistent
{
};
static_assert(alignof(FHoagieOutPersistent) == 0x000008, "Wrong alignment on FHoagieOutPersistent");
static_assert(sizeof(FHoagieOutPersistent) == 0x000028, "Wrong size on FHoagieOutPersistent");

struct FHoagieDeathEffectInfo final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(FHoagieDeathEffectInfo) == 0x000008, "Wrong alignment on FHoagieDeathEffectInfo");
static_assert(sizeof(FHoagieDeathEffectInfo) == 0x000148, "Wrong size on FHoagieDeathEffectInfo");
static_assert(offsetof(FHoagieDeathEffectInfo, Damage) == 0x000000, "Member 'FHoagieDeathEffectInfo::Damage' has a wrong offset!");
static_assert(offsetof(FHoagieDeathEffectInfo, DamageTags) == 0x000008, "Member 'FHoagieDeathEffectInfo::DamageTags' has a wrong offset!");
static_assert(offsetof(FHoagieDeathEffectInfo, Momentum) == 0x000028, "Member 'FHoagieDeathEffectInfo::Momentum' has a wrong offset!");
static_assert(offsetof(FHoagieDeathEffectInfo, HitInfo) == 0x000040, "Member 'FHoagieDeathEffectInfo::HitInfo' has a wrong offset!");
static_assert(offsetof(FHoagieDeathEffectInfo, InstigatedBy) == 0x000120, "Member 'FHoagieDeathEffectInfo::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FHoagieDeathEffectInfo, DamageCauser) == 0x000128, "Member 'FHoagieDeathEffectInfo::DamageCauser' has a wrong offset!");
static_assert(offsetof(FHoagieDeathEffectInfo, EffectContext) == 0x000130, "Member 'FHoagieDeathEffectInfo::EffectContext' has a wrong offset!");

}
