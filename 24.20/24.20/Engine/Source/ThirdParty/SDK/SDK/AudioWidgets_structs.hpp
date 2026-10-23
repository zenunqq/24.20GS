#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                          = 0,
	Layout_LabelCenter                       = 1,
	Layout_LabelBottom                       = 2,
	Layout_MAX                               = 3,
};

struct FAudioTextBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            BackgroundImage;
	struct FSlateColor                            BackgroundColor;
	uint8                                         Pad_E4[0xC];
};
static_assert(alignof(FAudioTextBoxStyle) == 0x000010, "Wrong alignment on FAudioTextBoxStyle");
static_assert(sizeof(FAudioTextBoxStyle) == 0x0000F0, "Wrong size on FAudioTextBoxStyle");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundImage) == 0x000010, "Member 'FAudioTextBoxStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundColor) == 0x0000D0, "Member 'FAudioTextBoxStyle::BackgroundColor' has a wrong offset!");

struct FAudioSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSliderStyle                           SliderStyle;
	struct FAudioTextBoxStyle                     TextBoxStyle;
	struct FSlateBrush                            WidgetBackgroundImage;
	struct FSlateColor                            SliderBackgroundColor;
	uint8                                         Pad_674[0x4];
	struct FVector2D                              SliderBackgroundSize;
	float                                         LabelPadding;
	struct FSlateColor                            SliderBarColor;
	struct FSlateColor                            SliderThumbColor;
	struct FSlateColor                            WidgetBackgroundColor;
	uint8                                         Pad_6C8[0x8];
};
static_assert(alignof(FAudioSliderStyle) == 0x000010, "Wrong alignment on FAudioSliderStyle");
static_assert(sizeof(FAudioSliderStyle) == 0x0006D0, "Wrong size on FAudioSliderStyle");
static_assert(offsetof(FAudioSliderStyle, SliderStyle) == 0x000010, "Member 'FAudioSliderStyle::SliderStyle' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, TextBoxStyle) == 0x0004B0, "Member 'FAudioSliderStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundImage) == 0x0005A0, "Member 'FAudioSliderStyle::WidgetBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundColor) == 0x000660, "Member 'FAudioSliderStyle::SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundSize) == 0x000678, "Member 'FAudioSliderStyle::SliderBackgroundSize' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, LabelPadding) == 0x000688, "Member 'FAudioSliderStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBarColor) == 0x00068C, "Member 'FAudioSliderStyle::SliderBarColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderThumbColor) == 0x0006A0, "Member 'FAudioSliderStyle::SliderThumbColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundColor) == 0x0006B4, "Member 'FAudioSliderStyle::WidgetBackgroundColor' has a wrong offset!");

struct FMeterChannelInfo final
{
public:
	float                                         MeterValue;
	float                                         PeakValue;
	float                                         ClippingValue;
};
static_assert(alignof(FMeterChannelInfo) == 0x000004, "Wrong alignment on FMeterChannelInfo");
static_assert(sizeof(FMeterChannelInfo) == 0x00000C, "Wrong size on FMeterChannelInfo");
static_assert(offsetof(FMeterChannelInfo, MeterValue) == 0x000000, "Member 'FMeterChannelInfo::MeterValue' has a wrong offset!");
static_assert(offsetof(FMeterChannelInfo, PeakValue) == 0x000004, "Member 'FMeterChannelInfo::PeakValue' has a wrong offset!");
static_assert(offsetof(FMeterChannelInfo, ClippingValue) == 0x000008, "Member 'FMeterChannelInfo::ClippingValue' has a wrong offset!");

