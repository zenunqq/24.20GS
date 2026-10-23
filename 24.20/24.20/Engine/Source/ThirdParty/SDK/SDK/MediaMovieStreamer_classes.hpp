#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMediaMovieAssets final : public UObject
{
public:
	class UMediaPlayer*                           MediaPlayer;
	class UMediaSoundComponent*                   MediaSoundComponent;
	class UMediaSource*                           MediaSource;
	class UMediaTexture*                          MediaTexture;
	uint8                                         Pad_48[0x8];

public:
	void OnMediaEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaMovieAssets">();
	}
	static class UMediaMovieAssets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaMovieAssets>();
	}
};
static_assert(alignof(UMediaMovieAssets) == 0x000008, "Wrong alignment on UMediaMovieAssets");
static_assert(sizeof(UMediaMovieAssets) == 0x000050, "Wrong size on UMediaMovieAssets");
static_assert(offsetof(UMediaMovieAssets, MediaPlayer) == 0x000028, "Member 'UMediaMovieAssets::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UMediaMovieAssets, MediaSoundComponent) == 0x000030, "Member 'UMediaMovieAssets::MediaSoundComponent' has a wrong offset!");
static_assert(offsetof(UMediaMovieAssets, MediaSource) == 0x000038, "Member 'UMediaMovieAssets::MediaSource' has a wrong offset!");
static_assert(offsetof(UMediaMovieAssets, MediaTexture) == 0x000040, "Member 'UMediaMovieAssets::MediaTexture' has a wrong offset!");

}
