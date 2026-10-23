#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "PictureInPictureCore_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "PictureInPictureDescriptors_structs.hpp"
#include "MediaUtils_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UPictureInPictureClient : public UObject
{
public:
	TMulticastInlineDelegate<void()>              LoginSuccessEvent;
	TMulticastInlineDelegate<void()>              LogoutSuccessEvent;
	TMulticastInlineDelegate<void(class UTexture2DDynamic* QRCodeTexture)> QRCodeReceivedEvent;
	TMulticastInlineDelegate<void(const class FString& ErrorName, const class FString& ErrorMessage)> ErrorDelegate;
	uint8                                         Pad_68[0x8];
	class FString                                 UserName;
	class UEpicCMSImage*                          UserAvatarImage;
	uint8                                         Pad_88[0x8];
	class UTexture2DDynamic*                      CurrentQRCodeTexture;
	uint8                                         Pad_98[0x10];

public:
	void BeginLogin(class UObject* InWorldContext);
	void CheckLogin(class UObject* InWorldContext);
	void EndLogin(class UObject* InWorldContext);
	class UEpicCMSImage* GetAvatarImage();
	const EPictureInPictureAuthState GetLoginState();
	class UTexture2DDynamic* GetQRCodeTexture();
	bool IsLoggedIn();
	void Logout();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureClient">();
	}
	static class UPictureInPictureClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureClient>();
	}
};
static_assert(alignof(UPictureInPictureClient) == 0x000008, "Wrong alignment on UPictureInPictureClient");
static_assert(sizeof(UPictureInPictureClient) == 0x0000A8, "Wrong size on UPictureInPictureClient");
static_assert(offsetof(UPictureInPictureClient, LoginSuccessEvent) == 0x000028, "Member 'UPictureInPictureClient::LoginSuccessEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureClient, LogoutSuccessEvent) == 0x000038, "Member 'UPictureInPictureClient::LogoutSuccessEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureClient, QRCodeReceivedEvent) == 0x000048, "Member 'UPictureInPictureClient::QRCodeReceivedEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureClient, ErrorDelegate) == 0x000058, "Member 'UPictureInPictureClient::ErrorDelegate' has a wrong offset!");
static_assert(offsetof(UPictureInPictureClient, UserName) == 0x000070, "Member 'UPictureInPictureClient::UserName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureClient, UserAvatarImage) == 0x000080, "Member 'UPictureInPictureClient::UserAvatarImage' has a wrong offset!");
static_assert(offsetof(UPictureInPictureClient, CurrentQRCodeTexture) == 0x000090, "Member 'UPictureInPictureClient::CurrentQRCodeTexture' has a wrong offset!");

class UPictureInPictureCheatManager final : public UChildCheatManager
{
public:
	void CanEnablePartnerPIP();
	void DisablePiP();
	void EnablePiP();
	void PrintPiPRegionInfo();
	void ResumePiP();
	void SuspendPiP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureCheatManager">();
	}
	static class UPictureInPictureCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureCheatManager>();
	}
};
static_assert(alignof(UPictureInPictureCheatManager) == 0x000008, "Wrong alignment on UPictureInPictureCheatManager");
static_assert(sizeof(UPictureInPictureCheatManager) == 0x000028, "Wrong size on UPictureInPictureCheatManager");

class UPictureInPictureCoreEnableDisableAction final : public UFortUIGameFeatureAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureCoreEnableDisableAction">();
	}
	static class UPictureInPictureCoreEnableDisableAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureCoreEnableDisableAction>();
	}
};
static_assert(alignof(UPictureInPictureCoreEnableDisableAction) == 0x000008, "Wrong alignment on UPictureInPictureCoreEnableDisableAction");
static_assert(sizeof(UPictureInPictureCoreEnableDisableAction) == 0x000028, "Wrong size on UPictureInPictureCoreEnableDisableAction");

