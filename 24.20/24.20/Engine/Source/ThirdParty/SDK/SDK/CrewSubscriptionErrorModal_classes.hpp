#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UCrewSubscriptionErrorModal_C final : public UCrewSubscriptionErrorModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowUp;
	class UImage*                                 Badge;
	class UImage*                                 Containment;
	class USafeZone*                              ContentSZ;
	class UImage*                                 Glow;
	class UImage*                                 Image_BackgroundBottomBar;
	class UImage*                                 Lightbox_HitTestBlocker;
	class USafeZone*                              MobileClose;
	class UScrollBox*                             PrimaryScrollBox;
	class UVerticalBox*                           VBox_PlatformSpecific;
	class UImage*                                 Wordmark;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_CrewSubscriptionErrorModal(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CrewSubscriptionErrorModal_C">();
	}
	static class UCrewSubscriptionErrorModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewSubscriptionErrorModal_C>();
	}
};
static_assert(alignof(UCrewSubscriptionErrorModal_C) == 0x000008, "Wrong alignment on UCrewSubscriptionErrorModal_C");
static_assert(sizeof(UCrewSubscriptionErrorModal_C) == 0x000418, "Wrong size on UCrewSubscriptionErrorModal_C");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, UberGraphFrame) == 0x0003B8, "Member 'UCrewSubscriptionErrorModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, ShowUp) == 0x0003C0, "Member 'UCrewSubscriptionErrorModal_C::ShowUp' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, Badge) == 0x0003C8, "Member 'UCrewSubscriptionErrorModal_C::Badge' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, Containment) == 0x0003D0, "Member 'UCrewSubscriptionErrorModal_C::Containment' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, ContentSZ) == 0x0003D8, "Member 'UCrewSubscriptionErrorModal_C::ContentSZ' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, Glow) == 0x0003E0, "Member 'UCrewSubscriptionErrorModal_C::Glow' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, Image_BackgroundBottomBar) == 0x0003E8, "Member 'UCrewSubscriptionErrorModal_C::Image_BackgroundBottomBar' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, Lightbox_HitTestBlocker) == 0x0003F0, "Member 'UCrewSubscriptionErrorModal_C::Lightbox_HitTestBlocker' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, MobileClose) == 0x0003F8, "Member 'UCrewSubscriptionErrorModal_C::MobileClose' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, PrimaryScrollBox) == 0x000400, "Member 'UCrewSubscriptionErrorModal_C::PrimaryScrollBox' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, VBox_PlatformSpecific) == 0x000408, "Member 'UCrewSubscriptionErrorModal_C::VBox_PlatformSpecific' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal_C, Wordmark) == 0x000410, "Member 'UCrewSubscriptionErrorModal_C::Wordmark' has a wrong offset!");

}
