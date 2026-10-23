#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SubtitleDisplay_HasSubtitles final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SubtitleDisplay_HasSubtitles) == 0x000001, "Wrong alignment on SubtitleDisplay_HasSubtitles");
static_assert(sizeof(SubtitleDisplay_HasSubtitles) == 0x000001, "Wrong size on SubtitleDisplay_HasSubtitles");
static_assert(offsetof(SubtitleDisplay_HasSubtitles, ReturnValue) == 0x000000, "Member 'SubtitleDisplay_HasSubtitles::ReturnValue' has a wrong offset!");

struct FortMediaSubtitlesPlayer_BindToMediaPlayer final
{
public:
	class UMediaPlayer*                           InMediaPlayer;
};
static_assert(alignof(FortMediaSubtitlesPlayer_BindToMediaPlayer) == 0x000008, "Wrong alignment on FortMediaSubtitlesPlayer_BindToMediaPlayer");
static_assert(sizeof(FortMediaSubtitlesPlayer_BindToMediaPlayer) == 0x000008, "Wrong size on FortMediaSubtitlesPlayer_BindToMediaPlayer");
static_assert(offsetof(FortMediaSubtitlesPlayer_BindToMediaPlayer, InMediaPlayer) == 0x000000, "Member 'FortMediaSubtitlesPlayer_BindToMediaPlayer::InMediaPlayer' has a wrong offset!");

struct FortMediaSubtitlesPlayer_SetSubtitles final
{
public:
	class UOverlays*                              Subtitles;
};
static_assert(alignof(FortMediaSubtitlesPlayer_SetSubtitles) == 0x000008, "Wrong alignment on FortMediaSubtitlesPlayer_SetSubtitles");
static_assert(sizeof(FortMediaSubtitlesPlayer_SetSubtitles) == 0x000008, "Wrong size on FortMediaSubtitlesPlayer_SetSubtitles");
static_assert(offsetof(FortMediaSubtitlesPlayer_SetSubtitles, Subtitles) == 0x000000, "Member 'FortMediaSubtitlesPlayer_SetSubtitles::Subtitles' has a wrong offset!");

}