class UPictureInPictureMediaController : public UObject
{
public:
	class FString                                 PartnerName;
	uint8                                         Pad_38[0x10];
	TArray<class UPictureInPictureActionData*>    ActionDataArray;
	struct FPIPVideoPlayerAssetConfig             DefaultPlayerAssetConfig;
	struct FPIPVideoPlayerAssetConfig             PlayerAssetConfig;
	class UPictureInPicturePlayer*                VideoWidget;
	struct FPIPVideoPlayerConfig                  VideoWidgetConfig;
	TWeakObjectPtr<class UCommonLazyImage>        ThumbnailImageNext;
	TWeakObjectPtr<class UCommonLazyImage>        ThumbnailImagePrevious;
	bool                                          bSupportsMultipleSources;
	uint8                                         Pad_1C9[0x7];
	struct FPiPPartnerSource                      CurrentSource;
	TArray<struct FPiPPartnerSource>              Sources;
	TArray<struct FPiPPartnerSource>              ValidSources;
	struct FMediaPlayerOptions                    LocalOptions;
	TMulticastInlineDelegate<void(int32 ErrorType, const class FString& ErrorMessage)> BaseErrorEvent;
	TMulticastInlineDelegate<void(bool IsEnabled)> BaseEnabledEvent;
	TMulticastInlineDelegate<void(TArray<struct FPiPPartnerSource>& Sources)> SourcesChangedEvent;
	TMulticastInlineDelegate<void(struct FPiPPartnerSource& Source)> SourceSelectedEvent;
	uint8                                         Pad_388[0x8];
	TArray<struct FPictureInPictureActionConfig>  InstanceActionData;
	class UPictureInPictureAnalyticsManager*      AnalyticsManager;
	struct FDateTime                              ActiveStartTime;
	struct FDateTime                              PausedStartTime;
	uint8                                         Pad_3B8[0x8];
	struct FPiPSuspendInfo                        SuspendedInfo;
	uint8                                         Pad_4F0[0x68];

public:
	void Exit(bool bStop);
	TArray<class UPictureInPictureActionData*> GetActions();
	struct FPiPPartnerSource GetCurrentSource();
	TArray<struct FPiPPartnerSource> GetSources();
	TArray<struct FPiPPartnerSource> GetValidSources();
	void HandleSourceSelectedEvent(const class FString& SelectedSource);
	bool IsMultiSourceSupported();
	bool IsPaused();
	bool IsPlaying();
	void OnMediaClosedAnalytics();
	void OnMediaPausedAnalytics();
	void OnMediaResumedAnalytics();
	void OnMediaStartedAnalytics();
	void OnNextThumbnailReceived(class UTexture2DDynamic* InTexture);
	void OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture);
	void Pause();
	void Play(bool bForcePlay);
	void SetCurrentSource(const struct FPiPPartnerSource& SelectedSource);
	void SetEnabled(bool bIsEnabled, bool bIsFromUser);
	void Stop();
	void ToggleFullScreen();

	const struct FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig() const;
	class UPictureInPicturePlayer* GetMediaPlayerWidget() const;
	const struct FPIPVideoPlayerAssetConfig GetPlayerAssetConfig() const;
	bool IsEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureMediaController">();
	}
	static class UPictureInPictureMediaController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureMediaController>();
	}
};
static_assert(alignof(UPictureInPictureMediaController) == 0x000008, "Wrong alignment on UPictureInPictureMediaController");
static_assert(sizeof(UPictureInPictureMediaController) == 0x000558, "Wrong size on UPictureInPictureMediaController");
static_assert(offsetof(UPictureInPictureMediaController, PartnerName) == 0x000028, "Member 'UPictureInPictureMediaController::PartnerName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, ActionDataArray) == 0x000048, "Member 'UPictureInPictureMediaController::ActionDataArray' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, DefaultPlayerAssetConfig) == 0x000058, "Member 'UPictureInPictureMediaController::DefaultPlayerAssetConfig' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, PlayerAssetConfig) == 0x0000E0, "Member 'UPictureInPictureMediaController::PlayerAssetConfig' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, VideoWidget) == 0x000168, "Member 'UPictureInPictureMediaController::VideoWidget' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, VideoWidgetConfig) == 0x000170, "Member 'UPictureInPictureMediaController::VideoWidgetConfig' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, ThumbnailImageNext) == 0x0001B8, "Member 'UPictureInPictureMediaController::ThumbnailImageNext' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, ThumbnailImagePrevious) == 0x0001C0, "Member 'UPictureInPictureMediaController::ThumbnailImagePrevious' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, bSupportsMultipleSources) == 0x0001C8, "Member 'UPictureInPictureMediaController::bSupportsMultipleSources' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, CurrentSource) == 0x0001D0, "Member 'UPictureInPictureMediaController::CurrentSource' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, Sources) == 0x0002F8, "Member 'UPictureInPictureMediaController::Sources' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, ValidSources) == 0x000308, "Member 'UPictureInPictureMediaController::ValidSources' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, LocalOptions) == 0x000318, "Member 'UPictureInPictureMediaController::LocalOptions' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, BaseErrorEvent) == 0x000348, "Member 'UPictureInPictureMediaController::BaseErrorEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, BaseEnabledEvent) == 0x000358, "Member 'UPictureInPictureMediaController::BaseEnabledEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, SourcesChangedEvent) == 0x000368, "Member 'UPictureInPictureMediaController::SourcesChangedEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, SourceSelectedEvent) == 0x000378, "Member 'UPictureInPictureMediaController::SourceSelectedEvent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, InstanceActionData) == 0x000390, "Member 'UPictureInPictureMediaController::InstanceActionData' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, AnalyticsManager) == 0x0003A0, "Member 'UPictureInPictureMediaController::AnalyticsManager' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, ActiveStartTime) == 0x0003A8, "Member 'UPictureInPictureMediaController::ActiveStartTime' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, PausedStartTime) == 0x0003B0, "Member 'UPictureInPictureMediaController::PausedStartTime' has a wrong offset!");
static_assert(offsetof(UPictureInPictureMediaController, SuspendedInfo) == 0x0003C0, "Member 'UPictureInPictureMediaController::SuspendedInfo' has a wrong offset!");

