#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EExternalAccountType : uint8
{
	None                                     = 0,
	Facebook                                 = 1,
	Google                                   = 2,
	Epic_PSN                                 = 3,
	Epic_XBL                                 = 4,
	Epic_Erebus                              = 5,
	Epic_Facebook                            = 6,
	Epic_Google                              = 7,
	Epic_Portal                              = 8,
	Epic_Portal_Kairos                       = 9,
	EExternalAccountType_MAX                 = 10,
};

enum class EConsoleAuthLinkState : uint8
{
	NotOnConsole                             = 0,
	ConsoleNotLoggedIn                       = 1,
	EpicNotLoggedIn                          = 2,
	ThisEpicAccountLinked                    = 3,
	OtherEpicAccountLinked                   = 4,
	NoEpicAccountLinked                      = 5,
	PrimaryIdNotLinked                       = 6,
	SecondaryIdNotLinked                     = 7,
	EConsoleAuthLinkState_MAX                = 8,
};

enum class ELoginResult : uint8
{
	NotStarted                               = 0,
	Pending                                  = 1,
	Success                                  = 2,
	Console_LoginFailed                      = 3,
	Console_AuthFailed                       = 4,
	Console_MissingAuthAssociation           = 5,
	Console_DuplicateAuthAssociation         = 6,
	Console_AddedAuthAssociation             = 7,
	Console_AuthAssociationFailure           = 8,
	Console_NotEntitled                      = 9,
	Console_EntitlementCheckFailed           = 10,
	Console_PrivilegeCheck                   = 11,
	Console_PatchOrUpdateRequired            = 12,
	AuthFailed                               = 13,
	AuthFailed_RefreshInvalid                = 14,
	AuthFailed_InvalidMFA                    = 15,
	AuthFailed_RequiresMFA                   = 16,
	AuthFailed_AgeVerificationIncomplete     = 17,
	AuthFailed_LoginLockout                  = 18,
	AuthFailed_InvalidCredentials            = 19,
	AuthFailed_CorrectiveActionRequired      = 20,
	AuthParentalLock                         = 21,
	PlatformNotAllowed                       = 22,
	NotEntitled                              = 23,
	Banned                                   = 24,
	EULACheckFailed                          = 25,
	WaitingRoomFailed                        = 26,
	ServiceUnavailable                       = 27,
	GenericError                             = 28,
	RegisterSecondaryPlayerInPrimaryPartyFailed = 29,
	RejoinCheckFailure                       = 30,
	ConnectionFailed                         = 31,
	NetworkConnectionUnavailable             = 32,
	AlreadyLoggingIn                         = 33,
	ExternalAuth_AddedAuthAssociation        = 34,
	ExternalAuth_ConnectionTimeout           = 35,
	ExternalAuth_AuthFailure                 = 36,
	ExternalAuth_AssociationFailure          = 37,
	ExternalAuth_MissingAuthAssociation      = 38,
	ExternalAuth_Canceled                    = 39,
	FailedToCreateParty                      = 40,
	ProfileQueryFailed                       = 41,
	QueryKeychainFailed                      = 42,
	ClientSettingsDownloadFailed             = 43,
	SupervisedSettingsDownloadFailed         = 44,
	PinGrantFailure                          = 45,
	PinGrantTimeout                          = 46,
	PinGrantCanceled                         = 47,
	LoginStepTimeout                         = 48,
	ELoginResult_MAX                         = 49,
};

enum class ECreateAccountResult : uint8
{
	NotStarted                               = 0,
	Pending                                  = 1,
	Success                                  = 2,
	Console_LoginFailed                      = 3,
	Console_DuplicateAuthAssociation         = 4,
	DuplicateAccount                         = 5,
	GenericError                             = 6,
	ECreateAccountResult_MAX                 = 7,
};

struct FWebEnvUrl final
{
public:
	class FString                                 URL;
	class FString                                 RedirectUrl;
	class FString                                 Environment;
};
static_assert(alignof(FWebEnvUrl) == 0x000008, "Wrong alignment on FWebEnvUrl");
static_assert(sizeof(FWebEnvUrl) == 0x000030, "Wrong size on FWebEnvUrl");
static_assert(offsetof(FWebEnvUrl, URL) == 0x000000, "Member 'FWebEnvUrl::URL' has a wrong offset!");
static_assert(offsetof(FWebEnvUrl, RedirectUrl) == 0x000010, "Member 'FWebEnvUrl::RedirectUrl' has a wrong offset!");
static_assert(offsetof(FWebEnvUrl, Environment) == 0x000020, "Member 'FWebEnvUrl::Environment' has a wrong offset!");

