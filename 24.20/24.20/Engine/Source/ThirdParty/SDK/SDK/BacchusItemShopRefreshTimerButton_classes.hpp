#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBacchusItemShopRefreshTimerButton_C final : public UAthenaItemShopRefreshTimerButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Image_80;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BacchusItemShopRefreshTimerButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusItemShopRefreshTimerButton_C">();
	}
	static class UBacchusItemShopRefreshTimerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusItemShopRefreshTimerButton_C>();
	}
};
static_assert(alignof(UBacchusItemShopRefreshTimerButton_C) == 0x000010, "Wrong alignment on UBacchusItemShopRefreshTimerButton_C");
static_assert(sizeof(UBacchusItemShopRefreshTimerButton_C) == 0x0014F0, "Wrong size on UBacchusItemShopRefreshTimerButton_C");
static_assert(offsetof(UBacchusItemShopRefreshTimerButton_C, UberGraphFrame) == 0x0014D0, "Member 'UBacchusItemShopRefreshTimerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopRefreshTimerButton_C, Hover) == 0x0014D8, "Member 'UBacchusItemShopRefreshTimerButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopRefreshTimerButton_C, Image_80) == 0x0014E0, "Member 'UBacchusItemShopRefreshTimerButton_C::Image_80' has a wrong offset!");

}
