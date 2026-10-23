#pragma once

#include "Basic.hpp"

#include "ChaosSolverEngine_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult final
{
public:
	struct FChaosPhysicsCollisionInfo             PhysicsCollision;
	struct FHitResult                             ReturnValue;
};
static_assert(alignof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult) == 0x000008, "Wrong alignment on ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult");
static_assert(sizeof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult) == 0x0001A0, "Wrong size on ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult");
static_assert(offsetof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, PhysicsCollision) == 0x000000, "Member 'ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult::PhysicsCollision' has a wrong offset!");
static_assert(offsetof(ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult, ReturnValue) == 0x0000C0, "Member 'ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult::ReturnValue' has a wrong offset!");

struct ChaosSolverActor_SetSolverActive final
{
public:
	bool                                          bActive;
};
static_assert(alignof(ChaosSolverActor_SetSolverActive) == 0x000001, "Wrong alignment on ChaosSolverActor_SetSolverActive");
static_assert(sizeof(ChaosSolverActor_SetSolverActive) == 0x000001, "Wrong size on ChaosSolverActor_SetSolverActive");
static_assert(offsetof(ChaosSolverActor_SetSolverActive, bActive) == 0x000000, "Member 'ChaosSolverActor_SetSolverActive::bActive' has a wrong offset!");

}