struct FAudioMeterStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            MeterValueImage;
	struct FSlateBrush                            BackgroundImage;
	struct FSlateBrush                            MeterBackgroundImage;
	struct FSlateBrush                            MeterValueBackgroundImage;
	struct FSlateBrush                            MeterPeakImage;
	struct FVector2D                              MeterSize;
	struct FVector2D                              MeterPadding;
	float                                         MeterValuePadding;
	float                                         PeakValueWidth;
	struct FVector2D                              ValueRangeDb;
	bool                                          bShowScale;
	bool                                          bScaleSide;
	uint8                                         Pad_40A[0x2];
	float                                         ScaleHashOffset;
	float                                         ScaleHashWidth;
	float                                         ScaleHashHeight;
	int32                                         DecibelsPerHash;
	uint8                                         Pad_41C[0x4];
	struct FSlateFontInfo                         Font;
	uint8                                         Pad_478[0x8];
};
static_assert(alignof(FAudioMeterStyle) == 0x000010, "Wrong alignment on FAudioMeterStyle");
static_assert(sizeof(FAudioMeterStyle) == 0x000480, "Wrong size on FAudioMeterStyle");
static_assert(offsetof(FAudioMeterStyle, MeterValueImage) == 0x000010, "Member 'FAudioMeterStyle::MeterValueImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, BackgroundImage) == 0x0000D0, "Member 'FAudioMeterStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterBackgroundImage) == 0x000190, "Member 'FAudioMeterStyle::MeterBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterValueBackgroundImage) == 0x000250, "Member 'FAudioMeterStyle::MeterValueBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterPeakImage) == 0x000310, "Member 'FAudioMeterStyle::MeterPeakImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterSize) == 0x0003D0, "Member 'FAudioMeterStyle::MeterSize' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterPadding) == 0x0003E0, "Member 'FAudioMeterStyle::MeterPadding' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterValuePadding) == 0x0003F0, "Member 'FAudioMeterStyle::MeterValuePadding' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, PeakValueWidth) == 0x0003F4, "Member 'FAudioMeterStyle::PeakValueWidth' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ValueRangeDb) == 0x0003F8, "Member 'FAudioMeterStyle::ValueRangeDb' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, bShowScale) == 0x000408, "Member 'FAudioMeterStyle::bShowScale' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, bScaleSide) == 0x000409, "Member 'FAudioMeterStyle::bScaleSide' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashOffset) == 0x00040C, "Member 'FAudioMeterStyle::ScaleHashOffset' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashWidth) == 0x000410, "Member 'FAudioMeterStyle::ScaleHashWidth' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashHeight) == 0x000414, "Member 'FAudioMeterStyle::ScaleHashHeight' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, DecibelsPerHash) == 0x000418, "Member 'FAudioMeterStyle::DecibelsPerHash' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, Font) == 0x000420, "Member 'FAudioMeterStyle::Font' has a wrong offset!");

struct FAudioRadialSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FAudioTextBoxStyle                     TextBoxStyle;
	struct FSlateColor                            CenterBackgroundColor;
	struct FSlateColor                            SliderBarColor;
	struct FSlateColor                            SliderProgressColor;
	float                                         LabelPadding;
	float                                         DefaultSliderRadius;
	uint8                                         Pad_144[0xC];
};
static_assert(alignof(FAudioRadialSliderStyle) == 0x000010, "Wrong alignment on FAudioRadialSliderStyle");
static_assert(sizeof(FAudioRadialSliderStyle) == 0x000150, "Wrong size on FAudioRadialSliderStyle");
static_assert(offsetof(FAudioRadialSliderStyle, TextBoxStyle) == 0x000010, "Member 'FAudioRadialSliderStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, CenterBackgroundColor) == 0x000100, "Member 'FAudioRadialSliderStyle::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, SliderBarColor) == 0x000114, "Member 'FAudioRadialSliderStyle::SliderBarColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, SliderProgressColor) == 0x000128, "Member 'FAudioRadialSliderStyle::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, LabelPadding) == 0x00013C, "Member 'FAudioRadialSliderStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, DefaultSliderRadius) == 0x000140, "Member 'FAudioRadialSliderStyle::DefaultSliderRadius' has a wrong offset!");

}
