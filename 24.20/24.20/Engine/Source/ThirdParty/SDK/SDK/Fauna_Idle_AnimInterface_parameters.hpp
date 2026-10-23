#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Fauna_Idle_AnimInterface_C_Fauna_Idle final
{
public:
	struct FPoseLink                              InPose_Idle;
	struct FPoseLink                              Fauna_Idle_0;
};
static_assert(alignof(Fauna_Idle_AnimInterface_C_Fauna_Idle) == 0x000008, "Wrong alignment on Fauna_Idle_AnimInterface_C_Fauna_Idle");
static_assert(sizeof(Fauna_Idle_AnimInterface_C_Fauna_Idle) == 0x000020, "Wrong size on Fauna_Idle_AnimInterface_C_Fauna_Idle");
static_assert(offsetof(Fauna_Idle_AnimInterface_C_Fauna_Idle, InPose_Idle) == 0x000000, "Member 'Fauna_Idle_AnimInterface_C_Fauna_Idle::InPose_Idle' has a wrong offset!");
static_assert(offsetof(Fauna_Idle_AnimInterface_C_Fauna_Idle, Fauna_Idle_0) == 0x000010, "Member 'Fauna_Idle_AnimInterface_C_Fauna_Idle::Fauna_Idle_0' has a wrong offset!");

struct Fauna_Idle_AnimInterface_C_Fauna_IdleTurn final
{
public:
	struct FPoseLink                              InPose_IdleTurn;
	struct FPoseLink                              Fauna_IdleTurn_0;
};
static_assert(alignof(Fauna_Idle_AnimInterface_C_Fauna_IdleTurn) == 0x000008, "Wrong alignment on Fauna_Idle_AnimInterface_C_Fauna_IdleTurn");
static_assert(sizeof(Fauna_Idle_AnimInterface_C_Fauna_IdleTurn) == 0x000020, "Wrong size on Fauna_Idle_AnimInterface_C_Fauna_IdleTurn");
static_assert(offsetof(Fauna_Idle_AnimInterface_C_Fauna_IdleTurn, InPose_IdleTurn) == 0x000000, "Member 'Fauna_Idle_AnimInterface_C_Fauna_IdleTurn::InPose_IdleTurn' has a wrong offset!");
static_assert(offsetof(Fauna_Idle_AnimInterface_C_Fauna_IdleTurn, Fauna_IdleTurn_0) == 0x000010, "Member 'Fauna_Idle_AnimInterface_C_Fauna_IdleTurn::Fauna_IdleTurn_0' has a wrong offset!");

}
