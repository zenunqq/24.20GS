#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_DeltaSeconds;
};
static_assert(alignof(GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine) == 0x000004, "Wrong alignment on GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine");
static_assert(sizeof(GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine) == 0x000008, "Wrong size on GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine");
static_assert(offsetof(GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine, EntryPoint) == 0x000000, "Member 'GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'GCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine::K2Node_Event_DeltaSeconds' has a wrong offset!");

struct GCN_Athena_LowGravity_ZipLine_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCN_Athena_LowGravity_ZipLine_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Athena_LowGravity_ZipLine_C_ReceiveTick");
static_assert(sizeof(GCN_Athena_LowGravity_ZipLine_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Athena_LowGravity_ZipLine_C_ReceiveTick");
static_assert(offsetof(GCN_Athena_LowGravity_ZipLine_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Athena_LowGravity_ZipLine_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
