#pragma once

#include "Basic.hpp"

#include "SrirachaRanch_structs.hpp"

namespace SDK::Params
{

struct FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    Source;
};
static_assert(alignof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying) == 0x000008, "Wrong alignment on FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying");
static_assert(sizeof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying) == 0x000040, "Wrong size on FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying");
static_assert(offsetof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying, Radio) == 0x000000, "Member 'FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying::Radio' has a wrong offset!");
static_assert(offsetof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying, Source) == 0x000008, "Member 'FortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying::Source' has a wrong offset!");

struct FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    Source;
};
static_assert(alignof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped) == 0x000008, "Wrong alignment on FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped");
static_assert(sizeof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped) == 0x000040, "Wrong size on FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped");
static_assert(offsetof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped, Radio) == 0x000000, "Member 'FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped::Radio' has a wrong offset!");
static_assert(offsetof(FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped, Source) == 0x000008, "Member 'FortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped::Source' has a wrong offset!");

struct RadioPlayerWidgetBase_OnControllerGainedNewFortPawn final
{
public:
	class AFortPawn*                              FortPawn;
};
static_assert(alignof(RadioPlayerWidgetBase_OnControllerGainedNewFortPawn) == 0x000008, "Wrong alignment on RadioPlayerWidgetBase_OnControllerGainedNewFortPawn");
static_assert(sizeof(RadioPlayerWidgetBase_OnControllerGainedNewFortPawn) == 0x000008, "Wrong size on RadioPlayerWidgetBase_OnControllerGainedNewFortPawn");
static_assert(offsetof(RadioPlayerWidgetBase_OnControllerGainedNewFortPawn, FortPawn) == 0x000000, "Member 'RadioPlayerWidgetBase_OnControllerGainedNewFortPawn::FortPawn' has a wrong offset!");

struct RadioPlayerWidgetBase_OnFailedToOpenSource final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    Source;
};
static_assert(alignof(RadioPlayerWidgetBase_OnFailedToOpenSource) == 0x000008, "Wrong alignment on RadioPlayerWidgetBase_OnFailedToOpenSource");
static_assert(sizeof(RadioPlayerWidgetBase_OnFailedToOpenSource) == 0x000040, "Wrong size on RadioPlayerWidgetBase_OnFailedToOpenSource");
static_assert(offsetof(RadioPlayerWidgetBase_OnFailedToOpenSource, Radio) == 0x000000, "Member 'RadioPlayerWidgetBase_OnFailedToOpenSource::Radio' has a wrong offset!");
static_assert(offsetof(RadioPlayerWidgetBase_OnFailedToOpenSource, Source) == 0x000008, "Member 'RadioPlayerWidgetBase_OnFailedToOpenSource::Source' has a wrong offset!");

struct RadioPlayerWidgetBase_OnLoadingNewSource final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    Source;
};
static_assert(alignof(RadioPlayerWidgetBase_OnLoadingNewSource) == 0x000008, "Wrong alignment on RadioPlayerWidgetBase_OnLoadingNewSource");
static_assert(sizeof(RadioPlayerWidgetBase_OnLoadingNewSource) == 0x000040, "Wrong size on RadioPlayerWidgetBase_OnLoadingNewSource");
static_assert(offsetof(RadioPlayerWidgetBase_OnLoadingNewSource, Radio) == 0x000000, "Member 'RadioPlayerWidgetBase_OnLoadingNewSource::Radio' has a wrong offset!");
static_assert(offsetof(RadioPlayerWidgetBase_OnLoadingNewSource, Source) == 0x000008, "Member 'RadioPlayerWidgetBase_OnLoadingNewSource::Source' has a wrong offset!");

struct RadioPlayerWidgetBase_OnRadioStopped final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    LastSource;
};
static_assert(alignof(RadioPlayerWidgetBase_OnRadioStopped) == 0x000008, "Wrong alignment on RadioPlayerWidgetBase_OnRadioStopped");
static_assert(sizeof(RadioPlayerWidgetBase_OnRadioStopped) == 0x000040, "Wrong size on RadioPlayerWidgetBase_OnRadioStopped");
static_assert(offsetof(RadioPlayerWidgetBase_OnRadioStopped, Radio) == 0x000000, "Member 'RadioPlayerWidgetBase_OnRadioStopped::Radio' has a wrong offset!");
static_assert(offsetof(RadioPlayerWidgetBase_OnRadioStopped, LastSource) == 0x000008, "Member 'RadioPlayerWidgetBase_OnRadioStopped::LastSource' has a wrong offset!");

struct RadioPlayerWidgetBase_OnSourceFinished final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    Source;
};
static_assert(alignof(RadioPlayerWidgetBase_OnSourceFinished) == 0x000008, "Wrong alignment on RadioPlayerWidgetBase_OnSourceFinished");
static_assert(sizeof(RadioPlayerWidgetBase_OnSourceFinished) == 0x000040, "Wrong size on RadioPlayerWidgetBase_OnSourceFinished");
static_assert(offsetof(RadioPlayerWidgetBase_OnSourceFinished, Radio) == 0x000000, "Member 'RadioPlayerWidgetBase_OnSourceFinished::Radio' has a wrong offset!");
static_assert(offsetof(RadioPlayerWidgetBase_OnSourceFinished, Source) == 0x000008, "Member 'RadioPlayerWidgetBase_OnSourceFinished::Source' has a wrong offset!");

struct RadioPlayerWidgetBase_OnSourcePlaying final
{
public:
	class UStreamingRadioPlayerComponent*         Radio;
	struct FAthenaRadioStation                    Source;
};
static_assert(alignof(RadioPlayerWidgetBase_OnSourcePlaying) == 0x000008, "Wrong alignment on RadioPlayerWidgetBase_OnSourcePlaying");
static_assert(sizeof(RadioPlayerWidgetBase_OnSourcePlaying) == 0x000040, "Wrong size on RadioPlayerWidgetBase_OnSourcePlaying");
static_assert(offsetof(RadioPlayerWidgetBase_OnSourcePlaying, Radio) == 0x000000, "Member 'RadioPlayerWidgetBase_OnSourcePlaying::Radio' has a wrong offset!");
static_assert(offsetof(RadioPlayerWidgetBase_OnSourcePlaying, Source) == 0x000008, "Member 'RadioPlayerWidgetBase_OnSourcePlaying::Source' has a wrong offset!");

struct RadioPlayerWidgetBase_SetControllable final
{
public:
	bool                                          bCanControl;
};
static_assert(alignof(RadioPlayerWidgetBase_SetControllable) == 0x000001, "Wrong alignment on RadioPlayerWidgetBase_SetControllable");
static_assert(sizeof(RadioPlayerWidgetBase_SetControllable) == 0x000001, "Wrong size on RadioPlayerWidgetBase_SetControllable");
static_assert(offsetof(RadioPlayerWidgetBase_SetControllable, bCanControl) == 0x000000, "Member 'RadioPlayerWidgetBase_SetControllable::bCanControl' has a wrong offset!");

}
