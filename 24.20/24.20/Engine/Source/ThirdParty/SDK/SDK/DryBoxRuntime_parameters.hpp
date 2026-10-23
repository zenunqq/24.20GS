#pragma once

#include "Basic.hpp"

#include "DryBoxRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct NyxGlassWeaponComponent_Swinging_IsAttacking final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_IsAttacking) == 0x000001, "Wrong alignment on NyxGlassWeaponComponent_Swinging_IsAttacking");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_IsAttacking) == 0x000001, "Wrong size on NyxGlassWeaponComponent_Swinging_IsAttacking");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_IsAttacking, ReturnValue) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_IsAttacking::ReturnValue' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients final
{
public:
	struct FNyxGlassTargetingData                 NewData;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients) == 0x000008, "Wrong alignment on NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients) == 0x000048, "Wrong size on NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients, NewData) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_Multicast_SetTargetingDataOnRemoteClients::NewData' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged final
{
public:
	ENyxGlassState                                OldState;
	ENyxGlassState                                NewState;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged) == 0x000001, "Wrong alignment on NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged) == 0x000002, "Wrong size on NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged, OldState) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged, NewState) == 0x000001, "Member 'NyxGlassWeaponComponent_Swinging_OnNyxGlassStateChanged::NewState' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_OnTargetingComplete final
{
public:
	struct FNyxGlassTargetingData                 TargetingData;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_OnTargetingComplete) == 0x000008, "Wrong alignment on NyxGlassWeaponComponent_Swinging_OnTargetingComplete");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_OnTargetingComplete) == 0x000048, "Wrong size on NyxGlassWeaponComponent_Swinging_OnTargetingComplete");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_OnTargetingComplete, TargetingData) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_OnTargetingComplete::TargetingData' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_OnWeaponUnequip final
{
public:
	class AFortWeapon*                            Weapon;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_OnWeaponUnequip) == 0x000008, "Wrong alignment on NyxGlassWeaponComponent_Swinging_OnWeaponUnequip");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_OnWeaponUnequip) == 0x000008, "Wrong size on NyxGlassWeaponComponent_Swinging_OnWeaponUnequip");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_OnWeaponUnequip, Weapon) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_OnWeaponUnequip::Weapon' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_Server_SetTargetingData final
{
public:
	struct FNyxGlassTargetingData                 NewData;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_Server_SetTargetingData) == 0x000008, "Wrong alignment on NyxGlassWeaponComponent_Swinging_Server_SetTargetingData");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_Server_SetTargetingData) == 0x000048, "Wrong size on NyxGlassWeaponComponent_Swinging_Server_SetTargetingData");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_Server_SetTargetingData, NewData) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_Server_SetTargetingData::NewData' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting) == 0x000001, "Wrong alignment on NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting) == 0x000001, "Wrong size on NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting, ReturnValue) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_ShouldUpdateTargeting::ReturnValue' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha) == 0x000004, "Wrong alignment on NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha) == 0x000004, "Wrong size on NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha, ReturnValue) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_CalcInitialAccelerationAlpha::ReturnValue' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate final
{
public:
	ENyxGlassSlashSubstate                        ReturnValue;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate) == 0x000001, "Wrong alignment on NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate) == 0x000001, "Wrong size on NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate, ReturnValue) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_GetNyxGlassSlashSubstate::ReturnValue' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_GetNyxGlassState final
{
public:
	ENyxGlassState                                ReturnValue;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_GetNyxGlassState) == 0x000001, "Wrong alignment on NyxGlassWeaponComponent_Swinging_GetNyxGlassState");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_GetNyxGlassState) == 0x000001, "Wrong size on NyxGlassWeaponComponent_Swinging_GetNyxGlassState");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_GetNyxGlassState, ReturnValue) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_GetNyxGlassState::ReturnValue' has a wrong offset!");

struct NyxGlassWeaponComponent_Swinging_OnVelocityCalculated final
{
public:
	struct FNyxGlassVelocityMetadata              VelocityMetadata;
};
static_assert(alignof(NyxGlassWeaponComponent_Swinging_OnVelocityCalculated) == 0x000008, "Wrong alignment on NyxGlassWeaponComponent_Swinging_OnVelocityCalculated");
static_assert(sizeof(NyxGlassWeaponComponent_Swinging_OnVelocityCalculated) == 0x000058, "Wrong size on NyxGlassWeaponComponent_Swinging_OnVelocityCalculated");
static_assert(offsetof(NyxGlassWeaponComponent_Swinging_OnVelocityCalculated, VelocityMetadata) == 0x000000, "Member 'NyxGlassWeaponComponent_Swinging_OnVelocityCalculated::VelocityMetadata' has a wrong offset!");

struct NyxGlassFuelAttributeSet_OnRep_Fuel final
{
public:
	struct FFortGameplayAttributeData             OldValue;
};
static_assert(alignof(NyxGlassFuelAttributeSet_OnRep_Fuel) == 0x000008, "Wrong alignment on NyxGlassFuelAttributeSet_OnRep_Fuel");
static_assert(sizeof(NyxGlassFuelAttributeSet_OnRep_Fuel) == 0x000028, "Wrong size on NyxGlassFuelAttributeSet_OnRep_Fuel");
static_assert(offsetof(NyxGlassFuelAttributeSet_OnRep_Fuel, OldValue) == 0x000000, "Member 'NyxGlassFuelAttributeSet_OnRep_Fuel::OldValue' has a wrong offset!");

struct NyxGlassFuelAttributeSet_OnRep_LocalFuel final
{
public:
	struct FFortGameplayAttributeData             OldValue;
};
static_assert(alignof(NyxGlassFuelAttributeSet_OnRep_LocalFuel) == 0x000008, "Wrong alignment on NyxGlassFuelAttributeSet_OnRep_LocalFuel");
static_assert(sizeof(NyxGlassFuelAttributeSet_OnRep_LocalFuel) == 0x000028, "Wrong size on NyxGlassFuelAttributeSet_OnRep_LocalFuel");
static_assert(offsetof(NyxGlassFuelAttributeSet_OnRep_LocalFuel, OldValue) == 0x000000, "Member 'NyxGlassFuelAttributeSet_OnRep_LocalFuel::OldValue' has a wrong offset!");

}
