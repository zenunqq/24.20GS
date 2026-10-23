#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UContextTutorialIndicator_C final : public UAthenaContextTutorialIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ST_in_bounce;
	class UWidgetAnimation*                       ST_Text_Out_Fast;
	class UWidgetAnimation*                       ST_Marker_Out02;
	class UWidgetAnimation*                       ST_Marker_Out01;
	class UWidgetAnimation*                       ST_Text_Out;
	class UWidgetAnimation*                       ST_Text_in;
	class UWidgetAnimation*                       ST_Arrow_Disappear;
	class UWidgetAnimation*                       ST_Arrow_Bounce;
	class UWidgetAnimation*                       ST_Arrow_Transition;
	class UWidgetAnimation*                       ST_Out_Arrow_Marker;
	class UWidgetAnimation*                       ST_Marker_FadeIN;
	class UWidgetAnimation*                       ST_Arrow_Fade;
	class UWidgetAnimation*                       ST_in_Spin_Arrow_Marker;
	class UWidgetAnimation*                       ST_DiamondBox_Fade;
	class UWidgetAnimation*                       ST_Diamond_Disappear;
	class UWidgetAnimation*                       ST_Marker_MoveReaction;
	class UWidgetAnimation*                       ST_in_DiamondBox_Spin;
	class UWidgetAnimation*                       ST_Marker_Idle;
	class UWidgetAnimation*                       ST_in_Diamond_Spin;
	class UWidgetAnimation*                       ST_border;
	class UWidgetAnimation*                       ST_in;
	class UImage*                                 Circle;
	class UImage*                                 Circle_1;
	class UCommonTextBlock*                       Description;
	class UEditableTextBox*                       DescriptionOLD;
	class UImage*                                 Icon;
	class UImage*                                 Icon_1;
	class UImage*                                 Image_SmallIndicator;
	class UImage*                                 Image_SmallIndicator_Child;
	class UImage*                                 Sign;
	class UImage*                                 Sign_1;
	class UImage*                                 White_Box_Child;
	class UImage*                                 White_Box_Solo;
	bool                                          bIntroAnimationDone;

public:
	void Construct();
	void ExecuteUbergraph_ContextTutorialIndicator(int32 EntryPoint);
	void Finished_191D6D204EA6EF5125923CB749C84A4A();
	void Finished_5FDAD1724A4ABC34EC3B7F9D90839344();
	void Finished_6F1BBAF94537A4D7945ED5A452FC1188();
	void Finished_FBBD6B5248E73C61005758B21F90D160();
	void PlayBounceAnimation();
	void PlayInAnimation();
	void PlayOutAnimation();
	void SetIndicatorText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContextTutorialIndicator_C">();
	}
	static class UContextTutorialIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextTutorialIndicator_C>();
	}
};
static_assert(alignof(UContextTutorialIndicator_C) == 0x000008, "Wrong alignment on UContextTutorialIndicator_C");
static_assert(sizeof(UContextTutorialIndicator_C) == 0x000760, "Wrong size on UContextTutorialIndicator_C");
static_assert(offsetof(UContextTutorialIndicator_C, UberGraphFrame) == 0x000648, "Member 'UContextTutorialIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_bounce) == 0x000650, "Member 'UContextTutorialIndicator_C::ST_in_bounce' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Text_Out_Fast) == 0x000658, "Member 'UContextTutorialIndicator_C::ST_Text_Out_Fast' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_Out02) == 0x000660, "Member 'UContextTutorialIndicator_C::ST_Marker_Out02' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_Out01) == 0x000668, "Member 'UContextTutorialIndicator_C::ST_Marker_Out01' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Text_Out) == 0x000670, "Member 'UContextTutorialIndicator_C::ST_Text_Out' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Text_in) == 0x000678, "Member 'UContextTutorialIndicator_C::ST_Text_in' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Disappear) == 0x000680, "Member 'UContextTutorialIndicator_C::ST_Arrow_Disappear' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Bounce) == 0x000688, "Member 'UContextTutorialIndicator_C::ST_Arrow_Bounce' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Transition) == 0x000690, "Member 'UContextTutorialIndicator_C::ST_Arrow_Transition' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Out_Arrow_Marker) == 0x000698, "Member 'UContextTutorialIndicator_C::ST_Out_Arrow_Marker' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_FadeIN) == 0x0006A0, "Member 'UContextTutorialIndicator_C::ST_Marker_FadeIN' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Arrow_Fade) == 0x0006A8, "Member 'UContextTutorialIndicator_C::ST_Arrow_Fade' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_Spin_Arrow_Marker) == 0x0006B0, "Member 'UContextTutorialIndicator_C::ST_in_Spin_Arrow_Marker' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_DiamondBox_Fade) == 0x0006B8, "Member 'UContextTutorialIndicator_C::ST_DiamondBox_Fade' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Diamond_Disappear) == 0x0006C0, "Member 'UContextTutorialIndicator_C::ST_Diamond_Disappear' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_MoveReaction) == 0x0006C8, "Member 'UContextTutorialIndicator_C::ST_Marker_MoveReaction' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_DiamondBox_Spin) == 0x0006D0, "Member 'UContextTutorialIndicator_C::ST_in_DiamondBox_Spin' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_Marker_Idle) == 0x0006D8, "Member 'UContextTutorialIndicator_C::ST_Marker_Idle' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in_Diamond_Spin) == 0x0006E0, "Member 'UContextTutorialIndicator_C::ST_in_Diamond_Spin' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_border) == 0x0006E8, "Member 'UContextTutorialIndicator_C::ST_border' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, ST_in) == 0x0006F0, "Member 'UContextTutorialIndicator_C::ST_in' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Circle) == 0x0006F8, "Member 'UContextTutorialIndicator_C::Circle' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Circle_1) == 0x000700, "Member 'UContextTutorialIndicator_C::Circle_1' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Description) == 0x000708, "Member 'UContextTutorialIndicator_C::Description' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, DescriptionOLD) == 0x000710, "Member 'UContextTutorialIndicator_C::DescriptionOLD' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Icon) == 0x000718, "Member 'UContextTutorialIndicator_C::Icon' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Icon_1) == 0x000720, "Member 'UContextTutorialIndicator_C::Icon_1' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Image_SmallIndicator) == 0x000728, "Member 'UContextTutorialIndicator_C::Image_SmallIndicator' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Image_SmallIndicator_Child) == 0x000730, "Member 'UContextTutorialIndicator_C::Image_SmallIndicator_Child' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Sign) == 0x000738, "Member 'UContextTutorialIndicator_C::Sign' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, Sign_1) == 0x000740, "Member 'UContextTutorialIndicator_C::Sign_1' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, White_Box_Child) == 0x000748, "Member 'UContextTutorialIndicator_C::White_Box_Child' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, White_Box_Solo) == 0x000750, "Member 'UContextTutorialIndicator_C::White_Box_Solo' has a wrong offset!");
static_assert(offsetof(UContextTutorialIndicator_C, bIntroAnimationDone) == 0x000758, "Member 'UContextTutorialIndicator_C::bIntroAnimationDone' has a wrong offset!");

}
