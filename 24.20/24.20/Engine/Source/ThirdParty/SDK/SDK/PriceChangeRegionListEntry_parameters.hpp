#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct PriceChangeRegionListEntry_C_SetItem final
{
public:
	struct FCrewTableRow                          CrewTableRow;
};
static_assert(alignof(PriceChangeRegionListEntry_C_SetItem) == 0x000008, "Wrong alignment on PriceChangeRegionListEntry_C_SetItem");
static_assert(sizeof(PriceChangeRegionListEntry_C_SetItem) == 0x000018, "Wrong size on PriceChangeRegionListEntry_C_SetItem");
static_assert(offsetof(PriceChangeRegionListEntry_C_SetItem, CrewTableRow) == 0x000000, "Member 'PriceChangeRegionListEntry_C_SetItem::CrewTableRow' has a wrong offset!");

struct PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   Temp_text_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_41[0x7];
	class FText                                   Temp_text_Variable_2;
	struct FCrewTableRow                          K2Node_CustomEvent_CrewTableRow;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;
	uint8                                         Pad_7B[0x5];
	class FText                                   K2Node_Select_Default;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_2;
	uint8                                         Pad_99[0x7];
	class FText                                   K2Node_Select_Default_1;
	class FText                                   K2Node_Select_Default_2;
};
static_assert(alignof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry) == 0x000008, "Wrong alignment on PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry");
static_assert(sizeof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry) == 0x0000D0, "Wrong size on PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, EntryPoint) == 0x000000, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, Temp_text_Variable) == 0x000008, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, Temp_bool_Variable) == 0x000020, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, Temp_text_Variable_1) == 0x000028, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, Temp_bool_Variable_1) == 0x000040, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, Temp_text_Variable_2) == 0x000048, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, K2Node_CustomEvent_CrewTableRow) == 0x000060, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::K2Node_CustomEvent_CrewTableRow' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, Temp_bool_Variable_2) == 0x000078, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000079, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x00007A, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, K2Node_Select_Default) == 0x000080, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, CallFunc_Array_IsValidIndex_ReturnValue_2) == 0x000098, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::CallFunc_Array_IsValidIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, K2Node_Select_Default_1) == 0x0000A0, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry, K2Node_Select_Default_2) == 0x0000B8, "Member 'PriceChangeRegionListEntry_C_ExecuteUbergraph_PriceChangeRegionListEntry::K2Node_Select_Default_2' has a wrong offset!");

}
