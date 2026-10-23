#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UNameLoadoutPopup_C final : public UFortNameLoadoutPopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_2Slots;
	class UWidgetAnimation*                       Anim_1Slot;
	class URetainerBox*                           ExistingPreset;
	class UImage*                                 Image_BackgroundBottomBar;
	class UImage*                                 Image_BackLight;
	class UImage*                                 Image_CardExistingPreset_OverlayColor;
	class UImage*                                 Image_CardExistingPreset_Shadow;
	class UImage*                                 Image_CardNewPreset_Shadow;
	class UImage*                                 Image_Containment;
	class UImage*                                 Image_DividerLine;
	class UImage*                                 Image_HeaderIcon;
	class UImage*                                 Image_LoadoutArrow;
	class UImage*                                 Image_LoadoutArrow_Shadow;
	class ULightbox_C*                            Lightbox;
	class URetainerBox*                           NewPreset;
	class USafeZone*                              SafeZone_Header;
	class UCommonTextBlock*                       Text_HeaderTitle;
	class UCommonTextBlock*                       Text_ShortDescription;
	class UCommonTextBlock*                       Text_SubHeaderTitle;

public:
	void BndEvt__NameLoadoutPopup_Card_ExistingPreset_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void Construct();
	void ExecuteUbergraph_NameLoadoutPopup(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NameLoadoutPopup_C">();
	}
	static class UNameLoadoutPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNameLoadoutPopup_C>();
	}
};
static_assert(alignof(UNameLoadoutPopup_C) == 0x000008, "Wrong alignment on UNameLoadoutPopup_C");
static_assert(sizeof(UNameLoadoutPopup_C) == 0x000620, "Wrong size on UNameLoadoutPopup_C");
static_assert(offsetof(UNameLoadoutPopup_C, UberGraphFrame) == 0x000580, "Member 'UNameLoadoutPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Anim_2Slots) == 0x000588, "Member 'UNameLoadoutPopup_C::Anim_2Slots' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Anim_1Slot) == 0x000590, "Member 'UNameLoadoutPopup_C::Anim_1Slot' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, ExistingPreset) == 0x000598, "Member 'UNameLoadoutPopup_C::ExistingPreset' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_BackgroundBottomBar) == 0x0005A0, "Member 'UNameLoadoutPopup_C::Image_BackgroundBottomBar' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_BackLight) == 0x0005A8, "Member 'UNameLoadoutPopup_C::Image_BackLight' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_CardExistingPreset_OverlayColor) == 0x0005B0, "Member 'UNameLoadoutPopup_C::Image_CardExistingPreset_OverlayColor' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_CardExistingPreset_Shadow) == 0x0005B8, "Member 'UNameLoadoutPopup_C::Image_CardExistingPreset_Shadow' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_CardNewPreset_Shadow) == 0x0005C0, "Member 'UNameLoadoutPopup_C::Image_CardNewPreset_Shadow' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_Containment) == 0x0005C8, "Member 'UNameLoadoutPopup_C::Image_Containment' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_DividerLine) == 0x0005D0, "Member 'UNameLoadoutPopup_C::Image_DividerLine' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_HeaderIcon) == 0x0005D8, "Member 'UNameLoadoutPopup_C::Image_HeaderIcon' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_LoadoutArrow) == 0x0005E0, "Member 'UNameLoadoutPopup_C::Image_LoadoutArrow' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Image_LoadoutArrow_Shadow) == 0x0005E8, "Member 'UNameLoadoutPopup_C::Image_LoadoutArrow_Shadow' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Lightbox) == 0x0005F0, "Member 'UNameLoadoutPopup_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, NewPreset) == 0x0005F8, "Member 'UNameLoadoutPopup_C::NewPreset' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, SafeZone_Header) == 0x000600, "Member 'UNameLoadoutPopup_C::SafeZone_Header' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Text_HeaderTitle) == 0x000608, "Member 'UNameLoadoutPopup_C::Text_HeaderTitle' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Text_ShortDescription) == 0x000610, "Member 'UNameLoadoutPopup_C::Text_ShortDescription' has a wrong offset!");
static_assert(offsetof(UNameLoadoutPopup_C, Text_SubHeaderTitle) == 0x000618, "Member 'UNameLoadoutPopup_C::Text_SubHeaderTitle' has a wrong offset!");

}
