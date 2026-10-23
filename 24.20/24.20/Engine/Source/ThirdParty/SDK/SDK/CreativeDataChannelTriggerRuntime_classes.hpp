#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CreativeDataChannelTriggerRuntime_structs.hpp"
#include "ElectraDataChannelRuntime_classes.hpp"

namespace SDK
{

class UCreativeDataChannelAnalytics final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelAnalytics">();
	}
	static class UCreativeDataChannelAnalytics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeDataChannelAnalytics>();
	}
};
static_assert(alignof(UCreativeDataChannelAnalytics) == 0x000008, "Wrong alignment on UCreativeDataChannelAnalytics");
static_assert(sizeof(UCreativeDataChannelAnalytics) == 0x000028, "Wrong size on UCreativeDataChannelAnalytics");

class ACreativeDataChannelTarget final : public AElectraDataChannelTarget
{
public:
	uint8                                         Pad_300[0x8];
	int8                                          VersionByte;
	uint8                                         Pad_309[0x7];
	struct FCreativeDataChannelEvents             Events;
	TMulticastInlineDelegate<void(const struct FCreativeDataChannelEvents& Events)> OnEventsRep;
	struct FCreativeDataChannelEvents             EventsCache;
	uint8                                         Pad_340[0x10];

public:
	void FireEvent(class FName EventName);
	void OnRep_Events();
	void TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelTarget">();
	}
	static class ACreativeDataChannelTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeDataChannelTarget>();
	}
};
static_assert(alignof(ACreativeDataChannelTarget) == 0x000008, "Wrong alignment on ACreativeDataChannelTarget");
static_assert(sizeof(ACreativeDataChannelTarget) == 0x000350, "Wrong size on ACreativeDataChannelTarget");
static_assert(offsetof(ACreativeDataChannelTarget, VersionByte) == 0x000308, "Member 'ACreativeDataChannelTarget::VersionByte' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTarget, Events) == 0x000310, "Member 'ACreativeDataChannelTarget::Events' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTarget, OnEventsRep) == 0x000320, "Member 'ACreativeDataChannelTarget::OnEventsRep' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTarget, EventsCache) == 0x000330, "Member 'ACreativeDataChannelTarget::EventsCache' has a wrong offset!");

