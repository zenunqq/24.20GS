#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UPlusMinusButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       HoverAnim;
	class UImage*                                 BackgroundColor;
	class UCommonTextBlock*                       ButtonText;
	class UOverlay*                               Overlay_ButtonPrompt;
	class FText                                   In_Text;
	int32                                         Font_Size;
	bool                                          isLeft;
	bool                                          IsBottom;
	bool                                          AllowDisabledAnimation;

public:
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PlusMinusButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlusMinusButton_C">();
	}
	static class UPlusMinusButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlusMinusButton_C>();
	}
};
static_assert(alignof(UPlusMinusButton_C) == 0x000010, "Wrong alignment on UPlusMinusButton_C");
static_assert(sizeof(UPlusMinusButton_C) == 0x001430, "Wrong size on UPlusMinusButton_C");
static_assert(offsetof(UPlusMinusButton_C, UberGraphFrame) == 0x0013E0, "Member 'UPlusMinusButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, HoverAnim) == 0x0013E8, "Member 'UPlusMinusButton_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, BackgroundColor) == 0x0013F0, "Member 'UPlusMinusButton_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, ButtonText) == 0x0013F8, "Member 'UPlusMinusButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, Overlay_ButtonPrompt) == 0x001400, "Member 'UPlusMinusButton_C::Overlay_ButtonPrompt' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, In_Text) == 0x001408, "Member 'UPlusMinusButton_C::In_Text' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, Font_Size) == 0x001420, "Member 'UPlusMinusButton_C::Font_Size' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, isLeft) == 0x001424, "Member 'UPlusMinusButton_C::isLeft' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, IsBottom) == 0x001425, "Member 'UPlusMinusButton_C::IsBottom' has a wrong offset!");
static_assert(offsetof(UPlusMinusButton_C, AllowDisabledAnimation) == 0x001426, "Member 'UPlusMinusButton_C::AllowDisabledAnimation' has a wrong offset!");

}
