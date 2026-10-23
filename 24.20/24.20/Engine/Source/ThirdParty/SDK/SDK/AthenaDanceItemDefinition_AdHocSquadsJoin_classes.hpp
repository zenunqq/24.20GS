#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthenaDanceItemDefinition_AdHocSquadsJoin_C final : public UAthenaDanceItemDefinition
{
public:
	class UAthenaDanceItemDefinition*             GroupEmoteToStartLeader_AutoSquadUp;
	class UAthenaDanceItemDefinition*             GroupEmoteToStartFollower_AdHocSquadUp;
	class UAthenaDanceItemDefinition*             GroupEmoteToStartLeaderIfBothOwn_AdHocSquadUp;
	class UAthenaDanceItemDefinition*             GroupEmoteToStartFollowerIfBothOwn_AdHocSquadUp;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDanceItemDefinition_AdHocSquadsJoin_C">();
	}
	static class UAthenaDanceItemDefinition_AdHocSquadsJoin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDanceItemDefinition_AdHocSquadsJoin_C>();
	}
};
static_assert(alignof(UAthenaDanceItemDefinition_AdHocSquadsJoin_C) == 0x000008, "Wrong alignment on UAthenaDanceItemDefinition_AdHocSquadsJoin_C");
static_assert(sizeof(UAthenaDanceItemDefinition_AdHocSquadsJoin_C) == 0x000A50, "Wrong size on UAthenaDanceItemDefinition_AdHocSquadsJoin_C");
static_assert(offsetof(UAthenaDanceItemDefinition_AdHocSquadsJoin_C, GroupEmoteToStartLeader_AutoSquadUp) == 0x000A30, "Member 'UAthenaDanceItemDefinition_AdHocSquadsJoin_C::GroupEmoteToStartLeader_AutoSquadUp' has a wrong offset!");
static_assert(offsetof(UAthenaDanceItemDefinition_AdHocSquadsJoin_C, GroupEmoteToStartFollower_AdHocSquadUp) == 0x000A38, "Member 'UAthenaDanceItemDefinition_AdHocSquadsJoin_C::GroupEmoteToStartFollower_AdHocSquadUp' has a wrong offset!");
static_assert(offsetof(UAthenaDanceItemDefinition_AdHocSquadsJoin_C, GroupEmoteToStartLeaderIfBothOwn_AdHocSquadUp) == 0x000A40, "Member 'UAthenaDanceItemDefinition_AdHocSquadsJoin_C::GroupEmoteToStartLeaderIfBothOwn_AdHocSquadUp' has a wrong offset!");
static_assert(offsetof(UAthenaDanceItemDefinition_AdHocSquadsJoin_C, GroupEmoteToStartFollowerIfBothOwn_AdHocSquadUp) == 0x000A48, "Member 'UAthenaDanceItemDefinition_AdHocSquadsJoin_C::GroupEmoteToStartFollowerIfBothOwn_AdHocSquadUp' has a wrong offset!");

}
