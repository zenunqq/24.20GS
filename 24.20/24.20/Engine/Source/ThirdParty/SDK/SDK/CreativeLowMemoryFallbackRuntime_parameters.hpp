#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged) == 0x000008, "Wrong alignment on CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged");
static_assert(sizeof(CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged) == 0x000030, "Wrong size on CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged");
static_assert(offsetof(CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged, GameState) == 0x000000, "Member 'CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged::GameState' has a wrong offset!");
static_assert(offsetof(CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged, Playlist) == 0x000008, "Member 'CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged::Playlist' has a wrong offset!");
static_assert(offsetof(CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged, PlaylistContextTags) == 0x000010, "Member 'CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged::PlaylistContextTags' has a wrong offset!");

}