class UPictureInPictureMediaPlayerCtrl final : public UFortMediaPlayerCtrl
{
public:
	uint8                                         Pad_108[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureMediaPlayerCtrl">();
	}
	static class UPictureInPictureMediaPlayerCtrl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureMediaPlayerCtrl>();
	}
};
static_assert(alignof(UPictureInPictureMediaPlayerCtrl) == 0x000008, "Wrong alignment on UPictureInPictureMediaPlayerCtrl");
static_assert(sizeof(UPictureInPictureMediaPlayerCtrl) == 0x000118, "Wrong size on UPictureInPictureMediaPlayerCtrl");

class UPictureInPicturePlayer final : public UObject
{
public:
	uint8                                         Pad_28[0xE0];
	struct FPIPVideoPlayerAssetConfig             AssetConfig;
	class UPictureInPictureMediaPlayerCtrl*       MediaController;
	uint8                                         Pad_198[0x50];
	class USoundSubmixBase*                       DefaultSubmix;
	class USoundSubmixBase*                       LicensedSubmix;
	uint8                                         Pad_1F8[0x38];

public:
	void FlushPlayerAssetConfig();
	void HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings);
	bool IsAssetConfigSet();
	bool SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig);
	void StreamedVideoOnUrlFailure(const class FString& URL);
	void StreamedVideoOnUrlSuccess(const class FString& URL);
	void UpdateStreamingPlayerSize(const struct FVector2D& InVector);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPicturePlayer">();
	}
	static class UPictureInPicturePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPicturePlayer>();
	}
};
static_assert(alignof(UPictureInPicturePlayer) == 0x000008, "Wrong alignment on UPictureInPicturePlayer");
static_assert(sizeof(UPictureInPicturePlayer) == 0x000230, "Wrong size on UPictureInPicturePlayer");
static_assert(offsetof(UPictureInPicturePlayer, AssetConfig) == 0x000108, "Member 'UPictureInPicturePlayer::AssetConfig' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePlayer, MediaController) == 0x000190, "Member 'UPictureInPicturePlayer::MediaController' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePlayer, DefaultSubmix) == 0x0001E8, "Member 'UPictureInPicturePlayer::DefaultSubmix' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePlayer, LicensedSubmix) == 0x0001F0, "Member 'UPictureInPicturePlayer::LicensedSubmix' has a wrong offset!");

