#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaMOTDTile_C final : public UFortAthenaMOTDTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHovered;
	class UWidgetAnimation*                       Intro;
	class UBorder*                                Border_Details;
	class UBorder*                                Border_PipDisplay;
	class UCommonLoadGuard*                       CommonLoadGuard_0;
	class UImage*                                 Fill;
	class UImage*                                 Image_196;
	class UImage*                                 Image_ClickCatcher;
	class UImage*                                 LoadingImage;
	class UOverlay*                               LoadingImageOvr;
	class UCommonWidgetSwitcherLegacy*            LoadSwitcher;
	class UScaleBox*                              NewsItemScale;
	class USizeBox*                               SizeBox_Tile;
	bool                                          bShowImageOnly;
	uint8                                         Pad_14F1[0x7];
	TMulticastInlineDelegate<void(bool NewIsHovered)> OnHoveredChanged;

public:
	void ExecuteUbergraph_AthenaMOTDTile(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void ShowImageOnly();
	void UpdateDisplay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMOTDTile_C">();
	}
	static class UAthenaMOTDTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMOTDTile_C>();
	}
};
static_assert(alignof(UAthenaMOTDTile_C) == 0x000010, "Wrong alignment on UAthenaMOTDTile_C");
static_assert(sizeof(UAthenaMOTDTile_C) == 0x001510, "Wrong size on UAthenaMOTDTile_C");
static_assert(offsetof(UAthenaMOTDTile_C, UberGraphFrame) == 0x001480, "Member 'UAthenaMOTDTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, OnHovered) == 0x001488, "Member 'UAthenaMOTDTile_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, Intro) == 0x001490, "Member 'UAthenaMOTDTile_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, Border_Details) == 0x001498, "Member 'UAthenaMOTDTile_C::Border_Details' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, Border_PipDisplay) == 0x0014A0, "Member 'UAthenaMOTDTile_C::Border_PipDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, CommonLoadGuard_0) == 0x0014A8, "Member 'UAthenaMOTDTile_C::CommonLoadGuard_0' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, Fill) == 0x0014B0, "Member 'UAthenaMOTDTile_C::Fill' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, Image_196) == 0x0014B8, "Member 'UAthenaMOTDTile_C::Image_196' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, Image_ClickCatcher) == 0x0014C0, "Member 'UAthenaMOTDTile_C::Image_ClickCatcher' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, LoadingImage) == 0x0014C8, "Member 'UAthenaMOTDTile_C::LoadingImage' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, LoadingImageOvr) == 0x0014D0, "Member 'UAthenaMOTDTile_C::LoadingImageOvr' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, LoadSwitcher) == 0x0014D8, "Member 'UAthenaMOTDTile_C::LoadSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, NewsItemScale) == 0x0014E0, "Member 'UAthenaMOTDTile_C::NewsItemScale' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, SizeBox_Tile) == 0x0014E8, "Member 'UAthenaMOTDTile_C::SizeBox_Tile' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, bShowImageOnly) == 0x0014F0, "Member 'UAthenaMOTDTile_C::bShowImageOnly' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTile_C, OnHoveredChanged) == 0x0014F8, "Member 'UAthenaMOTDTile_C::OnHoveredChanged' has a wrong offset!");

}
