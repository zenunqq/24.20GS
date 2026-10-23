#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount final
{
public:
	int32                                         NewRoyalRoyaleCount;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount) == 0x000004, "Wrong alignment on FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount) == 0x000004, "Wrong size on FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount, NewRoyalRoyaleCount) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount::NewRoyalRoyaleCount' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_HandleExitAircraft final
{
public:
	class AController*                            ExitingController;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_HandleExitAircraft) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_HandleExitAircraft");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_HandleExitAircraft) == 0x000008, "Wrong size on FortControllerComponent_VictoryCrowns_HandleExitAircraft");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_HandleExitAircraft, ExitingController) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_HandleExitAircraft::ExitingController' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_HandlePawnChanged final
{
public:
	class APawn*                                  OldPawn;
	class APawn*                                  NewPawn;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_HandlePawnChanged) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_HandlePawnChanged");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_HandlePawnChanged) == 0x000010, "Wrong size on FortControllerComponent_VictoryCrowns_HandlePawnChanged");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_HandlePawnChanged, OldPawn) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_HandlePawnChanged::OldPawn' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_HandlePawnChanged, NewPawn) == 0x000008, "Member 'FortControllerComponent_VictoryCrowns_HandlePawnChanged::NewPawn' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem final
{
public:
	const class UFortItem*                        CrownItem;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem) == 0x000010, "Wrong size on FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem, CrownItem) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem::CrownItem' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem, ReturnValue) == 0x000008, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem final
{
public:
	const class UFortItem*                        CrownItem;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem) == 0x000010, "Wrong size on FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem, CrownItem) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem::CrownItem' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem, ReturnValue) == 0x000008, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem final
{
public:
	const class UFortItem*                        CrownItem;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem) == 0x000010, "Wrong size on FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem, CrownItem) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem::CrownItem' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem, ReturnValue) == 0x000008, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem final
{
public:
	const class UFortItem*                        CrownItem;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem) == 0x000010, "Wrong size on FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem, CrownItem) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem::CrownItem' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem, ReturnValue) == 0x000008, "Member 'FortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem final
{
public:
	const class UFortItem*                        CrownItem;
	bool                                          bDropped;
	bool                                          ReturnValue;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem) == 0x000010, "Wrong size on FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem, CrownItem) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem::CrownItem' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem, bDropped) == 0x000008, "Member 'FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem::bDropped' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem, ReturnValue) == 0x000009, "Member 'FortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory final
{
public:
	const class UFortWorldItem*                   ReturnValue;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory) == 0x000008, "Wrong alignment on FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory) == 0x000008, "Wrong size on FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory, ReturnValue) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount) == 0x000004, "Wrong alignment on FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount) == 0x000004, "Wrong size on FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount, ReturnValue) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount) == 0x000004, "Wrong alignment on FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount) == 0x000004, "Wrong size on FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount, ReturnValue) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_HasWonCrownInMatch final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_HasWonCrownInMatch) == 0x000001, "Wrong alignment on FortControllerComponent_VictoryCrowns_HasWonCrownInMatch");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_HasWonCrownInMatch) == 0x000001, "Wrong size on FortControllerComponent_VictoryCrowns_HasWonCrownInMatch");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_HasWonCrownInMatch, ReturnValue) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_HasWonCrownInMatch::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale) == 0x000001, "Wrong alignment on FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale) == 0x000001, "Wrong size on FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale, ReturnValue) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_HasWonRoyalRoyale::ReturnValue' has a wrong offset!");

struct FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory) == 0x000001, "Wrong alignment on FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory");
static_assert(sizeof(FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory) == 0x000001, "Wrong size on FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory");
static_assert(offsetof(FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory, ReturnValue) == 0x000000, "Member 'FortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory::ReturnValue' has a wrong offset!");

struct FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage final
{
public:
	const class AFortPlayerStateAthena*           FortPSA;
	bool                                          bAdded;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage) == 0x000008, "Wrong alignment on FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage");
static_assert(sizeof(FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage) == 0x000010, "Wrong size on FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage");
static_assert(offsetof(FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage, FortPSA) == 0x000000, "Member 'FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage::FortPSA' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage, bAdded) == 0x000008, "Member 'FortGameStateComponent_VictoryCrowns_ClientKillFeedMessage::bAdded' has a wrong offset!");

struct FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged final
{
public:
	class AFortPlayerControllerAthena*            FortPlayerControllerAthena;
	const class UFortItem*                        CrownItem;
};
static_assert(alignof(FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged) == 0x000008, "Wrong alignment on FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged");
static_assert(sizeof(FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged) == 0x000010, "Wrong size on FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged");
static_assert(offsetof(FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged, FortPlayerControllerAthena) == 0x000000, "Member 'FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged::FortPlayerControllerAthena' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged, CrownItem) == 0x000008, "Member 'FortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged::CrownItem' has a wrong offset!");

struct FortGameStateComponent_VictoryCrowns_IsCrownBearer final
{
public:
	const class AFortPlayerStateAthena*           FortPSA;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortGameStateComponent_VictoryCrowns_IsCrownBearer) == 0x000008, "Wrong alignment on FortGameStateComponent_VictoryCrowns_IsCrownBearer");
static_assert(sizeof(FortGameStateComponent_VictoryCrowns_IsCrownBearer) == 0x000010, "Wrong size on FortGameStateComponent_VictoryCrowns_IsCrownBearer");
static_assert(offsetof(FortGameStateComponent_VictoryCrowns_IsCrownBearer, FortPSA) == 0x000000, "Member 'FortGameStateComponent_VictoryCrowns_IsCrownBearer::FortPSA' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_VictoryCrowns_IsCrownBearer, ReturnValue) == 0x000008, "Member 'FortGameStateComponent_VictoryCrowns_IsCrownBearer::ReturnValue' has a wrong offset!");

struct FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale) == 0x000001, "Wrong alignment on FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale");
static_assert(sizeof(FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale) == 0x000001, "Wrong size on FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale");
static_assert(offsetof(FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale, ReturnValue) == 0x000000, "Member 'FortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale::ReturnValue' has a wrong offset!");

}