struct FExternalAccountServiceConfig final
{
public:
	EExternalAccountType                          Type;
	uint8                                         Pad_1[0x3];
	class FName                                   ExternalServiceName;
};
static_assert(alignof(FExternalAccountServiceConfig) == 0x000004, "Wrong alignment on FExternalAccountServiceConfig");
static_assert(sizeof(FExternalAccountServiceConfig) == 0x000008, "Wrong size on FExternalAccountServiceConfig");
static_assert(offsetof(FExternalAccountServiceConfig, Type) == 0x000000, "Member 'FExternalAccountServiceConfig::Type' has a wrong offset!");
static_assert(offsetof(FExternalAccountServiceConfig, ExternalServiceName) == 0x000004, "Member 'FExternalAccountServiceConfig::ExternalServiceName' has a wrong offset!");

struct FExchangeAccessParams final
{
public:
	class FString                                 EntitlementId;
	class FString                                 ReceiptId;
	class FString                                 VendorReceipt;
	class FString                                 AppStore;
};
static_assert(alignof(FExchangeAccessParams) == 0x000008, "Wrong alignment on FExchangeAccessParams");
static_assert(sizeof(FExchangeAccessParams) == 0x000040, "Wrong size on FExchangeAccessParams");
static_assert(offsetof(FExchangeAccessParams, EntitlementId) == 0x000000, "Member 'FExchangeAccessParams::EntitlementId' has a wrong offset!");
static_assert(offsetof(FExchangeAccessParams, ReceiptId) == 0x000010, "Member 'FExchangeAccessParams::ReceiptId' has a wrong offset!");
static_assert(offsetof(FExchangeAccessParams, VendorReceipt) == 0x000020, "Member 'FExchangeAccessParams::VendorReceipt' has a wrong offset!");
static_assert(offsetof(FExchangeAccessParams, AppStore) == 0x000030, "Member 'FExchangeAccessParams::AppStore' has a wrong offset!");

struct FGiftMessage final
{
public:
	class FString                                 GiftCode;
	class FString                                 SenderName;
	uint8                                         Pad_20[0x10];
};
static_assert(alignof(FGiftMessage) == 0x000008, "Wrong alignment on FGiftMessage");
static_assert(sizeof(FGiftMessage) == 0x000030, "Wrong size on FGiftMessage");
static_assert(offsetof(FGiftMessage, GiftCode) == 0x000000, "Member 'FGiftMessage::GiftCode' has a wrong offset!");
static_assert(offsetof(FGiftMessage, SenderName) == 0x000010, "Member 'FGiftMessage::SenderName' has a wrong offset!");

struct FOnlineAccountTexts_FailedLoginConsole final
{
public:
	class FText                                   AgeRestriction;
	class FText                                   Generic;
	class FText                                   MissingAuthAssociation;
	class FText                                   NeedPremiumAccount;
	class FText                                   OnlinePlayRestriction;
	class FText                                   PatchAvailable;
	class FText                                   PatchAvailableInstruction_Default;
	class FText                                   PatchAvailableInstruction_Xbox;
	class FText                                   PleaseSignIn;
	class FText                                   SystemUpdateAvailable;
	class FText                                   UI;
	class FText                                   UnableToComplete;
	class FText                                   UnableToSignIn;
	class FText                                   UnableToStartPrivCheck;
	class FText                                   UnexpectedError;
};
static_assert(alignof(FOnlineAccountTexts_FailedLoginConsole) == 0x000008, "Wrong alignment on FOnlineAccountTexts_FailedLoginConsole");
static_assert(sizeof(FOnlineAccountTexts_FailedLoginConsole) == 0x000168, "Wrong size on FOnlineAccountTexts_FailedLoginConsole");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, AgeRestriction) == 0x000000, "Member 'FOnlineAccountTexts_FailedLoginConsole::AgeRestriction' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, Generic) == 0x000018, "Member 'FOnlineAccountTexts_FailedLoginConsole::Generic' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, MissingAuthAssociation) == 0x000030, "Member 'FOnlineAccountTexts_FailedLoginConsole::MissingAuthAssociation' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, NeedPremiumAccount) == 0x000048, "Member 'FOnlineAccountTexts_FailedLoginConsole::NeedPremiumAccount' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, OnlinePlayRestriction) == 0x000060, "Member 'FOnlineAccountTexts_FailedLoginConsole::OnlinePlayRestriction' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailable) == 0x000078, "Member 'FOnlineAccountTexts_FailedLoginConsole::PatchAvailable' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailableInstruction_Default) == 0x000090, "Member 'FOnlineAccountTexts_FailedLoginConsole::PatchAvailableInstruction_Default' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailableInstruction_Xbox) == 0x0000A8, "Member 'FOnlineAccountTexts_FailedLoginConsole::PatchAvailableInstruction_Xbox' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PleaseSignIn) == 0x0000C0, "Member 'FOnlineAccountTexts_FailedLoginConsole::PleaseSignIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, SystemUpdateAvailable) == 0x0000D8, "Member 'FOnlineAccountTexts_FailedLoginConsole::SystemUpdateAvailable' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UI) == 0x0000F0, "Member 'FOnlineAccountTexts_FailedLoginConsole::UI' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToComplete) == 0x000108, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnableToComplete' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToSignIn) == 0x000120, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnableToSignIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToStartPrivCheck) == 0x000138, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnableToStartPrivCheck' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnexpectedError) == 0x000150, "Member 'FOnlineAccountTexts_FailedLoginConsole::UnexpectedError' has a wrong offset!");

