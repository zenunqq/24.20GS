#pragma once

#include "Basic.hpp"

#include "ModelViewViewModel_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UFortVictoryCrownViewModel final : public UMVVMViewModelBase
{
public:
	int32                                         BestowedCount;
	bool                                          bHasWonCrownInMatch;
	bool                                          bHasWonRoyalRoyale;
	uint8                                         Pad_6E[0x2];
	TWeakObjectPtr<class UFortControllerComponent_VictoryCrowns> BoundVictoryCrownsComponent;

public:
	void HandleOnHasWonCrownInMatch();
	void HandleOnHasWonRoyalRoyale();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVictoryCrownViewModel">();
	}
	static class UFortVictoryCrownViewModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVictoryCrownViewModel>();
	}
};
static_assert(alignof(UFortVictoryCrownViewModel) == 0x000008, "Wrong alignment on UFortVictoryCrownViewModel");
static_assert(sizeof(UFortVictoryCrownViewModel) == 0x000078, "Wrong size on UFortVictoryCrownViewModel");
static_assert(offsetof(UFortVictoryCrownViewModel, BestowedCount) == 0x000068, "Member 'UFortVictoryCrownViewModel::BestowedCount' has a wrong offset!");
static_assert(offsetof(UFortVictoryCrownViewModel, bHasWonCrownInMatch) == 0x00006C, "Member 'UFortVictoryCrownViewModel::bHasWonCrownInMatch' has a wrong offset!");
static_assert(offsetof(UFortVictoryCrownViewModel, bHasWonRoyalRoyale) == 0x00006D, "Member 'UFortVictoryCrownViewModel::bHasWonRoyalRoyale' has a wrong offset!");
static_assert(offsetof(UFortVictoryCrownViewModel, BoundVictoryCrownsComponent) == 0x000070, "Member 'UFortVictoryCrownViewModel::BoundVictoryCrownsComponent' has a wrong offset!");

class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{
public:
	TMulticastInlineDelegate<void(class AFortPlayerControllerAthena* FortPlayerControllerAthena, class UFortItem* CrownItem)> OnVictoryCrownStatusChanged;
	TMulticastInlineDelegate<void()>              OnHasWonCrownInMatch;
	TMulticastInlineDelegate<void()>              OnHasWonRoyalRoyale;
	uint8                                         Pad_D8[0x30];
	TSoftObjectPtr<class UFortWorldItemDefinition> CrownInventoryItemClass;
	bool                                          bWonCrownInMatch;
	bool                                          bWonRoyalRoyale;
	uint8                                         Pad_132[0x6];
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> RoyalRoyaleEmoteItemDefinition;
	class UDataTable*                             VictoryCrownPlaylistData;
	struct FGameplayTagContainer                  SourceTagsForRoyalRoyale;
	struct FVictoryCrownAccountData               VictoryCrownAccountData;
	struct FScalableFloat                         InitialGrantDelay;
	uint8                                         Pad_1C8[0xA8];
	bool                                          bKillFeedBroadcastReady;
	uint8                                         Pad_271[0x7];

public:
	void CacheAccountItemData();
	void DebugForceSetRoyalRoyaleAchievedCount(int32 NewRoyalRoyaleCount);
	void HandleEnterAircraft();
	void HandleExitAircraft(class AController* ExitingController);
	void HandlePawnChanged(class APawn* OldPawn, class APawn* NewPawn);
	void OnAthenaProfileInitialized();
	void OnRep_VictoryCrownAccountData();
	void OnRep_WonCrownInMatch();
	void OnRep_WonRoyalRoyale();

