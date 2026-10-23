#pragma once

#include "Basic.hpp"

#include "EngineSettings_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UConsoleSettings final : public UObject
{
public:
	int32                                         MaxScrollbackSize;
	uint8                                         Pad_2C[0x4];
	TArray<struct FAutoCompleteCommand>           ManualAutoCompleteList;
	TArray<class FString>                         AutoCompleteMapPaths;
	float                                         BackgroundOpacityPercentage;
	bool                                          bOrderTopToBottom;
	bool                                          bDisplayHelpInAutoComplete;
	uint8                                         Pad_56[0x2];
	struct FColor                                 InputColor;
	struct FColor                                 HistoryColor;
	struct FColor                                 AutoCompleteCommandColor;
	struct FColor                                 AutoCompleteCVarColor;
	struct FColor                                 AutoCompleteFadedColor;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConsoleSettings">();
	}
	static class UConsoleSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleSettings>();
	}
};
static_assert(alignof(UConsoleSettings) == 0x000008, "Wrong alignment on UConsoleSettings");
static_assert(sizeof(UConsoleSettings) == 0x000070, "Wrong size on UConsoleSettings");
static_assert(offsetof(UConsoleSettings, MaxScrollbackSize) == 0x000028, "Member 'UConsoleSettings::MaxScrollbackSize' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, ManualAutoCompleteList) == 0x000030, "Member 'UConsoleSettings::ManualAutoCompleteList' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteMapPaths) == 0x000040, "Member 'UConsoleSettings::AutoCompleteMapPaths' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, BackgroundOpacityPercentage) == 0x000050, "Member 'UConsoleSettings::BackgroundOpacityPercentage' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, bOrderTopToBottom) == 0x000054, "Member 'UConsoleSettings::bOrderTopToBottom' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, bDisplayHelpInAutoComplete) == 0x000055, "Member 'UConsoleSettings::bDisplayHelpInAutoComplete' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, InputColor) == 0x000058, "Member 'UConsoleSettings::InputColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, HistoryColor) == 0x00005C, "Member 'UConsoleSettings::HistoryColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteCommandColor) == 0x000060, "Member 'UConsoleSettings::AutoCompleteCommandColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteCVarColor) == 0x000064, "Member 'UConsoleSettings::AutoCompleteCVarColor' has a wrong offset!");
static_assert(offsetof(UConsoleSettings, AutoCompleteFadedColor) == 0x000068, "Member 'UConsoleSettings::AutoCompleteFadedColor' has a wrong offset!");

class UGameMapsSettings final : public UObject
{
public:
	class FString                                 LocalMapOptions;
	struct FSoftObjectPath                        TransitionMap;
	bool                                          bUseSplitscreen;
	ETwoPlayerSplitScreenType                     TwoPlayerSplitscreenLayout;
	EThreePlayerSplitScreenType                   ThreePlayerSplitscreenLayout;
	EFourPlayerSplitScreenType                    FourPlayerSplitscreenLayout;
	bool                                          bOffsetPlayerGamepadIds;
	uint8                                         Pad_55[0x3];
	struct FSoftClassPath                         GameInstanceClass;
	struct FSoftObjectPath                        GameDefaultMap;
	struct FSoftObjectPath                        ServerDefaultMap;
	struct FSoftClassPath                         GlobalDefaultGameMode;
	struct FSoftClassPath                         GlobalDefaultServerGameMode;
	TArray<struct FGameModeName>                  GameModeMapPrefixes;
	TArray<struct FGameModeName>                  GameModeClassAliases;

public:
	static class UGameMapsSettings* GetGameMapsSettings();

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);

	bool GetSkipAssigningGamepadToPlayer1() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameMapsSettings">();
	}
	static class UGameMapsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameMapsSettings>();
	}
};
static_assert(alignof(UGameMapsSettings) == 0x000008, "Wrong alignment on UGameMapsSettings");
static_assert(sizeof(UGameMapsSettings) == 0x0000F0, "Wrong size on UGameMapsSettings");
static_assert(offsetof(UGameMapsSettings, LocalMapOptions) == 0x000028, "Member 'UGameMapsSettings::LocalMapOptions' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, TransitionMap) == 0x000038, "Member 'UGameMapsSettings::TransitionMap' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, bUseSplitscreen) == 0x000050, "Member 'UGameMapsSettings::bUseSplitscreen' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout) == 0x000051, "Member 'UGameMapsSettings::TwoPlayerSplitscreenLayout' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout) == 0x000052, "Member 'UGameMapsSettings::ThreePlayerSplitscreenLayout' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, FourPlayerSplitscreenLayout) == 0x000053, "Member 'UGameMapsSettings::FourPlayerSplitscreenLayout' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, bOffsetPlayerGamepadIds) == 0x000054, "Member 'UGameMapsSettings::bOffsetPlayerGamepadIds' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameInstanceClass) == 0x000058, "Member 'UGameMapsSettings::GameInstanceClass' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameDefaultMap) == 0x000070, "Member 'UGameMapsSettings::GameDefaultMap' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, ServerDefaultMap) == 0x000088, "Member 'UGameMapsSettings::ServerDefaultMap' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GlobalDefaultGameMode) == 0x0000A0, "Member 'UGameMapsSettings::GlobalDefaultGameMode' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GlobalDefaultServerGameMode) == 0x0000B8, "Member 'UGameMapsSettings::GlobalDefaultServerGameMode' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameModeMapPrefixes) == 0x0000D0, "Member 'UGameMapsSettings::GameModeMapPrefixes' has a wrong offset!");
static_assert(offsetof(UGameMapsSettings, GameModeClassAliases) == 0x0000E0, "Member 'UGameMapsSettings::GameModeClassAliases' has a wrong offset!");

