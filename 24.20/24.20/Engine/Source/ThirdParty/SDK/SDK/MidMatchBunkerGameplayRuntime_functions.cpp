#pragma once

#include "Basic.hpp"

#include "MidMatchBunkerGameplayRuntime_classes.hpp"
#include "MidMatchBunkerGameplayRuntime_parameters.hpp"

namespace SDK
{

void AFortAthenaMutator_MidMatchBunkerGameplay::OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_MidMatchBunkerGameplay", "OnPlaylistDataReady");

	Params::FortAthenaMutator_MidMatchBunkerGameplay_OnPlaylistDataReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
