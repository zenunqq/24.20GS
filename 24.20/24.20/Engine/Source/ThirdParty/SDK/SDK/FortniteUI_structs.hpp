#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "JsonUtilities_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "GameplayMessages_structs.hpp"
#include "GameSubCatalog_structs.hpp"
#include "Slate_structs.hpp"

namespace SDK
{

enum class EFortUIFeature : uint8
{
	ShowHome                                 = 0,
	ShowPlay                                 = 1,
	ShowCommand                              = 2,
	ShowHeros                                = 3,
	ShowSquads                               = 4,
	ShowArmory                               = 5,
	ShowLocker                               = 6,
	ShowSkillTree                            = 7,
	ShowStore                                = 8,
	ShowQuests                               = 9,
	ShowMainStore                            = 10,
	ShowContextHelpMenu                      = 11,
	ShowCampaign                             = 12,
	ShowActiveBoost                          = 13,
	ShowJournal                              = 14,
	ShowPartyBar                             = 15,
	ShowChatWindow                           = 16,
	ShowFriendsMenu                          = 17,
	ShowObjectives                           = 18,
	ShowRatingIconsInTopbar                  = 19,
	ShowAntiAddictionMessage                 = 20,
	ShowMinorShutdownMessage                 = 21,
	ShowHealthWarningScreen                  = 22,
	ShowSimplifiedHUD                        = 23,
	LargeHeaderFooterButtons                 = 24,
	ShowAthenaFavoriting                     = 25,
	ShowAthenaItemRandomization              = 26,
	ShowAthenaQuests                         = 27,
	ShowBattlePass                           = 28,
	ShowNewBattlePass                        = 29,
	ShowDynamicBattlePass                    = 30,
	ShowBattlePassFAQ                        = 31,
	ShowReplays                              = 32,
	ShowProfileStatsUI                       = 33,
	ShowAthenaItemShop                       = 34,
	ShowNewAthenaItemShop                    = 35,
	ShowAthenaCataba                         = 36,
	ShowShowdown                             = 37,
	SpecialEventsStart                       = 38,
	ShowSpecialEvent                         = 39,
	ShowWinterfest                           = 40,
	SpecialEventsEnd                         = 41,
	ShowSpatialUI                            = 42,
	ShowSocial                               = 43,
	ShowAccountBoosts                        = 44,
	ShowCustomerSupport                      = 45,
	ShowGlobalChat                           = 46,
	ShowEULA                                 = 47,
	ShowEndOfZoneCinematic                   = 48,
	ShowOnboardingCinematics                 = 49,
	ShowFounderBannerIcons                   = 50,
	ShowCurrentRegionInLobby                 = 51,
	ShowPrerollLlamas                        = 52,
	EnableFoundersDailyRewards               = 53,
	EnableMatchmakingRegionSetting           = 54,
	EnableLanguageSetting                    = 55,
	EnableFriendCodeSetting                  = 56,
	EnableEarlyAccessLoadingScreenBanner     = 57,
	EnableAlterationModifications            = 58,
	EnableSchematicRarityUpgrade             = 59,
	EnableMissionActivationVote              = 60,
	EnableLtmRetrieveTheData                 = 61,
	EnableUpgradesVideos                     = 62,
	ShowPreviewTestTab                       = 63,
	ShowDMCustomization                      = 64,
	Max_None                                 = 65,
	EFortUIFeature_MAX                       = 66,
};

enum class EFortFrontEndFeatureStateReason : uint8
{
	Default                                  = 0,
	NoHeroes                                 = 1,
	Tutorial                                 = 2,
	BROnly                                   = 3,
	NoPlayerController                       = 4,
	UnexpectedFeature                        = 5,
	Invalid                                  = 6,
	EFortFrontEndFeatureStateReason_MAX      = 7,
};

enum class EFortFrontEndFeatureState : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	Hidden                                   = 2,
	Invalid                                  = 3,
	EFortFrontEndFeatureState_MAX            = 4,
};

enum class EFortFrontEndFeature : uint8
{
	ShowHomeBase                             = 0,
	ShowHeroList                             = 1,
	ShowVault                                = 2,
	ShowStore                                = 3,
	PlayZone                                 = 4,
	ShowDailyRewards                         = 5,
	ShowHeroSelect                           = 6,
	RecruitHero                              = 7,
	ShowHomeBaseOverview                     = 8,
	STWArmory_Transform                      = 9,
	STWArmory_CollectionBook                 = 10,
	MAX_None                                 = 11,
	EFortFrontEndFeature_MAX                 = 12,
};

enum class EFortItemCooldownType : uint8
{
	None                                     = 0,
	AmmoRegeneration                         = 1,
	ItemActivation                           = 2,
	WeaponReloading                          = 3,
	Death                                    = 4,
	AthenaWeaponFireCooldown                 = 5,
	AbilitySetActivateByInputAbility         = 6,
	DirectProgressUpdate                     = 7,
	EFortItemCooldownType_MAX                = 8,
};

enum class EFortBuildingInteraction : uint8
{
	None                                     = 0,
	Build                                    = 1,
	Repair                                   = 2,
	Upgrade                                  = 3,
	Edit                                     = 4,
	BeingModified                            = 5,
	ConfirmEdit                              = 6,
	Creative                                 = 7,
	EFortBuildingInteraction_MAX             = 8,
};

enum class EFortBuildingHealthDisplayRule : uint8
{
	Never                                    = 0,
	Allowed                                  = 1,
	Always                                   = 2,
	EFortBuildingHealthDisplayRule_MAX       = 3,
};

enum class EFortHitPointModificationReason : uint8
{
	Invalid                                  = 0,
	InitalSet                                = 1,
	AutoRegen                                = 2,
	ItemRegen                                = 3,
	DamageOverTime                           = 4,
	DamageReceived                           = 5,
	EFortHitPointModificationReason_MAX      = 6,
};

enum class EFortStoreState : uint8
{
	Error                                    = 0,
	Closed                                   = 1,
	CardPackStore                            = 2,
	CurrencyStore                            = 3,
	WebPayment                               = 4,
	PurchaseOpen                             = 5,
	PackOpen                                 = 6,
	CardEnter                                = 7,
	CardBackReveal                           = 8,
	CardFlip                                 = 9,
	CardFrontReveal                          = 10,
	CardExit                                 = 11,
	SummaryAdd                               = 12,
	PackDestroy                              = 13,
	Summary                                  = 14,
	PresentChoice                            = 15,
	ChoiceMade                               = 16,
	SummaryAddTransition                     = 17,
	MAX_None                                 = 18,
	EFortStoreState_MAX                      = 19,
};

enum class EFortUIFeatureStateReason : uint8
{
	Default                                  = 0,
	Tutorial                                 = 1,
	ContentInstall                           = 2,
	AccountRestrictions                      = 3,
	Platform                                 = 4,
	SeasonOrEventNotActive                   = 5,
	NoPlayerController                       = 6,
	UnexpectedFeature                        = 7,
	Invalid                                  = 8,
	EFortUIFeatureStateReason_MAX            = 9,
};

enum class EFortUIFeatureState : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	Hidden                                   = 2,
	Invalid                                  = 3,
	EFortUIFeatureState_MAX                  = 4,
};

enum class EChallengeListEntryType : uint8
{
	GoalCard                                 = 0,
	Header                                   = 1,
	Normal                                   = 2,
	Replace                                  = 3,
	PartyUp                                  = 4,
	LockedQuest                              = 5,
	AllQuestsComplete                        = 6,
	CustomMessage                            = 7,
	EChallengeListEntryType_MAX              = 8,
};

enum class EFortPrioritizedWidgetContestedBehavior : uint8
{
	QueueBehind                              = 0,
	StompOther                               = 1,
	EFortPrioritizedWidgetContestedBehavior_MAX = 2,
};

enum class EFortPrioritizedWidgetPriority : uint8
{
	Priority_0                               = 0,
	Priority_1                               = 1,
	Priority_2                               = 2,
	Priority_3                               = 3,
	Priority_4                               = 4,
	Priority_5                               = 5,
	NumberOfPrios                            = 6,
	EFortPrioritizedWidgetPriority_MAX       = 7,
};

enum class EPostGameHUDMode : uint8
{
	None                                     = 0,
	AllHidden                                = 1,
	Spectating                               = 2,
	AllHiddenExceptXP                        = 3,
	EPostGameHUDMode_MAX                     = 4,
};

enum class EPostGameClickCatcherMode : uint8
{
	Catch_None                               = 0,
	Catch_MobileOnly                         = 1,
	Catch_MouseOnly                          = 2,
	Catch_All                                = 3,
	Catch_MAX                                = 4,
};

enum class EInputPriority : uint8
{
	Normal                                   = 0,
	Menu                                     = 1,
	Chat                                     = 2,
	Modal                                    = 3,
	Confirmation                             = 4,
	Error                                    = 5,
	HUD                                      = 6,
	EInputPriority_MAX                       = 7,
};

enum class EFlagStatus : uint8
{
	FlagPresent                              = 0,
	FlagNotPresent                           = 1,
	EFlagStatus_MAX                          = 2,
};

enum class EFortInputMode : uint8
{
	Frontend                                 = 0,
	InGame                                   = 1,
	InGameCursor                             = 2,
	EFortInputMode_MAX                       = 3,
};

enum class EFortUrlType : uint8
{
	NormalWebLink                            = 0,
	AccountCreationLink                      = 1,
	HelpLink                                 = 2,
	EULALink                                 = 3,
	EFortUrlType_MAX                         = 4,
};

enum class EGridSortKind : uint8
{
	None                                     = 0,
	ByNumber                                 = 1,
	ByString                                 = 2,
	ByNumberThenString                       = 3,
	ByStringThenNumber                       = 4,
	EGridSortKind_MAX                        = 5,
};

enum class EFortItemCardSize : uint8
{
	XXS                                      = 0,
	XS                                       = 1,
	Wide_S                                   = 2,
	S                                        = 3,
	M                                        = 4,
	L                                        = 5,
	XL                                       = 6,
	XXL                                      = 7,
	EFortItemCardSize_MAX                    = 8,
};

enum class EFortPlayerPowerRatingType : uint8
{
	Auto                                     = 0,
	Campaign                                 = 1,
	Phoenix                                  = 2,
	Max_None                                 = 3,
	EFortPlayerPowerRatingType_MAX           = 4,
};

enum class EFortUISpecialEvents : uint8
{
	NoEvent                                  = 0,
	FritTemp                                 = 1,
	EFortUISpecialEvents_MAX                 = 2,
};

enum class ECountdownDisplay : uint8
{
	EventEndTime                             = 0,
	ChallengeUnlockTime                      = 1,
	ChallengeBundleUnlockTime                = 2,
	UnlockAlreadySet                         = 3,
	MAX                                      = 4,
};

enum class EAthenaEventMatchInfoSortMethod : uint8
{
	Eliminations                             = 0,
	Place                                    = 1,
	Count                                    = 2,
	EAthenaEventMatchInfoSortMethod_MAX      = 3,
};

enum class EItemShopCurrency : uint8
{
	VBucks                                   = 0,
	RealMOney                                = 1,
	EItemShopCurrency_MAX                    = 2,
};

enum class EItemShopTileSize : uint8
{
	Mini                                     = 0,
	Small                                    = 1,
	Normal                                   = 2,
	DoubleWide                               = 3,
	TripleWide                               = 4,
	Max                                      = 5,
};

enum class EViolatorIntensity : uint8
{
	Low                                      = 0,
	Medium                                   = 1,
	High                                     = 2,
	EViolatorIntensity_MAX                   = 3,
};

enum class EFrontendVisibilityMode : uint8
{
	Normal                                   = 0,
	HideTopTabsOnly                          = 1,
	HideTopTabsOnlyWithoutBottomBar          = 2,
	OnlyBottom                               = 3,
	OnlyTop                                  = 4,
	OnlyTitleBar                             = 5,
	Empty                                    = 6,
	EFrontendVisibilityMode_MAX              = 7,
};

enum class EBattlePassInputs : uint8
{
	Back                                     = 0,
	ViewItem                                 = 1,
	PreviewAction                            = 2,
	ReplayTrailer                            = 3,
	ShowAbout                                = 4,
	BulkBuyRewards                           = 5,
	PageComplete                             = 6,
	ShowAboutCustomization                   = 7,
	GiftBattlePass                           = 8,
	SwipeLeft                                = 9,
	SwipeRight                               = 10,
	COUNT                                    = 11,
	EBattlePassInputs_MAX                    = 12,
};

enum class EFortDonutIdleGameObject : uint8
{
	UnsetObject                              = 0,
	Tree                                     = 1,
	Mound                                    = 2,
	SmallMound                               = 3,
	JumpPad                                  = 4,
	Torch                                    = 5,
	PeelMonster                              = 6,
	Chimichanga                              = 7,
	Arm                                      = 8,
	EFortDonutIdleGameObject_MAX             = 9,
};

enum class EColorPickerType : uint8
{
	Swatches                                 = 0,
	CustomColor                              = 1,
	Both                                     = 2,
	EColorPickerType_MAX                     = 3,
};

enum class EColorPickerColorRepresentation : uint8
{
	HSV                                      = 0,
	RGB                                      = 1,
	Max_NONE                                 = 2,
	EColorPickerColorRepresentation_MAX      = 3,
};

enum class EFortCreativeItemType : uint8
{
	Chest                                    = 0,
	Item                                     = 1,
	Collection                               = 2,
	SubItems                                 = 3,
	NoCreativeItems                          = 4,
	EFortCreativeItemType_MAX                = 5,
};

enum class EDateFormat : uint8
{
	CountdownTextual                         = 0,
	CountdownNumeric                         = 1,
	CountdownNumUnder12Hours                 = 2,
	Date                                     = 3,
	DateFormat_MAX                           = 4,
};

enum class EFortItemManagementMode : uint8
{
	Details                                  = 0,
	Comparison                               = 1,
	Mulch                                    = 2,
	EFortItemManagementMode_MAX              = 3,
};

enum class ETagComparisonType : uint8
{
	HasAny                                   = 0,
	HasAll                                   = 1,
	HasNone                                  = 2,
	HasAnyExact                              = 3,
	HasAllExact                              = 4,
	ETagComparisonType_MAX                   = 5,
};

enum class EFortMtxStoreOfferType : uint8
{
	FoundersPack                             = 0,
	CurrencyPack                             = 1,
	Unknown                                  = 2,
	Max_None                                 = 3,
	EFortMtxStoreOfferType_MAX               = 4,
};

enum class ESettingType : uint8
{
	None                                     = 0,
	Header                                   = 1,
	WindowMode                               = 2,
	DisplayResolution                        = 3,
	FrameRateLimit                           = 4,
	VideoQuality                             = 5,
	ThreeDResolution                         = 6,
	ViewDistance                             = 7,
	Shadows                                  = 8,
	AntiAliasing                             = 9,
	Textures                                 = 10,
	Effects                                  = 11,
	PostProcessing                           = 12,
	VSync                                    = 13,
	MotionBlur                               = 14,
	ShowGrass                                = 15,
	MobileFPSType                            = 16,
	ShowFPS                                  = 17,
	AllowLowPower                            = 18,
	AllowVideoPlayback                       = 19,
	AllowDynamicResolution                   = 20,
	Disabled_AllowMultithreadedRendering     = 21,
	RenderingAPI                             = 22,
	UseGPUCrashDebugging                     = 23,
	RegionHeader                             = 24,
	Language                                 = 25,
	Region                                   = 26,
	MouseSensitivityYaw                      = 27,
	MouseSensitivityPitch                    = 28,
	MouseSensitivityMultiplierForAircraft    = 29,
	TouchDragSensitivity                     = 30,
	ControllerLookSensitivityYaw             = 31,
	ControllerLookSensitivityPitch           = 32,
	MouseTargetingMultiplier                 = 33,
	MouseScopedMultiplier                    = 34,
	GamepadTargetingMultiplier               = 35,
	GamepadScopedMultiplier                  = 36,
	GamepadBuildingMultiplier                = 37,
	GamepadEditModeMultiplier                = 38,
	TouchLookAccelerationMultiplier          = 39,
	TouchDragTargetingSensitivity            = 40,
	TouchDragScopedSensitivity               = 41,
	TouchBuildingMultiplier                  = 42,
	TouchEditModeMultiplier                  = 43,
	TouchVerticalSensitivity                 = 44,
	InvertPitch                              = 45,
	InvertYaw                                = 46,
	InvertPitchForMotion                     = 47,
	InvertPitchForAircraftPrimary            = 48,
	InvertPitchForAircraftSecondary          = 49,
	InvertYawForMotion                       = 50,
	GyroEnabled                              = 51,
	GyroYawAxis                              = 52,
	GyroSensitivity                          = 53,
	GyroTargetingSensitivity                 = 54,
	GyroScopedSensitivity                    = 55,
	GyroHarvestingToolSensitivity            = 56,
	SafeZone                                 = 57,
	AnonymousMode                            = 58,
	AnonymousCharacterMode                   = 59,
	HideOtherPlayerNames                     = 60,
	HiddenMatchmakingDelay                   = 61,
	AutoJoinGameVoiceChannel                 = 62,
	ShowVoiceIndicators                      = 63,
	HUDScale                                 = 64,
	ShowViewerCount                          = 65,
	FirstPersonCamera                        = 66,
	PeripheralLighting                       = 67,
	PingPlaceDangerMarkerWhenTargeting       = 68,
	ShowGlobalChat                           = 69,
	ConsoleUnlockedFPS                       = 70,
	ToggleSprint                             = 71,
	SprintByDefault                          = 72,
	SprintCancelsReload                      = 73,
	TapInteract                              = 74,
	InWorldInteract                          = 75,
	ToggleTargeting                          = 76,
	HoldToSwapPickup                         = 77,
	AutoEquipBetterItems                     = 78,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 79,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 80,
	DisablePreEditsWhenPlacingBuilding       = 81,
	AimAssist                                = 82,
	EditModeAimAssist                        = 83,
	TouchEdit                                = 84,
	EditConfirmOnRelease                     = 85,
	QuickEdit                                = 86,
	TurboBuild                               = 87,
	CreativeTurboDelete                      = 88,
	AutoChangeMaterial                       = 89,
	GamepadAutoRun                           = 90,
	CrossplayPreference                      = 91,
	AutoOpenDoors                            = 92,
	AutoPickupWeapons                        = 93,
	AutoPickupWeaponsConsolePC               = 94,
	AutoSortConsumablesToRight               = 95,
	EnableTryBuildOnFocus                    = 96,
	EditButtonHoldTime                       = 97,
	SlideButtonHoldTime                      = 98,
	AccessoriesHeader                        = 99,
	ForceFeedback                            = 100,
	ContextTutorial                          = 101,
	ReplayRecording                          = 102,
	ReplayRecordingLargeTeams                = 103,
	ReplayRecordingCreativeMode              = 104,
	UsePowerSavingMode                       = 105,
	ShadowPlayHighlights                     = 106,
	ShowTemperature                          = 107,
	BuildingPossession                       = 108,
	GammaValue                               = 109,
	MasterVolume                             = 110,
	MusicVolume                              = 111,
	SoundFXVolume                            = 112,
	DialogVolume                             = 113,
	VoiceChatVolume                          = 114,
	CinematicsVolume                         = 115,
	Subtitles                                = 116,
	Quality                                  = 117,
	VoiceChat                                = 118,
	PushToTalk                               = 119,
	ProximityVoiceChat                       = 120,
	VoiceChatInputDevice                     = 121,
	VoiceChatOutputDevice                    = 122,
	AllowBackgroundAudio                     = 123,
	ColorBlindMode                           = 124,
	ColorBlindStrength                       = 125,
	IgnoreGamepadInput                       = 126,
	LockPrimaryInputMethodToMouse            = 127,
	EnableRudderControl                      = 128,
	RudderDeadZone                           = 129,
	RudderMaxThrottle                        = 130,
	VisualizeSoundEffects                    = 131,
	VisualizeSoundEffectsHeader              = 132,
	MoveStickDeadZone                        = 133,
	LookStickDeadZone                        = 134,
	LookSensitivityPreset                    = 135,
	LookSensitivityPresetAds                 = 136,
	LookBuildModeMultiplier                  = 137,
	LookEditModeMultiplier                   = 138,
	UseAdvancedOptions                       = 139,
	LookHorizontalSpeed                      = 140,
	LookVerticalSpeed                        = 141,
	LookHorizontalSpeedAds                   = 142,
	LookVerticalSpeedAds                     = 143,
	LookHorizontalBoostSpeed                 = 144,
	LookVerticalBoostSpeed                   = 145,
	LookBoostAccelerationTime                = 146,
	LookHorizontalBoostSpeedAds              = 147,
	LookVerticalBoostSpeedAds                = 148,
	LookBoostAccelerationTimeAds             = 149,
	InstantBoostWhenBuilding                 = 150,
	LookEaseTime                             = 151,
	LookInputCurve                           = 152,
	AimAssistStrength                        = 153,
	UseLegacyControls                        = 154,
	PlayerSurveysAllowed                     = 155,
	LocalNotifications                       = 156,
	FireMode                                 = 157,
	COUNT                                    = 158,
	ESettingType_MAX                         = 159,
};

enum class EFortPerksWidgetState : uint8
{
	Normal                                   = 0,
	Upgrade                                  = 1,
	Evolution                                = 2,
	EFortPerksWidgetState_MAX                = 3,
};

enum class EPresenceIndicatorState : uint8
{
	Online                                   = 0,
	Away                                     = 1,
	Offline                                  = 2,
	Blocked                                  = 3,
	EPresenceIndicatorState_MAX              = 4,
};

enum class EFortPlayerSurveyQuestionType : uint8
{
	SingleChoice                             = 0,
	MultipleChoice                           = 1,
	Rating                                   = 2,
	EFortPlayerSurveyQuestionType_MAX        = 3,
};

enum class EFortPlayerSurveyResponseChoiceType : uint8
{
	CheckBox                                 = 0,
	Radio                                    = 1,
	EFortPlayerSurveyResponseChoiceType_MAX  = 2,
};

enum class EFortServerBrowserAction : uint8
{
	BattleLabServerCreate                    = 0,
	PlaygroundServerCreate                   = 1,
	CreativeServerCreate                     = 2,
	Play                                     = 3,
	CreativeIslandCode                       = 4,
	CreativeDiscovery                        = 5,
	EFortServerBrowserAction_MAX             = 6,
};

enum class EFortSettingGameVisibility : uint8
{
	None                                     = 0,
	Campaign                                 = 1,
	Athena                                   = 2,
	EFortSettingGameVisibility_MAX           = 3,
};

enum class EFortSidebarSpecialNavType : uint8
{
	None                                     = 0,
	GoPrevious                               = 1,
	GoRebootRally                            = 2,
	GoPartyUp                                = 3,
	EFortSidebarSpecialNavType_MAX           = 4,
};

enum class EReferFriendOrigin : uint8
{
	AddFriend                                = 0,
	PartyUp                                  = 1,
	EReferFriendOrigin_MAX                   = 2,
};

enum class ELocalUserOnlineStatus : uint8
{
	Online                                   = 0,
	Offline                                  = 1,
	Away                                     = 2,
	ExtendedAway                             = 3,
	DoNotDisturb                             = 4,
	Chat                                     = 5,
	ELocalUserOnlineStatus_MAX               = 6,
};

enum class ELfgState : uint8
{
	NoResults                                = 0,
	Shuffling                                = 1,
	NoSocialTagsAdded                        = 2,
	LfgOff                                   = 3,
	LfgUnavailable                           = 4,
	LfgOffNoSocialTags                       = 5,
	NoSocialTagsSelected                     = 6,
	NoFriendsSuggestLFG                      = 7,
	RebootInvitePlayerButton                 = 8,
	RebootInviteAllRallied                   = 9,
	ChangeTagsButton                         = 10,
	ApplyButton                              = 11,
	ShuffleButton                            = 12,
	LfgOffSocialBan                          = 13,
	ELfgState_MAX                            = 14,
};

enum class EMultiFriendAction : uint8
{
	AcceptFriendRequest                      = 0,
	EMultiFriendAction_MAX                   = 1,
};

enum class EFortSquadSlottingRestrictionReason : uint8
{
	ItemIsInInventoryOverflow                = 0,
	MandatorySlotWouldBeEmptied              = 1,
	ItemIsOnActiveExpedition                 = 2,
	HeroRequiresMissingGameplayTag           = 3,
	HeroAlreadyEquippedInLoadout             = 4,
	EFortSquadSlottingRestrictionReason_MAX  = 5,
};

enum class EFortToastType : uint8
{
	Default                                  = 0,
	Subdued                                  = 1,
	Impactful                                = 2,
	EFortToastType_MAX                       = 3,
};

enum class EFortUIState : uint8
{
	Invalid                                  = 0,
	Login                                    = 1,
	JoinServer                               = 2,
	SubgameSelect                            = 3,
	FrontEnd                                 = 4,
	InGame_Custom                            = 5,
	UNUSED                                   = 6,
	InGame_STW                               = 7,
	Cinematic                                = 8,
	InGame_BR                                = 9,
	AthenaSpectator                          = 10,
	Replay                                   = 11,
	InGame_STW_Custom                        = 12,
	MAX                                      = 13,
};

enum class EFortInventoryContext : uint8
{
	Game                                     = 0,
	Lobby                                    = 1,
	FrontEnd                                 = 2,
	Pickup                                   = 3,
	EFortInventoryContext_MAX                = 4,
};

enum class ENotificationResult : uint8
{
	Confirmed                                = 0,
	Declined                                 = 1,
	Unknown                                  = 2,
	ENotificationResult_MAX                  = 3,
};

enum class ENotificationType : uint8
{
	Basic                                    = 0,
	Friends                                  = 1,
	ENotificationType_MAX                    = 2,
};

enum class EModalContainerSize : uint8
{
	ExtraSmall                               = 0,
	Small                                    = 1,
	Medium                                   = 2,
	Large                                    = 3,
	Max                                      = 4,
};

enum class EFortSocialPanelType : uint8
{
	Join                                     = 0,
	Invite                                   = 1,
	Max                                      = 2,
};

enum class EFortSocialPanelTab : uint8
{
	PartyInvitations                         = 0,
	Friends                                  = 1,
	RecentPlayers                            = 2,
	Max                                      = 3,
};

enum class EFortBangSize : uint8
{
	XXS                                      = 0,
	XS                                       = 1,
	S                                        = 2,
	M                                        = 3,
	L                                        = 4,
	XL                                       = 5,
	EFortBangSize_MAX                        = 6,
};

enum class EFortTutorialGlowType : uint8
{
	None                                     = 0,
	Look                                     = 1,
	Click                                    = 2,
	EFortTutorialGlowType_MAX                = 3,
};

enum class EFortAnimSpeed : uint8
{
	Instant                                  = 0,
	Fast                                     = 1,
	Normal                                   = 2,
	EFortAnimSpeed_MAX                       = 3,
};

enum class EFortStatValueDisplayType : uint8
{
	BasicPaired                              = 0,
	BasicSingle                              = 1,
	Unique                                   = 2,
	ElementalFire                            = 3,
	ElementalIce                             = 4,
	ElementalElectric                        = 5,
	EFortStatValueDisplayType_MAX            = 6,
};

enum class EFortBuffState : uint8
{
	NoChange                                 = 0,
	Better                                   = 1,
	Worse                                    = 2,
	EFortBuffState_MAX                       = 3,
};

enum class EFortClampState : uint8
{
	NoClamp                                  = 0,
	MinClamp                                 = 1,
	MaxClamp                                 = 2,
	EFortClampState_MAX                      = 3,
};

enum class EFortComparisonType : uint8
{
	None                                     = 0,
	HigherValue                              = 1,
	LowerValue                               = 2,
	Upgrade                                  = 3,
	EFortComparisonType_MAX                  = 4,
};

enum class EPlayerReportReasons : uint8
{
	None                                     = 0,
	Communication                            = 1,
	Offensive                                = 2,
	AFK                                      = 3,
	IgnoringObjective                        = 4,
	Harassment                               = 5,
	Exploiting                               = 6,
	TradeScam                                = 7,
	CommunicationsAbuse                      = 8,
	OffensiveName                            = 9,
	TeamingUpWithEnemies                     = 10,
	InappropriateContent                     = 11,
	ExploitingOrHacking                      = 12,
	Harassment_Threatening                   = 13,
	Harassment_Annoying                      = 14,
	Harassment_Selling                       = 15,
	Harassment_Verbal                        = 16,
	Harassment_GameBehavior                  = 17,
	EPlayerReportReasons_MAX                 = 18,
};

enum class ESubscriptionContentTab : uint8
{
	SubscriptionManagementScreen             = 0,
	ProgressiveItemScreen                    = 1,
	ESubscriptionContentTab_MAX              = 2,
};

enum class EItemShopNavigationAction : uint8
{
	None                                     = 0,
	ShowOfferDetails                         = 1,
	NavigateToOffer                          = 2,
	EItemShopNavigationAction_MAX            = 3,
};

enum class ESpatialStyleCharacterUnlockPrerequisite : uint8
{
	BattlepassPurchase                       = 0,
	BattlepassLevel                          = 1,
	ESpatialStyleCharacterUnlockPrerequisite_MAX = 2,
};

enum class EFortSubscriptionContentInterfaceCloseReason : uint8
{
	Normal                                   = 0,
	SubscriptionPurchased                    = 1,
	EFortSubscriptionContentInterfaceCloseReason_MAX = 2,
};

enum class EFortServerItemIneligibleReason : uint8
{
	None                                     = 0,
	PartyTooBig                              = 1,
	PartyTooSmall                            = 2,
	NotPartyLeader                           = 3,
	MatchmakingAlready                       = 4,
	NotSupportedByLeto                       = 5,
	InvalidData                              = 6,
	EFortServerItemIneligibleReason_MAX      = 7,
};

enum class EAvailableSquadSlotsListEntryState : uint8
{
	Detailed                                 = 0,
	Simplified                               = 1,
	EAvailableSquadSlotsListEntryState_MAX   = 2,
};

enum class EAthenaConfirmationResult : uint8
{
	Confirmed                                = 0,
	Declined                                 = 1,
	Canceled                                 = 2,
	Max_NONE                                 = 3,
	EAthenaConfirmationResult_MAX            = 4,
};

enum class EEquippedWeaponDisplay : uint8
{
	None                                     = 0,
	Resource                                 = 1,
	Magazine                                 = 2,
	Utility                                  = 3,
	Chargeable                               = 4,
	EEquippedWeaponDisplay_MAX               = 5,
};

enum class EAthenaPlayerActionAlert : uint8
{
	PlayerDown                               = 0,
	PlayerKill                               = 1,
	EnteredStorm                             = 2,
	NewZebulonDrone                          = 3,
	NewZebulonDroneYou                       = 4,
	EAthenaPlayerActionAlert_MAX             = 5,
};

enum class ELockerScreenState : uint8
{
	Equipping                                = 0,
	Archiving                                = 1,
	Unarchiving                              = 2,
	ELockerScreenState_MAX                   = 3,
};

enum class EAthenaSelectorCalloutSlot : uint8
{
	PrimaryCallout                           = 0,
	SecondaryCallout                         = 1,
	EAthenaSelectorCalloutSlot_MAX           = 2,
};

enum class EFortAthenaPlaylist : uint8
{
	AthenaSolo                               = 0,
	AthenaDuo                                = 1,
	AthenaSquad                              = 2,
	EFortAthenaPlaylist_MAX                  = 3,
};

enum class EAthenaLockerInfoRestrictionWarning : uint8
{
	UnsatisfiedExclusiveItem                 = 0,
	LockedEmote                              = 1,
	CosmeticRestriction                      = 2,
	AllItemsAreArchived                      = 3,
	Unknown                                  = 4,
	EAthenaLockerInfoRestrictionWarning_MAX  = 5,
};

enum class EFortMarkerActions : uint8
{
	None                                     = 0,
	Cancel                                   = 1,
	Confirm                                  = 2,
	CancelAndReturnNPC                       = 3,
	EFortMarkerActions_MAX                   = 4,
};

enum class EHealthBarType : uint8
{
	Health                                   = 0,
	Shield                                   = 1,
	Overshield                               = 2,
	Stamina                                  = 3,
	VehicleHealth                            = 4,
	SignalInStorm                            = 5,
	EHealthBarType_MAX                       = 6,
};

enum class EBPStatus : uint8
{
	UnpurchasedBP                            = 0,
	PurchasedBP                              = 1,
	EBPStatus_MAX                            = 2,
};

enum class EAthenaSquadListUpdateType : uint8
{
	None                                     = 0,
	CanResurrect                             = 1,
	FindResurrectChip                        = 2,
	EAthenaSquadListUpdateType_MAX           = 3,
};

enum class ERespawnUIState : uint8
{
	Hidden                                   = 0,
	ShowRespawnEnabled                       = 1,
	ShowRespawnDisabled                      = 2,
	ERespawnUIState_MAX                      = 3,
};

enum class EStormSurgeThresholdType : uint8
{
	None                                     = 0,
	Above                                    = 1,
	Below                                    = 2,
	Equal                                    = 3,
	EStormSurgeThresholdType_MAX             = 4,
};

enum class EWinConditionParentType : uint8
{
	None                                     = 0,
	Desktop                                  = 1,
	Mobile                                   = 2,
	EWinConditionParentType_MAX              = 3,
};

enum class EChallengeListSection : uint8
{
	SpecialOffers                            = 0,
	CompletionRewards                        = 1,
	AllChallenges                            = 2,
	FreeChallenges                           = 3,
	PaidChallenges                           = 4,
	Objectives                               = 5,
	EChallengeListSection_MAX                = 6,
};

enum class EEndOfMatchQuestCategoryType : uint8
{
	Completed                                = 0,
	InProgress                               = 1,
	EEndOfMatchQuestCategoryType_MAX         = 2,
};

enum class ELocationEntryState : uint8
{
	Found                                    = 0,
	NotFound                                 = 1,
	Unused                                   = 2,
	ELocationEntryState_MAX                  = 3,
};

enum class EFortCosmeticLoadoutScreenMode : uint8
{
	Browse                                   = 0,
	Save                                     = 1,
	EFortCosmeticLoadoutScreenMode_MAX       = 2,
};

enum class EFortNameLoadoutPopupType : uint8
{
	Rename                                   = 0,
	Overwrite                                = 1,
	SaveNew                                  = 2,
	EFortNameLoadoutPopupType_MAX            = 3,
};

enum class EAthenaGameFeatureStatus : uint8
{
	InProgress                               = 0,
	ProgressPaused                           = 1,
	ErrorOccured                             = 2,
	EAthenaGameFeatureStatus_MAX             = 3,
};

enum class EMinigameActivityWidgetStatFormat : uint8
{
	Score                                    = 0,
	Time                                     = 1,
	AddTime                                  = 2,
	Distance                                 = 3,
	Laps                                     = 4,
	EMinigameActivityWidgetStatFormat_MAX    = 5,
};

enum class EPostGameScreenContinueBehavior : uint8
{
	Next                                     = 0,
	Previous                                 = 1,
	EPostGameScreenContinueBehavior_MAX      = 2,
};

enum class EPostGamePlacement : uint8
{
	Win                                      = 0,
	Lose                                     = 1,
	Tie                                      = 2,
	NoPlacement                              = 3,
	EPostGamePlacement_MAX                   = 4,
};

enum class EBattleLabAlertType : uint8
{
	QuestComplete                            = 0,
	QuestGranted                             = 1,
	Reward                                   = 2,
	EBattleLabAlertType_MAX                  = 3,
};

enum class ECobaltStatusTeam : uint8
{
	Ally                                     = 0,
	Enemy                                    = 1,
	MAX                                      = 255,
};

enum class EBracketNodeState : uint8
{
	LocalTeam                                = 0,
	EnemyTeam                                = 1,
	Neutral                                  = 2,
	EBracketNodeState_MAX                    = 3,
};

enum class ESurvivalObjectiveIconState : uint8
{
	None                                     = 0,
	Spawned                                  = 1,
	Destroyed                                = 2,
	ESurvivalObjectiveIconState_MAX          = 3,
};

enum class EDiscoCaptureUIState : uint8
{
	None                                     = 0,
	Hidden                                   = 1,
	Dance                                    = 2,
	Capturing                                = 3,
	Contested                                = 4,
	EDiscoCaptureUIState_MAX                 = 5,
};

enum class EDiscoCaptureIconState : uint8
{
	None                                     = 0,
	Hidden                                   = 1,
	Neutral                                  = 2,
	AllyCaptured                             = 3,
	EnemyCaptured                            = 4,
	EDiscoCaptureIconState_MAX               = 5,
};

enum class EDiscoCaptureProgressState : uint8
{
	None                                     = 0,
	AllyProgress                             = 1,
	EnemyProgress                            = 2,
	EDiscoCaptureProgressState_MAX           = 3,
};

enum class EDiscoScoreProgressTypes : uint8
{
	None                                     = 0,
	ProgressSoundMild                        = 1,
	ProgressSoundMedium                      = 2,
	ProgressSoundStrong                      = 3,
	CountdownSoundNormal                     = 4,
	CountdownSoundStrong                     = 5,
	EDiscoScoreProgressTypes_MAX             = 6,
};

enum class EHeistExitCraftUIState : uint8
{
	None                                     = 0,
	OnTheWay                                 = 1,
	Incoming                                 = 2,
	Arrived                                  = 3,
	EHeistExitCraftUIState_MAX               = 4,
};

enum class EHeistBlingIconState : uint8
{
	None                                     = 0,
	SupplyDrop                               = 1,
	PickupItem                               = 2,
	CarriedEnemy                             = 3,
	CarriedAlly                              = 4,
	EHeistBlingIconState_MAX                 = 5,
};

enum class EHeistExitCraftIconState : uint8
{
	None                                     = 0,
	Incoming                                 = 1,
	Spawned                                  = 2,
	Exited                                   = 3,
	EHeistExitCraftIconState_MAX             = 4,
};

enum class EMinigameCaptureObjectiveIconState : uint8
{
	NotCaptured                              = 0,
	Captured                                 = 1,
	EMinigameCaptureObjectiveIconState_MAX   = 2,
};

enum class ETDMScoreProgressTypes : uint8
{
	None                                     = 0,
	ProgressSoundMild                        = 1,
	ProgressSoundMedium                      = 2,
	ProgressSoundStrong                      = 3,
	CountdownSoundNormal                     = 4,
	CountdownSoundStrong                     = 5,
	ETDMScoreProgressTypes_MAX               = 6,
};

enum class EQuestCategoryButtonTimerState : uint8
{
	Countdown                                = 0,
	Custom                                   = 1,
	Disabled                                 = 2,
	None                                     = 3,
	EQuestCategoryButtonTimerState_MAX       = 4,
};

enum class EComboSlotType : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	Combo                                    = 2,
	Creative                                 = 3,
	COUNT                                    = 4,
	EComboSlotType_MAX                       = 5,
};

enum class EBacchusSignalQuality : uint8
{
	None                                     = 0,
	Low                                      = 1,
	Medium                                   = 2,
	High                                     = 3,
	EBacchusSignalQuality_MAX                = 4,
};

enum class ECooldownTrackingType : uint8
{
	Cue                                      = 0,
	AbilityCooldownTags                      = 1,
	COUNT                                    = 2,
	ECooldownTrackingType_MAX                = 3,
};

enum class EFortPrioritizedWidgetInterruptedBehavior : uint8
{
	RemainInQueue                            = 0,
	Drop                                     = 1,
	EFortPrioritizedWidgetInterruptedBehavior_MAX = 2,
};

enum class EAthenaSpectatorNameplateDistanceState : uint8
{
	Near                                     = 0,
	MidDistance                              = 1,
	FurtherThanMaxDistance                   = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3,
};

enum class EAthenaSpectatorNameplateDetailState : uint8
{
	High                                     = 0,
	Low                                      = 1,
	Arrow                                    = 2,
	Off                                      = 3,
	EAthenaSpectatorNameplateDetailState_MAX = 4,
};

enum class EBattleMapTimelineWidgetState : uint8
{
	None                                     = 0,
	HasNext                                  = 1,
	HasPrevious                              = 2,
	IsInReplay                               = 4,
	CanBeScrubbed                            = 8,
	IsStreaming                              = 16,
	Invalid                                  = 32,
	EBattleMapTimelineWidgetState_MAX        = 33,
};

enum class ESpectatorBuildCountType : uint8
{
	BuildCount                               = 0,
	Wood                                     = 1,
	Stone                                    = 2,
	Metal                                    = 3,
	Gold                                     = 4,
	ESpectatorBuildCountType_MAX             = 5,
};

enum class ESpectatorLeaderboardEntryType : uint8
{
	ScoreWithEndScore                        = 0,
	NoEndScore                               = 1,
	Time                                     = 2,
	Invalid                                  = 3,
	ESpectatorLeaderboardEntryType_MAX       = 4,
};

enum class ESpectatorMapPlayerListState : uint8
{
	Default                                  = 0,
	Irrelevant                               = 1,
	Eliminated                               = 2,
	ESpectatorMapPlayerListState_MAX         = 3,
};

enum class ESpectatorPlayerListSortMethod : uint8
{
	SquadId                                  = 0,
	PlayerName                               = 1,
	Eliminations                             = 2,
	EventScore                               = 3,
	State                                    = 4,
	Count                                    = 5,
	ESpectatorPlayerListSortMethod_MAX       = 6,
};

enum class EOptionalFlowSteps : uint8
{
	TryShowMobileGuidedTutorial              = 0,
	TryPlaySeasonTrailer                     = 1,
	TryPlayBattlePassTrailer                 = 2,
	TryShowMOTDs                             = 3,
	TryShowNormalBanModal                    = 4,
	TryShowSocialBanModal                    = 5,
	TryShowMFAModal                          = 6,
	TryShowCrossplayDialog                   = 7,
	TryShowSocialImport                      = 8,
	TryShowSurveys                           = 9,
	TryShowFireModeModal                     = 10,
	TryShowBadMatchPopup                     = 11,
	TryShowMobileInGameAppRating             = 12,
	TryShowSamsungSensorWarning              = 13,
	TryShowBattlePassPurchaseScreen          = 14,
	TryShowMultipleSubscriptionsAlert        = 15,
	TryPushGiftingScreen                     = 16,
	TryPushMessagingScreen                   = 17,
	TryGoToBattlePassTab                     = 18,
	TryShowRefundTokenNotification           = 19,
	TryShowPriceChangeAcknowledgeNotification = 20,
	TryShowFireModeSelectionReminderModal    = 21,
	TryShowSettingsChangeAcknowledgementScreen = 22,
	TryShowMatchmaking                       = 23,
	TryShowEnterCabinModeScreen              = 24,
	EOptionalFlowSteps_MAX                   = 25,
};

enum class EFuelTankState : uint8
{
	Empty                                    = 0,
	LowFuel                                  = 1,
	RegularFuel                              = 2,
	EFuelTankState_MAX                       = 3,
};

enum class EActionBindingComparisonType : uint8
{
	NoneBound                                = 0,
	AnyBound                                 = 1,
	AllBound                                 = 2,
	EActionBindingComparisonType_MAX         = 3,
};

enum class ENumericalIndicatorActionType : uint8
{
	Adding                                   = 0,
	Removing                                 = 1,
	Nothing                                  = 2,
	ENumericalIndicatorActionType_MAX        = 3,
};

enum class ELinkAcrossSimpleAction : uint8
{
	AddToAll                                 = 0,
	RemovedFromAll                           = 1,
	Custom                                   = 2,
	Nothing                                  = 3,
	ELinkAcrossSimpleAction_MAX              = 4,
};

enum class EHUDLayoutToolPopupType : uint8
{
	Warning                                  = 0,
	Generic                                  = 1,
	EHUDLayoutToolPopupType_MAX              = 2,
};

enum class EHUDLayoutToolTextInputPopupType : uint8
{
	Rename                                   = 0,
	ImportLayoutID                           = 1,
	EHUDLayoutToolTextInputPopupType_MAX     = 2,
};

enum class EHUDLayoutToolToasterType : uint8
{
	Success                                  = 0,
	Failure                                  = 1,
	LocalFailure                             = 2,
	CloudFailure                             = 3,
	EHUDLayoutToolToasterType_MAX            = 4,
};

enum class EContextLayoutAccessLevel : uint8
{
	Editable                                 = 0,
	Hidden                                   = 1,
	EContextLayoutAccessLevel_MAX            = 2,
};

enum class EFortMaterialProgressBarSection : uint8
{
	Primary                                  = 0,
	Secondary                                = 1,
	Tertiary                                 = 2,
	Negative                                 = 3,
	MAX_PROGRESS_BAR_SECTIONS                = 4,
	EFortMaterialProgressBarSection_MAX      = 5,
};

enum class EFortMaterialProgressBarSectionColorNumber : uint8
{
	Color1                                   = 0,
	Color2                                   = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2,
};

enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8
{
	PreserveValues                           = 0,
	ReverseCollapse                          = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2,
};

enum class ECrewDetailsTag : uint8
{
	SeasonLaunchBenefit                      = 0,
	MonthlyBenefit                           = 1,
	CrewMonthBenefit                         = 2,
	AvailableUntilBenefit                    = 3,
	MonthlySubscription                      = 4,
	None                                     = 5,
	ECrewDetailsTag_MAX                      = 6,
};

enum class ECrewTileType : uint8
{
	None                                     = 0,
	Basic                                    = 1,
	BattlePass                               = 2,
	CrewPack                                 = 3,
	ProgressiveCosmetic                      = 4,
	ECrewTileType_MAX                        = 5,
};

enum class EAthenaNewsEntryType : uint8
{
	Text                                     = 0,
	Item                                     = 1,
	Website                                  = 2,
	NavigateToTab                            = 3,
	Challenge                                = 4,
	Playlist                                 = 5,
	Setting                                  = 6,
	SpatialScreen                            = 7,
	SmallNews                                = 8,
	NavigateToBattlePassSubPage              = 9,
	Creative                                 = 10,
	NavigateToSubscriptionSubPage            = 11,
	ProgressiveItemLearnMore                 = 12,
	ProgressiveItemReminder                  = 13,
	ProgressiveItemClaimRewards              = 14,
	Event                                    = 15,
	Discovery                                = 16,
	NavigateToCompetitiveSubPage             = 17,
	NavigateToSocialMenu                     = 18,
	NavigateToSocialTagsSubPage              = 19,
	NavigateToRebootRallySubPage             = 20,
	NavigateToMapSubPage                     = 21,
	Invalid                                  = 22,
	EAthenaNewsEntryType_MAX                 = 23,
};

enum class EAthenaNewsStyle : uint8
{
	None                                     = 0,
	SpecialEvent                             = 1,
	SpecialEvent2                            = 2,
	EAthenaNewsStyle_MAX                     = 3,
};

enum class EBuildingFocusType : uint8
{
	Contextual                               = 0,
	Interactable                             = 1,
	Normal                                   = 2,
	Count                                    = 3,
	EBuildingFocusType_MAX                   = 4,
};

enum class EVaultItemLimitStatus : uint8
{
	WellBelowCapacity                        = 0,
	NearCapacity                             = 1,
	AtCapacity                               = 2,
	OverCapacity                             = 3,
	EVaultItemLimitStatus_MAX                = 4,
};

enum class EItemRecyclingRestrictionReason : uint8
{
	InnatelyUnrecyclable                     = 0,
	IsSlottedGroundOperative                 = 1,
	MissingCatalyst                          = 2,
	ItemOutOnExpedition                      = 3,
	InUseByCrafting                          = 4,
	MulchingNotAllowed                       = 5,
	IsSlottedAttributeWorker                 = 6,
	EItemRecyclingRestrictionReason_MAX      = 7,
};

enum class EItemRecyclingWarning : uint8
{
	HighLevel                                = 0,
	HighRarity                               = 1,
	CanSlotInCollectionBook                  = 2,
	EItemRecyclingWarning_MAX                = 3,
};

enum class EConversionControlKeyRequest : uint8
{
	AllKeys                                  = 0,
	NonConsumableKeys                        = 1,
	ConsumableKeys                           = 2,
	EConversionControlKeyRequest_MAX         = 3,
};

enum class ECardPackPurchaseError : uint8
{
	PendingServerConfirmation                = 0,
	CannotAffordItem                         = 1,
	NoneLeft                                 = 2,
	PurchaseAlreadyPending                   = 3,
	NoConnection                             = 4,
	ECardPackPurchaseError_MAX               = 5,
};

enum class EPauseType : uint8
{
	NoPause                                  = 0,
	Rare                                     = 1,
	New                                      = 2,
	NewAndRare                               = 3,
	EPauseType_MAX                           = 4,
};

enum class EShowChannelDetails : uint8
{
	FromMinigameSettings                     = 0,
	ForceShow                                = 1,
	ForceHide                                = 2,
	EShowChannelDetails_MAX                  = 3,
};

enum class EEventBrowserFilter : uint8
{
	Undefined                                = 0,
	Unfiltered                               = 1,
	LinkedDevices                            = 2,
	OnlyFunctions                            = 3,
	OnlyEvents                               = 4,
	EEventBrowserFilter_MAX                  = 5,
};

enum class EEventBrowserSort : uint8
{
	Undefined                                = 0,
	Default                                  = 1,
	Alphabetical                             = 2,
	AlphabeticalReversed                     = 3,
	Favorites                                = 4,
	EEventBrowserSort_MAX                    = 5,
};

enum class EFortCreativeIslandLinkCategory : uint8
{
	Default                                  = 0,
	Favorite                                 = 1,
	Published                                = 2,
	Recent                                   = 3,
	EFortCreativeIslandLinkCategory_MAX      = 4,
};

enum class EFortCreativeIslandSelectTabType : uint8
{
	IslandCode                               = 0,
	ListView                                 = 1,
	EFortCreativeIslandSelectTabType_MAX     = 2,
};

enum class ECreativePublishError : uint8
{
	None                                     = 0,
	RateLimited                              = 1,
	PlotOverBudget                           = 2,
	LinkCodeInvalid                          = 3,
	SanitizationFiltered                     = 4,
	Other                                    = 5,
	ECreativePublishError_MAX                = 6,
};

enum class EConfirmDialogType : uint8
{
	CancelChanges                            = 0,
	CharLimitExceeded                        = 1,
	MarkupWarning                            = 2,
	EConfirmDialogType_MAX                   = 3,
};

enum class EButtonContext : uint8
{
	NoButtonSelected                         = 0,
	ButtonSelected                           = 1,
	StylingButtons                           = 2,
	EButtonContext_MAX                       = 3,
};

enum class EFortCreativeServerPrivacySetting : uint8
{
	Unknown                                  = 0,
	Private                                  = 1,
	Public                                   = 2,
	EFortCreativeServerPrivacySetting_MAX    = 3,
};

enum class EFortActivityBrowserTagType : uint8
{
	Default                                  = 0,
	EpicOriginal                             = 1,
	SquadSize                                = 2,
	MaxPlayers                               = 3,
	XP                                       = 4,
	PurchaseRequired                         = 5,
	DownloadRequired                         = 6,
	EFortActivityBrowserTagType_MAX          = 7,
};

enum class ELeaderboardDisplayType : uint8
{
	Default                                  = 0,
	Extra                                    = 1,
	ELeaderboardDisplayType_MAX              = 2,
};

enum class ESpectatorQueueType : uint8
{
	Invalid                                  = 0,
	Player                                   = 1,
	BroadcastSpectator                       = 2,
	ESpectatorQueueType_MAX                  = 3,
};

enum class EServerAccessSetting : uint8
{
	Invalid                                  = 0,
	FriendsOfCurrentPlayers                  = 1,
	LeaderInviteOnly                         = 2,
	EServerAccessSetting_MAX                 = 3,
};

enum class EFillDisableReason : uint8
{
	Enabled                                  = 0,
	FillDisabledOnPlaylist                   = 1,
	NotPartyLeader                           = 2,
	AlreadyMatchmaking                       = 3,
	PartyTooSmall                            = 4,
	PartyTooBig                              = 5,
	InactiveTournament                       = 6,
	NoSplitscreen                            = 7,
	EFillDisableReason_MAX                   = 8,
};

enum class EFortContentBrowserQuickbarState : uint8
{
	Disabled                                 = 0,
	Creative                                 = 1,
	Primary                                  = 2,
	Trap                                     = 3,
	EFortContentBrowserQuickbarState_MAX     = 4,
};

enum class ECenterPopupMessageStateEnum : uint8
{
	NotVisible                               = 0,
	WaitingForOutpostOwner                   = 1,
	ECenterPopupMessageStateEnum_MAX         = 2,
};

enum class EContextPositionPlatform : uint8
{
	NonMobile                                = 0,
	Mobile                                   = 1,
	EContextPositionPlatform_MAX             = 2,
};

enum class EFortKeybindForcedHoldStatus : uint8
{
	NoForcedHold                             = 0,
	ForcedHold                               = 1,
	NeverShowHold                            = 2,
	EFortKeybindForcedHoldStatus_MAX         = 3,
};

enum class EFortLegacySlateWidget : uint8
{
	None                                     = 0,
	Minimap                                  = 1,
	MAX                                      = 2,
};

enum class EFortModifiedStatus : uint8
{
	IsDefault                                = 0,
	IsModified                               = 1,
	Unsupported                              = 2,
	EFortModifiedStatus_MAX                  = 3,
};

enum class EModalContainerSlot : uint8
{
	Top                                      = 0,
	Middle                                   = 1,
	Bottom                                   = 2,
	Background                               = 3,
	Max                                      = 4,
};

enum class EPinGrantState : uint8
{
	Initial                                  = 0,
	Error                                    = 1,
	Downloading                              = 2,
	Granted                                  = 3,
	EPinGrantState_MAX                       = 4,
};

enum class ERedeemCodeFailureReason : uint8
{
	InvalidCode                              = 0,
	CodeAlreadyUsed                          = 1,
	AlreadyHasAccess                         = 2,
	FailedToGetItem                          = 3,
	Unknown                                  = 4,
	ERedeemCodeFailureReason_MAX             = 5,
};

enum class EFortRewardItemType : uint8
{
	RewardedBadges                           = 0,
	MissedBadges                             = 1,
	RewardedItems                            = 2,
	RewardedAccountItems                     = 3,
	EFortRewardItemType_MAX                  = 4,
};

enum class EFortTouchControlRegion : uint8
{
	MovePlayer                               = 0,
	RotateCamera                             = 1,
	NoRegion                                 = 2,
	COUNT                                    = 3,
	EFortTouchControlRegion_MAX              = 4,
};

enum class EFortControlType : uint8
{
	None                                     = 0,
	CameraAndMovement                        = 1,
	Picking                                  = 2,
	COUNT                                    = 3,
	EFortControlType_MAX                     = 4,
};

enum class ETouchState : uint8
{
	None                                     = 0,
	WaitingForStart                          = 1,
	Started                                  = 2,
	Active                                   = 3,
	COUNT                                    = 4,
	ETouchState_MAX                          = 5,
};

enum class EActivatePanelOption : uint8
{
	Show                                     = 0,
	Hide                                     = 1,
	PlatformDefault                          = 2,
	EActivatePanelOption_MAX                 = 3,
};

enum class EFortNamedBundle : uint8
{
	Menu                                     = 0,
	MenuCampaign                             = 1,
	MenuAthena                               = 2,
	Zone                                     = 3,
	ZoneCampaign                             = 4,
	ZoneAthena                               = 5,
	Client                                   = 6,
	ClientCampaign                           = 7,
	ClientAthena                             = 8,
	EFortNamedBundle_MAX                     = 9,
};

enum class EFortUINavigationOp : uint8
{
	PopContentStack                          = 0,
	FeatureSwitch                            = 1,
	NavigateToSkillTree                      = 2,
	NavigateToSquadSlot                      = 3,
	NavigateToQuest                          = 4,
	NavigateToItemManagement                 = 5,
	NavigateToExpeditions                    = 6,
	NavigateToCollectionBook                 = 7,
	None                                     = 8,
	EFortUINavigationOp_MAX                  = 9,
};

enum class EForcedIntroTextDisplayState : uint8
{
	Initialized                              = 0,
	WaitingForPlaylistPlugin                 = 1,
	WaitingForMatchmakingStartTime           = 2,
	InitialDelay                             = 3,
	Matchmaking                              = 4,
	Success                                  = 5,
	Failure                                  = 6,
	EForcedIntroTextDisplayState_MAX         = 7,
};

enum class EFortAthenaRewardState : uint8
{
	LevelAchieved                            = 0,
	Claimed                                  = 1,
	ForceLocked                              = 2,
	Owned                                    = 3,
	Max_None                                 = 4,
	EFortAthenaRewardState_MAX               = 5,
};

enum class EFortFortMobileShareButtonOS : uint8
{
	Android                                  = 0,
	iOS                                      = 1,
	EFortFortMobileShareButtonOS_MAX         = 2,
};

enum class EItemPreviewRestrictionMode : uint8
{
	AlwaysShowTargetCosmetic                 = 0,
	HideTargetCosmetic                       = 1,
	EItemPreviewRestrictionMode_MAX          = 2,
};

enum class ESceneTransitionType : uint8
{
	NoTransition                             = 0,
	Clockwise                                = 1,
	CounterClockwise                         = 2,
	ESceneTransitionType_MAX                 = 3,
};

enum class EShareButtonType : uint8
{
	IOS                                      = 0,
	Android                                  = 1,
	Generic                                  = 2,
	EShareButtonType_MAX                     = 3,
};

enum class EFortSidebarButtonType : uint8
{
	PartyUp                                  = 0,
	FindFriends                              = 1,
	VoiceChat                                = 2,
	Settings                                 = 3,
	YourProfile                              = 4,
	Tags                                     = 5,
	Exit                                     = 6,
	EFortSidebarButtonType_MAX               = 7,
};

enum class ESidebarExitActions : uint8
{
	None                                     = 0,
	LeaveExperience                          = 1,
	AthenaLeaveAction                        = 2,
	LogOut                                   = 3,
	QuitGame                                 = 4,
	ESidebarExitActions_MAX                  = 5,
};

enum class ESidebarExitConfirmationNavBehavior : uint8
{
	None                                     = 0,
	ButtonYesFocus                           = 1,
	ButtonYesSelection                       = 2,
	ButtonYesFocusSelection                  = 3,
	ButtonNoFocus                            = 4,
	ButtonNoSelection                        = 5,
	ButtonNoFocusSelection                   = 6,
	ESidebarExitConfirmationNavBehavior_MAX  = 7,
};

enum class ESocialTutorialType : uint8
{
	None                                     = 0,
	TagsEditor                               = 1,
	LookingForParty                          = 2,
	LikeIsland                               = 3,
	RebootRallyUsers                         = 4,
	KWSSidebarSupervisedSettings             = 5,
	KWSVoiceChannelPanelSupervisedSettings   = 6,
	ESocialTutorialType_MAX                  = 7,
};

enum class EFortSidebarSocialInteractionArrow : uint8
{
	None                                     = 0,
	Up                                       = 1,
	Down                                     = 2,
	Left                                     = 3,
	Right                                    = 4,
	EFortSidebarSocialInteractionArrow_MAX   = 5,
};

enum class ESocialImportPanelType : uint8
{
	Athena                                   = 0,
	SaveTheWorld                             = 1,
	ESocialImportPanelType_MAX               = 2,
};

enum class EFriendLinkShareButtonType : uint8
{
	IOS                                      = 0,
	Android                                  = 1,
	Generic                                  = 2,
	EFriendLinkShareButtonType_MAX           = 3,
};

enum class ESidebarState : uint8
{
	TabButtons                               = 0,
	UserListPanels                           = 1,
	ExitPopup                                = 2,
	ESidebarState_MAX                        = 3,
};

enum class EListHeaderType : uint8
{
	TeamMember                               = 0,
	PartyMember                              = 1,
	JoinableParty                            = 2,
	PlatformOnlineFriend                     = 3,
	McpOnlineFriend                          = 4,
	OfflineFriend                            = 5,
	Blocked                                  = 6,
	FriendInvite                             = 7,
	SuggestedFriend                          = 8,
	RecentPlayer                             = 9,
	SearchResults                            = 10,
	JoinRequests                             = 11,
	LfgFilter                                = 12,
	LfgPlayers                               = 13,
	LfgInvites                               = 14,
	RebootPlayers                            = 15,
	GameVoice                                = 16,
	PartyVoice                               = 17,
	PlatformVoice                            = 18,
	AwayFriend                               = 19,
	Hidden                                   = 20,
	Invalid                                  = 21,
	EListHeaderType_MAX                      = 22,
};

enum class ESocialTagListHighlightPolicy : uint8
{
	All                                      = 0,
	TagList                                  = 1,
	LocalUser                                = 2,
	FullColor                                = 3,
	ESocialTagListHighlightPolicy_MAX        = 4,
};

enum class ESocialTagCategory : uint8
{
	GameModes                                = 0,
	Mood                                     = 1,
	Utility                                  = 2,
	Competitive                              = 3,
	Other                                    = 4,
	ESocialTagCategory_MAX                   = 5,
};

enum class EParentalControlsViewState : uint8
{
	Invalid                                  = 0,
	EnterPin                                 = 1,
	AskToEnableControls                      = 2,
	VerifyEmail                              = 3,
	SetupEmail                               = 4,
	SetupPin                                 = 5,
	DisplaySettings                          = 6,
	DisableParentalControls                  = 7,
	AskToReEnable                            = 8,
	ReEnabling                               = 9,
	CabinModeEmailChange                     = 10,
	EParentalControlsViewState_MAX           = 11,
};

enum class EParentalControlsCabinEmailViewState : uint8
{
	Initial                                  = 0,
	Sending                                  = 1,
	Sent                                     = 2,
	SendFailed                               = 3,
	EParentalControlsCabinEmailViewState_MAX = 4,
};

enum class ESpatialCustomizationRoomState : uint8
{
	None                                     = 0,
	CategorySelection                        = 1,
	CustomizationSelection                   = 2,
	ESpatialCustomizationRoomState_MAX       = 3,
};

enum class ESpatialCustomizationCategoryState : uint8
{
	LockedByBattlePass                       = 0,
	LockedByChallenge                        = 1,
	LockedByChallengeCompletion              = 2,
	UnlockAvailable                          = 3,
	UnlockUsed                               = 4,
	Max_NONE                                 = 5,
	ESpatialCustomizationCategoryState_MAX   = 6,
};

enum class ETooltipAlignment : uint8
{
	Up                                       = 0,
	Down                                     = 1,
	Left                                     = 2,
	Right                                    = 3,
	ETooltipAlignment_MAX                    = 4,
};

enum class EFortNotificationEntryCompletionStatus : uint8
{
	New                                      = 0,
	Active                                   = 1,
	Completed                                = 2,
	MAX                                      = 3,
};

enum class EFortEarnedSubRewardType : uint8
{
	XP                                       = 0,
	Bars                                     = 1,
	EFortEarnedSubRewardType_MAX             = 2,
};

enum class EItemContextAction : uint8
{
	Equip                                    = 0,
	GoToBattlePassRewards                    = 1,
	GoToBattlePassCustomization              = 2,
	GoToSpecialCollection                    = 3,
	Count                                    = 4,
	EItemContextAction_MAX                   = 5,
};

enum class EFortLoadoutCardType : uint8
{
	Items                                    = 0,
	AddTile                                  = 1,
	AddPreviewItems                          = 2,
	Blank                                    = 3,
	EFortLoadoutCardType_MAX                 = 4,
};

enum class EFortSupportPerkWidgetState : uint8
{
	Normal                                   = 0,
	Upgrade                                  = 1,
	Evolution                                = 2,
	EFortSupportPerkWidgetState_MAX          = 3,
};

enum class EFortItemCountStyle : uint8
{
	StackCount                               = 0,
	OverrideCount                            = 1,
	StackCountOverOverride                   = 2,
	EFortItemCountStyle_MAX                  = 3,
};

enum class EPresentationMode : uint8
{
	ItemList                                 = 0,
	VariantList                              = 1,
	EPresentationMode_MAX                    = 2,
};

enum class ELiveStreamStandaloneBlocked : uint8
{
	StreamInWorldActive                      = 0,
	ELiveStreamStandaloneBlocked_MAX         = 1,
};

enum class EMatchmakingInputSource : uint8
{
	Local                                    = 0,
	Remote                                   = 1,
	Pool                                     = 2,
	EMatchmakingInputSource_MAX              = 3,
};

enum class EUFortActivatableVideoEvents : uint8
{
	Finished                                 = 0,
	Skipped                                  = 1,
	UFortActivatableVideoEvents_MAX          = 2,
};

enum class EUFortActivatablePrePostRollStates : uint8
{
	None                                     = 0,
	PreRoll                                  = 1,
	PreRollComplete                          = 2,
	PostRoll                                 = 3,
	PostRollComplete                         = 4,
	BeginningStepOne                         = 5,
	BeginningStepTwo                         = 6,
	Middle                                   = 7,
	End                                      = 8,
	UFortActivatablePrePostRollStates_MAX    = 9,
};

enum class EUFortActivatableVideoPanelEvents : uint8
{
	Finished                                 = 0,
	Skipped                                  = 1,
	UFortActivatableVideoPanelEvents_MAX     = 2,
};

enum class EFortMissionActivationWidgetState : uint8
{
	Default                                  = 0,
	StartObjective                           = 1,
	IncreaseDifficulty                       = 2,
	Invalid                                  = 3,
	EFortMissionActivationWidgetState_MAX    = 4,
};

enum class EFortAthenaMOTDCloseReason : uint8
{
	Unknown                                  = 0,
	NoMOTDs                                  = 1,
	NullPRM                                  = 2,
	User                                     = 3,
	Action                                   = 4,
	DeepLink                                 = 5,
	EFortAthenaMOTDCloseReason_MAX           = 6,
};

enum class EFortMtxOfferDisplaySize : uint8
{
	Small                                    = 0,
	Medium                                   = 1,
	Large                                    = 2,
	EFortMtxOfferDisplaySize_MAX             = 3,
};

enum class EChannelSpeakerStyle : uint8
{
	InGame                                   = 0,
	InLobby                                  = 1,
	OutOfClient                              = 2,
	Max                                      = 3,
};

enum class EPlayerFeedbackSubmitState : uint8
{
	Start                                    = 0,
	Submitting                               = 1,
	SubmitFailed                             = 2,
	SubmitSucceeded                          = 3,
	EPlayerFeedbackSubmitState_MAX           = 4,
};

enum class EPlayerFeedback_EpicQAState : uint8
{
	SignInPage                               = 0,
	SigningInFailed                          = 1,
	SigningIn                                = 2,
	SelectBugComponent                       = 3,
	EPlayerFeedback_MAX                      = 4,
};

enum class EFortPlayerFeedbackFlags : uint8
{
	SubscreenFlow_ForceDisplayFreeText       = 0,
	SubscreenFlow_IncludeScreenshotSubscreen = 1,
	DoNotDisplay_SaveTheWorld                = 2,
	DoNotDisplay_Athena                      = 3,
	DoNotDisplay_Creative                    = 4,
	Submit_TryDisplayBlockUser               = 5,
	Submit_TryDisplayCommunityRulesURL       = 6,
	EFortPlayerFeedbackFlags_MAX             = 7,
};

enum class ESaveProfileForBanners : uint32
{
	SaveTheWorld                             = 0,
	BattleRoyale                             = 1,
	ESaveProfileForBanners_MAX               = 2,
};

enum class EFortRadialControllingStick : uint8
{
	Right                                    = 0,
	Left                                     = 1,
	EFortRadialControllingStick_MAX          = 2,
};

enum class ECardinalPoint : uint8
{
	E                                        = 0,
	NE                                       = 1,
	N                                        = 2,
	NW                                       = 3,
	W                                        = 4,
	SW                                       = 5,
	S                                        = 6,
	SE                                       = 7,
	None                                     = 8,
	ECardinalPoint_MAX                       = 9,
};

enum class ERadialOrderingMode : uint8
{
	CounterClockwise                         = 0,
	Clockwise                                = 1,
	Cardinal                                 = 2,
	Custom                                   = 3,
	ERadialOrderingMode_MAX                  = 4,
};

enum class EBattlePassPurchaseButtonLayout : uint8
{
	Normal                                   = 0,
	Bundle                                   = 1,
	Normal_PaysForSelf                       = 2,
	EBattlePassPurchaseButtonLayout_MAX      = 3,
};

enum class EBattlePassView : uint8
{
	None                                     = 0,
	LandingPage                              = 1,
	RewardOverview                           = 2,
	ItemDetails                              = 3,
	BulkBuyRewards                           = 4,
	CharacterCustomizer                      = 5,
	BonusRewards                             = 6,
	Weekly                                   = 7,
	Quests                                   = 8,
	EBattlePassView_MAX                      = 9,
};

enum class EBattlePassFeatures : uint8
{
	None                                     = 0,
	BuyBattlePass                            = 1,
	GiftBattlePass                           = 2,
	BuySubscription                          = 3,
	ViewDetails                              = 4,
	WatchVideo                               = 5,
	ShowAbout                                = 6,
	PurchaseResources                        = 7,
	EBattlePassFeatures_MAX                  = 8,
};

enum class EBattlePassCurrencyType : uint8
{
	BattleStar                               = 0,
	CustomSkin                               = 1,
	TOTAL_CURRENCIES                         = 2,
	EBattlePassCurrencyType_MAX              = 3,
};

enum class EBattlePassRewardPrerequisiteType : uint8
{
	RewardCount                              = 0,
	RequiredItems                            = 1,
	Quest                                    = 2,
	NeededLevels                             = 3,
	NONE                                     = 4,
	EBattlePassRewardPrerequisiteType_MAX    = 5,
};

enum class ERewardPageType : uint8
{
	Reward                                   = 0,
	Quest                                    = 1,
	Bonus                                    = 2,
	Customization                            = 3,
	Weekly                                   = 4,
	MAX                                      = 5,
};

enum class EFortDateTimeStyle : uint8
{
	Default                                  = 0,
	Short                                    = 1,
	Medium                                   = 2,
	Long                                     = 3,
	Full                                     = 4,
	EFortDateTimeStyle_MAX                   = 5,
};

enum class EFortShowdownMatchType : uint8
{
	Unknown                                  = 0,
	Solo                                     = 1,
	Duos                                     = 2,
	Squads                                   = 3,
	EFortShowdownMatchType_MAX               = 4,
};

enum class EFortShowdownEventState : uint8
{
	Unknown                                  = 0,
	FutureTBD                                = 1,
	FutureScheduled                          = 2,
	FutureNext                               = 3,
	Live                                     = 4,
	LiveParticipating                        = 5,
	LiveNotParticipating                     = 6,
	Completed                                = 7,
	CompletedParticipated                    = 8,
	CompletedNotPartipated                   = 9,
	Cancelled                                = 10,
	EFortShowdownEventState_MAX              = 11,
};

enum class EFortEventWindowEligibility : uint8
{
	Unknown                                  = 0,
	Public                                   = 1,
	Private                                  = 2,
	Locked                                   = 3,
	EFortEventWindowEligibility_MAX          = 4,
};

enum class EFortShowdownPinState : uint8
{
	None                                     = 0,
	Locked                                   = 1,
	Unlocked                                 = 2,
	EFortShowdownPinState_MAX                = 3,
};

enum class EFortAlterationWidgetState : uint8
{
	Normal                                   = 0,
	Upgrade                                  = 1,
	Evolution                                = 2,
	EFortAlterationWidgetState_MAX           = 3,
};

enum class EFortDefenderSlotType : uint8
{
	Invalid                                  = 0,
	Defender                                 = 1,
	Weapon                                   = 2,
	EFortDefenderSlotType_MAX                = 3,
};

enum class ESubgameLoadFromCMS : uint8
{
	DoNotLoadFromCMS                         = 0,
	LoadImageFromCMS                         = 1,
	ESubgameLoadFromCMS_MAX                  = 2,
};

enum class ESubgameTileType : uint8
{
	Campaign                                 = 0,
	Athena                                   = 1,
	Creative                                 = 2,
	ESubgameTileType_MAX                     = 3,
};

enum class EProgressiveSetProgress : uint8
{
	NoProgress                               = 0,
	PartialProgress                          = 1,
	Completed                                = 2,
	Expired                                  = 3,
	EProgressiveSetProgress_MAX              = 4,
};

enum class ESubscriptionCancellability : uint8
{
	NotCancellable                           = 0,
	CancellabeOnPlatform                     = 1,
	CancellableAnywhere                      = 2,
	ESubscriptionCancellability_MAX          = 3,
};

enum class EFortMemberConnectionState : uint8
{
	Open                                     = 0,
	Connecting                               = 1,
	Connected                                = 2,
	Invalid                                  = 3,
	EFortMemberConnectionState_MAX           = 4,
};

enum class ETournmentPosterViolatorState : uint8
{
	Hidden                                   = 0,
	Live                                     = 1,
	Countdown                                = 2,
	Info                                     = 3,
	ETournmentPosterViolatorState_MAX        = 4,
};

enum class EFortAthenaTutorialStep : uint8
{
	Look                                     = 0,
	Move                                     = 1,
	Harvest                                  = 2,
	Clamber                                  = 3,
	Pickup                                   = 4,
	Shoot                                    = 5,
	Ambush                                   = 6,
	Heal                                     = 7,
	Build                                    = 8,
	Chest                                    = 9,
	Scoping                                  = 10,
	Completed                                = 11,
	Count                                    = 12,
	EFortAthenaTutorialStep_MAX              = 13,
};

enum class EFortAthenaTutorialSubstep : uint8
{
	ScreenSwipeToLook                        = 0,
	ScreenFindMarker                         = 1,
	ScreenUseLeftStick                       = 2,
	ScreenMoveToBuilding                     = 3,
	ScreenJump                               = 4,
	ScreenCrouch                             = 5,
	ScreenReachMarker                        = 6,
	ScreenUsePickaxe                         = 7,
	ScreenReachClamber                       = 8,
	ScreenClamber                            = 9,
	ScreenReachPickUp                        = 10,
	ScreenPickUpItems                        = 11,
	ScreenEquipItem                          = 12,
	ScreenShootTargets                       = 13,
	ScreenReload                             = 14,
	ScreenReachLocation                      = 15,
	ScreenDefendYourself                     = 16,
	ScreenHealthAlert                        = 17,
	ScreenDestroyEnemies                     = 18,
	ScreenCollectLoot                        = 19,
	ScreenUseMedkit                          = 20,
	ScreenUseShield                          = 21,
	ScreenShieldInfo                         = 22,
	ScreenLookForChest                       = 23,
	ScreenChestFound                         = 24,
	ScreenSelectBuildMode                    = 25,
	ScreenShowMaterials                      = 26,
	ScreenShowBuildPieces                    = 27,
	ScreenSelectStairs                       = 28,
	ScreenPlaceStairs                        = 29,
	ScreenReachChest                         = 30,
	ScreenExitBuildMode                      = 31,
	ScreenLootChest                          = 32,
	ScreenCollectLootChest                   = 33,
	ScreenEquipRifle                         = 34,
	ScreenUseScope                           = 35,
	ScreenShootTargetsScoping                = 36,
	ScreenCompleted                          = 37,
	HealingInterrupted                       = 38,
	Count                                    = 39,
	EFortAthenaTutorialSubstep_MAX           = 40,
};

enum class EFortAthenaTutorialScreenExtraWidget : uint8
{
	None                                     = 0,
	DragToTurn                               = 1,
	Completed                                = 2,
	Count                                    = 3,
	EFortAthenaTutorialScreenExtraWidget_MAX = 4,
};

enum class ELetoDisplayMode : uint8
{
	PrimaryOnly                              = 0,
	SingleToggle                             = 1,
	Simultaneous                             = 2,
	ELetoDisplayMode_MAX                     = 3,
};

enum class EFortLoginDisplay : uint8
{
	LoginStatus                              = 0,
	SplashScreen                             = 1,
	SignIn                                   = 2,
	SafeZoneEditor                           = 3,
	HealthWarning                            = 4,
	QualityPresetSelection                   = 5,
	EFortLoginDisplay_MAX                    = 6,
};

enum class EDynamicEntryPatternDirection : uint8
{
	FirstToLast                              = 0,
	LastToFirst                              = 1,
	EDynamicEntryPatternDirection_MAX        = 2,
};

enum class ETutorialButtonInteractionType : uint8
{
	Click                                    = 0,
	Press                                    = 1,
	ETutorialButtonInteractionType_MAX       = 2,
};

enum class EHighlightType : uint8
{
	ESquareHighlight                         = 0,
	ECircleHighlight_Big                     = 1,
	ECircleHighlight_Small                   = 2,
	EHighlightType_MAX                       = 3,
};

struct FFortActivityImageRequest final
{
public:
	TArray<class UFortGameActivity*>              GameActivities;
};
static_assert(alignof(FFortActivityImageRequest) == 0x000008, "Wrong alignment on FFortActivityImageRequest");
static_assert(sizeof(FFortActivityImageRequest) == 0x000010, "Wrong size on FFortActivityImageRequest");
static_assert(offsetof(FFortActivityImageRequest, GameActivities) == 0x000000, "Member 'FFortActivityImageRequest::GameActivities' has a wrong offset!");

struct FFrontendLobbyFXData final
{
public:
	struct FTransform                             Location;
	TSoftObjectPtr<class UNiagaraSystem>          NiagaraFX;
	uint8                                         Pad_88[0x8];
};
static_assert(alignof(FFrontendLobbyFXData) == 0x000010, "Wrong alignment on FFrontendLobbyFXData");
static_assert(sizeof(FFrontendLobbyFXData) == 0x000090, "Wrong size on FFrontendLobbyFXData");
static_assert(offsetof(FFrontendLobbyFXData, Location) == 0x000000, "Member 'FFrontendLobbyFXData::Location' has a wrong offset!");
static_assert(offsetof(FFrontendLobbyFXData, NiagaraFX) == 0x000060, "Member 'FFrontendLobbyFXData::NiagaraFX' has a wrong offset!");

struct FFrontendLobbyData final
{
public:
	TSoftObjectPtr<class UTexture>                Texture;
	TSoftObjectPtr<class UMaterialInstance>       Material;
	TSoftObjectPtr<class UMaterialInstance>       PreBlurMaterial;
	TArray<struct FFrontendLobbyFXData>           SpawnFXList;
	float                                         FadeGrid;
	float                                         FadeFloorToBlack;
};
static_assert(alignof(FFrontendLobbyData) == 0x000008, "Wrong alignment on FFrontendLobbyData");
static_assert(sizeof(FFrontendLobbyData) == 0x000090, "Wrong size on FFrontendLobbyData");
static_assert(offsetof(FFrontendLobbyData, Texture) == 0x000000, "Member 'FFrontendLobbyData::Texture' has a wrong offset!");
static_assert(offsetof(FFrontendLobbyData, Material) == 0x000028, "Member 'FFrontendLobbyData::Material' has a wrong offset!");
static_assert(offsetof(FFrontendLobbyData, PreBlurMaterial) == 0x000050, "Member 'FFrontendLobbyData::PreBlurMaterial' has a wrong offset!");
static_assert(offsetof(FFrontendLobbyData, SpawnFXList) == 0x000078, "Member 'FFrontendLobbyData::SpawnFXList' has a wrong offset!");
static_assert(offsetof(FFrontendLobbyData, FadeGrid) == 0x000088, "Member 'FFrontendLobbyData::FadeGrid' has a wrong offset!");
static_assert(offsetof(FFrontendLobbyData, FadeFloorToBlack) == 0x00008C, "Member 'FFrontendLobbyData::FadeFloorToBlack' has a wrong offset!");

struct FUserAction
{
public:
	uint8                                         Pad_0[0x8];
	class FString                                 ActionName;
};
static_assert(alignof(FUserAction) == 0x000008, "Wrong alignment on FUserAction");
static_assert(sizeof(FUserAction) == 0x000018, "Wrong size on FUserAction");
static_assert(offsetof(FUserAction, ActionName) == 0x000008, "Member 'FUserAction::ActionName' has a wrong offset!");

struct FUserRenameAction final : public FUserAction
{
public:
	class FString                                 PreviousName;
	class FString                                 NewName;
};
static_assert(alignof(FUserRenameAction) == 0x000008, "Wrong alignment on FUserRenameAction");
static_assert(sizeof(FUserRenameAction) == 0x000038, "Wrong size on FUserRenameAction");
static_assert(offsetof(FUserRenameAction, PreviousName) == 0x000018, "Member 'FUserRenameAction::PreviousName' has a wrong offset!");
static_assert(offsetof(FUserRenameAction, NewName) == 0x000028, "Member 'FUserRenameAction::NewName' has a wrong offset!");

struct FAthenaMapScreenContainerTabInfo final
{
public:
	class FText                                   TabTitle;
	TSoftObjectPtr<class UObject>                 TabIcon;
	int32                                         Order;
	bool                                          bDefaultFrontendActiveTab;
	bool                                          bDefaultInGameActiveTab;
	bool                                          bShowPlayerProfile;
	uint8                                         Pad_47[0x1];
	class FName                                   TabId;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FAthenaMapScreenContainerTabInfo) == 0x000008, "Wrong alignment on FAthenaMapScreenContainerTabInfo");
static_assert(sizeof(FAthenaMapScreenContainerTabInfo) == 0x000050, "Wrong size on FAthenaMapScreenContainerTabInfo");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, TabTitle) == 0x000000, "Member 'FAthenaMapScreenContainerTabInfo::TabTitle' has a wrong offset!");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, TabIcon) == 0x000018, "Member 'FAthenaMapScreenContainerTabInfo::TabIcon' has a wrong offset!");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, Order) == 0x000040, "Member 'FAthenaMapScreenContainerTabInfo::Order' has a wrong offset!");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, bDefaultFrontendActiveTab) == 0x000044, "Member 'FAthenaMapScreenContainerTabInfo::bDefaultFrontendActiveTab' has a wrong offset!");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, bDefaultInGameActiveTab) == 0x000045, "Member 'FAthenaMapScreenContainerTabInfo::bDefaultInGameActiveTab' has a wrong offset!");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, bShowPlayerProfile) == 0x000046, "Member 'FAthenaMapScreenContainerTabInfo::bShowPlayerProfile' has a wrong offset!");
static_assert(offsetof(FAthenaMapScreenContainerTabInfo, TabId) == 0x000048, "Member 'FAthenaMapScreenContainerTabInfo::TabId' has a wrong offset!");

struct FProgressiveStageItemInfo final
{
public:
	TArray<class UFortVariantTokenType*>          VariantTokens;
	uint8                                         Pad_10[0x10];
	class FText                                   OverrideName;
	TSoftObjectPtr<class UMaterialInterface>      TileMaterial;
	bool                                          bHidden;
	bool                                          bAllowPreviewStyles;
	bool                                          bIsLocked;
	uint8                                         Pad_63[0x1];
	int32                                         AdditionalMonthsRequired;
	int32                                         StageIndex;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FProgressiveStageItemInfo) == 0x000008, "Wrong alignment on FProgressiveStageItemInfo");
static_assert(sizeof(FProgressiveStageItemInfo) == 0x000070, "Wrong size on FProgressiveStageItemInfo");
static_assert(offsetof(FProgressiveStageItemInfo, VariantTokens) == 0x000000, "Member 'FProgressiveStageItemInfo::VariantTokens' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, OverrideName) == 0x000020, "Member 'FProgressiveStageItemInfo::OverrideName' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, TileMaterial) == 0x000038, "Member 'FProgressiveStageItemInfo::TileMaterial' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, bHidden) == 0x000060, "Member 'FProgressiveStageItemInfo::bHidden' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, bAllowPreviewStyles) == 0x000061, "Member 'FProgressiveStageItemInfo::bAllowPreviewStyles' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, bIsLocked) == 0x000062, "Member 'FProgressiveStageItemInfo::bIsLocked' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, AdditionalMonthsRequired) == 0x000064, "Member 'FProgressiveStageItemInfo::AdditionalMonthsRequired' has a wrong offset!");
static_assert(offsetof(FProgressiveStageItemInfo, StageIndex) == 0x000068, "Member 'FProgressiveStageItemInfo::StageIndex' has a wrong offset!");

struct FFortPrioritizedWidgetData final
{
public:
	EFortPrioritizedWidgetPriority                Priority;
	EFortPrioritizedWidgetContestedBehavior       WhenContesting;
};
static_assert(alignof(FFortPrioritizedWidgetData) == 0x000001, "Wrong alignment on FFortPrioritizedWidgetData");
static_assert(sizeof(FFortPrioritizedWidgetData) == 0x000002, "Wrong size on FFortPrioritizedWidgetData");
static_assert(offsetof(FFortPrioritizedWidgetData, Priority) == 0x000000, "Member 'FFortPrioritizedWidgetData::Priority' has a wrong offset!");
static_assert(offsetof(FFortPrioritizedWidgetData, WhenContesting) == 0x000001, "Member 'FFortPrioritizedWidgetData::WhenContesting' has a wrong offset!");

#pragma pack(push, 0x1)
struct alignas(0x10) FFortTabButtonLabelInfo
{
public:
	class FText                                   DisplayName;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            IconBrush;
	struct FFortPrioritizedWidgetData             PriorityData;
	uint8                                         Pad_E2[0x6];
};
#pragma pack(pop)
static_assert(alignof(FFortTabButtonLabelInfo) == 0x000010, "Wrong alignment on FFortTabButtonLabelInfo");
static_assert(sizeof(FFortTabButtonLabelInfo) == 0x0000F0, "Wrong size on FFortTabButtonLabelInfo");
static_assert(offsetof(FFortTabButtonLabelInfo, DisplayName) == 0x000000, "Member 'FFortTabButtonLabelInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FFortTabButtonLabelInfo, IconBrush) == 0x000020, "Member 'FFortTabButtonLabelInfo::IconBrush' has a wrong offset!");
static_assert(offsetof(FFortTabButtonLabelInfo, PriorityData) == 0x0000E0, "Member 'FFortTabButtonLabelInfo::PriorityData' has a wrong offset!");

struct FGridSortKey final
{
public:
	float                                         Number;
	uint8                                         Pad_4[0x4];
	class FString                                 String;
};
static_assert(alignof(FGridSortKey) == 0x000008, "Wrong alignment on FGridSortKey");
static_assert(sizeof(FGridSortKey) == 0x000018, "Wrong size on FGridSortKey");
static_assert(offsetof(FGridSortKey, Number) == 0x000000, "Member 'FGridSortKey::Number' has a wrong offset!");
static_assert(offsetof(FGridSortKey, String) == 0x000008, "Member 'FGridSortKey::String' has a wrong offset!");

struct FFortActivityScaleFontData final
{
public:
	int32                                         CharacterCountStart;
	int32                                         FontSize;
};
static_assert(alignof(FFortActivityScaleFontData) == 0x000004, "Wrong alignment on FFortActivityScaleFontData");
static_assert(sizeof(FFortActivityScaleFontData) == 0x000008, "Wrong size on FFortActivityScaleFontData");
static_assert(offsetof(FFortActivityScaleFontData, CharacterCountStart) == 0x000000, "Member 'FFortActivityScaleFontData::CharacterCountStart' has a wrong offset!");
static_assert(offsetof(FFortActivityScaleFontData, FontSize) == 0x000004, "Member 'FFortActivityScaleFontData::FontSize' has a wrong offset!");

struct alignas(0x04) FFortHUDState final
{
public:
	uint8                                         bInBuildMode : 1;
	uint8                                         bInCombatMode : 1;
	uint8                                         bInEditMode : 1;
	uint8                                         bInCreativeMode : 1;
	uint8                                         bInBattleLabMode : 1;
	uint8                                         bIsParachuteOpen : 1;
	uint8                                         bIsFreeFalling : 1;
	uint8                                         bInLockedBus : 1;
	uint8                                         bInUnlockedBus : 1;
	uint8                                         bOnTargeting : 1;
	uint8                                         bOnUsingScopeTargeting : 1;
	uint8                                         bOnCanTarget : 1;
	uint8                                         bOnCanUseScopeTargeting : 1;
	uint8                                         bOnCanUseSecondaryAbility : 1;
	uint8                                         bCanOpenChute : 1;
	uint8                                         bCrouching : 1;
	uint8                                         bDBNO : 1;
	uint8                                         bIsControllingRCPawn : 1;
	uint8                                         bIsInVehicle : 1;
	uint8                                         bIsDrivingVehicle : 1;
	uint8                                         bCanSwapSeats : 1;
	uint8                                         bIsCarryingDBNO : 1;
	uint8                                         bIsCarryingHeldObject : 1;
	uint8                                         bIsZiplining : 1;
	uint8                                         bIsCreativeFlying : 1;
	uint8                                         bImprovedDBNO : 1;
};
static_assert(alignof(FFortHUDState) == 0x000004, "Wrong alignment on FFortHUDState");
static_assert(sizeof(FFortHUDState) == 0x000004, "Wrong size on FFortHUDState");

struct FFortFocusedBuildingInfo final
{
public:
	bool                                          bIsInteractable;
	bool                                          bCanBePlayerEdited;
	uint8                                         Pad_2[0x6];
	struct FVector                                IndicatorRelativeLocation;
	EFortBuildingHealthDisplayRule                HealthDisplayRule;
	uint8                                         Pad_21[0x3];
	float                                         MaxHealth;
	bool                                          bIsAnyTrapAttached;
	bool                                          bIsTrapAttachedFacingPlayer;
	bool                                          bIsPreviewTrapAttached;
	uint8                                         Pad_2B[0x1];
	float                                         AttachedTrapMaxDurability;
	EFortBuildingInteraction                      InteractionType;
	uint8                                         Pad_31[0x3];
	int32                                         InteractionCost;
	EFortResourceType                             BuildingMaterial;
	uint8                                         Pad_39[0x3];
	class FName                                   QuickEditClass;
	bool                                          bIsPlayerBuilt;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FFortFocusedBuildingInfo) == 0x000008, "Wrong alignment on FFortFocusedBuildingInfo");
static_assert(sizeof(FFortFocusedBuildingInfo) == 0x000048, "Wrong size on FFortFocusedBuildingInfo");
static_assert(offsetof(FFortFocusedBuildingInfo, bIsInteractable) == 0x000000, "Member 'FFortFocusedBuildingInfo::bIsInteractable' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, bCanBePlayerEdited) == 0x000001, "Member 'FFortFocusedBuildingInfo::bCanBePlayerEdited' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, IndicatorRelativeLocation) == 0x000008, "Member 'FFortFocusedBuildingInfo::IndicatorRelativeLocation' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, HealthDisplayRule) == 0x000020, "Member 'FFortFocusedBuildingInfo::HealthDisplayRule' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, MaxHealth) == 0x000024, "Member 'FFortFocusedBuildingInfo::MaxHealth' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, bIsAnyTrapAttached) == 0x000028, "Member 'FFortFocusedBuildingInfo::bIsAnyTrapAttached' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, bIsTrapAttachedFacingPlayer) == 0x000029, "Member 'FFortFocusedBuildingInfo::bIsTrapAttachedFacingPlayer' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, bIsPreviewTrapAttached) == 0x00002A, "Member 'FFortFocusedBuildingInfo::bIsPreviewTrapAttached' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, AttachedTrapMaxDurability) == 0x00002C, "Member 'FFortFocusedBuildingInfo::AttachedTrapMaxDurability' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, InteractionType) == 0x000030, "Member 'FFortFocusedBuildingInfo::InteractionType' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, InteractionCost) == 0x000034, "Member 'FFortFocusedBuildingInfo::InteractionCost' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, BuildingMaterial) == 0x000038, "Member 'FFortFocusedBuildingInfo::BuildingMaterial' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, QuickEditClass) == 0x00003C, "Member 'FFortFocusedBuildingInfo::QuickEditClass' has a wrong offset!");
static_assert(offsetof(FFortFocusedBuildingInfo, bIsPlayerBuilt) == 0x000040, "Member 'FFortFocusedBuildingInfo::bIsPlayerBuilt' has a wrong offset!");

struct FFortItemCard_StackCountBlock_Configuration final
{
public:
	bool                                          bShowShorthandStackCount;
	uint8                                         Pad_1[0x7];
	TSoftClassPtr<class UClass>                   TextStyle;
};
static_assert(alignof(FFortItemCard_StackCountBlock_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_StackCountBlock_Configuration");
static_assert(sizeof(FFortItemCard_StackCountBlock_Configuration) == 0x000030, "Wrong size on FFortItemCard_StackCountBlock_Configuration");
static_assert(offsetof(FFortItemCard_StackCountBlock_Configuration, bShowShorthandStackCount) == 0x000000, "Member 'FFortItemCard_StackCountBlock_Configuration::bShowShorthandStackCount' has a wrong offset!");
static_assert(offsetof(FFortItemCard_StackCountBlock_Configuration, TextStyle) == 0x000008, "Member 'FFortItemCard_StackCountBlock_Configuration::TextStyle' has a wrong offset!");

struct FFortItemCard_XXS_ItemInstance_Configuration final
{
public:
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
};
static_assert(alignof(FFortItemCard_XXS_ItemInstance_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_XXS_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_XXS_ItemInstance_Configuration) == 0x000030, "Wrong size on FFortItemCard_XXS_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_XXS_ItemInstance_Configuration, StackCountBlock) == 0x000000, "Member 'FFortItemCard_XXS_ItemInstance_Configuration::StackCountBlock' has a wrong offset!");

struct FDiscoTeamScoreData final
{
public:
	class FText                                   CurrScoreText;
	float                                         CurrScorePercent;
	int32                                         CurrScore;
};
static_assert(alignof(FDiscoTeamScoreData) == 0x000008, "Wrong alignment on FDiscoTeamScoreData");
static_assert(sizeof(FDiscoTeamScoreData) == 0x000020, "Wrong size on FDiscoTeamScoreData");
static_assert(offsetof(FDiscoTeamScoreData, CurrScoreText) == 0x000000, "Member 'FDiscoTeamScoreData::CurrScoreText' has a wrong offset!");
static_assert(offsetof(FDiscoTeamScoreData, CurrScorePercent) == 0x000018, "Member 'FDiscoTeamScoreData::CurrScorePercent' has a wrong offset!");
static_assert(offsetof(FDiscoTeamScoreData, CurrScore) == 0x00001C, "Member 'FDiscoTeamScoreData::CurrScore' has a wrong offset!");

struct FUINavigationData final
{
public:
	class FText                                   DisplayName;
	class UObject*                                ObjectData;
	class FName                                   IdData;
	int32                                         IntData;
};
static_assert(alignof(FUINavigationData) == 0x000008, "Wrong alignment on FUINavigationData");
static_assert(sizeof(FUINavigationData) == 0x000028, "Wrong size on FUINavigationData");
static_assert(offsetof(FUINavigationData, DisplayName) == 0x000000, "Member 'FUINavigationData::DisplayName' has a wrong offset!");
static_assert(offsetof(FUINavigationData, ObjectData) == 0x000018, "Member 'FUINavigationData::ObjectData' has a wrong offset!");
static_assert(offsetof(FUINavigationData, IdData) == 0x000020, "Member 'FUINavigationData::IdData' has a wrong offset!");
static_assert(offsetof(FUINavigationData, IntData) == 0x000024, "Member 'FUINavigationData::IntData' has a wrong offset!");

struct FPerkPipData final
{
public:
	class UFortAccoladeItemDefinition*            AccoladeItemDef;
	int32                                         NumOfPips;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FPerkPipData) == 0x000008, "Wrong alignment on FPerkPipData");
static_assert(sizeof(FPerkPipData) == 0x000010, "Wrong size on FPerkPipData");
static_assert(offsetof(FPerkPipData, AccoladeItemDef) == 0x000000, "Member 'FPerkPipData::AccoladeItemDef' has a wrong offset!");
static_assert(offsetof(FPerkPipData, NumOfPips) == 0x000008, "Member 'FPerkPipData::NumOfPips' has a wrong offset!");

struct FAthenaInventoryDropStackSizeRow final : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  ItemTags;
	int32                                         StackSize;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FAthenaInventoryDropStackSizeRow) == 0x000008, "Wrong alignment on FAthenaInventoryDropStackSizeRow");
static_assert(sizeof(FAthenaInventoryDropStackSizeRow) == 0x000030, "Wrong size on FAthenaInventoryDropStackSizeRow");
static_assert(offsetof(FAthenaInventoryDropStackSizeRow, ItemTags) == 0x000008, "Member 'FAthenaInventoryDropStackSizeRow::ItemTags' has a wrong offset!");
static_assert(offsetof(FAthenaInventoryDropStackSizeRow, StackSize) == 0x000028, "Member 'FAthenaInventoryDropStackSizeRow::StackSize' has a wrong offset!");

struct FFortAthenaItemManagementInventoryFilterTabLabelInfo final : public FFortTabButtonLabelInfo
{
public:
	class FName                                   FilterTabNameId;
	bool                                          bAllowEmptySlotItem;
	uint8                                         Pad_ED[0x3];
	class FText                                   EmptyFilterDisplay;
	class FText                                   EmptyArchivedFilterDisplay;
};
static_assert(alignof(FFortAthenaItemManagementInventoryFilterTabLabelInfo) == 0x000010, "Wrong alignment on FFortAthenaItemManagementInventoryFilterTabLabelInfo");
static_assert(sizeof(FFortAthenaItemManagementInventoryFilterTabLabelInfo) == 0x000120, "Wrong size on FFortAthenaItemManagementInventoryFilterTabLabelInfo");
static_assert(offsetof(FFortAthenaItemManagementInventoryFilterTabLabelInfo, FilterTabNameId) == 0x0000E8, "Member 'FFortAthenaItemManagementInventoryFilterTabLabelInfo::FilterTabNameId' has a wrong offset!");
static_assert(offsetof(FFortAthenaItemManagementInventoryFilterTabLabelInfo, bAllowEmptySlotItem) == 0x0000EC, "Member 'FFortAthenaItemManagementInventoryFilterTabLabelInfo::bAllowEmptySlotItem' has a wrong offset!");
static_assert(offsetof(FFortAthenaItemManagementInventoryFilterTabLabelInfo, EmptyFilterDisplay) == 0x0000F0, "Member 'FFortAthenaItemManagementInventoryFilterTabLabelInfo::EmptyFilterDisplay' has a wrong offset!");
static_assert(offsetof(FFortAthenaItemManagementInventoryFilterTabLabelInfo, EmptyArchivedFilterDisplay) == 0x000108, "Member 'FFortAthenaItemManagementInventoryFilterTabLabelInfo::EmptyArchivedFilterDisplay' has a wrong offset!");

struct FFortItemCard_TierMeter_Configuration final
{
public:
	struct FVector2D                              PipSize;
	float                                         InterPipPadding;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FFortItemCard_TierMeter_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_TierMeter_Configuration");
static_assert(sizeof(FFortItemCard_TierMeter_Configuration) == 0x000018, "Wrong size on FFortItemCard_TierMeter_Configuration");
static_assert(offsetof(FFortItemCard_TierMeter_Configuration, PipSize) == 0x000000, "Member 'FFortItemCard_TierMeter_Configuration::PipSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_TierMeter_Configuration, InterPipPadding) == 0x000010, "Member 'FFortItemCard_TierMeter_Configuration::InterPipPadding' has a wrong offset!");

struct FFortItemCard_PowerRatingBlock_Configuration
{
public:
	uint8                                         Pad_0[0x10];
	struct FSlateBrush                            MoonbeamBorderBrush;
	struct FMargin                                MoonbeamBorderExteriorPadding;
	struct FMargin                                MoonbeamBorderPadding;
	struct FMargin                                CustomRatingInternalPadding;
	struct FVector2D                              CustomRatingIconSize;
	TSoftClassPtr<class UClass>                   CustomRatingTextStyle;
	struct FVector2D                              ComparisonIndicatorSize;
	uint8                                         Pad_148[0x8];
};
static_assert(alignof(FFortItemCard_PowerRatingBlock_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_PowerRatingBlock_Configuration");
static_assert(sizeof(FFortItemCard_PowerRatingBlock_Configuration) == 0x000150, "Wrong size on FFortItemCard_PowerRatingBlock_Configuration");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, MoonbeamBorderBrush) == 0x000010, "Member 'FFortItemCard_PowerRatingBlock_Configuration::MoonbeamBorderBrush' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, MoonbeamBorderExteriorPadding) == 0x0000D0, "Member 'FFortItemCard_PowerRatingBlock_Configuration::MoonbeamBorderExteriorPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, MoonbeamBorderPadding) == 0x0000E0, "Member 'FFortItemCard_PowerRatingBlock_Configuration::MoonbeamBorderPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, CustomRatingInternalPadding) == 0x0000F0, "Member 'FFortItemCard_PowerRatingBlock_Configuration::CustomRatingInternalPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, CustomRatingIconSize) == 0x000100, "Member 'FFortItemCard_PowerRatingBlock_Configuration::CustomRatingIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, CustomRatingTextStyle) == 0x000110, "Member 'FFortItemCard_PowerRatingBlock_Configuration::CustomRatingTextStyle' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_Configuration, ComparisonIndicatorSize) == 0x000138, "Member 'FFortItemCard_PowerRatingBlock_Configuration::ComparisonIndicatorSize' has a wrong offset!");

struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration final : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                            PersonnelPowerRatingIconBrush;
	TSoftClassPtr<class UClass>                   PersonnelPowerRatingTextStyle;
	uint8                                         Pad_238[0x8];
	struct FSlateBrush                            SchematicPowerRatingIconBrush;
	TSoftClassPtr<class UClass>                   SchematicPowerRatingTextStyle;
	uint8                                         Pad_328[0x8];
};
static_assert(alignof(FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration");
static_assert(sizeof(FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration) == 0x000330, "Wrong size on FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration, PersonnelPowerRatingIconBrush) == 0x000150, "Member 'FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration::PersonnelPowerRatingIconBrush' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration, PersonnelPowerRatingTextStyle) == 0x000210, "Member 'FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration::PersonnelPowerRatingTextStyle' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration, SchematicPowerRatingIconBrush) == 0x000240, "Member 'FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration::SchematicPowerRatingIconBrush' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration, SchematicPowerRatingTextStyle) == 0x000300, "Member 'FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration::SchematicPowerRatingTextStyle' has a wrong offset!");

struct FFortItemCard_NameplateBorder_Configuration final
{
public:
	struct FMargin                                Padding;
	struct FSlateBrush                            Brush;
};
static_assert(alignof(FFortItemCard_NameplateBorder_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_NameplateBorder_Configuration");
static_assert(sizeof(FFortItemCard_NameplateBorder_Configuration) == 0x0000D0, "Wrong size on FFortItemCard_NameplateBorder_Configuration");
static_assert(offsetof(FFortItemCard_NameplateBorder_Configuration, Padding) == 0x000000, "Member 'FFortItemCard_NameplateBorder_Configuration::Padding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_NameplateBorder_Configuration, Brush) == 0x000010, "Member 'FFortItemCard_NameplateBorder_Configuration::Brush' has a wrong offset!");

struct FFortItemCard_DefenderWeaponTypeIcon_Configuration final
{
public:
	struct FVector2D                              IconConstraints;
};
static_assert(alignof(FFortItemCard_DefenderWeaponTypeIcon_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_DefenderWeaponTypeIcon_Configuration");
static_assert(sizeof(FFortItemCard_DefenderWeaponTypeIcon_Configuration) == 0x000010, "Wrong size on FFortItemCard_DefenderWeaponTypeIcon_Configuration");
static_assert(offsetof(FFortItemCard_DefenderWeaponTypeIcon_Configuration, IconConstraints) == 0x000000, "Member 'FFortItemCard_DefenderWeaponTypeIcon_Configuration::IconConstraints' has a wrong offset!");

struct FFortItemCard_DetailAreaBorder_Configuration final
{
public:
	float                                         MinimumHeight;
	struct FMargin                                Padding;
};
static_assert(alignof(FFortItemCard_DetailAreaBorder_Configuration) == 0x000004, "Wrong alignment on FFortItemCard_DetailAreaBorder_Configuration");
static_assert(sizeof(FFortItemCard_DetailAreaBorder_Configuration) == 0x000014, "Wrong size on FFortItemCard_DetailAreaBorder_Configuration");
static_assert(offsetof(FFortItemCard_DetailAreaBorder_Configuration, MinimumHeight) == 0x000000, "Member 'FFortItemCard_DetailAreaBorder_Configuration::MinimumHeight' has a wrong offset!");
static_assert(offsetof(FFortItemCard_DetailAreaBorder_Configuration, Padding) == 0x000004, "Member 'FFortItemCard_DetailAreaBorder_Configuration::Padding' has a wrong offset!");

struct FFortItemCard_LevelMeter_Configuration final
{
public:
	float                                         MeterThickness;
	struct FMargin                                MeterPadding;
};
static_assert(alignof(FFortItemCard_LevelMeter_Configuration) == 0x000004, "Wrong alignment on FFortItemCard_LevelMeter_Configuration");
static_assert(sizeof(FFortItemCard_LevelMeter_Configuration) == 0x000014, "Wrong size on FFortItemCard_LevelMeter_Configuration");
static_assert(offsetof(FFortItemCard_LevelMeter_Configuration, MeterThickness) == 0x000000, "Member 'FFortItemCard_LevelMeter_Configuration::MeterThickness' has a wrong offset!");
static_assert(offsetof(FFortItemCard_LevelMeter_Configuration, MeterPadding) == 0x000004, "Member 'FFortItemCard_LevelMeter_Configuration::MeterPadding' has a wrong offset!");

struct FFortItemCard_S_PersonnelAndSchematics_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;
	struct FVector2D                              ClassIconSize;
	struct FVector2D                              LeadSurvivorTypeIconSize;
	struct FVector2D                              FirstIconSlotSize;
	float                                         PaddingBetweenIconSlots;
	uint8                                         Pad_454[0x4];
	struct FVector2D                              SecondIconSlotSize;
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;
	float                                         TierMeterLeftPadding;
	uint8                                         Pad_4A4[0x4];
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
};
static_assert(alignof(FFortItemCard_S_PersonnelAndSchematics_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_S_PersonnelAndSchematics_Configuration");
static_assert(sizeof(FFortItemCard_S_PersonnelAndSchematics_Configuration) == 0x0004C0, "Wrong size on FFortItemCard_S_PersonnelAndSchematics_Configuration");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, PowerRatingBlock) == 0x000010, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, BookmarkImageSize) == 0x000340, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, Nameplate) == 0x000350, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::Nameplate' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, ClassIconSize) == 0x000420, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::ClassIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, LeadSurvivorTypeIconSize) == 0x000430, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::LeadSurvivorTypeIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, FirstIconSlotSize) == 0x000440, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::FirstIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, PaddingBetweenIconSlots) == 0x000450, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::PaddingBetweenIconSlots' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, SecondIconSlotSize) == 0x000458, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::SecondIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, DefenderWeaponTypeIcon) == 0x000468, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::DefenderWeaponTypeIcon' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, DetailAreaBorder) == 0x000478, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::DetailAreaBorder' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, LevelMeter) == 0x00048C, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::LevelMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, TierMeterLeftPadding) == 0x0004A0, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::TierMeterLeftPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_PersonnelAndSchematics_Configuration, TierMeter) == 0x0004A8, "Member 'FFortItemCard_S_PersonnelAndSchematics_Configuration::TierMeter' has a wrong offset!");

struct FAthenaWinnerInfo final
{
public:
	class FString                                 BigNameWinnerName;
	TArray<class FString>                         WinnerNames;
};
static_assert(alignof(FAthenaWinnerInfo) == 0x000008, "Wrong alignment on FAthenaWinnerInfo");
static_assert(sizeof(FAthenaWinnerInfo) == 0x000020, "Wrong size on FAthenaWinnerInfo");
static_assert(offsetof(FAthenaWinnerInfo, BigNameWinnerName) == 0x000000, "Member 'FAthenaWinnerInfo::BigNameWinnerName' has a wrong offset!");
static_assert(offsetof(FAthenaWinnerInfo, WinnerNames) == 0x000010, "Member 'FAthenaWinnerInfo::WinnerNames' has a wrong offset!");

struct FFortItemCard_DurabilityMeter_Configuration final
{
public:
	float                                         MeterThickness;
	struct FMargin                                MeterPadding;
};
static_assert(alignof(FFortItemCard_DurabilityMeter_Configuration) == 0x000004, "Wrong alignment on FFortItemCard_DurabilityMeter_Configuration");
static_assert(sizeof(FFortItemCard_DurabilityMeter_Configuration) == 0x000014, "Wrong size on FFortItemCard_DurabilityMeter_Configuration");
static_assert(offsetof(FFortItemCard_DurabilityMeter_Configuration, MeterThickness) == 0x000000, "Member 'FFortItemCard_DurabilityMeter_Configuration::MeterThickness' has a wrong offset!");
static_assert(offsetof(FFortItemCard_DurabilityMeter_Configuration, MeterPadding) == 0x000004, "Member 'FFortItemCard_DurabilityMeter_Configuration::MeterPadding' has a wrong offset!");

struct FFortUIFeatureStruct final
{
public:
	EFortUIFeatureState                           CurrentState;
	EFortUIFeatureState                           ForcedState;
	EFortUIFeatureStateReason                     ForcedStateReason;
	uint8                                         Pad_3[0x5];
	TMulticastInlineDelegate<void(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)> ChangeDelegate;
};
static_assert(alignof(FFortUIFeatureStruct) == 0x000008, "Wrong alignment on FFortUIFeatureStruct");
static_assert(sizeof(FFortUIFeatureStruct) == 0x000018, "Wrong size on FFortUIFeatureStruct");
static_assert(offsetof(FFortUIFeatureStruct, CurrentState) == 0x000000, "Member 'FFortUIFeatureStruct::CurrentState' has a wrong offset!");
static_assert(offsetof(FFortUIFeatureStruct, ForcedState) == 0x000001, "Member 'FFortUIFeatureStruct::ForcedState' has a wrong offset!");
static_assert(offsetof(FFortUIFeatureStruct, ForcedStateReason) == 0x000002, "Member 'FFortUIFeatureStruct::ForcedStateReason' has a wrong offset!");
static_assert(offsetof(FFortUIFeatureStruct, ChangeDelegate) == 0x000008, "Member 'FFortUIFeatureStruct::ChangeDelegate' has a wrong offset!");

struct FFortPostGameScreenConfig final
{
public:
	EPostGameClickCatcherMode                     ClickCatcherState;
	EPostGameHUDMode                              PostGameHUDMode;
	bool                                          bSohwCinematicBars;
	bool                                          bShowPlacementOverlay;
	bool                                          bPutPawnInStasis;
	bool                                          bAllowEmotesInStasis;
};
static_assert(alignof(FFortPostGameScreenConfig) == 0x000001, "Wrong alignment on FFortPostGameScreenConfig");
static_assert(sizeof(FFortPostGameScreenConfig) == 0x000006, "Wrong size on FFortPostGameScreenConfig");
static_assert(offsetof(FFortPostGameScreenConfig, ClickCatcherState) == 0x000000, "Member 'FFortPostGameScreenConfig::ClickCatcherState' has a wrong offset!");
static_assert(offsetof(FFortPostGameScreenConfig, PostGameHUDMode) == 0x000001, "Member 'FFortPostGameScreenConfig::PostGameHUDMode' has a wrong offset!");
static_assert(offsetof(FFortPostGameScreenConfig, bSohwCinematicBars) == 0x000002, "Member 'FFortPostGameScreenConfig::bSohwCinematicBars' has a wrong offset!");
static_assert(offsetof(FFortPostGameScreenConfig, bShowPlacementOverlay) == 0x000003, "Member 'FFortPostGameScreenConfig::bShowPlacementOverlay' has a wrong offset!");
static_assert(offsetof(FFortPostGameScreenConfig, bPutPawnInStasis) == 0x000004, "Member 'FFortPostGameScreenConfig::bPutPawnInStasis' has a wrong offset!");
static_assert(offsetof(FFortPostGameScreenConfig, bAllowEmotesInStasis) == 0x000005, "Member 'FFortPostGameScreenConfig::bAllowEmotesInStasis' has a wrong offset!");

struct FCrewTableRow final
{
public:
	TArray<class FText>                           RowData;
	bool                                          bIsHeaderRow;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FCrewTableRow) == 0x000008, "Wrong alignment on FCrewTableRow");
static_assert(sizeof(FCrewTableRow) == 0x000018, "Wrong size on FCrewTableRow");
static_assert(offsetof(FCrewTableRow, RowData) == 0x000000, "Member 'FCrewTableRow::RowData' has a wrong offset!");
static_assert(offsetof(FCrewTableRow, bIsHeaderRow) == 0x000010, "Member 'FCrewTableRow::bIsHeaderRow' has a wrong offset!");

struct FFortItemCard_XL_PersonnelAndSchematics_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;
	TSoftClassPtr<class UClass>                   ItemNameTextStyle;
	struct FVector2D                              LeadSurvivorTypeIconSize;
	struct FVector2D                              FirstIconSlotSize;
	float                                         PaddingBetweenIconSlots;
	uint8                                         Pad_46C[0x4];
	struct FVector2D                              SecondIconSlotSize;
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
	float                                         RarityNameTextLeftPadding;
	TSoftClassPtr<class UClass>                   RarityNameTextStyle;
	float                                         ClassIconImageLeftPadding;
	uint8                                         Pad_4D4[0x4];
	struct FVector2D                              ClassIconSize;
	float                                         PaddingBetweenClassIconAndName;
	uint8                                         Pad_4EC[0x4];
	TSoftClassPtr<class UClass>                   ClassNameTextStyle;
	float                                         TierMeterLeftPadding;
	uint8                                         Pad_51C[0x4];
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
	struct FMargin                                IconSlotOverNameplatePadding;
	struct FVector2D                              IconSlotOverNameplateSize;
	uint8                                         Pad_558[0x8];
};
static_assert(alignof(FFortItemCard_XL_PersonnelAndSchematics_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_XL_PersonnelAndSchematics_Configuration");
static_assert(sizeof(FFortItemCard_XL_PersonnelAndSchematics_Configuration) == 0x000560, "Wrong size on FFortItemCard_XL_PersonnelAndSchematics_Configuration");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, PowerRatingBlock) == 0x000010, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, BookmarkImageSize) == 0x000340, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, Nameplate) == 0x000350, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::Nameplate' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, ItemNameTextStyle) == 0x000420, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::ItemNameTextStyle' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, LeadSurvivorTypeIconSize) == 0x000448, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::LeadSurvivorTypeIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, FirstIconSlotSize) == 0x000458, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::FirstIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, PaddingBetweenIconSlots) == 0x000468, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::PaddingBetweenIconSlots' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, SecondIconSlotSize) == 0x000470, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::SecondIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, DefenderWeaponTypeIcon) == 0x000480, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::DefenderWeaponTypeIcon' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, DetailAreaBorder) == 0x000490, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::DetailAreaBorder' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, RarityNameTextLeftPadding) == 0x0004A4, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::RarityNameTextLeftPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, RarityNameTextStyle) == 0x0004A8, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::RarityNameTextStyle' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, ClassIconImageLeftPadding) == 0x0004D0, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::ClassIconImageLeftPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, ClassIconSize) == 0x0004D8, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::ClassIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, PaddingBetweenClassIconAndName) == 0x0004E8, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::PaddingBetweenClassIconAndName' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, ClassNameTextStyle) == 0x0004F0, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::ClassNameTextStyle' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, TierMeterLeftPadding) == 0x000518, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::TierMeterLeftPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, TierMeter) == 0x000520, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::TierMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, IconSlotOverNameplatePadding) == 0x000538, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::IconSlotOverNameplatePadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_PersonnelAndSchematics_Configuration, IconSlotOverNameplateSize) == 0x000548, "Member 'FFortItemCard_XL_PersonnelAndSchematics_Configuration::IconSlotOverNameplateSize' has a wrong offset!");

struct FFortUIStatStyle final
{
public:
	class FText                                   Name;
	class FText                                   HighestText;
	struct FSlateBrush                            Icon;
	ECommonNumericType                            NumericType;
	uint8                                         Pad_F1[0x3];
	float                                         MinimalNotableValue;
	uint8                                         Pad_F8[0x8];
};
static_assert(alignof(FFortUIStatStyle) == 0x000010, "Wrong alignment on FFortUIStatStyle");
static_assert(sizeof(FFortUIStatStyle) == 0x000100, "Wrong size on FFortUIStatStyle");
static_assert(offsetof(FFortUIStatStyle, Name) == 0x000000, "Member 'FFortUIStatStyle::Name' has a wrong offset!");
static_assert(offsetof(FFortUIStatStyle, HighestText) == 0x000018, "Member 'FFortUIStatStyle::HighestText' has a wrong offset!");
static_assert(offsetof(FFortUIStatStyle, Icon) == 0x000030, "Member 'FFortUIStatStyle::Icon' has a wrong offset!");
static_assert(offsetof(FFortUIStatStyle, NumericType) == 0x0000F0, "Member 'FFortUIStatStyle::NumericType' has a wrong offset!");
static_assert(offsetof(FFortUIStatStyle, MinimalNotableValue) == 0x0000F4, "Member 'FFortUIStatStyle::MinimalNotableValue' has a wrong offset!");

struct FAthenaTeamDisplayInfo final
{
public:
	TSoftObjectPtr<class UObject>                 Icon;
	TSoftObjectPtr<class UObject>                 Ribbon;
	class FText                                   Name;
	struct FLinearColor                           TextColor;
	struct FLinearColor                           PedestalColor;
};
static_assert(alignof(FAthenaTeamDisplayInfo) == 0x000008, "Wrong alignment on FAthenaTeamDisplayInfo");
static_assert(sizeof(FAthenaTeamDisplayInfo) == 0x000088, "Wrong size on FAthenaTeamDisplayInfo");
static_assert(offsetof(FAthenaTeamDisplayInfo, Icon) == 0x000000, "Member 'FAthenaTeamDisplayInfo::Icon' has a wrong offset!");
static_assert(offsetof(FAthenaTeamDisplayInfo, Ribbon) == 0x000028, "Member 'FAthenaTeamDisplayInfo::Ribbon' has a wrong offset!");
static_assert(offsetof(FAthenaTeamDisplayInfo, Name) == 0x000050, "Member 'FAthenaTeamDisplayInfo::Name' has a wrong offset!");
static_assert(offsetof(FAthenaTeamDisplayInfo, TextColor) == 0x000068, "Member 'FAthenaTeamDisplayInfo::TextColor' has a wrong offset!");
static_assert(offsetof(FAthenaTeamDisplayInfo, PedestalColor) == 0x000078, "Member 'FAthenaTeamDisplayInfo::PedestalColor' has a wrong offset!");

struct FPrimaryContentSetup final
{
public:
	bool                                          bShowBottomBar;
	bool                                          bShowChatWidget;
	bool                                          bShowTopBar;
};
static_assert(alignof(FPrimaryContentSetup) == 0x000001, "Wrong alignment on FPrimaryContentSetup");
static_assert(sizeof(FPrimaryContentSetup) == 0x000003, "Wrong size on FPrimaryContentSetup");
static_assert(offsetof(FPrimaryContentSetup, bShowBottomBar) == 0x000000, "Member 'FPrimaryContentSetup::bShowBottomBar' has a wrong offset!");
static_assert(offsetof(FPrimaryContentSetup, bShowChatWidget) == 0x000001, "Member 'FPrimaryContentSetup::bShowChatWidget' has a wrong offset!");
static_assert(offsetof(FPrimaryContentSetup, bShowTopBar) == 0x000002, "Member 'FPrimaryContentSetup::bShowTopBar' has a wrong offset!");

struct FAthenaVariantFilterTabInfo final
{
public:
	TSoftObjectPtr<class UObject>                 Icon;
	class FText                                   Label;
	struct FGameplayTagContainer                  IncludedVariantChannels;
	TArray<struct FMcpVariantChannelInfo>         ForcedVariantSelections;
	float                                         ZoomLevel;
	bool                                          bDisableScrollBox;
	uint8                                         Pad_75[0x3];
};
static_assert(alignof(FAthenaVariantFilterTabInfo) == 0x000008, "Wrong alignment on FAthenaVariantFilterTabInfo");
static_assert(sizeof(FAthenaVariantFilterTabInfo) == 0x000078, "Wrong size on FAthenaVariantFilterTabInfo");
static_assert(offsetof(FAthenaVariantFilterTabInfo, Icon) == 0x000000, "Member 'FAthenaVariantFilterTabInfo::Icon' has a wrong offset!");
static_assert(offsetof(FAthenaVariantFilterTabInfo, Label) == 0x000028, "Member 'FAthenaVariantFilterTabInfo::Label' has a wrong offset!");
static_assert(offsetof(FAthenaVariantFilterTabInfo, IncludedVariantChannels) == 0x000040, "Member 'FAthenaVariantFilterTabInfo::IncludedVariantChannels' has a wrong offset!");
static_assert(offsetof(FAthenaVariantFilterTabInfo, ForcedVariantSelections) == 0x000060, "Member 'FAthenaVariantFilterTabInfo::ForcedVariantSelections' has a wrong offset!");
static_assert(offsetof(FAthenaVariantFilterTabInfo, ZoomLevel) == 0x000070, "Member 'FAthenaVariantFilterTabInfo::ZoomLevel' has a wrong offset!");
static_assert(offsetof(FAthenaVariantFilterTabInfo, bDisableScrollBox) == 0x000074, "Member 'FAthenaVariantFilterTabInfo::bDisableScrollBox' has a wrong offset!");

struct FAthenaVariantFilterTabInfo_Primary final
{
public:
	struct FAthenaVariantFilterTabInfo            PrimaryTab;
	TArray<struct FAthenaVariantFilterTabInfo>    SubTabs;
};
static_assert(alignof(FAthenaVariantFilterTabInfo_Primary) == 0x000008, "Wrong alignment on FAthenaVariantFilterTabInfo_Primary");
static_assert(sizeof(FAthenaVariantFilterTabInfo_Primary) == 0x000088, "Wrong size on FAthenaVariantFilterTabInfo_Primary");
static_assert(offsetof(FAthenaVariantFilterTabInfo_Primary, PrimaryTab) == 0x000000, "Member 'FAthenaVariantFilterTabInfo_Primary::PrimaryTab' has a wrong offset!");
static_assert(offsetof(FAthenaVariantFilterTabInfo_Primary, SubTabs) == 0x000078, "Member 'FAthenaVariantFilterTabInfo_Primary::SubTabs' has a wrong offset!");

struct FFortWeaponBoardDisplaySlot final
{
public:
	struct FGameplayTag                           RequiredTag;
	uint8                                         Pad_4[0xC];
	struct FTransform                             MeshRelativeTransform;
	struct FVector                                LocalOffsetMultiplier;
	uint8                                         Pad_88[0x8];
};
static_assert(alignof(FFortWeaponBoardDisplaySlot) == 0x000010, "Wrong alignment on FFortWeaponBoardDisplaySlot");
static_assert(sizeof(FFortWeaponBoardDisplaySlot) == 0x000090, "Wrong size on FFortWeaponBoardDisplaySlot");
static_assert(offsetof(FFortWeaponBoardDisplaySlot, RequiredTag) == 0x000000, "Member 'FFortWeaponBoardDisplaySlot::RequiredTag' has a wrong offset!");
static_assert(offsetof(FFortWeaponBoardDisplaySlot, MeshRelativeTransform) == 0x000010, "Member 'FFortWeaponBoardDisplaySlot::MeshRelativeTransform' has a wrong offset!");
static_assert(offsetof(FFortWeaponBoardDisplaySlot, LocalOffsetMultiplier) == 0x000070, "Member 'FFortWeaponBoardDisplaySlot::LocalOffsetMultiplier' has a wrong offset!");

struct FFortTabListRegistrationInfo final
{
public:
	class FName                                   TabNameID;
	bool                                          bHidden;
	bool                                          bAllowedInZone;
	uint8                                         Pad_6[0xA];
	struct FFortTabButtonLabelInfo                TabLabelInfo;
	TSubclassOf<class UCommonButtonBase>          TabButtonType;
	TSubclassOf<class UCommonUserWidget>          TabContentType;
	class UWidget*                                CreatedTabContentWidget;
	uint8                                         Pad_118[0x8];
};
static_assert(alignof(FFortTabListRegistrationInfo) == 0x000010, "Wrong alignment on FFortTabListRegistrationInfo");
static_assert(sizeof(FFortTabListRegistrationInfo) == 0x000120, "Wrong size on FFortTabListRegistrationInfo");
static_assert(offsetof(FFortTabListRegistrationInfo, TabNameID) == 0x000000, "Member 'FFortTabListRegistrationInfo::TabNameID' has a wrong offset!");
static_assert(offsetof(FFortTabListRegistrationInfo, bHidden) == 0x000004, "Member 'FFortTabListRegistrationInfo::bHidden' has a wrong offset!");
static_assert(offsetof(FFortTabListRegistrationInfo, bAllowedInZone) == 0x000005, "Member 'FFortTabListRegistrationInfo::bAllowedInZone' has a wrong offset!");
static_assert(offsetof(FFortTabListRegistrationInfo, TabLabelInfo) == 0x000010, "Member 'FFortTabListRegistrationInfo::TabLabelInfo' has a wrong offset!");
static_assert(offsetof(FFortTabListRegistrationInfo, TabButtonType) == 0x000100, "Member 'FFortTabListRegistrationInfo::TabButtonType' has a wrong offset!");
static_assert(offsetof(FFortTabListRegistrationInfo, TabContentType) == 0x000108, "Member 'FFortTabListRegistrationInfo::TabContentType' has a wrong offset!");
static_assert(offsetof(FFortTabListRegistrationInfo, CreatedTabContentWidget) == 0x000110, "Member 'FFortTabListRegistrationInfo::CreatedTabContentWidget' has a wrong offset!");

struct FCrewPlatformAndCountriesPair final
{
public:
	EAppStore                                     SubscriptionPlatform;
	uint8                                         Pad_1[0x7];
	class FString                                 CountryCodes;
};
static_assert(alignof(FCrewPlatformAndCountriesPair) == 0x000008, "Wrong alignment on FCrewPlatformAndCountriesPair");
static_assert(sizeof(FCrewPlatformAndCountriesPair) == 0x000018, "Wrong size on FCrewPlatformAndCountriesPair");
static_assert(offsetof(FCrewPlatformAndCountriesPair, SubscriptionPlatform) == 0x000000, "Member 'FCrewPlatformAndCountriesPair::SubscriptionPlatform' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesPair, CountryCodes) == 0x000008, "Member 'FCrewPlatformAndCountriesPair::CountryCodes' has a wrong offset!");

struct alignas(0x08) FFortBackendVersion final
{
public:
	uint8                                         Pad_0[0x98];
};
static_assert(alignof(FFortBackendVersion) == 0x000008, "Wrong alignment on FFortBackendVersion");
static_assert(sizeof(FFortBackendVersion) == 0x000098, "Wrong size on FFortBackendVersion");

struct FFortAttributeModifierDisplayData final
{
public:
	struct FGameplayAttribute                     Attribute;
	float                                         Value;
	EGameplayModOp                                ModifierType;
	uint8                                         Pad_3D[0x3];
	struct FGameplayTagRequirements               SourceTags;
	struct FGameplayTagRequirements               TargetTags;
};
static_assert(alignof(FFortAttributeModifierDisplayData) == 0x000008, "Wrong alignment on FFortAttributeModifierDisplayData");
static_assert(sizeof(FFortAttributeModifierDisplayData) == 0x0000C0, "Wrong size on FFortAttributeModifierDisplayData");
static_assert(offsetof(FFortAttributeModifierDisplayData, Attribute) == 0x000000, "Member 'FFortAttributeModifierDisplayData::Attribute' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierDisplayData, Value) == 0x000038, "Member 'FFortAttributeModifierDisplayData::Value' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierDisplayData, ModifierType) == 0x00003C, "Member 'FFortAttributeModifierDisplayData::ModifierType' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierDisplayData, SourceTags) == 0x000040, "Member 'FFortAttributeModifierDisplayData::SourceTags' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierDisplayData, TargetTags) == 0x000080, "Member 'FFortAttributeModifierDisplayData::TargetTags' has a wrong offset!");

struct FAthenaPostMatchScreenContainerTabInfo final
{
public:
	class FText                                   TabTitle;
	TSoftObjectPtr<class UObject>                 TabIcon;
	int32                                         Order;
	bool                                          bDefaultInGameActiveTab;
	uint8                                         Pad_45[0x3];
	class FName                                   TabId;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FAthenaPostMatchScreenContainerTabInfo) == 0x000008, "Wrong alignment on FAthenaPostMatchScreenContainerTabInfo");
static_assert(sizeof(FAthenaPostMatchScreenContainerTabInfo) == 0x000050, "Wrong size on FAthenaPostMatchScreenContainerTabInfo");
static_assert(offsetof(FAthenaPostMatchScreenContainerTabInfo, TabTitle) == 0x000000, "Member 'FAthenaPostMatchScreenContainerTabInfo::TabTitle' has a wrong offset!");
static_assert(offsetof(FAthenaPostMatchScreenContainerTabInfo, TabIcon) == 0x000018, "Member 'FAthenaPostMatchScreenContainerTabInfo::TabIcon' has a wrong offset!");
static_assert(offsetof(FAthenaPostMatchScreenContainerTabInfo, Order) == 0x000040, "Member 'FAthenaPostMatchScreenContainerTabInfo::Order' has a wrong offset!");
static_assert(offsetof(FAthenaPostMatchScreenContainerTabInfo, bDefaultInGameActiveTab) == 0x000044, "Member 'FAthenaPostMatchScreenContainerTabInfo::bDefaultInGameActiveTab' has a wrong offset!");
static_assert(offsetof(FAthenaPostMatchScreenContainerTabInfo, TabId) == 0x000048, "Member 'FAthenaPostMatchScreenContainerTabInfo::TabId' has a wrong offset!");

struct FFortAthenaTutorialHighlightInfo final
{
public:
	struct FGameplayTag                           WidgetToHighlight;
	struct FGameplayTag                           ItemHighlightTag;
	struct FMargin                                HighlightMargin;
	TSoftClassPtr<class UClass>                   HighlightWidgetOverride;
	bool                                          bIsLegacyHighlight;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FFortAthenaTutorialHighlightInfo) == 0x000008, "Wrong alignment on FFortAthenaTutorialHighlightInfo");
static_assert(sizeof(FFortAthenaTutorialHighlightInfo) == 0x000048, "Wrong size on FFortAthenaTutorialHighlightInfo");
static_assert(offsetof(FFortAthenaTutorialHighlightInfo, WidgetToHighlight) == 0x000000, "Member 'FFortAthenaTutorialHighlightInfo::WidgetToHighlight' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialHighlightInfo, ItemHighlightTag) == 0x000004, "Member 'FFortAthenaTutorialHighlightInfo::ItemHighlightTag' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialHighlightInfo, HighlightMargin) == 0x000008, "Member 'FFortAthenaTutorialHighlightInfo::HighlightMargin' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialHighlightInfo, HighlightWidgetOverride) == 0x000018, "Member 'FFortAthenaTutorialHighlightInfo::HighlightWidgetOverride' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialHighlightInfo, bIsLegacyHighlight) == 0x000040, "Member 'FFortAthenaTutorialHighlightInfo::bIsLegacyHighlight' has a wrong offset!");

struct FFortAthenaTutorialScreenInfo final
{
public:
	EFortAthenaTutorialSubstep                    Substep;
	uint8                                         Pad_1[0x7];
	struct FVector2D                              TextPromptPosition;
	struct FVector2D                              TextPromptPosition_AthenaHUD;
	struct FAnchors                               TextPromptAnchors;
	struct FAnchors                               TextPromptAnchors_AthenaHUD;
	class FText                                   TextPromptText_Touch;
	class FText                                   TextPromptText_Gamepad;
	class FText                                   TextPromptText_TouchLegacy;
	struct FDataTableRowHandle                    ActionWidget_DataTableRow;
	TArray<class FName>                           KeybindWidget_NameArray;
	TArray<class FName>                           KeybindWidget_GamepadNameArray;
	bool                                          ForceSingleInputKeybind;
	uint8                                         Pad_E1[0x7];
	TArray<struct FFortAthenaTutorialHighlightInfo> HighlightInfo;
	bool                                          DisplayNextButton;
	bool                                          DisplayTextPromptTarget;
	EFortAthenaTutorialScreenExtraWidget          ExtraWidget;
	uint8                                         Pad_FB[0x5];
};
static_assert(alignof(FFortAthenaTutorialScreenInfo) == 0x000008, "Wrong alignment on FFortAthenaTutorialScreenInfo");
static_assert(sizeof(FFortAthenaTutorialScreenInfo) == 0x000100, "Wrong size on FFortAthenaTutorialScreenInfo");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, Substep) == 0x000000, "Member 'FFortAthenaTutorialScreenInfo::Substep' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptPosition) == 0x000008, "Member 'FFortAthenaTutorialScreenInfo::TextPromptPosition' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptPosition_AthenaHUD) == 0x000018, "Member 'FFortAthenaTutorialScreenInfo::TextPromptPosition_AthenaHUD' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptAnchors) == 0x000028, "Member 'FFortAthenaTutorialScreenInfo::TextPromptAnchors' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptAnchors_AthenaHUD) == 0x000048, "Member 'FFortAthenaTutorialScreenInfo::TextPromptAnchors_AthenaHUD' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptText_Touch) == 0x000068, "Member 'FFortAthenaTutorialScreenInfo::TextPromptText_Touch' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptText_Gamepad) == 0x000080, "Member 'FFortAthenaTutorialScreenInfo::TextPromptText_Gamepad' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, TextPromptText_TouchLegacy) == 0x000098, "Member 'FFortAthenaTutorialScreenInfo::TextPromptText_TouchLegacy' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, ActionWidget_DataTableRow) == 0x0000B0, "Member 'FFortAthenaTutorialScreenInfo::ActionWidget_DataTableRow' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, KeybindWidget_NameArray) == 0x0000C0, "Member 'FFortAthenaTutorialScreenInfo::KeybindWidget_NameArray' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, KeybindWidget_GamepadNameArray) == 0x0000D0, "Member 'FFortAthenaTutorialScreenInfo::KeybindWidget_GamepadNameArray' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, ForceSingleInputKeybind) == 0x0000E0, "Member 'FFortAthenaTutorialScreenInfo::ForceSingleInputKeybind' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, HighlightInfo) == 0x0000E8, "Member 'FFortAthenaTutorialScreenInfo::HighlightInfo' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, DisplayNextButton) == 0x0000F8, "Member 'FFortAthenaTutorialScreenInfo::DisplayNextButton' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, DisplayTextPromptTarget) == 0x0000F9, "Member 'FFortAthenaTutorialScreenInfo::DisplayTextPromptTarget' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialScreenInfo, ExtraWidget) == 0x0000FA, "Member 'FFortAthenaTutorialScreenInfo::ExtraWidget' has a wrong offset!");

struct FFortAthenaStandaloneTutorialStepInfo final
{
public:
	TArray<struct FFortAthenaTutorialScreenInfo>  StepScreenInfo;
};
static_assert(alignof(FFortAthenaStandaloneTutorialStepInfo) == 0x000008, "Wrong alignment on FFortAthenaStandaloneTutorialStepInfo");
static_assert(sizeof(FFortAthenaStandaloneTutorialStepInfo) == 0x000010, "Wrong size on FFortAthenaStandaloneTutorialStepInfo");
static_assert(offsetof(FFortAthenaStandaloneTutorialStepInfo, StepScreenInfo) == 0x000000, "Member 'FFortAthenaStandaloneTutorialStepInfo::StepScreenInfo' has a wrong offset!");

struct FFortReceivedItemLootInfo final
{
public:
	struct FFortItemHeaderInformation             HeaderInformation;
	class UFortItem*                              GeneratedItemInstance;
	class UFortItemDefinition*                    ItemDef;
	class FString                                 TemplateId;
	int32                                         Quantity;
	uint8                                         Pad_BC[0xC];
};
static_assert(alignof(FFortReceivedItemLootInfo) == 0x000008, "Wrong alignment on FFortReceivedItemLootInfo");
static_assert(sizeof(FFortReceivedItemLootInfo) == 0x0000C8, "Wrong size on FFortReceivedItemLootInfo");
static_assert(offsetof(FFortReceivedItemLootInfo, HeaderInformation) == 0x000000, "Member 'FFortReceivedItemLootInfo::HeaderInformation' has a wrong offset!");
static_assert(offsetof(FFortReceivedItemLootInfo, GeneratedItemInstance) == 0x000098, "Member 'FFortReceivedItemLootInfo::GeneratedItemInstance' has a wrong offset!");
static_assert(offsetof(FFortReceivedItemLootInfo, ItemDef) == 0x0000A0, "Member 'FFortReceivedItemLootInfo::ItemDef' has a wrong offset!");
static_assert(offsetof(FFortReceivedItemLootInfo, TemplateId) == 0x0000A8, "Member 'FFortReceivedItemLootInfo::TemplateId' has a wrong offset!");
static_assert(offsetof(FFortReceivedItemLootInfo, Quantity) == 0x0000B8, "Member 'FFortReceivedItemLootInfo::Quantity' has a wrong offset!");

struct FHUDLayoutToolV2_ToastNotificationContent final
{
public:
	EHUDLayoutToolToasterType                     ToasterType;
	uint8                                         Pad_1[0x7];
	class FText                                   TitleText;
	class FText                                   DescriptionText;
};
static_assert(alignof(FHUDLayoutToolV2_ToastNotificationContent) == 0x000008, "Wrong alignment on FHUDLayoutToolV2_ToastNotificationContent");
static_assert(sizeof(FHUDLayoutToolV2_ToastNotificationContent) == 0x000038, "Wrong size on FHUDLayoutToolV2_ToastNotificationContent");
static_assert(offsetof(FHUDLayoutToolV2_ToastNotificationContent, ToasterType) == 0x000000, "Member 'FHUDLayoutToolV2_ToastNotificationContent::ToasterType' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_ToastNotificationContent, TitleText) == 0x000008, "Member 'FHUDLayoutToolV2_ToastNotificationContent::TitleText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_ToastNotificationContent, DescriptionText) == 0x000020, "Member 'FHUDLayoutToolV2_ToastNotificationContent::DescriptionText' has a wrong offset!");

struct FFortSettingsFilterState final
{
public:
	bool                                          bIncludeDisabled;
	bool                                          bIncludeHidden;
	bool                                          bIncludeResetable;
	bool                                          bIncludeNestedPages;
	uint8                                         Pad_4[0x394];
	TArray<class UFortSetting*>                   SettingRootList;
	TArray<class UFortSetting*>                   SettingWhiteList;
};
static_assert(alignof(FFortSettingsFilterState) == 0x000008, "Wrong alignment on FFortSettingsFilterState");
static_assert(sizeof(FFortSettingsFilterState) == 0x0003B8, "Wrong size on FFortSettingsFilterState");
static_assert(offsetof(FFortSettingsFilterState, bIncludeDisabled) == 0x000000, "Member 'FFortSettingsFilterState::bIncludeDisabled' has a wrong offset!");
static_assert(offsetof(FFortSettingsFilterState, bIncludeHidden) == 0x000001, "Member 'FFortSettingsFilterState::bIncludeHidden' has a wrong offset!");
static_assert(offsetof(FFortSettingsFilterState, bIncludeResetable) == 0x000002, "Member 'FFortSettingsFilterState::bIncludeResetable' has a wrong offset!");
static_assert(offsetof(FFortSettingsFilterState, bIncludeNestedPages) == 0x000003, "Member 'FFortSettingsFilterState::bIncludeNestedPages' has a wrong offset!");
static_assert(offsetof(FFortSettingsFilterState, SettingRootList) == 0x000398, "Member 'FFortSettingsFilterState::SettingRootList' has a wrong offset!");
static_assert(offsetof(FFortSettingsFilterState, SettingWhiteList) == 0x0003A8, "Member 'FFortSettingsFilterState::SettingWhiteList' has a wrong offset!");

struct FTagVisibility final
{
public:
	struct FGameplayTagContainer                  Tags;
	ETagComparisonType                            ComparisonType;
	ESlateVisibility                              Visibility;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FTagVisibility) == 0x000008, "Wrong alignment on FTagVisibility");
static_assert(sizeof(FTagVisibility) == 0x000028, "Wrong size on FTagVisibility");
static_assert(offsetof(FTagVisibility, Tags) == 0x000000, "Member 'FTagVisibility::Tags' has a wrong offset!");
static_assert(offsetof(FTagVisibility, ComparisonType) == 0x000020, "Member 'FTagVisibility::ComparisonType' has a wrong offset!");
static_assert(offsetof(FTagVisibility, Visibility) == 0x000021, "Member 'FTagVisibility::Visibility' has a wrong offset!");

struct FFortSimpleWidgetAnimation final
{
public:
	class FName                                   TargetName;
	uint8                                         Pad_4[0x4];
	class UCurveVector*                           Translation;
	class UCurveVector*                           Scale;
	class UCurveFloat*                            Alpha;
	bool                                          bResetOnFinish;
	bool                                          bShouldAnimateTranslation;
	bool                                          bShouldAnimateScale;
	bool                                          bShouldAnimateAlpha;
	uint8                                         Pad_24[0xC];
	TWeakObjectPtr<class UWorld>                  WeakWorld;
	uint8                                         Pad_38[0x30];
};
static_assert(alignof(FFortSimpleWidgetAnimation) == 0x000008, "Wrong alignment on FFortSimpleWidgetAnimation");
static_assert(sizeof(FFortSimpleWidgetAnimation) == 0x000068, "Wrong size on FFortSimpleWidgetAnimation");
static_assert(offsetof(FFortSimpleWidgetAnimation, TargetName) == 0x000000, "Member 'FFortSimpleWidgetAnimation::TargetName' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, Translation) == 0x000008, "Member 'FFortSimpleWidgetAnimation::Translation' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, Scale) == 0x000010, "Member 'FFortSimpleWidgetAnimation::Scale' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, Alpha) == 0x000018, "Member 'FFortSimpleWidgetAnimation::Alpha' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, bResetOnFinish) == 0x000020, "Member 'FFortSimpleWidgetAnimation::bResetOnFinish' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, bShouldAnimateTranslation) == 0x000021, "Member 'FFortSimpleWidgetAnimation::bShouldAnimateTranslation' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, bShouldAnimateScale) == 0x000022, "Member 'FFortSimpleWidgetAnimation::bShouldAnimateScale' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, bShouldAnimateAlpha) == 0x000023, "Member 'FFortSimpleWidgetAnimation::bShouldAnimateAlpha' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimation, WeakWorld) == 0x000030, "Member 'FFortSimpleWidgetAnimation::WeakWorld' has a wrong offset!");

struct FFortSimpleWidgetAnimations final
{
public:
	class FName                                   Name;
	bool                                          bIsEnabled;
	uint8                                         Pad_5[0x3];
	TArray<struct FFortSimpleWidgetAnimation>     Targets;
	TMulticastInlineDelegate<void(class FName Name)> OnAnimationsFinished;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FFortSimpleWidgetAnimations) == 0x000008, "Wrong alignment on FFortSimpleWidgetAnimations");
static_assert(sizeof(FFortSimpleWidgetAnimations) == 0x000030, "Wrong size on FFortSimpleWidgetAnimations");
static_assert(offsetof(FFortSimpleWidgetAnimations, Name) == 0x000000, "Member 'FFortSimpleWidgetAnimations::Name' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimations, bIsEnabled) == 0x000004, "Member 'FFortSimpleWidgetAnimations::bIsEnabled' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimations, Targets) == 0x000008, "Member 'FFortSimpleWidgetAnimations::Targets' has a wrong offset!");
static_assert(offsetof(FFortSimpleWidgetAnimations, OnAnimationsFinished) == 0x000018, "Member 'FFortSimpleWidgetAnimations::OnAnimationsFinished' has a wrong offset!");

struct FTimerDisplayData final
{
public:
	struct FLinearColor                           BrushColor;
	class FText                                   TimeRemainingDisplayText;
	struct FLinearColor                           TextColor;
};
static_assert(alignof(FTimerDisplayData) == 0x000008, "Wrong alignment on FTimerDisplayData");
static_assert(sizeof(FTimerDisplayData) == 0x000038, "Wrong size on FTimerDisplayData");
static_assert(offsetof(FTimerDisplayData, BrushColor) == 0x000000, "Member 'FTimerDisplayData::BrushColor' has a wrong offset!");
static_assert(offsetof(FTimerDisplayData, TimeRemainingDisplayText) == 0x000010, "Member 'FTimerDisplayData::TimeRemainingDisplayText' has a wrong offset!");
static_assert(offsetof(FTimerDisplayData, TextColor) == 0x000028, "Member 'FTimerDisplayData::TextColor' has a wrong offset!");

struct FStatBound final
{
public:
	float                                         Minimum;
	float                                         Maximum;
};
static_assert(alignof(FStatBound) == 0x000004, "Wrong alignment on FStatBound");
static_assert(sizeof(FStatBound) == 0x000008, "Wrong size on FStatBound");
static_assert(offsetof(FStatBound, Minimum) == 0x000000, "Member 'FStatBound::Minimum' has a wrong offset!");
static_assert(offsetof(FStatBound, Maximum) == 0x000004, "Member 'FStatBound::Maximum' has a wrong offset!");

struct FPlatformPurchaseErrorCodeMessage final
{
public:
	class FString                                 ErrorCode;
	class FText                                   Title;
	TArray<class FText>                           Messages;
};
static_assert(alignof(FPlatformPurchaseErrorCodeMessage) == 0x000008, "Wrong alignment on FPlatformPurchaseErrorCodeMessage");
static_assert(sizeof(FPlatformPurchaseErrorCodeMessage) == 0x000038, "Wrong size on FPlatformPurchaseErrorCodeMessage");
static_assert(offsetof(FPlatformPurchaseErrorCodeMessage, ErrorCode) == 0x000000, "Member 'FPlatformPurchaseErrorCodeMessage::ErrorCode' has a wrong offset!");
static_assert(offsetof(FPlatformPurchaseErrorCodeMessage, Title) == 0x000010, "Member 'FPlatformPurchaseErrorCodeMessage::Title' has a wrong offset!");
static_assert(offsetof(FPlatformPurchaseErrorCodeMessage, Messages) == 0x000028, "Member 'FPlatformPurchaseErrorCodeMessage::Messages' has a wrong offset!");

struct FPlatformPurchaseErrorCodeMessages final
{
public:
	TArray<struct FPlatformPurchaseErrorCodeMessage> ErrorCodeMessageList;
};
static_assert(alignof(FPlatformPurchaseErrorCodeMessages) == 0x000008, "Wrong alignment on FPlatformPurchaseErrorCodeMessages");
static_assert(sizeof(FPlatformPurchaseErrorCodeMessages) == 0x000010, "Wrong size on FPlatformPurchaseErrorCodeMessages");
static_assert(offsetof(FPlatformPurchaseErrorCodeMessages, ErrorCodeMessageList) == 0x000000, "Member 'FPlatformPurchaseErrorCodeMessages::ErrorCodeMessageList' has a wrong offset!");

struct FAthenaInventoryItemStatBoundsRow final : public FTableRowBase
{
public:
	struct FGameplayTagContainer                  ItemTags;
	struct FStatBound                             Damage;
	struct FStatBound                             FireRate;
	struct FStatBound                             MagazineSize;
	struct FStatBound                             ReloadTime;
};
static_assert(alignof(FAthenaInventoryItemStatBoundsRow) == 0x000008, "Wrong alignment on FAthenaInventoryItemStatBoundsRow");
static_assert(sizeof(FAthenaInventoryItemStatBoundsRow) == 0x000048, "Wrong size on FAthenaInventoryItemStatBoundsRow");
static_assert(offsetof(FAthenaInventoryItemStatBoundsRow, ItemTags) == 0x000008, "Member 'FAthenaInventoryItemStatBoundsRow::ItemTags' has a wrong offset!");
static_assert(offsetof(FAthenaInventoryItemStatBoundsRow, Damage) == 0x000028, "Member 'FAthenaInventoryItemStatBoundsRow::Damage' has a wrong offset!");
static_assert(offsetof(FAthenaInventoryItemStatBoundsRow, FireRate) == 0x000030, "Member 'FAthenaInventoryItemStatBoundsRow::FireRate' has a wrong offset!");
static_assert(offsetof(FAthenaInventoryItemStatBoundsRow, MagazineSize) == 0x000038, "Member 'FAthenaInventoryItemStatBoundsRow::MagazineSize' has a wrong offset!");
static_assert(offsetof(FAthenaInventoryItemStatBoundsRow, ReloadTime) == 0x000040, "Member 'FAthenaInventoryItemStatBoundsRow::ReloadTime' has a wrong offset!");

struct FAthenaItemShopReloadMtxInfo final
{
public:
	TArray<class FName>                           StaticStorefrontNames;
	TArray<class FName>                           DynamicStorefrontNames;
	class FName                                   IncrementalStorefrontName;
	uint8                                         Pad_24[0x4];
	class FString                                 DynamicOtherOptionOfferId;
	int32                                         MaxMtxQuantityToShowDynamicReloadMtx;
	uint8                                         Pad_3C[0x4];
	TSoftClassPtr<class UClass>                   StaticReloadMtxScreenClass;
	TSoftClassPtr<class UClass>                   DynamicReloadMtxScreenClass;
};
static_assert(alignof(FAthenaItemShopReloadMtxInfo) == 0x000008, "Wrong alignment on FAthenaItemShopReloadMtxInfo");
static_assert(sizeof(FAthenaItemShopReloadMtxInfo) == 0x000090, "Wrong size on FAthenaItemShopReloadMtxInfo");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, StaticStorefrontNames) == 0x000000, "Member 'FAthenaItemShopReloadMtxInfo::StaticStorefrontNames' has a wrong offset!");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, DynamicStorefrontNames) == 0x000010, "Member 'FAthenaItemShopReloadMtxInfo::DynamicStorefrontNames' has a wrong offset!");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, IncrementalStorefrontName) == 0x000020, "Member 'FAthenaItemShopReloadMtxInfo::IncrementalStorefrontName' has a wrong offset!");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, DynamicOtherOptionOfferId) == 0x000028, "Member 'FAthenaItemShopReloadMtxInfo::DynamicOtherOptionOfferId' has a wrong offset!");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, MaxMtxQuantityToShowDynamicReloadMtx) == 0x000038, "Member 'FAthenaItemShopReloadMtxInfo::MaxMtxQuantityToShowDynamicReloadMtx' has a wrong offset!");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, StaticReloadMtxScreenClass) == 0x000040, "Member 'FAthenaItemShopReloadMtxInfo::StaticReloadMtxScreenClass' has a wrong offset!");
static_assert(offsetof(FAthenaItemShopReloadMtxInfo, DynamicReloadMtxScreenClass) == 0x000068, "Member 'FAthenaItemShopReloadMtxInfo::DynamicReloadMtxScreenClass' has a wrong offset!");

struct FSocialEventJSON final
{
public:
	int32                                         event_id;
	uint8                                         Pad_4[0x4];
	class FText                                   Title;
	struct FDateTime                              starts_at_utc;
};
static_assert(alignof(FSocialEventJSON) == 0x000008, "Wrong alignment on FSocialEventJSON");
static_assert(sizeof(FSocialEventJSON) == 0x000028, "Wrong size on FSocialEventJSON");
static_assert(offsetof(FSocialEventJSON, event_id) == 0x000000, "Member 'FSocialEventJSON::event_id' has a wrong offset!");
static_assert(offsetof(FSocialEventJSON, Title) == 0x000008, "Member 'FSocialEventJSON::Title' has a wrong offset!");
static_assert(offsetof(FSocialEventJSON, starts_at_utc) == 0x000020, "Member 'FSocialEventJSON::starts_at_utc' has a wrong offset!");

struct FSocialEventsJsonObject final
{
public:
	TArray<struct FSocialEventJSON>               Events;
};
static_assert(alignof(FSocialEventsJsonObject) == 0x000008, "Wrong alignment on FSocialEventsJsonObject");
static_assert(sizeof(FSocialEventsJsonObject) == 0x000010, "Wrong size on FSocialEventsJsonObject");
static_assert(offsetof(FSocialEventsJsonObject, Events) == 0x000000, "Member 'FSocialEventsJsonObject::Events' has a wrong offset!");

struct FAthenaReplayBrowserRowData final
{
public:
	class FString                                 Name;
	struct FDateTime                              Date;
	float                                         Length;
	int32                                         Rank;
	int32                                         NumPlayers;
	int32                                         Eliminations;
	int32                                         DownloadModulesCount;
	uint8                                         Pad_2C[0x14];
};
static_assert(alignof(FAthenaReplayBrowserRowData) == 0x000008, "Wrong alignment on FAthenaReplayBrowserRowData");
static_assert(sizeof(FAthenaReplayBrowserRowData) == 0x000040, "Wrong size on FAthenaReplayBrowserRowData");
static_assert(offsetof(FAthenaReplayBrowserRowData, Name) == 0x000000, "Member 'FAthenaReplayBrowserRowData::Name' has a wrong offset!");
static_assert(offsetof(FAthenaReplayBrowserRowData, Date) == 0x000010, "Member 'FAthenaReplayBrowserRowData::Date' has a wrong offset!");
static_assert(offsetof(FAthenaReplayBrowserRowData, Length) == 0x000018, "Member 'FAthenaReplayBrowserRowData::Length' has a wrong offset!");
static_assert(offsetof(FAthenaReplayBrowserRowData, Rank) == 0x00001C, "Member 'FAthenaReplayBrowserRowData::Rank' has a wrong offset!");
static_assert(offsetof(FAthenaReplayBrowserRowData, NumPlayers) == 0x000020, "Member 'FAthenaReplayBrowserRowData::NumPlayers' has a wrong offset!");
static_assert(offsetof(FAthenaReplayBrowserRowData, Eliminations) == 0x000024, "Member 'FAthenaReplayBrowserRowData::Eliminations' has a wrong offset!");
static_assert(offsetof(FAthenaReplayBrowserRowData, DownloadModulesCount) == 0x000028, "Member 'FAthenaReplayBrowserRowData::DownloadModulesCount' has a wrong offset!");

struct FAthenaVariantFilterSet final
{
public:
	TArray<struct FAthenaVariantFilterTabInfo_Primary> PrimaryTabs;
};
static_assert(alignof(FAthenaVariantFilterSet) == 0x000008, "Wrong alignment on FAthenaVariantFilterSet");
static_assert(sizeof(FAthenaVariantFilterSet) == 0x000010, "Wrong size on FAthenaVariantFilterSet");
static_assert(offsetof(FAthenaVariantFilterSet, PrimaryTabs) == 0x000000, "Member 'FAthenaVariantFilterSet::PrimaryTabs' has a wrong offset!");

struct FSubscriptionModalInfo final
{
public:
	class FString                                 ModalId;
	EAppStore                                     PlatformId;
	uint8                                         Pad_11[0x7];
	TArray<class FText>                           Entries;
	class FString                                 QrCodeImage;
};
static_assert(alignof(FSubscriptionModalInfo) == 0x000008, "Wrong alignment on FSubscriptionModalInfo");
static_assert(sizeof(FSubscriptionModalInfo) == 0x000038, "Wrong size on FSubscriptionModalInfo");
static_assert(offsetof(FSubscriptionModalInfo, ModalId) == 0x000000, "Member 'FSubscriptionModalInfo::ModalId' has a wrong offset!");
static_assert(offsetof(FSubscriptionModalInfo, PlatformId) == 0x000010, "Member 'FSubscriptionModalInfo::PlatformId' has a wrong offset!");
static_assert(offsetof(FSubscriptionModalInfo, Entries) == 0x000018, "Member 'FSubscriptionModalInfo::Entries' has a wrong offset!");
static_assert(offsetof(FSubscriptionModalInfo, QrCodeImage) == 0x000028, "Member 'FSubscriptionModalInfo::QrCodeImage' has a wrong offset!");

struct FSubscriptionModals final
{
public:
	TArray<struct FSubscriptionModalInfo>         Modals;
};
static_assert(alignof(FSubscriptionModals) == 0x000008, "Wrong alignment on FSubscriptionModals");
static_assert(sizeof(FSubscriptionModals) == 0x000010, "Wrong size on FSubscriptionModals");
static_assert(offsetof(FSubscriptionModals, Modals) == 0x000000, "Member 'FSubscriptionModals::Modals' has a wrong offset!");

struct FCreativeContentBrowserRemoveItemDefinitionMessage final
{
public:
	TArray<class UFortItemDefinition*>            ItemDefinitionsToRemove;
};
static_assert(alignof(FCreativeContentBrowserRemoveItemDefinitionMessage) == 0x000008, "Wrong alignment on FCreativeContentBrowserRemoveItemDefinitionMessage");
static_assert(sizeof(FCreativeContentBrowserRemoveItemDefinitionMessage) == 0x000010, "Wrong size on FCreativeContentBrowserRemoveItemDefinitionMessage");
static_assert(offsetof(FCreativeContentBrowserRemoveItemDefinitionMessage, ItemDefinitionsToRemove) == 0x000000, "Member 'FCreativeContentBrowserRemoveItemDefinitionMessage::ItemDefinitionsToRemove' has a wrong offset!");

struct alignas(0x08) FBattlePassShowRewardParams final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FBattlePassShowRewardParams) == 0x000008, "Wrong alignment on FBattlePassShowRewardParams");
static_assert(sizeof(FBattlePassShowRewardParams) == 0x000010, "Wrong size on FBattlePassShowRewardParams");

struct FCreativeContentBrowserTabInitializer final
{
public:
	class FText                                   TabLabel;
	TSoftClassPtr<class UClass>                   CreativeContentBrowserTabClass;
	class UCreativeContentBrowserTab_CreationCondition* CreationCondition;
};
static_assert(alignof(FCreativeContentBrowserTabInitializer) == 0x000008, "Wrong alignment on FCreativeContentBrowserTabInitializer");
static_assert(sizeof(FCreativeContentBrowserTabInitializer) == 0x000048, "Wrong size on FCreativeContentBrowserTabInitializer");
static_assert(offsetof(FCreativeContentBrowserTabInitializer, TabLabel) == 0x000000, "Member 'FCreativeContentBrowserTabInitializer::TabLabel' has a wrong offset!");
static_assert(offsetof(FCreativeContentBrowserTabInitializer, CreativeContentBrowserTabClass) == 0x000018, "Member 'FCreativeContentBrowserTabInitializer::CreativeContentBrowserTabClass' has a wrong offset!");
static_assert(offsetof(FCreativeContentBrowserTabInitializer, CreationCondition) == 0x000040, "Member 'FCreativeContentBrowserTabInitializer::CreationCondition' has a wrong offset!");

struct FCrewTileDetailsData final
{
public:
	class FString                                 TileImageURL;
	class FText                                   Title;
	class FText                                   Description;
	ECrewDetailsTag                               tag;
	uint8                                         Pad_41[0x7];
	class FString                                 BackgroundImageURL;
};
static_assert(alignof(FCrewTileDetailsData) == 0x000008, "Wrong alignment on FCrewTileDetailsData");
static_assert(sizeof(FCrewTileDetailsData) == 0x000058, "Wrong size on FCrewTileDetailsData");
static_assert(offsetof(FCrewTileDetailsData, TileImageURL) == 0x000000, "Member 'FCrewTileDetailsData::TileImageURL' has a wrong offset!");
static_assert(offsetof(FCrewTileDetailsData, Title) == 0x000010, "Member 'FCrewTileDetailsData::Title' has a wrong offset!");
static_assert(offsetof(FCrewTileDetailsData, Description) == 0x000028, "Member 'FCrewTileDetailsData::Description' has a wrong offset!");
static_assert(offsetof(FCrewTileDetailsData, tag) == 0x000040, "Member 'FCrewTileDetailsData::tag' has a wrong offset!");
static_assert(offsetof(FCrewTileDetailsData, BackgroundImageURL) == 0x000048, "Member 'FCrewTileDetailsData::BackgroundImageURL' has a wrong offset!");

struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration final : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                            PowerRatingIconBrush;
	TSoftClassPtr<class UClass>                   PowerRatingTextStyle;
	uint8                                         Pad_238[0x8];
};
static_assert(alignof(FFortItemCard_PowerRatingBlock_ItemInstance_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_PowerRatingBlock_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_PowerRatingBlock_ItemInstance_Configuration) == 0x000240, "Wrong size on FFortItemCard_PowerRatingBlock_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_ItemInstance_Configuration, PowerRatingIconBrush) == 0x000150, "Member 'FFortItemCard_PowerRatingBlock_ItemInstance_Configuration::PowerRatingIconBrush' has a wrong offset!");
static_assert(offsetof(FFortItemCard_PowerRatingBlock_ItemInstance_Configuration, PowerRatingTextStyle) == 0x000210, "Member 'FFortItemCard_PowerRatingBlock_ItemInstance_Configuration::PowerRatingTextStyle' has a wrong offset!");

struct FFortSettingNameExtensions final
{
public:
	bool                                          bIncludeClassDefaultExtensions;
	uint8                                         Pad_1[0x7];
	TArray<TSoftClassPtr<class UClass>>           Extensions;
};
static_assert(alignof(FFortSettingNameExtensions) == 0x000008, "Wrong alignment on FFortSettingNameExtensions");
static_assert(sizeof(FFortSettingNameExtensions) == 0x000018, "Wrong size on FFortSettingNameExtensions");
static_assert(offsetof(FFortSettingNameExtensions, bIncludeClassDefaultExtensions) == 0x000000, "Member 'FFortSettingNameExtensions::bIncludeClassDefaultExtensions' has a wrong offset!");
static_assert(offsetof(FFortSettingNameExtensions, Extensions) == 0x000008, "Member 'FFortSettingNameExtensions::Extensions' has a wrong offset!");

struct FCrewTileDataBasic
{
public:
	uint8                                         Pad_0[0x8];
	ECrewTileType                                 TileType;
	uint8                                         Pad_9[0x7];
	class FText                                   TileLabel;
	struct FCrewTileDetailsData                   Details;
};
static_assert(alignof(FCrewTileDataBasic) == 0x000008, "Wrong alignment on FCrewTileDataBasic");
static_assert(sizeof(FCrewTileDataBasic) == 0x000080, "Wrong size on FCrewTileDataBasic");
static_assert(offsetof(FCrewTileDataBasic, TileType) == 0x000008, "Member 'FCrewTileDataBasic::TileType' has a wrong offset!");
static_assert(offsetof(FCrewTileDataBasic, TileLabel) == 0x000010, "Member 'FCrewTileDataBasic::TileLabel' has a wrong offset!");
static_assert(offsetof(FCrewTileDataBasic, Details) == 0x000028, "Member 'FCrewTileDataBasic::Details' has a wrong offset!");

struct FCrewTileDataProgressiveCosmetic final : public FCrewTileDataBasic
{
};
static_assert(alignof(FCrewTileDataProgressiveCosmetic) == 0x000008, "Wrong alignment on FCrewTileDataProgressiveCosmetic");
static_assert(sizeof(FCrewTileDataProgressiveCosmetic) == 0x000080, "Wrong size on FCrewTileDataProgressiveCosmetic");

struct FFortTournamentDisplayInfo final : public FTableRowBase
{
public:
	class FText                                   TitleLine1;
	class FText                                   TitleLine2;
	class FText                                   ScheduleInfo;
	class FText                                   FlavorDescription;
	class FText                                   DetailsDescription;
	class FText                                   ShortFormatTitle;
	class FText                                   LongFormatTitle;
	class FText                                   BackgroundTitle;
	int32                                         PinScoreRequirement;
	uint8                                         Pad_CC[0x4];
	class FText                                   PinEarnedText;
	struct FLinearColor                           BaseColor;
	struct FLinearColor                           PrimaryColor;
	struct FLinearColor                           SecondaryColor;
	struct FLinearColor                           HighlightColor;
	struct FLinearColor                           TitleColor;
	struct FLinearColor                           ShadowColor;
	struct FLinearColor                           BackgroundLeftColor;
	struct FLinearColor                           BackgroundRightColor;
	struct FLinearColor                           BackgroundTextColor;
	struct FLinearColor                           PosterFadeColor;
	class FText                                   AlertText;
	class FText                                   SeriesPointLeaderboardName;
	EFortTournamentAlertType                      AlertType;
	uint8                                         Pad_1B9[0x7];
	TArray<class FText>                           RoundDisplayNames;
};
static_assert(alignof(FFortTournamentDisplayInfo) == 0x000008, "Wrong alignment on FFortTournamentDisplayInfo");
static_assert(sizeof(FFortTournamentDisplayInfo) == 0x0001D0, "Wrong size on FFortTournamentDisplayInfo");
static_assert(offsetof(FFortTournamentDisplayInfo, TitleLine1) == 0x000008, "Member 'FFortTournamentDisplayInfo::TitleLine1' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, TitleLine2) == 0x000020, "Member 'FFortTournamentDisplayInfo::TitleLine2' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, ScheduleInfo) == 0x000038, "Member 'FFortTournamentDisplayInfo::ScheduleInfo' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, FlavorDescription) == 0x000050, "Member 'FFortTournamentDisplayInfo::FlavorDescription' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, DetailsDescription) == 0x000068, "Member 'FFortTournamentDisplayInfo::DetailsDescription' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, ShortFormatTitle) == 0x000080, "Member 'FFortTournamentDisplayInfo::ShortFormatTitle' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, LongFormatTitle) == 0x000098, "Member 'FFortTournamentDisplayInfo::LongFormatTitle' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, BackgroundTitle) == 0x0000B0, "Member 'FFortTournamentDisplayInfo::BackgroundTitle' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, PinScoreRequirement) == 0x0000C8, "Member 'FFortTournamentDisplayInfo::PinScoreRequirement' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, PinEarnedText) == 0x0000D0, "Member 'FFortTournamentDisplayInfo::PinEarnedText' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, BaseColor) == 0x0000E8, "Member 'FFortTournamentDisplayInfo::BaseColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, PrimaryColor) == 0x0000F8, "Member 'FFortTournamentDisplayInfo::PrimaryColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, SecondaryColor) == 0x000108, "Member 'FFortTournamentDisplayInfo::SecondaryColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, HighlightColor) == 0x000118, "Member 'FFortTournamentDisplayInfo::HighlightColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, TitleColor) == 0x000128, "Member 'FFortTournamentDisplayInfo::TitleColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, ShadowColor) == 0x000138, "Member 'FFortTournamentDisplayInfo::ShadowColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, BackgroundLeftColor) == 0x000148, "Member 'FFortTournamentDisplayInfo::BackgroundLeftColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, BackgroundRightColor) == 0x000158, "Member 'FFortTournamentDisplayInfo::BackgroundRightColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, BackgroundTextColor) == 0x000168, "Member 'FFortTournamentDisplayInfo::BackgroundTextColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, PosterFadeColor) == 0x000178, "Member 'FFortTournamentDisplayInfo::PosterFadeColor' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, AlertText) == 0x000188, "Member 'FFortTournamentDisplayInfo::AlertText' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, SeriesPointLeaderboardName) == 0x0001A0, "Member 'FFortTournamentDisplayInfo::SeriesPointLeaderboardName' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, AlertType) == 0x0001B8, "Member 'FFortTournamentDisplayInfo::AlertType' has a wrong offset!");
static_assert(offsetof(FFortTournamentDisplayInfo, RoundDisplayNames) == 0x0001C0, "Member 'FFortTournamentDisplayInfo::RoundDisplayNames' has a wrong offset!");

struct FAthenaSubscriptionProgressiveInfo final
{
public:
	TArray<class FText>                           InfoModalEntries;
	class FText                                   NewStagesUnlockFinePrint;
};
static_assert(alignof(FAthenaSubscriptionProgressiveInfo) == 0x000008, "Wrong alignment on FAthenaSubscriptionProgressiveInfo");
static_assert(sizeof(FAthenaSubscriptionProgressiveInfo) == 0x000028, "Wrong size on FAthenaSubscriptionProgressiveInfo");
static_assert(offsetof(FAthenaSubscriptionProgressiveInfo, InfoModalEntries) == 0x000000, "Member 'FAthenaSubscriptionProgressiveInfo::InfoModalEntries' has a wrong offset!");
static_assert(offsetof(FAthenaSubscriptionProgressiveInfo, NewStagesUnlockFinePrint) == 0x000010, "Member 'FAthenaSubscriptionProgressiveInfo::NewStagesUnlockFinePrint' has a wrong offset!");

struct FFortUIXpInfo final
{
public:
	int32                                         InitialLevel;
	int32                                         InitialDisplayXp;
	struct FFortExperienceDelta                   ChangeInXp;
};
static_assert(alignof(FFortUIXpInfo) == 0x000004, "Wrong alignment on FFortUIXpInfo");
static_assert(sizeof(FFortUIXpInfo) == 0x00002C, "Wrong size on FFortUIXpInfo");
static_assert(offsetof(FFortUIXpInfo, InitialLevel) == 0x000000, "Member 'FFortUIXpInfo::InitialLevel' has a wrong offset!");
static_assert(offsetof(FFortUIXpInfo, InitialDisplayXp) == 0x000004, "Member 'FFortUIXpInfo::InitialDisplayXp' has a wrong offset!");
static_assert(offsetof(FFortUIXpInfo, ChangeInXp) == 0x000008, "Member 'FFortUIXpInfo::ChangeInXp' has a wrong offset!");

struct FFortItemCard_XL_ItemInstance_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FMargin                                PowerRatingBlockPadding;
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FMargin                                TraitBoxPadding;
	struct FVector2D                              FirstTraitSize;
	float                                         PaddingBetweenTraitIcons;
	uint8                                         Pad_2C4[0x4];
	struct FVector2D                              SecondTraitSize;
	struct FMargin                                TierMeterPadding;
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;
	uint8                                         Pad_314[0xC];
};
static_assert(alignof(FFortItemCard_XL_ItemInstance_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_XL_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_XL_ItemInstance_Configuration) == 0x000320, "Wrong size on FFortItemCard_XL_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_XL_ItemInstance_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, PowerRatingBlockPadding) == 0x000010, "Member 'FFortItemCard_XL_ItemInstance_Configuration::PowerRatingBlockPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, PowerRatingBlock) == 0x000020, "Member 'FFortItemCard_XL_ItemInstance_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, BookmarkImageSize) == 0x000260, "Member 'FFortItemCard_XL_ItemInstance_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, StackCountBlock) == 0x000270, "Member 'FFortItemCard_XL_ItemInstance_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, TraitBoxPadding) == 0x0002A0, "Member 'FFortItemCard_XL_ItemInstance_Configuration::TraitBoxPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, FirstTraitSize) == 0x0002B0, "Member 'FFortItemCard_XL_ItemInstance_Configuration::FirstTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, PaddingBetweenTraitIcons) == 0x0002C0, "Member 'FFortItemCard_XL_ItemInstance_Configuration::PaddingBetweenTraitIcons' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, SecondTraitSize) == 0x0002C8, "Member 'FFortItemCard_XL_ItemInstance_Configuration::SecondTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, TierMeterPadding) == 0x0002D8, "Member 'FFortItemCard_XL_ItemInstance_Configuration::TierMeterPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, TierMeter) == 0x0002E8, "Member 'FFortItemCard_XL_ItemInstance_Configuration::TierMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_ItemInstance_Configuration, DurabilityMeter) == 0x000300, "Member 'FFortItemCard_XL_ItemInstance_Configuration::DurabilityMeter' has a wrong offset!");

struct FSimpleActionMessages final
{
public:
	ELinkAcrossSimpleAction                       SimpleActionType;
	uint8                                         Pad_1[0x7];
	class FText                                   SimpleActionTitle;
	class FText                                   SimpleActionBody;
};
static_assert(alignof(FSimpleActionMessages) == 0x000008, "Wrong alignment on FSimpleActionMessages");
static_assert(sizeof(FSimpleActionMessages) == 0x000038, "Wrong size on FSimpleActionMessages");
static_assert(offsetof(FSimpleActionMessages, SimpleActionType) == 0x000000, "Member 'FSimpleActionMessages::SimpleActionType' has a wrong offset!");
static_assert(offsetof(FSimpleActionMessages, SimpleActionTitle) == 0x000008, "Member 'FSimpleActionMessages::SimpleActionTitle' has a wrong offset!");
static_assert(offsetof(FSimpleActionMessages, SimpleActionBody) == 0x000020, "Member 'FSimpleActionMessages::SimpleActionBody' has a wrong offset!");

struct FFortItemCard_XL_TransformKey_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FVector2D                              TransformKeyIconSize;
};
static_assert(alignof(FFortItemCard_XL_TransformKey_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_XL_TransformKey_Configuration");
static_assert(sizeof(FFortItemCard_XL_TransformKey_Configuration) == 0x000050, "Wrong size on FFortItemCard_XL_TransformKey_Configuration");
static_assert(offsetof(FFortItemCard_XL_TransformKey_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_XL_TransformKey_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_TransformKey_Configuration, StackCountBlock) == 0x000010, "Member 'FFortItemCard_XL_TransformKey_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XL_TransformKey_Configuration, TransformKeyIconSize) == 0x000040, "Member 'FFortItemCard_XL_TransformKey_Configuration::TransformKeyIconSize' has a wrong offset!");

struct FFortItemCard_L_PersonnelAndSchematics_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;
	struct FVector2D                              ClassIconSize;
	struct FVector2D                              LeadSurvivorTypeIconSize;
	struct FVector2D                              FirstIconSlotSize;
	float                                         PaddingBetweenIconSlots;
	uint8                                         Pad_454[0x4];
	struct FVector2D                              SecondIconSlotSize;
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;
	float                                         TierMeterLeftPadding;
	uint8                                         Pad_4A4[0x4];
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
};
static_assert(alignof(FFortItemCard_L_PersonnelAndSchematics_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_L_PersonnelAndSchematics_Configuration");
static_assert(sizeof(FFortItemCard_L_PersonnelAndSchematics_Configuration) == 0x0004C0, "Wrong size on FFortItemCard_L_PersonnelAndSchematics_Configuration");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, PowerRatingBlock) == 0x000010, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, BookmarkImageSize) == 0x000340, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, Nameplate) == 0x000350, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::Nameplate' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, ClassIconSize) == 0x000420, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::ClassIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, LeadSurvivorTypeIconSize) == 0x000430, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::LeadSurvivorTypeIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, FirstIconSlotSize) == 0x000440, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::FirstIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, PaddingBetweenIconSlots) == 0x000450, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::PaddingBetweenIconSlots' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, SecondIconSlotSize) == 0x000458, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::SecondIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, DefenderWeaponTypeIcon) == 0x000468, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::DefenderWeaponTypeIcon' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, DetailAreaBorder) == 0x000478, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::DetailAreaBorder' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, LevelMeter) == 0x00048C, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::LevelMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, TierMeterLeftPadding) == 0x0004A0, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::TierMeterLeftPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_PersonnelAndSchematics_Configuration, TierMeter) == 0x0004A8, "Member 'FFortItemCard_L_PersonnelAndSchematics_Configuration::TierMeter' has a wrong offset!");

struct FCobaltPlayerPortraitIndexInfo final
{
public:
	TArray<int32>                                 PortraitIndexArray;
};
static_assert(alignof(FCobaltPlayerPortraitIndexInfo) == 0x000008, "Wrong alignment on FCobaltPlayerPortraitIndexInfo");
static_assert(sizeof(FCobaltPlayerPortraitIndexInfo) == 0x000010, "Wrong size on FCobaltPlayerPortraitIndexInfo");
static_assert(offsetof(FCobaltPlayerPortraitIndexInfo, PortraitIndexArray) == 0x000000, "Member 'FCobaltPlayerPortraitIndexInfo::PortraitIndexArray' has a wrong offset!");

struct FFortItemCard_L_ItemInstance_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FMargin                                PowerRatingBlockPadding;
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FMargin                                TraitBoxPadding;
	struct FVector2D                              FirstTraitSize;
	float                                         PaddingBetweenTraitIcons;
	uint8                                         Pad_2C4[0x4];
	struct FVector2D                              SecondTraitSize;
	struct FMargin                                TierMeterPadding;
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;
	uint8                                         Pad_314[0xC];
};
static_assert(alignof(FFortItemCard_L_ItemInstance_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_L_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_L_ItemInstance_Configuration) == 0x000320, "Wrong size on FFortItemCard_L_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_L_ItemInstance_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, PowerRatingBlockPadding) == 0x000010, "Member 'FFortItemCard_L_ItemInstance_Configuration::PowerRatingBlockPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, PowerRatingBlock) == 0x000020, "Member 'FFortItemCard_L_ItemInstance_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, BookmarkImageSize) == 0x000260, "Member 'FFortItemCard_L_ItemInstance_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, StackCountBlock) == 0x000270, "Member 'FFortItemCard_L_ItemInstance_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, TraitBoxPadding) == 0x0002A0, "Member 'FFortItemCard_L_ItemInstance_Configuration::TraitBoxPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, FirstTraitSize) == 0x0002B0, "Member 'FFortItemCard_L_ItemInstance_Configuration::FirstTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, PaddingBetweenTraitIcons) == 0x0002C0, "Member 'FFortItemCard_L_ItemInstance_Configuration::PaddingBetweenTraitIcons' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, SecondTraitSize) == 0x0002C8, "Member 'FFortItemCard_L_ItemInstance_Configuration::SecondTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, TierMeterPadding) == 0x0002D8, "Member 'FFortItemCard_L_ItemInstance_Configuration::TierMeterPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, TierMeter) == 0x0002E8, "Member 'FFortItemCard_L_ItemInstance_Configuration::TierMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_ItemInstance_Configuration, DurabilityMeter) == 0x000300, "Member 'FFortItemCard_L_ItemInstance_Configuration::DurabilityMeter' has a wrong offset!");

struct FFortItemCard_L_TransformKey_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FVector2D                              TransformKeyIconSize;
};
static_assert(alignof(FFortItemCard_L_TransformKey_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_L_TransformKey_Configuration");
static_assert(sizeof(FFortItemCard_L_TransformKey_Configuration) == 0x000050, "Wrong size on FFortItemCard_L_TransformKey_Configuration");
static_assert(offsetof(FFortItemCard_L_TransformKey_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_L_TransformKey_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_TransformKey_Configuration, StackCountBlock) == 0x000010, "Member 'FFortItemCard_L_TransformKey_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_L_TransformKey_Configuration, TransformKeyIconSize) == 0x000040, "Member 'FFortItemCard_L_TransformKey_Configuration::TransformKeyIconSize' has a wrong offset!");

struct FCrewTileDataBattlePass final : public FCrewTileDataBasic
{
};
static_assert(alignof(FCrewTileDataBattlePass) == 0x000008, "Wrong alignment on FCrewTileDataBattlePass");
static_assert(sizeof(FCrewTileDataBattlePass) == 0x000080, "Wrong size on FCrewTileDataBattlePass");

struct FFortItemCard_M_PersonnelAndSchematics_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;
	struct FVector2D                              ClassIconSize;
	struct FVector2D                              LeadSurvivorTypeIconSize;
	struct FVector2D                              FirstIconSlotSize;
	float                                         PaddingBetweenIconSlots;
	uint8                                         Pad_454[0x4];
	struct FVector2D                              SecondIconSlotSize;
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;
	float                                         TierMeterLeftPadding;
	uint8                                         Pad_4A4[0x4];
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
};
static_assert(alignof(FFortItemCard_M_PersonnelAndSchematics_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_M_PersonnelAndSchematics_Configuration");
static_assert(sizeof(FFortItemCard_M_PersonnelAndSchematics_Configuration) == 0x0004C0, "Wrong size on FFortItemCard_M_PersonnelAndSchematics_Configuration");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, PowerRatingBlock) == 0x000010, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, BookmarkImageSize) == 0x000340, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, Nameplate) == 0x000350, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::Nameplate' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, ClassIconSize) == 0x000420, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::ClassIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, LeadSurvivorTypeIconSize) == 0x000430, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::LeadSurvivorTypeIconSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, FirstIconSlotSize) == 0x000440, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::FirstIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, PaddingBetweenIconSlots) == 0x000450, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::PaddingBetweenIconSlots' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, SecondIconSlotSize) == 0x000458, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::SecondIconSlotSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, DefenderWeaponTypeIcon) == 0x000468, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::DefenderWeaponTypeIcon' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, DetailAreaBorder) == 0x000478, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::DetailAreaBorder' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, LevelMeter) == 0x00048C, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::LevelMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, TierMeterLeftPadding) == 0x0004A0, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::TierMeterLeftPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_PersonnelAndSchematics_Configuration, TierMeter) == 0x0004A8, "Member 'FFortItemCard_M_PersonnelAndSchematics_Configuration::TierMeter' has a wrong offset!");

struct FFortItemCard_M_ItemInstance_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FMargin                                PowerRatingBlockPadding;
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FMargin                                TraitBoxPadding;
	struct FVector2D                              FirstTraitSize;
	float                                         PaddingBetweenTraitIcons;
	uint8                                         Pad_2C4[0x4];
	struct FVector2D                              SecondTraitSize;
	struct FMargin                                TierMeterPadding;
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;
	uint8                                         Pad_314[0xC];
};
static_assert(alignof(FFortItemCard_M_ItemInstance_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_M_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_M_ItemInstance_Configuration) == 0x000320, "Wrong size on FFortItemCard_M_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_M_ItemInstance_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, PowerRatingBlockPadding) == 0x000010, "Member 'FFortItemCard_M_ItemInstance_Configuration::PowerRatingBlockPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, PowerRatingBlock) == 0x000020, "Member 'FFortItemCard_M_ItemInstance_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, BookmarkImageSize) == 0x000260, "Member 'FFortItemCard_M_ItemInstance_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, StackCountBlock) == 0x000270, "Member 'FFortItemCard_M_ItemInstance_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, TraitBoxPadding) == 0x0002A0, "Member 'FFortItemCard_M_ItemInstance_Configuration::TraitBoxPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, FirstTraitSize) == 0x0002B0, "Member 'FFortItemCard_M_ItemInstance_Configuration::FirstTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, PaddingBetweenTraitIcons) == 0x0002C0, "Member 'FFortItemCard_M_ItemInstance_Configuration::PaddingBetweenTraitIcons' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, SecondTraitSize) == 0x0002C8, "Member 'FFortItemCard_M_ItemInstance_Configuration::SecondTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, TierMeterPadding) == 0x0002D8, "Member 'FFortItemCard_M_ItemInstance_Configuration::TierMeterPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, TierMeter) == 0x0002E8, "Member 'FFortItemCard_M_ItemInstance_Configuration::TierMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_ItemInstance_Configuration, DurabilityMeter) == 0x000300, "Member 'FFortItemCard_M_ItemInstance_Configuration::DurabilityMeter' has a wrong offset!");

struct FDiscoCaptureIconData final
{
public:
	EDiscoCaptureIconState                        CurrIconState;
	EDiscoCaptureProgressState                    CurrProgressState;
	uint8                                         Pad_2[0x2];
	float                                         CurrCapturePercent;
	class AAthenaCapturePoint*                    CapturePoint;
};
static_assert(alignof(FDiscoCaptureIconData) == 0x000008, "Wrong alignment on FDiscoCaptureIconData");
static_assert(sizeof(FDiscoCaptureIconData) == 0x000010, "Wrong size on FDiscoCaptureIconData");
static_assert(offsetof(FDiscoCaptureIconData, CurrIconState) == 0x000000, "Member 'FDiscoCaptureIconData::CurrIconState' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureIconData, CurrProgressState) == 0x000001, "Member 'FDiscoCaptureIconData::CurrProgressState' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureIconData, CurrCapturePercent) == 0x000004, "Member 'FDiscoCaptureIconData::CurrCapturePercent' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureIconData, CapturePoint) == 0x000008, "Member 'FDiscoCaptureIconData::CapturePoint' has a wrong offset!");

struct FFortItemCard_M_TransformKey_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FVector2D                              TransformKeyIconSize;
};
static_assert(alignof(FFortItemCard_M_TransformKey_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_M_TransformKey_Configuration");
static_assert(sizeof(FFortItemCard_M_TransformKey_Configuration) == 0x000050, "Wrong size on FFortItemCard_M_TransformKey_Configuration");
static_assert(offsetof(FFortItemCard_M_TransformKey_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_M_TransformKey_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_TransformKey_Configuration, StackCountBlock) == 0x000010, "Member 'FFortItemCard_M_TransformKey_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_M_TransformKey_Configuration, TransformKeyIconSize) == 0x000040, "Member 'FFortItemCard_M_TransformKey_Configuration::TransformKeyIconSize' has a wrong offset!");

struct FFortMobileHUDContextLayout final
{
public:
	uint8                                         Pad_0[0x10];
	class UFortMobileHUDContextModel*             HUDContextModel;
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FFortMobileHUDContextLayout) == 0x000008, "Wrong alignment on FFortMobileHUDContextLayout");
static_assert(sizeof(FFortMobileHUDContextLayout) == 0x000020, "Wrong size on FFortMobileHUDContextLayout");
static_assert(offsetof(FFortMobileHUDContextLayout, HUDContextModel) == 0x000010, "Member 'FFortMobileHUDContextLayout::HUDContextModel' has a wrong offset!");

struct FFortMobileHUDLayoutProfile final
{
public:
	class FText                                   ProfileName;
	TArray<struct FFortMobileHUDContextLayout>    ContextLayouts;
	uint8                                         Pad_28[0x18];
};
static_assert(alignof(FFortMobileHUDLayoutProfile) == 0x000008, "Wrong alignment on FFortMobileHUDLayoutProfile");
static_assert(sizeof(FFortMobileHUDLayoutProfile) == 0x000040, "Wrong size on FFortMobileHUDLayoutProfile");
static_assert(offsetof(FFortMobileHUDLayoutProfile, ProfileName) == 0x000000, "Member 'FFortMobileHUDLayoutProfile::ProfileName' has a wrong offset!");
static_assert(offsetof(FFortMobileHUDLayoutProfile, ContextLayouts) == 0x000018, "Member 'FFortMobileHUDLayoutProfile::ContextLayouts' has a wrong offset!");

struct FFortItemCard_S_ItemInstance_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FMargin                                PowerRatingBlockPadding;
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FMargin                                TraitBoxPadding;
	struct FVector2D                              FirstTraitSize;
	struct FMargin                                TierMeterPadding;
	struct FFortItemCard_TierMeter_Configuration  TierMeter;
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;
	uint8                                         Pad_2FC[0x4];
};
static_assert(alignof(FFortItemCard_S_ItemInstance_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_S_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_S_ItemInstance_Configuration) == 0x000300, "Wrong size on FFortItemCard_S_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_S_ItemInstance_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, PowerRatingBlockPadding) == 0x000010, "Member 'FFortItemCard_S_ItemInstance_Configuration::PowerRatingBlockPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, PowerRatingBlock) == 0x000020, "Member 'FFortItemCard_S_ItemInstance_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, BookmarkImageSize) == 0x000260, "Member 'FFortItemCard_S_ItemInstance_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, StackCountBlock) == 0x000270, "Member 'FFortItemCard_S_ItemInstance_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, TraitBoxPadding) == 0x0002A0, "Member 'FFortItemCard_S_ItemInstance_Configuration::TraitBoxPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, FirstTraitSize) == 0x0002B0, "Member 'FFortItemCard_S_ItemInstance_Configuration::FirstTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, TierMeterPadding) == 0x0002C0, "Member 'FFortItemCard_S_ItemInstance_Configuration::TierMeterPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, TierMeter) == 0x0002D0, "Member 'FFortItemCard_S_ItemInstance_Configuration::TierMeter' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_ItemInstance_Configuration, DurabilityMeter) == 0x0002E8, "Member 'FFortItemCard_S_ItemInstance_Configuration::DurabilityMeter' has a wrong offset!");

struct FFortItemCard_S_TransformKey_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FVector2D                              TransformKeyIconSize;
};
static_assert(alignof(FFortItemCard_S_TransformKey_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_S_TransformKey_Configuration");
static_assert(sizeof(FFortItemCard_S_TransformKey_Configuration) == 0x000050, "Wrong size on FFortItemCard_S_TransformKey_Configuration");
static_assert(offsetof(FFortItemCard_S_TransformKey_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_S_TransformKey_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_TransformKey_Configuration, StackCountBlock) == 0x000010, "Member 'FFortItemCard_S_TransformKey_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_S_TransformKey_Configuration, TransformKeyIconSize) == 0x000040, "Member 'FFortItemCard_S_TransformKey_Configuration::TransformKeyIconSize' has a wrong offset!");

struct FHeistExitCraftIconData final
{
public:
	int32                                         IconIndex;
	EHeistExitCraftIconState                      IconState;
	EHeistExitCraftIconState                      PrevIconState;
	uint8                                         Pad_6[0x2];
	int32                                         SecondsUntilIncoming;
	bool                                          bTeamHasBling;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FHeistExitCraftIconData) == 0x000004, "Wrong alignment on FHeistExitCraftIconData");
static_assert(sizeof(FHeistExitCraftIconData) == 0x000010, "Wrong size on FHeistExitCraftIconData");
static_assert(offsetof(FHeistExitCraftIconData, IconIndex) == 0x000000, "Member 'FHeistExitCraftIconData::IconIndex' has a wrong offset!");
static_assert(offsetof(FHeistExitCraftIconData, IconState) == 0x000004, "Member 'FHeistExitCraftIconData::IconState' has a wrong offset!");
static_assert(offsetof(FHeistExitCraftIconData, PrevIconState) == 0x000005, "Member 'FHeistExitCraftIconData::PrevIconState' has a wrong offset!");
static_assert(offsetof(FHeistExitCraftIconData, SecondsUntilIncoming) == 0x000008, "Member 'FHeistExitCraftIconData::SecondsUntilIncoming' has a wrong offset!");
static_assert(offsetof(FHeistExitCraftIconData, bTeamHasBling) == 0x00000C, "Member 'FHeistExitCraftIconData::bTeamHasBling' has a wrong offset!");

struct FFortItemCard_XS_PersonnelAndSchematics_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FVector2D                              BookmarkImageSize;
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
	uint8                                         Pad_34[0x4];
	struct FVector2D                              AvailableUpgradeIconSize;
};
static_assert(alignof(FFortItemCard_XS_PersonnelAndSchematics_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_XS_PersonnelAndSchematics_Configuration");
static_assert(sizeof(FFortItemCard_XS_PersonnelAndSchematics_Configuration) == 0x000048, "Wrong size on FFortItemCard_XS_PersonnelAndSchematics_Configuration");
static_assert(offsetof(FFortItemCard_XS_PersonnelAndSchematics_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_XS_PersonnelAndSchematics_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_PersonnelAndSchematics_Configuration, BookmarkImageSize) == 0x000010, "Member 'FFortItemCard_XS_PersonnelAndSchematics_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_PersonnelAndSchematics_Configuration, DetailAreaBorder) == 0x000020, "Member 'FFortItemCard_XS_PersonnelAndSchematics_Configuration::DetailAreaBorder' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_PersonnelAndSchematics_Configuration, AvailableUpgradeIconSize) == 0x000038, "Member 'FFortItemCard_XS_PersonnelAndSchematics_Configuration::AvailableUpgradeIconSize' has a wrong offset!");

struct FFortItemCard_XS_ItemInstance_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FMargin                                PowerRatingBlockPadding;
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;
	struct FVector2D                              BookmarkImageSize;
	struct FMargin                                TraitBoxPadding;
	struct FVector2D                              FirstTraitSize;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;
	uint8                                         Pad_2D4[0xC];
};
static_assert(alignof(FFortItemCard_XS_ItemInstance_Configuration) == 0x000010, "Wrong alignment on FFortItemCard_XS_ItemInstance_Configuration");
static_assert(sizeof(FFortItemCard_XS_ItemInstance_Configuration) == 0x0002E0, "Wrong size on FFortItemCard_XS_ItemInstance_Configuration");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_XS_ItemInstance_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, PowerRatingBlockPadding) == 0x000010, "Member 'FFortItemCard_XS_ItemInstance_Configuration::PowerRatingBlockPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, PowerRatingBlock) == 0x000020, "Member 'FFortItemCard_XS_ItemInstance_Configuration::PowerRatingBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, BookmarkImageSize) == 0x000260, "Member 'FFortItemCard_XS_ItemInstance_Configuration::BookmarkImageSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, TraitBoxPadding) == 0x000270, "Member 'FFortItemCard_XS_ItemInstance_Configuration::TraitBoxPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, FirstTraitSize) == 0x000280, "Member 'FFortItemCard_XS_ItemInstance_Configuration::FirstTraitSize' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, StackCountBlock) == 0x000290, "Member 'FFortItemCard_XS_ItemInstance_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_ItemInstance_Configuration, DurabilityMeter) == 0x0002C0, "Member 'FFortItemCard_XS_ItemInstance_Configuration::DurabilityMeter' has a wrong offset!");

struct FCrewPlatformTable final
{
public:
	EAppStore                                     SubscriptionPlatform;
	uint8                                         Pad_1[0x7];
	TArray<struct FCrewTableRow>                  TableRows;
};
static_assert(alignof(FCrewPlatformTable) == 0x000008, "Wrong alignment on FCrewPlatformTable");
static_assert(sizeof(FCrewPlatformTable) == 0x000018, "Wrong size on FCrewPlatformTable");
static_assert(offsetof(FCrewPlatformTable, SubscriptionPlatform) == 0x000000, "Member 'FCrewPlatformTable::SubscriptionPlatform' has a wrong offset!");
static_assert(offsetof(FCrewPlatformTable, TableRows) == 0x000008, "Member 'FCrewPlatformTable::TableRows' has a wrong offset!");

struct FCrewPlatformAndCountriesNotificationModal final
{
public:
	class FString                                 NotificationId;
	TArray<struct FCrewPlatformAndCountriesPair>  ValidPlatformAndCountriesPairs;
	class FText                                   Title;
	class FText                                   DefaultBodyText;
	class FText                                   BodyTextIfSubscriptionCanceled;
	class FText                                   BodyTextIfNoBodyTable;
	class FText                                   BodyTextIfNoBodyTableAndSubscriptionCanceled;
	struct FDateTime                              EffectiveDate;
	TArray<struct FCrewPlatformTable>             PlatformSpecificBodyTables;
	class FText                                   CheckboxText;
	class FText                                   DefaultConfirmButtonText;
	class FText                                   ConfirmButtonTextIfSubscriptionCanceled;
	class FText                                   CancelSubscriptionButtonText;
	class FText                                   MoreInfoText;
	class FText                                   MoreInfoUrl;
	struct FDateTime                              NotificationStartDate;
	struct FDateTime                              NotificationEndDate;
};
static_assert(alignof(FCrewPlatformAndCountriesNotificationModal) == 0x000008, "Wrong alignment on FCrewPlatformAndCountriesNotificationModal");
static_assert(sizeof(FCrewPlatformAndCountriesNotificationModal) == 0x000150, "Wrong size on FCrewPlatformAndCountriesNotificationModal");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, NotificationId) == 0x000000, "Member 'FCrewPlatformAndCountriesNotificationModal::NotificationId' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, ValidPlatformAndCountriesPairs) == 0x000010, "Member 'FCrewPlatformAndCountriesNotificationModal::ValidPlatformAndCountriesPairs' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, Title) == 0x000020, "Member 'FCrewPlatformAndCountriesNotificationModal::Title' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, DefaultBodyText) == 0x000038, "Member 'FCrewPlatformAndCountriesNotificationModal::DefaultBodyText' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, BodyTextIfSubscriptionCanceled) == 0x000050, "Member 'FCrewPlatformAndCountriesNotificationModal::BodyTextIfSubscriptionCanceled' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, BodyTextIfNoBodyTable) == 0x000068, "Member 'FCrewPlatformAndCountriesNotificationModal::BodyTextIfNoBodyTable' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, BodyTextIfNoBodyTableAndSubscriptionCanceled) == 0x000080, "Member 'FCrewPlatformAndCountriesNotificationModal::BodyTextIfNoBodyTableAndSubscriptionCanceled' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, EffectiveDate) == 0x000098, "Member 'FCrewPlatformAndCountriesNotificationModal::EffectiveDate' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, PlatformSpecificBodyTables) == 0x0000A0, "Member 'FCrewPlatformAndCountriesNotificationModal::PlatformSpecificBodyTables' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, CheckboxText) == 0x0000B0, "Member 'FCrewPlatformAndCountriesNotificationModal::CheckboxText' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, DefaultConfirmButtonText) == 0x0000C8, "Member 'FCrewPlatformAndCountriesNotificationModal::DefaultConfirmButtonText' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, ConfirmButtonTextIfSubscriptionCanceled) == 0x0000E0, "Member 'FCrewPlatformAndCountriesNotificationModal::ConfirmButtonTextIfSubscriptionCanceled' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, CancelSubscriptionButtonText) == 0x0000F8, "Member 'FCrewPlatformAndCountriesNotificationModal::CancelSubscriptionButtonText' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, MoreInfoText) == 0x000110, "Member 'FCrewPlatformAndCountriesNotificationModal::MoreInfoText' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, MoreInfoUrl) == 0x000128, "Member 'FCrewPlatformAndCountriesNotificationModal::MoreInfoUrl' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, NotificationStartDate) == 0x000140, "Member 'FCrewPlatformAndCountriesNotificationModal::NotificationStartDate' has a wrong offset!");
static_assert(offsetof(FCrewPlatformAndCountriesNotificationModal, NotificationEndDate) == 0x000148, "Member 'FCrewPlatformAndCountriesNotificationModal::NotificationEndDate' has a wrong offset!");

struct FFortItemCard_XS_TransformKey_Configuration final
{
public:
	struct FMargin                                BackgroundPadding;
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;
	struct FVector2D                              TransformKeyIconSize;
};
static_assert(alignof(FFortItemCard_XS_TransformKey_Configuration) == 0x000008, "Wrong alignment on FFortItemCard_XS_TransformKey_Configuration");
static_assert(sizeof(FFortItemCard_XS_TransformKey_Configuration) == 0x000050, "Wrong size on FFortItemCard_XS_TransformKey_Configuration");
static_assert(offsetof(FFortItemCard_XS_TransformKey_Configuration, BackgroundPadding) == 0x000000, "Member 'FFortItemCard_XS_TransformKey_Configuration::BackgroundPadding' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_TransformKey_Configuration, StackCountBlock) == 0x000010, "Member 'FFortItemCard_XS_TransformKey_Configuration::StackCountBlock' has a wrong offset!");
static_assert(offsetof(FFortItemCard_XS_TransformKey_Configuration, TransformKeyIconSize) == 0x000040, "Member 'FFortItemCard_XS_TransformKey_Configuration::TransformKeyIconSize' has a wrong offset!");

struct FTDMTeamScoreData final
{
public:
	class FText                                   CurrScoreText;
	float                                         CurrScorePercent;
	int32                                         CurrScore;
};
static_assert(alignof(FTDMTeamScoreData) == 0x000008, "Wrong alignment on FTDMTeamScoreData");
static_assert(sizeof(FTDMTeamScoreData) == 0x000020, "Wrong size on FTDMTeamScoreData");
static_assert(offsetof(FTDMTeamScoreData, CurrScoreText) == 0x000000, "Member 'FTDMTeamScoreData::CurrScoreText' has a wrong offset!");
static_assert(offsetof(FTDMTeamScoreData, CurrScorePercent) == 0x000018, "Member 'FTDMTeamScoreData::CurrScorePercent' has a wrong offset!");
static_assert(offsetof(FTDMTeamScoreData, CurrScore) == 0x00001C, "Member 'FTDMTeamScoreData::CurrScore' has a wrong offset!");

struct FFortItemManagementInventoryFilterTabLabelInfo final : public FFortTabButtonLabelInfo
{
public:
	class FName                                   FilterTabNameId;
	uint8                                         Pad_EC[0x4];
};
static_assert(alignof(FFortItemManagementInventoryFilterTabLabelInfo) == 0x000010, "Wrong alignment on FFortItemManagementInventoryFilterTabLabelInfo");
static_assert(sizeof(FFortItemManagementInventoryFilterTabLabelInfo) == 0x0000F0, "Wrong size on FFortItemManagementInventoryFilterTabLabelInfo");
static_assert(offsetof(FFortItemManagementInventoryFilterTabLabelInfo, FilterTabNameId) == 0x0000E8, "Member 'FFortItemManagementInventoryFilterTabLabelInfo::FilterTabNameId' has a wrong offset!");

struct FQuickbarEquipSlotIndicesConfig final
{
public:
	TArray<int32>                                 EquipSlotIndices;
};
static_assert(alignof(FQuickbarEquipSlotIndicesConfig) == 0x000008, "Wrong alignment on FQuickbarEquipSlotIndicesConfig");
static_assert(sizeof(FQuickbarEquipSlotIndicesConfig) == 0x000010, "Wrong size on FQuickbarEquipSlotIndicesConfig");
static_assert(offsetof(FQuickbarEquipSlotIndicesConfig, EquipSlotIndices) == 0x000000, "Member 'FQuickbarEquipSlotIndicesConfig::EquipSlotIndices' has a wrong offset!");

struct FCrewTileImages final
{
public:
	class FString                                 TileImageURL;
	class FString                                 NextTileImageURL;
};
static_assert(alignof(FCrewTileImages) == 0x000008, "Wrong alignment on FCrewTileImages");
static_assert(sizeof(FCrewTileImages) == 0x000020, "Wrong size on FCrewTileImages");
static_assert(offsetof(FCrewTileImages, TileImageURL) == 0x000000, "Member 'FCrewTileImages::TileImageURL' has a wrong offset!");
static_assert(offsetof(FCrewTileImages, NextTileImageURL) == 0x000010, "Member 'FCrewTileImages::NextTileImageURL' has a wrong offset!");

struct FBattlePassPurchaseData final
{
public:
	class FString                                 BattlePassPurchaseBackgroundURL;
	class FText                                   BattlePassPurchaseDisclaimer;
	class FText                                   BattlePassScreenDisclaimer;
	class FText                                   BattlePassPurchaseLevelDisclaimer;
	class FText                                   BattlePassPurchaseDescription;
	class FString                                 BattlePassPurchaseConfirmBackgroundURL;
	struct FCrewTileImages                        BattlePassTileImages;
};
static_assert(alignof(FBattlePassPurchaseData) == 0x000008, "Wrong alignment on FBattlePassPurchaseData");
static_assert(sizeof(FBattlePassPurchaseData) == 0x0000A0, "Wrong size on FBattlePassPurchaseData");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassPurchaseBackgroundURL) == 0x000000, "Member 'FBattlePassPurchaseData::BattlePassPurchaseBackgroundURL' has a wrong offset!");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassPurchaseDisclaimer) == 0x000010, "Member 'FBattlePassPurchaseData::BattlePassPurchaseDisclaimer' has a wrong offset!");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassScreenDisclaimer) == 0x000028, "Member 'FBattlePassPurchaseData::BattlePassScreenDisclaimer' has a wrong offset!");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassPurchaseLevelDisclaimer) == 0x000040, "Member 'FBattlePassPurchaseData::BattlePassPurchaseLevelDisclaimer' has a wrong offset!");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassPurchaseDescription) == 0x000058, "Member 'FBattlePassPurchaseData::BattlePassPurchaseDescription' has a wrong offset!");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassPurchaseConfirmBackgroundURL) == 0x000070, "Member 'FBattlePassPurchaseData::BattlePassPurchaseConfirmBackgroundURL' has a wrong offset!");
static_assert(offsetof(FBattlePassPurchaseData, BattlePassTileImages) == 0x000080, "Member 'FBattlePassPurchaseData::BattlePassTileImages' has a wrong offset!");

struct FTagFilterOverride final
{
public:
	struct FGameplayTagContainer                  OverridingTags;
	ETagComparisonType                            ComparisonTypeToOverride;
	uint8                                         Pad_21[0x7];
	struct FGameplayTagContainer                  TagsToFilterOut;
};
static_assert(alignof(FTagFilterOverride) == 0x000008, "Wrong alignment on FTagFilterOverride");
static_assert(sizeof(FTagFilterOverride) == 0x000048, "Wrong size on FTagFilterOverride");
static_assert(offsetof(FTagFilterOverride, OverridingTags) == 0x000000, "Member 'FTagFilterOverride::OverridingTags' has a wrong offset!");
static_assert(offsetof(FTagFilterOverride, ComparisonTypeToOverride) == 0x000020, "Member 'FTagFilterOverride::ComparisonTypeToOverride' has a wrong offset!");
static_assert(offsetof(FTagFilterOverride, TagsToFilterOut) == 0x000028, "Member 'FTagFilterOverride::TagsToFilterOut' has a wrong offset!");

struct FImageRef final
{
public:
	int32                                         Width;
	int32                                         Height;
	class FString                                 URL;
};
static_assert(alignof(FImageRef) == 0x000008, "Wrong alignment on FImageRef");
static_assert(sizeof(FImageRef) == 0x000018, "Wrong size on FImageRef");
static_assert(offsetof(FImageRef, Width) == 0x000000, "Member 'FImageRef::Width' has a wrong offset!");
static_assert(offsetof(FImageRef, Height) == 0x000004, "Member 'FImageRef::Height' has a wrong offset!");
static_assert(offsetof(FImageRef, URL) == 0x000008, "Member 'FImageRef::URL' has a wrong offset!");

struct FAthenaMOTDBase
{
public:
	uint8                                         Pad_0[0x8];
	EAthenaNewsEntryType                          EntryType;
	uint8                                         Pad_9[0x7];
	class FString                                 Title;
	class FString                                 Body;
	TArray<struct FImageRef>                      Images;
	TArray<struct FImageRef>                      TileImages;
	struct FColor                                 CustomDarkColor;
	struct FColor                                 CustomLightColor;
	class FString                                 AdSpace;
	class FString                                 TabTitleOverride;
	class FString                                 ButtonTextOverride;
	bool                                          bHasCustomColor;
	bool                                          bIsFtueMotd;
	uint8                                         Pad_8A[0x46];
};
static_assert(alignof(FAthenaMOTDBase) == 0x000008, "Wrong alignment on FAthenaMOTDBase");
static_assert(sizeof(FAthenaMOTDBase) == 0x0000D0, "Wrong size on FAthenaMOTDBase");
static_assert(offsetof(FAthenaMOTDBase, EntryType) == 0x000008, "Member 'FAthenaMOTDBase::EntryType' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, Title) == 0x000010, "Member 'FAthenaMOTDBase::Title' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, Body) == 0x000020, "Member 'FAthenaMOTDBase::Body' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, Images) == 0x000030, "Member 'FAthenaMOTDBase::Images' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, TileImages) == 0x000040, "Member 'FAthenaMOTDBase::TileImages' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, CustomDarkColor) == 0x000050, "Member 'FAthenaMOTDBase::CustomDarkColor' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, CustomLightColor) == 0x000054, "Member 'FAthenaMOTDBase::CustomLightColor' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, AdSpace) == 0x000058, "Member 'FAthenaMOTDBase::AdSpace' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, TabTitleOverride) == 0x000068, "Member 'FAthenaMOTDBase::TabTitleOverride' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, ButtonTextOverride) == 0x000078, "Member 'FAthenaMOTDBase::ButtonTextOverride' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, bHasCustomColor) == 0x000088, "Member 'FAthenaMOTDBase::bHasCustomColor' has a wrong offset!");
static_assert(offsetof(FAthenaMOTDBase, bIsFtueMotd) == 0x000089, "Member 'FAthenaMOTDBase::bIsFtueMotd' has a wrong offset!");

struct FNavigateToSocialTagsSubPageMOTD final : public FAthenaMOTDBase
{
};
static_assert(alignof(FNavigateToSocialTagsSubPageMOTD) == 0x000008, "Wrong alignment on FNavigateToSocialTagsSubPageMOTD");
static_assert(sizeof(FNavigateToSocialTagsSubPageMOTD) == 0x0000D0, "Wrong size on FNavigateToSocialTagsSubPageMOTD");

struct FIconPicker final
{
public:
	struct FGameplayTagContainer                  Tags;
	ETagComparisonType                            ComparisonType;
	uint8                                         Pad_21[0x7];
	class UPaperSprite*                           Sprite;
};
static_assert(alignof(FIconPicker) == 0x000008, "Wrong alignment on FIconPicker");
static_assert(sizeof(FIconPicker) == 0x000030, "Wrong size on FIconPicker");
static_assert(offsetof(FIconPicker, Tags) == 0x000000, "Member 'FIconPicker::Tags' has a wrong offset!");
static_assert(offsetof(FIconPicker, ComparisonType) == 0x000020, "Member 'FIconPicker::ComparisonType' has a wrong offset!");
static_assert(offsetof(FIconPicker, Sprite) == 0x000028, "Member 'FIconPicker::Sprite' has a wrong offset!");

struct FFortModalContainerSizeEntry final
{
public:
	float                                         AbsoluteWidth;
	float                                         TopPercent;
	float                                         MiddlePercent;
	float                                         BottomPercent;
	float                                         VerticalPadding;
	float                                         HorizontalPadding;
	float                                         ContentPadding;
};
static_assert(alignof(FFortModalContainerSizeEntry) == 0x000004, "Wrong alignment on FFortModalContainerSizeEntry");
static_assert(sizeof(FFortModalContainerSizeEntry) == 0x00001C, "Wrong size on FFortModalContainerSizeEntry");
static_assert(offsetof(FFortModalContainerSizeEntry, AbsoluteWidth) == 0x000000, "Member 'FFortModalContainerSizeEntry::AbsoluteWidth' has a wrong offset!");
static_assert(offsetof(FFortModalContainerSizeEntry, TopPercent) == 0x000004, "Member 'FFortModalContainerSizeEntry::TopPercent' has a wrong offset!");
static_assert(offsetof(FFortModalContainerSizeEntry, MiddlePercent) == 0x000008, "Member 'FFortModalContainerSizeEntry::MiddlePercent' has a wrong offset!");
static_assert(offsetof(FFortModalContainerSizeEntry, BottomPercent) == 0x00000C, "Member 'FFortModalContainerSizeEntry::BottomPercent' has a wrong offset!");
static_assert(offsetof(FFortModalContainerSizeEntry, VerticalPadding) == 0x000010, "Member 'FFortModalContainerSizeEntry::VerticalPadding' has a wrong offset!");
static_assert(offsetof(FFortModalContainerSizeEntry, HorizontalPadding) == 0x000014, "Member 'FFortModalContainerSizeEntry::HorizontalPadding' has a wrong offset!");
static_assert(offsetof(FFortModalContainerSizeEntry, ContentPadding) == 0x000018, "Member 'FFortModalContainerSizeEntry::ContentPadding' has a wrong offset!");

struct FNavigateToTabMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x18];
};
static_assert(alignof(FNavigateToTabMOTD) == 0x000008, "Wrong alignment on FNavigateToTabMOTD");
static_assert(sizeof(FNavigateToTabMOTD) == 0x0000E8, "Wrong size on FNavigateToTabMOTD");

struct FFortUIPerkTier final
{
public:
	class UFortHeroSpecialization*                HeroSpecialization;
	class UFortHero*                              CurrentHero;
	EFortItemTier                                 Tier;
	bool                                          bIsUpgrade;
	bool                                          bIsEvolution;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FFortUIPerkTier) == 0x000008, "Wrong alignment on FFortUIPerkTier");
static_assert(sizeof(FFortUIPerkTier) == 0x000018, "Wrong size on FFortUIPerkTier");
static_assert(offsetof(FFortUIPerkTier, HeroSpecialization) == 0x000000, "Member 'FFortUIPerkTier::HeroSpecialization' has a wrong offset!");
static_assert(offsetof(FFortUIPerkTier, CurrentHero) == 0x000008, "Member 'FFortUIPerkTier::CurrentHero' has a wrong offset!");
static_assert(offsetof(FFortUIPerkTier, Tier) == 0x000010, "Member 'FFortUIPerkTier::Tier' has a wrong offset!");
static_assert(offsetof(FFortUIPerkTier, bIsUpgrade) == 0x000011, "Member 'FFortUIPerkTier::bIsUpgrade' has a wrong offset!");
static_assert(offsetof(FFortUIPerkTier, bIsEvolution) == 0x000012, "Member 'FFortUIPerkTier::bIsEvolution' has a wrong offset!");

struct FFortUIPerk final
{
public:
	struct FFortSpecializationSlot                SpecializationSlot;
	class UFortHero*                              Hero;
	EFortItemTier                                 Tier;
	EFortSupportBonusType                         SupportBonusType;
	bool                                          bIsTierPerk;
	bool                                          bIsUpgrade;
	bool                                          bIsEvolution;
	bool                                          bIsEvolutionBranch;
	uint8                                         Pad_96[0x2];
};
static_assert(alignof(FFortUIPerk) == 0x000008, "Wrong alignment on FFortUIPerk");
static_assert(sizeof(FFortUIPerk) == 0x000098, "Wrong size on FFortUIPerk");
static_assert(offsetof(FFortUIPerk, SpecializationSlot) == 0x000000, "Member 'FFortUIPerk::SpecializationSlot' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, Hero) == 0x000088, "Member 'FFortUIPerk::Hero' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, Tier) == 0x000090, "Member 'FFortUIPerk::Tier' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, SupportBonusType) == 0x000091, "Member 'FFortUIPerk::SupportBonusType' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, bIsTierPerk) == 0x000092, "Member 'FFortUIPerk::bIsTierPerk' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, bIsUpgrade) == 0x000093, "Member 'FFortUIPerk::bIsUpgrade' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, bIsEvolution) == 0x000094, "Member 'FFortUIPerk::bIsEvolution' has a wrong offset!");
static_assert(offsetof(FFortUIPerk, bIsEvolutionBranch) == 0x000095, "Member 'FFortUIPerk::bIsEvolutionBranch' has a wrong offset!");

struct FNavigateToCompetitiveSubPageMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x10];
};
static_assert(alignof(FNavigateToCompetitiveSubPageMOTD) == 0x000008, "Wrong alignment on FNavigateToCompetitiveSubPageMOTD");
static_assert(sizeof(FNavigateToCompetitiveSubPageMOTD) == 0x0000E0, "Wrong size on FNavigateToCompetitiveSubPageMOTD");

struct FFortPlayerSurveyLocalizableText final
{
public:
	class FString                                 TextID;
	class FString                                 LocalizedText;
};
static_assert(alignof(FFortPlayerSurveyLocalizableText) == 0x000008, "Wrong alignment on FFortPlayerSurveyLocalizableText");
static_assert(sizeof(FFortPlayerSurveyLocalizableText) == 0x000020, "Wrong size on FFortPlayerSurveyLocalizableText");
static_assert(offsetof(FFortPlayerSurveyLocalizableText, TextID) == 0x000000, "Member 'FFortPlayerSurveyLocalizableText::TextID' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyLocalizableText, LocalizedText) == 0x000010, "Member 'FFortPlayerSurveyLocalizableText::LocalizedText' has a wrong offset!");

struct FFortPlayerSurveyCMSCustomTextReplacement final
{
public:
	class FString                                 TextReplacementTag;
	TArray<struct FFortPlayerSurveyLocalizableText> TextReplacementValues;
};
static_assert(alignof(FFortPlayerSurveyCMSCustomTextReplacement) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSCustomTextReplacement");
static_assert(sizeof(FFortPlayerSurveyCMSCustomTextReplacement) == 0x000020, "Wrong size on FFortPlayerSurveyCMSCustomTextReplacement");
static_assert(offsetof(FFortPlayerSurveyCMSCustomTextReplacement, TextReplacementTag) == 0x000000, "Member 'FFortPlayerSurveyCMSCustomTextReplacement::TextReplacementTag' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSCustomTextReplacement, TextReplacementValues) == 0x000010, "Member 'FFortPlayerSurveyCMSCustomTextReplacement::TextReplacementValues' has a wrong offset!");

struct FFortPickerTemporaryWheelItem final
{
public:
	class FText                                   LabelOverride;
	class UFortItemDefinition*                    Item;
};
static_assert(alignof(FFortPickerTemporaryWheelItem) == 0x000008, "Wrong alignment on FFortPickerTemporaryWheelItem");
static_assert(sizeof(FFortPickerTemporaryWheelItem) == 0x000020, "Wrong size on FFortPickerTemporaryWheelItem");
static_assert(offsetof(FFortPickerTemporaryWheelItem, LabelOverride) == 0x000000, "Member 'FFortPickerTemporaryWheelItem::LabelOverride' has a wrong offset!");
static_assert(offsetof(FFortPickerTemporaryWheelItem, Item) == 0x000018, "Member 'FFortPickerTemporaryWheelItem::Item' has a wrong offset!");

struct FFortPlayerSurveyCMSQuestion final
{
public:
	struct FFortPlayerSurveyLocalizableText       QuestionText;
	class FString                                 Type;
	uint32                                        NumberOfOptions;
	uint8                                         Pad_34[0x4];
	TArray<struct FFortPlayerSurveyLocalizableText> Responses;
	bool                                          bRandomizeResponseOrder;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(FFortPlayerSurveyCMSQuestion) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSQuestion");
static_assert(sizeof(FFortPlayerSurveyCMSQuestion) == 0x000050, "Wrong size on FFortPlayerSurveyCMSQuestion");
static_assert(offsetof(FFortPlayerSurveyCMSQuestion, QuestionText) == 0x000000, "Member 'FFortPlayerSurveyCMSQuestion::QuestionText' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSQuestion, Type) == 0x000020, "Member 'FFortPlayerSurveyCMSQuestion::Type' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSQuestion, NumberOfOptions) == 0x000030, "Member 'FFortPlayerSurveyCMSQuestion::NumberOfOptions' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSQuestion, Responses) == 0x000038, "Member 'FFortPlayerSurveyCMSQuestion::Responses' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSQuestion, bRandomizeResponseOrder) == 0x000048, "Member 'FFortPlayerSurveyCMSQuestion::bRandomizeResponseOrder' has a wrong offset!");

struct FFortPlayerSurveyCMSFrequentlyAskedQuestion final
{
public:
	class FString                                 FrequentlyAskedQuestionID;
	struct FFortPlayerSurveyCMSQuestion           Question;
};
static_assert(alignof(FFortPlayerSurveyCMSFrequentlyAskedQuestion) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSFrequentlyAskedQuestion");
static_assert(sizeof(FFortPlayerSurveyCMSFrequentlyAskedQuestion) == 0x000060, "Wrong size on FFortPlayerSurveyCMSFrequentlyAskedQuestion");
static_assert(offsetof(FFortPlayerSurveyCMSFrequentlyAskedQuestion, FrequentlyAskedQuestionID) == 0x000000, "Member 'FFortPlayerSurveyCMSFrequentlyAskedQuestion::FrequentlyAskedQuestionID' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSFrequentlyAskedQuestion, Question) == 0x000010, "Member 'FFortPlayerSurveyCMSFrequentlyAskedQuestion::Question' has a wrong offset!");

struct FShowdownTournamentData final
{
public:
	class FString                                 Tournament_Display_Id;
	class FText                                   Title_Line_1;
	class FText                                   Title_Line_2;
	class FText                                   Schedule_Info;
	class FString                                 Poster_Front_Image;
	class FString                                 Poster_Back_Image;
	class FText                                   Flavor_Description;
	class FText                                   Details_Description;
	class FText                                   Short_Format_Title;
	class FText                                   Long_Format_Title;
	class FText                                   Background_Title;
	int32                                         Pin_Score_Requirement;
	uint8                                         Pad_F4[0x4];
	class FText                                   Pin_Earned_Text;
	struct FLinearColor                           Base_Color;
	struct FLinearColor                           Primary_Color;
	struct FLinearColor                           Secondary_Color;
	struct FLinearColor                           Highlight_Color;
	struct FLinearColor                           Title_Color;
	struct FLinearColor                           Shadow_Color;
	struct FLinearColor                           Background_Left_Color;
	struct FLinearColor                           Background_Right_Color;
	struct FLinearColor                           Background_Text_Color;
	struct FLinearColor                           Poster_Fade_Color;
	class FString                                 Playlist_Tile_Image;
	class FString                                 Loading_Screen_Image;
	class FString                                 Style_Info_Id;
	class FString                                 Alert_Text;
	EFortTournamentAlertType                      AlertType;
	uint8                                         Pad_1F1[0x7];
};
static_assert(alignof(FShowdownTournamentData) == 0x000008, "Wrong alignment on FShowdownTournamentData");
static_assert(sizeof(FShowdownTournamentData) == 0x0001F8, "Wrong size on FShowdownTournamentData");
static_assert(offsetof(FShowdownTournamentData, Tournament_Display_Id) == 0x000000, "Member 'FShowdownTournamentData::Tournament_Display_Id' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Title_Line_1) == 0x000010, "Member 'FShowdownTournamentData::Title_Line_1' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Title_Line_2) == 0x000028, "Member 'FShowdownTournamentData::Title_Line_2' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Schedule_Info) == 0x000040, "Member 'FShowdownTournamentData::Schedule_Info' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Poster_Front_Image) == 0x000058, "Member 'FShowdownTournamentData::Poster_Front_Image' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Poster_Back_Image) == 0x000068, "Member 'FShowdownTournamentData::Poster_Back_Image' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Flavor_Description) == 0x000078, "Member 'FShowdownTournamentData::Flavor_Description' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Details_Description) == 0x000090, "Member 'FShowdownTournamentData::Details_Description' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Short_Format_Title) == 0x0000A8, "Member 'FShowdownTournamentData::Short_Format_Title' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Long_Format_Title) == 0x0000C0, "Member 'FShowdownTournamentData::Long_Format_Title' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Background_Title) == 0x0000D8, "Member 'FShowdownTournamentData::Background_Title' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Pin_Score_Requirement) == 0x0000F0, "Member 'FShowdownTournamentData::Pin_Score_Requirement' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Pin_Earned_Text) == 0x0000F8, "Member 'FShowdownTournamentData::Pin_Earned_Text' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Base_Color) == 0x000110, "Member 'FShowdownTournamentData::Base_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Primary_Color) == 0x000120, "Member 'FShowdownTournamentData::Primary_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Secondary_Color) == 0x000130, "Member 'FShowdownTournamentData::Secondary_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Highlight_Color) == 0x000140, "Member 'FShowdownTournamentData::Highlight_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Title_Color) == 0x000150, "Member 'FShowdownTournamentData::Title_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Shadow_Color) == 0x000160, "Member 'FShowdownTournamentData::Shadow_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Background_Left_Color) == 0x000170, "Member 'FShowdownTournamentData::Background_Left_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Background_Right_Color) == 0x000180, "Member 'FShowdownTournamentData::Background_Right_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Background_Text_Color) == 0x000190, "Member 'FShowdownTournamentData::Background_Text_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Poster_Fade_Color) == 0x0001A0, "Member 'FShowdownTournamentData::Poster_Fade_Color' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Playlist_Tile_Image) == 0x0001B0, "Member 'FShowdownTournamentData::Playlist_Tile_Image' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Loading_Screen_Image) == 0x0001C0, "Member 'FShowdownTournamentData::Loading_Screen_Image' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Style_Info_Id) == 0x0001D0, "Member 'FShowdownTournamentData::Style_Info_Id' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, Alert_Text) == 0x0001E0, "Member 'FShowdownTournamentData::Alert_Text' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentData, AlertType) == 0x0001F0, "Member 'FShowdownTournamentData::AlertType' has a wrong offset!");

struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID final
{
public:
	class FString                                 ID;
};
static_assert(alignof(FFortPlayerSurveyCMSFrequentlyAskedQuestionID) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSFrequentlyAskedQuestionID");
static_assert(sizeof(FFortPlayerSurveyCMSFrequentlyAskedQuestionID) == 0x000010, "Wrong size on FFortPlayerSurveyCMSFrequentlyAskedQuestionID");
static_assert(offsetof(FFortPlayerSurveyCMSFrequentlyAskedQuestionID, ID) == 0x000000, "Member 'FFortPlayerSurveyCMSFrequentlyAskedQuestionID::ID' has a wrong offset!");

struct FFortPlayerSurveyCMSQuestionContainer final
{
public:
	struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID FrequentlyAskedQuestionID;
	struct FFortPlayerSurveyCMSQuestion           Question;
};
static_assert(alignof(FFortPlayerSurveyCMSQuestionContainer) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSQuestionContainer");
static_assert(sizeof(FFortPlayerSurveyCMSQuestionContainer) == 0x000060, "Wrong size on FFortPlayerSurveyCMSQuestionContainer");
static_assert(offsetof(FFortPlayerSurveyCMSQuestionContainer, FrequentlyAskedQuestionID) == 0x000000, "Member 'FFortPlayerSurveyCMSQuestionContainer::FrequentlyAskedQuestionID' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSQuestionContainer, Question) == 0x000010, "Member 'FFortPlayerSurveyCMSQuestionContainer::Question' has a wrong offset!");

struct FNavigateToSubscriptionSubPageMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x8];
};
static_assert(alignof(FNavigateToSubscriptionSubPageMOTD) == 0x000008, "Wrong alignment on FNavigateToSubscriptionSubPageMOTD");
static_assert(sizeof(FNavigateToSubscriptionSubPageMOTD) == 0x0000D8, "Wrong size on FNavigateToSubscriptionSubPageMOTD");

struct FFortPlayerSurveyCMSCondition final
{
public:
	class FString                                 Type;
	class FString                                 Operation;
	class FString                                 ComparisonValue;
	TArray<class FString>                         ConditionInfo;
	TArray<struct FJsonObjectWrapper>             ChildConditions;
};
static_assert(alignof(FFortPlayerSurveyCMSCondition) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSCondition");
static_assert(sizeof(FFortPlayerSurveyCMSCondition) == 0x000050, "Wrong size on FFortPlayerSurveyCMSCondition");
static_assert(offsetof(FFortPlayerSurveyCMSCondition, Type) == 0x000000, "Member 'FFortPlayerSurveyCMSCondition::Type' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSCondition, Operation) == 0x000010, "Member 'FFortPlayerSurveyCMSCondition::Operation' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSCondition, ComparisonValue) == 0x000020, "Member 'FFortPlayerSurveyCMSCondition::ComparisonValue' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSCondition, ConditionInfo) == 0x000030, "Member 'FFortPlayerSurveyCMSCondition::ConditionInfo' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSCondition, ChildConditions) == 0x000040, "Member 'FFortPlayerSurveyCMSCondition::ChildConditions' has a wrong offset!");

struct FFortPlayerSurveyCMSConditionGroup final
{
public:
	class FString                                 ConditionGroupID;
	TArray<struct FFortPlayerSurveyCMSCondition>  Conditions;
};
static_assert(alignof(FFortPlayerSurveyCMSConditionGroup) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSConditionGroup");
static_assert(sizeof(FFortPlayerSurveyCMSConditionGroup) == 0x000020, "Wrong size on FFortPlayerSurveyCMSConditionGroup");
static_assert(offsetof(FFortPlayerSurveyCMSConditionGroup, ConditionGroupID) == 0x000000, "Member 'FFortPlayerSurveyCMSConditionGroup::ConditionGroupID' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSConditionGroup, Conditions) == 0x000010, "Member 'FFortPlayerSurveyCMSConditionGroup::Conditions' has a wrong offset!");

struct FSubgameDisplayData final
{
public:
	class FText                                   Title;
	class FText                                   Description;
	class FText                                   SpecialMessage;
	class FText                                   StandardMessageLine1;
	class FText                                   StandardMessageLine2;
	class FString                                 Image;
	struct FLinearColor                           Color;
};
static_assert(alignof(FSubgameDisplayData) == 0x000008, "Wrong alignment on FSubgameDisplayData");
static_assert(sizeof(FSubgameDisplayData) == 0x000098, "Wrong size on FSubgameDisplayData");
static_assert(offsetof(FSubgameDisplayData, Title) == 0x000000, "Member 'FSubgameDisplayData::Title' has a wrong offset!");
static_assert(offsetof(FSubgameDisplayData, Description) == 0x000018, "Member 'FSubgameDisplayData::Description' has a wrong offset!");
static_assert(offsetof(FSubgameDisplayData, SpecialMessage) == 0x000030, "Member 'FSubgameDisplayData::SpecialMessage' has a wrong offset!");
static_assert(offsetof(FSubgameDisplayData, StandardMessageLine1) == 0x000048, "Member 'FSubgameDisplayData::StandardMessageLine1' has a wrong offset!");
static_assert(offsetof(FSubgameDisplayData, StandardMessageLine2) == 0x000060, "Member 'FSubgameDisplayData::StandardMessageLine2' has a wrong offset!");
static_assert(offsetof(FSubgameDisplayData, Image) == 0x000078, "Member 'FSubgameDisplayData::Image' has a wrong offset!");
static_assert(offsetof(FSubgameDisplayData, Color) == 0x000088, "Member 'FSubgameDisplayData::Color' has a wrong offset!");

struct FFortPlayerSurveyCMSSurvey final
{
public:
	class FString                                 SurveyID;
	TArray<class FString>                         SurveyTags;
	class FString                                 Title;
	TArray<class FString>                         ConditionGroupIDs;
	TArray<struct FFortPlayerSurveyCMSCondition>  Conditions;
	TArray<struct FFortPlayerSurveyCMSQuestionContainer> Questions;
	TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides;
	bool                                          bRandomizeQuestionOrder;
	uint8                                         Pad_71[0x7];
};
static_assert(alignof(FFortPlayerSurveyCMSSurvey) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSSurvey");
static_assert(sizeof(FFortPlayerSurveyCMSSurvey) == 0x000078, "Wrong size on FFortPlayerSurveyCMSSurvey");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, SurveyID) == 0x000000, "Member 'FFortPlayerSurveyCMSSurvey::SurveyID' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, SurveyTags) == 0x000010, "Member 'FFortPlayerSurveyCMSSurvey::SurveyTags' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, Title) == 0x000020, "Member 'FFortPlayerSurveyCMSSurvey::Title' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, ConditionGroupIDs) == 0x000030, "Member 'FFortPlayerSurveyCMSSurvey::ConditionGroupIDs' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, Conditions) == 0x000040, "Member 'FFortPlayerSurveyCMSSurvey::Conditions' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, Questions) == 0x000050, "Member 'FFortPlayerSurveyCMSSurvey::Questions' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, TextReplacementOverrides) == 0x000060, "Member 'FFortPlayerSurveyCMSSurvey::TextReplacementOverrides' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSSurvey, bRandomizeQuestionOrder) == 0x000070, "Member 'FFortPlayerSurveyCMSSurvey::bRandomizeQuestionOrder' has a wrong offset!");

struct FFortPlayerSurveyCMSData final
{
public:
	TArray<struct FFortPlayerSurveyCMSConditionGroup> ConditionGroups;
	TArray<struct FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions;
	TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements;
	TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> WhitelistedTextReplacements;
	TArray<struct FFortPlayerSurveyCMSSurvey>     Surveys;
	bool                                          bSurveysEnabled;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FFortPlayerSurveyCMSData) == 0x000008, "Wrong alignment on FFortPlayerSurveyCMSData");
static_assert(sizeof(FFortPlayerSurveyCMSData) == 0x000058, "Wrong size on FFortPlayerSurveyCMSData");
static_assert(offsetof(FFortPlayerSurveyCMSData, ConditionGroups) == 0x000000, "Member 'FFortPlayerSurveyCMSData::ConditionGroups' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSData, FrequentlyAskedQuestions) == 0x000010, "Member 'FFortPlayerSurveyCMSData::FrequentlyAskedQuestions' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSData, CustomTextReplacements) == 0x000020, "Member 'FFortPlayerSurveyCMSData::CustomTextReplacements' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSData, WhitelistedTextReplacements) == 0x000030, "Member 'FFortPlayerSurveyCMSData::WhitelistedTextReplacements' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSData, Surveys) == 0x000040, "Member 'FFortPlayerSurveyCMSData::Surveys' has a wrong offset!");
static_assert(offsetof(FFortPlayerSurveyCMSData, bSurveysEnabled) == 0x000050, "Member 'FFortPlayerSurveyCMSData::bSurveysEnabled' has a wrong offset!");

struct FFortUIPickerTrapSortScores final
{
public:
	float                                         UniqueTrapBonus;
	float                                         SlottedBonus;
	float                                         FavoriteBonus;
	float                                         MaxTrackedTrapBonusTime;
	float                                         TrackedTrapBonusMultiplier;
};
static_assert(alignof(FFortUIPickerTrapSortScores) == 0x000004, "Wrong alignment on FFortUIPickerTrapSortScores");
static_assert(sizeof(FFortUIPickerTrapSortScores) == 0x000014, "Wrong size on FFortUIPickerTrapSortScores");
static_assert(offsetof(FFortUIPickerTrapSortScores, UniqueTrapBonus) == 0x000000, "Member 'FFortUIPickerTrapSortScores::UniqueTrapBonus' has a wrong offset!");
static_assert(offsetof(FFortUIPickerTrapSortScores, SlottedBonus) == 0x000004, "Member 'FFortUIPickerTrapSortScores::SlottedBonus' has a wrong offset!");
static_assert(offsetof(FFortUIPickerTrapSortScores, FavoriteBonus) == 0x000008, "Member 'FFortUIPickerTrapSortScores::FavoriteBonus' has a wrong offset!");
static_assert(offsetof(FFortUIPickerTrapSortScores, MaxTrackedTrapBonusTime) == 0x00000C, "Member 'FFortUIPickerTrapSortScores::MaxTrackedTrapBonusTime' has a wrong offset!");
static_assert(offsetof(FFortUIPickerTrapSortScores, TrackedTrapBonusMultiplier) == 0x000010, "Member 'FFortUIPickerTrapSortScores::TrackedTrapBonusMultiplier' has a wrong offset!");

struct FFortUIPickerTrapSortModifier final : public FTableRowBase
{
public:
	struct FGameplayTagQuery                      ItemTagQuery;
	float                                         ScoreBonus;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FFortUIPickerTrapSortModifier) == 0x000008, "Wrong alignment on FFortUIPickerTrapSortModifier");
static_assert(sizeof(FFortUIPickerTrapSortModifier) == 0x000058, "Wrong size on FFortUIPickerTrapSortModifier");
static_assert(offsetof(FFortUIPickerTrapSortModifier, ItemTagQuery) == 0x000008, "Member 'FFortUIPickerTrapSortModifier::ItemTagQuery' has a wrong offset!");
static_assert(offsetof(FFortUIPickerTrapSortModifier, ScoreBonus) == 0x000050, "Member 'FFortUIPickerTrapSortModifier::ScoreBonus' has a wrong offset!");

struct alignas(0x08) FTouchMove final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FTouchMove) == 0x000008, "Wrong alignment on FTouchMove");
static_assert(sizeof(FTouchMove) == 0x000018, "Wrong size on FTouchMove");

struct FFortTopBarTabButtonInfo final
{
public:
	class FName                                   TabId;
	uint8                                         Pad_4[0x4];
	class FString                                 CalendarEventName;
	class FText                                   DisplayName;
	struct FSlateBrush                            IconBrush;
	EFortUIFeature                                LinkedUIFeature;
	EFortBangType                                 BangType;
	uint8                                         Pad_F2[0x2];
	int32                                         SortOrder;
	bool                                          bForceImage;
	bool                                          bPrimaryPlayerOnly;
	bool                                          bInteractAnalytic;
	uint8                                         Pad_FB[0x5];
	TSoftClassPtr<class UClass>                   OverrideTabWidget;
	bool                                          bIsDynamicTab;
	uint8                                         Pad_129[0x7];
};
static_assert(alignof(FFortTopBarTabButtonInfo) == 0x000010, "Wrong alignment on FFortTopBarTabButtonInfo");
static_assert(sizeof(FFortTopBarTabButtonInfo) == 0x000130, "Wrong size on FFortTopBarTabButtonInfo");
static_assert(offsetof(FFortTopBarTabButtonInfo, TabId) == 0x000000, "Member 'FFortTopBarTabButtonInfo::TabId' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, CalendarEventName) == 0x000008, "Member 'FFortTopBarTabButtonInfo::CalendarEventName' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, DisplayName) == 0x000018, "Member 'FFortTopBarTabButtonInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, IconBrush) == 0x000030, "Member 'FFortTopBarTabButtonInfo::IconBrush' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, LinkedUIFeature) == 0x0000F0, "Member 'FFortTopBarTabButtonInfo::LinkedUIFeature' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, BangType) == 0x0000F1, "Member 'FFortTopBarTabButtonInfo::BangType' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, SortOrder) == 0x0000F4, "Member 'FFortTopBarTabButtonInfo::SortOrder' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, bForceImage) == 0x0000F8, "Member 'FFortTopBarTabButtonInfo::bForceImage' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, bPrimaryPlayerOnly) == 0x0000F9, "Member 'FFortTopBarTabButtonInfo::bPrimaryPlayerOnly' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, bInteractAnalytic) == 0x0000FA, "Member 'FFortTopBarTabButtonInfo::bInteractAnalytic' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, OverrideTabWidget) == 0x000100, "Member 'FFortTopBarTabButtonInfo::OverrideTabWidget' has a wrong offset!");
static_assert(offsetof(FFortTopBarTabButtonInfo, bIsDynamicTab) == 0x000128, "Member 'FFortTopBarTabButtonInfo::bIsDynamicTab' has a wrong offset!");

struct FExternalDynamicTabParams final
{
public:
	TSoftClassPtr<class UClass>                   TabScreenClass;
	uint8                                         Pad_28[0x8];
	struct FFortTopBarTabButtonInfo               TabButtonInfo;
};
static_assert(alignof(FExternalDynamicTabParams) == 0x000010, "Wrong alignment on FExternalDynamicTabParams");
static_assert(sizeof(FExternalDynamicTabParams) == 0x000160, "Wrong size on FExternalDynamicTabParams");
static_assert(offsetof(FExternalDynamicTabParams, TabScreenClass) == 0x000000, "Member 'FExternalDynamicTabParams::TabScreenClass' has a wrong offset!");
static_assert(offsetof(FExternalDynamicTabParams, TabButtonInfo) == 0x000030, "Member 'FExternalDynamicTabParams::TabButtonInfo' has a wrong offset!");

struct FAthenaMessageEntry final
{
public:
	class FString                                 Title;
	class FString                                 Body;
	class FString                                 Image;
	class FString                                 Type;
	class FString                                 AdSpace;
};
static_assert(alignof(FAthenaMessageEntry) == 0x000008, "Wrong alignment on FAthenaMessageEntry");
static_assert(sizeof(FAthenaMessageEntry) == 0x000050, "Wrong size on FAthenaMessageEntry");
static_assert(offsetof(FAthenaMessageEntry, Title) == 0x000000, "Member 'FAthenaMessageEntry::Title' has a wrong offset!");
static_assert(offsetof(FAthenaMessageEntry, Body) == 0x000010, "Member 'FAthenaMessageEntry::Body' has a wrong offset!");
static_assert(offsetof(FAthenaMessageEntry, Image) == 0x000020, "Member 'FAthenaMessageEntry::Image' has a wrong offset!");
static_assert(offsetof(FAthenaMessageEntry, Type) == 0x000030, "Member 'FAthenaMessageEntry::Type' has a wrong offset!");
static_assert(offsetof(FAthenaMessageEntry, AdSpace) == 0x000040, "Member 'FAthenaMessageEntry::AdSpace' has a wrong offset!");

struct FFrontendDisabledTabs final
{
public:
	TArray<class FName>                           DisabledTabNames;
	TArray<class FName>                           HiddenTabNames;
};
static_assert(alignof(FFrontendDisabledTabs) == 0x000008, "Wrong alignment on FFrontendDisabledTabs");
static_assert(sizeof(FFrontendDisabledTabs) == 0x000020, "Wrong size on FFrontendDisabledTabs");
static_assert(offsetof(FFrontendDisabledTabs, DisabledTabNames) == 0x000000, "Member 'FFrontendDisabledTabs::DisabledTabNames' has a wrong offset!");
static_assert(offsetof(FFrontendDisabledTabs, HiddenTabNames) == 0x000010, "Member 'FFrontendDisabledTabs::HiddenTabNames' has a wrong offset!");

struct FUIStateTag : public FUITag
{
};
static_assert(alignof(FUIStateTag) == 0x000004, "Wrong alignment on FUIStateTag");
static_assert(sizeof(FUIStateTag) == 0x000004, "Wrong size on FUIStateTag");

struct FFortUINavigationOperation final
{
public:
	EFortUINavigationOp                           Operation;
	uint8                                         Pad_1[0x3];
	class FName                                   SquadId;
	int32                                         SquadSlotIndex;
	class FName                                   PageId;
	class FName                                   NodeId;
	uint8                                         Pad_14[0x4];
	class UFortItem*                              Item;
	EFortUIFeature                                Feature;
	EFortFrontendInventoryFilter                  ItemManagementFilter;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FFortUINavigationOperation) == 0x000008, "Wrong alignment on FFortUINavigationOperation");
static_assert(sizeof(FFortUINavigationOperation) == 0x000028, "Wrong size on FFortUINavigationOperation");
static_assert(offsetof(FFortUINavigationOperation, Operation) == 0x000000, "Member 'FFortUINavigationOperation::Operation' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, SquadId) == 0x000004, "Member 'FFortUINavigationOperation::SquadId' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, SquadSlotIndex) == 0x000008, "Member 'FFortUINavigationOperation::SquadSlotIndex' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, PageId) == 0x00000C, "Member 'FFortUINavigationOperation::PageId' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, NodeId) == 0x000010, "Member 'FFortUINavigationOperation::NodeId' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, Item) == 0x000018, "Member 'FFortUINavigationOperation::Item' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, Feature) == 0x000020, "Member 'FFortUINavigationOperation::Feature' has a wrong offset!");
static_assert(offsetof(FFortUINavigationOperation, ItemManagementFilter) == 0x000021, "Member 'FFortUINavigationOperation::ItemManagementFilter' has a wrong offset!");

struct FFortUINavigationRequest final
{
public:
	TArray<struct FFortUINavigationOperation>     Operations;
};
static_assert(alignof(FFortUINavigationRequest) == 0x000008, "Wrong alignment on FFortUINavigationRequest");
static_assert(sizeof(FFortUINavigationRequest) == 0x000010, "Wrong size on FFortUINavigationRequest");
static_assert(offsetof(FFortUINavigationRequest, Operations) == 0x000000, "Member 'FFortUINavigationRequest::Operations' has a wrong offset!");

struct FUIStateTag_FortStartup final : public FUIStateTag
{
};
static_assert(alignof(FUIStateTag_FortStartup) == 0x000004, "Wrong alignment on FUIStateTag_FortStartup");
static_assert(sizeof(FUIStateTag_FortStartup) == 0x000004, "Wrong size on FUIStateTag_FortStartup");

struct FUIStateTag_Athena final : public FUIStateTag
{
};
static_assert(alignof(FUIStateTag_Athena) == 0x000004, "Wrong alignment on FUIStateTag_Athena");
static_assert(sizeof(FUIStateTag_Athena) == 0x000004, "Wrong size on FUIStateTag_Athena");

struct FSpatialScreenMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x10];
};
static_assert(alignof(FSpatialScreenMOTD) == 0x000008, "Wrong alignment on FSpatialScreenMOTD");
static_assert(sizeof(FSpatialScreenMOTD) == 0x0000E0, "Wrong size on FSpatialScreenMOTD");

struct FUIStateTag_STW final : public FUIStateTag
{
};
static_assert(alignof(FUIStateTag_STW) == 0x000004, "Wrong alignment on FUIStateTag_STW");
static_assert(sizeof(FUIStateTag_STW) == 0x000004, "Wrong size on FUIStateTag_STW");

struct FFortUIStyleWindowButtons final
{
public:
	struct FButtonStyle                           Close;
	struct FButtonStyle                           Minimize;
	struct FButtonStyle                           Maximize;
	struct FButtonStyle                           Restore;
};
static_assert(alignof(FFortUIStyleWindowButtons) == 0x000010, "Wrong alignment on FFortUIStyleWindowButtons");
static_assert(sizeof(FFortUIStyleWindowButtons) == 0x000EC0, "Wrong size on FFortUIStyleWindowButtons");
static_assert(offsetof(FFortUIStyleWindowButtons, Close) == 0x000000, "Member 'FFortUIStyleWindowButtons::Close' has a wrong offset!");
static_assert(offsetof(FFortUIStyleWindowButtons, Minimize) == 0x0003B0, "Member 'FFortUIStyleWindowButtons::Minimize' has a wrong offset!");
static_assert(offsetof(FFortUIStyleWindowButtons, Maximize) == 0x000760, "Member 'FFortUIStyleWindowButtons::Maximize' has a wrong offset!");
static_assert(offsetof(FFortUIStyleWindowButtons, Restore) == 0x000B10, "Member 'FFortUIStyleWindowButtons::Restore' has a wrong offset!");

struct FInterpolatedTransitionCamera final
{
public:
	struct FTransform                             CameraTransform;
	float                                         FieldOfView;
	uint8                                         Pad_64[0xC];
};
static_assert(alignof(FInterpolatedTransitionCamera) == 0x000010, "Wrong alignment on FInterpolatedTransitionCamera");
static_assert(sizeof(FInterpolatedTransitionCamera) == 0x000070, "Wrong size on FInterpolatedTransitionCamera");
static_assert(offsetof(FInterpolatedTransitionCamera, CameraTransform) == 0x000000, "Member 'FInterpolatedTransitionCamera::CameraTransform' has a wrong offset!");
static_assert(offsetof(FInterpolatedTransitionCamera, FieldOfView) == 0x000060, "Member 'FInterpolatedTransitionCamera::FieldOfView' has a wrong offset!");

struct FFortUIStyleDefinition final
{
public:
	struct FFortUIStyleWindowButtons              WindowButtons;
};
static_assert(alignof(FFortUIStyleDefinition) == 0x000010, "Wrong alignment on FFortUIStyleDefinition");
static_assert(sizeof(FFortUIStyleDefinition) == 0x000EC0, "Wrong size on FFortUIStyleDefinition");
static_assert(offsetof(FFortUIStyleDefinition, WindowButtons) == 0x000000, "Member 'FFortUIStyleDefinition::WindowButtons' has a wrong offset!");

struct FFortUITutorialData final : public FTableRowBase
{
public:
	class FName                                   TutorialWidgetName;
	uint8                                         Pad_C[0x4];
	class FText                                   Title;
	class FString                                 DevComment;
	TArray<class FText>                           Descriptions;
	TArray<TSoftObjectPtr<class UTexture2D>>      PreviewImages;
};
static_assert(alignof(FFortUITutorialData) == 0x000008, "Wrong alignment on FFortUITutorialData");
static_assert(sizeof(FFortUITutorialData) == 0x000058, "Wrong size on FFortUITutorialData");
static_assert(offsetof(FFortUITutorialData, TutorialWidgetName) == 0x000008, "Member 'FFortUITutorialData::TutorialWidgetName' has a wrong offset!");
static_assert(offsetof(FFortUITutorialData, Title) == 0x000010, "Member 'FFortUITutorialData::Title' has a wrong offset!");
static_assert(offsetof(FFortUITutorialData, DevComment) == 0x000028, "Member 'FFortUITutorialData::DevComment' has a wrong offset!");
static_assert(offsetof(FFortUITutorialData, Descriptions) == 0x000038, "Member 'FFortUITutorialData::Descriptions' has a wrong offset!");
static_assert(offsetof(FFortUITutorialData, PreviewImages) == 0x000048, "Member 'FFortUITutorialData::PreviewImages' has a wrong offset!");

struct FCreativeAdData final
{
public:
	class FString                                 Header;
	class FString                                 Sub_Header;
	class FString                                 Description;
	class FString                                 Creator_Name;
	class FString                                 Island_Code;
	EFortCreativeAdType                           Ad_Type;
	EFortCreativeAdColorPreset                    Ad_Color_Preset;
	uint8                                         Pad_52[0x6];
	class FString                                 Image;
};
static_assert(alignof(FCreativeAdData) == 0x000008, "Wrong alignment on FCreativeAdData");
static_assert(sizeof(FCreativeAdData) == 0x000068, "Wrong size on FCreativeAdData");
static_assert(offsetof(FCreativeAdData, Header) == 0x000000, "Member 'FCreativeAdData::Header' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Sub_Header) == 0x000010, "Member 'FCreativeAdData::Sub_Header' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Description) == 0x000020, "Member 'FCreativeAdData::Description' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Creator_Name) == 0x000030, "Member 'FCreativeAdData::Creator_Name' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Island_Code) == 0x000040, "Member 'FCreativeAdData::Island_Code' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Ad_Type) == 0x000050, "Member 'FCreativeAdData::Ad_Type' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Ad_Color_Preset) == 0x000051, "Member 'FCreativeAdData::Ad_Color_Preset' has a wrong offset!");
static_assert(offsetof(FCreativeAdData, Image) == 0x000058, "Member 'FCreativeAdData::Image' has a wrong offset!");

struct FFortToastDisplayInfo final
{
public:
	class FText                                   Header;
	class FText                                   Body;
	TSoftObjectPtr<class UTexture2D>              Image;
	EFortToastType                                Type;
	uint8                                         Pad_59[0x7];
};
static_assert(alignof(FFortToastDisplayInfo) == 0x000008, "Wrong alignment on FFortToastDisplayInfo");
static_assert(sizeof(FFortToastDisplayInfo) == 0x000060, "Wrong size on FFortToastDisplayInfo");
static_assert(offsetof(FFortToastDisplayInfo, Header) == 0x000000, "Member 'FFortToastDisplayInfo::Header' has a wrong offset!");
static_assert(offsetof(FFortToastDisplayInfo, Body) == 0x000018, "Member 'FFortToastDisplayInfo::Body' has a wrong offset!");
static_assert(offsetof(FFortToastDisplayInfo, Image) == 0x000030, "Member 'FFortToastDisplayInfo::Image' has a wrong offset!");
static_assert(offsetof(FFortToastDisplayInfo, Type) == 0x000058, "Member 'FFortToastDisplayInfo::Type' has a wrong offset!");

struct FFortErrorInfo final
{
public:
	class FText                                   Operation;
	class FText                                   ErrorMessage;
	class FString                                 ErrorCode;
	EFortErrorSeverity                            ErrorSeverity;
	uint8                                         Pad_41[0x7];
	class FText                                   ContinueButtonText;
	uint8                                         Pad_60[0x10];
};
static_assert(alignof(FFortErrorInfo) == 0x000008, "Wrong alignment on FFortErrorInfo");
static_assert(sizeof(FFortErrorInfo) == 0x000070, "Wrong size on FFortErrorInfo");
static_assert(offsetof(FFortErrorInfo, Operation) == 0x000000, "Member 'FFortErrorInfo::Operation' has a wrong offset!");
static_assert(offsetof(FFortErrorInfo, ErrorMessage) == 0x000018, "Member 'FFortErrorInfo::ErrorMessage' has a wrong offset!");
static_assert(offsetof(FFortErrorInfo, ErrorCode) == 0x000030, "Member 'FFortErrorInfo::ErrorCode' has a wrong offset!");
static_assert(offsetof(FFortErrorInfo, ErrorSeverity) == 0x000040, "Member 'FFortErrorInfo::ErrorSeverity' has a wrong offset!");
static_assert(offsetof(FFortErrorInfo, ContinueButtonText) == 0x000048, "Member 'FFortErrorInfo::ContinueButtonText' has a wrong offset!");

struct alignas(0x08) FFortUserListHeaderInfo final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FFortUserListHeaderInfo) == 0x000008, "Wrong alignment on FFortUserListHeaderInfo");
static_assert(sizeof(FFortUserListHeaderInfo) == 0x000018, "Wrong size on FFortUserListHeaderInfo");

struct FFortDisplayModifier final
{
public:
	class FText                                   Label;
	class FText                                   Value;
	EFortStatValueDisplayType                     DisplayType;
	EFortBuffState                                BuffState;
	uint8                                         Pad_32[0x6];
};
static_assert(alignof(FFortDisplayModifier) == 0x000008, "Wrong alignment on FFortDisplayModifier");
static_assert(sizeof(FFortDisplayModifier) == 0x000038, "Wrong size on FFortDisplayModifier");
static_assert(offsetof(FFortDisplayModifier, Label) == 0x000000, "Member 'FFortDisplayModifier::Label' has a wrong offset!");
static_assert(offsetof(FFortDisplayModifier, Value) == 0x000018, "Member 'FFortDisplayModifier::Value' has a wrong offset!");
static_assert(offsetof(FFortDisplayModifier, DisplayType) == 0x000030, "Member 'FFortDisplayModifier::DisplayType' has a wrong offset!");
static_assert(offsetof(FFortDisplayModifier, BuffState) == 0x000031, "Member 'FFortDisplayModifier::BuffState' has a wrong offset!");

struct FFortDisplayAttribute final
{
public:
	struct FGameplayAttribute                     Attribute;
	class FText                                   Label;
	class FText                                   Value;
	class FText                                   HoverText;
	float                                         NumericValue;
	EFortStatValueDisplayType                     DisplayType;
	EFortBuffState                                BuffState;
	EFortClampState                               ClampState;
	EFortComparisonType                           ComparisonType;
};
static_assert(alignof(FFortDisplayAttribute) == 0x000008, "Wrong alignment on FFortDisplayAttribute");
static_assert(sizeof(FFortDisplayAttribute) == 0x000088, "Wrong size on FFortDisplayAttribute");
static_assert(offsetof(FFortDisplayAttribute, Attribute) == 0x000000, "Member 'FFortDisplayAttribute::Attribute' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, Label) == 0x000038, "Member 'FFortDisplayAttribute::Label' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, Value) == 0x000050, "Member 'FFortDisplayAttribute::Value' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, HoverText) == 0x000068, "Member 'FFortDisplayAttribute::HoverText' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, NumericValue) == 0x000080, "Member 'FFortDisplayAttribute::NumericValue' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, DisplayType) == 0x000084, "Member 'FFortDisplayAttribute::DisplayType' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, BuffState) == 0x000085, "Member 'FFortDisplayAttribute::BuffState' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, ClampState) == 0x000086, "Member 'FFortDisplayAttribute::ClampState' has a wrong offset!");
static_assert(offsetof(FFortDisplayAttribute, ComparisonType) == 0x000087, "Member 'FFortDisplayAttribute::ComparisonType' has a wrong offset!");

struct FEventMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x8];
};
static_assert(alignof(FEventMOTD) == 0x000008, "Wrong alignment on FEventMOTD");
static_assert(sizeof(FEventMOTD) == 0x0000D8, "Wrong size on FEventMOTD");

struct FFortSquadIconData final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];
	struct FFortMultiSizeBrush                    Brush;
};
static_assert(alignof(FFortSquadIconData) == 0x000010, "Wrong alignment on FFortSquadIconData");
static_assert(sizeof(FFortSquadIconData) == 0x000490, "Wrong size on FFortSquadIconData");
static_assert(offsetof(FFortSquadIconData, Brush) == 0x000010, "Member 'FFortSquadIconData::Brush' has a wrong offset!");

struct FFortHealthyGamingData final : public FTableRowBase
{
public:
	float                                         HealthWarningToastInterval;
	uint8                                         Pad_C[0x4];
	class FText                                   HealthWarningToastDescriptionFormat;
	class FText                                   HealthWarningScreenText;
	class FText                                   GameplayRestrictionText;
	float                                         GameplayRestrictionWarningTimeOffset;
	uint8                                         Pad_5C[0x4];
	class FText                                   AntiAddictionTotalDescriptionFormat;
	bool                                          bUsePlayerTimeLimitSystem;
	uint8                                         Pad_79[0x7];
	TArray<TSoftObjectPtr<class UTexture2D>>      RatingIcons;
};
static_assert(alignof(FFortHealthyGamingData) == 0x000008, "Wrong alignment on FFortHealthyGamingData");
static_assert(sizeof(FFortHealthyGamingData) == 0x000090, "Wrong size on FFortHealthyGamingData");
static_assert(offsetof(FFortHealthyGamingData, HealthWarningToastInterval) == 0x000008, "Member 'FFortHealthyGamingData::HealthWarningToastInterval' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, HealthWarningToastDescriptionFormat) == 0x000010, "Member 'FFortHealthyGamingData::HealthWarningToastDescriptionFormat' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, HealthWarningScreenText) == 0x000028, "Member 'FFortHealthyGamingData::HealthWarningScreenText' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, GameplayRestrictionText) == 0x000040, "Member 'FFortHealthyGamingData::GameplayRestrictionText' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, GameplayRestrictionWarningTimeOffset) == 0x000058, "Member 'FFortHealthyGamingData::GameplayRestrictionWarningTimeOffset' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, AntiAddictionTotalDescriptionFormat) == 0x000060, "Member 'FFortHealthyGamingData::AntiAddictionTotalDescriptionFormat' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, bUsePlayerTimeLimitSystem) == 0x000078, "Member 'FFortHealthyGamingData::bUsePlayerTimeLimitSystem' has a wrong offset!");
static_assert(offsetof(FFortHealthyGamingData, RatingIcons) == 0x000080, "Member 'FFortHealthyGamingData::RatingIcons' has a wrong offset!");

struct FFortActivityCompressedImageCache final
{
public:
	TArray<uint8>                                 CompressedImage;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FFortActivityCompressedImageCache) == 0x000008, "Wrong alignment on FFortActivityCompressedImageCache");
static_assert(sizeof(FFortActivityCompressedImageCache) == 0x000018, "Wrong size on FFortActivityCompressedImageCache");
static_assert(offsetof(FFortActivityCompressedImageCache, CompressedImage) == 0x000000, "Member 'FFortActivityCompressedImageCache::CompressedImage' has a wrong offset!");

struct FMatchmakingUIOverride final
{
public:
	TSoftClassPtr<class UClass>                   SoftMatchmakingOptionsClass;
	TSoftClassPtr<class UClass>                   SoftMatchmakingOptionsClassV2;
	TSoftClassPtr<class UClass>                   SoftLobbyMatchmakingWidgetClass;
};
static_assert(alignof(FMatchmakingUIOverride) == 0x000008, "Wrong alignment on FMatchmakingUIOverride");
static_assert(sizeof(FMatchmakingUIOverride) == 0x000078, "Wrong size on FMatchmakingUIOverride");
static_assert(offsetof(FMatchmakingUIOverride, SoftMatchmakingOptionsClass) == 0x000000, "Member 'FMatchmakingUIOverride::SoftMatchmakingOptionsClass' has a wrong offset!");
static_assert(offsetof(FMatchmakingUIOverride, SoftMatchmakingOptionsClassV2) == 0x000028, "Member 'FMatchmakingUIOverride::SoftMatchmakingOptionsClassV2' has a wrong offset!");
static_assert(offsetof(FMatchmakingUIOverride, SoftLobbyMatchmakingWidgetClass) == 0x000050, "Member 'FMatchmakingUIOverride::SoftLobbyMatchmakingWidgetClass' has a wrong offset!");

struct FAthenaStyleMissionData final
{
public:
	class UFortVariantTokenType*                  StyleDefinition;
	TArray<class UFortVariantTokenType*>          OptionalAdditionalStyleDefinitions;
	class UFortQuestItemDefinition*               Mission;
	class UAnimationAsset*                        OverrideIdleAnimation;
};
static_assert(alignof(FAthenaStyleMissionData) == 0x000008, "Wrong alignment on FAthenaStyleMissionData");
static_assert(sizeof(FAthenaStyleMissionData) == 0x000028, "Wrong size on FAthenaStyleMissionData");
static_assert(offsetof(FAthenaStyleMissionData, StyleDefinition) == 0x000000, "Member 'FAthenaStyleMissionData::StyleDefinition' has a wrong offset!");
static_assert(offsetof(FAthenaStyleMissionData, OptionalAdditionalStyleDefinitions) == 0x000008, "Member 'FAthenaStyleMissionData::OptionalAdditionalStyleDefinitions' has a wrong offset!");
static_assert(offsetof(FAthenaStyleMissionData, Mission) == 0x000018, "Member 'FAthenaStyleMissionData::Mission' has a wrong offset!");
static_assert(offsetof(FAthenaStyleMissionData, OverrideIdleAnimation) == 0x000020, "Member 'FAthenaStyleMissionData::OverrideIdleAnimation' has a wrong offset!");

struct FDynamicBackground final
{
public:
	class FString                                 _title;
	class FString                                 __locale;
	EDynamicBackgroudKey                          Key;
	uint8                                         Pad_21[0x7];
	class FString                                 BackgroundImage;
	class FString                                 Stage;
};
static_assert(alignof(FDynamicBackground) == 0x000008, "Wrong alignment on FDynamicBackground");
static_assert(sizeof(FDynamicBackground) == 0x000048, "Wrong size on FDynamicBackground");
static_assert(offsetof(FDynamicBackground, _title) == 0x000000, "Member 'FDynamicBackground::_title' has a wrong offset!");
static_assert(offsetof(FDynamicBackground, __locale) == 0x000010, "Member 'FDynamicBackground::__locale' has a wrong offset!");
static_assert(offsetof(FDynamicBackground, Key) == 0x000020, "Member 'FDynamicBackground::Key' has a wrong offset!");
static_assert(offsetof(FDynamicBackground, BackgroundImage) == 0x000028, "Member 'FDynamicBackground::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FDynamicBackground, Stage) == 0x000038, "Member 'FDynamicBackground::Stage' has a wrong offset!");

struct FAthenaShopSection final
{
public:
	class FName                                   SectionId;
	uint8                                         Pad_4[0x4];
	class FText                                   SectionDisplayName;
	bool                                          bSortOffersByOwnership;
	bool                                          bShowIneligibleOffers;
	bool                                          bShowIneligibleOffersIfGiftable;
	bool                                          bShowTimer;
	bool                                          bEnableToastNotification;
	uint8                                         Pad_25[0x3];
	int32                                         LandingPriority;
	uint8                                         Pad_2C[0x4];
	struct FDynamicBackground                     SectionBackground;
	bool                                          bHidden;
	uint8                                         Pad_79[0x7];
	struct FDateTime                              DateToResetItemShopLanding;
};
static_assert(alignof(FAthenaShopSection) == 0x000008, "Wrong alignment on FAthenaShopSection");
static_assert(sizeof(FAthenaShopSection) == 0x000088, "Wrong size on FAthenaShopSection");
static_assert(offsetof(FAthenaShopSection, SectionId) == 0x000000, "Member 'FAthenaShopSection::SectionId' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, SectionDisplayName) == 0x000008, "Member 'FAthenaShopSection::SectionDisplayName' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, bSortOffersByOwnership) == 0x000020, "Member 'FAthenaShopSection::bSortOffersByOwnership' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, bShowIneligibleOffers) == 0x000021, "Member 'FAthenaShopSection::bShowIneligibleOffers' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, bShowIneligibleOffersIfGiftable) == 0x000022, "Member 'FAthenaShopSection::bShowIneligibleOffersIfGiftable' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, bShowTimer) == 0x000023, "Member 'FAthenaShopSection::bShowTimer' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, bEnableToastNotification) == 0x000024, "Member 'FAthenaShopSection::bEnableToastNotification' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, LandingPriority) == 0x000028, "Member 'FAthenaShopSection::LandingPriority' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, SectionBackground) == 0x000030, "Member 'FAthenaShopSection::SectionBackground' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, bHidden) == 0x000078, "Member 'FAthenaShopSection::bHidden' has a wrong offset!");
static_assert(offsetof(FAthenaShopSection, DateToResetItemShopLanding) == 0x000080, "Member 'FAthenaShopSection::DateToResetItemShopLanding' has a wrong offset!");

struct FAthenaSpatialStyleCharacterData final
{
public:
	class UAthenaCharacterItemDefinition*         Character;
	TArray<struct FAthenaStyleMissionData>        Styles;
	TArray<ESpatialStyleCharacterUnlockPrerequisite> CharacterPrerequisites;
	class UAnimationAsset*                        CharacterIdleAnimation;
};
static_assert(alignof(FAthenaSpatialStyleCharacterData) == 0x000008, "Wrong alignment on FAthenaSpatialStyleCharacterData");
static_assert(sizeof(FAthenaSpatialStyleCharacterData) == 0x000030, "Wrong size on FAthenaSpatialStyleCharacterData");
static_assert(offsetof(FAthenaSpatialStyleCharacterData, Character) == 0x000000, "Member 'FAthenaSpatialStyleCharacterData::Character' has a wrong offset!");
static_assert(offsetof(FAthenaSpatialStyleCharacterData, Styles) == 0x000008, "Member 'FAthenaSpatialStyleCharacterData::Styles' has a wrong offset!");
static_assert(offsetof(FAthenaSpatialStyleCharacterData, CharacterPrerequisites) == 0x000018, "Member 'FAthenaSpatialStyleCharacterData::CharacterPrerequisites' has a wrong offset!");
static_assert(offsetof(FAthenaSpatialStyleCharacterData, CharacterIdleAnimation) == 0x000028, "Member 'FAthenaSpatialStyleCharacterData::CharacterIdleAnimation' has a wrong offset!");

struct FVideoWidgetConfig final
{
public:
	class UFortStreamMediaSource*                 StreamingMediaSource;
	class FName                                   VideoString;
	class FName                                   VideoDisplayDataID;
	class FName                                   FallbackVideoID;
	bool                                          bCheckAutoPlay;
	bool                                          bForceAutoPlay;
	bool                                          bStreamingEnabled;
	uint8                                         Pad_17[0x1];
	class FString                                 VideoUID;
	bool                                          bShouldBeModal;
	bool                                          bUseSkipBoundaries;
	bool                                          bHoldToSkip;
	bool                                          bFadeFromColor;
	bool                                          bEndFadeFromColor;
	bool                                          bFadeUpToColor;
	bool                                          bAllowSkipping;
	uint8                                         Pad_2F[0x1];
	class FString                                 MimeType;
	class FString                                 VideoURL;
	bool                                          bEnableLooping;
	bool                                          bAutoClose;
	bool                                          bHideControls;
	bool                                          bHideBackground;
	bool                                          bHideBackgroundUntilVideoDetected;
	bool                                          bStartMTTransparent;
	uint8                                         Pad_56[0x2];
	class USoundMix*                              SoundMixOverride;
	bool                                          bOverrideSoundMix;
	uint8                                         Pad_61[0x7];
	class USoundClass*                            SoundClassOverride;
	bool                                          bControlWorldRendering;
	bool                                          bControlShaderPipelineCacheBatching;
	bool                                          bDisablePiP;
	uint8                                         Pad_73[0x1];
	float                                         PartySyncStartTime;
	bool                                          bDisableCursor;
	bool                                          bDisableStreamLimitsFromWidget;
	bool                                          bStartHidden;
	bool                                          bAudioOnlyHandlingFromMetadata;
	bool                                          bTreatAudioOnlyAsColorFades;
	bool                                          bEnableDebugCommands;
	uint8                                         Pad_7E[0x2];
	struct FLinearColor                           FadeColor;
	bool                                          bPrePostRollNoAudioMix;
	uint8                                         Pad_91[0x7];
};
static_assert(alignof(FVideoWidgetConfig) == 0x000008, "Wrong alignment on FVideoWidgetConfig");
static_assert(sizeof(FVideoWidgetConfig) == 0x000098, "Wrong size on FVideoWidgetConfig");
static_assert(offsetof(FVideoWidgetConfig, StreamingMediaSource) == 0x000000, "Member 'FVideoWidgetConfig::StreamingMediaSource' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, VideoString) == 0x000008, "Member 'FVideoWidgetConfig::VideoString' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, VideoDisplayDataID) == 0x00000C, "Member 'FVideoWidgetConfig::VideoDisplayDataID' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, FallbackVideoID) == 0x000010, "Member 'FVideoWidgetConfig::FallbackVideoID' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bCheckAutoPlay) == 0x000014, "Member 'FVideoWidgetConfig::bCheckAutoPlay' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bForceAutoPlay) == 0x000015, "Member 'FVideoWidgetConfig::bForceAutoPlay' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bStreamingEnabled) == 0x000016, "Member 'FVideoWidgetConfig::bStreamingEnabled' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, VideoUID) == 0x000018, "Member 'FVideoWidgetConfig::VideoUID' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bShouldBeModal) == 0x000028, "Member 'FVideoWidgetConfig::bShouldBeModal' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bUseSkipBoundaries) == 0x000029, "Member 'FVideoWidgetConfig::bUseSkipBoundaries' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bHoldToSkip) == 0x00002A, "Member 'FVideoWidgetConfig::bHoldToSkip' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bFadeFromColor) == 0x00002B, "Member 'FVideoWidgetConfig::bFadeFromColor' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bEndFadeFromColor) == 0x00002C, "Member 'FVideoWidgetConfig::bEndFadeFromColor' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bFadeUpToColor) == 0x00002D, "Member 'FVideoWidgetConfig::bFadeUpToColor' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bAllowSkipping) == 0x00002E, "Member 'FVideoWidgetConfig::bAllowSkipping' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, MimeType) == 0x000030, "Member 'FVideoWidgetConfig::MimeType' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, VideoURL) == 0x000040, "Member 'FVideoWidgetConfig::VideoURL' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bEnableLooping) == 0x000050, "Member 'FVideoWidgetConfig::bEnableLooping' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bAutoClose) == 0x000051, "Member 'FVideoWidgetConfig::bAutoClose' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bHideControls) == 0x000052, "Member 'FVideoWidgetConfig::bHideControls' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bHideBackground) == 0x000053, "Member 'FVideoWidgetConfig::bHideBackground' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bHideBackgroundUntilVideoDetected) == 0x000054, "Member 'FVideoWidgetConfig::bHideBackgroundUntilVideoDetected' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bStartMTTransparent) == 0x000055, "Member 'FVideoWidgetConfig::bStartMTTransparent' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, SoundMixOverride) == 0x000058, "Member 'FVideoWidgetConfig::SoundMixOverride' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bOverrideSoundMix) == 0x000060, "Member 'FVideoWidgetConfig::bOverrideSoundMix' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, SoundClassOverride) == 0x000068, "Member 'FVideoWidgetConfig::SoundClassOverride' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bControlWorldRendering) == 0x000070, "Member 'FVideoWidgetConfig::bControlWorldRendering' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bControlShaderPipelineCacheBatching) == 0x000071, "Member 'FVideoWidgetConfig::bControlShaderPipelineCacheBatching' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bDisablePiP) == 0x000072, "Member 'FVideoWidgetConfig::bDisablePiP' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, PartySyncStartTime) == 0x000074, "Member 'FVideoWidgetConfig::PartySyncStartTime' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bDisableCursor) == 0x000078, "Member 'FVideoWidgetConfig::bDisableCursor' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bDisableStreamLimitsFromWidget) == 0x000079, "Member 'FVideoWidgetConfig::bDisableStreamLimitsFromWidget' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bStartHidden) == 0x00007A, "Member 'FVideoWidgetConfig::bStartHidden' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bAudioOnlyHandlingFromMetadata) == 0x00007B, "Member 'FVideoWidgetConfig::bAudioOnlyHandlingFromMetadata' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bTreatAudioOnlyAsColorFades) == 0x00007C, "Member 'FVideoWidgetConfig::bTreatAudioOnlyAsColorFades' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bEnableDebugCommands) == 0x00007D, "Member 'FVideoWidgetConfig::bEnableDebugCommands' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, FadeColor) == 0x000080, "Member 'FVideoWidgetConfig::FadeColor' has a wrong offset!");
static_assert(offsetof(FVideoWidgetConfig, bPrePostRollNoAudioMix) == 0x000090, "Member 'FVideoWidgetConfig::bPrePostRollNoAudioMix' has a wrong offset!");

struct FUnlockableVariantPreviewInfo final
{
public:
	bool                                          bIsValid;
	uint8                                         Pad_1[0x3];
	int32                                         SetNumber;
	int32                                         SetCount;
	uint8                                         Pad_C[0x4];
	class FText                                   UnlockCondition;
};
static_assert(alignof(FUnlockableVariantPreviewInfo) == 0x000008, "Wrong alignment on FUnlockableVariantPreviewInfo");
static_assert(sizeof(FUnlockableVariantPreviewInfo) == 0x000028, "Wrong size on FUnlockableVariantPreviewInfo");
static_assert(offsetof(FUnlockableVariantPreviewInfo, bIsValid) == 0x000000, "Member 'FUnlockableVariantPreviewInfo::bIsValid' has a wrong offset!");
static_assert(offsetof(FUnlockableVariantPreviewInfo, SetNumber) == 0x000004, "Member 'FUnlockableVariantPreviewInfo::SetNumber' has a wrong offset!");
static_assert(offsetof(FUnlockableVariantPreviewInfo, SetCount) == 0x000008, "Member 'FUnlockableVariantPreviewInfo::SetCount' has a wrong offset!");
static_assert(offsetof(FUnlockableVariantPreviewInfo, UnlockCondition) == 0x000010, "Member 'FUnlockableVariantPreviewInfo::UnlockCondition' has a wrong offset!");

struct FAthenaCollectionScreenContainerTabInfo final
{
public:
	class FText                                   TabTitle;
	TSoftObjectPtr<class UObject>                 TabIcon;
	TSoftClassPtr<class UClass>                   TabClass;
	struct FGameplayTagContainer                  TabCategoryTags;
};
static_assert(alignof(FAthenaCollectionScreenContainerTabInfo) == 0x000008, "Wrong alignment on FAthenaCollectionScreenContainerTabInfo");
static_assert(sizeof(FAthenaCollectionScreenContainerTabInfo) == 0x000088, "Wrong size on FAthenaCollectionScreenContainerTabInfo");
static_assert(offsetof(FAthenaCollectionScreenContainerTabInfo, TabTitle) == 0x000000, "Member 'FAthenaCollectionScreenContainerTabInfo::TabTitle' has a wrong offset!");
static_assert(offsetof(FAthenaCollectionScreenContainerTabInfo, TabIcon) == 0x000018, "Member 'FAthenaCollectionScreenContainerTabInfo::TabIcon' has a wrong offset!");
static_assert(offsetof(FAthenaCollectionScreenContainerTabInfo, TabClass) == 0x000040, "Member 'FAthenaCollectionScreenContainerTabInfo::TabClass' has a wrong offset!");
static_assert(offsetof(FAthenaCollectionScreenContainerTabInfo, TabCategoryTags) == 0x000068, "Member 'FAthenaCollectionScreenContainerTabInfo::TabCategoryTags' has a wrong offset!");

struct alignas(0x04) FMutatorAddedWidgets final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FMutatorAddedWidgets) == 0x000004, "Wrong alignment on FMutatorAddedWidgets");
static_assert(sizeof(FMutatorAddedWidgets) == 0x000010, "Wrong size on FMutatorAddedWidgets");

struct FTouchInteractionIconOverride final
{
public:
	TSoftObjectPtr<class UTexture2D>              IconOverride;
	float                                         IconScale;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FTouchInteractionIconOverride) == 0x000008, "Wrong alignment on FTouchInteractionIconOverride");
static_assert(sizeof(FTouchInteractionIconOverride) == 0x000030, "Wrong size on FTouchInteractionIconOverride");
static_assert(offsetof(FTouchInteractionIconOverride, IconOverride) == 0x000000, "Member 'FTouchInteractionIconOverride::IconOverride' has a wrong offset!");
static_assert(offsetof(FTouchInteractionIconOverride, IconScale) == 0x000028, "Member 'FTouchInteractionIconOverride::IconScale' has a wrong offset!");

struct FAthenaCustomizationParams final
{
public:
	EAthenaCustomizationCategory                  category;
	uint8                                         Pad_1[0x3];
	int32                                         CategorySubslotIndex;
	class FText                                   CategoryDisplayName;
	class FText                                   ItemDisplayTypeName;
	bool                                          bAllowUnownedItems;
	bool                                          bOneItemPerSlot;
	uint8                                         Pad_3A[0x6];
	class UMaterialInstance*                      OverrideSlotImage;
};
static_assert(alignof(FAthenaCustomizationParams) == 0x000008, "Wrong alignment on FAthenaCustomizationParams");
static_assert(sizeof(FAthenaCustomizationParams) == 0x000048, "Wrong size on FAthenaCustomizationParams");
static_assert(offsetof(FAthenaCustomizationParams, category) == 0x000000, "Member 'FAthenaCustomizationParams::category' has a wrong offset!");
static_assert(offsetof(FAthenaCustomizationParams, CategorySubslotIndex) == 0x000004, "Member 'FAthenaCustomizationParams::CategorySubslotIndex' has a wrong offset!");
static_assert(offsetof(FAthenaCustomizationParams, CategoryDisplayName) == 0x000008, "Member 'FAthenaCustomizationParams::CategoryDisplayName' has a wrong offset!");
static_assert(offsetof(FAthenaCustomizationParams, ItemDisplayTypeName) == 0x000020, "Member 'FAthenaCustomizationParams::ItemDisplayTypeName' has a wrong offset!");
static_assert(offsetof(FAthenaCustomizationParams, bAllowUnownedItems) == 0x000038, "Member 'FAthenaCustomizationParams::bAllowUnownedItems' has a wrong offset!");
static_assert(offsetof(FAthenaCustomizationParams, bOneItemPerSlot) == 0x000039, "Member 'FAthenaCustomizationParams::bOneItemPerSlot' has a wrong offset!");
static_assert(offsetof(FAthenaCustomizationParams, OverrideSlotImage) == 0x000040, "Member 'FAthenaCustomizationParams::OverrideSlotImage' has a wrong offset!");

struct FAthenaPlaylistLeaderboardData final
{
public:
	class FName                                   StatId;
	uint8                                         Pad_4[0x4];
	class FText                                   StatDisplayName;
	class FText                                   TabDisplayName;
	class FText                                   RowDisplayName;
	class FString                                 BaseGameplayTag;
	bool                                          bIsGlobal;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FAthenaPlaylistLeaderboardData) == 0x000008, "Wrong alignment on FAthenaPlaylistLeaderboardData");
static_assert(sizeof(FAthenaPlaylistLeaderboardData) == 0x000068, "Wrong size on FAthenaPlaylistLeaderboardData");
static_assert(offsetof(FAthenaPlaylistLeaderboardData, StatId) == 0x000000, "Member 'FAthenaPlaylistLeaderboardData::StatId' has a wrong offset!");
static_assert(offsetof(FAthenaPlaylistLeaderboardData, StatDisplayName) == 0x000008, "Member 'FAthenaPlaylistLeaderboardData::StatDisplayName' has a wrong offset!");
static_assert(offsetof(FAthenaPlaylistLeaderboardData, TabDisplayName) == 0x000020, "Member 'FAthenaPlaylistLeaderboardData::TabDisplayName' has a wrong offset!");
static_assert(offsetof(FAthenaPlaylistLeaderboardData, RowDisplayName) == 0x000038, "Member 'FAthenaPlaylistLeaderboardData::RowDisplayName' has a wrong offset!");
static_assert(offsetof(FAthenaPlaylistLeaderboardData, BaseGameplayTag) == 0x000050, "Member 'FAthenaPlaylistLeaderboardData::BaseGameplayTag' has a wrong offset!");
static_assert(offsetof(FAthenaPlaylistLeaderboardData, bIsGlobal) == 0x000060, "Member 'FAthenaPlaylistLeaderboardData::bIsGlobal' has a wrong offset!");

struct FFortItemDelta final
{
public:
	class UFortItemDefinition*                    ItemDefinition;
	int32                                         BaseAmount;
	int32                                         DeltaAmount;
};
static_assert(alignof(FFortItemDelta) == 0x000008, "Wrong alignment on FFortItemDelta");
static_assert(sizeof(FFortItemDelta) == 0x000010, "Wrong size on FFortItemDelta");
static_assert(offsetof(FFortItemDelta, ItemDefinition) == 0x000000, "Member 'FFortItemDelta::ItemDefinition' has a wrong offset!");
static_assert(offsetof(FFortItemDelta, BaseAmount) == 0x000008, "Member 'FFortItemDelta::BaseAmount' has a wrong offset!");
static_assert(offsetof(FFortItemDelta, DeltaAmount) == 0x00000C, "Member 'FFortItemDelta::DeltaAmount' has a wrong offset!");

struct FAthenaLeaderboardData final : public FTableRowBase
{
public:
	EFortAthenaPlaylist                           Playlist;
	uint8                                         Pad_9[0x3];
	class FName                                   PlaylistName;
	ECommonInputType                              InputType;
	uint8                                         Pad_11[0x7];
	TArray<struct FAthenaPlaylistLeaderboardData> Stats;
	bool                                          bExcludePlaylistNames;
	uint8                                         Pad_29[0x7];
	TArray<class FString>                         PlaylistNames;
};
static_assert(alignof(FAthenaLeaderboardData) == 0x000008, "Wrong alignment on FAthenaLeaderboardData");
static_assert(sizeof(FAthenaLeaderboardData) == 0x000040, "Wrong size on FAthenaLeaderboardData");
static_assert(offsetof(FAthenaLeaderboardData, Playlist) == 0x000008, "Member 'FAthenaLeaderboardData::Playlist' has a wrong offset!");
static_assert(offsetof(FAthenaLeaderboardData, PlaylistName) == 0x00000C, "Member 'FAthenaLeaderboardData::PlaylistName' has a wrong offset!");
static_assert(offsetof(FAthenaLeaderboardData, InputType) == 0x000010, "Member 'FAthenaLeaderboardData::InputType' has a wrong offset!");
static_assert(offsetof(FAthenaLeaderboardData, Stats) == 0x000018, "Member 'FAthenaLeaderboardData::Stats' has a wrong offset!");
static_assert(offsetof(FAthenaLeaderboardData, bExcludePlaylistNames) == 0x000028, "Member 'FAthenaLeaderboardData::bExcludePlaylistNames' has a wrong offset!");
static_assert(offsetof(FAthenaLeaderboardData, PlaylistNames) == 0x000030, "Member 'FAthenaLeaderboardData::PlaylistNames' has a wrong offset!");

struct FPlaylistFilter
{
public:
	class UDataTable*                             PlaylistsData;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FPlaylistFilter) == 0x000008, "Wrong alignment on FPlaylistFilter");
static_assert(sizeof(FPlaylistFilter) == 0x000010, "Wrong size on FPlaylistFilter");
static_assert(offsetof(FPlaylistFilter, PlaylistsData) == 0x000000, "Member 'FPlaylistFilter::PlaylistsData' has a wrong offset!");

struct FFortActivityImageCache final
{
public:
	uint8                                         Pad_0[0x8];
	class UTexture*                               Texture;
	uint8                                         Pad_10[0x10];
};
static_assert(alignof(FFortActivityImageCache) == 0x000008, "Wrong alignment on FFortActivityImageCache");
static_assert(sizeof(FFortActivityImageCache) == 0x000020, "Wrong size on FFortActivityImageCache");
static_assert(offsetof(FFortActivityImageCache, Texture) == 0x000008, "Member 'FFortActivityImageCache::Texture' has a wrong offset!");

struct FLeaderboardFilter final : public FPlaylistFilter
{
public:
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FLeaderboardFilter) == 0x000008, "Wrong alignment on FLeaderboardFilter");
static_assert(sizeof(FLeaderboardFilter) == 0x000018, "Wrong size on FLeaderboardFilter");

struct FFortResurrectionUIData final
{
public:
	bool                                          bResurrectionChipAvailable;
	bool                                          bResurrectionChipPickedUp;
	bool                                          bResurrectionChipRebooting;
};
static_assert(alignof(FFortResurrectionUIData) == 0x000001, "Wrong alignment on FFortResurrectionUIData");
static_assert(sizeof(FFortResurrectionUIData) == 0x000003, "Wrong size on FFortResurrectionUIData");
static_assert(offsetof(FFortResurrectionUIData, bResurrectionChipAvailable) == 0x000000, "Member 'FFortResurrectionUIData::bResurrectionChipAvailable' has a wrong offset!");
static_assert(offsetof(FFortResurrectionUIData, bResurrectionChipPickedUp) == 0x000001, "Member 'FFortResurrectionUIData::bResurrectionChipPickedUp' has a wrong offset!");
static_assert(offsetof(FFortResurrectionUIData, bResurrectionChipRebooting) == 0x000002, "Member 'FFortResurrectionUIData::bResurrectionChipRebooting' has a wrong offset!");

struct alignas(0x04) FTrackedTrapTimeAndCount final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FTrackedTrapTimeAndCount) == 0x000004, "Wrong alignment on FTrackedTrapTimeAndCount");
static_assert(sizeof(FTrackedTrapTimeAndCount) == 0x000008, "Wrong size on FTrackedTrapTimeAndCount");

struct FMarkerLargeIndicatorType final
{
public:
	class UMaterialInterface*                     MarkerMaterial;
	struct FVector2D                              ImageSize;
};
static_assert(alignof(FMarkerLargeIndicatorType) == 0x000008, "Wrong alignment on FMarkerLargeIndicatorType");
static_assert(sizeof(FMarkerLargeIndicatorType) == 0x000018, "Wrong size on FMarkerLargeIndicatorType");
static_assert(offsetof(FMarkerLargeIndicatorType, MarkerMaterial) == 0x000000, "Member 'FMarkerLargeIndicatorType::MarkerMaterial' has a wrong offset!");
static_assert(offsetof(FMarkerLargeIndicatorType, ImageSize) == 0x000008, "Member 'FMarkerLargeIndicatorType::ImageSize' has a wrong offset!");

struct FAthenaTeamCountSlotData final
{
public:
	class FText                                   TeamNameText;
	class FText                                   TeamCountText;
	bool                                          bIsMyTeam;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FAthenaTeamCountSlotData) == 0x000008, "Wrong alignment on FAthenaTeamCountSlotData");
static_assert(sizeof(FAthenaTeamCountSlotData) == 0x000038, "Wrong size on FAthenaTeamCountSlotData");
static_assert(offsetof(FAthenaTeamCountSlotData, TeamNameText) == 0x000000, "Member 'FAthenaTeamCountSlotData::TeamNameText' has a wrong offset!");
static_assert(offsetof(FAthenaTeamCountSlotData, TeamCountText) == 0x000018, "Member 'FAthenaTeamCountSlotData::TeamCountText' has a wrong offset!");
static_assert(offsetof(FAthenaTeamCountSlotData, bIsMyTeam) == 0x000030, "Member 'FAthenaTeamCountSlotData::bIsMyTeam' has a wrong offset!");

struct FDynamicBackgrounds final
{
public:
	TArray<struct FDynamicBackground>             Backgrounds;
};
static_assert(alignof(FDynamicBackgrounds) == 0x000008, "Wrong alignment on FDynamicBackgrounds");
static_assert(sizeof(FDynamicBackgrounds) == 0x000010, "Wrong size on FDynamicBackgrounds");
static_assert(offsetof(FDynamicBackgrounds, Backgrounds) == 0x000000, "Member 'FDynamicBackgrounds::Backgrounds' has a wrong offset!");

struct FWinConditionPlacementData final
{
public:
	struct FMargin                                Padding;
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_12[0x2];
};
static_assert(alignof(FWinConditionPlacementData) == 0x000004, "Wrong alignment on FWinConditionPlacementData");
static_assert(sizeof(FWinConditionPlacementData) == 0x000014, "Wrong size on FWinConditionPlacementData");
static_assert(offsetof(FWinConditionPlacementData, Padding) == 0x000000, "Member 'FWinConditionPlacementData::Padding' has a wrong offset!");
static_assert(offsetof(FWinConditionPlacementData, HorizontalAlignment) == 0x000010, "Member 'FWinConditionPlacementData::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FWinConditionPlacementData, VerticalAlignment) == 0x000011, "Member 'FWinConditionPlacementData::VerticalAlignment' has a wrong offset!");

struct FWinConditionPlacementDataMapWrapper final
{
public:
	TMap<EHUDMessagePlacement, struct FWinConditionPlacementData> Data;
};
static_assert(alignof(FWinConditionPlacementDataMapWrapper) == 0x000008, "Wrong alignment on FWinConditionPlacementDataMapWrapper");
static_assert(sizeof(FWinConditionPlacementDataMapWrapper) == 0x000050, "Wrong size on FWinConditionPlacementDataMapWrapper");
static_assert(offsetof(FWinConditionPlacementDataMapWrapper, Data) == 0x000000, "Member 'FWinConditionPlacementDataMapWrapper::Data' has a wrong offset!");

struct FCrewItemShopTileData final
{
public:
	class FText                                   ViolatorText;
	EViolatorIntensity                            ViolatorIntensity;
	uint8                                         Pad_19[0x7];
	class FText                                   NextViolatorText;
	EViolatorIntensity                            NextViolatorIntensity;
	uint8                                         Pad_39[0x7];
	struct FCrewTileImages                        ItemShopTileImages;
};
static_assert(alignof(FCrewItemShopTileData) == 0x000008, "Wrong alignment on FCrewItemShopTileData");
static_assert(sizeof(FCrewItemShopTileData) == 0x000060, "Wrong size on FCrewItemShopTileData");
static_assert(offsetof(FCrewItemShopTileData, ViolatorText) == 0x000000, "Member 'FCrewItemShopTileData::ViolatorText' has a wrong offset!");
static_assert(offsetof(FCrewItemShopTileData, ViolatorIntensity) == 0x000018, "Member 'FCrewItemShopTileData::ViolatorIntensity' has a wrong offset!");
static_assert(offsetof(FCrewItemShopTileData, NextViolatorText) == 0x000020, "Member 'FCrewItemShopTileData::NextViolatorText' has a wrong offset!");
static_assert(offsetof(FCrewItemShopTileData, NextViolatorIntensity) == 0x000038, "Member 'FCrewItemShopTileData::NextViolatorIntensity' has a wrong offset!");
static_assert(offsetof(FCrewItemShopTileData, ItemShopTileImages) == 0x000040, "Member 'FCrewItemShopTileData::ItemShopTileImages' has a wrong offset!");

struct FGlyphUpdateTransition final
{
public:
	int32                                         Count;
	float                                         MinTimeOffset;
	float                                         MaxTimeOffset;
};
static_assert(alignof(FGlyphUpdateTransition) == 0x000004, "Wrong alignment on FGlyphUpdateTransition");
static_assert(sizeof(FGlyphUpdateTransition) == 0x00000C, "Wrong size on FGlyphUpdateTransition");
static_assert(offsetof(FGlyphUpdateTransition, Count) == 0x000000, "Member 'FGlyphUpdateTransition::Count' has a wrong offset!");
static_assert(offsetof(FGlyphUpdateTransition, MinTimeOffset) == 0x000004, "Member 'FGlyphUpdateTransition::MinTimeOffset' has a wrong offset!");
static_assert(offsetof(FGlyphUpdateTransition, MaxTimeOffset) == 0x000008, "Member 'FGlyphUpdateTransition::MaxTimeOffset' has a wrong offset!");

struct alignas(0x04) FGlyphAllUpdateTransitions final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FGlyphAllUpdateTransitions) == 0x000004, "Wrong alignment on FGlyphAllUpdateTransitions");
static_assert(sizeof(FGlyphAllUpdateTransitions) == 0x000018, "Wrong size on FGlyphAllUpdateTransitions");

struct FViewVaultItemsParams final
{
public:
	TArray<class UFortItemDefinition*>            ItemsToView;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FViewVaultItemsParams) == 0x000008, "Wrong alignment on FViewVaultItemsParams");
static_assert(sizeof(FViewVaultItemsParams) == 0x000018, "Wrong size on FViewVaultItemsParams");
static_assert(offsetof(FViewVaultItemsParams, ItemsToView) == 0x000000, "Member 'FViewVaultItemsParams::ItemsToView' has a wrong offset!");

struct FAthenaChallengeListVisualOptions final
{
public:
	bool                                          bHideHeaders;
	bool                                          bHideCompletionRewards;
	bool                                          bHideQuestRewards;
	bool                                          bUseCompactActionInfo;
	bool                                          bHideLockedQuests;
	bool                                          bHideCompletedQuests;
	bool                                          bShowOnlyCurentBundleLevelChallenges;
	bool                                          bSortCompletedToEnd;
	int32                                         PreviewBundleLevel;
};
static_assert(alignof(FAthenaChallengeListVisualOptions) == 0x000004, "Wrong alignment on FAthenaChallengeListVisualOptions");
static_assert(sizeof(FAthenaChallengeListVisualOptions) == 0x00000C, "Wrong size on FAthenaChallengeListVisualOptions");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bHideHeaders) == 0x000000, "Member 'FAthenaChallengeListVisualOptions::bHideHeaders' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bHideCompletionRewards) == 0x000001, "Member 'FAthenaChallengeListVisualOptions::bHideCompletionRewards' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bHideQuestRewards) == 0x000002, "Member 'FAthenaChallengeListVisualOptions::bHideQuestRewards' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bUseCompactActionInfo) == 0x000003, "Member 'FAthenaChallengeListVisualOptions::bUseCompactActionInfo' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bHideLockedQuests) == 0x000004, "Member 'FAthenaChallengeListVisualOptions::bHideLockedQuests' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bHideCompletedQuests) == 0x000005, "Member 'FAthenaChallengeListVisualOptions::bHideCompletedQuests' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bShowOnlyCurentBundleLevelChallenges) == 0x000006, "Member 'FAthenaChallengeListVisualOptions::bShowOnlyCurentBundleLevelChallenges' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, bSortCompletedToEnd) == 0x000007, "Member 'FAthenaChallengeListVisualOptions::bSortCompletedToEnd' has a wrong offset!");
static_assert(offsetof(FAthenaChallengeListVisualOptions, PreviewBundleLevel) == 0x000008, "Member 'FAthenaChallengeListVisualOptions::PreviewBundleLevel' has a wrong offset!");

struct FQuestRecapData final
{
public:
	TWeakObjectPtr<class UFortQuestItem>          QuestItem;
	int32                                         LastKnownMcpValue;
	int32                                         AchivedCount;
	int32                                         RequiredCount;
};
static_assert(alignof(FQuestRecapData) == 0x000004, "Wrong alignment on FQuestRecapData");
static_assert(sizeof(FQuestRecapData) == 0x000014, "Wrong size on FQuestRecapData");
static_assert(offsetof(FQuestRecapData, QuestItem) == 0x000000, "Member 'FQuestRecapData::QuestItem' has a wrong offset!");
static_assert(offsetof(FQuestRecapData, LastKnownMcpValue) == 0x000008, "Member 'FQuestRecapData::LastKnownMcpValue' has a wrong offset!");
static_assert(offsetof(FQuestRecapData, AchivedCount) == 0x00000C, "Member 'FQuestRecapData::AchivedCount' has a wrong offset!");
static_assert(offsetof(FQuestRecapData, RequiredCount) == 0x000010, "Member 'FQuestRecapData::RequiredCount' has a wrong offset!");

struct FSmallNewsMOTD final : public FAthenaMOTDBase
{
};
static_assert(alignof(FSmallNewsMOTD) == 0x000008, "Wrong alignment on FSmallNewsMOTD");
static_assert(sizeof(FSmallNewsMOTD) == 0x0000D0, "Wrong size on FSmallNewsMOTD");

struct FAthenaFeatTimelineDisplayData final : public FTableRowBase
{
public:
	struct FGameplayTag                           FeatChallengeBundleTag;
	uint8                                         Pad_C[0x4];
	class FText                                   SeasonText;
	struct FLinearColor                           Color1;
	struct FLinearColor                           Color2;
};
static_assert(alignof(FAthenaFeatTimelineDisplayData) == 0x000008, "Wrong alignment on FAthenaFeatTimelineDisplayData");
static_assert(sizeof(FAthenaFeatTimelineDisplayData) == 0x000048, "Wrong size on FAthenaFeatTimelineDisplayData");
static_assert(offsetof(FAthenaFeatTimelineDisplayData, FeatChallengeBundleTag) == 0x000008, "Member 'FAthenaFeatTimelineDisplayData::FeatChallengeBundleTag' has a wrong offset!");
static_assert(offsetof(FAthenaFeatTimelineDisplayData, SeasonText) == 0x000010, "Member 'FAthenaFeatTimelineDisplayData::SeasonText' has a wrong offset!");
static_assert(offsetof(FAthenaFeatTimelineDisplayData, Color1) == 0x000028, "Member 'FAthenaFeatTimelineDisplayData::Color1' has a wrong offset!");
static_assert(offsetof(FAthenaFeatTimelineDisplayData, Color2) == 0x000038, "Member 'FAthenaFeatTimelineDisplayData::Color2' has a wrong offset!");

struct FLevelEffectsData final
{
public:
	int32                                         MinPlayerLevel;
	struct FLinearColor                           ContentColor;
	struct FLinearColor                           OutlineColor;
	uint8                                         Pad_24[0x4];
	TSoftObjectPtr<class UObject>                 FlameDisplayObject;
};
static_assert(alignof(FLevelEffectsData) == 0x000008, "Wrong alignment on FLevelEffectsData");
static_assert(sizeof(FLevelEffectsData) == 0x000050, "Wrong size on FLevelEffectsData");
static_assert(offsetof(FLevelEffectsData, MinPlayerLevel) == 0x000000, "Member 'FLevelEffectsData::MinPlayerLevel' has a wrong offset!");
static_assert(offsetof(FLevelEffectsData, ContentColor) == 0x000004, "Member 'FLevelEffectsData::ContentColor' has a wrong offset!");
static_assert(offsetof(FLevelEffectsData, OutlineColor) == 0x000014, "Member 'FLevelEffectsData::OutlineColor' has a wrong offset!");
static_assert(offsetof(FLevelEffectsData, FlameDisplayObject) == 0x000028, "Member 'FLevelEffectsData::FlameDisplayObject' has a wrong offset!");

struct FAthenaShopSpecialOffer final
{
public:
	bool                                          bSpecialOfferEnabled;
	uint8                                         Pad_1[0x7];
	struct FVideoWidgetConfig                     SpecialOfferVideo;
};
static_assert(alignof(FAthenaShopSpecialOffer) == 0x000008, "Wrong alignment on FAthenaShopSpecialOffer");
static_assert(sizeof(FAthenaShopSpecialOffer) == 0x0000A0, "Wrong size on FAthenaShopSpecialOffer");
static_assert(offsetof(FAthenaShopSpecialOffer, bSpecialOfferEnabled) == 0x000000, "Member 'FAthenaShopSpecialOffer::bSpecialOfferEnabled' has a wrong offset!");
static_assert(offsetof(FAthenaShopSpecialOffer, SpecialOfferVideo) == 0x000008, "Member 'FAthenaShopSpecialOffer::SpecialOfferVideo' has a wrong offset!");

struct alignas(0x08) FFortEmotePickerCategory final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FFortEmotePickerCategory) == 0x000008, "Wrong alignment on FFortEmotePickerCategory");
static_assert(sizeof(FFortEmotePickerCategory) == 0x000028, "Wrong size on FFortEmotePickerCategory");

struct FFortEmotePickerSubCategoryIdentifier final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	class FText                                   Name;
};
static_assert(alignof(FFortEmotePickerSubCategoryIdentifier) == 0x000008, "Wrong alignment on FFortEmotePickerSubCategoryIdentifier");
static_assert(sizeof(FFortEmotePickerSubCategoryIdentifier) == 0x000020, "Wrong size on FFortEmotePickerSubCategoryIdentifier");
static_assert(offsetof(FFortEmotePickerSubCategoryIdentifier, tag) == 0x000000, "Member 'FFortEmotePickerSubCategoryIdentifier::tag' has a wrong offset!");
static_assert(offsetof(FFortEmotePickerSubCategoryIdentifier, Name) == 0x000008, "Member 'FFortEmotePickerSubCategoryIdentifier::Name' has a wrong offset!");

struct FChallengeMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x10];
};
static_assert(alignof(FChallengeMOTD) == 0x000008, "Wrong alignment on FChallengeMOTD");
static_assert(sizeof(FChallengeMOTD) == 0x0000E0, "Wrong size on FChallengeMOTD");

struct alignas(0x08) FGenericAction final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FGenericAction) == 0x000008, "Wrong alignment on FGenericAction");
static_assert(sizeof(FGenericAction) == 0x000028, "Wrong size on FGenericAction");

struct FSquadComsNPCCommandEntry final
{
public:
	class FText                                   Label;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            Brush;
	EPingCommandType                              CommandType;
	uint8                                         Pad_E1[0x7];
	class USoundBase*                             ConfirmSound;
};
static_assert(alignof(FSquadComsNPCCommandEntry) == 0x000010, "Wrong alignment on FSquadComsNPCCommandEntry");
static_assert(sizeof(FSquadComsNPCCommandEntry) == 0x0000F0, "Wrong size on FSquadComsNPCCommandEntry");
static_assert(offsetof(FSquadComsNPCCommandEntry, Label) == 0x000000, "Member 'FSquadComsNPCCommandEntry::Label' has a wrong offset!");
static_assert(offsetof(FSquadComsNPCCommandEntry, Brush) == 0x000020, "Member 'FSquadComsNPCCommandEntry::Brush' has a wrong offset!");
static_assert(offsetof(FSquadComsNPCCommandEntry, CommandType) == 0x0000E0, "Member 'FSquadComsNPCCommandEntry::CommandType' has a wrong offset!");
static_assert(offsetof(FSquadComsNPCCommandEntry, ConfirmSound) == 0x0000E8, "Member 'FSquadComsNPCCommandEntry::ConfirmSound' has a wrong offset!");

struct FCardPackOffer final
{
public:
	class FText                                   Title;
	class FText                                   Description;
	int32                                         MtxPrice;
	ECatalogSaleType                              SaleType;
	uint8                                         Pad_35[0x3];
	class FText                                   SaleText;
	int32                                         Price;
	int32                                         RegularPrice;
	class UFortAccountItemDefinition*             CurrencyType;
	int32                                         QuantityRemaining;
	bool                                          bTimedOffer;
	uint8                                         Pad_65[0x13];
};
static_assert(alignof(FCardPackOffer) == 0x000008, "Wrong alignment on FCardPackOffer");
static_assert(sizeof(FCardPackOffer) == 0x000078, "Wrong size on FCardPackOffer");
static_assert(offsetof(FCardPackOffer, Title) == 0x000000, "Member 'FCardPackOffer::Title' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, Description) == 0x000018, "Member 'FCardPackOffer::Description' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, MtxPrice) == 0x000030, "Member 'FCardPackOffer::MtxPrice' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, SaleType) == 0x000034, "Member 'FCardPackOffer::SaleType' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, SaleText) == 0x000038, "Member 'FCardPackOffer::SaleText' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, Price) == 0x000050, "Member 'FCardPackOffer::Price' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, RegularPrice) == 0x000054, "Member 'FCardPackOffer::RegularPrice' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, CurrencyType) == 0x000058, "Member 'FCardPackOffer::CurrencyType' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, QuantityRemaining) == 0x000060, "Member 'FCardPackOffer::QuantityRemaining' has a wrong offset!");
static_assert(offsetof(FCardPackOffer, bTimedOffer) == 0x000064, "Member 'FCardPackOffer::bTimedOffer' has a wrong offset!");

struct FSquadComsQuickChatEntry final
{
public:
	class FText                                   Label;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            Brush;
	EFortWorldMarkerType                          MarkerType;
	uint8                                         Pad_E1[0xF];
};
static_assert(alignof(FSquadComsQuickChatEntry) == 0x000010, "Wrong alignment on FSquadComsQuickChatEntry");
static_assert(sizeof(FSquadComsQuickChatEntry) == 0x0000F0, "Wrong size on FSquadComsQuickChatEntry");
static_assert(offsetof(FSquadComsQuickChatEntry, Label) == 0x000000, "Member 'FSquadComsQuickChatEntry::Label' has a wrong offset!");
static_assert(offsetof(FSquadComsQuickChatEntry, Brush) == 0x000020, "Member 'FSquadComsQuickChatEntry::Brush' has a wrong offset!");
static_assert(offsetof(FSquadComsQuickChatEntry, MarkerType) == 0x0000E0, "Member 'FSquadComsQuickChatEntry::MarkerType' has a wrong offset!");

struct alignas(0x08) FFortSquadComsPickerCategory final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FFortSquadComsPickerCategory) == 0x000008, "Wrong alignment on FFortSquadComsPickerCategory");
static_assert(sizeof(FFortSquadComsPickerCategory) == 0x000028, "Wrong size on FFortSquadComsPickerCategory");

struct FNavigateToBattlePassSubPageMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x28];
};
static_assert(alignof(FNavigateToBattlePassSubPageMOTD) == 0x000008, "Wrong alignment on FNavigateToBattlePassSubPageMOTD");
static_assert(sizeof(FNavigateToBattlePassSubPageMOTD) == 0x0000F8, "Wrong size on FNavigateToBattlePassSubPageMOTD");

struct FFortSquadComsPickerSubCategoryIdentifier final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	class FText                                   Name;
};
static_assert(alignof(FFortSquadComsPickerSubCategoryIdentifier) == 0x000008, "Wrong alignment on FFortSquadComsPickerSubCategoryIdentifier");
static_assert(sizeof(FFortSquadComsPickerSubCategoryIdentifier) == 0x000020, "Wrong size on FFortSquadComsPickerSubCategoryIdentifier");
static_assert(offsetof(FFortSquadComsPickerSubCategoryIdentifier, tag) == 0x000000, "Member 'FFortSquadComsPickerSubCategoryIdentifier::tag' has a wrong offset!");
static_assert(offsetof(FFortSquadComsPickerSubCategoryIdentifier, Name) == 0x000008, "Member 'FFortSquadComsPickerSubCategoryIdentifier::Name' has a wrong offset!");

struct alignas(0x08) FAthenaItemShopSectionData final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FAthenaItemShopSectionData) == 0x000008, "Wrong alignment on FAthenaItemShopSectionData");
static_assert(sizeof(FAthenaItemShopSectionData) == 0x000050, "Wrong size on FAthenaItemShopSectionData");

struct FFortMissionRewardInfo final
{
public:
	struct FSlateBrush                            Icon;
	class FText                                   DisplayName;
	class UFortItem*                              Item;
	bool                                          bIsMissionAlertReward;
	uint8                                         Pad_E1[0xF];
};
static_assert(alignof(FFortMissionRewardInfo) == 0x000010, "Wrong alignment on FFortMissionRewardInfo");
static_assert(sizeof(FFortMissionRewardInfo) == 0x0000F0, "Wrong size on FFortMissionRewardInfo");
static_assert(offsetof(FFortMissionRewardInfo, Icon) == 0x000000, "Member 'FFortMissionRewardInfo::Icon' has a wrong offset!");
static_assert(offsetof(FFortMissionRewardInfo, DisplayName) == 0x0000C0, "Member 'FFortMissionRewardInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FFortMissionRewardInfo, Item) == 0x0000D8, "Member 'FFortMissionRewardInfo::Item' has a wrong offset!");
static_assert(offsetof(FFortMissionRewardInfo, bIsMissionAlertReward) == 0x0000E0, "Member 'FFortMissionRewardInfo::bIsMissionAlertReward' has a wrong offset!");

struct FBarrierObjectState final
{
public:
	class AAthenaBarrierObjective*                ObjectiveActor;
	uint8                                         TeamNum;
	EBarrierFoodTeam                              FoodTeam;
	EBarrierObjectiveDamageState                  DamageState;
	uint8                                         Pad_B[0x5];
};
static_assert(alignof(FBarrierObjectState) == 0x000008, "Wrong alignment on FBarrierObjectState");
static_assert(sizeof(FBarrierObjectState) == 0x000010, "Wrong size on FBarrierObjectState");
static_assert(offsetof(FBarrierObjectState, ObjectiveActor) == 0x000000, "Member 'FBarrierObjectState::ObjectiveActor' has a wrong offset!");
static_assert(offsetof(FBarrierObjectState, TeamNum) == 0x000008, "Member 'FBarrierObjectState::TeamNum' has a wrong offset!");
static_assert(offsetof(FBarrierObjectState, FoodTeam) == 0x000009, "Member 'FBarrierObjectState::FoodTeam' has a wrong offset!");
static_assert(offsetof(FBarrierObjectState, DamageState) == 0x00000A, "Member 'FBarrierObjectState::DamageState' has a wrong offset!");

struct FBattleLabDisplayData final
{
public:
	class FText                                   TitleText;
	class FText                                   DescriptionText;
	EBattleLabAlertType                           AlertType;
	uint8                                         Pad_31[0x3];
	int32                                         RewardCount;
	int32                                         RewardCountTotal;
	uint8                                         Pad_3C[0x4];
	TSoftObjectPtr<class UTexture2D>              MainIconTexture;
};
static_assert(alignof(FBattleLabDisplayData) == 0x000008, "Wrong alignment on FBattleLabDisplayData");
static_assert(sizeof(FBattleLabDisplayData) == 0x000068, "Wrong size on FBattleLabDisplayData");
static_assert(offsetof(FBattleLabDisplayData, TitleText) == 0x000000, "Member 'FBattleLabDisplayData::TitleText' has a wrong offset!");
static_assert(offsetof(FBattleLabDisplayData, DescriptionText) == 0x000018, "Member 'FBattleLabDisplayData::DescriptionText' has a wrong offset!");
static_assert(offsetof(FBattleLabDisplayData, AlertType) == 0x000030, "Member 'FBattleLabDisplayData::AlertType' has a wrong offset!");
static_assert(offsetof(FBattleLabDisplayData, RewardCount) == 0x000034, "Member 'FBattleLabDisplayData::RewardCount' has a wrong offset!");
static_assert(offsetof(FBattleLabDisplayData, RewardCountTotal) == 0x000038, "Member 'FBattleLabDisplayData::RewardCountTotal' has a wrong offset!");
static_assert(offsetof(FBattleLabDisplayData, MainIconTexture) == 0x000040, "Member 'FBattleLabDisplayData::MainIconTexture' has a wrong offset!");

struct FAthenaBossHealthData final
{
public:
	bool                                          bVisible;
	bool                                          bShowShields;
	uint8                                         Pad_2[0x6];
	class FText                                   Name;
	int32                                         Health;
	int32                                         HealthMax;
	int32                                         Shields;
	int32                                         ShieldsMax;
};
static_assert(alignof(FAthenaBossHealthData) == 0x000008, "Wrong alignment on FAthenaBossHealthData");
static_assert(sizeof(FAthenaBossHealthData) == 0x000030, "Wrong size on FAthenaBossHealthData");
static_assert(offsetof(FAthenaBossHealthData, bVisible) == 0x000000, "Member 'FAthenaBossHealthData::bVisible' has a wrong offset!");
static_assert(offsetof(FAthenaBossHealthData, bShowShields) == 0x000001, "Member 'FAthenaBossHealthData::bShowShields' has a wrong offset!");
static_assert(offsetof(FAthenaBossHealthData, Name) == 0x000008, "Member 'FAthenaBossHealthData::Name' has a wrong offset!");
static_assert(offsetof(FAthenaBossHealthData, Health) == 0x000020, "Member 'FAthenaBossHealthData::Health' has a wrong offset!");
static_assert(offsetof(FAthenaBossHealthData, HealthMax) == 0x000024, "Member 'FAthenaBossHealthData::HealthMax' has a wrong offset!");
static_assert(offsetof(FAthenaBossHealthData, Shields) == 0x000028, "Member 'FAthenaBossHealthData::Shields' has a wrong offset!");
static_assert(offsetof(FAthenaBossHealthData, ShieldsMax) == 0x00002C, "Member 'FAthenaBossHealthData::ShieldsMax' has a wrong offset!");

struct FSurvivalObjectiveIconData final
{
public:
	int32                                         IconIndex;
	ESurvivalObjectiveIconState                   IconState;
	ESurvivalObjectiveIconState                   PrevIconState;
	uint8                                         Pad_6[0x2];
	class FName                                   SpecialActorID;
};
static_assert(alignof(FSurvivalObjectiveIconData) == 0x000004, "Wrong alignment on FSurvivalObjectiveIconData");
static_assert(sizeof(FSurvivalObjectiveIconData) == 0x00000C, "Wrong size on FSurvivalObjectiveIconData");
static_assert(offsetof(FSurvivalObjectiveIconData, IconIndex) == 0x000000, "Member 'FSurvivalObjectiveIconData::IconIndex' has a wrong offset!");
static_assert(offsetof(FSurvivalObjectiveIconData, IconState) == 0x000004, "Member 'FSurvivalObjectiveIconData::IconState' has a wrong offset!");
static_assert(offsetof(FSurvivalObjectiveIconData, PrevIconState) == 0x000005, "Member 'FSurvivalObjectiveIconData::PrevIconState' has a wrong offset!");
static_assert(offsetof(FSurvivalObjectiveIconData, SpecialActorID) == 0x000008, "Member 'FSurvivalObjectiveIconData::SpecialActorID' has a wrong offset!");

struct FSurvivalObjectiveText final
{
public:
	TArray<class FString>                         SafezoneStateText;
};
static_assert(alignof(FSurvivalObjectiveText) == 0x000008, "Wrong alignment on FSurvivalObjectiveText");
static_assert(sizeof(FSurvivalObjectiveText) == 0x000010, "Wrong size on FSurvivalObjectiveText");
static_assert(offsetof(FSurvivalObjectiveText, SafezoneStateText) == 0x000000, "Member 'FSurvivalObjectiveText::SafezoneStateText' has a wrong offset!");

struct FDiscoCaptureUIData final
{
public:
	EDiscoCaptureUIState                          CurrDisplayState;
	uint8                                         Pad_1[0x7];
	class AAthenaCapturePoint*                    CapturePoint;
	class AFortPlayerPawnAthena*                  CurrPawn;
	class UMaterialInstanceDynamic*               CurrMID;
	float                                         FillAmount;
	uint8                                         Pad_24[0x4];
	class FText                                   DisplayText;
};
static_assert(alignof(FDiscoCaptureUIData) == 0x000008, "Wrong alignment on FDiscoCaptureUIData");
static_assert(sizeof(FDiscoCaptureUIData) == 0x000040, "Wrong size on FDiscoCaptureUIData");
static_assert(offsetof(FDiscoCaptureUIData, CurrDisplayState) == 0x000000, "Member 'FDiscoCaptureUIData::CurrDisplayState' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureUIData, CapturePoint) == 0x000008, "Member 'FDiscoCaptureUIData::CapturePoint' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureUIData, CurrPawn) == 0x000010, "Member 'FDiscoCaptureUIData::CurrPawn' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureUIData, CurrMID) == 0x000018, "Member 'FDiscoCaptureUIData::CurrMID' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureUIData, FillAmount) == 0x000020, "Member 'FDiscoCaptureUIData::FillAmount' has a wrong offset!");
static_assert(offsetof(FDiscoCaptureUIData, DisplayText) == 0x000028, "Member 'FDiscoCaptureUIData::DisplayText' has a wrong offset!");

struct FGGCenterDisplayEntry final : public FFortChangeMonitoringStruct
{
public:
	uint8                                         Pad_1[0x7];
	class UFortWeaponItemDefinition*              WeaponAt;
	int32                                         PlayersAtWeapon;
	bool                                          bIsEnabled;
	bool                                          bShowHarvestingTool;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(FGGCenterDisplayEntry) == 0x000008, "Wrong alignment on FGGCenterDisplayEntry");
static_assert(sizeof(FGGCenterDisplayEntry) == 0x000018, "Wrong size on FGGCenterDisplayEntry");
static_assert(offsetof(FGGCenterDisplayEntry, WeaponAt) == 0x000008, "Member 'FGGCenterDisplayEntry::WeaponAt' has a wrong offset!");
static_assert(offsetof(FGGCenterDisplayEntry, PlayersAtWeapon) == 0x000010, "Member 'FGGCenterDisplayEntry::PlayersAtWeapon' has a wrong offset!");
static_assert(offsetof(FGGCenterDisplayEntry, bIsEnabled) == 0x000014, "Member 'FGGCenterDisplayEntry::bIsEnabled' has a wrong offset!");
static_assert(offsetof(FGGCenterDisplayEntry, bShowHarvestingTool) == 0x000015, "Member 'FGGCenterDisplayEntry::bShowHarvestingTool' has a wrong offset!");

struct FHeistBlingIconData final
{
public:
	int32                                         IconIndex;
	EHeistBlingIconState                          IconState;
	EHeistBlingIconState                          PrevIconState;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(FHeistBlingIconData) == 0x000004, "Wrong alignment on FHeistBlingIconData");
static_assert(sizeof(FHeistBlingIconData) == 0x000008, "Wrong size on FHeistBlingIconData");
static_assert(offsetof(FHeistBlingIconData, IconIndex) == 0x000000, "Member 'FHeistBlingIconData::IconIndex' has a wrong offset!");
static_assert(offsetof(FHeistBlingIconData, IconState) == 0x000004, "Member 'FHeistBlingIconData::IconState' has a wrong offset!");
static_assert(offsetof(FHeistBlingIconData, PrevIconState) == 0x000005, "Member 'FHeistBlingIconData::PrevIconState' has a wrong offset!");

struct FFortCountdownSounds final
{
public:
	class USoundBase*                             sound;
	int32                                         StartTime;
	int32                                         StopTime;
	float                                         FadeOutTime;
	bool                                          bPlayed;
	uint8                                         Pad_15[0x3];
	class UAudioComponent*                        PlayInstance;
};
static_assert(alignof(FFortCountdownSounds) == 0x000008, "Wrong alignment on FFortCountdownSounds");
static_assert(sizeof(FFortCountdownSounds) == 0x000020, "Wrong size on FFortCountdownSounds");
static_assert(offsetof(FFortCountdownSounds, sound) == 0x000000, "Member 'FFortCountdownSounds::sound' has a wrong offset!");
static_assert(offsetof(FFortCountdownSounds, StartTime) == 0x000008, "Member 'FFortCountdownSounds::StartTime' has a wrong offset!");
static_assert(offsetof(FFortCountdownSounds, StopTime) == 0x00000C, "Member 'FFortCountdownSounds::StopTime' has a wrong offset!");
static_assert(offsetof(FFortCountdownSounds, FadeOutTime) == 0x000010, "Member 'FFortCountdownSounds::FadeOutTime' has a wrong offset!");
static_assert(offsetof(FFortCountdownSounds, bPlayed) == 0x000014, "Member 'FFortCountdownSounds::bPlayed' has a wrong offset!");
static_assert(offsetof(FFortCountdownSounds, PlayInstance) == 0x000018, "Member 'FFortCountdownSounds::PlayInstance' has a wrong offset!");

struct FSoundThreshold final
{
public:
	class USoundCue*                              SoundCue;
	float                                         Threshold;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FSoundThreshold) == 0x000008, "Wrong alignment on FSoundThreshold");
static_assert(sizeof(FSoundThreshold) == 0x000010, "Wrong size on FSoundThreshold");
static_assert(offsetof(FSoundThreshold, SoundCue) == 0x000000, "Member 'FSoundThreshold::SoundCue' has a wrong offset!");
static_assert(offsetof(FSoundThreshold, Threshold) == 0x000008, "Member 'FSoundThreshold::Threshold' has a wrong offset!");

struct FWaxPlacementData final
{
public:
	int32                                         Placement;
	uint8                                         Pad_4[0x4];
	class FString                                 PlayerName;
	int32                                         CoinCount;
	bool                                          bIsPlayer;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FWaxPlacementData) == 0x000008, "Wrong alignment on FWaxPlacementData");
static_assert(sizeof(FWaxPlacementData) == 0x000020, "Wrong size on FWaxPlacementData");
static_assert(offsetof(FWaxPlacementData, Placement) == 0x000000, "Member 'FWaxPlacementData::Placement' has a wrong offset!");
static_assert(offsetof(FWaxPlacementData, PlayerName) == 0x000008, "Member 'FWaxPlacementData::PlayerName' has a wrong offset!");
static_assert(offsetof(FWaxPlacementData, CoinCount) == 0x000018, "Member 'FWaxPlacementData::CoinCount' has a wrong offset!");
static_assert(offsetof(FWaxPlacementData, bIsPlayer) == 0x00001C, "Member 'FWaxPlacementData::bIsPlayer' has a wrong offset!");

struct FGoalsPageCategoryTabData final
{
public:
	class UObject*                                TabDisplayAsset;
	class FText                                   DisplayName;
	struct FGameplayTag                           IncludeTag;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FGoalsPageCategoryTabData) == 0x000008, "Wrong alignment on FGoalsPageCategoryTabData");
static_assert(sizeof(FGoalsPageCategoryTabData) == 0x000028, "Wrong size on FGoalsPageCategoryTabData");
static_assert(offsetof(FGoalsPageCategoryTabData, TabDisplayAsset) == 0x000000, "Member 'FGoalsPageCategoryTabData::TabDisplayAsset' has a wrong offset!");
static_assert(offsetof(FGoalsPageCategoryTabData, DisplayName) == 0x000008, "Member 'FGoalsPageCategoryTabData::DisplayName' has a wrong offset!");
static_assert(offsetof(FGoalsPageCategoryTabData, IncludeTag) == 0x000020, "Member 'FGoalsPageCategoryTabData::IncludeTag' has a wrong offset!");

struct alignas(0x08) FSelectedChallengesData final
{
public:
	uint8                                         Pad_0[0x10];
	bool                                          bIsCompleted;
	bool                                          bIsLocked;
	bool                                          bHasIconOverride;
	uint8                                         Pad_13[0x1];
	float                                         Progress;
	int32                                         NumObjectivesCompleted;
	int32                                         NumObjectives;
};
static_assert(alignof(FSelectedChallengesData) == 0x000008, "Wrong alignment on FSelectedChallengesData");
static_assert(sizeof(FSelectedChallengesData) == 0x000020, "Wrong size on FSelectedChallengesData");
static_assert(offsetof(FSelectedChallengesData, bIsCompleted) == 0x000010, "Member 'FSelectedChallengesData::bIsCompleted' has a wrong offset!");
static_assert(offsetof(FSelectedChallengesData, bIsLocked) == 0x000011, "Member 'FSelectedChallengesData::bIsLocked' has a wrong offset!");
static_assert(offsetof(FSelectedChallengesData, bHasIconOverride) == 0x000012, "Member 'FSelectedChallengesData::bHasIconOverride' has a wrong offset!");
static_assert(offsetof(FSelectedChallengesData, Progress) == 0x000014, "Member 'FSelectedChallengesData::Progress' has a wrong offset!");
static_assert(offsetof(FSelectedChallengesData, NumObjectivesCompleted) == 0x000018, "Member 'FSelectedChallengesData::NumObjectivesCompleted' has a wrong offset!");
static_assert(offsetof(FSelectedChallengesData, NumObjectives) == 0x00001C, "Member 'FSelectedChallengesData::NumObjectives' has a wrong offset!");

struct FDisabledQuestData final
{
public:
	class FString                                 Name;
};
static_assert(alignof(FDisabledQuestData) == 0x000008, "Wrong alignment on FDisabledQuestData");
static_assert(sizeof(FDisabledQuestData) == 0x000010, "Wrong size on FDisabledQuestData");
static_assert(offsetof(FDisabledQuestData, Name) == 0x000000, "Member 'FDisabledQuestData::Name' has a wrong offset!");

struct FStatGroupData final
{
public:
	class FText                                   GroupName;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            Group;
	float                                         Value;
	float                                         ChartValue;
	float                                         ChartOrigionalValue;
	uint8                                         Pad_EC[0x4];
};
static_assert(alignof(FStatGroupData) == 0x000010, "Wrong alignment on FStatGroupData");
static_assert(sizeof(FStatGroupData) == 0x0000F0, "Wrong size on FStatGroupData");
static_assert(offsetof(FStatGroupData, GroupName) == 0x000000, "Member 'FStatGroupData::GroupName' has a wrong offset!");
static_assert(offsetof(FStatGroupData, Group) == 0x000020, "Member 'FStatGroupData::Group' has a wrong offset!");
static_assert(offsetof(FStatGroupData, Value) == 0x0000E0, "Member 'FStatGroupData::Value' has a wrong offset!");
static_assert(offsetof(FStatGroupData, ChartValue) == 0x0000E4, "Member 'FStatGroupData::ChartValue' has a wrong offset!");
static_assert(offsetof(FStatGroupData, ChartOrigionalValue) == 0x0000E8, "Member 'FStatGroupData::ChartOrigionalValue' has a wrong offset!");

struct FActionBindingIconPicker final
{
public:
	TArray<class FName>                           ActionNames;
	class UPaperSprite*                           Sprite;
};
static_assert(alignof(FActionBindingIconPicker) == 0x000008, "Wrong alignment on FActionBindingIconPicker");
static_assert(sizeof(FActionBindingIconPicker) == 0x000018, "Wrong size on FActionBindingIconPicker");
static_assert(offsetof(FActionBindingIconPicker, ActionNames) == 0x000000, "Member 'FActionBindingIconPicker::ActionNames' has a wrong offset!");
static_assert(offsetof(FActionBindingIconPicker, Sprite) == 0x000010, "Member 'FActionBindingIconPicker::Sprite' has a wrong offset!");

struct FActionBindingVisibility final
{
public:
	TArray<class FName>                           ActionNames;
	EActionBindingComparisonType                  ComparisonType;
	ESlateVisibility                              Visibility;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(FActionBindingVisibility) == 0x000008, "Wrong alignment on FActionBindingVisibility");
static_assert(sizeof(FActionBindingVisibility) == 0x000018, "Wrong size on FActionBindingVisibility");
static_assert(offsetof(FActionBindingVisibility, ActionNames) == 0x000000, "Member 'FActionBindingVisibility::ActionNames' has a wrong offset!");
static_assert(offsetof(FActionBindingVisibility, ComparisonType) == 0x000010, "Member 'FActionBindingVisibility::ComparisonType' has a wrong offset!");
static_assert(offsetof(FActionBindingVisibility, Visibility) == 0x000011, "Member 'FActionBindingVisibility::Visibility' has a wrong offset!");

struct FGameplayMessageVisibility final
{
public:
	struct FEventMessageTag                       EventMessageTag;
	ESlateVisibility                              MessageReceivedVisibility;
	ESlateVisibility                              MessageStateClearedVisibility;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(FGameplayMessageVisibility) == 0x000004, "Wrong alignment on FGameplayMessageVisibility");
static_assert(sizeof(FGameplayMessageVisibility) == 0x000008, "Wrong size on FGameplayMessageVisibility");
static_assert(offsetof(FGameplayMessageVisibility, EventMessageTag) == 0x000000, "Member 'FGameplayMessageVisibility::EventMessageTag' has a wrong offset!");
static_assert(offsetof(FGameplayMessageVisibility, MessageReceivedVisibility) == 0x000004, "Member 'FGameplayMessageVisibility::MessageReceivedVisibility' has a wrong offset!");
static_assert(offsetof(FGameplayMessageVisibility, MessageStateClearedVisibility) == 0x000005, "Member 'FGameplayMessageVisibility::MessageStateClearedVisibility' has a wrong offset!");

struct FHUDWidgetRegistryEntry final
{
public:
	struct FGameplayTag                           HUDWidgetTag;
	bool                                          bIsMandatory;
	uint8                                         Pad_5[0x3];
	float                                         MandatoryOnScreenPercent;
	int32                                         MaximumAmountOfInstances;
	int32                                         ZOrder;
	bool                                          bHasDynamicUIUniqueID;
	uint8                                         Pad_15[0x3];
	class FName                                   DynamicUIUniqueID;
	uint8                                         Pad_1C[0x4];
	TSubclassOf<class UFortMobileHUDElement>      HUDWidgetClass;
	TSubclassOf<class UFortMobileHUDElementProxy> HUDWidgetProxyClass;
	TSubclassOf<class UHUDLayoutToolV2_WidgetPreview> HUDWidgetPreviewClass;
	TArray<class UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels;
};
static_assert(alignof(FHUDWidgetRegistryEntry) == 0x000008, "Wrong alignment on FHUDWidgetRegistryEntry");
static_assert(sizeof(FHUDWidgetRegistryEntry) == 0x000048, "Wrong size on FHUDWidgetRegistryEntry");
static_assert(offsetof(FHUDWidgetRegistryEntry, HUDWidgetTag) == 0x000000, "Member 'FHUDWidgetRegistryEntry::HUDWidgetTag' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, bIsMandatory) == 0x000004, "Member 'FHUDWidgetRegistryEntry::bIsMandatory' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, MandatoryOnScreenPercent) == 0x000008, "Member 'FHUDWidgetRegistryEntry::MandatoryOnScreenPercent' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, MaximumAmountOfInstances) == 0x00000C, "Member 'FHUDWidgetRegistryEntry::MaximumAmountOfInstances' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, ZOrder) == 0x000010, "Member 'FHUDWidgetRegistryEntry::ZOrder' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, bHasDynamicUIUniqueID) == 0x000014, "Member 'FHUDWidgetRegistryEntry::bHasDynamicUIUniqueID' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, DynamicUIUniqueID) == 0x000018, "Member 'FHUDWidgetRegistryEntry::DynamicUIUniqueID' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, HUDWidgetClass) == 0x000020, "Member 'FHUDWidgetRegistryEntry::HUDWidgetClass' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, HUDWidgetProxyClass) == 0x000028, "Member 'FHUDWidgetRegistryEntry::HUDWidgetProxyClass' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, HUDWidgetPreviewClass) == 0x000030, "Member 'FHUDWidgetRegistryEntry::HUDWidgetPreviewClass' has a wrong offset!");
static_assert(offsetof(FHUDWidgetRegistryEntry, CustomPropertyModels) == 0x000038, "Member 'FHUDWidgetRegistryEntry::CustomPropertyModels' has a wrong offset!");

struct FHUDWidgetBehaviorRegistryEntry final
{
public:
	struct FGameplayTag                           HUDWidgetBehaviorTag;
	struct FGameplayTag                           HUDWidgetOverrideTag;
	TSubclassOf<class UHUDWidgetBehavior>         HUDWidgetBehaviorClass;
};
static_assert(alignof(FHUDWidgetBehaviorRegistryEntry) == 0x000008, "Wrong alignment on FHUDWidgetBehaviorRegistryEntry");
static_assert(sizeof(FHUDWidgetBehaviorRegistryEntry) == 0x000010, "Wrong size on FHUDWidgetBehaviorRegistryEntry");
static_assert(offsetof(FHUDWidgetBehaviorRegistryEntry, HUDWidgetBehaviorTag) == 0x000000, "Member 'FHUDWidgetBehaviorRegistryEntry::HUDWidgetBehaviorTag' has a wrong offset!");
static_assert(offsetof(FHUDWidgetBehaviorRegistryEntry, HUDWidgetOverrideTag) == 0x000004, "Member 'FHUDWidgetBehaviorRegistryEntry::HUDWidgetOverrideTag' has a wrong offset!");
static_assert(offsetof(FHUDWidgetBehaviorRegistryEntry, HUDWidgetBehaviorClass) == 0x000008, "Member 'FHUDWidgetBehaviorRegistryEntry::HUDWidgetBehaviorClass' has a wrong offset!");

struct alignas(0x08) FHUDWidgetSchemaInitializer final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FHUDWidgetSchemaInitializer) == 0x000008, "Wrong alignment on FHUDWidgetSchemaInitializer");
static_assert(sizeof(FHUDWidgetSchemaInitializer) == 0x000010, "Wrong size on FHUDWidgetSchemaInitializer");

struct FHUDWidgetBehaviorExtensionsRegistryEntry final
{
public:
	struct FGameplayTag                           HUDWidgetBehaviorTag;
	uint8                                         Pad_4[0x4];
	TArray<TSubclassOf<class UFortMobileHUDWidgetBehaviorExtension>> HUDWidgetBehaviorExtensions;
};
static_assert(alignof(FHUDWidgetBehaviorExtensionsRegistryEntry) == 0x000008, "Wrong alignment on FHUDWidgetBehaviorExtensionsRegistryEntry");
static_assert(sizeof(FHUDWidgetBehaviorExtensionsRegistryEntry) == 0x000018, "Wrong size on FHUDWidgetBehaviorExtensionsRegistryEntry");
static_assert(offsetof(FHUDWidgetBehaviorExtensionsRegistryEntry, HUDWidgetBehaviorTag) == 0x000000, "Member 'FHUDWidgetBehaviorExtensionsRegistryEntry::HUDWidgetBehaviorTag' has a wrong offset!");
static_assert(offsetof(FHUDWidgetBehaviorExtensionsRegistryEntry, HUDWidgetBehaviorExtensions) == 0x000008, "Member 'FHUDWidgetBehaviorExtensionsRegistryEntry::HUDWidgetBehaviorExtensions' has a wrong offset!");

struct FButtonInteractionPair final
{
public:
	class AActor*                                 TrackedInteraction;
	class UFortTouchInteractionButton*            TrackedButton;
};
static_assert(alignof(FButtonInteractionPair) == 0x000008, "Wrong alignment on FButtonInteractionPair");
static_assert(sizeof(FButtonInteractionPair) == 0x000010, "Wrong size on FButtonInteractionPair");
static_assert(offsetof(FButtonInteractionPair, TrackedInteraction) == 0x000000, "Member 'FButtonInteractionPair::TrackedInteraction' has a wrong offset!");
static_assert(offsetof(FButtonInteractionPair, TrackedButton) == 0x000008, "Member 'FButtonInteractionPair::TrackedButton' has a wrong offset!");

struct FUserGenericAction final : public FUserAction
{
public:
	struct FFortMobileHUDProfileBase              ActiveProfile;
};
static_assert(alignof(FUserGenericAction) == 0x000008, "Wrong alignment on FUserGenericAction");
static_assert(sizeof(FUserGenericAction) == 0x000058, "Wrong size on FUserGenericAction");
static_assert(offsetof(FUserGenericAction, ActiveProfile) == 0x000018, "Member 'FUserGenericAction::ActiveProfile' has a wrong offset!");

struct FUserSelectProfileAction final : public FUserAction
{
public:
	struct FFortMobileHUDProfileBase              PreviousProfile;
	struct FFortMobileHUDProfileBase              NewProfile;
};
static_assert(alignof(FUserSelectProfileAction) == 0x000008, "Wrong alignment on FUserSelectProfileAction");
static_assert(sizeof(FUserSelectProfileAction) == 0x000098, "Wrong size on FUserSelectProfileAction");
static_assert(offsetof(FUserSelectProfileAction, PreviousProfile) == 0x000018, "Member 'FUserSelectProfileAction::PreviousProfile' has a wrong offset!");
static_assert(offsetof(FUserSelectProfileAction, NewProfile) == 0x000058, "Member 'FUserSelectProfileAction::NewProfile' has a wrong offset!");

struct FHUDLayoutToolV2_ButtonStateColor final
{
public:
	struct FSlateColor                            TextColor;
	struct FLinearColor                           IconColor;
	struct FLinearColor                           BackgroundColor;
	float                                         IconAngle;
};
static_assert(alignof(FHUDLayoutToolV2_ButtonStateColor) == 0x000004, "Wrong alignment on FHUDLayoutToolV2_ButtonStateColor");
static_assert(sizeof(FHUDLayoutToolV2_ButtonStateColor) == 0x000038, "Wrong size on FHUDLayoutToolV2_ButtonStateColor");
static_assert(offsetof(FHUDLayoutToolV2_ButtonStateColor, TextColor) == 0x000000, "Member 'FHUDLayoutToolV2_ButtonStateColor::TextColor' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_ButtonStateColor, IconColor) == 0x000014, "Member 'FHUDLayoutToolV2_ButtonStateColor::IconColor' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_ButtonStateColor, BackgroundColor) == 0x000024, "Member 'FHUDLayoutToolV2_ButtonStateColor::BackgroundColor' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_ButtonStateColor, IconAngle) == 0x000034, "Member 'FHUDLayoutToolV2_ButtonStateColor::IconAngle' has a wrong offset!");

struct FLinkAcrossNumericalIndicatorActionSymbol final
{
public:
	ENumericalIndicatorActionType                 ActionType;
	uint8                                         Pad_1[0x7];
	class FText                                   ActionSymbol;
	struct FLinearColor                           ActionColor;
};
static_assert(alignof(FLinkAcrossNumericalIndicatorActionSymbol) == 0x000008, "Wrong alignment on FLinkAcrossNumericalIndicatorActionSymbol");
static_assert(sizeof(FLinkAcrossNumericalIndicatorActionSymbol) == 0x000030, "Wrong size on FLinkAcrossNumericalIndicatorActionSymbol");
static_assert(offsetof(FLinkAcrossNumericalIndicatorActionSymbol, ActionType) == 0x000000, "Member 'FLinkAcrossNumericalIndicatorActionSymbol::ActionType' has a wrong offset!");
static_assert(offsetof(FLinkAcrossNumericalIndicatorActionSymbol, ActionSymbol) == 0x000008, "Member 'FLinkAcrossNumericalIndicatorActionSymbol::ActionSymbol' has a wrong offset!");
static_assert(offsetof(FLinkAcrossNumericalIndicatorActionSymbol, ActionColor) == 0x000020, "Member 'FLinkAcrossNumericalIndicatorActionSymbol::ActionColor' has a wrong offset!");

struct FHUDLayoutToolV2_PopupContent final
{
public:
	EHUDLayoutToolPopupType                       PopupType;
	uint8                                         Pad_1[0x7];
	class FText                                   TitleText;
	class FText                                   DescriptionText;
	class FText                                   ButtonConfirmText;
	class FText                                   ButtonCancelText;
};
static_assert(alignof(FHUDLayoutToolV2_PopupContent) == 0x000008, "Wrong alignment on FHUDLayoutToolV2_PopupContent");
static_assert(sizeof(FHUDLayoutToolV2_PopupContent) == 0x000068, "Wrong size on FHUDLayoutToolV2_PopupContent");
static_assert(offsetof(FHUDLayoutToolV2_PopupContent, PopupType) == 0x000000, "Member 'FHUDLayoutToolV2_PopupContent::PopupType' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_PopupContent, TitleText) == 0x000008, "Member 'FHUDLayoutToolV2_PopupContent::TitleText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_PopupContent, DescriptionText) == 0x000020, "Member 'FHUDLayoutToolV2_PopupContent::DescriptionText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_PopupContent, ButtonConfirmText) == 0x000038, "Member 'FHUDLayoutToolV2_PopupContent::ButtonConfirmText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_PopupContent, ButtonCancelText) == 0x000050, "Member 'FHUDLayoutToolV2_PopupContent::ButtonCancelText' has a wrong offset!");

struct FQuickbarProxySlotIconContainer final
{
public:
	TArray<class UPaperSprite*>                   SlotIcons;
};
static_assert(alignof(FQuickbarProxySlotIconContainer) == 0x000008, "Wrong alignment on FQuickbarProxySlotIconContainer");
static_assert(sizeof(FQuickbarProxySlotIconContainer) == 0x000010, "Wrong size on FQuickbarProxySlotIconContainer");
static_assert(offsetof(FQuickbarProxySlotIconContainer, SlotIcons) == 0x000000, "Member 'FQuickbarProxySlotIconContainer::SlotIcons' has a wrong offset!");

struct FHUDLayoutToolV2_TextInputPopupContent final
{
public:
	EHUDLayoutToolTextInputPopupType              PopupType;
	uint8                                         Pad_1[0x7];
	class FText                                   TitleText;
	class FText                                   DescriptionText;
	class FText                                   ButtonConfirmText;
	class FText                                   ButtonCancelText;
};
static_assert(alignof(FHUDLayoutToolV2_TextInputPopupContent) == 0x000008, "Wrong alignment on FHUDLayoutToolV2_TextInputPopupContent");
static_assert(sizeof(FHUDLayoutToolV2_TextInputPopupContent) == 0x000068, "Wrong size on FHUDLayoutToolV2_TextInputPopupContent");
static_assert(offsetof(FHUDLayoutToolV2_TextInputPopupContent, PopupType) == 0x000000, "Member 'FHUDLayoutToolV2_TextInputPopupContent::PopupType' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_TextInputPopupContent, TitleText) == 0x000008, "Member 'FHUDLayoutToolV2_TextInputPopupContent::TitleText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_TextInputPopupContent, DescriptionText) == 0x000020, "Member 'FHUDLayoutToolV2_TextInputPopupContent::DescriptionText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_TextInputPopupContent, ButtonConfirmText) == 0x000038, "Member 'FHUDLayoutToolV2_TextInputPopupContent::ButtonConfirmText' has a wrong offset!");
static_assert(offsetof(FHUDLayoutToolV2_TextInputPopupContent, ButtonCancelText) == 0x000050, "Member 'FHUDLayoutToolV2_TextInputPopupContent::ButtonCancelText' has a wrong offset!");

struct FFortMobileContextFilter final
{
public:
	struct FGameplayTagContainer                  ShownInContexts;
	struct FGameplayTagContainer                  HiddenInContexts;
};
static_assert(alignof(FFortMobileContextFilter) == 0x000008, "Wrong alignment on FFortMobileContextFilter");
static_assert(sizeof(FFortMobileContextFilter) == 0x000040, "Wrong size on FFortMobileContextFilter");
static_assert(offsetof(FFortMobileContextFilter, ShownInContexts) == 0x000000, "Member 'FFortMobileContextFilter::ShownInContexts' has a wrong offset!");
static_assert(offsetof(FFortMobileContextFilter, HiddenInContexts) == 0x000020, "Member 'FFortMobileContextFilter::HiddenInContexts' has a wrong offset!");

struct FFortMobileHUDContextModelExtension final
{
public:
	struct FGameplayTag                           ContextLayoutTag;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  UseableHUDWidgetTags;
};
static_assert(alignof(FFortMobileHUDContextModelExtension) == 0x000008, "Wrong alignment on FFortMobileHUDContextModelExtension");
static_assert(sizeof(FFortMobileHUDContextModelExtension) == 0x000028, "Wrong size on FFortMobileHUDContextModelExtension");
static_assert(offsetof(FFortMobileHUDContextModelExtension, ContextLayoutTag) == 0x000000, "Member 'FFortMobileHUDContextModelExtension::ContextLayoutTag' has a wrong offset!");
static_assert(offsetof(FFortMobileHUDContextModelExtension, UseableHUDWidgetTags) == 0x000008, "Member 'FFortMobileHUDContextModelExtension::UseableHUDWidgetTags' has a wrong offset!");

struct FFortMobileHUDWidgetLayout final
{
public:
	struct FAnchorData                            LayoutData;
	int32                                         ZOrder;
	uint8                                         Pad_44[0x14];
};
static_assert(alignof(FFortMobileHUDWidgetLayout) == 0x000008, "Wrong alignment on FFortMobileHUDWidgetLayout");
static_assert(sizeof(FFortMobileHUDWidgetLayout) == 0x000058, "Wrong size on FFortMobileHUDWidgetLayout");
static_assert(offsetof(FFortMobileHUDWidgetLayout, LayoutData) == 0x000000, "Member 'FFortMobileHUDWidgetLayout::LayoutData' has a wrong offset!");
static_assert(offsetof(FFortMobileHUDWidgetLayout, ZOrder) == 0x000040, "Member 'FFortMobileHUDWidgetLayout::ZOrder' has a wrong offset!");

struct FFortMaterialProgressBarSectionStyle final
{
public:
	bool                                          bGradientBar;
	uint8                                         Pad_1[0x3];
	class FName                                   BarParamName;
	class FName                                   BarColorOneParamName;
	class FName                                   BarColorTwoParamName;
	struct FLinearColor                           BarColorOne;
	struct FLinearColor                           BarColorTwo;
};
static_assert(alignof(FFortMaterialProgressBarSectionStyle) == 0x000004, "Wrong alignment on FFortMaterialProgressBarSectionStyle");
static_assert(sizeof(FFortMaterialProgressBarSectionStyle) == 0x000030, "Wrong size on FFortMaterialProgressBarSectionStyle");
static_assert(offsetof(FFortMaterialProgressBarSectionStyle, bGradientBar) == 0x000000, "Member 'FFortMaterialProgressBarSectionStyle::bGradientBar' has a wrong offset!");
static_assert(offsetof(FFortMaterialProgressBarSectionStyle, BarParamName) == 0x000004, "Member 'FFortMaterialProgressBarSectionStyle::BarParamName' has a wrong offset!");
static_assert(offsetof(FFortMaterialProgressBarSectionStyle, BarColorOneParamName) == 0x000008, "Member 'FFortMaterialProgressBarSectionStyle::BarColorOneParamName' has a wrong offset!");
static_assert(offsetof(FFortMaterialProgressBarSectionStyle, BarColorTwoParamName) == 0x00000C, "Member 'FFortMaterialProgressBarSectionStyle::BarColorTwoParamName' has a wrong offset!");
static_assert(offsetof(FFortMaterialProgressBarSectionStyle, BarColorOne) == 0x000010, "Member 'FFortMaterialProgressBarSectionStyle::BarColorOne' has a wrong offset!");
static_assert(offsetof(FFortMaterialProgressBarSectionStyle, BarColorTwo) == 0x000020, "Member 'FFortMaterialProgressBarSectionStyle::BarColorTwo' has a wrong offset!");

struct FFortMaterialProgressBarSectionInfo final
{
public:
	struct FFortMaterialProgressBarSectionStyle   SectionStyle;
	float                                         Percent;
};
static_assert(alignof(FFortMaterialProgressBarSectionInfo) == 0x000004, "Wrong alignment on FFortMaterialProgressBarSectionInfo");
static_assert(sizeof(FFortMaterialProgressBarSectionInfo) == 0x000034, "Wrong size on FFortMaterialProgressBarSectionInfo");
static_assert(offsetof(FFortMaterialProgressBarSectionInfo, SectionStyle) == 0x000000, "Member 'FFortMaterialProgressBarSectionInfo::SectionStyle' has a wrong offset!");
static_assert(offsetof(FFortMaterialProgressBarSectionInfo, Percent) == 0x000030, "Member 'FFortMaterialProgressBarSectionInfo::Percent' has a wrong offset!");

struct FCrewDefaultData final
{
public:
	class FText                                   Title;
	class FText                                   Description;
	class FString                                 BackgroundURL;
};
static_assert(alignof(FCrewDefaultData) == 0x000008, "Wrong alignment on FCrewDefaultData");
static_assert(sizeof(FCrewDefaultData) == 0x000040, "Wrong size on FCrewDefaultData");
static_assert(offsetof(FCrewDefaultData, Title) == 0x000000, "Member 'FCrewDefaultData::Title' has a wrong offset!");
static_assert(offsetof(FCrewDefaultData, Description) == 0x000018, "Member 'FCrewDefaultData::Description' has a wrong offset!");
static_assert(offsetof(FCrewDefaultData, BackgroundURL) == 0x000030, "Member 'FCrewDefaultData::BackgroundURL' has a wrong offset!");

struct FCrewTileDataCrewPack final : public FCrewTileDataBasic
{
public:
	TArray<class FString>                         CrewPackItems;
	bool                                          bHasNextCrewPackDetails;
	uint8                                         Pad_91[0x7];
	struct FCrewTileDetailsData                   NextDetails;
	TArray<class FString>                         NextCrewPackItems;
};
static_assert(alignof(FCrewTileDataCrewPack) == 0x000008, "Wrong alignment on FCrewTileDataCrewPack");
static_assert(sizeof(FCrewTileDataCrewPack) == 0x000100, "Wrong size on FCrewTileDataCrewPack");
static_assert(offsetof(FCrewTileDataCrewPack, CrewPackItems) == 0x000080, "Member 'FCrewTileDataCrewPack::CrewPackItems' has a wrong offset!");
static_assert(offsetof(FCrewTileDataCrewPack, bHasNextCrewPackDetails) == 0x000090, "Member 'FCrewTileDataCrewPack::bHasNextCrewPackDetails' has a wrong offset!");
static_assert(offsetof(FCrewTileDataCrewPack, NextDetails) == 0x000098, "Member 'FCrewTileDataCrewPack::NextDetails' has a wrong offset!");
static_assert(offsetof(FCrewTileDataCrewPack, NextCrewPackItems) == 0x0000F0, "Member 'FCrewTileDataCrewPack::NextCrewPackItems' has a wrong offset!");

struct alignas(0x08) FCrewBenefits final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FCrewBenefits) == 0x000008, "Wrong alignment on FCrewBenefits");
static_assert(sizeof(FCrewBenefits) == 0x000020, "Wrong size on FCrewBenefits");

struct FCrewSubscriptionStateModal final
{
public:
	EMcpSubscriptionState                         SubscriptionState;
	uint8                                         Pad_1[0x7];
	TArray<class FText>                           BulletPoints;
};
static_assert(alignof(FCrewSubscriptionStateModal) == 0x000008, "Wrong alignment on FCrewSubscriptionStateModal");
static_assert(sizeof(FCrewSubscriptionStateModal) == 0x000018, "Wrong size on FCrewSubscriptionStateModal");
static_assert(offsetof(FCrewSubscriptionStateModal, SubscriptionState) == 0x000000, "Member 'FCrewSubscriptionStateModal::SubscriptionState' has a wrong offset!");
static_assert(offsetof(FCrewSubscriptionStateModal, BulletPoints) == 0x000008, "Member 'FCrewSubscriptionStateModal::BulletPoints' has a wrong offset!");

struct FCrewModals final
{
public:
	TArray<struct FCrewSubscriptionStateModal>    CancellationInfoErrorStateModals;
	TArray<struct FCrewPlatformAndCountriesNotificationModal> PlatformAndCountriesNotificationModals;
};
static_assert(alignof(FCrewModals) == 0x000008, "Wrong alignment on FCrewModals");
static_assert(sizeof(FCrewModals) == 0x000020, "Wrong size on FCrewModals");
static_assert(offsetof(FCrewModals, CancellationInfoErrorStateModals) == 0x000000, "Member 'FCrewModals::CancellationInfoErrorStateModals' has a wrong offset!");
static_assert(offsetof(FCrewModals, PlatformAndCountriesNotificationModals) == 0x000010, "Member 'FCrewModals::PlatformAndCountriesNotificationModals' has a wrong offset!");

struct FCrewScreenData final
{
public:
	class FText                                   CrewDisclaimer;
	struct FCrewDefaultData                       DefaultData;
	struct FCrewBenefits                          Benefits;
	struct FCrewModals                            CrewModals;
	struct FCrewItemShopTileData                  ItemShopTileData;
	struct FAthenaSubscriptionProgressiveInfo     ProgressiveInfo;
	struct FSubscriptionModals                    SubModals;
};
static_assert(alignof(FCrewScreenData) == 0x000008, "Wrong alignment on FCrewScreenData");
static_assert(sizeof(FCrewScreenData) == 0x000130, "Wrong size on FCrewScreenData");
static_assert(offsetof(FCrewScreenData, CrewDisclaimer) == 0x000000, "Member 'FCrewScreenData::CrewDisclaimer' has a wrong offset!");
static_assert(offsetof(FCrewScreenData, DefaultData) == 0x000018, "Member 'FCrewScreenData::DefaultData' has a wrong offset!");
static_assert(offsetof(FCrewScreenData, Benefits) == 0x000058, "Member 'FCrewScreenData::Benefits' has a wrong offset!");
static_assert(offsetof(FCrewScreenData, CrewModals) == 0x000078, "Member 'FCrewScreenData::CrewModals' has a wrong offset!");
static_assert(offsetof(FCrewScreenData, ItemShopTileData) == 0x000098, "Member 'FCrewScreenData::ItemShopTileData' has a wrong offset!");
static_assert(offsetof(FCrewScreenData, ProgressiveInfo) == 0x0000F8, "Member 'FCrewScreenData::ProgressiveInfo' has a wrong offset!");
static_assert(offsetof(FCrewScreenData, SubModals) == 0x000120, "Member 'FCrewScreenData::SubModals' has a wrong offset!");

struct FItemMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x18];
};
static_assert(alignof(FItemMOTD) == 0x000008, "Wrong alignment on FItemMOTD");
static_assert(sizeof(FItemMOTD) == 0x0000E8, "Wrong size on FItemMOTD");

struct FSettingsMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x20];
};
static_assert(alignof(FSettingsMOTD) == 0x000008, "Wrong alignment on FSettingsMOTD");
static_assert(sizeof(FSettingsMOTD) == 0x0000F0, "Wrong size on FSettingsMOTD");

struct FWebsiteMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x20];
};
static_assert(alignof(FWebsiteMOTD) == 0x000008, "Wrong alignment on FWebsiteMOTD");
static_assert(sizeof(FWebsiteMOTD) == 0x0000F0, "Wrong size on FWebsiteMOTD");

struct FPlaylistMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x10];
};
static_assert(alignof(FPlaylistMOTD) == 0x000008, "Wrong alignment on FPlaylistMOTD");
static_assert(sizeof(FPlaylistMOTD) == 0x0000E0, "Wrong size on FPlaylistMOTD");

struct FCreativeMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x30];
};
static_assert(alignof(FCreativeMOTD) == 0x000008, "Wrong alignment on FCreativeMOTD");
static_assert(sizeof(FCreativeMOTD) == 0x000100, "Wrong size on FCreativeMOTD");

struct FNavigateToSocialMenuMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x8];
};
static_assert(alignof(FNavigateToSocialMenuMOTD) == 0x000008, "Wrong alignment on FNavigateToSocialMenuMOTD");
static_assert(sizeof(FNavigateToSocialMenuMOTD) == 0x0000D8, "Wrong size on FNavigateToSocialMenuMOTD");

struct FNavigateToRebootRallySubPageMOTD final : public FAthenaMOTDBase
{
};
static_assert(alignof(FNavigateToRebootRallySubPageMOTD) == 0x000008, "Wrong alignment on FNavigateToRebootRallySubPageMOTD");
static_assert(sizeof(FNavigateToRebootRallySubPageMOTD) == 0x0000D0, "Wrong size on FNavigateToRebootRallySubPageMOTD");

struct FDiscoveryMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x20];
};
static_assert(alignof(FDiscoveryMOTD) == 0x000008, "Wrong alignment on FDiscoveryMOTD");
static_assert(sizeof(FDiscoveryMOTD) == 0x0000F0, "Wrong size on FDiscoveryMOTD");

struct FNavigateToMapSubPageMOTD final : public FAthenaMOTDBase
{
public:
	uint8                                         Pad_D0[0x8];
};
static_assert(alignof(FNavigateToMapSubPageMOTD) == 0x000008, "Wrong alignment on FNavigateToMapSubPageMOTD");
static_assert(sizeof(FNavigateToMapSubPageMOTD) == 0x0000D8, "Wrong size on FNavigateToMapSubPageMOTD");

struct FAthenaEmergencyNotice final
{
public:
	class FString                                 Title;
	class FString                                 Body;
	uint8                                         Pad_20[0x20];
};
static_assert(alignof(FAthenaEmergencyNotice) == 0x000008, "Wrong alignment on FAthenaEmergencyNotice");
static_assert(sizeof(FAthenaEmergencyNotice) == 0x000040, "Wrong size on FAthenaEmergencyNotice");
static_assert(offsetof(FAthenaEmergencyNotice, Title) == 0x000000, "Member 'FAthenaEmergencyNotice::Title' has a wrong offset!");
static_assert(offsetof(FAthenaEmergencyNotice, Body) == 0x000010, "Member 'FAthenaEmergencyNotice::Body' has a wrong offset!");

struct FShowdownTournamentJsonObject final
{
public:
	TArray<struct FShowdownTournamentData>        Tournaments;
};
static_assert(alignof(FShowdownTournamentJsonObject) == 0x000008, "Wrong alignment on FShowdownTournamentJsonObject");
static_assert(sizeof(FShowdownTournamentJsonObject) == 0x000010, "Wrong size on FShowdownTournamentJsonObject");
static_assert(offsetof(FShowdownTournamentJsonObject, Tournaments) == 0x000000, "Member 'FShowdownTournamentJsonObject::Tournaments' has a wrong offset!");

struct FShowdownTournamentSource final
{
public:
	struct FShowdownTournamentJsonObject          Tournament_Info;
	class FString                                 _title;
	class FString                                 _locale;
};
static_assert(alignof(FShowdownTournamentSource) == 0x000008, "Wrong alignment on FShowdownTournamentSource");
static_assert(sizeof(FShowdownTournamentSource) == 0x000030, "Wrong size on FShowdownTournamentSource");
static_assert(offsetof(FShowdownTournamentSource, Tournament_Info) == 0x000000, "Member 'FShowdownTournamentSource::Tournament_Info' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentSource, _title) == 0x000010, "Member 'FShowdownTournamentSource::_title' has a wrong offset!");
static_assert(offsetof(FShowdownTournamentSource, _locale) == 0x000020, "Member 'FShowdownTournamentSource::_locale' has a wrong offset!");

struct FFortShowdownScoringRuleDisplayInfo final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	class FText                                   Description;
	class FText                                   PosterDescription;
	class FText                                   PosterIntervalDescription;
	TSoftObjectPtr<class UTexture2D>              Icon;
	bool                                          bShowScoreToastNotifications;
	uint8                                         Pad_79[0x7];
};
static_assert(alignof(FFortShowdownScoringRuleDisplayInfo) == 0x000008, "Wrong alignment on FFortShowdownScoringRuleDisplayInfo");
static_assert(sizeof(FFortShowdownScoringRuleDisplayInfo) == 0x000080, "Wrong size on FFortShowdownScoringRuleDisplayInfo");
static_assert(offsetof(FFortShowdownScoringRuleDisplayInfo, Name) == 0x000000, "Member 'FFortShowdownScoringRuleDisplayInfo::Name' has a wrong offset!");
static_assert(offsetof(FFortShowdownScoringRuleDisplayInfo, Description) == 0x000008, "Member 'FFortShowdownScoringRuleDisplayInfo::Description' has a wrong offset!");
static_assert(offsetof(FFortShowdownScoringRuleDisplayInfo, PosterDescription) == 0x000020, "Member 'FFortShowdownScoringRuleDisplayInfo::PosterDescription' has a wrong offset!");
static_assert(offsetof(FFortShowdownScoringRuleDisplayInfo, PosterIntervalDescription) == 0x000038, "Member 'FFortShowdownScoringRuleDisplayInfo::PosterIntervalDescription' has a wrong offset!");
static_assert(offsetof(FFortShowdownScoringRuleDisplayInfo, Icon) == 0x000050, "Member 'FFortShowdownScoringRuleDisplayInfo::Icon' has a wrong offset!");
static_assert(offsetof(FFortShowdownScoringRuleDisplayInfo, bShowScoreToastNotifications) == 0x000078, "Member 'FFortShowdownScoringRuleDisplayInfo::bShowScoreToastNotifications' has a wrong offset!");

struct FSubgameScreenSource final
{
public:
	class FString                                 _title;
	class FString                                 __locale;
	struct FSubgameDisplayData                    Creative;
	struct FSubgameDisplayData                    SaveTheWorld;
	struct FSubgameDisplayData                    BattleRoyale;
};
static_assert(alignof(FSubgameScreenSource) == 0x000008, "Wrong alignment on FSubgameScreenSource");
static_assert(sizeof(FSubgameScreenSource) == 0x0001E8, "Wrong size on FSubgameScreenSource");
static_assert(offsetof(FSubgameScreenSource, _title) == 0x000000, "Member 'FSubgameScreenSource::_title' has a wrong offset!");
static_assert(offsetof(FSubgameScreenSource, __locale) == 0x000010, "Member 'FSubgameScreenSource::__locale' has a wrong offset!");
static_assert(offsetof(FSubgameScreenSource, Creative) == 0x000020, "Member 'FSubgameScreenSource::Creative' has a wrong offset!");
static_assert(offsetof(FSubgameScreenSource, SaveTheWorld) == 0x0000B8, "Member 'FSubgameScreenSource::SaveTheWorld' has a wrong offset!");
static_assert(offsetof(FSubgameScreenSource, BattleRoyale) == 0x000150, "Member 'FSubgameScreenSource::BattleRoyale' has a wrong offset!");

struct FCreativeAdJsonObject final
{
public:
	TArray<struct FCreativeAdData>                Ads;
};
static_assert(alignof(FCreativeAdJsonObject) == 0x000008, "Wrong alignment on FCreativeAdJsonObject");
static_assert(sizeof(FCreativeAdJsonObject) == 0x000010, "Wrong size on FCreativeAdJsonObject");
static_assert(offsetof(FCreativeAdJsonObject, Ads) == 0x000000, "Member 'FCreativeAdJsonObject::Ads' has a wrong offset!");

struct FCreativeAdSource final
{
public:
	class FString                                 _title;
	class FString                                 __locale;
	struct FCreativeAdJsonObject                  Ad_Info;
};
static_assert(alignof(FCreativeAdSource) == 0x000008, "Wrong alignment on FCreativeAdSource");
static_assert(sizeof(FCreativeAdSource) == 0x000030, "Wrong size on FCreativeAdSource");
static_assert(offsetof(FCreativeAdSource, _title) == 0x000000, "Member 'FCreativeAdSource::_title' has a wrong offset!");
static_assert(offsetof(FCreativeAdSource, __locale) == 0x000010, "Member 'FCreativeAdSource::__locale' has a wrong offset!");
static_assert(offsetof(FCreativeAdSource, Ad_Info) == 0x000020, "Member 'FCreativeAdSource::Ad_Info' has a wrong offset!");

struct FDynamicBackgroundsSource final
{
public:
	class FString                                 _title;
	class FString                                 __locale;
	class FString                                 LastModified;
	struct FDynamicBackgrounds                    Backgrounds;
};
static_assert(alignof(FDynamicBackgroundsSource) == 0x000008, "Wrong alignment on FDynamicBackgroundsSource");
static_assert(sizeof(FDynamicBackgroundsSource) == 0x000040, "Wrong size on FDynamicBackgroundsSource");
static_assert(offsetof(FDynamicBackgroundsSource, _title) == 0x000000, "Member 'FDynamicBackgroundsSource::_title' has a wrong offset!");
static_assert(offsetof(FDynamicBackgroundsSource, __locale) == 0x000010, "Member 'FDynamicBackgroundsSource::__locale' has a wrong offset!");
static_assert(offsetof(FDynamicBackgroundsSource, LastModified) == 0x000020, "Member 'FDynamicBackgroundsSource::LastModified' has a wrong offset!");
static_assert(offsetof(FDynamicBackgroundsSource, Backgrounds) == 0x000030, "Member 'FDynamicBackgroundsSource::Backgrounds' has a wrong offset!");

struct FCmsJsonMessages final
{
public:
	class FString                                 _title;
	class FString                                 _locale;
	struct FShowdownTournamentSource              TournamentInformation;
	struct FSubgameScreenSource                   SubGameInfo;
	struct FCreativeAdSource                      CreativeAds;
};
static_assert(alignof(FCmsJsonMessages) == 0x000008, "Wrong alignment on FCmsJsonMessages");
static_assert(sizeof(FCmsJsonMessages) == 0x000268, "Wrong size on FCmsJsonMessages");
static_assert(offsetof(FCmsJsonMessages, _title) == 0x000000, "Member 'FCmsJsonMessages::_title' has a wrong offset!");
static_assert(offsetof(FCmsJsonMessages, _locale) == 0x000010, "Member 'FCmsJsonMessages::_locale' has a wrong offset!");
static_assert(offsetof(FCmsJsonMessages, TournamentInformation) == 0x000020, "Member 'FCmsJsonMessages::TournamentInformation' has a wrong offset!");
static_assert(offsetof(FCmsJsonMessages, SubGameInfo) == 0x000050, "Member 'FCmsJsonMessages::SubGameInfo' has a wrong offset!");
static_assert(offsetof(FCmsJsonMessages, CreativeAds) == 0x000238, "Member 'FCmsJsonMessages::CreativeAds' has a wrong offset!");

struct FAthenaShopCarouselItem final
{
public:
	class FText                                   PreviewTitle;
	class FText                                   FullTitle;
	class FString                                 TileImage;
	class FString                                 VideoString;
	class FString                                 OfferId;
	int32                                         LandingPriority;
	EItemShopNavigationAction                     Action;
	bool                                          bHidden;
	uint8                                         Pad_66[0x2];
};
static_assert(alignof(FAthenaShopCarouselItem) == 0x000008, "Wrong alignment on FAthenaShopCarouselItem");
static_assert(sizeof(FAthenaShopCarouselItem) == 0x000068, "Wrong size on FAthenaShopCarouselItem");
static_assert(offsetof(FAthenaShopCarouselItem, PreviewTitle) == 0x000000, "Member 'FAthenaShopCarouselItem::PreviewTitle' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, FullTitle) == 0x000018, "Member 'FAthenaShopCarouselItem::FullTitle' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, TileImage) == 0x000030, "Member 'FAthenaShopCarouselItem::TileImage' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, VideoString) == 0x000040, "Member 'FAthenaShopCarouselItem::VideoString' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, OfferId) == 0x000050, "Member 'FAthenaShopCarouselItem::OfferId' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, LandingPriority) == 0x000060, "Member 'FAthenaShopCarouselItem::LandingPriority' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, Action) == 0x000064, "Member 'FAthenaShopCarouselItem::Action' has a wrong offset!");
static_assert(offsetof(FAthenaShopCarouselItem, bHidden) == 0x000065, "Member 'FAthenaShopCarouselItem::bHidden' has a wrong offset!");

struct FPlatformPurchaseMessaging final
{
public:
	struct FPlatformPurchaseErrorCodeMessages     ErrorCodeMessages;
};
static_assert(alignof(FPlatformPurchaseMessaging) == 0x000008, "Wrong alignment on FPlatformPurchaseMessaging");
static_assert(sizeof(FPlatformPurchaseMessaging) == 0x000010, "Wrong size on FPlatformPurchaseMessaging");
static_assert(offsetof(FPlatformPurchaseMessaging, ErrorCodeMessages) == 0x000000, "Member 'FPlatformPurchaseMessaging::ErrorCodeMessages' has a wrong offset!");

struct FSocialEventsSource final
{
public:
	class FString                                 _title;
	class FString                                 __locale;
	class FString                                 LastModified;
	struct FSocialEventsJsonObject                SocialEvents;
};
static_assert(alignof(FSocialEventsSource) == 0x000008, "Wrong alignment on FSocialEventsSource");
static_assert(sizeof(FSocialEventsSource) == 0x000040, "Wrong size on FSocialEventsSource");
static_assert(offsetof(FSocialEventsSource, _title) == 0x000000, "Member 'FSocialEventsSource::_title' has a wrong offset!");
static_assert(offsetof(FSocialEventsSource, __locale) == 0x000010, "Member 'FSocialEventsSource::__locale' has a wrong offset!");
static_assert(offsetof(FSocialEventsSource, LastModified) == 0x000020, "Member 'FSocialEventsSource::LastModified' has a wrong offset!");
static_assert(offsetof(FSocialEventsSource, SocialEvents) == 0x000030, "Member 'FSocialEventsSource::SocialEvents' has a wrong offset!");

struct alignas(0x08) FFortActivityImagePayload final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FFortActivityImagePayload) == 0x000008, "Wrong alignment on FFortActivityImagePayload");
static_assert(sizeof(FFortActivityImagePayload) == 0x000038, "Wrong size on FFortActivityImagePayload");

struct FFortMissionDetails final
{
public:
	EFortTheaterMapTileType                       TileType;
	uint8                                         Pad_1[0x7];
	class FText                                   TheaterDisplayName;
	class FText                                   MissionName;
	class FText                                   MissionDescription;
	bool                                          bIsGroupContent;
	uint8                                         Pad_51[0x7];
	class UFortMissionGenerator*                  MissionDefinition;
	class FText                                   ZoneName;
	class FText                                   ZoneDescription;
	class FText                                   RegionThemeName;
	TSoftObjectPtr<class USlateBrushAsset>        RegionThemeIcon;
	class FText                                   DifficultyName;
	TArray<struct FFortMissionRewardInfo>         MissionRewards;
	struct FTimespan                              AvailableTime;
	ERatingsEnforcementType                       RatingsEnforcement;
	uint8                                         Pad_101[0x3];
	int32                                         RequiredBaseRating;
	int32                                         RecommendedBaseRating;
	int32                                         MaxBaseRating;
	int32                                         ContentDifficultyLevel;
	bool                                          bIsOnboarding;
	uint8                                         Pad_115[0x3];
	int32                                         LootLevel;
	bool                                          bOverrideConningText;
	uint8                                         Pad_11D[0x3];
	class FText                                   ConningOverrideText;
	class FString                                 TheaterUniqueId;
	class UFortCloudSaveItemDefinition*           AssociatedCloudSaveItemDefinition;
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;
	TArray<class FText>                           Objectives;
};
static_assert(alignof(FFortMissionDetails) == 0x000008, "Wrong alignment on FFortMissionDetails");
static_assert(sizeof(FFortMissionDetails) == 0x000170, "Wrong size on FFortMissionDetails");
static_assert(offsetof(FFortMissionDetails, TileType) == 0x000000, "Member 'FFortMissionDetails::TileType' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, TheaterDisplayName) == 0x000008, "Member 'FFortMissionDetails::TheaterDisplayName' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, MissionName) == 0x000020, "Member 'FFortMissionDetails::MissionName' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, MissionDescription) == 0x000038, "Member 'FFortMissionDetails::MissionDescription' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, bIsGroupContent) == 0x000050, "Member 'FFortMissionDetails::bIsGroupContent' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, MissionDefinition) == 0x000058, "Member 'FFortMissionDetails::MissionDefinition' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, ZoneName) == 0x000060, "Member 'FFortMissionDetails::ZoneName' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, ZoneDescription) == 0x000078, "Member 'FFortMissionDetails::ZoneDescription' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, RegionThemeName) == 0x000090, "Member 'FFortMissionDetails::RegionThemeName' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, RegionThemeIcon) == 0x0000A8, "Member 'FFortMissionDetails::RegionThemeIcon' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, DifficultyName) == 0x0000D0, "Member 'FFortMissionDetails::DifficultyName' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, MissionRewards) == 0x0000E8, "Member 'FFortMissionDetails::MissionRewards' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, AvailableTime) == 0x0000F8, "Member 'FFortMissionDetails::AvailableTime' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, RatingsEnforcement) == 0x000100, "Member 'FFortMissionDetails::RatingsEnforcement' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, RequiredBaseRating) == 0x000104, "Member 'FFortMissionDetails::RequiredBaseRating' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, RecommendedBaseRating) == 0x000108, "Member 'FFortMissionDetails::RecommendedBaseRating' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, MaxBaseRating) == 0x00010C, "Member 'FFortMissionDetails::MaxBaseRating' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, ContentDifficultyLevel) == 0x000110, "Member 'FFortMissionDetails::ContentDifficultyLevel' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, bIsOnboarding) == 0x000114, "Member 'FFortMissionDetails::bIsOnboarding' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, LootLevel) == 0x000118, "Member 'FFortMissionDetails::LootLevel' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, bOverrideConningText) == 0x00011C, "Member 'FFortMissionDetails::bOverrideConningText' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, ConningOverrideText) == 0x000120, "Member 'FFortMissionDetails::ConningOverrideText' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, TheaterUniqueId) == 0x000138, "Member 'FFortMissionDetails::TheaterUniqueId' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, AssociatedCloudSaveItemDefinition) == 0x000148, "Member 'FFortMissionDetails::AssociatedCloudSaveItemDefinition' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, GameplayModifiers) == 0x000150, "Member 'FFortMissionDetails::GameplayModifiers' has a wrong offset!");
static_assert(offsetof(FFortMissionDetails, Objectives) == 0x000160, "Member 'FFortMissionDetails::Objectives' has a wrong offset!");

struct FFortFrontEndFeatureStruct final
{
public:
	EFortFrontEndFeatureState                     CurrentState;
	EFortFrontEndFeatureState                     ForcedState;
	EFortFrontEndFeatureStateReason               ForcedStateReason;
	uint8                                         Pad_3[0x5];
	TMulticastInlineDelegate<void(EFortFrontEndFeature ChangedFeature, EFortFrontEndFeatureState NewState, EFortFrontEndFeatureStateReason Reason)> ChangeDelegate;
};
static_assert(alignof(FFortFrontEndFeatureStruct) == 0x000008, "Wrong alignment on FFortFrontEndFeatureStruct");
static_assert(sizeof(FFortFrontEndFeatureStruct) == 0x000018, "Wrong size on FFortFrontEndFeatureStruct");
static_assert(offsetof(FFortFrontEndFeatureStruct, CurrentState) == 0x000000, "Member 'FFortFrontEndFeatureStruct::CurrentState' has a wrong offset!");
static_assert(offsetof(FFortFrontEndFeatureStruct, ForcedState) == 0x000001, "Member 'FFortFrontEndFeatureStruct::ForcedState' has a wrong offset!");
static_assert(offsetof(FFortFrontEndFeatureStruct, ForcedStateReason) == 0x000002, "Member 'FFortFrontEndFeatureStruct::ForcedStateReason' has a wrong offset!");
static_assert(offsetof(FFortFrontEndFeatureStruct, ChangeDelegate) == 0x000008, "Member 'FFortFrontEndFeatureStruct::ChangeDelegate' has a wrong offset!");

struct FFortBasicMissionInfo final
{
public:
	class FText                                   MissionName;
	uint8                                         Pad_18[0x8];
	struct FFortMultiSizeBrush                    MissionIcons;
	class FText                                   TheaterName;
	class FText                                   DifficultyName;
	class UMediaSource*                           EndOfMissionMediaSource;
	class UMediaSource*                           EndOfMissionMediaSourceStreamed;
	bool                                          bSkipEndOfMissionVideo;
	bool                                          bIsGroupContent;
	uint8                                         Pad_4E2[0xE];
};
static_assert(alignof(FFortBasicMissionInfo) == 0x000010, "Wrong alignment on FFortBasicMissionInfo");
static_assert(sizeof(FFortBasicMissionInfo) == 0x0004F0, "Wrong size on FFortBasicMissionInfo");
static_assert(offsetof(FFortBasicMissionInfo, MissionName) == 0x000000, "Member 'FFortBasicMissionInfo::MissionName' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, MissionIcons) == 0x000020, "Member 'FFortBasicMissionInfo::MissionIcons' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, TheaterName) == 0x0004A0, "Member 'FFortBasicMissionInfo::TheaterName' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, DifficultyName) == 0x0004B8, "Member 'FFortBasicMissionInfo::DifficultyName' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, EndOfMissionMediaSource) == 0x0004D0, "Member 'FFortBasicMissionInfo::EndOfMissionMediaSource' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, EndOfMissionMediaSourceStreamed) == 0x0004D8, "Member 'FFortBasicMissionInfo::EndOfMissionMediaSourceStreamed' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, bSkipEndOfMissionVideo) == 0x0004E0, "Member 'FFortBasicMissionInfo::bSkipEndOfMissionVideo' has a wrong offset!");
static_assert(offsetof(FFortBasicMissionInfo, bIsGroupContent) == 0x0004E1, "Member 'FFortBasicMissionInfo::bIsGroupContent' has a wrong offset!");

struct FFortItemListFilter final
{
public:
	class FString                                 SearchText;
	EFortInventoryFilter                          FilterType;
	bool                                          bInStorageVault;
	bool                                          bIncludeVaultOverflow;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FFortItemListFilter) == 0x000008, "Wrong alignment on FFortItemListFilter");
static_assert(sizeof(FFortItemListFilter) == 0x000018, "Wrong size on FFortItemListFilter");
static_assert(offsetof(FFortItemListFilter, SearchText) == 0x000000, "Member 'FFortItemListFilter::SearchText' has a wrong offset!");
static_assert(offsetof(FFortItemListFilter, FilterType) == 0x000010, "Member 'FFortItemListFilter::FilterType' has a wrong offset!");
static_assert(offsetof(FFortItemListFilter, bInStorageVault) == 0x000011, "Member 'FFortItemListFilter::bInStorageVault' has a wrong offset!");
static_assert(offsetof(FFortItemListFilter, bIncludeVaultOverflow) == 0x000012, "Member 'FFortItemListFilter::bIncludeVaultOverflow' has a wrong offset!");

struct FFortPickerTemporaryWheel final
{
public:
	uint8                                         Pad_0[0x20];
	TArray<struct FFortPickerTemporaryWheelItem>  Items;
};
static_assert(alignof(FFortPickerTemporaryWheel) == 0x000008, "Wrong alignment on FFortPickerTemporaryWheel");
static_assert(sizeof(FFortPickerTemporaryWheel) == 0x000030, "Wrong size on FFortPickerTemporaryWheel");
static_assert(offsetof(FFortPickerTemporaryWheel, Items) == 0x000020, "Member 'FFortPickerTemporaryWheel::Items' has a wrong offset!");

struct FStoreCallout final
{
public:
	struct FFortToastDisplayInfo                  ToastDisplayInfo;
	class FText                                   ItemName;
	class FText                                   ItemSet;
	class FString                                 OfferDisplayAssetPath;
};
static_assert(alignof(FStoreCallout) == 0x000008, "Wrong alignment on FStoreCallout");
static_assert(sizeof(FStoreCallout) == 0x0000A0, "Wrong size on FStoreCallout");
static_assert(offsetof(FStoreCallout, ToastDisplayInfo) == 0x000000, "Member 'FStoreCallout::ToastDisplayInfo' has a wrong offset!");
static_assert(offsetof(FStoreCallout, ItemName) == 0x000060, "Member 'FStoreCallout::ItemName' has a wrong offset!");
static_assert(offsetof(FStoreCallout, ItemSet) == 0x000078, "Member 'FStoreCallout::ItemSet' has a wrong offset!");
static_assert(offsetof(FStoreCallout, OfferDisplayAssetPath) == 0x000090, "Member 'FStoreCallout::OfferDisplayAssetPath' has a wrong offset!");

struct FCard final
{
public:
	int32                                         QuantityReceived;
	uint8                                         Pad_4[0x4];
	class UFortItem*                              Item;
	EPauseType                                    PauseType;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FCard) == 0x000008, "Wrong alignment on FCard");
static_assert(sizeof(FCard) == 0x000018, "Wrong size on FCard");
static_assert(offsetof(FCard, QuantityReceived) == 0x000000, "Member 'FCard::QuantityReceived' has a wrong offset!");
static_assert(offsetof(FCard, Item) == 0x000008, "Member 'FCard::Item' has a wrong offset!");
static_assert(offsetof(FCard, PauseType) == 0x000010, "Member 'FCard::PauseType' has a wrong offset!");

struct FOpenedCardPack final
{
public:
	class UFortCardPackItemDefinition*            CardPackDefinition;
	int32                                         DisplayLevel;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FOpenedCardPack) == 0x000008, "Wrong alignment on FOpenedCardPack");
static_assert(sizeof(FOpenedCardPack) == 0x000010, "Wrong size on FOpenedCardPack");
static_assert(offsetof(FOpenedCardPack, CardPackDefinition) == 0x000000, "Member 'FOpenedCardPack::CardPackDefinition' has a wrong offset!");
static_assert(offsetof(FOpenedCardPack, DisplayLevel) == 0x000008, "Member 'FOpenedCardPack::DisplayLevel' has a wrong offset!");

struct FCoreGamerRankingInfo final
{
public:
	int32                                         Score;
	uint8                                         Pad_4[0x4];
	class FText                                   Name;
	uint8                                         Pad_20[0x8];
};
static_assert(alignof(FCoreGamerRankingInfo) == 0x000008, "Wrong alignment on FCoreGamerRankingInfo");
static_assert(sizeof(FCoreGamerRankingInfo) == 0x000028, "Wrong size on FCoreGamerRankingInfo");
static_assert(offsetof(FCoreGamerRankingInfo, Score) == 0x000000, "Member 'FCoreGamerRankingInfo::Score' has a wrong offset!");
static_assert(offsetof(FCoreGamerRankingInfo, Name) == 0x000008, "Member 'FCoreGamerRankingInfo::Name' has a wrong offset!");

struct FCreativeDeviceSubscription final
{
public:
	int32                                         DestinationDeviceGUID;
	bool                                          bIsEvent;
	uint8                                         Pad_5[0x3];
	class FText                                   SourceSubscriptionDisplayName;
	class FText                                   DestinationDeviceDisplayName;
	class FText                                   DestinationSubscriptionDisplayName;
	struct FVector_NetQuantize10                  ActorLocation;
	TSoftObjectPtr<class AActor>                  ActorPtr;
};
static_assert(alignof(FCreativeDeviceSubscription) == 0x000008, "Wrong alignment on FCreativeDeviceSubscription");
static_assert(sizeof(FCreativeDeviceSubscription) == 0x000090, "Wrong size on FCreativeDeviceSubscription");
static_assert(offsetof(FCreativeDeviceSubscription, DestinationDeviceGUID) == 0x000000, "Member 'FCreativeDeviceSubscription::DestinationDeviceGUID' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceSubscription, bIsEvent) == 0x000004, "Member 'FCreativeDeviceSubscription::bIsEvent' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceSubscription, SourceSubscriptionDisplayName) == 0x000008, "Member 'FCreativeDeviceSubscription::SourceSubscriptionDisplayName' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceSubscription, DestinationDeviceDisplayName) == 0x000020, "Member 'FCreativeDeviceSubscription::DestinationDeviceDisplayName' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceSubscription, DestinationSubscriptionDisplayName) == 0x000038, "Member 'FCreativeDeviceSubscription::DestinationSubscriptionDisplayName' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceSubscription, ActorLocation) == 0x000050, "Member 'FCreativeDeviceSubscription::ActorLocation' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceSubscription, ActorPtr) == 0x000068, "Member 'FCreativeDeviceSubscription::ActorPtr' has a wrong offset!");

struct FCreativeDeviceInfo final
{
public:
	int32                                         DeviceTrackingGUID;
	uint8                                         Pad_4[0x4];
	TSoftObjectPtr<class AActor>                  ActorPtr;
	struct FVector_NetQuantize10                  ActorLocation;
	class FString                                 DisplayName;
	TArray<struct FCreativeDeviceSubscription>    OutgoingEvents;
	TArray<struct FCreativeDeviceSubscription>    CalledFunctions;
	int32                                         NumBoundEvents;
	int32                                         NumBoundFunctions;
};
static_assert(alignof(FCreativeDeviceInfo) == 0x000008, "Wrong alignment on FCreativeDeviceInfo");
static_assert(sizeof(FCreativeDeviceInfo) == 0x000080, "Wrong size on FCreativeDeviceInfo");
static_assert(offsetof(FCreativeDeviceInfo, DeviceTrackingGUID) == 0x000000, "Member 'FCreativeDeviceInfo::DeviceTrackingGUID' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, ActorPtr) == 0x000008, "Member 'FCreativeDeviceInfo::ActorPtr' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, ActorLocation) == 0x000030, "Member 'FCreativeDeviceInfo::ActorLocation' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, DisplayName) == 0x000048, "Member 'FCreativeDeviceInfo::DisplayName' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, OutgoingEvents) == 0x000058, "Member 'FCreativeDeviceInfo::OutgoingEvents' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, CalledFunctions) == 0x000068, "Member 'FCreativeDeviceInfo::CalledFunctions' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, NumBoundEvents) == 0x000078, "Member 'FCreativeDeviceInfo::NumBoundEvents' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceInfo, NumBoundFunctions) == 0x00007C, "Member 'FCreativeDeviceInfo::NumBoundFunctions' has a wrong offset!");

struct FCreativeDeviceCached final
{
public:
	class FText                                   DisplayName;
	struct FVector_NetQuantize10                  ActorLocation;
	TSoftObjectPtr<class AActor>                  ActorPtr;
};
static_assert(alignof(FCreativeDeviceCached) == 0x000008, "Wrong alignment on FCreativeDeviceCached");
static_assert(sizeof(FCreativeDeviceCached) == 0x000058, "Wrong size on FCreativeDeviceCached");
static_assert(offsetof(FCreativeDeviceCached, DisplayName) == 0x000000, "Member 'FCreativeDeviceCached::DisplayName' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceCached, ActorLocation) == 0x000018, "Member 'FCreativeDeviceCached::ActorLocation' has a wrong offset!");
static_assert(offsetof(FCreativeDeviceCached, ActorPtr) == 0x000030, "Member 'FCreativeDeviceCached::ActorPtr' has a wrong offset!");

struct FCachedIslandsGroup final
{
public:
	TArray<class UFortCreativeIslandLink*>        IslandLinks;
	uint8                                         Pad_10[0x18];
};
static_assert(alignof(FCachedIslandsGroup) == 0x000008, "Wrong alignment on FCachedIslandsGroup");
static_assert(sizeof(FCachedIslandsGroup) == 0x000028, "Wrong size on FCachedIslandsGroup");
static_assert(offsetof(FCachedIslandsGroup, IslandLinks) == 0x000000, "Member 'FCachedIslandsGroup::IslandLinks' has a wrong offset!");

struct FStyleButtonReference final
{
public:
	class UCommonButtonBase*                      Button;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FStyleButtonReference) == 0x000008, "Wrong alignment on FStyleButtonReference");
static_assert(sizeof(FStyleButtonReference) == 0x000018, "Wrong size on FStyleButtonReference");
static_assert(offsetof(FStyleButtonReference, Button) == 0x000000, "Member 'FStyleButtonReference::Button' has a wrong offset!");

struct FFortCreativeServerDisplayOption final : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture>                Image;
	struct FLinearColor                           Color;
};
static_assert(alignof(FFortCreativeServerDisplayOption) == 0x000008, "Wrong alignment on FFortCreativeServerDisplayOption");
static_assert(sizeof(FFortCreativeServerDisplayOption) == 0x000040, "Wrong size on FFortCreativeServerDisplayOption");
static_assert(offsetof(FFortCreativeServerDisplayOption, Image) == 0x000008, "Member 'FFortCreativeServerDisplayOption::Image' has a wrong offset!");
static_assert(offsetof(FFortCreativeServerDisplayOption, Color) == 0x000030, "Member 'FFortCreativeServerDisplayOption::Color' has a wrong offset!");

struct FCreativeContentBrowserAddItemDefinitionMessage final
{
public:
	TArray<class UFortItemDefinition*>            ItemDefinitionsToAdd;
};
static_assert(alignof(FCreativeContentBrowserAddItemDefinitionMessage) == 0x000008, "Wrong alignment on FCreativeContentBrowserAddItemDefinitionMessage");
static_assert(sizeof(FCreativeContentBrowserAddItemDefinitionMessage) == 0x000010, "Wrong size on FCreativeContentBrowserAddItemDefinitionMessage");
static_assert(offsetof(FCreativeContentBrowserAddItemDefinitionMessage, ItemDefinitionsToAdd) == 0x000000, "Member 'FCreativeContentBrowserAddItemDefinitionMessage::ItemDefinitionsToAdd' has a wrong offset!");

struct alignas(0x08) FFortLeaderboardRequestIds final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FFortLeaderboardRequestIds) == 0x000008, "Wrong alignment on FFortLeaderboardRequestIds");
static_assert(sizeof(FFortLeaderboardRequestIds) == 0x000020, "Wrong size on FFortLeaderboardRequestIds");

struct FFortStateStyle final
{
public:
	struct FFortMultiSizeBrush                    Brush;
	struct FLinearColor                           PrimaryColor;
	struct FLinearColor                           SecondaryColor;
};
static_assert(alignof(FFortStateStyle) == 0x000010, "Wrong alignment on FFortStateStyle");
static_assert(sizeof(FFortStateStyle) == 0x0004A0, "Wrong size on FFortStateStyle");
static_assert(offsetof(FFortStateStyle, Brush) == 0x000000, "Member 'FFortStateStyle::Brush' has a wrong offset!");
static_assert(offsetof(FFortStateStyle, PrimaryColor) == 0x000480, "Member 'FFortStateStyle::PrimaryColor' has a wrong offset!");
static_assert(offsetof(FFortStateStyle, SecondaryColor) == 0x000490, "Member 'FFortStateStyle::SecondaryColor' has a wrong offset!");

struct FItemListCategoryArray final
{
public:
	TArray<struct FFortItemEntry>                 ItemList;
	class FText                                   CategoryTitle;
};
static_assert(alignof(FItemListCategoryArray) == 0x000008, "Wrong alignment on FItemListCategoryArray");
static_assert(sizeof(FItemListCategoryArray) == 0x000028, "Wrong size on FItemListCategoryArray");
static_assert(offsetof(FItemListCategoryArray, ItemList) == 0x000000, "Member 'FItemListCategoryArray::ItemList' has a wrong offset!");
static_assert(offsetof(FItemListCategoryArray, CategoryTitle) == 0x000010, "Member 'FItemListCategoryArray::CategoryTitle' has a wrong offset!");

struct FFortCreativeItemListCategoryData final : public FTableRowBase
{
public:
	ECreativeItemCategory                         category;
	EFortItemCardSize                             CardSize;
	bool                                          bCollapseCardBorderPad;
	uint8                                         Pad_B[0x5];
};
static_assert(alignof(FFortCreativeItemListCategoryData) == 0x000008, "Wrong alignment on FFortCreativeItemListCategoryData");
static_assert(sizeof(FFortCreativeItemListCategoryData) == 0x000010, "Wrong size on FFortCreativeItemListCategoryData");
static_assert(offsetof(FFortCreativeItemListCategoryData, category) == 0x000008, "Member 'FFortCreativeItemListCategoryData::category' has a wrong offset!");
static_assert(offsetof(FFortCreativeItemListCategoryData, CardSize) == 0x000009, "Member 'FFortCreativeItemListCategoryData::CardSize' has a wrong offset!");
static_assert(offsetof(FFortCreativeItemListCategoryData, bCollapseCardBorderPad) == 0x00000A, "Member 'FFortCreativeItemListCategoryData::bCollapseCardBorderPad' has a wrong offset!");

struct FFortItemListOptionBucket final
{
public:
	uint8                                         Pad_0[0x8];
	int32                                         ItemIndex;
	uint8                                         Pad_C[0x4];
	TArray<class UFortItemListOptionProxy*>       ItemOptionData;
};
static_assert(alignof(FFortItemListOptionBucket) == 0x000008, "Wrong alignment on FFortItemListOptionBucket");
static_assert(sizeof(FFortItemListOptionBucket) == 0x000020, "Wrong size on FFortItemListOptionBucket");
static_assert(offsetof(FFortItemListOptionBucket, ItemIndex) == 0x000008, "Member 'FFortItemListOptionBucket::ItemIndex' has a wrong offset!");
static_assert(offsetof(FFortItemListOptionBucket, ItemOptionData) == 0x000010, "Member 'FFortItemListOptionBucket::ItemOptionData' has a wrong offset!");

struct FFortWeightedObject final
{
public:
	class UObject*                                Object;
	int32                                         Weight;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FFortWeightedObject) == 0x000008, "Wrong alignment on FFortWeightedObject");
static_assert(sizeof(FFortWeightedObject) == 0x000010, "Wrong size on FFortWeightedObject");
static_assert(offsetof(FFortWeightedObject, Object) == 0x000000, "Member 'FFortWeightedObject::Object' has a wrong offset!");
static_assert(offsetof(FFortWeightedObject, Weight) == 0x000008, "Member 'FFortWeightedObject::Weight' has a wrong offset!");

struct FContextPosition final
{
public:
	EContextPositionPlatform                      Platform;
	uint8                                         Pad_1[0x7];
	struct FVector2D                              Position;
	EHorizontalAlignment                          HorizontalAlignment;
	EVerticalAlignment                            VerticalAlignment;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FContextPosition) == 0x000008, "Wrong alignment on FContextPosition");
static_assert(sizeof(FContextPosition) == 0x000020, "Wrong size on FContextPosition");
static_assert(offsetof(FContextPosition, Platform) == 0x000000, "Member 'FContextPosition::Platform' has a wrong offset!");
static_assert(offsetof(FContextPosition, Position) == 0x000008, "Member 'FContextPosition::Position' has a wrong offset!");
static_assert(offsetof(FContextPosition, HorizontalAlignment) == 0x000018, "Member 'FContextPosition::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(FContextPosition, VerticalAlignment) == 0x000019, "Member 'FContextPosition::VerticalAlignment' has a wrong offset!");

struct FDirectProgressUpdateData final
{
public:
	float                                         ProgressPercent;
	uint8                                         Pad_4[0x4];
	class UFortItemDefinition*                    ItemDef;
};
static_assert(alignof(FDirectProgressUpdateData) == 0x000008, "Wrong alignment on FDirectProgressUpdateData");
static_assert(sizeof(FDirectProgressUpdateData) == 0x000010, "Wrong size on FDirectProgressUpdateData");
static_assert(offsetof(FDirectProgressUpdateData, ProgressPercent) == 0x000000, "Member 'FDirectProgressUpdateData::ProgressPercent' has a wrong offset!");
static_assert(offsetof(FDirectProgressUpdateData, ItemDef) == 0x000008, "Member 'FDirectProgressUpdateData::ItemDef' has a wrong offset!");

struct alignas(0x08) FMeasuredText final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FMeasuredText) == 0x000008, "Wrong alignment on FMeasuredText");
static_assert(sizeof(FMeasuredText) == 0x000030, "Wrong size on FMeasuredText");

#pragma pack(push, 0x1)
struct alignas(0x10) FRadialOptionData
{
public:
	class FText                                   Label;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            Brush;
	TSoftObjectPtr<class UTexture2D>              SoftIcon;
};
#pragma pack(pop)
static_assert(alignof(FRadialOptionData) == 0x000010, "Wrong alignment on FRadialOptionData");
static_assert(sizeof(FRadialOptionData) == 0x000110, "Wrong size on FRadialOptionData");
static_assert(offsetof(FRadialOptionData, Label) == 0x000000, "Member 'FRadialOptionData::Label' has a wrong offset!");
static_assert(offsetof(FRadialOptionData, Brush) == 0x000020, "Member 'FRadialOptionData::Brush' has a wrong offset!");
static_assert(offsetof(FRadialOptionData, SoftIcon) == 0x0000E0, "Member 'FRadialOptionData::SoftIcon' has a wrong offset!");

struct FBuildingCategoryOptionData final : public FRadialOptionData
{
public:
	EFortBuildingType                             BuildingType;
	uint8                                         Pad_109[0x7];
};
static_assert(alignof(FBuildingCategoryOptionData) == 0x000010, "Wrong alignment on FBuildingCategoryOptionData");
static_assert(sizeof(FBuildingCategoryOptionData) == 0x000110, "Wrong size on FBuildingCategoryOptionData");
static_assert(offsetof(FBuildingCategoryOptionData, BuildingType) == 0x000108, "Member 'FBuildingCategoryOptionData::BuildingType' has a wrong offset!");

struct FBuildingOptionData final : public FRadialOptionData
{
public:
	class FString                                 ClassSuffix;
	bool                                          ClassMirrored;
	uint8                                         Pad_119[0x7];
};
static_assert(alignof(FBuildingOptionData) == 0x000010, "Wrong alignment on FBuildingOptionData");
static_assert(sizeof(FBuildingOptionData) == 0x000120, "Wrong size on FBuildingOptionData");
static_assert(offsetof(FBuildingOptionData, ClassSuffix) == 0x000108, "Member 'FBuildingOptionData::ClassSuffix' has a wrong offset!");
static_assert(offsetof(FBuildingOptionData, ClassMirrored) == 0x000118, "Member 'FBuildingOptionData::ClassMirrored' has a wrong offset!");

struct FItemCategoryOptionData final : public FRadialOptionData
{
public:
	class FString                                 TemplatePrefix;
	EBuildingAttachmentType                       BuildingAttachmentType;
	uint8                                         Pad_119[0x7];
};
static_assert(alignof(FItemCategoryOptionData) == 0x000010, "Wrong alignment on FItemCategoryOptionData");
static_assert(sizeof(FItemCategoryOptionData) == 0x000120, "Wrong size on FItemCategoryOptionData");
static_assert(offsetof(FItemCategoryOptionData, TemplatePrefix) == 0x000108, "Member 'FItemCategoryOptionData::TemplatePrefix' has a wrong offset!");
static_assert(offsetof(FItemCategoryOptionData, BuildingAttachmentType) == 0x000118, "Member 'FItemCategoryOptionData::BuildingAttachmentType' has a wrong offset!");

struct FChatOptionData final : public FRadialOptionData
{
public:
	class FText                                   ChatText;
};
static_assert(alignof(FChatOptionData) == 0x000010, "Wrong alignment on FChatOptionData");
static_assert(sizeof(FChatOptionData) == 0x000120, "Wrong size on FChatOptionData");
static_assert(offsetof(FChatOptionData, ChatText) == 0x000108, "Member 'FChatOptionData::ChatText' has a wrong offset!");

struct FSquadChatOptionData final : public FRadialOptionData
{
public:
	class FText                                   ChatText;
};
static_assert(alignof(FSquadChatOptionData) == 0x000010, "Wrong alignment on FSquadChatOptionData");
static_assert(sizeof(FSquadChatOptionData) == 0x000120, "Wrong size on FSquadChatOptionData");
static_assert(offsetof(FSquadChatOptionData, ChatText) == 0x000108, "Member 'FSquadChatOptionData::ChatText' has a wrong offset!");

struct FMapNoteOptionData final : public FRadialOptionData
{
public:
	class FText                                   MapNoteText;
};
static_assert(alignof(FMapNoteOptionData) == 0x000010, "Wrong alignment on FMapNoteOptionData");
static_assert(sizeof(FMapNoteOptionData) == 0x000120, "Wrong size on FMapNoteOptionData");
static_assert(offsetof(FMapNoteOptionData, MapNoteText) == 0x000108, "Member 'FMapNoteOptionData::MapNoteText' has a wrong offset!");

struct FEmoteOptionData final : public FRadialOptionData
{
public:
	class FName                                   EmoteCommand;
	uint8                                         Pad_10C[0x4];
};
static_assert(alignof(FEmoteOptionData) == 0x000010, "Wrong alignment on FEmoteOptionData");
static_assert(sizeof(FEmoteOptionData) == 0x000110, "Wrong size on FEmoteOptionData");
static_assert(offsetof(FEmoteOptionData, EmoteCommand) == 0x000108, "Member 'FEmoteOptionData::EmoteCommand' has a wrong offset!");

struct FItemDefOptionData final : public FRadialOptionData
{
public:
	class UObject*                                ItemDef;
};
static_assert(alignof(FItemDefOptionData) == 0x000010, "Wrong alignment on FItemDefOptionData");
static_assert(sizeof(FItemDefOptionData) == 0x000110, "Wrong size on FItemDefOptionData");
static_assert(offsetof(FItemDefOptionData, ItemDef) == 0x000108, "Member 'FItemDefOptionData::ItemDef' has a wrong offset!");

struct FSquadQuickChatOptionData final : public FRadialOptionData
{
public:
	struct FAthenaQuickChatActiveEntry            ChatEntry;
	bool                                          bEnabled;
	uint8                                         Pad_11D[0x3];
};
static_assert(alignof(FSquadQuickChatOptionData) == 0x000010, "Wrong alignment on FSquadQuickChatOptionData");
static_assert(sizeof(FSquadQuickChatOptionData) == 0x000120, "Wrong size on FSquadQuickChatOptionData");
static_assert(offsetof(FSquadQuickChatOptionData, ChatEntry) == 0x000108, "Member 'FSquadQuickChatOptionData::ChatEntry' has a wrong offset!");
static_assert(offsetof(FSquadQuickChatOptionData, bEnabled) == 0x00011C, "Member 'FSquadQuickChatOptionData::bEnabled' has a wrong offset!");

struct FFortRichTextStyleData final : public FTableRowBase
{
public:
	uint8                                         Pad_8[0x8];
	struct FTextBlockStyle                        TextStyle;
	bool                                          bHyperlinkStyle;
	uint8                                         Pad_321[0xF];
};
static_assert(alignof(FFortRichTextStyleData) == 0x000010, "Wrong alignment on FFortRichTextStyleData");
static_assert(sizeof(FFortRichTextStyleData) == 0x000330, "Wrong size on FFortRichTextStyleData");
static_assert(offsetof(FFortRichTextStyleData, TextStyle) == 0x000010, "Member 'FFortRichTextStyleData::TextStyle' has a wrong offset!");
static_assert(offsetof(FFortRichTextStyleData, bHyperlinkStyle) == 0x000320, "Member 'FFortRichTextStyleData::bHyperlinkStyle' has a wrong offset!");

struct FPotentialSpectatorTarget final
{
public:
	int32                                         Rank;
	TWeakObjectPtr<class AFortPlayerStateAthena>  PlayerState;
	bool                                          bCurrentViewTarget;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FPotentialSpectatorTarget) == 0x000004, "Wrong alignment on FPotentialSpectatorTarget");
static_assert(sizeof(FPotentialSpectatorTarget) == 0x000010, "Wrong size on FPotentialSpectatorTarget");
static_assert(offsetof(FPotentialSpectatorTarget, Rank) == 0x000000, "Member 'FPotentialSpectatorTarget::Rank' has a wrong offset!");
static_assert(offsetof(FPotentialSpectatorTarget, PlayerState) == 0x000004, "Member 'FPotentialSpectatorTarget::PlayerState' has a wrong offset!");
static_assert(offsetof(FPotentialSpectatorTarget, bCurrentViewTarget) == 0x00000C, "Member 'FPotentialSpectatorTarget::bCurrentViewTarget' has a wrong offset!");

struct FStandaloneItemShopTabInfo final
{
public:
	class FText                                   TabTitle;
	class FName                                   TabNameID;
	uint8                                         Pad_1C[0x4];
	class UObject*                                TabIcon;
	class UCommonActivatableWidget*               TabWidget;
};
static_assert(alignof(FStandaloneItemShopTabInfo) == 0x000008, "Wrong alignment on FStandaloneItemShopTabInfo");
static_assert(sizeof(FStandaloneItemShopTabInfo) == 0x000030, "Wrong size on FStandaloneItemShopTabInfo");
static_assert(offsetof(FStandaloneItemShopTabInfo, TabTitle) == 0x000000, "Member 'FStandaloneItemShopTabInfo::TabTitle' has a wrong offset!");
static_assert(offsetof(FStandaloneItemShopTabInfo, TabNameID) == 0x000018, "Member 'FStandaloneItemShopTabInfo::TabNameID' has a wrong offset!");
static_assert(offsetof(FStandaloneItemShopTabInfo, TabIcon) == 0x000020, "Member 'FStandaloneItemShopTabInfo::TabIcon' has a wrong offset!");
static_assert(offsetof(FStandaloneItemShopTabInfo, TabWidget) == 0x000028, "Member 'FStandaloneItemShopTabInfo::TabWidget' has a wrong offset!");

struct FStateWidgetEntry final
{
public:
	TSoftClassPtr<class UClass>                   Class;
	EFortNamedBundle                              Bundle;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FStateWidgetEntry) == 0x000008, "Wrong alignment on FStateWidgetEntry");
static_assert(sizeof(FStateWidgetEntry) == 0x000030, "Wrong size on FStateWidgetEntry");
static_assert(offsetof(FStateWidgetEntry, Class) == 0x000000, "Member 'FStateWidgetEntry::Class' has a wrong offset!");
static_assert(offsetof(FStateWidgetEntry, Bundle) == 0x000028, "Member 'FStateWidgetEntry::Bundle' has a wrong offset!");

struct FUINavigationEntry final
{
public:
	struct FUINavigationData                      Data;
	TDelegate<void(const struct FUINavigationData& Data)> NavigateToDelegate;
	TDelegate<void(const struct FUINavigationData& Data)> NavigateFromDelegate;
};
static_assert(alignof(FUINavigationEntry) == 0x000008, "Wrong alignment on FUINavigationEntry");
static_assert(sizeof(FUINavigationEntry) == 0x000040, "Wrong size on FUINavigationEntry");
static_assert(offsetof(FUINavigationEntry, Data) == 0x000000, "Member 'FUINavigationEntry::Data' has a wrong offset!");
static_assert(offsetof(FUINavigationEntry, NavigateToDelegate) == 0x000028, "Member 'FUINavigationEntry::NavigateToDelegate' has a wrong offset!");
static_assert(offsetof(FUINavigationEntry, NavigateFromDelegate) == 0x000034, "Member 'FUINavigationEntry::NavigateFromDelegate' has a wrong offset!");

struct FVaultVariantOverrideOption final
{
public:
	struct FGameplayTag                           VariantChannelOverride;
	struct FGameplayTag                           VariantTagOverride;
	class FString                                 CustomDataPayload;
	class UFortItemDefinition*                    OptionalItemVariantIsUsedFor;
};
static_assert(alignof(FVaultVariantOverrideOption) == 0x000008, "Wrong alignment on FVaultVariantOverrideOption");
static_assert(sizeof(FVaultVariantOverrideOption) == 0x000020, "Wrong size on FVaultVariantOverrideOption");
static_assert(offsetof(FVaultVariantOverrideOption, VariantChannelOverride) == 0x000000, "Member 'FVaultVariantOverrideOption::VariantChannelOverride' has a wrong offset!");
static_assert(offsetof(FVaultVariantOverrideOption, VariantTagOverride) == 0x000004, "Member 'FVaultVariantOverrideOption::VariantTagOverride' has a wrong offset!");
static_assert(offsetof(FVaultVariantOverrideOption, CustomDataPayload) == 0x000008, "Member 'FVaultVariantOverrideOption::CustomDataPayload' has a wrong offset!");
static_assert(offsetof(FVaultVariantOverrideOption, OptionalItemVariantIsUsedFor) == 0x000018, "Member 'FVaultVariantOverrideOption::OptionalItemVariantIsUsedFor' has a wrong offset!");

struct FItemPreviewSettings final
{
public:
	class UFortAccountItemDefinition*             ItemToView;
	int32                                         SubslotIndex;
	uint8                                         Pad_C[0x4];
	struct FGameplayTagContainer                  PreviewExcludedTags;
	int32                                         ItemVariantPreviewIndex;
	uint8                                         Pad_34[0x4C];
	bool                                          bHasEtherealBackground;
	uint8                                         Pad_81[0xF];
	TArray<struct FVaultVariantOverrideOption>    VariantOverrides;
	uint8                                         Pad_A0[0x8];
};
static_assert(alignof(FItemPreviewSettings) == 0x000008, "Wrong alignment on FItemPreviewSettings");
static_assert(sizeof(FItemPreviewSettings) == 0x0000A8, "Wrong size on FItemPreviewSettings");
static_assert(offsetof(FItemPreviewSettings, ItemToView) == 0x000000, "Member 'FItemPreviewSettings::ItemToView' has a wrong offset!");
static_assert(offsetof(FItemPreviewSettings, SubslotIndex) == 0x000008, "Member 'FItemPreviewSettings::SubslotIndex' has a wrong offset!");
static_assert(offsetof(FItemPreviewSettings, PreviewExcludedTags) == 0x000010, "Member 'FItemPreviewSettings::PreviewExcludedTags' has a wrong offset!");
static_assert(offsetof(FItemPreviewSettings, ItemVariantPreviewIndex) == 0x000030, "Member 'FItemPreviewSettings::ItemVariantPreviewIndex' has a wrong offset!");
static_assert(offsetof(FItemPreviewSettings, bHasEtherealBackground) == 0x000080, "Member 'FItemPreviewSettings::bHasEtherealBackground' has a wrong offset!");
static_assert(offsetof(FItemPreviewSettings, VariantOverrides) == 0x000090, "Member 'FItemPreviewSettings::VariantOverrides' has a wrong offset!");

struct FSceneTransitionOptions final
{
public:
	ESceneTransitionType                          TRANSITION;
	bool                                          bKeepInputRotation;
};
static_assert(alignof(FSceneTransitionOptions) == 0x000001, "Wrong alignment on FSceneTransitionOptions");
static_assert(sizeof(FSceneTransitionOptions) == 0x000002, "Wrong size on FSceneTransitionOptions");
static_assert(offsetof(FSceneTransitionOptions, TRANSITION) == 0x000000, "Member 'FSceneTransitionOptions::TRANSITION' has a wrong offset!");
static_assert(offsetof(FSceneTransitionOptions, bKeepInputRotation) == 0x000001, "Member 'FSceneTransitionOptions::bKeepInputRotation' has a wrong offset!");

struct FCachedComponentMaterials final
{
public:
	uint8                                         Pad_0[0x8];
	TArray<class UMaterialInterface*>             OriginalMaterials;
};
static_assert(alignof(FCachedComponentMaterials) == 0x000008, "Wrong alignment on FCachedComponentMaterials");
static_assert(sizeof(FCachedComponentMaterials) == 0x000018, "Wrong size on FCachedComponentMaterials");
static_assert(offsetof(FCachedComponentMaterials, OriginalMaterials) == 0x000008, "Member 'FCachedComponentMaterials::OriginalMaterials' has a wrong offset!");

struct FPlatformPrefixIcon final
{
public:
	class FString                                 Platform;
	class UTexture2D*                             PrefixIcon;
};
static_assert(alignof(FPlatformPrefixIcon) == 0x000008, "Wrong alignment on FPlatformPrefixIcon");
static_assert(sizeof(FPlatformPrefixIcon) == 0x000018, "Wrong size on FPlatformPrefixIcon");
static_assert(offsetof(FPlatformPrefixIcon, Platform) == 0x000000, "Member 'FPlatformPrefixIcon::Platform' has a wrong offset!");
static_assert(offsetof(FPlatformPrefixIcon, PrefixIcon) == 0x000010, "Member 'FPlatformPrefixIcon::PrefixIcon' has a wrong offset!");

struct FPlatformPrefixIconList final
{
public:
	TArray<struct FPlatformPrefixIcon>            PlatformPrefixIcons;
};
static_assert(alignof(FPlatformPrefixIconList) == 0x000008, "Wrong alignment on FPlatformPrefixIconList");
static_assert(sizeof(FPlatformPrefixIconList) == 0x000010, "Wrong size on FPlatformPrefixIconList");
static_assert(offsetof(FPlatformPrefixIconList, PlatformPrefixIcons) == 0x000000, "Member 'FPlatformPrefixIconList::PlatformPrefixIcons' has a wrong offset!");

struct FOptionsReleaseInfo final
{
public:
	ESettingType                                  SettingType;
	uint8                                         Pad_1[0x3];
	int32                                         ReleaseVersion;
};
static_assert(alignof(FOptionsReleaseInfo) == 0x000004, "Wrong alignment on FOptionsReleaseInfo");
static_assert(sizeof(FOptionsReleaseInfo) == 0x000008, "Wrong size on FOptionsReleaseInfo");
static_assert(offsetof(FOptionsReleaseInfo, SettingType) == 0x000000, "Member 'FOptionsReleaseInfo::SettingType' has a wrong offset!");
static_assert(offsetof(FOptionsReleaseInfo, ReleaseVersion) == 0x000004, "Member 'FOptionsReleaseInfo::ReleaseVersion' has a wrong offset!");

struct FRarityArray final
{
public:
	TArray<class UFortItemDefinition*>            Items;
};
static_assert(alignof(FRarityArray) == 0x000008, "Wrong alignment on FRarityArray");
static_assert(sizeof(FRarityArray) == 0x000010, "Wrong size on FRarityArray");
static_assert(offsetof(FRarityArray, Items) == 0x000000, "Member 'FRarityArray::Items' has a wrong offset!");

struct FFortActionBeingUnbound final
{
public:
	class FName                                   ActionName;
	int32                                         InputIndex;
};
static_assert(alignof(FFortActionBeingUnbound) == 0x000004, "Wrong alignment on FFortActionBeingUnbound");
static_assert(sizeof(FFortActionBeingUnbound) == 0x000008, "Wrong size on FFortActionBeingUnbound");
static_assert(offsetof(FFortActionBeingUnbound, ActionName) == 0x000000, "Member 'FFortActionBeingUnbound::ActionName' has a wrong offset!");
static_assert(offsetof(FFortActionBeingUnbound, InputIndex) == 0x000004, "Member 'FFortActionBeingUnbound::InputIndex' has a wrong offset!");

struct FAthenaSpatialCustomizationCategoryGroup final
{
public:
	TArray<class UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList;
};
static_assert(alignof(FAthenaSpatialCustomizationCategoryGroup) == 0x000008, "Wrong alignment on FAthenaSpatialCustomizationCategoryGroup");
static_assert(sizeof(FAthenaSpatialCustomizationCategoryGroup) == 0x000010, "Wrong size on FAthenaSpatialCustomizationCategoryGroup");
static_assert(offsetof(FAthenaSpatialCustomizationCategoryGroup, CategoryEntryList) == 0x000000, "Member 'FAthenaSpatialCustomizationCategoryGroup::CategoryEntryList' has a wrong offset!");

struct FSpatialCustomizationCategoryStateData final
{
public:
	ESpatialCustomizationCategoryState            State;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           Color;
	uint8                                         Pad_14[0x4];
	class FText                                   CategorySelectionHeaderText;
};
static_assert(alignof(FSpatialCustomizationCategoryStateData) == 0x000008, "Wrong alignment on FSpatialCustomizationCategoryStateData");
static_assert(sizeof(FSpatialCustomizationCategoryStateData) == 0x000030, "Wrong size on FSpatialCustomizationCategoryStateData");
static_assert(offsetof(FSpatialCustomizationCategoryStateData, State) == 0x000000, "Member 'FSpatialCustomizationCategoryStateData::State' has a wrong offset!");
static_assert(offsetof(FSpatialCustomizationCategoryStateData, Color) == 0x000004, "Member 'FSpatialCustomizationCategoryStateData::Color' has a wrong offset!");
static_assert(offsetof(FSpatialCustomizationCategoryStateData, CategorySelectionHeaderText) == 0x000018, "Member 'FSpatialCustomizationCategoryStateData::CategorySelectionHeaderText' has a wrong offset!");

struct FOfferPopUpData final : public FTableRowBase
{
public:
	class FText                                   FormatedText;
};
static_assert(alignof(FOfferPopUpData) == 0x000008, "Wrong alignment on FOfferPopUpData");
static_assert(sizeof(FOfferPopUpData) == 0x000020, "Wrong size on FOfferPopUpData");
static_assert(offsetof(FOfferPopUpData, FormatedText) == 0x000008, "Member 'FOfferPopUpData::FormatedText' has a wrong offset!");

struct FFortPhoenixSeasonDisplayInfoMapRow final : public FTableRowBase
{
public:
	class FString                                 EventFlagName;
	class UFortPhoenixSeasonDisplayInfo*          DisplayInfo;
};
static_assert(alignof(FFortPhoenixSeasonDisplayInfoMapRow) == 0x000008, "Wrong alignment on FFortPhoenixSeasonDisplayInfoMapRow");
static_assert(sizeof(FFortPhoenixSeasonDisplayInfoMapRow) == 0x000020, "Wrong size on FFortPhoenixSeasonDisplayInfoMapRow");
static_assert(offsetof(FFortPhoenixSeasonDisplayInfoMapRow, EventFlagName) == 0x000008, "Member 'FFortPhoenixSeasonDisplayInfoMapRow::EventFlagName' has a wrong offset!");
static_assert(offsetof(FFortPhoenixSeasonDisplayInfoMapRow, DisplayInfo) == 0x000018, "Member 'FFortPhoenixSeasonDisplayInfoMapRow::DisplayInfo' has a wrong offset!");

struct FFortPhoenixLevelProgressionRewards final
{
public:
	int32                                         NextRewardLevel;
	struct FFortItemQuantityPair                  NextReward;
	int32                                         NextMajorRewardLevel;
	struct FFortItemQuantityPair                  NextMajorReward;
};
static_assert(alignof(FFortPhoenixLevelProgressionRewards) == 0x000004, "Wrong alignment on FFortPhoenixLevelProgressionRewards");
static_assert(sizeof(FFortPhoenixLevelProgressionRewards) == 0x000020, "Wrong size on FFortPhoenixLevelProgressionRewards");
static_assert(offsetof(FFortPhoenixLevelProgressionRewards, NextRewardLevel) == 0x000000, "Member 'FFortPhoenixLevelProgressionRewards::NextRewardLevel' has a wrong offset!");
static_assert(offsetof(FFortPhoenixLevelProgressionRewards, NextReward) == 0x000004, "Member 'FFortPhoenixLevelProgressionRewards::NextReward' has a wrong offset!");
static_assert(offsetof(FFortPhoenixLevelProgressionRewards, NextMajorRewardLevel) == 0x000010, "Member 'FFortPhoenixLevelProgressionRewards::NextMajorRewardLevel' has a wrong offset!");
static_assert(offsetof(FFortPhoenixLevelProgressionRewards, NextMajorReward) == 0x000014, "Member 'FFortPhoenixLevelProgressionRewards::NextMajorReward' has a wrong offset!");

struct FTagStateWidgetEntry final
{
public:
	TSoftClassPtr<class UClass>                   Class;
	EFortNamedBundle                              Bundle;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FTagStateWidgetEntry) == 0x000008, "Wrong alignment on FTagStateWidgetEntry");
static_assert(sizeof(FTagStateWidgetEntry) == 0x000030, "Wrong size on FTagStateWidgetEntry");
static_assert(offsetof(FTagStateWidgetEntry, Class) == 0x000000, "Member 'FTagStateWidgetEntry::Class' has a wrong offset!");
static_assert(offsetof(FTagStateWidgetEntry, Bundle) == 0x000028, "Member 'FTagStateWidgetEntry::Bundle' has a wrong offset!");

struct FNotificationWidgetClass final
{
public:
	TSubclassOf<class UFortNotificationEntry>     NotificationWidgetClass;
	int32                                         InitialPoolSize;
	bool                                          bCanIncreasePoolSizeAtRunTime;
	uint8                                         Pad_D[0x3];
	TArray<class UFortNotificationEntry*>         WidgetPool;
};
static_assert(alignof(FNotificationWidgetClass) == 0x000008, "Wrong alignment on FNotificationWidgetClass");
static_assert(sizeof(FNotificationWidgetClass) == 0x000020, "Wrong size on FNotificationWidgetClass");
static_assert(offsetof(FNotificationWidgetClass, NotificationWidgetClass) == 0x000000, "Member 'FNotificationWidgetClass::NotificationWidgetClass' has a wrong offset!");
static_assert(offsetof(FNotificationWidgetClass, InitialPoolSize) == 0x000008, "Member 'FNotificationWidgetClass::InitialPoolSize' has a wrong offset!");
static_assert(offsetof(FNotificationWidgetClass, bCanIncreasePoolSizeAtRunTime) == 0x00000C, "Member 'FNotificationWidgetClass::bCanIncreasePoolSizeAtRunTime' has a wrong offset!");
static_assert(offsetof(FNotificationWidgetClass, WidgetPool) == 0x000010, "Member 'FNotificationWidgetClass::WidgetPool' has a wrong offset!");

struct FPickupStreamEntry final
{
public:
	class UUserWidget*                            PickupWidget;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FPickupStreamEntry) == 0x000008, "Wrong alignment on FPickupStreamEntry");
static_assert(sizeof(FPickupStreamEntry) == 0x000018, "Wrong size on FPickupStreamEntry");
static_assert(offsetof(FPickupStreamEntry, PickupWidget) == 0x000000, "Member 'FPickupStreamEntry::PickupWidget' has a wrong offset!");

struct FFortSwipeDetector final
{
public:
	struct FVector2D                              SwipeThreshold;
	uint8                                         Pad_10[0x80];
};
static_assert(alignof(FFortSwipeDetector) == 0x000008, "Wrong alignment on FFortSwipeDetector");
static_assert(sizeof(FFortSwipeDetector) == 0x000090, "Wrong size on FFortSwipeDetector");
static_assert(offsetof(FFortSwipeDetector, SwipeThreshold) == 0x000000, "Member 'FFortSwipeDetector::SwipeThreshold' has a wrong offset!");

struct alignas(0x04) FAthenaRewardTracker final
{
public:
	uint8                                         Pad_0[0x14];
};
static_assert(alignof(FAthenaRewardTracker) == 0x000004, "Wrong alignment on FAthenaRewardTracker");
static_assert(sizeof(FAthenaRewardTracker) == 0x000014, "Wrong size on FAthenaRewardTracker");

struct FItemPresentationRestrictionData final
{
public:
	class FText                                   HeaderText;
	TSoftObjectPtr<class UObject>                 Icon;
};
static_assert(alignof(FItemPresentationRestrictionData) == 0x000008, "Wrong alignment on FItemPresentationRestrictionData");
static_assert(sizeof(FItemPresentationRestrictionData) == 0x000040, "Wrong size on FItemPresentationRestrictionData");
static_assert(offsetof(FItemPresentationRestrictionData, HeaderText) == 0x000000, "Member 'FItemPresentationRestrictionData::HeaderText' has a wrong offset!");
static_assert(offsetof(FItemPresentationRestrictionData, Icon) == 0x000018, "Member 'FItemPresentationRestrictionData::Icon' has a wrong offset!");

struct FCurrencyDataWithGiftBox final
{
public:
	TArray<struct FCurrencyData>                  GiftBoxCurrencyData;
};
static_assert(alignof(FCurrencyDataWithGiftBox) == 0x000008, "Wrong alignment on FCurrencyDataWithGiftBox");
static_assert(sizeof(FCurrencyDataWithGiftBox) == 0x000010, "Wrong size on FCurrencyDataWithGiftBox");
static_assert(offsetof(FCurrencyDataWithGiftBox, GiftBoxCurrencyData) == 0x000000, "Member 'FCurrencyDataWithGiftBox::GiftBoxCurrencyData' has a wrong offset!");

struct alignas(0x10) FFortItemFilterDefinition final
{
public:
	TArray<EFortItemType>                         ItemTypeFilters;
	uint8                                         Pad_10[0x40];
	bool                                          bRequiresItemDetails;
	uint8                                         Pad_51[0xF];
};
static_assert(alignof(FFortItemFilterDefinition) == 0x000010, "Wrong alignment on FFortItemFilterDefinition");
static_assert(sizeof(FFortItemFilterDefinition) == 0x000060, "Wrong size on FFortItemFilterDefinition");
static_assert(offsetof(FFortItemFilterDefinition, ItemTypeFilters) == 0x000000, "Member 'FFortItemFilterDefinition::ItemTypeFilters' has a wrong offset!");
static_assert(offsetof(FFortItemFilterDefinition, bRequiresItemDetails) == 0x000050, "Member 'FFortItemFilterDefinition::bRequiresItemDetails' has a wrong offset!");

struct alignas(0x10) FFortItemListViewConfig final
{
public:
	uint8                                         Pad_0[0xC0];
};
static_assert(alignof(FFortItemListViewConfig) == 0x000010, "Wrong alignment on FFortItemListViewConfig");
static_assert(sizeof(FFortItemListViewConfig) == 0x0000C0, "Wrong size on FFortItemListViewConfig");

struct alignas(0x10) FFortItemSorterDefinition final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FFortItemSorterDefinition) == 0x000010, "Wrong alignment on FFortItemSorterDefinition");
static_assert(sizeof(FFortItemSorterDefinition) == 0x000050, "Wrong size on FFortItemSorterDefinition");

struct FFortItemEntryPreviewData final
{
public:
	int32                                         Quantity;
	EFortItemInspectionMode                       InspectMode;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FFortItemEntryPreviewData) == 0x000004, "Wrong alignment on FFortItemEntryPreviewData");
static_assert(sizeof(FFortItemEntryPreviewData) == 0x000008, "Wrong size on FFortItemEntryPreviewData");
static_assert(offsetof(FFortItemEntryPreviewData, Quantity) == 0x000000, "Member 'FFortItemEntryPreviewData::Quantity' has a wrong offset!");
static_assert(offsetof(FFortItemEntryPreviewData, InspectMode) == 0x000004, "Member 'FFortItemEntryPreviewData::InspectMode' has a wrong offset!");

struct FVideoConfig_Mono final
{
public:
	class UFortStreamMediaSource*                 StreamingMediaSource;
	class FName                                   VideoString;
	class FName                                   StreamingVideoID;
	class FName                                   FallbackVideoID;
	uint8                                         Pad_14[0x4];
	class FString                                 ProdLinkID;
	class FString                                 GamedevLinkID;
	bool                                          bIsAutoPlay;
	bool                                          bForceAutoPlay;
	bool                                          bStreamingEnabled;
	uint8                                         Pad_3B[0x5];
	class FString                                 VideoUID;
	bool                                          bShouldBeModal;
	bool                                          bUseSkipBoundaries;
	bool                                          bKairosPlayer;
	bool                                          bHoldToSkip;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(FVideoConfig_Mono) == 0x000008, "Wrong alignment on FVideoConfig_Mono");
static_assert(sizeof(FVideoConfig_Mono) == 0x000058, "Wrong size on FVideoConfig_Mono");
static_assert(offsetof(FVideoConfig_Mono, StreamingMediaSource) == 0x000000, "Member 'FVideoConfig_Mono::StreamingMediaSource' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, VideoString) == 0x000008, "Member 'FVideoConfig_Mono::VideoString' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, StreamingVideoID) == 0x00000C, "Member 'FVideoConfig_Mono::StreamingVideoID' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, FallbackVideoID) == 0x000010, "Member 'FVideoConfig_Mono::FallbackVideoID' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, ProdLinkID) == 0x000018, "Member 'FVideoConfig_Mono::ProdLinkID' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, GamedevLinkID) == 0x000028, "Member 'FVideoConfig_Mono::GamedevLinkID' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bIsAutoPlay) == 0x000038, "Member 'FVideoConfig_Mono::bIsAutoPlay' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bForceAutoPlay) == 0x000039, "Member 'FVideoConfig_Mono::bForceAutoPlay' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bStreamingEnabled) == 0x00003A, "Member 'FVideoConfig_Mono::bStreamingEnabled' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, VideoUID) == 0x000040, "Member 'FVideoConfig_Mono::VideoUID' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bShouldBeModal) == 0x000050, "Member 'FVideoConfig_Mono::bShouldBeModal' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bUseSkipBoundaries) == 0x000051, "Member 'FVideoConfig_Mono::bUseSkipBoundaries' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bKairosPlayer) == 0x000052, "Member 'FVideoConfig_Mono::bKairosPlayer' has a wrong offset!");
static_assert(offsetof(FVideoConfig_Mono, bHoldToSkip) == 0x000053, "Member 'FVideoConfig_Mono::bHoldToSkip' has a wrong offset!");

struct FFortVideoInfo final
{
public:
	class FName                                   ID;
	uint8                                         Pad_4[0x4];
	class UTexture2D*                             PreviewImage;
	class UMediaSource*                           VideoSource;
	class ULocalizedOverlays*                     SubtitleOverlays;
	class FName                                   QuestObjectiveName;
	struct FPrimaryAssetId                        RequiredActiveQuest;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FFortVideoInfo) == 0x000008, "Wrong alignment on FFortVideoInfo");
static_assert(sizeof(FFortVideoInfo) == 0x000030, "Wrong size on FFortVideoInfo");
static_assert(offsetof(FFortVideoInfo, ID) == 0x000000, "Member 'FFortVideoInfo::ID' has a wrong offset!");
static_assert(offsetof(FFortVideoInfo, PreviewImage) == 0x000008, "Member 'FFortVideoInfo::PreviewImage' has a wrong offset!");
static_assert(offsetof(FFortVideoInfo, VideoSource) == 0x000010, "Member 'FFortVideoInfo::VideoSource' has a wrong offset!");
static_assert(offsetof(FFortVideoInfo, SubtitleOverlays) == 0x000018, "Member 'FFortVideoInfo::SubtitleOverlays' has a wrong offset!");
static_assert(offsetof(FFortVideoInfo, QuestObjectiveName) == 0x000020, "Member 'FFortVideoInfo::QuestObjectiveName' has a wrong offset!");
static_assert(offsetof(FFortVideoInfo, RequiredActiveQuest) == 0x000024, "Member 'FFortVideoInfo::RequiredActiveQuest' has a wrong offset!");

struct FFortConfirmationButtonInfo final
{
public:
	class UCommonButtonBase*                      Button;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FFortConfirmationButtonInfo) == 0x000008, "Wrong alignment on FFortConfirmationButtonInfo");
static_assert(sizeof(FFortConfirmationButtonInfo) == 0x000010, "Wrong size on FFortConfirmationButtonInfo");
static_assert(offsetof(FFortConfirmationButtonInfo, Button) == 0x000000, "Member 'FFortConfirmationButtonInfo::Button' has a wrong offset!");

struct FReviewYourSettingsData final
{
public:
	class FText                                   Title;
	class FText                                   Description;
	TArray<class UFortSetting*>                   Settings;
};
static_assert(alignof(FReviewYourSettingsData) == 0x000008, "Wrong alignment on FReviewYourSettingsData");
static_assert(sizeof(FReviewYourSettingsData) == 0x000040, "Wrong size on FReviewYourSettingsData");
static_assert(offsetof(FReviewYourSettingsData, Title) == 0x000000, "Member 'FReviewYourSettingsData::Title' has a wrong offset!");
static_assert(offsetof(FReviewYourSettingsData, Description) == 0x000018, "Member 'FReviewYourSettingsData::Description' has a wrong offset!");
static_assert(offsetof(FReviewYourSettingsData, Settings) == 0x000030, "Member 'FReviewYourSettingsData::Settings' has a wrong offset!");

struct FFortMtxDetailsAttribute final
{
public:
	class FText                                   Name;
	class FText                                   Value;
};
static_assert(alignof(FFortMtxDetailsAttribute) == 0x000008, "Wrong alignment on FFortMtxDetailsAttribute");
static_assert(sizeof(FFortMtxDetailsAttribute) == 0x000030, "Wrong size on FFortMtxDetailsAttribute");
static_assert(offsetof(FFortMtxDetailsAttribute, Name) == 0x000000, "Member 'FFortMtxDetailsAttribute::Name' has a wrong offset!");
static_assert(offsetof(FFortMtxDetailsAttribute, Value) == 0x000018, "Member 'FFortMtxDetailsAttribute::Value' has a wrong offset!");

struct FFortMtxDescriptionAndDetails final
{
public:
	class FText                                   ShortDescription;
	TArray<struct FFortMtxDetailsAttribute>       AssociatedDetailsAttributes;
};
static_assert(alignof(FFortMtxDescriptionAndDetails) == 0x000008, "Wrong alignment on FFortMtxDescriptionAndDetails");
static_assert(sizeof(FFortMtxDescriptionAndDetails) == 0x000028, "Wrong size on FFortMtxDescriptionAndDetails");
static_assert(offsetof(FFortMtxDescriptionAndDetails, ShortDescription) == 0x000000, "Member 'FFortMtxDescriptionAndDetails::ShortDescription' has a wrong offset!");
static_assert(offsetof(FFortMtxDescriptionAndDetails, AssociatedDetailsAttributes) == 0x000018, "Member 'FFortMtxDescriptionAndDetails::AssociatedDetailsAttributes' has a wrong offset!");

struct FFortMtxGradient final
{
public:
	struct FLinearColor                           Start;
	struct FLinearColor                           Stop;
};
static_assert(alignof(FFortMtxGradient) == 0x000004, "Wrong alignment on FFortMtxGradient");
static_assert(sizeof(FFortMtxGradient) == 0x000020, "Wrong size on FFortMtxGradient");
static_assert(offsetof(FFortMtxGradient, Start) == 0x000000, "Member 'FFortMtxGradient::Start' has a wrong offset!");
static_assert(offsetof(FFortMtxGradient, Stop) == 0x000010, "Member 'FFortMtxGradient::Stop' has a wrong offset!");

struct FFortFeedbackDropdownCategoryHotfix_Add final
{
public:
	class FName                                   ParentInternalName;
	class FName                                   InternalName;
};
static_assert(alignof(FFortFeedbackDropdownCategoryHotfix_Add) == 0x000004, "Wrong alignment on FFortFeedbackDropdownCategoryHotfix_Add");
static_assert(sizeof(FFortFeedbackDropdownCategoryHotfix_Add) == 0x000008, "Wrong size on FFortFeedbackDropdownCategoryHotfix_Add");
static_assert(offsetof(FFortFeedbackDropdownCategoryHotfix_Add, ParentInternalName) == 0x000000, "Member 'FFortFeedbackDropdownCategoryHotfix_Add::ParentInternalName' has a wrong offset!");
static_assert(offsetof(FFortFeedbackDropdownCategoryHotfix_Add, InternalName) == 0x000004, "Member 'FFortFeedbackDropdownCategoryHotfix_Add::InternalName' has a wrong offset!");

struct FFortFeedbackDropdownCategoryHotfix_Modify final
{
public:
	class FName                                   InternalName;
	bool                                          bAddFlag;
	EFortPlayerFeedbackFlags                      Flag;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(FFortFeedbackDropdownCategoryHotfix_Modify) == 0x000004, "Wrong alignment on FFortFeedbackDropdownCategoryHotfix_Modify");
static_assert(sizeof(FFortFeedbackDropdownCategoryHotfix_Modify) == 0x000008, "Wrong size on FFortFeedbackDropdownCategoryHotfix_Modify");
static_assert(offsetof(FFortFeedbackDropdownCategoryHotfix_Modify, InternalName) == 0x000000, "Member 'FFortFeedbackDropdownCategoryHotfix_Modify::InternalName' has a wrong offset!");
static_assert(offsetof(FFortFeedbackDropdownCategoryHotfix_Modify, bAddFlag) == 0x000004, "Member 'FFortFeedbackDropdownCategoryHotfix_Modify::bAddFlag' has a wrong offset!");
static_assert(offsetof(FFortFeedbackDropdownCategoryHotfix_Modify, Flag) == 0x000005, "Member 'FFortFeedbackDropdownCategoryHotfix_Modify::Flag' has a wrong offset!");

struct FTrackCategoryUI final
{
public:
	struct FTrackCategory                         TrackData;
	int32                                         LastSelectedIndex;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FTrackCategoryUI) == 0x000008, "Wrong alignment on FTrackCategoryUI");
static_assert(sizeof(FTrackCategoryUI) == 0x000050, "Wrong size on FTrackCategoryUI");
static_assert(offsetof(FTrackCategoryUI, TrackData) == 0x000000, "Member 'FTrackCategoryUI::TrackData' has a wrong offset!");
static_assert(offsetof(FTrackCategoryUI, LastSelectedIndex) == 0x000048, "Member 'FTrackCategoryUI::LastSelectedIndex' has a wrong offset!");

struct alignas(0x04) FBattlePassPageData final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FBattlePassPageData) == 0x000004, "Wrong alignment on FBattlePassPageData");
static_assert(sizeof(FBattlePassPageData) == 0x000008, "Wrong size on FBattlePassPageData");

struct alignas(0x08) FPreviewRewardData final
{
public:
	uint8                                         Pad_0[0xA8];
};
static_assert(alignof(FPreviewRewardData) == 0x000008, "Wrong alignment on FPreviewRewardData");
static_assert(sizeof(FPreviewRewardData) == 0x0000A8, "Wrong size on FPreviewRewardData");

struct FPreviewUnlockRewardData final
{
public:
	int32                                         Currency;
	int32                                         NumAdditionalRewards;
	int32                                         TotalRewards;
	int32                                         NumCharacters;
	TArray<struct FPreviewRewardData>             Characters;
	TArray<struct FPreviewRewardData>             AdditionalRewards;
};
static_assert(alignof(FPreviewUnlockRewardData) == 0x000008, "Wrong alignment on FPreviewUnlockRewardData");
static_assert(sizeof(FPreviewUnlockRewardData) == 0x000030, "Wrong size on FPreviewUnlockRewardData");
static_assert(offsetof(FPreviewUnlockRewardData, Currency) == 0x000000, "Member 'FPreviewUnlockRewardData::Currency' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockRewardData, NumAdditionalRewards) == 0x000004, "Member 'FPreviewUnlockRewardData::NumAdditionalRewards' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockRewardData, TotalRewards) == 0x000008, "Member 'FPreviewUnlockRewardData::TotalRewards' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockRewardData, NumCharacters) == 0x00000C, "Member 'FPreviewUnlockRewardData::NumCharacters' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockRewardData, Characters) == 0x000010, "Member 'FPreviewUnlockRewardData::Characters' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockRewardData, AdditionalRewards) == 0x000020, "Member 'FPreviewUnlockRewardData::AdditionalRewards' has a wrong offset!");

struct FPreviewUnlockData final
{
public:
	struct FPreviewUnlockRewardData               InstantRewards;
	struct FPreviewUnlockRewardData               EarnedRewards;
	class FText                                   ChapterNumberText;
	class FText                                   SeasonNumberText;
	class FText                                   SummaryText;
	bool                                          bPaysForSelf;
	uint8                                         Pad_A9[0x7];
};
static_assert(alignof(FPreviewUnlockData) == 0x000008, "Wrong alignment on FPreviewUnlockData");
static_assert(sizeof(FPreviewUnlockData) == 0x0000B0, "Wrong size on FPreviewUnlockData");
static_assert(offsetof(FPreviewUnlockData, InstantRewards) == 0x000000, "Member 'FPreviewUnlockData::InstantRewards' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockData, EarnedRewards) == 0x000030, "Member 'FPreviewUnlockData::EarnedRewards' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockData, ChapterNumberText) == 0x000060, "Member 'FPreviewUnlockData::ChapterNumberText' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockData, SeasonNumberText) == 0x000078, "Member 'FPreviewUnlockData::SeasonNumberText' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockData, SummaryText) == 0x000090, "Member 'FPreviewUnlockData::SummaryText' has a wrong offset!");
static_assert(offsetof(FPreviewUnlockData, bPaysForSelf) == 0x0000A8, "Member 'FPreviewUnlockData::bPaysForSelf' has a wrong offset!");

struct FBattlePassCharacterPreviewDisplayData final
{
public:
	class UAthenaCharacterItemDefinition*         CharacterItemDef;
	class UMaterialInstance*                      PreviewMaterial;
};
static_assert(alignof(FBattlePassCharacterPreviewDisplayData) == 0x000008, "Wrong alignment on FBattlePassCharacterPreviewDisplayData");
static_assert(sizeof(FBattlePassCharacterPreviewDisplayData) == 0x000010, "Wrong size on FBattlePassCharacterPreviewDisplayData");
static_assert(offsetof(FBattlePassCharacterPreviewDisplayData, CharacterItemDef) == 0x000000, "Member 'FBattlePassCharacterPreviewDisplayData::CharacterItemDef' has a wrong offset!");
static_assert(offsetof(FBattlePassCharacterPreviewDisplayData, PreviewMaterial) == 0x000008, "Member 'FBattlePassCharacterPreviewDisplayData::PreviewMaterial' has a wrong offset!");

struct alignas(0x08) FCycledItemPreviewSettings final
{
public:
	uint8                                         Pad_0[0xB0];
};
static_assert(alignof(FCycledItemPreviewSettings) == 0x000008, "Wrong alignment on FCycledItemPreviewSettings");
static_assert(sizeof(FCycledItemPreviewSettings) == 0x0000B0, "Wrong size on FCycledItemPreviewSettings");

struct FFortBattlePassVideoAnnotation final
{
public:
	float                                         StartTime;
	float                                         EndTime;
	struct FVector2D                              ScreenPosition;
	int32                                         EntryAngle;
	float                                         EntryMagnitude;
	class UFortItemDefinition*                    RewardItemDefinition;
};
static_assert(alignof(FFortBattlePassVideoAnnotation) == 0x000008, "Wrong alignment on FFortBattlePassVideoAnnotation");
static_assert(sizeof(FFortBattlePassVideoAnnotation) == 0x000028, "Wrong size on FFortBattlePassVideoAnnotation");
static_assert(offsetof(FFortBattlePassVideoAnnotation, StartTime) == 0x000000, "Member 'FFortBattlePassVideoAnnotation::StartTime' has a wrong offset!");
static_assert(offsetof(FFortBattlePassVideoAnnotation, EndTime) == 0x000004, "Member 'FFortBattlePassVideoAnnotation::EndTime' has a wrong offset!");
static_assert(offsetof(FFortBattlePassVideoAnnotation, ScreenPosition) == 0x000008, "Member 'FFortBattlePassVideoAnnotation::ScreenPosition' has a wrong offset!");
static_assert(offsetof(FFortBattlePassVideoAnnotation, EntryAngle) == 0x000018, "Member 'FFortBattlePassVideoAnnotation::EntryAngle' has a wrong offset!");
static_assert(offsetof(FFortBattlePassVideoAnnotation, EntryMagnitude) == 0x00001C, "Member 'FFortBattlePassVideoAnnotation::EntryMagnitude' has a wrong offset!");
static_assert(offsetof(FFortBattlePassVideoAnnotation, RewardItemDefinition) == 0x000020, "Member 'FFortBattlePassVideoAnnotation::RewardItemDefinition' has a wrong offset!");

struct FFortSettingClassExtensions final
{
public:
	TArray<TSoftClassPtr<class UClass>>           Extensions;
};
static_assert(alignof(FFortSettingClassExtensions) == 0x000008, "Wrong alignment on FFortSettingClassExtensions");
static_assert(sizeof(FFortSettingClassExtensions) == 0x000010, "Wrong size on FFortSettingClassExtensions");
static_assert(offsetof(FFortSettingClassExtensions, Extensions) == 0x000000, "Member 'FFortSettingClassExtensions::Extensions' has a wrong offset!");

struct FCheatMenuEntry final
{
public:
	class FString                                 DevName;
	class FString                                 DisplayName;
	class FString                                 RichText;
	TArray<class FString>                         ConsoleCommands;
};
static_assert(alignof(FCheatMenuEntry) == 0x000008, "Wrong alignment on FCheatMenuEntry");
static_assert(sizeof(FCheatMenuEntry) == 0x000040, "Wrong size on FCheatMenuEntry");
static_assert(offsetof(FCheatMenuEntry, DevName) == 0x000000, "Member 'FCheatMenuEntry::DevName' has a wrong offset!");
static_assert(offsetof(FCheatMenuEntry, DisplayName) == 0x000010, "Member 'FCheatMenuEntry::DisplayName' has a wrong offset!");
static_assert(offsetof(FCheatMenuEntry, RichText) == 0x000020, "Member 'FCheatMenuEntry::RichText' has a wrong offset!");
static_assert(offsetof(FCheatMenuEntry, ConsoleCommands) == 0x000030, "Member 'FCheatMenuEntry::ConsoleCommands' has a wrong offset!");

struct FCheatMenuSection final
{
public:
	class FString                                 DevName;
	class FString                                 DisplayName;
	class FString                                 MinVersion;
	TArray<struct FCheatMenuEntry>                Entries;
	bool                                          bExpanded;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FCheatMenuSection) == 0x000008, "Wrong alignment on FCheatMenuSection");
static_assert(sizeof(FCheatMenuSection) == 0x000048, "Wrong size on FCheatMenuSection");
static_assert(offsetof(FCheatMenuSection, DevName) == 0x000000, "Member 'FCheatMenuSection::DevName' has a wrong offset!");
static_assert(offsetof(FCheatMenuSection, DisplayName) == 0x000010, "Member 'FCheatMenuSection::DisplayName' has a wrong offset!");
static_assert(offsetof(FCheatMenuSection, MinVersion) == 0x000020, "Member 'FCheatMenuSection::MinVersion' has a wrong offset!");
static_assert(offsetof(FCheatMenuSection, Entries) == 0x000030, "Member 'FCheatMenuSection::Entries' has a wrong offset!");
static_assert(offsetof(FCheatMenuSection, bExpanded) == 0x000040, "Member 'FCheatMenuSection::bExpanded' has a wrong offset!");

struct FFortShowdownEventBestResultsSummary final
{
public:
	int32                                         TotalScore;
	int32                                         MatchesPlayed;
	int32                                         NumVictoryRoyales;
	int32                                         PlacementPoints;
	int32                                         EliminationPoints;
	int32                                         EntryFeePoints;
	bool                                          bIsValidSummary;
	uint8                                         Pad_19[0x3];
};
static_assert(alignof(FFortShowdownEventBestResultsSummary) == 0x000004, "Wrong alignment on FFortShowdownEventBestResultsSummary");
static_assert(sizeof(FFortShowdownEventBestResultsSummary) == 0x00001C, "Wrong size on FFortShowdownEventBestResultsSummary");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, TotalScore) == 0x000000, "Member 'FFortShowdownEventBestResultsSummary::TotalScore' has a wrong offset!");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, MatchesPlayed) == 0x000004, "Member 'FFortShowdownEventBestResultsSummary::MatchesPlayed' has a wrong offset!");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, NumVictoryRoyales) == 0x000008, "Member 'FFortShowdownEventBestResultsSummary::NumVictoryRoyales' has a wrong offset!");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, PlacementPoints) == 0x00000C, "Member 'FFortShowdownEventBestResultsSummary::PlacementPoints' has a wrong offset!");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, EliminationPoints) == 0x000010, "Member 'FFortShowdownEventBestResultsSummary::EliminationPoints' has a wrong offset!");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, EntryFeePoints) == 0x000014, "Member 'FFortShowdownEventBestResultsSummary::EntryFeePoints' has a wrong offset!");
static_assert(offsetof(FFortShowdownEventBestResultsSummary, bIsValidSummary) == 0x000018, "Member 'FFortShowdownEventBestResultsSummary::bIsValidSummary' has a wrong offset!");

struct FFortEventStyleInfo final : public FTableRowBase
{
public:
	struct FLinearColor                           BaseColor;
	struct FLinearColor                           PrimaryColor;
	struct FLinearColor                           SecondaryColor;
	struct FLinearColor                           HighlightColor;
	struct FLinearColor                           TitleColor;
	struct FLinearColor                           ShadowColor;
	struct FLinearColor                           BackgroundLeftColor;
	struct FLinearColor                           BackgroundRightColor;
	struct FLinearColor                           BackgroundTextColor;
	struct FLinearColor                           PosterFadeColor;
};
static_assert(alignof(FFortEventStyleInfo) == 0x000008, "Wrong alignment on FFortEventStyleInfo");
static_assert(sizeof(FFortEventStyleInfo) == 0x0000A8, "Wrong size on FFortEventStyleInfo");
static_assert(offsetof(FFortEventStyleInfo, BaseColor) == 0x000008, "Member 'FFortEventStyleInfo::BaseColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, PrimaryColor) == 0x000018, "Member 'FFortEventStyleInfo::PrimaryColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, SecondaryColor) == 0x000028, "Member 'FFortEventStyleInfo::SecondaryColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, HighlightColor) == 0x000038, "Member 'FFortEventStyleInfo::HighlightColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, TitleColor) == 0x000048, "Member 'FFortEventStyleInfo::TitleColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, ShadowColor) == 0x000058, "Member 'FFortEventStyleInfo::ShadowColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, BackgroundLeftColor) == 0x000068, "Member 'FFortEventStyleInfo::BackgroundLeftColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, BackgroundRightColor) == 0x000078, "Member 'FFortEventStyleInfo::BackgroundRightColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, BackgroundTextColor) == 0x000088, "Member 'FFortEventStyleInfo::BackgroundTextColor' has a wrong offset!");
static_assert(offsetof(FFortEventStyleInfo, PosterFadeColor) == 0x000098, "Member 'FFortEventStyleInfo::PosterFadeColor' has a wrong offset!");

struct FBundledItemInfo final
{
public:
	class FString                                 TemplateId;
	int32                                         Quantity;
	bool                                          bOwned;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FBundledItemInfo) == 0x000008, "Wrong alignment on FBundledItemInfo");
static_assert(sizeof(FBundledItemInfo) == 0x000018, "Wrong size on FBundledItemInfo");
static_assert(offsetof(FBundledItemInfo, TemplateId) == 0x000000, "Member 'FBundledItemInfo::TemplateId' has a wrong offset!");
static_assert(offsetof(FBundledItemInfo, Quantity) == 0x000010, "Member 'FBundledItemInfo::Quantity' has a wrong offset!");
static_assert(offsetof(FBundledItemInfo, bOwned) == 0x000014, "Member 'FBundledItemInfo::bOwned' has a wrong offset!");

struct FFortHeroNamesData final : public FTableRowBase
{
public:
	class FString                                 FirstName;
	class FString                                 NickName;
	class FString                                 LastName;
};
static_assert(alignof(FFortHeroNamesData) == 0x000008, "Wrong alignment on FFortHeroNamesData");
static_assert(sizeof(FFortHeroNamesData) == 0x000038, "Wrong size on FFortHeroNamesData");
static_assert(offsetof(FFortHeroNamesData, FirstName) == 0x000008, "Member 'FFortHeroNamesData::FirstName' has a wrong offset!");
static_assert(offsetof(FFortHeroNamesData, NickName) == 0x000018, "Member 'FFortHeroNamesData::NickName' has a wrong offset!");
static_assert(offsetof(FFortHeroNamesData, LastName) == 0x000028, "Member 'FFortHeroNamesData::LastName' has a wrong offset!");

struct FFortWeaponBoardDisplaySlotItem final
{
public:
	struct FFortWeaponBoardDisplaySlot            DisplaySlot;
	uint8                                         Pad_90[0x10];
};
static_assert(alignof(FFortWeaponBoardDisplaySlotItem) == 0x000010, "Wrong alignment on FFortWeaponBoardDisplaySlotItem");
static_assert(sizeof(FFortWeaponBoardDisplaySlotItem) == 0x0000A0, "Wrong size on FFortWeaponBoardDisplaySlotItem");
static_assert(offsetof(FFortWeaponBoardDisplaySlotItem, DisplaySlot) == 0x000000, "Member 'FFortWeaponBoardDisplaySlotItem::DisplaySlot' has a wrong offset!");

struct FProgressiveSetInfo final
{
public:
	class FText                                   SetName;
	TSoftObjectPtr<class UMaterialInterface>      TileMaterial;
	EProgressiveSetProgress                       SetProgress;
	uint8                                         Pad_41[0x3];
	int32                                         UnlockedStagesCount;
	int32                                         TotalStagesCount;
	uint8                                         Pad_4C[0x1C];
};
static_assert(alignof(FProgressiveSetInfo) == 0x000008, "Wrong alignment on FProgressiveSetInfo");
static_assert(sizeof(FProgressiveSetInfo) == 0x000068, "Wrong size on FProgressiveSetInfo");
static_assert(offsetof(FProgressiveSetInfo, SetName) == 0x000000, "Member 'FProgressiveSetInfo::SetName' has a wrong offset!");
static_assert(offsetof(FProgressiveSetInfo, TileMaterial) == 0x000018, "Member 'FProgressiveSetInfo::TileMaterial' has a wrong offset!");
static_assert(offsetof(FProgressiveSetInfo, SetProgress) == 0x000040, "Member 'FProgressiveSetInfo::SetProgress' has a wrong offset!");
static_assert(offsetof(FProgressiveSetInfo, UnlockedStagesCount) == 0x000044, "Member 'FProgressiveSetInfo::UnlockedStagesCount' has a wrong offset!");
static_assert(offsetof(FProgressiveSetInfo, TotalStagesCount) == 0x000048, "Member 'FProgressiveSetInfo::TotalStagesCount' has a wrong offset!");

struct FRewardsDataIds final
{
public:
	TArray<class UFortTournamentPayoutThresholdEntry*> ThresholdEntries;
	uint8                                         Pad_10[0x10];
};
static_assert(alignof(FRewardsDataIds) == 0x000008, "Wrong alignment on FRewardsDataIds");
static_assert(sizeof(FRewardsDataIds) == 0x000020, "Wrong size on FRewardsDataIds");
static_assert(offsetof(FRewardsDataIds, ThresholdEntries) == 0x000000, "Member 'FRewardsDataIds::ThresholdEntries' has a wrong offset!");

struct FFortAthenaTutorialStepInfo final
{
public:
	EFortAthenaTutorialStep                       TutorialStep;
	uint8                                         Pad_1[0x7];
	TArray<struct FFortAthenaTutorialScreenInfo>  StepScreenInfo;
};
static_assert(alignof(FFortAthenaTutorialStepInfo) == 0x000008, "Wrong alignment on FFortAthenaTutorialStepInfo");
static_assert(sizeof(FFortAthenaTutorialStepInfo) == 0x000018, "Wrong size on FFortAthenaTutorialStepInfo");
static_assert(offsetof(FFortAthenaTutorialStepInfo, TutorialStep) == 0x000000, "Member 'FFortAthenaTutorialStepInfo::TutorialStep' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialStepInfo, StepScreenInfo) == 0x000008, "Member 'FFortAthenaTutorialStepInfo::StepScreenInfo' has a wrong offset!");

struct FFortAthenaTutorialStandaloneStepInfo final
{
public:
	EFortAthenaTutorial_StandaloneStep            StandaloneStep;
	uint8                                         Pad_1[0x7];
	struct FFortAthenaTutorialScreenInfo          StepScreenInfo;
};
static_assert(alignof(FFortAthenaTutorialStandaloneStepInfo) == 0x000008, "Wrong alignment on FFortAthenaTutorialStandaloneStepInfo");
static_assert(sizeof(FFortAthenaTutorialStandaloneStepInfo) == 0x000108, "Wrong size on FFortAthenaTutorialStandaloneStepInfo");
static_assert(offsetof(FFortAthenaTutorialStandaloneStepInfo, StandaloneStep) == 0x000000, "Member 'FFortAthenaTutorialStandaloneStepInfo::StandaloneStep' has a wrong offset!");
static_assert(offsetof(FFortAthenaTutorialStandaloneStepInfo, StepScreenInfo) == 0x000008, "Member 'FFortAthenaTutorialStandaloneStepInfo::StepScreenInfo' has a wrong offset!");

struct FPluginUIStateWidgetEntry final
{
public:
	class FName                                   EntryName;
	uint8                                         Pad_4[0x4];
	TSoftClassPtr<class UClass>                   WidgetClass;
};
static_assert(alignof(FPluginUIStateWidgetEntry) == 0x000008, "Wrong alignment on FPluginUIStateWidgetEntry");
static_assert(sizeof(FPluginUIStateWidgetEntry) == 0x000030, "Wrong size on FPluginUIStateWidgetEntry");
static_assert(offsetof(FPluginUIStateWidgetEntry, EntryName) == 0x000000, "Member 'FPluginUIStateWidgetEntry::EntryName' has a wrong offset!");
static_assert(offsetof(FPluginUIStateWidgetEntry, WidgetClass) == 0x000008, "Member 'FPluginUIStateWidgetEntry::WidgetClass' has a wrong offset!");

struct FLoadedUIManagerEntry final
{
public:
	uint8                                         Pad_0[0x18];
	TSubclassOf<class UFortUIManager>             UIManagerClass;
};
static_assert(alignof(FLoadedUIManagerEntry) == 0x000008, "Wrong alignment on FLoadedUIManagerEntry");
static_assert(sizeof(FLoadedUIManagerEntry) == 0x000020, "Wrong size on FLoadedUIManagerEntry");
static_assert(offsetof(FLoadedUIManagerEntry, UIManagerClass) == 0x000018, "Member 'FLoadedUIManagerEntry::UIManagerClass' has a wrong offset!");

struct FRegisteredUIManagerEntry final
{
public:
	uint8                                         Pad_0[0x8];
	TSoftClassPtr<class UClass>                   UIManagerClass;
};
static_assert(alignof(FRegisteredUIManagerEntry) == 0x000008, "Wrong alignment on FRegisteredUIManagerEntry");
static_assert(sizeof(FRegisteredUIManagerEntry) == 0x000030, "Wrong size on FRegisteredUIManagerEntry");
static_assert(offsetof(FRegisteredUIManagerEntry, UIManagerClass) == 0x000008, "Member 'FRegisteredUIManagerEntry::UIManagerClass' has a wrong offset!");

struct FFortRootViewportLayoutInfo final
{
public:
	TWeakObjectPtr<class UFortLocalPlayer>        LocalPlayer;
	class UUserWidget*                            RootLayout;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FFortRootViewportLayoutInfo) == 0x000008, "Wrong alignment on FFortRootViewportLayoutInfo");
static_assert(sizeof(FFortRootViewportLayoutInfo) == 0x000018, "Wrong size on FFortRootViewportLayoutInfo");
static_assert(offsetof(FFortRootViewportLayoutInfo, LocalPlayer) == 0x000000, "Member 'FFortRootViewportLayoutInfo::LocalPlayer' has a wrong offset!");
static_assert(offsetof(FFortRootViewportLayoutInfo, RootLayout) == 0x000008, "Member 'FFortRootViewportLayoutInfo::RootLayout' has a wrong offset!");

struct FFortUIManager_Campaign_Player final
{
public:
	class UFortLocalPlayer*                       Player;
	TScriptInterface<class IFortUIManagerInterface> Manager;
};
static_assert(alignof(FFortUIManager_Campaign_Player) == 0x000008, "Wrong alignment on FFortUIManager_Campaign_Player");
static_assert(sizeof(FFortUIManager_Campaign_Player) == 0x000018, "Wrong size on FFortUIManager_Campaign_Player");
static_assert(offsetof(FFortUIManager_Campaign_Player, Player) == 0x000000, "Member 'FFortUIManager_Campaign_Player::Player' has a wrong offset!");
static_assert(offsetof(FFortUIManager_Campaign_Player, Manager) == 0x000008, "Member 'FFortUIManager_Campaign_Player::Manager' has a wrong offset!");

struct alignas(0x08) FFortVariantFilterContext final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FFortVariantFilterContext) == 0x000008, "Wrong alignment on FFortVariantFilterContext");
static_assert(sizeof(FFortVariantFilterContext) == 0x000030, "Wrong size on FFortVariantFilterContext");

struct FContentPushState final
{
public:
	bool                                          bHideHeader;
	bool                                          bHideFooter;
	bool                                          bHideChatWidget;
};
static_assert(alignof(FContentPushState) == 0x000001, "Wrong alignment on FContentPushState");
static_assert(sizeof(FContentPushState) == 0x000003, "Wrong size on FContentPushState");
static_assert(offsetof(FContentPushState, bHideHeader) == 0x000000, "Member 'FContentPushState::bHideHeader' has a wrong offset!");
static_assert(offsetof(FContentPushState, bHideFooter) == 0x000001, "Member 'FContentPushState::bHideFooter' has a wrong offset!");
static_assert(offsetof(FContentPushState, bHideChatWidget) == 0x000002, "Member 'FContentPushState::bHideChatWidget' has a wrong offset!");

}