class UPictureInPicturePartnerControls final : public UObject
{
public:
	bool                                          bRequiresAgeOfConsent;
	uint8                                         Pad_29[0x7];
	class UPictureInPictureClient*                ClientObject;
	class UPictureInPictureMediaController*       MediaController;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPicturePartnerControls">();
	}
	static class UPictureInPicturePartnerControls* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPicturePartnerControls>();
	}
};
static_assert(alignof(UPictureInPicturePartnerControls) == 0x000008, "Wrong alignment on UPictureInPicturePartnerControls");
static_assert(sizeof(UPictureInPicturePartnerControls) == 0x000040, "Wrong size on UPictureInPicturePartnerControls");
static_assert(offsetof(UPictureInPicturePartnerControls, bRequiresAgeOfConsent) == 0x000028, "Member 'UPictureInPicturePartnerControls::bRequiresAgeOfConsent' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerControls, ClientObject) == 0x000030, "Member 'UPictureInPicturePartnerControls::ClientObject' has a wrong offset!");
static_assert(offsetof(UPictureInPicturePartnerControls, MediaController) == 0x000038, "Member 'UPictureInPicturePartnerControls::MediaController' has a wrong offset!");

class UPictureInPictureSubsystem final : public UEngineSubsystem
{
public:
	TArray<class UPictureInPicturePartnerDataAsset*> AvailableClientsList;
	TMulticastInlineDelegate<void()>              OnPartnerUpdateComplete;
	TMulticastInlineDelegate<void(class UPictureInPicturePartnerControls* NewPartner)> OnPartnerChanged;
	bool                                          bPartnerListUpdated;
	bool                                          bIsSuspended;
	bool                                          bCMSInitialized;
	uint8                                         Pad_63[0x5];
	class FString                                 CurrentPlatform;
	uint8                                         Pad_78[0x10];
	TMap<class FString, class UPictureInPicturePartnerControls*> SupportedPartnerControls;
	class FString                                 CurrentPartnerName;
	class FString                                 CurrentContinent;
	class FString                                 CurrentCountry;
	TArray<class FString>                         CurrentSubdivisions;
	class UFortMediaCMSEventsComponent*           CMSEventsComponent;

public:
	void EnableFullScreenPiPOption(const bool bEnable);
	bool GetAutoEnableSetting();
	class UPictureInPictureClient* GetCurrentPartnerClient();
	class UPictureInPictureMediaController* GetCurrentPartnerController();
	class UPictureInPicturePartnerControls* GetCurrentPartnerControls();
	class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();
	void GetLastUsedPartner(class FString* OutPartnerName);
	void GetLastUsedSource(class FString* OutPartnerSourceName);
	class UPictureInPictureClient* GetPartnerClient(const class FString& PartnerName);
	class UPictureInPictureMediaController* GetPartnerController(const class FString& PartnerName);
	class UPictureInPicturePartnerControls* GetPartnerControls(const class FString& PartnerName);
	class UPictureInPicturePartnerDataAsset* GetPartnerItem(const class FString& PartnerName);
	TArray<class UPictureInPicturePartnerDataAsset*> GetPartnerItemList();
	void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);
	void HandleMediaSourceRequest();
	bool IsPartnerListUpdated();
	void OnCMSEventInvalid(const class UMediaCMSEvent* InvalidEvent);
	void OnCMSEventValid(const class UMediaCMSEvent* ValidEvent);
	void OnCurrentPartnerSourceSelected(const struct FPiPPartnerSource& SelectedSource);
	void ResumeCurrentMediaController();
	void ShutdownAllPartners();
	void StoreAutoEnableSetting(bool InUserEnabled);
	void StoreLastUsedPartner(const class FString& InPartnerName);
	void StoreLastUsedSource(const class FString& InPartnerSourceName);
	void SuspendCurrentMediaController();
	void ToggleFullScreenPiP();
	void UpdatePartnerItemList(class UObject* InWorldContext, bool bForce);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PictureInPictureSubsystem">();
	}
	static class UPictureInPictureSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPictureInPictureSubsystem>();
	}
};
static_assert(alignof(UPictureInPictureSubsystem) == 0x000008, "Wrong alignment on UPictureInPictureSubsystem");
static_assert(sizeof(UPictureInPictureSubsystem) == 0x000120, "Wrong size on UPictureInPictureSubsystem");
static_assert(offsetof(UPictureInPictureSubsystem, AvailableClientsList) == 0x000030, "Member 'UPictureInPictureSubsystem::AvailableClientsList' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, OnPartnerUpdateComplete) == 0x000040, "Member 'UPictureInPictureSubsystem::OnPartnerUpdateComplete' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, OnPartnerChanged) == 0x000050, "Member 'UPictureInPictureSubsystem::OnPartnerChanged' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, bPartnerListUpdated) == 0x000060, "Member 'UPictureInPictureSubsystem::bPartnerListUpdated' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, bIsSuspended) == 0x000061, "Member 'UPictureInPictureSubsystem::bIsSuspended' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, bCMSInitialized) == 0x000062, "Member 'UPictureInPictureSubsystem::bCMSInitialized' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, CurrentPlatform) == 0x000068, "Member 'UPictureInPictureSubsystem::CurrentPlatform' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, SupportedPartnerControls) == 0x000088, "Member 'UPictureInPictureSubsystem::SupportedPartnerControls' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, CurrentPartnerName) == 0x0000D8, "Member 'UPictureInPictureSubsystem::CurrentPartnerName' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, CurrentContinent) == 0x0000E8, "Member 'UPictureInPictureSubsystem::CurrentContinent' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, CurrentCountry) == 0x0000F8, "Member 'UPictureInPictureSubsystem::CurrentCountry' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, CurrentSubdivisions) == 0x000108, "Member 'UPictureInPictureSubsystem::CurrentSubdivisions' has a wrong offset!");
static_assert(offsetof(UPictureInPictureSubsystem, CMSEventsComponent) == 0x000118, "Member 'UPictureInPictureSubsystem::CMSEventsComponent' has a wrong offset!");

}