class UGameNetworkManagerSettings final : public UObject
{
public:
	int32                                         MinDynamicBandwidth;
	int32                                         MaxDynamicBandwidth;
	int32                                         TotalNetBandwidth;
	int32                                         BadPingThreshold;
	uint8                                         bIsStandbyCheckingEnabled : 1;
	uint8                                         Pad_39[0x3];
	float                                         StandbyRxCheatTime;
	float                                         StandbyTxCheatTime;
	float                                         PercentMissingForRxStandby;
	float                                         PercentMissingForTxStandby;
	float                                         PercentForBadPing;
	float                                         JoinInProgressStandbyWaitTime;
	uint8                                         Pad_54[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameNetworkManagerSettings">();
	}
	static class UGameNetworkManagerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameNetworkManagerSettings>();
	}
};
static_assert(alignof(UGameNetworkManagerSettings) == 0x000008, "Wrong alignment on UGameNetworkManagerSettings");
static_assert(sizeof(UGameNetworkManagerSettings) == 0x000058, "Wrong size on UGameNetworkManagerSettings");
static_assert(offsetof(UGameNetworkManagerSettings, MinDynamicBandwidth) == 0x000028, "Member 'UGameNetworkManagerSettings::MinDynamicBandwidth' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, MaxDynamicBandwidth) == 0x00002C, "Member 'UGameNetworkManagerSettings::MaxDynamicBandwidth' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, TotalNetBandwidth) == 0x000030, "Member 'UGameNetworkManagerSettings::TotalNetBandwidth' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, BadPingThreshold) == 0x000034, "Member 'UGameNetworkManagerSettings::BadPingThreshold' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, StandbyRxCheatTime) == 0x00003C, "Member 'UGameNetworkManagerSettings::StandbyRxCheatTime' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, StandbyTxCheatTime) == 0x000040, "Member 'UGameNetworkManagerSettings::StandbyTxCheatTime' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, PercentMissingForRxStandby) == 0x000044, "Member 'UGameNetworkManagerSettings::PercentMissingForRxStandby' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, PercentMissingForTxStandby) == 0x000048, "Member 'UGameNetworkManagerSettings::PercentMissingForTxStandby' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, PercentForBadPing) == 0x00004C, "Member 'UGameNetworkManagerSettings::PercentForBadPing' has a wrong offset!");
static_assert(offsetof(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime) == 0x000050, "Member 'UGameNetworkManagerSettings::JoinInProgressStandbyWaitTime' has a wrong offset!");

class UGameSessionSettings final : public UObject
{
public:
	int32                                         MaxSpectators;
	int32                                         MaxPlayers;
	uint8                                         bRequiresPushToTalk : 1;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameSessionSettings">();
	}
	static class UGameSessionSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameSessionSettings>();
	}
};
static_assert(alignof(UGameSessionSettings) == 0x000008, "Wrong alignment on UGameSessionSettings");
static_assert(sizeof(UGameSessionSettings) == 0x000038, "Wrong size on UGameSessionSettings");
static_assert(offsetof(UGameSessionSettings, MaxSpectators) == 0x000028, "Member 'UGameSessionSettings::MaxSpectators' has a wrong offset!");
static_assert(offsetof(UGameSessionSettings, MaxPlayers) == 0x00002C, "Member 'UGameSessionSettings::MaxPlayers' has a wrong offset!");

class UGeneralEngineSettings final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneralEngineSettings">();
	}
	static class UGeneralEngineSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralEngineSettings>();
	}
};
static_assert(alignof(UGeneralEngineSettings) == 0x000008, "Wrong alignment on UGeneralEngineSettings");
static_assert(sizeof(UGeneralEngineSettings) == 0x000028, "Wrong size on UGeneralEngineSettings");

