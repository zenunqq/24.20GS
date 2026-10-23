#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal final
{
public:
	int32                                         EntryPoint;
	EFortItemType                                 K2Node_Event_ItemType;
};
static_assert(alignof(ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal) == 0x000004, "Wrong alignment on ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal");
static_assert(sizeof(ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal) == 0x000008, "Wrong size on ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal");
static_assert(offsetof(ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal, EntryPoint) == 0x000000, "Member 'ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal, K2Node_Event_ItemType) == 0x000004, "Member 'ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal::K2Node_Event_ItemType' has a wrong offset!");

struct ItemPreviewPedestal_C_Remove_Floor final
{
public:
	class AFortItemPreviewActor*                  Preview;
	class AWrapPreview_C*                         K2Node_DynamicCast_AsWrap_Preview;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class AItemOnPawnPreview_C*                   K2Node_DynamicCast_AsItem_on_Pawn_Preview;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(ItemPreviewPedestal_C_Remove_Floor) == 0x000008, "Wrong alignment on ItemPreviewPedestal_C_Remove_Floor");
static_assert(sizeof(ItemPreviewPedestal_C_Remove_Floor) == 0x000028, "Wrong size on ItemPreviewPedestal_C_Remove_Floor");
static_assert(offsetof(ItemPreviewPedestal_C_Remove_Floor, Preview) == 0x000000, "Member 'ItemPreviewPedestal_C_Remove_Floor::Preview' has a wrong offset!");
static_assert(offsetof(ItemPreviewPedestal_C_Remove_Floor, K2Node_DynamicCast_AsWrap_Preview) == 0x000008, "Member 'ItemPreviewPedestal_C_Remove_Floor::K2Node_DynamicCast_AsWrap_Preview' has a wrong offset!");
static_assert(offsetof(ItemPreviewPedestal_C_Remove_Floor, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ItemPreviewPedestal_C_Remove_Floor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemPreviewPedestal_C_Remove_Floor, K2Node_DynamicCast_AsItem_on_Pawn_Preview) == 0x000018, "Member 'ItemPreviewPedestal_C_Remove_Floor::K2Node_DynamicCast_AsItem_on_Pawn_Preview' has a wrong offset!");
static_assert(offsetof(ItemPreviewPedestal_C_Remove_Floor, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'ItemPreviewPedestal_C_Remove_Floor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct ItemPreviewPedestal_C_OnItemDisplayed final
{
public:
	EFortItemType                                 ItemType;
};
static_assert(alignof(ItemPreviewPedestal_C_OnItemDisplayed) == 0x000001, "Wrong alignment on ItemPreviewPedestal_C_OnItemDisplayed");
static_assert(sizeof(ItemPreviewPedestal_C_OnItemDisplayed) == 0x000001, "Wrong size on ItemPreviewPedestal_C_OnItemDisplayed");
static_assert(offsetof(ItemPreviewPedestal_C_OnItemDisplayed, ItemType) == 0x000000, "Member 'ItemPreviewPedestal_C_OnItemDisplayed::ItemType' has a wrong offset!");

}
