#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUILegacy_classes.hpp"
#include "PictureInPictureDescriptors_structs.hpp"
#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{
public:
	void HandlePiPEnabled(const bool Enabled);
	void HandlePiPLoginSuccess();
	void HandlePiPLogoutSuccess();
	void OnPartnerListUpdated();
	void UpdatePiPStatusBP(const bool LoggedIn, const bool Enabled, const bool ParentalControlsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureBladeMenuButton">();
	}
	static class UPictureInPictureBladeMenuButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureBladeMenuButton>();
	}
};
static_assert(alignof(UPictureInPictureBladeMenuButton) == 0x000010, "Wrong alignment on UPictureInPictureBladeMenuButton");
static_assert(sizeof(UPictureInPictureBladeMenuButton) == 0x001430, "Wrong size on UPictureInPictureBladeMenuButton");

class UPictureInPictureLoadingScreenOverlayAction final : public UFortUIGameFeatureAction
{
public:
	class USubtitleDisplayNative*                 SubtitleDisplay;
	uint8                                         Pad_30[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureLoadingScreenOverlayAction">();
	}
	static class UPictureInPictureLoadingScreenOverlayAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureLoadingScreenOverlayAction>();
	}
};
static_assert(alignof(UPictureInPictureLoadingScreenOverlayAction) == 0x000008, "Wrong alignment on UPictureInPictureLoadingScreenOverlayAction");
static_assert(sizeof(UPictureInPictureLoadingScreenOverlayAction) == 0x000060, "Wrong size on UPictureInPictureLoadingScreenOverlayAction");
static_assert(offsetof(UPictureInPictureLoadingScreenOverlayAction, SubtitleDisplay) == 0x000028, "Member 'UPictureInPictureLoadingScreenOverlayAction::SubtitleDisplay' has a wrong offset!");

class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{
public:
	void HandleOnPIPVideoResumed();
	void HandleOnPIPVideoStarted();
	void OnMediaStarted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureMetadataOverlay">();
	}
	static class UPictureInPictureMetadataOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureMetadataOverlay>();
	}
};
static_assert(alignof(UPictureInPictureMetadataOverlay) == 0x000008, "Wrong alignment on UPictureInPictureMetadataOverlay");
static_assert(sizeof(UPictureInPictureMetadataOverlay) == 0x0003A8, "Wrong size on UPictureInPictureMetadataOverlay");

class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class USizeBox*                               Video_Size_Box;
	struct FVector2D                              StandardVideoSize;
	struct FVector2D                              StandardVideoTranslation;
	struct FMargin                                FrontEndSubtitleMargin;
	struct FMargin                                GameSubtitleMargin;
	class UImage*                                 Image_Movie;
	class UCommonLazyImage*                       Image_Thumbnail_Prev;
	class UCommonLazyImage*                       Image_Thumbnail_Next;
	class UNamedSlot*                             MetadataOverlaySlot;
	class UOverlay*                               Overlay_Main;
	class UOverlay*                               Overlay_Keybind;
	struct FDataTableRowHandle                    PressedObjectInputAction;
	uint8                                         Pad_438[0x8];
	class UPictureInPicturePartnerControls*       CurrentPartner;
	bool                                          bEnableUCPCheck;
	uint8                                         Pad_449[0x7];
	TSubclassOf<class UCommonActivatableWidget>   SourcePickerClass;
	class USoundSourceBus*                        SourceBus;
	class UCommonActionWidget*                    ToggleActionWidget;
	class UCommonActivatableWidget*               SourcePickerWidget;
	class UPictureInPicturePlayer*                VideoWidget;
	uint8                                         Pad_478[0x20];
	class UAudioComponent*                        PIPSoundComponent;
	struct FPiPPartnerSource                      CurrentSource;
	uint8                                         Pad_5C8[0x8];
	class USubtitleDisplay*                       Subtitles;

