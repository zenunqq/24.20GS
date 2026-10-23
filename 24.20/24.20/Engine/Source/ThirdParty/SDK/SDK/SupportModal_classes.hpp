#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USupportModal_C final : public UAthenaItemShopTimerInfoModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowUp;
	class UCommonRichTextBlock*                   CommonRichTextBlock_114;
	class UImage*                                 Containment;
	class USafeZone*                              ContentSZ;
	class UImage*                                 Image_BackgroundBottomBar;
	class UImage*                                 Lightbox_HitTestBlocker;
	class USafeZone*                              MobileClose;
	class UScrollBox*                             PrimaryScrollBox;
	class UImage*                                 T_Icon_Backpacks_220_FarmerFemale_L;
	class UVerticalBox*                           VBox_PlatformSpecific;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_SupportModal(int32 EntryPoint);
	void OnModalBackout();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SupportModal_C">();
	}
	static class USupportModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USupportModal_C>();
	}
};
static_assert(alignof(USupportModal_C) == 0x000008, "Wrong alignment on USupportModal_C");
static_assert(sizeof(USupportModal_C) == 0x000410, "Wrong size on USupportModal_C");
static_assert(offsetof(USupportModal_C, UberGraphFrame) == 0x0003B8, "Member 'USupportModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USupportModal_C, ShowUp) == 0x0003C0, "Member 'USupportModal_C::ShowUp' has a wrong offset!");
static_assert(offsetof(USupportModal_C, CommonRichTextBlock_114) == 0x0003C8, "Member 'USupportModal_C::CommonRichTextBlock_114' has a wrong offset!");
static_assert(offsetof(USupportModal_C, Containment) == 0x0003D0, "Member 'USupportModal_C::Containment' has a wrong offset!");
static_assert(offsetof(USupportModal_C, ContentSZ) == 0x0003D8, "Member 'USupportModal_C::ContentSZ' has a wrong offset!");
static_assert(offsetof(USupportModal_C, Image_BackgroundBottomBar) == 0x0003E0, "Member 'USupportModal_C::Image_BackgroundBottomBar' has a wrong offset!");
static_assert(offsetof(USupportModal_C, Lightbox_HitTestBlocker) == 0x0003E8, "Member 'USupportModal_C::Lightbox_HitTestBlocker' has a wrong offset!");
static_assert(offsetof(USupportModal_C, MobileClose) == 0x0003F0, "Member 'USupportModal_C::MobileClose' has a wrong offset!");
static_assert(offsetof(USupportModal_C, PrimaryScrollBox) == 0x0003F8, "Member 'USupportModal_C::PrimaryScrollBox' has a wrong offset!");
static_assert(offsetof(USupportModal_C, T_Icon_Backpacks_220_FarmerFemale_L) == 0x000400, "Member 'USupportModal_C::T_Icon_Backpacks_220_FarmerFemale_L' has a wrong offset!");
static_assert(offsetof(USupportModal_C, VBox_PlatformSpecific) == 0x000408, "Member 'USupportModal_C::VBox_PlatformSpecific' has a wrong offset!");

}
