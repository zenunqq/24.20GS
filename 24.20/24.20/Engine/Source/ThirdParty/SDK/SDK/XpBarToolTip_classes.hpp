#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UXpBarToolTip_C final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       CommonTextBlock_0;
	class UCommonTextBlock*                       CommonTextBlock_2;
	class UCommonTextBlock*                       CommonTextBlock_29;
	class UCommonTextBlock*                       CommonTextBlock_30;
	class UCommonTextBlock*                       CommonTextBlock_31;
	class UImage*                                 Image_0;
	class UImage*                                 Image_1;
	class UImage*                                 Image_2;
	class UImage*                                 Image_3;
	class UImage*                                 Image_5;
	class FText                                   HeaderText;
	class FText                                   CommanderXPText;
	class FText                                   BoostXPText;
	class FText                                   RestedXPText;
	class FText                                   BodyText;

public:
	class FText GetBodyText();
	class FText GetBoostXPText();
	class FText GetCommanderXPText();
	class FText GetHeaderText();
	class FText GetRestedXPText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpBarToolTip_C">();
	}
	static class UXpBarToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpBarToolTip_C>();
	}
};
static_assert(alignof(UXpBarToolTip_C) == 0x000008, "Wrong alignment on UXpBarToolTip_C");
static_assert(sizeof(UXpBarToolTip_C) == 0x000358, "Wrong size on UXpBarToolTip_C");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_0) == 0x000290, "Member 'UXpBarToolTip_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_2) == 0x000298, "Member 'UXpBarToolTip_C::CommonTextBlock_2' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_29) == 0x0002A0, "Member 'UXpBarToolTip_C::CommonTextBlock_29' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_30) == 0x0002A8, "Member 'UXpBarToolTip_C::CommonTextBlock_30' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommonTextBlock_31) == 0x0002B0, "Member 'UXpBarToolTip_C::CommonTextBlock_31' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_0) == 0x0002B8, "Member 'UXpBarToolTip_C::Image_0' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_1) == 0x0002C0, "Member 'UXpBarToolTip_C::Image_1' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_2) == 0x0002C8, "Member 'UXpBarToolTip_C::Image_2' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_3) == 0x0002D0, "Member 'UXpBarToolTip_C::Image_3' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, Image_5) == 0x0002D8, "Member 'UXpBarToolTip_C::Image_5' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, HeaderText) == 0x0002E0, "Member 'UXpBarToolTip_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, CommanderXPText) == 0x0002F8, "Member 'UXpBarToolTip_C::CommanderXPText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, BoostXPText) == 0x000310, "Member 'UXpBarToolTip_C::BoostXPText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, RestedXPText) == 0x000328, "Member 'UXpBarToolTip_C::RestedXPText' has a wrong offset!");
static_assert(offsetof(UXpBarToolTip_C, BodyText) == 0x000340, "Member 'UXpBarToolTip_C::BodyText' has a wrong offset!");

}
