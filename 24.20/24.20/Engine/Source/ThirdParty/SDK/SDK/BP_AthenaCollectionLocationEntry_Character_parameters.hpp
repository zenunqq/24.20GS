#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet final
{
public:
	ELocationEntryState                           EntryState;
};
static_assert(alignof(BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet) == 0x000001, "Wrong alignment on BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet");
static_assert(sizeof(BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet) == 0x000001, "Wrong size on BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet");
static_assert(offsetof(BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet, EntryState) == 0x000000, "Member 'BP_AthenaCollectionLocationEntry_Character_C_BP_OnLocationsFoundSet::EntryState' has a wrong offset!");

struct BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character final
{
public:
	int32                                         EntryPoint;
	ELocationEntryState                           K2Node_Event_EntryState;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character) == 0x000004, "Wrong alignment on BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character");
static_assert(sizeof(BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character) == 0x000008, "Wrong size on BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character");
static_assert(offsetof(BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character, EntryPoint) == 0x000000, "Member 'BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character, K2Node_Event_EntryState) == 0x000004, "Member 'BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character::K2Node_Event_EntryState' has a wrong offset!");
static_assert(offsetof(BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'BP_AthenaCollectionLocationEntry_Character_C_ExecuteUbergraph_BP_AthenaCollectionLocationEntry_Character::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
