#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ProgressiveSetList_C_AddSetTile final
{
public:
	class UFortProgressiveSetTile*                ReturnValue;
	class UUserWidget*                            CallFunc_BP_CreateEntry_ReturnValue;
	class UFortProgressiveSetTile*                K2Node_DynamicCast_AsFort_Progressive_Set_Tile;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ProgressiveSetList_C_AddSetTile) == 0x000008, "Wrong alignment on ProgressiveSetList_C_AddSetTile");
static_assert(sizeof(ProgressiveSetList_C_AddSetTile) == 0x000020, "Wrong size on ProgressiveSetList_C_AddSetTile");
static_assert(offsetof(ProgressiveSetList_C_AddSetTile, ReturnValue) == 0x000000, "Member 'ProgressiveSetList_C_AddSetTile::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetList_C_AddSetTile, CallFunc_BP_CreateEntry_ReturnValue) == 0x000008, "Member 'ProgressiveSetList_C_AddSetTile::CallFunc_BP_CreateEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveSetList_C_AddSetTile, K2Node_DynamicCast_AsFort_Progressive_Set_Tile) == 0x000010, "Member 'ProgressiveSetList_C_AddSetTile::K2Node_DynamicCast_AsFort_Progressive_Set_Tile' has a wrong offset!");
static_assert(offsetof(ProgressiveSetList_C_AddSetTile, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ProgressiveSetList_C_AddSetTile::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList) == 0x000004, "Wrong alignment on ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList");
static_assert(sizeof(ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList) == 0x000004, "Wrong size on ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList");
static_assert(offsetof(ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList, EntryPoint) == 0x000000, "Member 'ProgressiveSetList_C_ExecuteUbergraph_ProgressiveSetList::EntryPoint' has a wrong offset!");

}