class ACreativeDataChannelTargetFN final : public AElectraDataChannelTarget
{
public:
	uint8                                         Pad_300[0x8];
	int32                                         VersionByte;
	struct FCDCInt                                VersionByteTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> VersionByteEvent;
	class FString                                 LeaderBoard;
	int64                                         StormCircleSize;
	struct FCDCLargeInt                           StormCircleSizeTracker;
	TMulticastInlineDelegate<void(const struct FCDCLargeInt& EventNumber)> StormCircleSizeEvent;
	TArray<float>                                 StormCircleLocation;
	struct FCDCFloatArray                         StormCircleLocationTracker;
	TMulticastInlineDelegate<void(const struct FCDCFloatArray& EventMap)> StormCircleLocationEvent;
	class FString                                 PlayerLocation;
	struct FCDCStringFloatArrayMap                PlayerLocationTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringFloatArrayMap& EventMap)> PlayerLocationEvent;
	class FString                                 ArenaPointLeaderBoard;
	struct FCDCStringStringMap                    ArenaPointLeaderBoardTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringStringMap& EventMap)> ArenaPointLeaderBoardEvent;
	class FString                                 CashCupDataAllTimeEarners;
	struct FCDCStringFloatMap                     CashCupDataAllTimeEanersTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringFloatMap& EventMap)> CashCupDataAllTimeEarnersEvent;
	class FString                                 MythicBossEliminatedPlayer;
	struct FCDCString                             MythicBossEliminatedPlayerTracker;
	TMulticastInlineDelegate<void(const struct FCDCString& EventString)> MythicBossEliminatedPlayerEvent;
	class FString                                 MythicWeaponPlayer;
	struct FCDCString                             MythicWeaponPlayerTracker;
	TMulticastInlineDelegate<void(const struct FCDCString& EventString)> MythicWeaponPlayerEvent;
	class FString                                 PlayerInfo;
	struct FCDCStringArray                        PlayerInfoTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringArray& EventStringArray)> PlayerInfoEvent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelTargetFN">();
	}
	static class ACreativeDataChannelTargetFN* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeDataChannelTargetFN>();
	}
};
static_assert(alignof(ACreativeDataChannelTargetFN) == 0x000008, "Wrong alignment on ACreativeDataChannelTargetFN");
static_assert(sizeof(ACreativeDataChannelTargetFN) == 0x0005B8, "Wrong size on ACreativeDataChannelTargetFN");
static_assert(offsetof(ACreativeDataChannelTargetFN, VersionByte) == 0x000308, "Member 'ACreativeDataChannelTargetFN::VersionByte' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, VersionByteTracker) == 0x00030C, "Member 'ACreativeDataChannelTargetFN::VersionByteTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, VersionByteEvent) == 0x000310, "Member 'ACreativeDataChannelTargetFN::VersionByteEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, LeaderBoard) == 0x000320, "Member 'ACreativeDataChannelTargetFN::LeaderBoard' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, StormCircleSize) == 0x000330, "Member 'ACreativeDataChannelTargetFN::StormCircleSize' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, StormCircleSizeTracker) == 0x000338, "Member 'ACreativeDataChannelTargetFN::StormCircleSizeTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, StormCircleSizeEvent) == 0x000340, "Member 'ACreativeDataChannelTargetFN::StormCircleSizeEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, StormCircleLocation) == 0x000350, "Member 'ACreativeDataChannelTargetFN::StormCircleLocation' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, StormCircleLocationTracker) == 0x000360, "Member 'ACreativeDataChannelTargetFN::StormCircleLocationTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, StormCircleLocationEvent) == 0x000370, "Member 'ACreativeDataChannelTargetFN::StormCircleLocationEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, PlayerLocation) == 0x000380, "Member 'ACreativeDataChannelTargetFN::PlayerLocation' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, PlayerLocationTracker) == 0x000390, "Member 'ACreativeDataChannelTargetFN::PlayerLocationTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, PlayerLocationEvent) == 0x0003E0, "Member 'ACreativeDataChannelTargetFN::PlayerLocationEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, ArenaPointLeaderBoard) == 0x0003F0, "Member 'ACreativeDataChannelTargetFN::ArenaPointLeaderBoard' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, ArenaPointLeaderBoardTracker) == 0x000400, "Member 'ACreativeDataChannelTargetFN::ArenaPointLeaderBoardTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, ArenaPointLeaderBoardEvent) == 0x0004A0, "Member 'ACreativeDataChannelTargetFN::ArenaPointLeaderBoardEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, CashCupDataAllTimeEarners) == 0x0004B0, "Member 'ACreativeDataChannelTargetFN::CashCupDataAllTimeEarners' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, CashCupDataAllTimeEanersTracker) == 0x0004C0, "Member 'ACreativeDataChannelTargetFN::CashCupDataAllTimeEanersTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, CashCupDataAllTimeEarnersEvent) == 0x000510, "Member 'ACreativeDataChannelTargetFN::CashCupDataAllTimeEarnersEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, MythicBossEliminatedPlayer) == 0x000520, "Member 'ACreativeDataChannelTargetFN::MythicBossEliminatedPlayer' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, MythicBossEliminatedPlayerTracker) == 0x000530, "Member 'ACreativeDataChannelTargetFN::MythicBossEliminatedPlayerTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, MythicBossEliminatedPlayerEvent) == 0x000540, "Member 'ACreativeDataChannelTargetFN::MythicBossEliminatedPlayerEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, MythicWeaponPlayer) == 0x000550, "Member 'ACreativeDataChannelTargetFN::MythicWeaponPlayer' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, MythicWeaponPlayerTracker) == 0x000560, "Member 'ACreativeDataChannelTargetFN::MythicWeaponPlayerTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, MythicWeaponPlayerEvent) == 0x000570, "Member 'ACreativeDataChannelTargetFN::MythicWeaponPlayerEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, PlayerInfo) == 0x000580, "Member 'ACreativeDataChannelTargetFN::PlayerInfo' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, PlayerInfoTracker) == 0x000590, "Member 'ACreativeDataChannelTargetFN::PlayerInfoTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetFN, PlayerInfoEvent) == 0x0005A8, "Member 'ACreativeDataChannelTargetFN::PlayerInfoEvent' has a wrong offset!");

