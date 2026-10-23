#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CrewUI_classes.hpp"

namespace SDK
{

class UMultipleSubscriptionAlertModal_C final : public UCrewMultiSubscriptionAlertModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCloseButton_C*                         Button_CloseMobile;
	class UImage*                                 Containment;
	class USafeZone*                              ContentSZ;
	class UImage*                                 Image_BackgroundBottomBar;
	class UImage*                                 Lightbox_HitTestBlocker;
	class USafeZone*                              MobileClose;
	class UScrollBox*                             PrimaryScrollBox;
	class UCommonRichTextBlock*                   Text_Check;
	class UCommonRichTextBlock*                   Text_MoreInfo;

public:
	void ExecuteUbergraph_MultipleSubscriptionAlertModal(int32 EntryPoint);
	void OnSetHowToCancelURL(const class FString& MoreInfoUrl);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MultipleSubscriptionAlertModal_C">();
	}
	static class UMultipleSubscriptionAlertModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultipleSubscriptionAlertModal_C>();
	}
};
static_assert(alignof(UMultipleSubscriptionAlertModal_C) == 0x000008, "Wrong alignment on UMultipleSubscriptionAlertModal_C");
static_assert(sizeof(UMultipleSubscriptionAlertModal_C) == 0x0004D0, "Wrong size on UMultipleSubscriptionAlertModal_C");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, UberGraphFrame) == 0x000480, "Member 'UMultipleSubscriptionAlertModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, Button_CloseMobile) == 0x000488, "Member 'UMultipleSubscriptionAlertModal_C::Button_CloseMobile' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, Containment) == 0x000490, "Member 'UMultipleSubscriptionAlertModal_C::Containment' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, ContentSZ) == 0x000498, "Member 'UMultipleSubscriptionAlertModal_C::ContentSZ' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, Image_BackgroundBottomBar) == 0x0004A0, "Member 'UMultipleSubscriptionAlertModal_C::Image_BackgroundBottomBar' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, Lightbox_HitTestBlocker) == 0x0004A8, "Member 'UMultipleSubscriptionAlertModal_C::Lightbox_HitTestBlocker' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, MobileClose) == 0x0004B0, "Member 'UMultipleSubscriptionAlertModal_C::MobileClose' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, PrimaryScrollBox) == 0x0004B8, "Member 'UMultipleSubscriptionAlertModal_C::PrimaryScrollBox' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, Text_Check) == 0x0004C0, "Member 'UMultipleSubscriptionAlertModal_C::Text_Check' has a wrong offset!");
static_assert(offsetof(UMultipleSubscriptionAlertModal_C, Text_MoreInfo) == 0x0004C8, "Member 'UMultipleSubscriptionAlertModal_C::Text_MoreInfo' has a wrong offset!");

}
