#pragma once

#include "Basic.hpp"

#include "Overlay_classes.hpp"

namespace SDK
{

class UEpicMediaDownloadLocalizedOverlays final : public ULocalizedOverlays
{
public:
	class UMediaPlayer*                           MediaPlayer;
	uint8                                         Pad_88[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicMediaDownloadLocalizedOverlays">();
	}
	static class UEpicMediaDownloadLocalizedOverlays* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicMediaDownloadLocalizedOverlays>();
	}
};
static_assert(alignof(UEpicMediaDownloadLocalizedOverlays) == 0x000008, "Wrong alignment on UEpicMediaDownloadLocalizedOverlays");
static_assert(sizeof(UEpicMediaDownloadLocalizedOverlays) == 0x000090, "Wrong size on UEpicMediaDownloadLocalizedOverlays");
static_assert(offsetof(UEpicMediaDownloadLocalizedOverlays, MediaPlayer) == 0x000080, "Member 'UEpicMediaDownloadLocalizedOverlays::MediaPlayer' has a wrong offset!");

}
