#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBacchusItemShopCreatorButton_C final : public UFortTextButton
{
public:
	uint8                                         Pad_14C8[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Backing;
	class UImage*                                 IMG_Arrow;
	bool                                          bFlipArrow;
	bool                                          bIsTop;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BacchusItemShopCreatorButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusItemShopCreatorButton_C">();
	}
	static class UBacchusItemShopCreatorButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusItemShopCreatorButton_C>();
	}
};
static_assert(alignof(UBacchusItemShopCreatorButton_C) == 0x000010, "Wrong alignment on UBacchusItemShopCreatorButton_C");
static_assert(sizeof(UBacchusItemShopCreatorButton_C) == 0x001500, "Wrong size on UBacchusItemShopCreatorButton_C");
static_assert(offsetof(UBacchusItemShopCreatorButton_C, UberGraphFrame) == 0x0014D0, "Member 'UBacchusItemShopCreatorButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopCreatorButton_C, Hover) == 0x0014D8, "Member 'UBacchusItemShopCreatorButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopCreatorButton_C, Backing) == 0x0014E0, "Member 'UBacchusItemShopCreatorButton_C::Backing' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopCreatorButton_C, IMG_Arrow) == 0x0014E8, "Member 'UBacchusItemShopCreatorButton_C::IMG_Arrow' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopCreatorButton_C, bFlipArrow) == 0x0014F0, "Member 'UBacchusItemShopCreatorButton_C::bFlipArrow' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopCreatorButton_C, bIsTop) == 0x0014F1, "Member 'UBacchusItemShopCreatorButton_C::bIsTop' has a wrong offset!");

}
