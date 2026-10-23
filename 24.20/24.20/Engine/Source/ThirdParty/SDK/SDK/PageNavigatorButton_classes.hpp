#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UPageNavigatorButton_C final : public UFortPageNavigationButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FadeOutBacking;
	class UWidgetAnimation*                       Translate_Bottom;
	class UWidgetAnimation*                       Translate_Top;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Backing;
	class UBorder*                                Border_button;
	class UBorder*                                BorderButton;
	class UBorder*                                GridBoundBorder;
	class UImage*                                 IMG_Arrow;
	bool                                          bIsTop;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PageNavigatorButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Button_colors(const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, const struct FLinearColor& Color4, const struct FLinearColor& Color5);
	void Set_colors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PageNavigatorButton_C">();
	}
	static class UPageNavigatorButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPageNavigatorButton_C>();
	}
};
static_assert(alignof(UPageNavigatorButton_C) == 0x000010, "Wrong alignment on UPageNavigatorButton_C");
static_assert(sizeof(UPageNavigatorButton_C) == 0x001450, "Wrong size on UPageNavigatorButton_C");
static_assert(offsetof(UPageNavigatorButton_C, UberGraphFrame) == 0x0013F0, "Member 'UPageNavigatorButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, FadeOutBacking) == 0x0013F8, "Member 'UPageNavigatorButton_C::FadeOutBacking' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Translate_Bottom) == 0x001400, "Member 'UPageNavigatorButton_C::Translate_Bottom' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Translate_Top) == 0x001408, "Member 'UPageNavigatorButton_C::Translate_Top' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Hover) == 0x001410, "Member 'UPageNavigatorButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Backing) == 0x001418, "Member 'UPageNavigatorButton_C::Backing' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, Border_button) == 0x001420, "Member 'UPageNavigatorButton_C::Border_button' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, BorderButton) == 0x001428, "Member 'UPageNavigatorButton_C::BorderButton' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, GridBoundBorder) == 0x001430, "Member 'UPageNavigatorButton_C::GridBoundBorder' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, IMG_Arrow) == 0x001438, "Member 'UPageNavigatorButton_C::IMG_Arrow' has a wrong offset!");
static_assert(offsetof(UPageNavigatorButton_C, bIsTop) == 0x001440, "Member 'UPageNavigatorButton_C::bIsTop' has a wrong offset!");

}
