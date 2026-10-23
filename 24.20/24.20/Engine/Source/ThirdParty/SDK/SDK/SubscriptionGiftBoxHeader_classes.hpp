#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class USubscriptionGiftBoxHeader_C final : public UUserWidget
{
public:
	class UImage*                                 Badge_1;
	class UCommonRichTextBlock*                   CommonRichTextBlock_41;
	class UImage*                                 Image_46;
	class UImage*                                 Skin_Text_Bullet;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubscriptionGiftBoxHeader_C">();
	}
	static class USubscriptionGiftBoxHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubscriptionGiftBoxHeader_C>();
	}
};
static_assert(alignof(USubscriptionGiftBoxHeader_C) == 0x000008, "Wrong alignment on USubscriptionGiftBoxHeader_C");
static_assert(sizeof(USubscriptionGiftBoxHeader_C) == 0x000288, "Wrong size on USubscriptionGiftBoxHeader_C");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, Badge_1) == 0x000268, "Member 'USubscriptionGiftBoxHeader_C::Badge_1' has a wrong offset!");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, CommonRichTextBlock_41) == 0x000270, "Member 'USubscriptionGiftBoxHeader_C::CommonRichTextBlock_41' has a wrong offset!");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, Image_46) == 0x000278, "Member 'USubscriptionGiftBoxHeader_C::Image_46' has a wrong offset!");
static_assert(offsetof(USubscriptionGiftBoxHeader_C, Skin_Text_Bullet) == 0x000280, "Member 'USubscriptionGiftBoxHeader_C::Skin_Text_Bullet' has a wrong offset!");

}
