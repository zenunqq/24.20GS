#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UWBP_VariantCustomizationHeader_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_Default;
	class UWidgetAnimation*                       Anim_HideSubheader;
	class UWidgetAnimation*                       Anim_ShowSubheader;
	class UImage*                                 Image_Header;
	class UImage*                                 Image_Subheader;
	class UCommonTextBlock*                       Text_Header;
	class UCommonTextBlock*                       Text_SubHeader;
	bool                                          SubHeaderShown;

public:
	void Construct();
	void ExecuteUbergraph_WBP_VariantCustomizationHeader(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Header(const class FText& InText, class UMaterialInterface* Image);
	void Set_Subheader(const class FText& InText, class UTexture2D* Image);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_VariantCustomizationHeader_C">();
	}
	static class UWBP_VariantCustomizationHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_VariantCustomizationHeader_C>();
	}
};
static_assert(alignof(UWBP_VariantCustomizationHeader_C) == 0x000008, "Wrong alignment on UWBP_VariantCustomizationHeader_C");
static_assert(sizeof(UWBP_VariantCustomizationHeader_C) == 0x0002B0, "Wrong size on UWBP_VariantCustomizationHeader_C");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, UberGraphFrame) == 0x000268, "Member 'UWBP_VariantCustomizationHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Anim_Default) == 0x000270, "Member 'UWBP_VariantCustomizationHeader_C::Anim_Default' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Anim_HideSubheader) == 0x000278, "Member 'UWBP_VariantCustomizationHeader_C::Anim_HideSubheader' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Anim_ShowSubheader) == 0x000280, "Member 'UWBP_VariantCustomizationHeader_C::Anim_ShowSubheader' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Image_Header) == 0x000288, "Member 'UWBP_VariantCustomizationHeader_C::Image_Header' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Image_Subheader) == 0x000290, "Member 'UWBP_VariantCustomizationHeader_C::Image_Subheader' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Text_Header) == 0x000298, "Member 'UWBP_VariantCustomizationHeader_C::Text_Header' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, Text_SubHeader) == 0x0002A0, "Member 'UWBP_VariantCustomizationHeader_C::Text_SubHeader' has a wrong offset!");
static_assert(offsetof(UWBP_VariantCustomizationHeader_C, SubHeaderShown) == 0x0002A8, "Member 'UWBP_VariantCustomizationHeader_C::SubHeaderShown' has a wrong offset!");

}