class UGeneralProjectSettings final : public UObject
{
public:
	class FString                                 CompanyName;
	class FString                                 CompanyDistinguishedName;
	class FString                                 CopyrightNotice;
	class FString                                 Description;
	class FString                                 Homepage;
	class FString                                 LicensingTerms;
	class FString                                 PrivacyPolicy;
	struct FGuid                                  ProjectID;
	class FString                                 ProjectName;
	class FString                                 ProjectVersion;
	class FString                                 SupportContact;
	class FText                                   ProjectDisplayedTitle;
	class FText                                   ProjectDebugTitleInfo;
	bool                                          bShouldWindowPreserveAspectRatio;
	bool                                          bUseBorderlessWindow;
	bool                                          bStartInVR;
	bool                                          bAllowWindowResize;
	bool                                          bAllowClose;
	bool                                          bAllowMaximize;
	bool                                          bAllowMinimize;
	uint8                                         Pad_10F[0x1];
	float                                         EyeOffsetForFakeStereoRenderingDevice;
	float                                         FOVForFakeStereoRenderingDevice;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneralProjectSettings">();
	}
	static class UGeneralProjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralProjectSettings>();
	}
};
static_assert(alignof(UGeneralProjectSettings) == 0x000008, "Wrong alignment on UGeneralProjectSettings");
static_assert(sizeof(UGeneralProjectSettings) == 0x000118, "Wrong size on UGeneralProjectSettings");
static_assert(offsetof(UGeneralProjectSettings, CompanyName) == 0x000028, "Member 'UGeneralProjectSettings::CompanyName' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, CompanyDistinguishedName) == 0x000038, "Member 'UGeneralProjectSettings::CompanyDistinguishedName' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, CopyrightNotice) == 0x000048, "Member 'UGeneralProjectSettings::CopyrightNotice' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, Description) == 0x000058, "Member 'UGeneralProjectSettings::Description' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, Homepage) == 0x000068, "Member 'UGeneralProjectSettings::Homepage' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, LicensingTerms) == 0x000078, "Member 'UGeneralProjectSettings::LicensingTerms' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, PrivacyPolicy) == 0x000088, "Member 'UGeneralProjectSettings::PrivacyPolicy' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectID) == 0x000098, "Member 'UGeneralProjectSettings::ProjectID' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectName) == 0x0000A8, "Member 'UGeneralProjectSettings::ProjectName' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectVersion) == 0x0000B8, "Member 'UGeneralProjectSettings::ProjectVersion' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, SupportContact) == 0x0000C8, "Member 'UGeneralProjectSettings::SupportContact' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectDisplayedTitle) == 0x0000D8, "Member 'UGeneralProjectSettings::ProjectDisplayedTitle' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo) == 0x0000F0, "Member 'UGeneralProjectSettings::ProjectDebugTitleInfo' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bShouldWindowPreserveAspectRatio) == 0x000108, "Member 'UGeneralProjectSettings::bShouldWindowPreserveAspectRatio' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bUseBorderlessWindow) == 0x000109, "Member 'UGeneralProjectSettings::bUseBorderlessWindow' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bStartInVR) == 0x00010A, "Member 'UGeneralProjectSettings::bStartInVR' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowWindowResize) == 0x00010B, "Member 'UGeneralProjectSettings::bAllowWindowResize' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowClose) == 0x00010C, "Member 'UGeneralProjectSettings::bAllowClose' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowMaximize) == 0x00010D, "Member 'UGeneralProjectSettings::bAllowMaximize' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, bAllowMinimize) == 0x00010E, "Member 'UGeneralProjectSettings::bAllowMinimize' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, EyeOffsetForFakeStereoRenderingDevice) == 0x000110, "Member 'UGeneralProjectSettings::EyeOffsetForFakeStereoRenderingDevice' has a wrong offset!");
static_assert(offsetof(UGeneralProjectSettings, FOVForFakeStereoRenderingDevice) == 0x000114, "Member 'UGeneralProjectSettings::FOVForFakeStereoRenderingDevice' has a wrong offset!");

class UHudSettings final : public UObject
{
public:
	uint8                                         bShowHUD : 1;
	uint8                                         Pad_29[0x7];
	TArray<class FName>                           DebugDisplay;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HudSettings">();
	}
	static class UHudSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudSettings>();
	}
};
static_assert(alignof(UHudSettings) == 0x000008, "Wrong alignment on UHudSettings");
static_assert(sizeof(UHudSettings) == 0x000040, "Wrong size on UHudSettings");
static_assert(offsetof(UHudSettings, DebugDisplay) == 0x000030, "Member 'UHudSettings::DebugDisplay' has a wrong offset!");

}
