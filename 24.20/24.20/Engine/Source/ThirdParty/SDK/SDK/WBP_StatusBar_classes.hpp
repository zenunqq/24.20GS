#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_StatusBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         HorizontalBox_Content;
	class UBorder*                                Tag_Background;
	class UImage*                                 Tag_Image;
	class UCommonRichTextBlock*                   Tag_Text;
	struct FLinearColor                           Background_Color;
	struct FSlateColor                            Text_Color;
	uint8                                         Pad_2B4[0x4];
	class FText                                   Text;
	class UTexture2D*                             Image_Texture;
	double                                        Image_Rotation;
	struct FLinearColor                           Image_Color;
	class UMaterialInterface*                     Image_Material;
	struct FMargin                                ImagePadding;

public:
	void ExecuteUbergraph_WBP_StatusBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Update_Image(class UTexture2D* Texture, class UMaterialInterface* Material, const struct FLinearColor& Color, double Angle);
	void UpdateColor(const struct FLinearColor& Background_Color_0, const struct FSlateColor& Text_Color_0);
	void UpdateText(const class FText& Text_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatusBar_C">();
	}
	static class UWBP_StatusBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatusBar_C>();
	}
};
static_assert(alignof(UWBP_StatusBar_C) == 0x000008, "Wrong alignment on UWBP_StatusBar_C");
static_assert(sizeof(UWBP_StatusBar_C) == 0x000308, "Wrong size on UWBP_StatusBar_C");
static_assert(offsetof(UWBP_StatusBar_C, UberGraphFrame) == 0x000268, "Member 'UWBP_StatusBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, HorizontalBox_Content) == 0x000270, "Member 'UWBP_StatusBar_C::HorizontalBox_Content' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Tag_Background) == 0x000278, "Member 'UWBP_StatusBar_C::Tag_Background' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Tag_Image) == 0x000280, "Member 'UWBP_StatusBar_C::Tag_Image' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Tag_Text) == 0x000288, "Member 'UWBP_StatusBar_C::Tag_Text' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Background_Color) == 0x000290, "Member 'UWBP_StatusBar_C::Background_Color' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Text_Color) == 0x0002A0, "Member 'UWBP_StatusBar_C::Text_Color' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Text) == 0x0002B8, "Member 'UWBP_StatusBar_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Image_Texture) == 0x0002D0, "Member 'UWBP_StatusBar_C::Image_Texture' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Image_Rotation) == 0x0002D8, "Member 'UWBP_StatusBar_C::Image_Rotation' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Image_Color) == 0x0002E0, "Member 'UWBP_StatusBar_C::Image_Color' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, Image_Material) == 0x0002F0, "Member 'UWBP_StatusBar_C::Image_Material' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBar_C, ImagePadding) == 0x0002F8, "Member 'UWBP_StatusBar_C::ImagePadding' has a wrong offset!");

}
