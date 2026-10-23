#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaLoadoutTile_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(AthenaLoadoutTile_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AthenaLoadoutTile_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AthenaLoadoutTile_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AthenaLoadoutTile_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AthenaLoadoutTile_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'AthenaLoadoutTile_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_5[0x3];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_21[0x7];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_31[0x7];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_41[0x7];
	class UCosmeticLoadoutCard_C*                 K2Node_DynamicCast_AsCosmetic_Loadout_Card_4;
	bool                                          K2Node_DynamicCast_bSuccess_4;
};
static_assert(alignof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile) == 0x000008, "Wrong alignment on AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile");
static_assert(sizeof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile) == 0x000058, "Wrong size on AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, EntryPoint) == 0x000000, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_Event_bIsSelected) == 0x000004, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_AsCosmetic_Loadout_Card) == 0x000008, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_AsCosmetic_Loadout_Card' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_AsCosmetic_Loadout_Card_1) == 0x000018, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_AsCosmetic_Loadout_Card_1' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_AsCosmetic_Loadout_Card_2) == 0x000028, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_AsCosmetic_Loadout_Card_2' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_bSuccess_2) == 0x000030, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_AsCosmetic_Loadout_Card_3) == 0x000038, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_AsCosmetic_Loadout_Card_3' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_bSuccess_3) == 0x000040, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_AsCosmetic_Loadout_Card_4) == 0x000048, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_AsCosmetic_Loadout_Card_4' has a wrong offset!");
static_assert(offsetof(AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile, K2Node_DynamicCast_bSuccess_4) == 0x000050, "Member 'AthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");

}