	bool AuthorityHasDroppedCrownItem(const class UFortItem* CrownItem) const;
	bool AuthorityHasHeldCrownItem(const class UFortItem* CrownItem) const;
	bool AuthorityHasSquadDroppedCrownItem(const class UFortItem* CrownItem) const;
	bool AuthorityHasSquadHeldCrownItem(const class UFortItem* CrownItem) const;
	bool AuthoritySquadHasSeenCrownItem(const class UFortItem* CrownItem, const bool bDropped) const;
	const class UFortWorldItem* GetCrownInPlayerInventory() const;
	const int32 GetRoyalRoyaleAchievedCount() const;
	const int32 GetVictoryCrownsBestowedCount() const;
	bool HasWonCrownInMatch() const;
	bool HasWonRoyalRoyale() const;
	bool IsCrownInPlayerInventory() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_VictoryCrowns">();
	}
	static class UFortControllerComponent_VictoryCrowns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_VictoryCrowns>();
	}
};
static_assert(alignof(UFortControllerComponent_VictoryCrowns) == 0x000008, "Wrong alignment on UFortControllerComponent_VictoryCrowns");
static_assert(sizeof(UFortControllerComponent_VictoryCrowns) == 0x000278, "Wrong size on UFortControllerComponent_VictoryCrowns");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, OnVictoryCrownStatusChanged) == 0x0000A8, "Member 'UFortControllerComponent_VictoryCrowns::OnVictoryCrownStatusChanged' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, OnHasWonCrownInMatch) == 0x0000B8, "Member 'UFortControllerComponent_VictoryCrowns::OnHasWonCrownInMatch' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, OnHasWonRoyalRoyale) == 0x0000C8, "Member 'UFortControllerComponent_VictoryCrowns::OnHasWonRoyalRoyale' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, CrownInventoryItemClass) == 0x000108, "Member 'UFortControllerComponent_VictoryCrowns::CrownInventoryItemClass' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, bWonCrownInMatch) == 0x000130, "Member 'UFortControllerComponent_VictoryCrowns::bWonCrownInMatch' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, bWonRoyalRoyale) == 0x000131, "Member 'UFortControllerComponent_VictoryCrowns::bWonRoyalRoyale' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, VictoryCrownAccountItemDefinition) == 0x000138, "Member 'UFortControllerComponent_VictoryCrowns::VictoryCrownAccountItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, RoyalRoyaleEmoteItemDefinition) == 0x000140, "Member 'UFortControllerComponent_VictoryCrowns::RoyalRoyaleEmoteItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, VictoryCrownPlaylistData) == 0x000168, "Member 'UFortControllerComponent_VictoryCrowns::VictoryCrownPlaylistData' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, SourceTagsForRoyalRoyale) == 0x000170, "Member 'UFortControllerComponent_VictoryCrowns::SourceTagsForRoyalRoyale' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, VictoryCrownAccountData) == 0x000190, "Member 'UFortControllerComponent_VictoryCrowns::VictoryCrownAccountData' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, InitialGrantDelay) == 0x0001A0, "Member 'UFortControllerComponent_VictoryCrowns::InitialGrantDelay' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, bKillFeedBroadcastReady) == 0x000270, "Member 'UFortControllerComponent_VictoryCrowns::bKillFeedBroadcastReady' has a wrong offset!");

class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCosmeticStatObject_HasCrown">();
	}
	static class UFortCosmeticStatObject_HasCrown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCosmeticStatObject_HasCrown>();
	}
};
static_assert(alignof(UFortCosmeticStatObject_HasCrown) == 0x000008, "Wrong alignment on UFortCosmeticStatObject_HasCrown");
static_assert(sizeof(UFortCosmeticStatObject_HasCrown) == 0x000090, "Wrong size on UFortCosmeticStatObject_HasCrown");
static_assert(offsetof(UFortCosmeticStatObject_HasCrown, VictoryCrownAccountItemDefinition) == 0x000088, "Member 'UFortCosmeticStatObject_HasCrown::VictoryCrownAccountItemDefinition' has a wrong offset!");

class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;
	TArray<class UFortControllerComponent_VictoryCrowns*> CachedCrownComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCosmeticStatObject_TotalRoyalRoyales">();
	}
	static class UFortCosmeticStatObject_TotalRoyalRoyales* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCosmeticStatObject_TotalRoyalRoyales>();
	}
};
static_assert(alignof(UFortCosmeticStatObject_TotalRoyalRoyales) == 0x000008, "Wrong alignment on UFortCosmeticStatObject_TotalRoyalRoyales");
static_assert(sizeof(UFortCosmeticStatObject_TotalRoyalRoyales) == 0x0000A0, "Wrong size on UFortCosmeticStatObject_TotalRoyalRoyales");
static_assert(offsetof(UFortCosmeticStatObject_TotalRoyalRoyales, VictoryCrownAccountItemDefinition) == 0x000088, "Member 'UFortCosmeticStatObject_TotalRoyalRoyales::VictoryCrownAccountItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortCosmeticStatObject_TotalRoyalRoyales, CachedCrownComponents) == 0x000090, "Member 'UFortCosmeticStatObject_TotalRoyalRoyales::CachedCrownComponents' has a wrong offset!");

class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{
public:
	class UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCosmeticStatObject_TotalVictoryCrowns">();
	}
	static class UFortCosmeticStatObject_TotalVictoryCrowns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCosmeticStatObject_TotalVictoryCrowns>();
	}
};
static_assert(alignof(UFortCosmeticStatObject_TotalVictoryCrowns) == 0x000008, "Wrong alignment on UFortCosmeticStatObject_TotalVictoryCrowns");
static_assert(sizeof(UFortCosmeticStatObject_TotalVictoryCrowns) == 0x000090, "Wrong size on UFortCosmeticStatObject_TotalVictoryCrowns");
static_assert(offsetof(UFortCosmeticStatObject_TotalVictoryCrowns, VictoryCrownAccountItemDefinition) == 0x000088, "Member 'UFortCosmeticStatObject_TotalVictoryCrowns::VictoryCrownAccountItemDefinition' has a wrong offset!");

