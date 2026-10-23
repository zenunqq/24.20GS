#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USubscriptionModalButton_C final : public UCommonButtonLegacy
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
	void ExecuteUbergraph_SubscriptionModalButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBorderShowEffectWhenDisable(bool ShowEffectWhenDisabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubscriptionModalButton_C">();
	}
	static class USubscriptionModalButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubscriptionModalButton_C>();
	}
};
static_assert(alignof(USubscriptionModalButton_C) == 0x000010, "Wrong alignment on USubscriptionModalButton_C");
static_assert(sizeof(USubscriptionModalButton_C) == 0x0014D0, "Wrong size on USubscriptionModalButton_C");
static_assert(offsetof(USubscriptionModalButton_C, UberGraphFrame) == 0x001430, "Member 'USubscriptionModalButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Hover2) == 0x001438, "Member 'USubscriptionModalButton_C::Hover2' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Hover) == 0x001440, "Member 'USubscriptionModalButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Border_Material) == 0x001448, "Member 'USubscriptionModalButton_C::Border_Material' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Image) == 0x001450, "Member 'USubscriptionModalButton_C::Image' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Image_45) == 0x001458, "Member 'USubscriptionModalButton_C::Image_45' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Overlay_Right_Image) == 0x001460, "Member 'USubscriptionModalButton_C::Overlay_Right_Image' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Rich_Text) == 0x001468, "Member 'USubscriptionModalButton_C::Rich_Text' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, SizeBox_Height) == 0x001470, "Member 'USubscriptionModalButton_C::SizeBox_Height' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Button_text) == 0x001478, "Member 'USubscriptionModalButton_C::Button_text' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Text_Color) == 0x001490, "Member 'USubscriptionModalButton_C::Text_Color' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Material_Brush) == 0x0014A8, "Member 'USubscriptionModalButton_C::Material_Brush' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Right_Image) == 0x0014B0, "Member 'USubscriptionModalButton_C::Right_Image' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Justifiction) == 0x0014B8, "Member 'USubscriptionModalButton_C::Justifiction' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, Auto_wrap_text) == 0x0014B9, "Member 'USubscriptionModalButton_C::Auto_wrap_text' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, SimpleHover) == 0x0014BA, "Member 'USubscriptionModalButton_C::SimpleHover' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, FontSizeOverride) == 0x0014BB, "Member 'USubscriptionModalButton_C::FontSizeOverride' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, FontSize) == 0x0014BC, "Member 'USubscriptionModalButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(USubscriptionModalButton_C, ShearText) == 0x0014C0, "Member 'USubscriptionModalButton_C::ShearText' has a wrong offset!");

}