public:
	void AutoEnableController();
	void DestroyPIPSoundComponent();
	void FlipPIPAudioSubmix(bool bInDefault, const struct FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);
	void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);
	void HandleOnPartnerListUpdated();
	void HandleOnPartnerSourceChanged(const struct FPiPPartnerSource& InSelectedSource);
	void HandleToggleFullscreenMap(bool bFullscreenMapVisible);
	void IntentionalDeactivate();
	void SetupPIPSoundComponent(const struct FFortMediaEventsStreamAssets& InStreamAssets);
	void ShowDebugInfo(bool bShow);
	void ToggleFullScreenPiP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPicturePanelWidget">();
	}
	static class UPictureInPicturePanelWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPicturePanelWidget>();
	}
};
static_assert(alignof(UPictureInPicturePanelWidget) == 0x000008, "Wrong alignment on UPictureInPicturePanelWidget");
static_assert(sizeof(UPictureInPicturePanelWidget) == 0x0005D8, "Wrong size on UPictureInPicturePanelWidget");
static_assert(offsetof(UPictureInPicturePanelWidget, Video_Size_Box) == 0x0003B0, "Member 'UPictureInPicturePanelWidget::Video_Size_Box' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, StandardVideoSize) == 0x0003B8, "Member 'UPictureInPicturePanelWidget::StandardVideoSize' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, StandardVideoTranslation) == 0x0003C8, "Member 'UPictureInPicturePanelWidget::StandardVideoTranslation' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, FrontEndSubtitleMargin) == 0x0003D8, "Member 'UPictureInPicturePanelWidget::FrontEndSubtitleMargin' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, GameSubtitleMargin) == 0x0003E8, "Member 'UPictureInPicturePanelWidget::GameSubtitleMargin' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Image_Movie) == 0x0003F8, "Member 'UPictureInPicturePanelWidget::Image_Movie' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Image_Thumbnail_Prev) == 0x000400, "Member 'UPictureInPicturePanelWidget::Image_Thumbnail_Prev' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Image_Thumbnail_Next) == 0x000408, "Member 'UPictureInPicturePanelWidget::Image_Thumbnail_Next' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, MetadataOverlaySlot) == 0x000410, "Member 'UPictureInPicturePanelWidget::MetadataOverlaySlot' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Overlay_Main) == 0x000418, "Member 'UPictureInPicturePanelWidget::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Overlay_Keybind) == 0x000420, "Member 'UPictureInPicturePanelWidget::Overlay_Keybind' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, PressedObjectInputAction) == 0x000428, "Member 'UPictureInPicturePanelWidget::PressedObjectInputAction' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, CurrentPartner) == 0x000440, "Member 'UPictureInPicturePanelWidget::CurrentPartner' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, bEnableUCPCheck) == 0x000448, "Member 'UPictureInPicturePanelWidget::bEnableUCPCheck' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, SourcePickerClass) == 0x000450, "Member 'UPictureInPicturePanelWidget::SourcePickerClass' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, SourceBus) == 0x000458, "Member 'UPictureInPicturePanelWidget::SourceBus' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, ToggleActionWidget) == 0x000460, "Member 'UPictureInPicturePanelWidget::ToggleActionWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, SourcePickerWidget) == 0x000468, "Member 'UPictureInPicturePanelWidget::SourcePickerWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, VideoWidget) == 0x000470, "Member 'UPictureInPicturePanelWidget::VideoWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, PIPSoundComponent) == 0x000498, "Member 'UPictureInPicturePanelWidget::PIPSoundComponent' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, CurrentSource) == 0x0004A0, "Member 'UPictureInPicturePanelWidget::CurrentSource' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePanelWidget, Subtitles) == 0x0005D0, "Member 'UPictureInPicturePanelWidget::Subtitles' has a wrong offset!");

class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	struct FVector2D                              FullScreenTranslation;
	struct FVector2D                              StandardTranslation;
	class UVerticalBox*                           VerticalBox_Main;
	uint8                                         Pad_3D8[0x8];
	struct FSlateBrush                            FullScreenActionBrush;
	struct FSlateBrush                            StandardScreenActionBrush;
	uint8                                         Pad_560[0x1];
	struct FPrimaryContentSetup                   PrimaryContentSetup;
	uint8                                         Pad_564[0x4];
	class UCommonTextBlock*                       Text_ItemName;
	class UFortPickerOverlay*                     PickerOverlay_MediaSource;
	class UOverlay*                               Overlay_Main;
	class UTexture2D*                             DefaultItemTexture;
	class UPictureInPictureMediaController*       CurrentPartner;
	uint8                                         Pad_590[0x10];

public:
	void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);
	void HandleOnPartnerSourceChanged(const TArray<struct FPiPPartnerSource>& CurrentSources);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureSourcePicker">();
	}
	static class UPictureInPictureSourcePicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureSourcePicker>();
	}
};
static_assert(alignof(UPictureInPictureSourcePicker) == 0x000010, "Wrong alignment on UPictureInPictureSourcePicker");
static_assert(sizeof(UPictureInPictureSourcePicker) == 0x0005A0, "Wrong size on UPictureInPictureSourcePicker");
static_assert(offsetof(UPictureInPictureSourcePicker, FullScreenTranslation) == 0x0003B0, "Member 'UPictureInPictureSourcePicker::FullScreenTranslation' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, StandardTranslation) == 0x0003C0, "Member 'UPictureInPictureSourcePicker::StandardTranslation' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, VerticalBox_Main) == 0x0003D0, "Member 'UPictureInPictureSourcePicker::VerticalBox_Main' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, FullScreenActionBrush) == 0x0003E0, "Member 'UPictureInPictureSourcePicker::FullScreenActionBrush' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, StandardScreenActionBrush) == 0x0004A0, "Member 'UPictureInPictureSourcePicker::StandardScreenActionBrush' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, PrimaryContentSetup) == 0x000561, "Member 'UPictureInPictureSourcePicker::PrimaryContentSetup' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, Text_ItemName) == 0x000568, "Member 'UPictureInPictureSourcePicker::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, PickerOverlay_MediaSource) == 0x000570, "Member 'UPictureInPictureSourcePicker::PickerOverlay_MediaSource' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, Overlay_Main) == 0x000578, "Member 'UPictureInPictureSourcePicker::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, DefaultItemTexture) == 0x000580, "Member 'UPictureInPictureSourcePicker::DefaultItemTexture' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSourcePicker, CurrentPartner) == 0x000588, "Member 'UPictureInPictureSourcePicker::CurrentPartner' has a wrong offset!");

}