class ACreativeDataChannelTargetRL final : public AElectraDataChannelTarget
{
public:
	uint8                                         Pad_300[0x8];
	int32                                         VersionByte;
	struct FCDCInt                                VersionByteTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> VersionByteEvent;
	int32                                         ScoreTeam;
	uint8                                         Pad_324[0x4];
	struct FCDCString                             ScoreTeamTracker;
	TMulticastInlineDelegate<void(const struct FCDCString& EventString)> ScoreTeamEvent;
	class FString                                 ScoreTotal;
	struct FCDCStringIntMap                       ScoreTotalTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringIntMap& EventMap)> ScoreTotalEvent;
	int64                                         ScoreboardTimeLeft;
	struct FCDCLargeInt                           ScoreboardTimeLeftTracker;
	TMulticastInlineDelegate<void(const struct FCDCLargeInt& EventNumber)> ScoreboardTimeLeftEvent;
	class FString                                 ScoreboardBestOf;
	struct FCDCStringIntMap                       ScoreboardBestOfTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringIntMap& EventMap)> ScoreboardBestOfEvent;
	int32                                         OverTime;
	struct FCDCInt                                OvertimeTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> OvertimeEvent;
	class FString                                 TeamNames;
	struct FCDCStringArray                        TeamNamesTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringArray& EventStringArray)> TeamNamesEvent;
	class FString                                 PlayerNames;
	struct FCDCStringArray                        PlayerNamesTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringArray& EventStringArray)> PlayerNamesEvent;
	class FString                                 PlayerBoost;
	struct FCDCStringIntMap                       PlayerBoostTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringIntMap& EventMap)> PlayerBoostEvent;
	class FString                                 PlayerBoostCollected;
	struct FCDCStringStringMap                    PlayerBoostCollectedTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringStringMap& EventMap)> PlayerBoostCollectedEvent;
	class FString                                 PlayerCoords;
	struct FCDCStringFloatArrayMap                PlayerCoordsTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringFloatArrayMap& EventMap)> PlayerCoordsEvent;
	class FString                                 BallCoords;
	struct FCDCFloatArray                         BallCoordsTracker;
	TMulticastInlineDelegate<void(const struct FCDCFloatArray& EventMap)> BallCoordsEvent;
	class FString                                 MediaStart;
	struct FCDCStringStringMap                    MediaStartTracker;
	TMulticastInlineDelegate<void(const struct FCDCStringStringMap& EventMap)> MediaStartEvent;
	int32                                         MediaStop;
	struct FCDCInt                                MediaStopTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> MediaStopEvent;
	int32                                         SeriesState;
	struct FCDCInt                                SeriesStateTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> SeriesStateEvent;
	int32                                         MatchState;
	struct FCDCInt                                MatchStateTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> MatchStateEvent;
	int32                                         FinaleState;
	struct FCDCInt                                FinaleStateTracker;
	TMulticastInlineDelegate<void(const struct FCDCInt& EventNumber)> FinaleStateEvent;

