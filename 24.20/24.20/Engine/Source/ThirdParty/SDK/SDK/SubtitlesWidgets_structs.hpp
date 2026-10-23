#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ESubtitleDisplayTextSize : uint8
{
	ExtraSmall                               = 0,
	Small                                    = 1,
	Medium                                   = 2,
	Large                                    = 3,
	ExtraLarge                               = 4,
	ESubtitleDisplayTextSize_MAX             = 5,
};

enum class ESubtitleDisplayTextColor : uint8
{
	White                                    = 0,
	Yellow                                   = 1,
	ESubtitleDisplayTextColor_MAX            = 2,
};

enum class ESubtitleDisplayTextBorder : uint8
{
	None                                     = 0,
	Outline                                  = 1,
	DropShadow                               = 2,
	ESubtitleDisplayTextBorder_MAX           = 3,
};

enum class ESubtitleDisplayBackgroundOpacity : uint8
{
	Clear                                    = 0,
	Low                                      = 1,
	Medium                                   = 2,
	High                                     = 3,
	Solid                                    = 4,
	ESubtitleDisplayBackgroundOpacity_MAX    = 5,
};

struct FSubtitleFormat final
{
public:
	ESubtitleDisplayTextSize                      SubtitleTextSize;
	ESubtitleDisplayTextColor                     SubtitleTextColor;
	ESubtitleDisplayTextBorder                    SubtitleTextBorder;
	ESubtitleDisplayBackgroundOpacity             SubtitleBackgroundOpacity;
};
static_assert(alignof(FSubtitleFormat) == 0x000001, "Wrong alignment on FSubtitleFormat");
static_assert(sizeof(FSubtitleFormat) == 0x000004, "Wrong size on FSubtitleFormat");
static_assert(offsetof(FSubtitleFormat, SubtitleTextSize) == 0x000000, "Member 'FSubtitleFormat::SubtitleTextSize' has a wrong offset!");
static_assert(offsetof(FSubtitleFormat, SubtitleTextColor) == 0x000001, "Member 'FSubtitleFormat::SubtitleTextColor' has a wrong offset!");
static_assert(offsetof(FSubtitleFormat, SubtitleTextBorder) == 0x000002, "Member 'FSubtitleFormat::SubtitleTextBorder' has a wrong offset!");
static_assert(offsetof(FSubtitleFormat, SubtitleBackgroundOpacity) == 0x000003, "Member 'FSubtitleFormat::SubtitleBackgroundOpacity' has a wrong offset!");

}
