#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class URichTextButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover2;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_Material;
	class UCommonRichTextBlock*                   Rich_Text;
	class FText                                   Button_text;
	struct FSlateColor                            Text_Color;
	uint8                                         Pad_1484[0x4];
	class UMaterialInterface*                     Material_Brush;
	class UTexture2D*                             Right_Image;
	ETextJustify                                  Justifiction;
	bool                                          Auto_wrap_text;
	bool                                          SimpleHover;
	bool                                          FontSizeOverride;
	int32                                         FontSize;
	bool                                          ShearText;

public:
	void ExecuteUbergraph_RichTextButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RichTextButton_C">();
	}
	static class URichTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URichTextButton_C>();
	}
};
static_assert(alignof(URichTextButton_C) == 0x000010, "Wrong alignment on URichTextButton_C");
static_assert(sizeof(URichTextButton_C) == 0x0014B0, "Wrong size on URichTextButton_C");
static_assert(offsetof(URichTextButton_C, UberGraphFrame) == 0x001430, "Member 'URichTextButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Hover2) == 0x001438, "Member 'URichTextButton_C::Hover2' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Hover) == 0x001440, "Member 'URichTextButton_C::Hover' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Border_Material) == 0x001448, "Member 'URichTextButton_C::Border_Material' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Rich_Text) == 0x001450, "Member 'URichTextButton_C::Rich_Text' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Button_text) == 0x001458, "Member 'URichTextButton_C::Button_text' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Text_Color) == 0x001470, "Member 'URichTextButton_C::Text_Color' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Material_Brush) == 0x001488, "Member 'URichTextButton_C::Material_Brush' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Right_Image) == 0x001490, "Member 'URichTextButton_C::Right_Image' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Justifiction) == 0x001498, "Member 'URichTextButton_C::Justifiction' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, Auto_wrap_text) == 0x001499, "Member 'URichTextButton_C::Auto_wrap_text' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, SimpleHover) == 0x00149A, "Member 'URichTextButton_C::SimpleHover' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, FontSizeOverride) == 0x00149B, "Member 'URichTextButton_C::FontSizeOverride' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, FontSize) == 0x00149C, "Member 'URichTextButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(URichTextButton_C, ShearText) == 0x0014A0, "Member 'URichTextButton_C::ShearText' has a wrong offset!");

}
