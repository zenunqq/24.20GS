#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK
{

struct FWidgetCarouselNavigationButtonStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FButtonStyle                           InnerButtonStyle;
	struct FSlateBrush                            NavigationButtonLeftImage;
	struct FSlateBrush                            NavigationButtonRightImage;
};
static_assert(alignof(FWidgetCarouselNavigationButtonStyle) == 0x000010, "Wrong alignment on FWidgetCarouselNavigationButtonStyle");
static_assert(sizeof(FWidgetCarouselNavigationButtonStyle) == 0x000540, "Wrong size on FWidgetCarouselNavigationButtonStyle");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle) == 0x000010, "Member 'FWidgetCarouselNavigationButtonStyle::InnerButtonStyle' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage) == 0x0003C0, "Member 'FWidgetCarouselNavigationButtonStyle::NavigationButtonLeftImage' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage) == 0x000480, "Member 'FWidgetCarouselNavigationButtonStyle::NavigationButtonRightImage' has a wrong offset!");

struct FWidgetCarouselNavigationBarStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            HighlightBrush;
	struct FButtonStyle                           LeftButtonStyle;
	struct FButtonStyle                           CenterButtonStyle;
	struct FButtonStyle                           RightButtonStyle;
};
static_assert(alignof(FWidgetCarouselNavigationBarStyle) == 0x000010, "Wrong alignment on FWidgetCarouselNavigationBarStyle");
static_assert(sizeof(FWidgetCarouselNavigationBarStyle) == 0x000BE0, "Wrong size on FWidgetCarouselNavigationBarStyle");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, HighlightBrush) == 0x000010, "Member 'FWidgetCarouselNavigationBarStyle::HighlightBrush' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, LeftButtonStyle) == 0x0000D0, "Member 'FWidgetCarouselNavigationBarStyle::LeftButtonStyle' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, CenterButtonStyle) == 0x000480, "Member 'FWidgetCarouselNavigationBarStyle::CenterButtonStyle' has a wrong offset!");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, RightButtonStyle) == 0x000830, "Member 'FWidgetCarouselNavigationBarStyle::RightButtonStyle' has a wrong offset!");

}
