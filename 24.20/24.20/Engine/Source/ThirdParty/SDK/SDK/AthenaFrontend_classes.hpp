#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "S12_CineTransitionData_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaFrontend_C final : public UAthenaUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAthenaFPS_C*                           AthenaFPS;
	class UAthenaTemperature_C*                   AthenaTemperature;
	class UBuildWatermark_C*                      BuildWatermark;
	class UButton*                                Button_PTT;
	class UCommonTextBlock*                       CommonTextBlock_FrontendFlowDebug;
	class UContentOnDemand_C*                     ContentOnDemand;
	class UFortVoiceChannelSpeakerContainer_C*    FortVoiceChannelSpeakerContainer;
	class UFrontendEventNotifications_C*          FrontendEventNotifications;
	class UImage*                                 PTT_Image;
	class USafeZone*                              SafeZone_1;
	class USafeZone*                              SafeZone_Bottom;
	class USizeBox*                               SizeBoxPTT;
	bool                                          StartedPlayingVideo;
	uint8                                         Pad_9B9[0x3];
	int32                                         TransitionIndex;
	TArray<struct FS12_CineTransitionData>        TransitionAudioData;
	class UMediaPlayer*                           MovieMediaPlayer;
	class USoundBase*                             TransitionSound01;
	class USoundBase*                             TransitionSound02;
	TArray<struct FTimerHandle>                   AudioTimerHandles;

public:
	void BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButtonLegacy* Button, bool Selected);
	void Construct();
	void DisplayDebugFlowText(const class FText& DebugFlowText);
	void ExecuteUbergraph_AthenaFrontend(int32 EntryPoint);
	void HideDebugFlowText();
	void InitChatVisibilityButton();
	void On_Can_PTT();
	void OnSetFrontendVisibilityMode(EFrontendVisibilityMode InFrontendVisibilityMode);
	void OnTrailerMediaEnded();
	void OnTrailerMediaOpened(const class FString& OpenedUrl);
	void OnTrailerTransitionAudioCheck();
	void PlayTrailer();
	void SetChatWidgetVisibility(bool Visible);
	void SetOverlayTitleBarVisibility(bool Visible);
	void StartTrailerTransitionAudioCheck(class UMediaPlayer* MediaPlayer);
	void StopTrailerTransitionAudioCheck();
	void UpdatePttVisibility(EPTTState PTTState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFrontend_C">();
	}
	static class UAthenaFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFrontend_C>();
	}
};
static_assert(alignof(UAthenaFrontend_C) == 0x000008, "Wrong alignment on UAthenaFrontend_C");
static_assert(sizeof(UAthenaFrontend_C) == 0x0009F8, "Wrong size on UAthenaFrontend_C");
static_assert(offsetof(UAthenaFrontend_C, UberGraphFrame) == 0x000950, "Member 'UAthenaFrontend_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, AthenaFPS) == 0x000958, "Member 'UAthenaFrontend_C::AthenaFPS' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, AthenaTemperature) == 0x000960, "Member 'UAthenaFrontend_C::AthenaTemperature' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, BuildWatermark) == 0x000968, "Member 'UAthenaFrontend_C::BuildWatermark' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, Button_PTT) == 0x000970, "Member 'UAthenaFrontend_C::Button_PTT' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, CommonTextBlock_FrontendFlowDebug) == 0x000978, "Member 'UAthenaFrontend_C::CommonTextBlock_FrontendFlowDebug' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, ContentOnDemand) == 0x000980, "Member 'UAthenaFrontend_C::ContentOnDemand' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, FortVoiceChannelSpeakerContainer) == 0x000988, "Member 'UAthenaFrontend_C::FortVoiceChannelSpeakerContainer' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, FrontendEventNotifications) == 0x000990, "Member 'UAthenaFrontend_C::FrontendEventNotifications' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, PTT_Image) == 0x000998, "Member 'UAthenaFrontend_C::PTT_Image' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, SafeZone_1) == 0x0009A0, "Member 'UAthenaFrontend_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, SafeZone_Bottom) == 0x0009A8, "Member 'UAthenaFrontend_C::SafeZone_Bottom' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, SizeBoxPTT) == 0x0009B0, "Member 'UAthenaFrontend_C::SizeBoxPTT' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, StartedPlayingVideo) == 0x0009B8, "Member 'UAthenaFrontend_C::StartedPlayingVideo' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, TransitionIndex) == 0x0009BC, "Member 'UAthenaFrontend_C::TransitionIndex' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, TransitionAudioData) == 0x0009C0, "Member 'UAthenaFrontend_C::TransitionAudioData' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, MovieMediaPlayer) == 0x0009D0, "Member 'UAthenaFrontend_C::MovieMediaPlayer' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, TransitionSound01) == 0x0009D8, "Member 'UAthenaFrontend_C::TransitionSound01' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, TransitionSound02) == 0x0009E0, "Member 'UAthenaFrontend_C::TransitionSound02' has a wrong offset!");
static_assert(offsetof(UAthenaFrontend_C, AudioTimerHandles) == 0x0009E8, "Member 'UAthenaFrontend_C::AudioTimerHandles' has a wrong offset!");

}
