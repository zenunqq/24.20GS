#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPurchaseNavButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Normal;
	class UWidgetAnimation*                       PeriodAlert;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                BorderSwapDirection;
	class UImage*                                 Image_AlertIcon;
	class UImage*                                 Image_arcs;
	class UImage*                                 Image_Arcs2;
	class UImage*                                 Image_Arcs3;
	class UImage*                                 Image_Arcs4;
	class UImage*                                 Image_Arrow;
	class UImage*                                 Image_BG;
	class UImage*                                 Image_HazardGlow;
	class UImage*                                 Image_IconGlow;
	class UImage*                                 Image_Lightning1;
	class UImage*                                 Image_Sharplines;
	class UImage*                                 Image_Spinner;
	class UOverlay*                               Overlay_IconEffects;
	class UOverlay*                               Overlay_Lightning;
	class USafeZone*                              SafeZone_0;
	class UImage*                                 Shadow;
	class UCommonTextBlock*                       Text_ButtonText_1;
	class UCommonTextBlock*                       Text_ButtonText_2;
	bool                                          FlipArrow;
	uint8                                         Pad_1499[0x7];
	TMulticastInlineDelegate<void()>              DispatchClicked;
	class FText                                   ButtonText;
	struct FTimerHandle                           PeriodicAnim;
	struct FDataTableRowHandle                    BackupInputAction;
	bool                                          toBP;
	uint8                                         Pad_14E1[0x7];
	class USoundBase*                             Unhovered_Sound;
	class USoundBase*                             Hovered_Sound;
	class USoundBase*                             Selected_Sound;
	bool                                          Pad_Left;
	bool                                          Pad_Right;

public:
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void EventSetupPeriodicTimer();
	void ExecuteUbergraph_PurchaseNavButton(int32 EntryPoint);
	void PlayPeriodicAnim();
	void PreConstruct(bool IsDesignTime);
	void ResetHoverAnimation();
	void UpdateTextSize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PurchaseNavButton_C">();
	}
	static class UPurchaseNavButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseNavButton_C>();
	}
};
static_assert(alignof(UPurchaseNavButton_C) == 0x000010, "Wrong alignment on UPurchaseNavButton_C");
static_assert(sizeof(UPurchaseNavButton_C) == 0x001510, "Wrong size on UPurchaseNavButton_C");
static_assert(offsetof(UPurchaseNavButton_C, UberGraphFrame) == 0x0013E0, "Member 'UPurchaseNavButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Normal) == 0x0013E8, "Member 'UPurchaseNavButton_C::Normal' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, PeriodAlert) == 0x0013F0, "Member 'UPurchaseNavButton_C::PeriodAlert' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Hover) == 0x0013F8, "Member 'UPurchaseNavButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, BorderSwapDirection) == 0x001400, "Member 'UPurchaseNavButton_C::BorderSwapDirection' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_AlertIcon) == 0x001408, "Member 'UPurchaseNavButton_C::Image_AlertIcon' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_arcs) == 0x001410, "Member 'UPurchaseNavButton_C::Image_arcs' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Arcs2) == 0x001418, "Member 'UPurchaseNavButton_C::Image_Arcs2' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Arcs3) == 0x001420, "Member 'UPurchaseNavButton_C::Image_Arcs3' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Arcs4) == 0x001428, "Member 'UPurchaseNavButton_C::Image_Arcs4' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Arrow) == 0x001430, "Member 'UPurchaseNavButton_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_BG) == 0x001438, "Member 'UPurchaseNavButton_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_HazardGlow) == 0x001440, "Member 'UPurchaseNavButton_C::Image_HazardGlow' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_IconGlow) == 0x001448, "Member 'UPurchaseNavButton_C::Image_IconGlow' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Lightning1) == 0x001450, "Member 'UPurchaseNavButton_C::Image_Lightning1' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Sharplines) == 0x001458, "Member 'UPurchaseNavButton_C::Image_Sharplines' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Image_Spinner) == 0x001460, "Member 'UPurchaseNavButton_C::Image_Spinner' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Overlay_IconEffects) == 0x001468, "Member 'UPurchaseNavButton_C::Overlay_IconEffects' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Overlay_Lightning) == 0x001470, "Member 'UPurchaseNavButton_C::Overlay_Lightning' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, SafeZone_0) == 0x001478, "Member 'UPurchaseNavButton_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Shadow) == 0x001480, "Member 'UPurchaseNavButton_C::Shadow' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Text_ButtonText_1) == 0x001488, "Member 'UPurchaseNavButton_C::Text_ButtonText_1' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Text_ButtonText_2) == 0x001490, "Member 'UPurchaseNavButton_C::Text_ButtonText_2' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, FlipArrow) == 0x001498, "Member 'UPurchaseNavButton_C::FlipArrow' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, DispatchClicked) == 0x0014A0, "Member 'UPurchaseNavButton_C::DispatchClicked' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, ButtonText) == 0x0014B0, "Member 'UPurchaseNavButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, PeriodicAnim) == 0x0014C8, "Member 'UPurchaseNavButton_C::PeriodicAnim' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, BackupInputAction) == 0x0014D0, "Member 'UPurchaseNavButton_C::BackupInputAction' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, toBP) == 0x0014E0, "Member 'UPurchaseNavButton_C::toBP' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Unhovered_Sound) == 0x0014E8, "Member 'UPurchaseNavButton_C::Unhovered_Sound' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Hovered_Sound) == 0x0014F0, "Member 'UPurchaseNavButton_C::Hovered_Sound' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Selected_Sound) == 0x0014F8, "Member 'UPurchaseNavButton_C::Selected_Sound' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Pad_Left) == 0x001500, "Member 'UPurchaseNavButton_C::Pad_Left' has a wrong offset!");
static_assert(offsetof(UPurchaseNavButton_C, Pad_Right) == 0x001501, "Member 'UPurchaseNavButton_C::Pad_Right' has a wrong offset!");

}
