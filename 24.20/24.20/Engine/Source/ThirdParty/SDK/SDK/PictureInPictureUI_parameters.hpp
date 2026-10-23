#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "PictureInPictureDescriptors_structs.hpp"

namespace SDK::Params
{

struct PictureInPictureBladeMenuButton_HandlePiPEnabled final
{
public:
	bool                                          Enabled;
};
static_assert(alignof(PictureInPictureBladeMenuButton_HandlePiPEnabled) == 0x000001, "Wrong alignment on PictureInPictureBladeMenuButton_HandlePiPEnabled");
static_assert(sizeof(PictureInPictureBladeMenuButton_HandlePiPEnabled) == 0x000001, "Wrong size on PictureInPictureBladeMenuButton_HandlePiPEnabled");
static_assert(offsetof(PictureInPictureBladeMenuButton_HandlePiPEnabled, Enabled) == 0x000000, "Member 'PictureInPictureBladeMenuButton_HandlePiPEnabled::Enabled' has a wrong offset!");

struct PictureInPictureBladeMenuButton_UpdatePiPStatusBP final
{
public:
	bool                                          LoggedIn;
	bool                                          Enabled;
	bool                                          ParentalControlsEnabled;
};
static_assert(alignof(PictureInPictureBladeMenuButton_UpdatePiPStatusBP) == 0x000001, "Wrong alignment on PictureInPictureBladeMenuButton_UpdatePiPStatusBP");
static_assert(sizeof(PictureInPictureBladeMenuButton_UpdatePiPStatusBP) == 0x000003, "Wrong size on PictureInPictureBladeMenuButton_UpdatePiPStatusBP");
static_assert(offsetof(PictureInPictureBladeMenuButton_UpdatePiPStatusBP, LoggedIn) == 0x000000, "Member 'PictureInPictureBladeMenuButton_UpdatePiPStatusBP::LoggedIn' has a wrong offset!");
static_assert(offsetof(PictureInPictureBladeMenuButton_UpdatePiPStatusBP, Enabled) == 0x000001, "Member 'PictureInPictureBladeMenuButton_UpdatePiPStatusBP::Enabled' has a wrong offset!");
static_assert(offsetof(PictureInPictureBladeMenuButton_UpdatePiPStatusBP, ParentalControlsEnabled) == 0x000002, "Member 'PictureInPictureBladeMenuButton_UpdatePiPStatusBP::ParentalControlsEnabled' has a wrong offset!");

struct PictureInPicturePanelWidget_FlipPIPAudioSubmix final
{
public:
	bool                                          bInDefault;
	uint8                                         Pad_1[0x7];
	struct FFortMediaEventsStreamAssets           InStreamAssets;
	bool                                          bForce;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(PictureInPicturePanelWidget_FlipPIPAudioSubmix) == 0x000008, "Wrong alignment on PictureInPicturePanelWidget_FlipPIPAudioSubmix");
static_assert(sizeof(PictureInPicturePanelWidget_FlipPIPAudioSubmix) == 0x000070, "Wrong size on PictureInPicturePanelWidget_FlipPIPAudioSubmix");
static_assert(offsetof(PictureInPicturePanelWidget_FlipPIPAudioSubmix, bInDefault) == 0x000000, "Member 'PictureInPicturePanelWidget_FlipPIPAudioSubmix::bInDefault' has a wrong offset!");
static_assert(offsetof(PictureInPicturePanelWidget_FlipPIPAudioSubmix, InStreamAssets) == 0x000008, "Member 'PictureInPicturePanelWidget_FlipPIPAudioSubmix::InStreamAssets' has a wrong offset!");
static_assert(offsetof(PictureInPicturePanelWidget_FlipPIPAudioSubmix, bForce) == 0x000068, "Member 'PictureInPicturePanelWidget_FlipPIPAudioSubmix::bForce' has a wrong offset!");

struct PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged final
{
public:
	bool                                          bIsPiPEnabled;
};
static_assert(alignof(PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged) == 0x000001, "Wrong alignment on PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged");
static_assert(sizeof(PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged) == 0x000001, "Wrong size on PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged");
static_assert(offsetof(PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged, bIsPiPEnabled) == 0x000000, "Member 'PictureInPicturePanelWidget_HandleIsPictureInPictureEnabledChanged::bIsPiPEnabled' has a wrong offset!");

struct PictureInPicturePanelWidget_HandleOnPartnerChanged final
{
public:
	class UPictureInPicturePartnerControls*       NewPartnerControls;
};
static_assert(alignof(PictureInPicturePanelWidget_HandleOnPartnerChanged) == 0x000008, "Wrong alignment on PictureInPicturePanelWidget_HandleOnPartnerChanged");
static_assert(sizeof(PictureInPicturePanelWidget_HandleOnPartnerChanged) == 0x000008, "Wrong size on PictureInPicturePanelWidget_HandleOnPartnerChanged");
static_assert(offsetof(PictureInPicturePanelWidget_HandleOnPartnerChanged, NewPartnerControls) == 0x000000, "Member 'PictureInPicturePanelWidget_HandleOnPartnerChanged::NewPartnerControls' has a wrong offset!");

struct PictureInPicturePanelWidget_HandleOnPartnerSourceChanged final
{
public:
	struct FPiPPartnerSource                      InSelectedSource;
};
static_assert(alignof(PictureInPicturePanelWidget_HandleOnPartnerSourceChanged) == 0x000008, "Wrong alignment on PictureInPicturePanelWidget_HandleOnPartnerSourceChanged");
static_assert(sizeof(PictureInPicturePanelWidget_HandleOnPartnerSourceChanged) == 0x000128, "Wrong size on PictureInPicturePanelWidget_HandleOnPartnerSourceChanged");
static_assert(offsetof(PictureInPicturePanelWidget_HandleOnPartnerSourceChanged, InSelectedSource) == 0x000000, "Member 'PictureInPicturePanelWidget_HandleOnPartnerSourceChanged::InSelectedSource' has a wrong offset!");

struct PictureInPicturePanelWidget_HandleToggleFullscreenMap final
{
public:
	bool                                          bFullscreenMapVisible;
};
static_assert(alignof(PictureInPicturePanelWidget_HandleToggleFullscreenMap) == 0x000001, "Wrong alignment on PictureInPicturePanelWidget_HandleToggleFullscreenMap");
static_assert(sizeof(PictureInPicturePanelWidget_HandleToggleFullscreenMap) == 0x000001, "Wrong size on PictureInPicturePanelWidget_HandleToggleFullscreenMap");
static_assert(offsetof(PictureInPicturePanelWidget_HandleToggleFullscreenMap, bFullscreenMapVisible) == 0x000000, "Member 'PictureInPicturePanelWidget_HandleToggleFullscreenMap::bFullscreenMapVisible' has a wrong offset!");

struct PictureInPicturePanelWidget_SetupPIPSoundComponent final
{
public:
	struct FFortMediaEventsStreamAssets           InStreamAssets;
};
static_assert(alignof(PictureInPicturePanelWidget_SetupPIPSoundComponent) == 0x000008, "Wrong alignment on PictureInPicturePanelWidget_SetupPIPSoundComponent");
static_assert(sizeof(PictureInPicturePanelWidget_SetupPIPSoundComponent) == 0x000060, "Wrong size on PictureInPicturePanelWidget_SetupPIPSoundComponent");
static_assert(offsetof(PictureInPicturePanelWidget_SetupPIPSoundComponent, InStreamAssets) == 0x000000, "Member 'PictureInPicturePanelWidget_SetupPIPSoundComponent::InStreamAssets' has a wrong offset!");

struct PictureInPicturePanelWidget_ShowDebugInfo final
{
public:
	bool                                          bShow;
};
static_assert(alignof(PictureInPicturePanelWidget_ShowDebugInfo) == 0x000001, "Wrong alignment on PictureInPicturePanelWidget_ShowDebugInfo");
static_assert(sizeof(PictureInPicturePanelWidget_ShowDebugInfo) == 0x000001, "Wrong size on PictureInPicturePanelWidget_ShowDebugInfo");
static_assert(offsetof(PictureInPicturePanelWidget_ShowDebugInfo, bShow) == 0x000000, "Member 'PictureInPicturePanelWidget_ShowDebugInfo::bShow' has a wrong offset!");

struct PictureInPictureSourcePicker_HandleOnPartnerChanged final
{
public:
	class UPictureInPicturePartnerControls*       NewPartner;
};
static_assert(alignof(PictureInPictureSourcePicker_HandleOnPartnerChanged) == 0x000008, "Wrong alignment on PictureInPictureSourcePicker_HandleOnPartnerChanged");
static_assert(sizeof(PictureInPictureSourcePicker_HandleOnPartnerChanged) == 0x000008, "Wrong size on PictureInPictureSourcePicker_HandleOnPartnerChanged");
static_assert(offsetof(PictureInPictureSourcePicker_HandleOnPartnerChanged, NewPartner) == 0x000000, "Member 'PictureInPictureSourcePicker_HandleOnPartnerChanged::NewPartner' has a wrong offset!");

struct PictureInPictureSourcePicker_HandleOnPartnerSourceChanged final
{
public:
	TArray<struct FPiPPartnerSource>              CurrentSources;
};
static_assert(alignof(PictureInPictureSourcePicker_HandleOnPartnerSourceChanged) == 0x000008, "Wrong alignment on PictureInPictureSourcePicker_HandleOnPartnerSourceChanged");
static_assert(sizeof(PictureInPictureSourcePicker_HandleOnPartnerSourceChanged) == 0x000010, "Wrong size on PictureInPictureSourcePicker_HandleOnPartnerSourceChanged");
static_assert(offsetof(PictureInPictureSourcePicker_HandleOnPartnerSourceChanged, CurrentSources) == 0x000000, "Member 'PictureInPictureSourcePicker_HandleOnPartnerSourceChanged::CurrentSources' has a wrong offset!");

}
