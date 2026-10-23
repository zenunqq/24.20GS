#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortAscenderZipline_BP_HandlePlayerStartedUsingHandle final
{
public:
	class AFortPlayerPawn*                        Player;
};
static_assert(alignof(FortAscenderZipline_BP_HandlePlayerStartedUsingHandle) == 0x000008, "Wrong alignment on FortAscenderZipline_BP_HandlePlayerStartedUsingHandle");
static_assert(sizeof(FortAscenderZipline_BP_HandlePlayerStartedUsingHandle) == 0x000008, "Wrong size on FortAscenderZipline_BP_HandlePlayerStartedUsingHandle");
static_assert(offsetof(FortAscenderZipline_BP_HandlePlayerStartedUsingHandle, Player) == 0x000000, "Member 'FortAscenderZipline_BP_HandlePlayerStartedUsingHandle::Player' has a wrong offset!");

struct FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle final
{
public:
	class AFortPlayerPawn*                        Player;
};
static_assert(alignof(FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle) == 0x000008, "Wrong alignment on FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle");
static_assert(sizeof(FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle) == 0x000008, "Wrong size on FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle");
static_assert(offsetof(FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle, Player) == 0x000000, "Member 'FortAscenderZipline_BP_HandlePlayerStoppedUsingHandle::Player' has a wrong offset!");

struct FortAscenderZipline_HandleFloorActorDestroyed final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(FortAscenderZipline_HandleFloorActorDestroyed) == 0x000008, "Wrong alignment on FortAscenderZipline_HandleFloorActorDestroyed");
static_assert(sizeof(FortAscenderZipline_HandleFloorActorDestroyed) == 0x000008, "Wrong size on FortAscenderZipline_HandleFloorActorDestroyed");
static_assert(offsetof(FortAscenderZipline_HandleFloorActorDestroyed, Actor) == 0x000000, "Member 'FortAscenderZipline_HandleFloorActorDestroyed::Actor' has a wrong offset!");

struct FortAscenderZipline_HandlePawnUsingHandleDied final
{
public:
	class AFortPawn*                              DeadPawn;
};
static_assert(alignof(FortAscenderZipline_HandlePawnUsingHandleDied) == 0x000008, "Wrong alignment on FortAscenderZipline_HandlePawnUsingHandleDied");
static_assert(sizeof(FortAscenderZipline_HandlePawnUsingHandleDied) == 0x000008, "Wrong size on FortAscenderZipline_HandlePawnUsingHandleDied");
static_assert(offsetof(FortAscenderZipline_HandlePawnUsingHandleDied, DeadPawn) == 0x000000, "Member 'FortAscenderZipline_HandlePawnUsingHandleDied::DeadPawn' has a wrong offset!");

struct FortAscenderZipline_SetupAscender final
{
public:
	bool                                          bFromConstruction;
	bool                                          bFromReplication;
};
static_assert(alignof(FortAscenderZipline_SetupAscender) == 0x000001, "Wrong alignment on FortAscenderZipline_SetupAscender");
static_assert(sizeof(FortAscenderZipline_SetupAscender) == 0x000002, "Wrong size on FortAscenderZipline_SetupAscender");
static_assert(offsetof(FortAscenderZipline_SetupAscender, bFromConstruction) == 0x000000, "Member 'FortAscenderZipline_SetupAscender::bFromConstruction' has a wrong offset!");
static_assert(offsetof(FortAscenderZipline_SetupAscender, bFromReplication) == 0x000001, "Member 'FortAscenderZipline_SetupAscender::bFromReplication' has a wrong offset!");

