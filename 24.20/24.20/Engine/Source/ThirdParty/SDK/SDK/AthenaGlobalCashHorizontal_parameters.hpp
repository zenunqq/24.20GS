#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_Event_GlobalCashBalance;
};
static_assert(alignof(AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal) == 0x000004, "Wrong alignment on AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal");
static_assert(sizeof(AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal) == 0x000008, "Wrong size on AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal");
static_assert(offsetof(AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal, EntryPoint) == 0x000000, "Member 'AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal, K2Node_Event_GlobalCashBalance) == 0x000004, "Member 'AthenaGlobalCashHorizontal_C_ExecuteUbergraph_AthenaGlobalCashHorizontal::K2Node_Event_GlobalCashBalance' has a wrong offset!");

struct AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully final
{
public:
	int32                                         GlobalCashBalance;
};
static_assert(alignof(AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully) == 0x000004, "Wrong alignment on AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully");
static_assert(sizeof(AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully) == 0x000004, "Wrong size on AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully");
static_assert(offsetof(AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully, GlobalCashBalance) == 0x000000, "Member 'AthenaGlobalCashHorizontal_C_OnQueryCompletedSuccessfully::GlobalCashBalance' has a wrong offset!");

}
