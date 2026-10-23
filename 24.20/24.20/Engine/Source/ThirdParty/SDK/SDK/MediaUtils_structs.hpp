#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EMediaPlayerOptionBooleanOverride : uint8
{
	UseMediaPlayerSetting                    = 0,
	Enabled                                  = 1,
	Disabled                                 = 2,
	EMediaPlayerOptionBooleanOverride_MAX    = 3,
};

struct FMediaPlayerTrackOptions final
{
public:
	int32                                         Audio;
	int32                                         Caption;
	int32                                         MetaData;
	int32                                         Script;
	int32                                         Subtitle;
	int32                                         Text;
	int32                                         Video;
};
static_assert(alignof(FMediaPlayerTrackOptions) == 0x000004, "Wrong alignment on FMediaPlayerTrackOptions");
static_assert(sizeof(FMediaPlayerTrackOptions) == 0x00001C, "Wrong size on FMediaPlayerTrackOptions");
static_assert(offsetof(FMediaPlayerTrackOptions, Audio) == 0x000000, "Member 'FMediaPlayerTrackOptions::Audio' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Caption) == 0x000004, "Member 'FMediaPlayerTrackOptions::Caption' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, MetaData) == 0x000008, "Member 'FMediaPlayerTrackOptions::MetaData' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Script) == 0x00000C, "Member 'FMediaPlayerTrackOptions::Script' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Subtitle) == 0x000010, "Member 'FMediaPlayerTrackOptions::Subtitle' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Text) == 0x000014, "Member 'FMediaPlayerTrackOptions::Text' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Video) == 0x000018, "Member 'FMediaPlayerTrackOptions::Video' has a wrong offset!");

struct FMediaPlayerOptions final
{
public:
	struct FMediaPlayerTrackOptions               Tracks;
	uint8                                         Pad_1C[0x4];
	struct FTimespan                              SeekTime;
	EMediaPlayerOptionBooleanOverride             PlayOnOpen;
	EMediaPlayerOptionBooleanOverride             Loop;
	uint8                                         Pad_2A[0x6];
};
static_assert(alignof(FMediaPlayerOptions) == 0x000008, "Wrong alignment on FMediaPlayerOptions");
static_assert(sizeof(FMediaPlayerOptions) == 0x000030, "Wrong size on FMediaPlayerOptions");
static_assert(offsetof(FMediaPlayerOptions, Tracks) == 0x000000, "Member 'FMediaPlayerOptions::Tracks' has a wrong offset!");
static_assert(offsetof(FMediaPlayerOptions, SeekTime) == 0x000020, "Member 'FMediaPlayerOptions::SeekTime' has a wrong offset!");
static_assert(offsetof(FMediaPlayerOptions, PlayOnOpen) == 0x000028, "Member 'FMediaPlayerOptions::PlayOnOpen' has a wrong offset!");
static_assert(offsetof(FMediaPlayerOptions, Loop) == 0x000029, "Member 'FMediaPlayerOptions::Loop' has a wrong offset!");

}
