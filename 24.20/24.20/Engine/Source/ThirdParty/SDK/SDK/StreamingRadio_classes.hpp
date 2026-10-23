#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class AStreamingRadioManagerNative final : public AActor
{
public:
	class UFortStreamMediaSource*                 StreamMediaSource;
	class UMediaPlayer*                           MediaPlayer;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamingRadioManagerNative">();
	}
	static class AStreamingRadioManagerNative* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStreamingRadioManagerNative>();
	}
};
static_assert(alignof(AStreamingRadioManagerNative) == 0x000008, "Wrong alignment on AStreamingRadioManagerNative");
static_assert(sizeof(AStreamingRadioManagerNative) == 0x000298, "Wrong size on AStreamingRadioManagerNative");
static_assert(offsetof(AStreamingRadioManagerNative, StreamMediaSource) == 0x000288, "Member 'AStreamingRadioManagerNative::StreamMediaSource' has a wrong offset!");
static_assert(offsetof(AStreamingRadioManagerNative, MediaPlayer) == 0x000290, "Member 'AStreamingRadioManagerNative::MediaPlayer' has a wrong offset!");

}
