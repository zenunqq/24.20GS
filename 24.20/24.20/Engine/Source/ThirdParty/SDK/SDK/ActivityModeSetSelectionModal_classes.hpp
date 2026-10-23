#pragma once

#include "Basic.hpp"

#include "DiscoveryBrowserUI_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UActivityModeSetSelectionModal_C final : public UFortActivityModeSetSelectionModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       SlidePannel;
	class UWidgetAnimation*                       OnImageLoaded;
	class UActivityHabaneroButton_C*              Button_Activity_Habanero;
	class UImage*                                 Image_Background;
	class UOverlay*                               Overlay_1;
	class UImage*                                 OverlayDim;
	class USafeZone*                              SafeZone;
	class USafeZone*                              SafeZone_BackButton;
	class USizeBox*                               SizeBox_Habanero;
	class UCommonVisibilitySwitcher*              Switcher_ActivitySettings;
	class UImage*                                 Thumbnail;
	class FName                                   ThumbnailParameter;
	class FName                                   ThumbnailOpacityParameter;
	double                                        CloseDelay;
	struct FTimerHandle                           CloseDelayTimer;
	bool                                          bIsPanelVisible;

public:
	void BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void CloseModal();
	void ExecuteUbergraph_ActivityModeSetSelectionModal(int32 EntryPoint);
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture);
	void OnSubModeSelected();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivityModeSetSelectionModal_C">();
	}
	static class UActivityModeSetSelectionModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivityModeSetSelectionModal_C>();
	}
};
static_assert(alignof(UActivityModeSetSelectionModal_C) == 0x000008, "Wrong alignment on UActivityModeSetSelectionModal_C");
static_assert(sizeof(UActivityModeSetSelectionModal_C) == 0x000498, "Wrong size on UActivityModeSetSelectionModal_C");
static_assert(offsetof(UActivityModeSetSelectionModal_C, UberGraphFrame) == 0x000418, "Member 'UActivityModeSetSelectionModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, SlidePannel) == 0x000420, "Member 'UActivityModeSetSelectionModal_C::SlidePannel' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, OnImageLoaded) == 0x000428, "Member 'UActivityModeSetSelectionModal_C::OnImageLoaded' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, Button_Activity_Habanero) == 0x000430, "Member 'UActivityModeSetSelectionModal_C::Button_Activity_Habanero' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, Image_Background) == 0x000438, "Member 'UActivityModeSetSelectionModal_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, Overlay_1) == 0x000440, "Member 'UActivityModeSetSelectionModal_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, OverlayDim) == 0x000448, "Member 'UActivityModeSetSelectionModal_C::OverlayDim' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, SafeZone) == 0x000450, "Member 'UActivityModeSetSelectionModal_C::SafeZone' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, SafeZone_BackButton) == 0x000458, "Member 'UActivityModeSetSelectionModal_C::SafeZone_BackButton' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, SizeBox_Habanero) == 0x000460, "Member 'UActivityModeSetSelectionModal_C::SizeBox_Habanero' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, Switcher_ActivitySettings) == 0x000468, "Member 'UActivityModeSetSelectionModal_C::Switcher_ActivitySettings' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, Thumbnail) == 0x000470, "Member 'UActivityModeSetSelectionModal_C::Thumbnail' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, ThumbnailParameter) == 0x000478, "Member 'UActivityModeSetSelectionModal_C::ThumbnailParameter' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, ThumbnailOpacityParameter) == 0x00047C, "Member 'UActivityModeSetSelectionModal_C::ThumbnailOpacityParameter' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, CloseDelay) == 0x000480, "Member 'UActivityModeSetSelectionModal_C::CloseDelay' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, CloseDelayTimer) == 0x000488, "Member 'UActivityModeSetSelectionModal_C::CloseDelayTimer' has a wrong offset!");
static_assert(offsetof(UActivityModeSetSelectionModal_C, bIsPanelVisible) == 0x000490, "Member 'UActivityModeSetSelectionModal_C::bIsPanelVisible' has a wrong offset!");

}
