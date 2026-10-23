#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct CrewPurchase_TileDetails_Tag_C_OnTagSetup final
{
public:
	ECrewDetailsTag                               RewardTag;
	bool                                          bIsOwnedTag;
};
static_assert(alignof(CrewPurchase_TileDetails_Tag_C_OnTagSetup) == 0x000001, "Wrong alignment on CrewPurchase_TileDetails_Tag_C_OnTagSetup");
static_assert(sizeof(CrewPurchase_TileDetails_Tag_C_OnTagSetup) == 0x000002, "Wrong size on CrewPurchase_TileDetails_Tag_C_OnTagSetup");
static_assert(offsetof(CrewPurchase_TileDetails_Tag_C_OnTagSetup, RewardTag) == 0x000000, "Member 'CrewPurchase_TileDetails_Tag_C_OnTagSetup::RewardTag' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_Tag_C_OnTagSetup, bIsOwnedTag) == 0x000001, "Member 'CrewPurchase_TileDetails_Tag_C_OnTagSetup::bIsOwnedTag' has a wrong offset!");

struct CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag final
{
public:
	int32                                         EntryPoint;
	ECrewDetailsTag                               K2Node_Event_RewardTag;
	bool                                          K2Node_Event_bIsOwnedTag;
};
static_assert(alignof(CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag) == 0x000004, "Wrong alignment on CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag");
static_assert(sizeof(CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag) == 0x000008, "Wrong size on CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag");
static_assert(offsetof(CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag, EntryPoint) == 0x000000, "Member 'CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag, K2Node_Event_RewardTag) == 0x000004, "Member 'CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag::K2Node_Event_RewardTag' has a wrong offset!");
static_assert(offsetof(CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag, K2Node_Event_bIsOwnedTag) == 0x000005, "Member 'CrewPurchase_TileDetails_Tag_C_ExecuteUbergraph_CrewPurchase_TileDetails_Tag::K2Node_Event_bIsOwnedTag' has a wrong offset!");

}
