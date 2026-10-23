#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct CurrencyListView_C_AddDataToList final
{
public:
	struct FCurrencyData                          CurrencyData;
	class UCurrencyListObject_C*                  CallFunc_SpawnObject_ReturnValue;
};
static_assert(alignof(CurrencyListView_C_AddDataToList) == 0x000008, "Wrong alignment on CurrencyListView_C_AddDataToList");
static_assert(sizeof(CurrencyListView_C_AddDataToList) == 0x000058, "Wrong size on CurrencyListView_C_AddDataToList");
static_assert(offsetof(CurrencyListView_C_AddDataToList, CurrencyData) == 0x000000, "Member 'CurrencyListView_C_AddDataToList::CurrencyData' has a wrong offset!");
static_assert(offsetof(CurrencyListView_C_AddDataToList, CallFunc_SpawnObject_ReturnValue) == 0x000050, "Member 'CurrencyListView_C_AddDataToList::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

struct CurrencyListView_C_ExecuteUbergraph_CurrencyListView final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(CurrencyListView_C_ExecuteUbergraph_CurrencyListView) == 0x000004, "Wrong alignment on CurrencyListView_C_ExecuteUbergraph_CurrencyListView");
static_assert(sizeof(CurrencyListView_C_ExecuteUbergraph_CurrencyListView) == 0x000004, "Wrong size on CurrencyListView_C_ExecuteUbergraph_CurrencyListView");
static_assert(offsetof(CurrencyListView_C_ExecuteUbergraph_CurrencyListView, EntryPoint) == 0x000000, "Member 'CurrencyListView_C_ExecuteUbergraph_CurrencyListView::EntryPoint' has a wrong offset!");

}
