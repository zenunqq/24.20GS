#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FChaosDestructionEvent_SWC final
{
public:
	struct FVector3f                              Position;
	struct FVector3f                              Normal;
	struct FVector3f                              Velocity;
	struct FVector3f                              AngularVelocity;
	float                                         ExtentMin;
	float                                         ExtentMax;
	int32                                         ParticleID;
	float                                         Time;
	int32                                         Type;
};
static_assert(alignof(FChaosDestructionEvent_SWC) == 0x000004, "Wrong alignment on FChaosDestructionEvent_SWC");
static_assert(sizeof(FChaosDestructionEvent_SWC) == 0x000044, "Wrong size on FChaosDestructionEvent_SWC");
static_assert(offsetof(FChaosDestructionEvent_SWC, Position) == 0x000000, "Member 'FChaosDestructionEvent_SWC::Position' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Normal) == 0x00000C, "Member 'FChaosDestructionEvent_SWC::Normal' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Velocity) == 0x000018, "Member 'FChaosDestructionEvent_SWC::Velocity' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, AngularVelocity) == 0x000024, "Member 'FChaosDestructionEvent_SWC::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, ExtentMin) == 0x000030, "Member 'FChaosDestructionEvent_SWC::ExtentMin' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, ExtentMax) == 0x000034, "Member 'FChaosDestructionEvent_SWC::ExtentMax' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, ParticleID) == 0x000038, "Member 'FChaosDestructionEvent_SWC::ParticleID' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Time) == 0x00003C, "Member 'FChaosDestructionEvent_SWC::Time' has a wrong offset!");
static_assert(offsetof(FChaosDestructionEvent_SWC, Type) == 0x000040, "Member 'FChaosDestructionEvent_SWC::Type' has a wrong offset!");

}
