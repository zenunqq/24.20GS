#pragma once

#include "Basic.hpp"

#include "CreativeLowMemoryFallbackRuntime_classes.hpp"
#include "CreativeLowMemoryFallbackRuntime_parameters.hpp"

namespace SDK
{

void UCreativeLowMemoryFallbackWorldSubsystem::OnPlaylistDataChanged(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeLowMemoryFallbackWorldSubsystem", "OnPlaylistDataChanged");

	Params::CreativeLowMemoryFallbackWorldSubsystem_OnPlaylistDataChanged Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
