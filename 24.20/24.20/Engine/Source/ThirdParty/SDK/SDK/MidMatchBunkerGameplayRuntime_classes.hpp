#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AFortAthenaMutator_MidMatchBunkerGameplay final : public AFortAthenaMutator
{
public:
	struct FGameplayTag                           BunkerKeycardPlayerCarrierSpecialActorTag;
	uint8                                         Pad_334[0xC];
	struct FSlateBrush                            BunkerKeycardFriendlyCarrierBrush;
	struct FSlateBrush                            BunkerKeycardEnemyCarrierBrush;
	struct FSlateBrush                            BunkerKeycardLocalPlayerCarrierBrush;
	struct FScalableFloat                         bHotfixRenderBunkerKeycardLocalPlayerCarrier;
	struct FScalableFloat                         bHotfixRenderBunkerKeycardEnemyCarrier;
	struct FScalableFloat                         HotfixBunkerKeycardEnemyCarrierRenderDistance2D;
	struct FScalableFloat                         bHotfixRenderBunkerKeycardFriendlyCarrier;
	struct FScalableFloat                         HotfixBunkerKeycardFriendlyCarrierRenderDistance2D;
	float                                         BunkerKeycardEnemyCarrierRenderDistance2D;
	float                                         BunkerKeycardFriendlyCarrierRenderDistance2D;
	bool                                          bRenderBunkerKeycardLocalPlayerCarrier;
	uint8                                         Pad_651[0xF];

public:
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_MidMatchBunkerGameplay">();
	}
	static class AFortAthenaMutator_MidMatchBunkerGameplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_MidMatchBunkerGameplay>();
	}
};
static_assert(alignof(AFortAthenaMutator_MidMatchBunkerGameplay) == 0x000010, "Wrong alignment on AFortAthenaMutator_MidMatchBunkerGameplay");
static_assert(sizeof(AFortAthenaMutator_MidMatchBunkerGameplay) == 0x000660, "Wrong size on AFortAthenaMutator_MidMatchBunkerGameplay");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, BunkerKeycardPlayerCarrierSpecialActorTag) == 0x000330, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::BunkerKeycardPlayerCarrierSpecialActorTag' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, BunkerKeycardFriendlyCarrierBrush) == 0x000340, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::BunkerKeycardFriendlyCarrierBrush' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, BunkerKeycardEnemyCarrierBrush) == 0x000400, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::BunkerKeycardEnemyCarrierBrush' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, BunkerKeycardLocalPlayerCarrierBrush) == 0x0004C0, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::BunkerKeycardLocalPlayerCarrierBrush' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, bHotfixRenderBunkerKeycardLocalPlayerCarrier) == 0x000580, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::bHotfixRenderBunkerKeycardLocalPlayerCarrier' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, bHotfixRenderBunkerKeycardEnemyCarrier) == 0x0005A8, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::bHotfixRenderBunkerKeycardEnemyCarrier' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, HotfixBunkerKeycardEnemyCarrierRenderDistance2D) == 0x0005D0, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::HotfixBunkerKeycardEnemyCarrierRenderDistance2D' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, bHotfixRenderBunkerKeycardFriendlyCarrier) == 0x0005F8, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::bHotfixRenderBunkerKeycardFriendlyCarrier' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, HotfixBunkerKeycardFriendlyCarrierRenderDistance2D) == 0x000620, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::HotfixBunkerKeycardFriendlyCarrierRenderDistance2D' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, BunkerKeycardEnemyCarrierRenderDistance2D) == 0x000648, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::BunkerKeycardEnemyCarrierRenderDistance2D' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, BunkerKeycardFriendlyCarrierRenderDistance2D) == 0x00064C, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::BunkerKeycardFriendlyCarrierRenderDistance2D' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_MidMatchBunkerGameplay, bRenderBunkerKeycardLocalPlayerCarrier) == 0x000650, "Member 'AFortAthenaMutator_MidMatchBunkerGameplay::bRenderBunkerKeycardLocalPlayerCarrier' has a wrong offset!");

}