struct FOnlineAccountTexts final
{
public:
	class FText                                   AllGiftCodesUsed;
	class FText                                   AssociateConsoleAuth;
	class FText                                   AutoLoginFailed;
	class FText                                   AutoLoginFailedMobile;
	class FText                                   BannedFromGame;
	class FText                                   CheckEntitledToPlay;
	class FText                                   CheckingRejoin;
	class FText                                   CheckServiceAvailability;
	class FText                                   ConsolePrivileges;
	class FText                                   CreateAccountCompleted;
	class FText                                   CreateAccountFailure;
	class FText                                   CreateHeadless;
	class FText                                   DoQosPingTests;
	class FText                                   DowntimeMinutesWarningText;
	class FText                                   DowntimeSecondsWarningText;
	class FText                                   DuplicateAuthAssociaton;
	class FText                                   EulaCheck;
	class FText                                   ExchangeConsoleGiftsForAccess;
	class FText                                   FailedAccountCreate;
	class FText                                   FailedEulaCheck_EulaAcceptanceFailed;
	class FText                                   FailedEulaCheck_MustAcceptEula;
	class FText                                   FailedLoginCredentialsMsg;
	class FText                                   FailedLoginAgeVerificationIncomplete;
	class FText                                   FailedLoginParentalLock;
	class FText                                   FailedLoginNoRealId;
	class FText                                   FailedLoginLockoutMsg;
	class FText                                   FailedLoginRequiresMFA;
	class FText                                   FailedLoginRequiresAuthAppMFA;
	class FText                                   FailedInvalidMFA;
	class FText                                   FailedLoginRequiresCorrectiveAction;
	class FText                                   FailedLoginMsg;
	class FText                                   FailedLoginMsg_InvalidRefreshToken;
	class FText                                   FailedLoginTencent_UnableToSignIn;
	class FText                                   FailedLoginTencent_NotSignedInToWeGame;
	class FText                                   FailedLoginTencent_FailedToInitializeWeGame;
	class FText                                   FailedLoginTencent_WeGameSystemOffline;
	class FText                                   Tencent_ExitByAntiAddiction;
	class FText                                   FailedStartLogin;
	class FText                                   FounderChatExitedText;
	class FText                                   FounderChatJoinedText;
	class FText                                   GameDisplayName;
	class FText                                   GeneralLoginFailure;
	class FText                                   GlobalChatExitedText;
	class FText                                   GlobalChatJoinedText;
	class FText                                   HeadlessAccountFailed;
	class FText                                   InMatchShutdownTimeWarningText;
	class FText                                   InvalidUser;
	class FText                                   LoggedOutofMCP;
	class FText                                   DisconnectedFromMCP;
	class FText                                   LoggedOutReturnedToTitle;
	class FText                                   LoggedOutSwitchedProfile;
	class FText                                   LoggingIn;
	class FText                                   LoggingInConsoleAuth;
	class FText                                   LoggingOut;
	class FText                                   LoginConsole;
	class FText                                   LoginFailure;
	class FText                                   Logout_Unlink;
	class FText                                   LogoutCompleted;
	class FText                                   LostConnection;
	class FText                                   LoginStepTimeout;
	class FText                                   MCPTimeout;
	class FText                                   LightswitchCheckNetworkFailureMsg;
	class FText                                   NetworkConnectionUnavailable;
	class FText                                   NoPlayEntitlement;
	class FText                                   NoServerAccess;
	class FText                                   PlayAccessRevoked;
	class FText                                   PremiumAccountName_Default;
	class FText                                   PremiumAccountName_Sony;
	class FText                                   PremiumAccountName_Switch;
	class FText                                   PremiumAccountName_XboxOne;
	class FText                                   RedeemOfflinePurchases;
	class FText                                   ServiceDowntime;
	class FText                                   SignInCompleting;
	class FText                                   SignIntoConsoleServices;
	class FText                                   TokenExpired;
	class FText                                   UnableToConnect;
	class FText                                   UnableToJoinWaitingRoomLoginQueue;
	class FText                                   UnexpectedConsoleAuthFailure;
	class FText                                   UnlinkConsoleFailed;
	class FText                                   UserLoginFailed;
	class FText                                   WaitingRoom;
	class FText                                   WaitingRoomError;
	class FText                                   WaitingRoomFailure;
	class FText                                   WaitingRoomWaiting;
	struct FOnlineAccountTexts_FailedLoginConsole FailedLoginConsole;
	class FText                                   LoggingInExternalAuth;
	class FText                                   CreateDeviceAuth;
	class FText                                   ExtAuthCanceled;
	class FText                                   ExtAuthFailure;
	class FText                                   ExtAuthAssociationFailure;
	class FText                                   ExtAuthTimeout;
	class FText                                   ExtAuthMissingAuthAssociation;
	class FText                                   UnableToQueryReceipts;
};
static_assert(alignof(FOnlineAccountTexts) == 0x000008, "Wrong alignment on FOnlineAccountTexts");
static_assert(sizeof(FOnlineAccountTexts) == 0x000A08, "Wrong size on FOnlineAccountTexts");
static_assert(offsetof(FOnlineAccountTexts, AllGiftCodesUsed) == 0x000000, "Member 'FOnlineAccountTexts::AllGiftCodesUsed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, AssociateConsoleAuth) == 0x000018, "Member 'FOnlineAccountTexts::AssociateConsoleAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, AutoLoginFailed) == 0x000030, "Member 'FOnlineAccountTexts::AutoLoginFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, AutoLoginFailedMobile) == 0x000048, "Member 'FOnlineAccountTexts::AutoLoginFailedMobile' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, BannedFromGame) == 0x000060, "Member 'FOnlineAccountTexts::BannedFromGame' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CheckEntitledToPlay) == 0x000078, "Member 'FOnlineAccountTexts::CheckEntitledToPlay' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CheckingRejoin) == 0x000090, "Member 'FOnlineAccountTexts::CheckingRejoin' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CheckServiceAvailability) == 0x0000A8, "Member 'FOnlineAccountTexts::CheckServiceAvailability' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ConsolePrivileges) == 0x0000C0, "Member 'FOnlineAccountTexts::ConsolePrivileges' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountCompleted) == 0x0000D8, "Member 'FOnlineAccountTexts::CreateAccountCompleted' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountFailure) == 0x0000F0, "Member 'FOnlineAccountTexts::CreateAccountFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateHeadless) == 0x000108, "Member 'FOnlineAccountTexts::CreateHeadless' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DoQosPingTests) == 0x000120, "Member 'FOnlineAccountTexts::DoQosPingTests' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DowntimeMinutesWarningText) == 0x000138, "Member 'FOnlineAccountTexts::DowntimeMinutesWarningText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DowntimeSecondsWarningText) == 0x000150, "Member 'FOnlineAccountTexts::DowntimeSecondsWarningText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DuplicateAuthAssociaton) == 0x000168, "Member 'FOnlineAccountTexts::DuplicateAuthAssociaton' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, EulaCheck) == 0x000180, "Member 'FOnlineAccountTexts::EulaCheck' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExchangeConsoleGiftsForAccess) == 0x000198, "Member 'FOnlineAccountTexts::ExchangeConsoleGiftsForAccess' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedAccountCreate) == 0x0001B0, "Member 'FOnlineAccountTexts::FailedAccountCreate' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedEulaCheck_EulaAcceptanceFailed) == 0x0001C8, "Member 'FOnlineAccountTexts::FailedEulaCheck_EulaAcceptanceFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedEulaCheck_MustAcceptEula) == 0x0001E0, "Member 'FOnlineAccountTexts::FailedEulaCheck_MustAcceptEula' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginCredentialsMsg) == 0x0001F8, "Member 'FOnlineAccountTexts::FailedLoginCredentialsMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginAgeVerificationIncomplete) == 0x000210, "Member 'FOnlineAccountTexts::FailedLoginAgeVerificationIncomplete' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginParentalLock) == 0x000228, "Member 'FOnlineAccountTexts::FailedLoginParentalLock' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginNoRealId) == 0x000240, "Member 'FOnlineAccountTexts::FailedLoginNoRealId' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginLockoutMsg) == 0x000258, "Member 'FOnlineAccountTexts::FailedLoginLockoutMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginRequiresMFA) == 0x000270, "Member 'FOnlineAccountTexts::FailedLoginRequiresMFA' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginRequiresAuthAppMFA) == 0x000288, "Member 'FOnlineAccountTexts::FailedLoginRequiresAuthAppMFA' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedInvalidMFA) == 0x0002A0, "Member 'FOnlineAccountTexts::FailedInvalidMFA' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginRequiresCorrectiveAction) == 0x0002B8, "Member 'FOnlineAccountTexts::FailedLoginRequiresCorrectiveAction' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginMsg) == 0x0002D0, "Member 'FOnlineAccountTexts::FailedLoginMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginMsg_InvalidRefreshToken) == 0x0002E8, "Member 'FOnlineAccountTexts::FailedLoginMsg_InvalidRefreshToken' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_UnableToSignIn) == 0x000300, "Member 'FOnlineAccountTexts::FailedLoginTencent_UnableToSignIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_NotSignedInToWeGame) == 0x000318, "Member 'FOnlineAccountTexts::FailedLoginTencent_NotSignedInToWeGame' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_FailedToInitializeWeGame) == 0x000330, "Member 'FOnlineAccountTexts::FailedLoginTencent_FailedToInitializeWeGame' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginTencent_WeGameSystemOffline) == 0x000348, "Member 'FOnlineAccountTexts::FailedLoginTencent_WeGameSystemOffline' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, Tencent_ExitByAntiAddiction) == 0x000360, "Member 'FOnlineAccountTexts::Tencent_ExitByAntiAddiction' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedStartLogin) == 0x000378, "Member 'FOnlineAccountTexts::FailedStartLogin' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FounderChatExitedText) == 0x000390, "Member 'FOnlineAccountTexts::FounderChatExitedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FounderChatJoinedText) == 0x0003A8, "Member 'FOnlineAccountTexts::FounderChatJoinedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GameDisplayName) == 0x0003C0, "Member 'FOnlineAccountTexts::GameDisplayName' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GeneralLoginFailure) == 0x0003D8, "Member 'FOnlineAccountTexts::GeneralLoginFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GlobalChatExitedText) == 0x0003F0, "Member 'FOnlineAccountTexts::GlobalChatExitedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, GlobalChatJoinedText) == 0x000408, "Member 'FOnlineAccountTexts::GlobalChatJoinedText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, HeadlessAccountFailed) == 0x000420, "Member 'FOnlineAccountTexts::HeadlessAccountFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, InMatchShutdownTimeWarningText) == 0x000438, "Member 'FOnlineAccountTexts::InMatchShutdownTimeWarningText' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, InvalidUser) == 0x000450, "Member 'FOnlineAccountTexts::InvalidUser' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutofMCP) == 0x000468, "Member 'FOnlineAccountTexts::LoggedOutofMCP' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, DisconnectedFromMCP) == 0x000480, "Member 'FOnlineAccountTexts::DisconnectedFromMCP' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutReturnedToTitle) == 0x000498, "Member 'FOnlineAccountTexts::LoggedOutReturnedToTitle' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutSwitchedProfile) == 0x0004B0, "Member 'FOnlineAccountTexts::LoggedOutSwitchedProfile' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingIn) == 0x0004C8, "Member 'FOnlineAccountTexts::LoggingIn' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingInConsoleAuth) == 0x0004E0, "Member 'FOnlineAccountTexts::LoggingInConsoleAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingOut) == 0x0004F8, "Member 'FOnlineAccountTexts::LoggingOut' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoginConsole) == 0x000510, "Member 'FOnlineAccountTexts::LoginConsole' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoginFailure) == 0x000528, "Member 'FOnlineAccountTexts::LoginFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, Logout_Unlink) == 0x000540, "Member 'FOnlineAccountTexts::Logout_Unlink' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LogoutCompleted) == 0x000558, "Member 'FOnlineAccountTexts::LogoutCompleted' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LostConnection) == 0x000570, "Member 'FOnlineAccountTexts::LostConnection' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoginStepTimeout) == 0x000588, "Member 'FOnlineAccountTexts::LoginStepTimeout' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, MCPTimeout) == 0x0005A0, "Member 'FOnlineAccountTexts::MCPTimeout' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LightswitchCheckNetworkFailureMsg) == 0x0005B8, "Member 'FOnlineAccountTexts::LightswitchCheckNetworkFailureMsg' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, NetworkConnectionUnavailable) == 0x0005D0, "Member 'FOnlineAccountTexts::NetworkConnectionUnavailable' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, NoPlayEntitlement) == 0x0005E8, "Member 'FOnlineAccountTexts::NoPlayEntitlement' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, NoServerAccess) == 0x000600, "Member 'FOnlineAccountTexts::NoServerAccess' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PlayAccessRevoked) == 0x000618, "Member 'FOnlineAccountTexts::PlayAccessRevoked' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Default) == 0x000630, "Member 'FOnlineAccountTexts::PremiumAccountName_Default' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Sony) == 0x000648, "Member 'FOnlineAccountTexts::PremiumAccountName_Sony' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Switch) == 0x000660, "Member 'FOnlineAccountTexts::PremiumAccountName_Switch' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_XboxOne) == 0x000678, "Member 'FOnlineAccountTexts::PremiumAccountName_XboxOne' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, RedeemOfflinePurchases) == 0x000690, "Member 'FOnlineAccountTexts::RedeemOfflinePurchases' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ServiceDowntime) == 0x0006A8, "Member 'FOnlineAccountTexts::ServiceDowntime' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, SignInCompleting) == 0x0006C0, "Member 'FOnlineAccountTexts::SignInCompleting' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, SignIntoConsoleServices) == 0x0006D8, "Member 'FOnlineAccountTexts::SignIntoConsoleServices' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, TokenExpired) == 0x0006F0, "Member 'FOnlineAccountTexts::TokenExpired' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnableToConnect) == 0x000708, "Member 'FOnlineAccountTexts::UnableToConnect' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnableToJoinWaitingRoomLoginQueue) == 0x000720, "Member 'FOnlineAccountTexts::UnableToJoinWaitingRoomLoginQueue' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnexpectedConsoleAuthFailure) == 0x000738, "Member 'FOnlineAccountTexts::UnexpectedConsoleAuthFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnlinkConsoleFailed) == 0x000750, "Member 'FOnlineAccountTexts::UnlinkConsoleFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UserLoginFailed) == 0x000768, "Member 'FOnlineAccountTexts::UserLoginFailed' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoom) == 0x000780, "Member 'FOnlineAccountTexts::WaitingRoom' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomError) == 0x000798, "Member 'FOnlineAccountTexts::WaitingRoomError' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomFailure) == 0x0007B0, "Member 'FOnlineAccountTexts::WaitingRoomFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomWaiting) == 0x0007C8, "Member 'FOnlineAccountTexts::WaitingRoomWaiting' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginConsole) == 0x0007E0, "Member 'FOnlineAccountTexts::FailedLoginConsole' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, LoggingInExternalAuth) == 0x000948, "Member 'FOnlineAccountTexts::LoggingInExternalAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, CreateDeviceAuth) == 0x000960, "Member 'FOnlineAccountTexts::CreateDeviceAuth' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthCanceled) == 0x000978, "Member 'FOnlineAccountTexts::ExtAuthCanceled' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthFailure) == 0x000990, "Member 'FOnlineAccountTexts::ExtAuthFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthAssociationFailure) == 0x0009A8, "Member 'FOnlineAccountTexts::ExtAuthAssociationFailure' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthTimeout) == 0x0009C0, "Member 'FOnlineAccountTexts::ExtAuthTimeout' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthMissingAuthAssociation) == 0x0009D8, "Member 'FOnlineAccountTexts::ExtAuthMissingAuthAssociation' has a wrong offset!");
static_assert(offsetof(FOnlineAccountTexts, UnableToQueryReceipts) == 0x0009F0, "Member 'FOnlineAccountTexts::UnableToQueryReceipts' has a wrong offset!");

}
