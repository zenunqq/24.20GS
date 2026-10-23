#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UCurrencyListView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonListView*                        DataListView;

public:
	void AddDataToList(const struct FCurrencyData& CurrencyData);
	void ExecuteUbergraph_CurrencyListView(int32 EntryPoint);
	void RunClearListView();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurrencyListView_C">();
	}
	static class UCurrencyListView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurrencyListView_C>();
	}
};
static_assert(alignof(UCurrencyListView_C) == 0x000008, "Wrong alignment on UCurrencyListView_C");
static_assert(sizeof(UCurrencyListView_C) == 0x000278, "Wrong size on UCurrencyListView_C");
static_assert(offsetof(UCurrencyListView_C, UberGraphFrame) == 0x000268, "Member 'UCurrencyListView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCurrencyListView_C, DataListView) == 0x000270, "Member 'UCurrencyListView_C::DataListView' has a wrong offset!");

}
