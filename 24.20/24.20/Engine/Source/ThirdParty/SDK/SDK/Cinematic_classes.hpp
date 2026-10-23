#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCinematic_C final : public UFortUIStateWidget_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNamedSlot*                             LocalizedAudioOnlyMovieSlot;
	class UCommonWidgetStackLegacy*               MainContentStack;
	class UNamedSlot*                             MovieSlot;
	class UOverlay*                               OverlayMovieOverlay;
	class USubtitles_C*                           Subtitles;
	class UTeamMicStack_C*                        TeamMicStack;
	class UBuildWatermark_C*                      Widget_BuildWatermark;
	class ULegacy_MovieWidget_C*                  MovieWidget;
	class UFortMediaSubtitlesPlayer*              SubtitlesPlayer;
	class UObject*                                CinematicMediaSoundWave;
	bool                                          bFinished;

public:
	void ClearMovie();
	void ClearMovieSlot();
	void ClearMovieWidget(class UFortMovieWidget*& MovieWidgetToClear);
	void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Cinematic(int32 EntryPoint);
	void GetAudioTrackIndex(int32* AudioTrack);
	void HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleEndReached();
	void OnEnterState(EFortUIState PreviousUIState);
	void OnExitState(EFortUIState NextUIState);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void SetMoviePlaying(bool MoviePlaying);
	void Show_Movie(class UMediaPlayer* MediaPlayer, class UMediaSource* MediaSource);
	void SkipMovie();
	void StopAndClearSubtitles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic_C">();
	}
	static class UCinematic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematic_C>();
	}
};
static_assert(alignof(UCinematic_C) == 0x000008, "Wrong alignment on UCinematic_C");
static_assert(sizeof(UCinematic_C) == 0x0005A8, "Wrong size on UCinematic_C");
static_assert(offsetof(UCinematic_C, UberGraphFrame) == 0x000548, "Member 'UCinematic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCinematic_C, LocalizedAudioOnlyMovieSlot) == 0x000550, "Member 'UCinematic_C::LocalizedAudioOnlyMovieSlot' has a wrong offset!");
static_assert(offsetof(UCinematic_C, MainContentStack) == 0x000558, "Member 'UCinematic_C::MainContentStack' has a wrong offset!");
static_assert(offsetof(UCinematic_C, MovieSlot) == 0x000560, "Member 'UCinematic_C::MovieSlot' has a wrong offset!");
static_assert(offsetof(UCinematic_C, OverlayMovieOverlay) == 0x000568, "Member 'UCinematic_C::OverlayMovieOverlay' has a wrong offset!");
static_assert(offsetof(UCinematic_C, Subtitles) == 0x000570, "Member 'UCinematic_C::Subtitles' has a wrong offset!");
static_assert(offsetof(UCinematic_C, TeamMicStack) == 0x000578, "Member 'UCinematic_C::TeamMicStack' has a wrong offset!");
static_assert(offsetof(UCinematic_C, Widget_BuildWatermark) == 0x000580, "Member 'UCinematic_C::Widget_BuildWatermark' has a wrong offset!");
static_assert(offsetof(UCinematic_C, MovieWidget) == 0x000588, "Member 'UCinematic_C::MovieWidget' has a wrong offset!");
static_assert(offsetof(UCinematic_C, SubtitlesPlayer) == 0x000590, "Member 'UCinematic_C::SubtitlesPlayer' has a wrong offset!");
static_assert(offsetof(UCinematic_C, CinematicMediaSoundWave) == 0x000598, "Member 'UCinematic_C::CinematicMediaSoundWave' has a wrong offset!");
static_assert(offsetof(UCinematic_C, bFinished) == 0x0005A0, "Member 'UCinematic_C::bFinished' has a wrong offset!");

}
