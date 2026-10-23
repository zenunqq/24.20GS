#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady) == 0x000008, "Wrong alignment on FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady");
static_assert(sizeof(FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady) == 0x000030, "Wrong size on FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady");
static_assert(offsetof(FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady, GameState) == 0x000000, "Member 'FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady::GameState' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady, Playlist) == 0x000008, "Member 'FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady::Playlist' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady, PlaylistContextTags) == 0x000010, "Member 'FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady::PlaylistContextTags' has a wrong offset!");

}