public:
	void OnRep_BallCoords();
	void OnRep_FinaleState();
	void OnRep_MatchState();
	void OnRep_MediaStart();
	void OnRep_MediaStop();
	void OnRep_Overtime();
	void OnRep_PlayerBoost();
	void OnRep_PlayerBoostCollected();
	void OnRep_PlayerCoords();
	void OnRep_PlayerNames();
	void OnRep_ScoreboardBestOf();
	void OnRep_ScoreboardTimeLeft();
	void OnRep_ScoreTeam();
	void OnRep_ScoreTotal();
	void OnRep_SeriesState();
	void OnRep_TeamNames();
	void OnRep_VersionByte();
	void ReportServerStateStreamError(const class FString& Error, const class FString& UID, const class FString& URL);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeDataChannelTargetRL">();
	}
	static class ACreativeDataChannelTargetRL* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeDataChannelTargetRL>();
	}
};
static_assert(alignof(ACreativeDataChannelTargetRL) == 0x000008, "Wrong alignment on ACreativeDataChannelTargetRL");
static_assert(sizeof(ACreativeDataChannelTargetRL) == 0x0007C0, "Wrong size on ACreativeDataChannelTargetRL");
static_assert(offsetof(ACreativeDataChannelTargetRL, VersionByte) == 0x000308, "Member 'ACreativeDataChannelTargetRL::VersionByte' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, VersionByteTracker) == 0x00030C, "Member 'ACreativeDataChannelTargetRL::VersionByteTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, VersionByteEvent) == 0x000310, "Member 'ACreativeDataChannelTargetRL::VersionByteEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreTeam) == 0x000320, "Member 'ACreativeDataChannelTargetRL::ScoreTeam' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreTeamTracker) == 0x000328, "Member 'ACreativeDataChannelTargetRL::ScoreTeamTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreTeamEvent) == 0x000338, "Member 'ACreativeDataChannelTargetRL::ScoreTeamEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreTotal) == 0x000348, "Member 'ACreativeDataChannelTargetRL::ScoreTotal' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreTotalTracker) == 0x000358, "Member 'ACreativeDataChannelTargetRL::ScoreTotalTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreTotalEvent) == 0x0003A8, "Member 'ACreativeDataChannelTargetRL::ScoreTotalEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreboardTimeLeft) == 0x0003B8, "Member 'ACreativeDataChannelTargetRL::ScoreboardTimeLeft' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreboardTimeLeftTracker) == 0x0003C0, "Member 'ACreativeDataChannelTargetRL::ScoreboardTimeLeftTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreboardTimeLeftEvent) == 0x0003C8, "Member 'ACreativeDataChannelTargetRL::ScoreboardTimeLeftEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreboardBestOf) == 0x0003D8, "Member 'ACreativeDataChannelTargetRL::ScoreboardBestOf' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreboardBestOfTracker) == 0x0003E8, "Member 'ACreativeDataChannelTargetRL::ScoreboardBestOfTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, ScoreboardBestOfEvent) == 0x000438, "Member 'ACreativeDataChannelTargetRL::ScoreboardBestOfEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, OverTime) == 0x000448, "Member 'ACreativeDataChannelTargetRL::OverTime' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, OvertimeTracker) == 0x00044C, "Member 'ACreativeDataChannelTargetRL::OvertimeTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, OvertimeEvent) == 0x000450, "Member 'ACreativeDataChannelTargetRL::OvertimeEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, TeamNames) == 0x000460, "Member 'ACreativeDataChannelTargetRL::TeamNames' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, TeamNamesTracker) == 0x000470, "Member 'ACreativeDataChannelTargetRL::TeamNamesTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, TeamNamesEvent) == 0x000488, "Member 'ACreativeDataChannelTargetRL::TeamNamesEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerNames) == 0x000498, "Member 'ACreativeDataChannelTargetRL::PlayerNames' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerNamesTracker) == 0x0004A8, "Member 'ACreativeDataChannelTargetRL::PlayerNamesTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerNamesEvent) == 0x0004C0, "Member 'ACreativeDataChannelTargetRL::PlayerNamesEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerBoost) == 0x0004D0, "Member 'ACreativeDataChannelTargetRL::PlayerBoost' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerBoostTracker) == 0x0004E0, "Member 'ACreativeDataChannelTargetRL::PlayerBoostTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerBoostEvent) == 0x000530, "Member 'ACreativeDataChannelTargetRL::PlayerBoostEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerBoostCollected) == 0x000540, "Member 'ACreativeDataChannelTargetRL::PlayerBoostCollected' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerBoostCollectedTracker) == 0x000550, "Member 'ACreativeDataChannelTargetRL::PlayerBoostCollectedTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerBoostCollectedEvent) == 0x0005F0, "Member 'ACreativeDataChannelTargetRL::PlayerBoostCollectedEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerCoords) == 0x000600, "Member 'ACreativeDataChannelTargetRL::PlayerCoords' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerCoordsTracker) == 0x000610, "Member 'ACreativeDataChannelTargetRL::PlayerCoordsTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, PlayerCoordsEvent) == 0x000660, "Member 'ACreativeDataChannelTargetRL::PlayerCoordsEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, BallCoords) == 0x000670, "Member 'ACreativeDataChannelTargetRL::BallCoords' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, BallCoordsTracker) == 0x000680, "Member 'ACreativeDataChannelTargetRL::BallCoordsTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, BallCoordsEvent) == 0x000690, "Member 'ACreativeDataChannelTargetRL::BallCoordsEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MediaStart) == 0x0006A0, "Member 'ACreativeDataChannelTargetRL::MediaStart' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MediaStartTracker) == 0x0006B0, "Member 'ACreativeDataChannelTargetRL::MediaStartTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MediaStartEvent) == 0x000750, "Member 'ACreativeDataChannelTargetRL::MediaStartEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MediaStop) == 0x000760, "Member 'ACreativeDataChannelTargetRL::MediaStop' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MediaStopTracker) == 0x000764, "Member 'ACreativeDataChannelTargetRL::MediaStopTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MediaStopEvent) == 0x000768, "Member 'ACreativeDataChannelTargetRL::MediaStopEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, SeriesState) == 0x000778, "Member 'ACreativeDataChannelTargetRL::SeriesState' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, SeriesStateTracker) == 0x00077C, "Member 'ACreativeDataChannelTargetRL::SeriesStateTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, SeriesStateEvent) == 0x000780, "Member 'ACreativeDataChannelTargetRL::SeriesStateEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MatchState) == 0x000790, "Member 'ACreativeDataChannelTargetRL::MatchState' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MatchStateTracker) == 0x000794, "Member 'ACreativeDataChannelTargetRL::MatchStateTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, MatchStateEvent) == 0x000798, "Member 'ACreativeDataChannelTargetRL::MatchStateEvent' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, FinaleState) == 0x0007A8, "Member 'ACreativeDataChannelTargetRL::FinaleState' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, FinaleStateTracker) == 0x0007AC, "Member 'ACreativeDataChannelTargetRL::FinaleStateTracker' has a wrong offset!");
static_assert(offsetof(ACreativeDataChannelTargetRL, FinaleStateEvent) == 0x0007B0, "Member 'ACreativeDataChannelTargetRL::FinaleStateEvent' has a wrong offset!");

}
