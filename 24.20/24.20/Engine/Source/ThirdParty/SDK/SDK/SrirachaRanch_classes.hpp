#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "SrirachaRanch_structs.hpp"

namespace SDK
{

class UStreamingRadioAudioShapeComponent final : public UFortAudioShapeComponent
{
public:
	float                                         Radius;
	uint8                                         Pad_14C[0x4];
	class UStreamingRadioPlayerComponent*         RadioPlayer;
	uint8                                         Pad_158[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamingRadioAudioShapeComponent">();
	}
	static class UStreamingRadioAudioShapeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamingRadioAudioShapeComponent>();
	}
};
static_assert(alignof(UStreamingRadioAudioShapeComponent) == 0x000008, "Wrong alignment on UStreamingRadioAudioShapeComponent");
static_assert(sizeof(UStreamingRadioAudioShapeComponent) == 0x0001A0, "Wrong size on UStreamingRadioAudioShapeComponent");
static_assert(offsetof(UStreamingRadioAudioShapeComponent, Radius) == 0x000148, "Member 'UStreamingRadioAudioShapeComponent::Radius' has a wrong offset!");
static_assert(offsetof(UStreamingRadioAudioShapeComponent, RadioPlayer) == 0x000150, "Member 'UStreamingRadioAudioShapeComponent::RadioPlayer' has a wrong offset!");

class USrirachaRanchComponentTemplateWrapper final : public UDataAsset
{
public:
	class UMediaSoundComponent*                   MediaSoundPlayerTemplate;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SrirachaRanchComponentTemplateWrapper">();
	}
	static class USrirachaRanchComponentTemplateWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<USrirachaRanchComponentTemplateWrapper>();
	}
};
static_assert(alignof(USrirachaRanchComponentTemplateWrapper) == 0x000008, "Wrong alignment on USrirachaRanchComponentTemplateWrapper");
static_assert(sizeof(USrirachaRanchComponentTemplateWrapper) == 0x000038, "Wrong size on USrirachaRanchComponentTemplateWrapper");
static_assert(offsetof(USrirachaRanchComponentTemplateWrapper, MediaSoundPlayerTemplate) == 0x000030, "Member 'USrirachaRanchComponentTemplateWrapper::MediaSoundPlayerTemplate' has a wrong offset!");

