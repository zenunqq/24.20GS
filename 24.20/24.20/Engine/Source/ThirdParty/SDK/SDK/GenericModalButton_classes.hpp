#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UGenericModalButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover2;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_Material;
	class UImage*                                 Image;
	class UImage*                                 Image_45;
	class UOverlay*                               Overlay_Right_Image;
	class UCommonRichTextBlock*                   Rich_Text;
	class USizeBox*                               SizeBox_Height;
	class FText                                   Button_text;
	struct FSlateColor                            Text_Color;
	uint8                                         Pad_14A4[0x4];
	class UMaterialInterface*                     Material_Brush;
	class UTexture2D*                             Right_Image;
	ETextJustify                                  Justifiction;
	bool                                          Auto_wrap_text;
	bool                                          SimpleHover;
	bool                                          FontSizeOverride;
	int32                                         FontSize;
	bool                                          ShearText;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_GenericModalButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBorderShowEffectWhenDisable(bool ShowEffectWhenDisabled);
	void SetButtonText(const class FText& ButtonText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GenericModalButton_C">();
	}
	static class UGenericModalButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericModalButton_C>();
	}
};
static_assert(alignof(UGenericModalButton_C) == 0x000010, "Wrong alignment on UGenericModalButton_C");
static_assert(sizeof(UGenericModalButton_C) == 0x0014D0, "Wrong size on UGenericModalButton_C");
static_assert(offsetof(UGenericModalButton_C, UberGraphFrame) == 0x001430, "Member 'UGenericModalButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Hover2) == 0x001438, "Member 'UGenericModalButton_C::Hover2' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Hover) == 0x001440, "Member 'UGenericModalButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Border_Material) == 0x001448, "Member 'UGenericModalButton_C::Border_Material' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Image) == 0x001450, "Member 'UGenericModalButton_C::Image' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Image_45) == 0x001458, "Member 'UGenericModalButton_C::Image_45' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Overlay_Right_Image) == 0x001460, "Member 'UGenericModalButton_C::Overlay_Right_Image' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Rich_Text) == 0x001468, "Member 'UGenericModalButton_C::Rich_Text' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, SizeBox_Height) == 0x001470, "Member 'UGenericModalButton_C::SizeBox_Height' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Button_text) == 0x001478, "Member 'UGenericModalButton_C::Button_text' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Text_Color) == 0x001490, "Member 'UGenericModalButton_C::Text_Color' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Material_Brush) == 0x0014A8, "Member 'UGenericModalButton_C::Material_Brush' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Right_Image) == 0x0014B0, "Member 'UGenericModalButton_C::Right_Image' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Justifiction) == 0x0014B8, "Member 'UGenericModalButton_C::Justifiction' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, Auto_wrap_text) == 0x0014B9, "Member 'UGenericModalButton_C::Auto_wrap_text' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, SimpleHover) == 0x0014BA, "Member 'UGenericModalButton_C::SimpleHover' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, FontSizeOverride) == 0x0014BB, "Member 'UGenericModalButton_C::FontSizeOverride' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, FontSize) == 0x0014BC, "Member 'UGenericModalButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(UGenericModalButton_C, ShearText) == 0x0014C0, "Member 'UGenericModalButton_C::ShearText' has a wrong offset!");

}