class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{
public:
	TArray<class AFortPlayerStateAthena*>         CrownBearerPlayerStates;
	class FText                                   KillFeedFormat_Dropped;
	class FText                                   KillFeedFormat_PickedUp;
	uint8                                         Pad_E0[0x18];

public:
	void ClientKillFeedMessage(const class AFortPlayerStateAthena* FortPSA, bool bAdded);
	void HandleCrownStatusChanged(class AFortPlayerControllerAthena* FortPlayerControllerAthena, const class UFortItem* CrownItem);
	void OnRep_CrownBearerPlayerStates();

	bool IsCrownBearer(const class AFortPlayerStateAthena* FortPSA) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameStateComponent_VictoryCrowns">();
	}
	static class UFortGameStateComponent_VictoryCrowns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameStateComponent_VictoryCrowns>();
	}
};
static_assert(alignof(UFortGameStateComponent_VictoryCrowns) == 0x000008, "Wrong alignment on UFortGameStateComponent_VictoryCrowns");
static_assert(sizeof(UFortGameStateComponent_VictoryCrowns) == 0x0000F8, "Wrong size on UFortGameStateComponent_VictoryCrowns");
static_assert(offsetof(UFortGameStateComponent_VictoryCrowns, CrownBearerPlayerStates) == 0x0000A0, "Member 'UFortGameStateComponent_VictoryCrowns::CrownBearerPlayerStates' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_VictoryCrowns, KillFeedFormat_Dropped) == 0x0000B0, "Member 'UFortGameStateComponent_VictoryCrowns::KillFeedFormat_Dropped' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_VictoryCrowns, KillFeedFormat_PickedUp) == 0x0000C8, "Member 'UFortGameStateComponent_VictoryCrowns::KillFeedFormat_PickedUp' has a wrong offset!");

class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{
public:
	class UDataTable*                             VictoryCrownPlaylistData;
	bool                                          bInitializeSuccess;
	bool                                          bSelectedPlaylistSupportCrown;
	uint8                                         Pad_B2[0x6];
	class UFortSocialParty*                       PersistentParty;

public:
	void PlaylistChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPawnComponent_VictoryCrownsFrontEnd">();
	}
	static class UFortPawnComponent_VictoryCrownsFrontEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPawnComponent_VictoryCrownsFrontEnd>();
	}
};
static_assert(alignof(UFortPawnComponent_VictoryCrownsFrontEnd) == 0x000008, "Wrong alignment on UFortPawnComponent_VictoryCrownsFrontEnd");
static_assert(sizeof(UFortPawnComponent_VictoryCrownsFrontEnd) == 0x0000C0, "Wrong size on UFortPawnComponent_VictoryCrownsFrontEnd");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, VictoryCrownPlaylistData) == 0x0000A8, "Member 'UFortPawnComponent_VictoryCrownsFrontEnd::VictoryCrownPlaylistData' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, bInitializeSuccess) == 0x0000B0, "Member 'UFortPawnComponent_VictoryCrownsFrontEnd::bInitializeSuccess' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, bSelectedPlaylistSupportCrown) == 0x0000B1, "Member 'UFortPawnComponent_VictoryCrownsFrontEnd::bSelectedPlaylistSupportCrown' has a wrong offset!");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, PersistentParty) == 0x0000B8, "Member 'UFortPawnComponent_VictoryCrownsFrontEnd::PersistentParty' has a wrong offset!");

class UFortPlayerStateComponent_VictoryCrowns final : public UFortPlayerStateComponent
{
public:
	bool                                          bHasWonRoyalRoyale;
	uint8                                         Pad_A1[0x7];

public:
	bool GetWonRoyalRoyale() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerStateComponent_VictoryCrowns">();
	}
	static class UFortPlayerStateComponent_VictoryCrowns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerStateComponent_VictoryCrowns>();
	}
};
static_assert(alignof(UFortPlayerStateComponent_VictoryCrowns) == 0x000008, "Wrong alignment on UFortPlayerStateComponent_VictoryCrowns");
static_assert(sizeof(UFortPlayerStateComponent_VictoryCrowns) == 0x0000A8, "Wrong size on UFortPlayerStateComponent_VictoryCrowns");
static_assert(offsetof(UFortPlayerStateComponent_VictoryCrowns, bHasWonRoyalRoyale) == 0x0000A0, "Member 'UFortPlayerStateComponent_VictoryCrowns::bHasWonRoyalRoyale' has a wrong offset!");

}
