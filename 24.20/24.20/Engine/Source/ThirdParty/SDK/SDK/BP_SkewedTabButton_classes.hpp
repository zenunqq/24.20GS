#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UBP_SkewedTabButton_C final : public UAthenaSkewedTabButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Selected;
	class UHorizontalBox*                         HorizontalBox_0;
	struct FLinearColor                           RGB1_Text_Color;
	bool                                          IsSelected;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BP_SkewedTabButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetTextColor(const struct FLinearColor& Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkewedTabButton_C">();
	}
	static class UBP_SkewedTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SkewedTabButton_C>();
	}
};
static_assert(alignof(UBP_SkewedTabButton_C) == 0x000010, "Wrong alignment on UBP_SkewedTabButton_C");
static_assert(sizeof(UBP_SkewedTabButton_C) == 0x0014A0, "Wrong size on UBP_SkewedTabButton_C");
static_assert(offsetof(UBP_SkewedTabButton_C, UberGraphFrame) == 0x001460, "Member 'UBP_SkewedTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SkewedTabButton_C, Unhovered) == 0x001468, "Member 'UBP_SkewedTabButton_C::Unhovered' has a wrong offset!");
static_assert(offsetof(UBP_SkewedTabButton_C, Hovered) == 0x001470, "Member 'UBP_SkewedTabButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(UBP_SkewedTabButton_C, Selected) == 0x001478, "Member 'UBP_SkewedTabButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UBP_SkewedTabButton_C, HorizontalBox_0) == 0x001480, "Member 'UBP_SkewedTabButton_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UBP_SkewedTabButton_C, RGB1_Text_Color) == 0x001488, "Member 'UBP_SkewedTabButton_C::RGB1_Text_Color' has a wrong offset!");
static_assert(offsetof(UBP_SkewedTabButton_C, IsSelected) == 0x001498, "Member 'UBP_SkewedTabButton_C::IsSelected' has a wrong offset!");

}