class UStreamingRadioPlayerComponent : public UFortPawnComponent
{
public:
	uint8                                         Pad_A8[0x10];
	TMap<class FName, struct FSrirachaInputMappingData> InputMappingData;
	TMulticastInlineDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> OnSourceLoading;
	TMulticastInlineDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> OnSourcePlayed;
	TMulticastInlineDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> OnSourceStopped;
	TMulticastInlineDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> OnSourceFailed;
	TMulticastInlineDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> OnRadioExplicitStop;
	float                                         PercentAutostartRadio;
	uint8                                         Pad_15C[0x4];
	TArray<class FName>                           DisabledVehicleList;
	TMap<class FName, float>                      ExteriorVolumeMultiplierMap;
	TMap<class FName, float>                      InteriorVolumeMultiplierMap;
	bool                                          bMinimalStateOnPlatform;
	uint8                                         Pad_211[0x7];
	TArray<class FString>                         DisabledStationList;
	bool                                          bAutostartOnEntry;
	bool                                          bDisabledForCurrentPlayerState;
	uint8                                         Pad_22A[0x6];
	struct FStreamingRadioSourceData              ReplicatedRadioSourceData;
	TMulticastInlineDelegate<void(EStreamingRadioSourceState NewState)> OnReplicatedStateChangedDelegate;
	class UMediaSoundComponent*                   SoundComponent;
	class UStreamingRadioAudioShapeComponent*     AudioShape;
	class USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource;
	struct FAthenaRadioStation                    LastSource;
	TArray<class URadioContentSourceItemDefinition*> Sources;
	struct FAthenaRadioStation                    FallbackSource;
	TMap<struct FGameplayTag, struct FSrirachaPerClassSpecialSeats> SpecialSeatList;
	class UMediaPlayer*                           MediaPlayer;
	class UMediaPlayer*                           MediaPlayerInstance;
	class UFortMediaPlayerCtrl*                   MediaController;
	class USoundSubmixBase*                       DefaultSoundSubmix;
	class USoundSubmixBase*                       LicensedSoundSubmix;
	class UFortStreamMediaSource*                 LastMediaSource;
	class UFortStreamMediaSource*                 IncomingMediaSource;
	ERadioSource                                  CurrentMode;
	uint8                                         Pad_3A9[0x3];
	int32                                         MaximumRetries;
	int32                                         FadeoutWhenUnpoweredInMS;
	int32                                         FadeoutWhenOwnerBeingDestroyedInMS;
	int32                                         MaxFadeoutTimeMS;
	int32                                         DefaultPlayingIndex;
	class USoundMix*                              SoundMixInside;
	class USoundMix*                              SoundMixOutside;
	uint8                                         Pad_3D0[0x4];
	float                                         ActivationRadius;
	class FName                                   ComponentToAttachTo;
	class FName                                   ComponentSocketAttachTo;
	class UFortStreamMediaSource*                 MediaSource;
	TArray<struct FAthenaRadioStation>            RadioStationList;
	class UObject*                                DelegateContextObject;
	float                                         MediaStartTimeFromInit;
	uint8                                         Pad_404[0x4C];

public:
	void MediaExplicitClose(bool bReallyExplicit);
	void MediaFailedToOpen(const class FString& String);
	void MediaFinishedOrClosed();
	void MediaLoad();
	void MediaPlayed();
	void MediaReady(const class FString& String);
	void NativeOnPawnEnterSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnExitSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnExitVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnVehicleOwnerChanged(const TScriptInterface<class IFortVehicleInterface>& Vehicle, const class AActor* NewOwner, const class AActor* PrevOwner);
	void OnFailedURL(const class FString& URL);
	void OnLicensedAudioSettingChanged(class UFortClientSettingsRecord* Settings);
	void OnOwnerExploded();
	void OnOwnerOutOfFuel();
	void OnOwnerReFueled();
	void OnOwnerUnpowered();
	void OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser);
	void OnPawnEnterSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnExitSeat(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnExitVehicle(const TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);
	void OnRep_RadioSourceData();
	void OnSuccessfulURL(const class FString& URL);
	void PlayDefaultIndex();
	void PlayNextIndex();
	void PlayPrevIndex();
	void ServerPlayIndex(const int32 InIndex, const EStreamingRadioSourceState InState);
	void ServerSaveAutoStart(const bool bInAutoStart);
	void ServerSavedSource(const struct FAthenaRadioStation& InSource);
	void ServerSaveFadeOutTime(const float InFadeOutSeconds);
	void ServerSetDisabledForCurrentPlayerState(const bool bInDisableForCurrentPlayerState);
	void ServerStopRadio();
	void SetActivationRadius(float InRadius);
	void SetExteriorVolume(const TScriptInterface<class IFortVehicleInterface>& Vehicle);
	void SetInteriorVolume(const TScriptInterface<class IFortVehicleInterface>& Vehicle);
	void SoundMixUpdateTargetingState(bool bNewIsTargeting);
	void SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void StartRadio(int32 IdxToPlay, bool bFallbackOverride);
	void StopIfNoDriver(const TScriptInterface<class IFortVehicleInterface>& Vehicle);
	void StopRadio();
	void StopRadioWithFadeout(int32 Milliseconds);
	void ToggleRadioActive();

	struct FAthenaRadioStation GetOptionAt(int32 idx) const;
	bool IsExternalSeat(int32 SeatIdx) const;
	bool IsPlayingLiveFeed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamingRadioPlayerComponent">();
	}
	static class UStreamingRadioPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamingRadioPlayerComponent>();
	}
};
static_assert(alignof(UStreamingRadioPlayerComponent) == 0x000008, "Wrong alignment on UStreamingRadioPlayerComponent");
static_assert(sizeof(UStreamingRadioPlayerComponent) == 0x000450, "Wrong size on UStreamingRadioPlayerComponent");
static_assert(offsetof(UStreamingRadioPlayerComponent, InputMappingData) == 0x0000B8, "Member 'UStreamingRadioPlayerComponent::InputMappingData' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourceLoading) == 0x000108, "Member 'UStreamingRadioPlayerComponent::OnSourceLoading' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourcePlayed) == 0x000118, "Member 'UStreamingRadioPlayerComponent::OnSourcePlayed' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourceStopped) == 0x000128, "Member 'UStreamingRadioPlayerComponent::OnSourceStopped' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourceFailed) == 0x000138, "Member 'UStreamingRadioPlayerComponent::OnSourceFailed' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnRadioExplicitStop) == 0x000148, "Member 'UStreamingRadioPlayerComponent::OnRadioExplicitStop' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, PercentAutostartRadio) == 0x000158, "Member 'UStreamingRadioPlayerComponent::PercentAutostartRadio' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, DisabledVehicleList) == 0x000160, "Member 'UStreamingRadioPlayerComponent::DisabledVehicleList' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, ExteriorVolumeMultiplierMap) == 0x000170, "Member 'UStreamingRadioPlayerComponent::ExteriorVolumeMultiplierMap' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, InteriorVolumeMultiplierMap) == 0x0001C0, "Member 'UStreamingRadioPlayerComponent::InteriorVolumeMultiplierMap' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, bMinimalStateOnPlatform) == 0x000210, "Member 'UStreamingRadioPlayerComponent::bMinimalStateOnPlatform' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, DisabledStationList) == 0x000218, "Member 'UStreamingRadioPlayerComponent::DisabledStationList' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, bAutostartOnEntry) == 0x000228, "Member 'UStreamingRadioPlayerComponent::bAutostartOnEntry' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, bDisabledForCurrentPlayerState) == 0x000229, "Member 'UStreamingRadioPlayerComponent::bDisabledForCurrentPlayerState' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, ReplicatedRadioSourceData) == 0x000230, "Member 'UStreamingRadioPlayerComponent::ReplicatedRadioSourceData' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnReplicatedStateChangedDelegate) == 0x000278, "Member 'UStreamingRadioPlayerComponent::OnReplicatedStateChangedDelegate' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundComponent) == 0x000288, "Member 'UStreamingRadioPlayerComponent::SoundComponent' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, AudioShape) == 0x000290, "Member 'UStreamingRadioPlayerComponent::AudioShape' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundCompTemplateSource) == 0x000298, "Member 'UStreamingRadioPlayerComponent::SoundCompTemplateSource' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, LastSource) == 0x0002A0, "Member 'UStreamingRadioPlayerComponent::LastSource' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, Sources) == 0x0002D8, "Member 'UStreamingRadioPlayerComponent::Sources' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, FallbackSource) == 0x0002E8, "Member 'UStreamingRadioPlayerComponent::FallbackSource' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, SpecialSeatList) == 0x000320, "Member 'UStreamingRadioPlayerComponent::SpecialSeatList' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaPlayer) == 0x000370, "Member 'UStreamingRadioPlayerComponent::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaPlayerInstance) == 0x000378, "Member 'UStreamingRadioPlayerComponent::MediaPlayerInstance' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaController) == 0x000380, "Member 'UStreamingRadioPlayerComponent::MediaController' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, DefaultSoundSubmix) == 0x000388, "Member 'UStreamingRadioPlayerComponent::DefaultSoundSubmix' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, LicensedSoundSubmix) == 0x000390, "Member 'UStreamingRadioPlayerComponent::LicensedSoundSubmix' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, LastMediaSource) == 0x000398, "Member 'UStreamingRadioPlayerComponent::LastMediaSource' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, IncomingMediaSource) == 0x0003A0, "Member 'UStreamingRadioPlayerComponent::IncomingMediaSource' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, CurrentMode) == 0x0003A8, "Member 'UStreamingRadioPlayerComponent::CurrentMode' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MaximumRetries) == 0x0003AC, "Member 'UStreamingRadioPlayerComponent::MaximumRetries' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, FadeoutWhenUnpoweredInMS) == 0x0003B0, "Member 'UStreamingRadioPlayerComponent::FadeoutWhenUnpoweredInMS' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, FadeoutWhenOwnerBeingDestroyedInMS) == 0x0003B4, "Member 'UStreamingRadioPlayerComponent::FadeoutWhenOwnerBeingDestroyedInMS' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MaxFadeoutTimeMS) == 0x0003B8, "Member 'UStreamingRadioPlayerComponent::MaxFadeoutTimeMS' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, DefaultPlayingIndex) == 0x0003BC, "Member 'UStreamingRadioPlayerComponent::DefaultPlayingIndex' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundMixInside) == 0x0003C0, "Member 'UStreamingRadioPlayerComponent::SoundMixInside' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundMixOutside) == 0x0003C8, "Member 'UStreamingRadioPlayerComponent::SoundMixOutside' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, ActivationRadius) == 0x0003D4, "Member 'UStreamingRadioPlayerComponent::ActivationRadius' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, ComponentToAttachTo) == 0x0003D8, "Member 'UStreamingRadioPlayerComponent::ComponentToAttachTo' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, ComponentSocketAttachTo) == 0x0003DC, "Member 'UStreamingRadioPlayerComponent::ComponentSocketAttachTo' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaSource) == 0x0003E0, "Member 'UStreamingRadioPlayerComponent::MediaSource' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, RadioStationList) == 0x0003E8, "Member 'UStreamingRadioPlayerComponent::RadioStationList' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, DelegateContextObject) == 0x0003F8, "Member 'UStreamingRadioPlayerComponent::DelegateContextObject' has a wrong offset!");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaStartTimeFromInit) == 0x000400, "Member 'UStreamingRadioPlayerComponent::MediaStartTimeFromInit' has a wrong offset!");

class URadioContentSourceItemDefinition final : public UFortAccountItemDefinition
{
public:
	class FString                                 ResourceID;
	class UFortStreamMediaSource*                 MediaSource;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadioContentSourceItemDefinition">();
	}
	static class URadioContentSourceItemDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadioContentSourceItemDefinition>();
	}
};
static_assert(alignof(URadioContentSourceItemDefinition) == 0x000008, "Wrong alignment on URadioContentSourceItemDefinition");
static_assert(sizeof(URadioContentSourceItemDefinition) == 0x000438, "Wrong size on URadioContentSourceItemDefinition");
static_assert(offsetof(URadioContentSourceItemDefinition, ResourceID) == 0x000420, "Member 'URadioContentSourceItemDefinition::ResourceID' has a wrong offset!");
static_assert(offsetof(URadioContentSourceItemDefinition, MediaSource) == 0x000430, "Member 'URadioContentSourceItemDefinition::MediaSource' has a wrong offset!");

}
