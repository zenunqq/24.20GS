#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
};
static_assert(alignof(VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab) == 0x000004, "Wrong alignment on VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab");
static_assert(sizeof(VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab) == 0x000008, "Wrong size on VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab");
static_assert(offsetof(VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab, EntryPoint) == 0x000000, "Member 'VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'VariantFilterTab_C_ExecuteUbergraph_VariantFilterTab::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

}
