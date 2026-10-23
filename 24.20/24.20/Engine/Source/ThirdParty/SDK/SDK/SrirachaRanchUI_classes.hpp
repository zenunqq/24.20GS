#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                           ToggleRadioOffSprite;
	uint8                                         Pad_118[0x8];

public:
	void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehavior_ToggleRadio">();
	}
	static class UFortMobileActionButtonBehavior_ToggleRadio* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehavior_ToggleRadio>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehavior_ToggleRadio) == 0x000008, "Wrong alignment on UFortMobileActionButtonBehavior_ToggleRadio");
static_assert(sizeof(UFortMobileActionButtonBehavior_ToggleRadio) == 0x000120, "Wrong size on UFortMobileActionButtonBehavior_ToggleRadio");
static_assert(offsetof(UFortMobileActionButtonBehavior_ToggleRadio, ToggleRadioOffSprite) == 0x000110, "Member 'UFortMobileActionButtonBehavior_ToggleRadio::ToggleRadioOffSprite' has a wrong offset!");

class URadioPlayerWidgetBase final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x40];
	struct FFortPrioritizedWidgetData             PriorityData;
	uint8                                         Pad_312[0x6];
	class UStreamingRadioPlayerComponent*         LastValidComp;

public:
	void NativeEnteredVehicle();
	void NativeExitedVehicle();
	void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);
	void OnDisconnectFromComp();
	void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& LastSource);
	void OnShouldShowDueToEntrance();
	void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, const struct FAthenaRadioStation& Source);
	void SetControllable(bool bCanControl);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadioPlayerWidgetBase">();
	}
	static class URadioPlayerWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadioPlayerWidgetBase>();
	}
};
static_assert(alignof(URadioPlayerWidgetBase) == 0x000008, "Wrong alignment on URadioPlayerWidgetBase");
static_assert(sizeof(URadioPlayerWidgetBase) == 0x000320, "Wrong size on URadioPlayerWidgetBase");
static_assert(offsetof(URadioPlayerWidgetBase, PriorityData) == 0x000310, "Member 'URadioPlayerWidgetBase::PriorityData' has a wrong offset!");
static_assert(offsetof(URadioPlayerWidgetBase, LastValidComp) == 0x000318, "Member 'URadioPlayerWidgetBase::LastValidComp' has a wrong offset!");

}
