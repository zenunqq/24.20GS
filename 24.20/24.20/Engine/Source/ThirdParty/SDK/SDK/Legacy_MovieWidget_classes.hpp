#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Slate_structs.hpp"

namespace SDK
{

class ULegacy_MovieWidget_C final : public UFortMovieWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Video_Image;
	class UScaleBox*                              Video_ScaleBox;
	bool                                          shouldloop;
	bool                                          AutoPlay;
	bool                                          MaintainAspectRatio;
	uint8                                         Pad_2CB[0x5];
	TMulticastInlineDelegate<void()>              OnMediaReadyToPlay;
	TMulticastInlineDelegate<void()>              OnMediaFailedToOpen;

public:
	void Destruct();
	void ExecuteUbergraph_Legacy_MovieWidget(int32 EntryPoint);
	void Init(class UMediaPlayer* InMediaPlayer, class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int32 AudioTrack);
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	void OnMediaLoaded();
	void Play(bool ShouldRewind);
	void SetDelayedContentValues();
	void StopPlaying();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Legacy_MovieWidget_C">();
	}
	static class ULegacy_MovieWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULegacy_MovieWidget_C>();
	}
};
static_assert(alignof(ULegacy_MovieWidget_C) == 0x000008, "Wrong alignment on ULegacy_MovieWidget_C");
static_assert(sizeof(ULegacy_MovieWidget_C) == 0x0002F0, "Wrong size on ULegacy_MovieWidget_C");
static_assert(offsetof(ULegacy_MovieWidget_C, UberGraphFrame) == 0x0002B0, "Member 'ULegacy_MovieWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, Video_Image) == 0x0002B8, "Member 'ULegacy_MovieWidget_C::Video_Image' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, Video_ScaleBox) == 0x0002C0, "Member 'ULegacy_MovieWidget_C::Video_ScaleBox' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, shouldloop) == 0x0002C8, "Member 'ULegacy_MovieWidget_C::shouldloop' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, AutoPlay) == 0x0002C9, "Member 'ULegacy_MovieWidget_C::AutoPlay' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, MaintainAspectRatio) == 0x0002CA, "Member 'ULegacy_MovieWidget_C::MaintainAspectRatio' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, OnMediaReadyToPlay) == 0x0002D0, "Member 'ULegacy_MovieWidget_C::OnMediaReadyToPlay' has a wrong offset!");
static_assert(offsetof(ULegacy_MovieWidget_C, OnMediaFailedToOpen) == 0x0002E0, "Member 'ULegacy_MovieWidget_C::OnMediaFailedToOpen' has a wrong offset!");

}
