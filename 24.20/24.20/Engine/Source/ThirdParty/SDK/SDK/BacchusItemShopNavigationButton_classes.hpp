#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UBacchusItemShopNavigationButton_C final : public UAthenaItemShopNavigationButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FadeOutBacking;
	class UWidgetAnimation*                       Translate_Bottom;
	class UWidgetAnimation*                       Translate_Top;
	class UWidgetAnimation*                       InitialState;
	class UImage*                                 Backing;
	class UBorder*                                BorderButton;
	class UBorder*                                GridBoundBorder;
	class UImage*                                 IMG_Arrow;
	bool                                          bFlipArrow;
	bool                                          bIsTop;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BacchusItemShopNavigationButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BacchusItemShopNavigationButton_C">();
	}
	static class UBacchusItemShopNavigationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBacchusItemShopNavigationButton_C>();
	}
};
static_assert(alignof(UBacchusItemShopNavigationButton_C) == 0x000010, "Wrong alignment on UBacchusItemShopNavigationButton_C");
static_assert(sizeof(UBacchusItemShopNavigationButton_C) == 0x001490, "Wrong size on UBacchusItemShopNavigationButton_C");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, UberGraphFrame) == 0x001440, "Member 'UBacchusItemShopNavigationButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, FadeOutBacking) == 0x001448, "Member 'UBacchusItemShopNavigationButton_C::FadeOutBacking' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, Translate_Bottom) == 0x001450, "Member 'UBacchusItemShopNavigationButton_C::Translate_Bottom' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, Translate_Top) == 0x001458, "Member 'UBacchusItemShopNavigationButton_C::Translate_Top' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, InitialState) == 0x001460, "Member 'UBacchusItemShopNavigationButton_C::InitialState' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, Backing) == 0x001468, "Member 'UBacchusItemShopNavigationButton_C::Backing' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, BorderButton) == 0x001470, "Member 'UBacchusItemShopNavigationButton_C::BorderButton' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, GridBoundBorder) == 0x001478, "Member 'UBacchusItemShopNavigationButton_C::GridBoundBorder' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, IMG_Arrow) == 0x001480, "Member 'UBacchusItemShopNavigationButton_C::IMG_Arrow' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, bFlipArrow) == 0x001488, "Member 'UBacchusItemShopNavigationButton_C::bFlipArrow' has a wrong offset!");
static_assert(offsetof(UBacchusItemShopNavigationButton_C, bIsTop) == 0x001489, "Member 'UBacchusItemShopNavigationButton_C::bIsTop' has a wrong offset!");

}
