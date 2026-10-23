#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UAthenaMOTDSimpleNewsWidget_C final : public UFortAthenaMOTDSimpleNewsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UImage*                                 Backplate;
	class UImage*                                 GlowBackground;
	class UImage*                                 Image_Background;
	class UImage*                                 Image_Border;
	class UImage*                                 Image_ColorFade;
	class USizeBox*                               SizeBoxButtonSize;
	struct FColor                                 DarkDefaultColor;
	struct FColor                                 LightDefaultColor;
	struct FColor                                 PreviewDarkColor;
	bool                                          TestPreviewColors;
	uint8                                         Pad_42D[0x3];
	struct FColor                                 PreviewLightColor;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32 EntryPoint);
	void OnPopulateNews(const struct FAthenaMOTDBase& NewsEntry);
	void PreConstruct(bool IsDesignTime);
	void SetDynamicColors(const struct FColor& Dark, const struct FColor& Light);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMOTDSimpleNewsWidget_C">();
	}
	static class UAthenaMOTDSimpleNewsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMOTDSimpleNewsWidget_C>();
	}
};
static_assert(alignof(UAthenaMOTDSimpleNewsWidget_C) == 0x000008, "Wrong alignment on UAthenaMOTDSimpleNewsWidget_C");
static_assert(sizeof(UAthenaMOTDSimpleNewsWidget_C) == 0x000438, "Wrong size on UAthenaMOTDSimpleNewsWidget_C");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, UberGraphFrame) == 0x0003E0, "Member 'UAthenaMOTDSimpleNewsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, Intro) == 0x0003E8, "Member 'UAthenaMOTDSimpleNewsWidget_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, Backplate) == 0x0003F0, "Member 'UAthenaMOTDSimpleNewsWidget_C::Backplate' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, GlowBackground) == 0x0003F8, "Member 'UAthenaMOTDSimpleNewsWidget_C::GlowBackground' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, Image_Background) == 0x000400, "Member 'UAthenaMOTDSimpleNewsWidget_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, Image_Border) == 0x000408, "Member 'UAthenaMOTDSimpleNewsWidget_C::Image_Border' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, Image_ColorFade) == 0x000410, "Member 'UAthenaMOTDSimpleNewsWidget_C::Image_ColorFade' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, SizeBoxButtonSize) == 0x000418, "Member 'UAthenaMOTDSimpleNewsWidget_C::SizeBoxButtonSize' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, DarkDefaultColor) == 0x000420, "Member 'UAthenaMOTDSimpleNewsWidget_C::DarkDefaultColor' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, LightDefaultColor) == 0x000424, "Member 'UAthenaMOTDSimpleNewsWidget_C::LightDefaultColor' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, PreviewDarkColor) == 0x000428, "Member 'UAthenaMOTDSimpleNewsWidget_C::PreviewDarkColor' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, TestPreviewColors) == 0x00042C, "Member 'UAthenaMOTDSimpleNewsWidget_C::TestPreviewColors' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDSimpleNewsWidget_C, PreviewLightColor) == 0x000430, "Member 'UAthenaMOTDSimpleNewsWidget_C::PreviewLightColor' has a wrong offset!");

}
