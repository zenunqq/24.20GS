#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ItemSeriesOrRarity_C_UpdateItemDefinition final
{
public:
	class UFortItemDefinition*                    ItemDefinition;
	class FText                                   Temp_text_Variable;
	struct FFortColorPalette                      CallFunc_GetRarityOrSeriesColors_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_85[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_9E[0x2];
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_126[0x2];
	class FText                                   K2Node_Select_Default;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_141[0x7];
	class UWidget*                                K2Node_Select_Default_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(ItemSeriesOrRarity_C_UpdateItemDefinition) == 0x000008, "Wrong alignment on ItemSeriesOrRarity_C_UpdateItemDefinition");
static_assert(sizeof(ItemSeriesOrRarity_C_UpdateItemDefinition) == 0x000158, "Wrong size on ItemSeriesOrRarity_C_UpdateItemDefinition");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, ItemDefinition) == 0x000000, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::ItemDefinition' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, Temp_text_Variable) == 0x000008, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_GetRarityOrSeriesColors_ReturnValue) == 0x000020, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_GetRarityOrSeriesColors_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, K2Node_MakeStruct_SlateColor) == 0x000070, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, K2Node_MakeStruct_SlateColor_1) == 0x000088, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_GetRarity_ReturnValue) == 0x00009C, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_IsValid_ReturnValue_1) == 0x00009D, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_BPGetRarityData_ReturnValue) == 0x0000A0, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_IsValid_ReturnValue_2) == 0x000120, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_IsValid_ReturnValue_3) == 0x000121, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_Not_PreBool_ReturnValue) == 0x000122, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, Temp_bool_Variable) == 0x000123, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, Temp_bool_Variable_1) == 0x000124, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, CallFunc_BooleanAND_ReturnValue) == 0x000125, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, K2Node_Select_Default) == 0x000128, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, Temp_byte_Variable) == 0x000140, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, K2Node_Select_Default_1) == 0x000148, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, Temp_byte_Variable_1) == 0x000150, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, Temp_bool_Variable_2) == 0x000151, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemSeriesOrRarity_C_UpdateItemDefinition, K2Node_Select_Default_2) == 0x000152, "Member 'ItemSeriesOrRarity_C_UpdateItemDefinition::K2Node_Select_Default_2' has a wrong offset!");

}
