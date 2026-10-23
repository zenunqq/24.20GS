#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_Event_NumLoadouts;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	int32                                         K2Node_Event_Selection;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
};
static_assert(alignof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector) == 0x000008, "Wrong alignment on CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector");
static_assert(sizeof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector) == 0x000028, "Wrong size on CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, EntryPoint) == 0x000000, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::EntryPoint' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, K2Node_Event_NumLoadouts) == 0x000004, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::K2Node_Event_NumLoadouts' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, K2Node_Event_Selection) == 0x000020, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::K2Node_Event_Selection' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000024, "Member 'CosmeticLoadoutSelector_C_ExecuteUbergraph_CosmeticLoadoutSelector::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");

struct CosmeticLoadoutSelector_C_OnLoadoutSet final
{
public:
	int32                                         Selection;
};
static_assert(alignof(CosmeticLoadoutSelector_C_OnLoadoutSet) == 0x000004, "Wrong alignment on CosmeticLoadoutSelector_C_OnLoadoutSet");
static_assert(sizeof(CosmeticLoadoutSelector_C_OnLoadoutSet) == 0x000004, "Wrong size on CosmeticLoadoutSelector_C_OnLoadoutSet");
static_assert(offsetof(CosmeticLoadoutSelector_C_OnLoadoutSet, Selection) == 0x000000, "Member 'CosmeticLoadoutSelector_C_OnLoadoutSet::Selection' has a wrong offset!");

struct CosmeticLoadoutSelector_C_OnNumLoadoutsFound final
{
public:
	int32                                         NumLoadouts;
};
static_assert(alignof(CosmeticLoadoutSelector_C_OnNumLoadoutsFound) == 0x000004, "Wrong alignment on CosmeticLoadoutSelector_C_OnNumLoadoutsFound");
static_assert(sizeof(CosmeticLoadoutSelector_C_OnNumLoadoutsFound) == 0x000004, "Wrong size on CosmeticLoadoutSelector_C_OnNumLoadoutsFound");
static_assert(offsetof(CosmeticLoadoutSelector_C_OnNumLoadoutsFound, NumLoadouts) == 0x000000, "Member 'CosmeticLoadoutSelector_C_OnNumLoadoutsFound::NumLoadouts' has a wrong offset!");

}
