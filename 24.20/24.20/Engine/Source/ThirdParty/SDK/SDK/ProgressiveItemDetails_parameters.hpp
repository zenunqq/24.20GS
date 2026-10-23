#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails) == 0x000004, "Wrong alignment on ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails");
static_assert(sizeof(ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails) == 0x000004, "Wrong size on ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails");
static_assert(offsetof(ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails, EntryPoint) == 0x000000, "Member 'ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails::EntryPoint' has a wrong offset!");

struct ProgressiveItemDetails_C_UpdateSubscribedVisuals final
{
public:
	bool                                          IsSubscribed;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	class UAthenaRewardItemTypeRarityTag_C*       K2Node_DynamicCast_AsAthena_Reward_Item_Type_Rarity_Tag;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	struct FSlateColor                            K2Node_Select_Default;
};
static_assert(alignof(ProgressiveItemDetails_C_UpdateSubscribedVisuals) == 0x000008, "Wrong alignment on ProgressiveItemDetails_C_UpdateSubscribedVisuals");
static_assert(sizeof(ProgressiveItemDetails_C_UpdateSubscribedVisuals) == 0x000050, "Wrong size on ProgressiveItemDetails_C_UpdateSubscribedVisuals");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, IsSubscribed) == 0x000000, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::IsSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, Temp_bool_Variable) == 0x000001, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, K2Node_DynamicCast_AsAthena_Reward_Item_Type_Rarity_Tag) == 0x000008, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::K2Node_DynamicCast_AsAthena_Reward_Item_Type_Rarity_Tag' has a wrong offset!");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ProgressiveItemDetails_C_UpdateSubscribedVisuals, K2Node_Select_Default) == 0x00003C, "Member 'ProgressiveItemDetails_C_UpdateSubscribedVisuals::K2Node_Select_Default' has a wrong offset!");

}
