#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaMOTDTileMainPage_C final : public UFortAthenaMOTDTile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover_Mobile;
	class UWidgetAnimation*                       OnSelected_Mobile;
	class UWidgetAnimation*                       OnHover;
	class UWidgetAnimation*                       OnSelected;
	class UBackgroundBlur*                        BackgroundBlur_0;
	class UBorder*                                Border_0;
	class UBorder*                                Border_Details;
	class UBorder*                                Border_Mobile;
	class UBorder*                                Border_PipDisplay;
	class UCommonLoadGuard*                       CommonLoadGuard_0;
	class UImage*                                 Fill;
	class UImage*                                 Image_leftStick;
	class UImage*                                 Image_SelectedPointer;
	class UImage*                                 Image_SelectedPointer_Shadow;
	class UImage*                                 LoadingImage;
	class UOverlay*                               LoadingImageOvr;
	class UCommonWidgetSwitcherLegacy*            LoadSwitcher;
	class UScaleBox*                              NewsItemScale;
	class UOverlay*                               Overlay_1;
	class UOverlay*                               Overlay_2;
	class USizeBox*                               SizeBox_1;
	class USizeBox*                               SizeBox_Tile;
	bool                                          bShowImageOnly;
	uint8                                         Pad_1539[0x3];
	int32                                         PreviewPipCount;
	TMulticastInlineDelegate<void(bool NewIsHovered)> OnHoveredChanged;
	struct FLinearColor                           DefaultColor;
	class UMaterialInstanceDynamic*               MID_Font;
	uint8                                         Pad_1568[0x8];
	struct FTextBlockStyle                        MobileTextStyle;
	struct FTextBlockStyle                        OriginalTextStyle;

public:
	void BP_OnDeselected();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_AthenaMOTDTileMainPage(int32 EntryPoint);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnPopulateNews(const struct FAthenaMOTDBase& NewsEntry);
	void PreConstruct(bool IsDesignTime);
	void ShowImageOnly();
	void UpdateDisplay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMOTDTileMainPage_C">();
	}
	static class UAthenaMOTDTileMainPage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMOTDTileMainPage_C>();
	}
};
static_assert(alignof(UAthenaMOTDTileMainPage_C) == 0x000010, "Wrong alignment on UAthenaMOTDTileMainPage_C");
static_assert(sizeof(UAthenaMOTDTileMainPage_C) == 0x001B90, "Wrong size on UAthenaMOTDTileMainPage_C");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, UberGraphFrame) == 0x001480, "Member 'UAthenaMOTDTileMainPage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnHover_Mobile) == 0x001488, "Member 'UAthenaMOTDTileMainPage_C::OnHover_Mobile' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnSelected_Mobile) == 0x001490, "Member 'UAthenaMOTDTileMainPage_C::OnSelected_Mobile' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnHover) == 0x001498, "Member 'UAthenaMOTDTileMainPage_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnSelected) == 0x0014A0, "Member 'UAthenaMOTDTileMainPage_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, BackgroundBlur_0) == 0x0014A8, "Member 'UAthenaMOTDTileMainPage_C::BackgroundBlur_0' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Border_0) == 0x0014B0, "Member 'UAthenaMOTDTileMainPage_C::Border_0' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Border_Details) == 0x0014B8, "Member 'UAthenaMOTDTileMainPage_C::Border_Details' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Border_Mobile) == 0x0014C0, "Member 'UAthenaMOTDTileMainPage_C::Border_Mobile' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Border_PipDisplay) == 0x0014C8, "Member 'UAthenaMOTDTileMainPage_C::Border_PipDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, CommonLoadGuard_0) == 0x0014D0, "Member 'UAthenaMOTDTileMainPage_C::CommonLoadGuard_0' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Fill) == 0x0014D8, "Member 'UAthenaMOTDTileMainPage_C::Fill' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Image_leftStick) == 0x0014E0, "Member 'UAthenaMOTDTileMainPage_C::Image_leftStick' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Image_SelectedPointer) == 0x0014E8, "Member 'UAthenaMOTDTileMainPage_C::Image_SelectedPointer' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Image_SelectedPointer_Shadow) == 0x0014F0, "Member 'UAthenaMOTDTileMainPage_C::Image_SelectedPointer_Shadow' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, LoadingImage) == 0x0014F8, "Member 'UAthenaMOTDTileMainPage_C::LoadingImage' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, LoadingImageOvr) == 0x001500, "Member 'UAthenaMOTDTileMainPage_C::LoadingImageOvr' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, LoadSwitcher) == 0x001508, "Member 'UAthenaMOTDTileMainPage_C::LoadSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, NewsItemScale) == 0x001510, "Member 'UAthenaMOTDTileMainPage_C::NewsItemScale' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Overlay_1) == 0x001518, "Member 'UAthenaMOTDTileMainPage_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, Overlay_2) == 0x001520, "Member 'UAthenaMOTDTileMainPage_C::Overlay_2' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, SizeBox_1) == 0x001528, "Member 'UAthenaMOTDTileMainPage_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, SizeBox_Tile) == 0x001530, "Member 'UAthenaMOTDTileMainPage_C::SizeBox_Tile' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, bShowImageOnly) == 0x001538, "Member 'UAthenaMOTDTileMainPage_C::bShowImageOnly' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, PreviewPipCount) == 0x00153C, "Member 'UAthenaMOTDTileMainPage_C::PreviewPipCount' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OnHoveredChanged) == 0x001540, "Member 'UAthenaMOTDTileMainPage_C::OnHoveredChanged' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, DefaultColor) == 0x001550, "Member 'UAthenaMOTDTileMainPage_C::DefaultColor' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, MID_Font) == 0x001560, "Member 'UAthenaMOTDTileMainPage_C::MID_Font' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, MobileTextStyle) == 0x001570, "Member 'UAthenaMOTDTileMainPage_C::MobileTextStyle' has a wrong offset!");
static_assert(offsetof(UAthenaMOTDTileMainPage_C, OriginalTextStyle) == 0x001880, "Member 'UAthenaMOTDTileMainPage_C::OriginalTextStyle' has a wrong offset!");

}
