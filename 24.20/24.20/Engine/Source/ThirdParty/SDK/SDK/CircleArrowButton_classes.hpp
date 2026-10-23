#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UCircleArrowButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Click;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 Image_Arrow;
	class UImage*                                 Image_Shadow;
	class UOverlay*                               Overlay_ButtonContainer;
	class USizeBox*                               Sizebox_InputAction;
	bool                                          Flip;
	uint8                                         Pad_1469[0x3];
	struct FLinearColor                           ArrowColor;
	struct FLinearColor                           ShadowColor;
	uint8                                         Pad_148C[0x4];
	double                                        EdgeSoftness;
	struct FLinearColor                           HoverColor;
	bool                                          UseShadow;
	bool                                          InputActionOnSide;

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_CircleArrowButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateArrowColor(const struct FLinearColor& Color, const struct FLinearColor& HoverColor_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CircleArrowButton_C">();
	}
	static class UCircleArrowButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCircleArrowButton_C>();
	}
};
static_assert(alignof(UCircleArrowButton_C) == 0x000010, "Wrong alignment on UCircleArrowButton_C");
static_assert(sizeof(UCircleArrowButton_C) == 0x0014B0, "Wrong size on UCircleArrowButton_C");
static_assert(offsetof(UCircleArrowButton_C, UberGraphFrame) == 0x001430, "Member 'UCircleArrowButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Click) == 0x001438, "Member 'UCircleArrowButton_C::Click' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Hover) == 0x001440, "Member 'UCircleArrowButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Image_Arrow) == 0x001448, "Member 'UCircleArrowButton_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Image_Shadow) == 0x001450, "Member 'UCircleArrowButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Overlay_ButtonContainer) == 0x001458, "Member 'UCircleArrowButton_C::Overlay_ButtonContainer' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Sizebox_InputAction) == 0x001460, "Member 'UCircleArrowButton_C::Sizebox_InputAction' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, Flip) == 0x001468, "Member 'UCircleArrowButton_C::Flip' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, ArrowColor) == 0x00146C, "Member 'UCircleArrowButton_C::ArrowColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, ShadowColor) == 0x00147C, "Member 'UCircleArrowButton_C::ShadowColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, EdgeSoftness) == 0x001490, "Member 'UCircleArrowButton_C::EdgeSoftness' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, HoverColor) == 0x001498, "Member 'UCircleArrowButton_C::HoverColor' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, UseShadow) == 0x0014A8, "Member 'UCircleArrowButton_C::UseShadow' has a wrong offset!");
static_assert(offsetof(UCircleArrowButton_C, InputActionOnSide) == 0x0014A9, "Member 'UCircleArrowButton_C::InputActionOnSide' has a wrong offset!");

}
