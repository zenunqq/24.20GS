#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USubtitles_C final : public UFortHUDElementWidget
{
public:
	class USubtitleDisplay*                       SubtitleDisplay;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Subtitles_C">();
	}
	static class USubtitles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitles_C>();
	}
};
static_assert(alignof(USubtitles_C) == 0x000008, "Wrong alignment on USubtitles_C");
static_assert(sizeof(USubtitles_C) == 0x0002D8, "Wrong size on USubtitles_C");
static_assert(offsetof(USubtitles_C, SubtitleDisplay) == 0x0002D0, "Member 'USubtitles_C::SubtitleDisplay' has a wrong offset!");

}
