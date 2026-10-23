#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class USubscriptionProgressiveGiftBoxHeader_C final : public UUserWidget
{
public:
	class UImage*                                 Badge_1;
	class UCommonRichTextBlock*                   CommonRichTextBlock_41;
	class UImage*                                 Image_46;
	class UImage*                                 Skin_Text_Bullet;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubscriptionProgressiveGiftBoxHeader_C">();
	}
	static class USubscriptionProgressiveGiftBoxHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubscriptionProgressiveGiftBoxHeader_C>();
	}
};
static_assert(alignof(USubscriptionProgressiveGiftBoxHeader_C) == 0x000008, "Wrong alignment on USubscriptionProgressiveGiftBoxHeader_C");
static_assert(sizeof(USubscriptionProgressiveGiftBoxHeader_C) == 0x000288, "Wrong size on USubscriptionProgressiveGiftBoxHeader_C");
static_assert(offsetof(USubscriptionProgressiveGiftBoxHeader_C, Badge_1) == 0x000268, "Member 'USubscriptionProgressiveGiftBoxHeader_C::Badge_1' has a wrong offset!");
static_assert(offsetof(USubscriptionProgressiveGiftBoxHeader_C, CommonRichTextBlock_41) == 0x000270, "Member 'USubscriptionProgressiveGiftBoxHeader_C::CommonRichTextBlock_41' has a wrong offset!");
static_assert(offsetof(USubscriptionProgressiveGiftBoxHeader_C, Image_46) == 0x000278, "Member 'USubscriptionProgressiveGiftBoxHeader_C::Image_46' has a wrong offset!");
static_assert(offsetof(USubscriptionProgressiveGiftBoxHeader_C, Skin_Text_Bullet) == 0x000280, "Member 'USubscriptionProgressiveGiftBoxHeader_C::Skin_Text_Bullet' has a wrong offset!");

}
