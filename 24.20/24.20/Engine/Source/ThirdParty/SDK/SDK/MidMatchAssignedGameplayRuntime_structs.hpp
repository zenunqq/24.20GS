#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FFortAssignedObjectiveSquadData final
{
public:
	uint8                                         SquadId;
	uint8                                         Pad_1[0x7];
	struct FVector                                CachedSquadAvgLocation;
};
static_assert(alignof(FFortAssignedObjectiveSquadData) == 0x000008, "Wrong alignment on FFortAssignedObjectiveSquadData");
static_assert(sizeof(FFortAssignedObjectiveSquadData) == 0x000020, "Wrong size on FFortAssignedObjectiveSquadData");
static_assert(offsetof(FFortAssignedObjectiveSquadData, SquadId) == 0x000000, "Member 'FFortAssignedObjectiveSquadData::SquadId' has a wrong offset!");
static_assert(offsetof(FFortAssignedObjectiveSquadData, CachedSquadAvgLocation) == 0x000008, "Member 'FFortAssignedObjectiveSquadData::CachedSquadAvgLocation' has a wrong offset!");

struct FFortAssignedObjectiveData final
{
public:
	TArray<struct FFortAssignedObjectiveSquadData> AssignedSquadDataArray;
	struct FVector                                ObjectiveLocation;
};
static_assert(alignof(FFortAssignedObjectiveData) == 0x000008, "Wrong alignment on FFortAssignedObjectiveData");
static_assert(sizeof(FFortAssignedObjectiveData) == 0x000028, "Wrong size on FFortAssignedObjectiveData");
static_assert(offsetof(FFortAssignedObjectiveData, AssignedSquadDataArray) == 0x000000, "Member 'FFortAssignedObjectiveData::AssignedSquadDataArray' has a wrong offset!");
static_assert(offsetof(FFortAssignedObjectiveData, ObjectiveLocation) == 0x000010, "Member 'FFortAssignedObjectiveData::ObjectiveLocation' has a wrong offset!");

}
