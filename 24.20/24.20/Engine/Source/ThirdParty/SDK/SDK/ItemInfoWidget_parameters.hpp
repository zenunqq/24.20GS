#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct ItemInfoWidget_C_SetRarityMaterialValues final
{
public:
	class UFortItemDefinition*                    ItemDefinition;
};
static_assert(alignof(ItemInfoWidget_C_SetRarityMaterialValues) == 0x000008, "Wrong alignment on ItemInfoWidget_C_SetRarityMaterialValues");
static_assert(sizeof(ItemInfoWidget_C_SetRarityMaterialValues) == 0x000008, "Wrong size on ItemInfoWidget_C_SetRarityMaterialValues");
static_assert(offsetof(ItemInfoWidget_C_SetRarityMaterialValues, ItemDefinition) == 0x000000, "Member 'ItemInfoWidget_C_SetRarityMaterialValues::ItemDefinition' has a wrong offset!");

struct ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget final
{
public:
	int32                                         EntryPoint;
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;
	uint8                                         Pad_C[0x4];
	class UFortItemDefinition*                    K2Node_Event_ItemDefinition;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_21[0x7];
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_2;
};
static_assert(alignof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget) == 0x000008, "Wrong alignment on ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget");
static_assert(sizeof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget) == 0x0000B8, "Wrong size on ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, EntryPoint) == 0x000000, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000008, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, K2Node_Event_ItemDefinition) == 0x000010, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::K2Node_Event_ItemDefinition' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000018, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_GetRarity_ReturnValue) == 0x000020, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_BPGetRarityData_ReturnValue) == 0x000028, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000A8, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget, CallFunc_MakeLiteralName_ReturnValue_2) == 0x0000B0, "Member 'ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget::CallFunc_MakeLiteralName_ReturnValue_2' has a wrong offset!");

}
