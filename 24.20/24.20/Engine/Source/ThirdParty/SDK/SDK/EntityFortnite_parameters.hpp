#pragma once

#include "Basic.hpp"

#include "EntityFortnite_structs.hpp"

namespace SDK::Params
{

struct EntityFortniteStormSpawner_Start final
{
public:
	float                                         StartRadius;
	float                                         BoundsRadius;
	TArray<struct FEntityFortniteStormPhase>      Phases;
};
static_assert(alignof(EntityFortniteStormSpawner_Start) == 0x000008, "Wrong alignment on EntityFortniteStormSpawner_Start");
static_assert(sizeof(EntityFortniteStormSpawner_Start) == 0x000018, "Wrong size on EntityFortniteStormSpawner_Start");
static_assert(offsetof(EntityFortniteStormSpawner_Start, StartRadius) == 0x000000, "Member 'EntityFortniteStormSpawner_Start::StartRadius' has a wrong offset!");
static_assert(offsetof(EntityFortniteStormSpawner_Start, BoundsRadius) == 0x000004, "Member 'EntityFortniteStormSpawner_Start::BoundsRadius' has a wrong offset!");
static_assert(offsetof(EntityFortniteStormSpawner_Start, Phases) == 0x000008, "Member 'EntityFortniteStormSpawner_Start::Phases' has a wrong offset!");

struct EntityFortniteStormSpawner_Exists final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(EntityFortniteStormSpawner_Exists) == 0x000001, "Wrong alignment on EntityFortniteStormSpawner_Exists");
static_assert(sizeof(EntityFortniteStormSpawner_Exists) == 0x000001, "Wrong size on EntityFortniteStormSpawner_Exists");
static_assert(offsetof(EntityFortniteStormSpawner_Exists, ReturnValue) == 0x000000, "Member 'EntityFortniteStormSpawner_Exists::ReturnValue' has a wrong offset!");

}
