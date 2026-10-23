#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UItemShopRefreshTimerButton_C final : public UAthenaItemShopRefreshTimerButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Timerimage;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_ItemShopRefreshTimerButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemShopRefreshTimerButton_C">();
	}
	static class UItemShopRefreshTimerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemShopRefreshTimerButton_C>();
	}
};
static_assert(alignof(UItemShopRefreshTimerButton_C) == 0x000010, "Wrong alignment on UItemShopRefreshTimerButton_C");
static_assert(sizeof(UItemShopRefreshTimerButton_C) == 0x0014F0, "Wrong size on UItemShopRefreshTimerButton_C");
static_assert(offsetof(UItemShopRefreshTimerButton_C, UberGraphFrame) == 0x0014D0, "Member 'UItemShopRefreshTimerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemShopRefreshTimerButton_C, Hover) == 0x0014D8, "Member 'UItemShopRefreshTimerButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UItemShopRefreshTimerButton_C, Timerimage) == 0x0014E0, "Member 'UItemShopRefreshTimerButton_C::Timerimage' has a wrong offset!");

}