struct FortAscenderZipline_ApplyStructureDamage final
{
public:
	class ABuildingSMActor*                       BuildingActor;
	class AActor*                                 DamageSource;
};
static_assert(alignof(FortAscenderZipline_ApplyStructureDamage) == 0x000008, "Wrong alignment on FortAscenderZipline_ApplyStructureDamage");
static_assert(sizeof(FortAscenderZipline_ApplyStructureDamage) == 0x000010, "Wrong size on FortAscenderZipline_ApplyStructureDamage");
static_assert(offsetof(FortAscenderZipline_ApplyStructureDamage, BuildingActor) == 0x000000, "Member 'FortAscenderZipline_ApplyStructureDamage::BuildingActor' has a wrong offset!");
static_assert(offsetof(FortAscenderZipline_ApplyStructureDamage, DamageSource) == 0x000008, "Member 'FortAscenderZipline_ApplyStructureDamage::DamageSource' has a wrong offset!");

struct FortAscenderZipline_GetHandleComponent final
{
public:
	class UPrimitiveComponent*                    ReturnValue;
};
static_assert(alignof(FortAscenderZipline_GetHandleComponent) == 0x000008, "Wrong alignment on FortAscenderZipline_GetHandleComponent");
static_assert(sizeof(FortAscenderZipline_GetHandleComponent) == 0x000008, "Wrong size on FortAscenderZipline_GetHandleComponent");
static_assert(offsetof(FortAscenderZipline_GetHandleComponent, ReturnValue) == 0x000000, "Member 'FortAscenderZipline_GetHandleComponent::ReturnValue' has a wrong offset!");

struct FortAscenderZipline_GetInteractComponentOverride final
{
public:
	class AFortPlayerPawn*                        InteractingPawn;
	class UPrimitiveComponent*                    InteractComponent;
	class UPrimitiveComponent*                    ReturnValue;
};
static_assert(alignof(FortAscenderZipline_GetInteractComponentOverride) == 0x000008, "Wrong alignment on FortAscenderZipline_GetInteractComponentOverride");
static_assert(sizeof(FortAscenderZipline_GetInteractComponentOverride) == 0x000018, "Wrong size on FortAscenderZipline_GetInteractComponentOverride");
static_assert(offsetof(FortAscenderZipline_GetInteractComponentOverride, InteractingPawn) == 0x000000, "Member 'FortAscenderZipline_GetInteractComponentOverride::InteractingPawn' has a wrong offset!");
static_assert(offsetof(FortAscenderZipline_GetInteractComponentOverride, InteractComponent) == 0x000008, "Member 'FortAscenderZipline_GetInteractComponentOverride::InteractComponent' has a wrong offset!");
static_assert(offsetof(FortAscenderZipline_GetInteractComponentOverride, ReturnValue) == 0x000010, "Member 'FortAscenderZipline_GetInteractComponentOverride::ReturnValue' has a wrong offset!");

struct FortAscenderZipline_GetPawnUsingHandle final
{
public:
	class AFortPlayerPawn*                        ReturnValue;
};
static_assert(alignof(FortAscenderZipline_GetPawnUsingHandle) == 0x000008, "Wrong alignment on FortAscenderZipline_GetPawnUsingHandle");
static_assert(sizeof(FortAscenderZipline_GetPawnUsingHandle) == 0x000008, "Wrong size on FortAscenderZipline_GetPawnUsingHandle");
static_assert(offsetof(FortAscenderZipline_GetPawnUsingHandle, ReturnValue) == 0x000000, "Member 'FortAscenderZipline_GetPawnUsingHandle::ReturnValue' has a wrong offset!");

struct FortAscenderZipline_GetTopComponent final
{
public:
	class UPrimitiveComponent*                    ReturnValue;
};
static_assert(alignof(FortAscenderZipline_GetTopComponent) == 0x000008, "Wrong alignment on FortAscenderZipline_GetTopComponent");
static_assert(sizeof(FortAscenderZipline_GetTopComponent) == 0x000008, "Wrong size on FortAscenderZipline_GetTopComponent");
static_assert(offsetof(FortAscenderZipline_GetTopComponent, ReturnValue) == 0x000000, "Member 'FortAscenderZipline_GetTopComponent::ReturnValue' has a wrong offset!");

}
