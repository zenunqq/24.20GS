#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_Event_GlobalCashBalance;
};
static_assert(alignof(AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash) == 0x000004, "Wrong alignment on AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash");
static_assert(sizeof(AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash) == 0x000008, "Wrong size on AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash");
static_assert(offsetof(AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash, EntryPoint) == 0x000000, "Member 'AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash, K2Node_Event_GlobalCashBalance) == 0x000004, "Member 'AthenaGlobalCash_C_ExecuteUbergraph_AthenaGlobalCash::K2Node_Event_GlobalCashBalance' has a wrong offset!");

struct AthenaGlobalCash_C_OnQueryCompletedSuccessfully final
{
public:
	int32                                         GlobalCashBalance;
};
static_assert(alignof(AthenaGlobalCash_C_OnQueryCompletedSuccessfully) == 0x000004, "Wrong alignment on AthenaGlobalCash_C_OnQueryCompletedSuccessfully");
static_assert(sizeof(AthenaGlobalCash_C_OnQueryCompletedSuccessfully) == 0x000004, "Wrong size on AthenaGlobalCash_C_OnQueryCompletedSuccessfully");
static_assert(offsetof(AthenaGlobalCash_C_OnQueryCompletedSuccessfully, GlobalCashBalance) == 0x000000, "Member 'AthenaGlobalCash_C_OnQueryCompletedSuccessfully::GlobalCashBalance' has a wrong offset!");

}
