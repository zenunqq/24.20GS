#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMoviePlayerSettings final : public UObject
{
public:
	bool                                          bWaitForMoviesToComplete;
	bool                                          bMoviesAreSkippable;
	uint8                                         Pad_2A[0x6];
	TArray<class FString>                         StartupMovies;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoviePlayerSettings">();
	}
	static class UMoviePlayerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoviePlayerSettings>();
	}
};
static_assert(alignof(UMoviePlayerSettings) == 0x000008, "Wrong alignment on UMoviePlayerSettings");
static_assert(sizeof(UMoviePlayerSettings) == 0x000040, "Wrong size on UMoviePlayerSettings");
static_assert(offsetof(UMoviePlayerSettings, bWaitForMoviesToComplete) == 0x000028, "Member 'UMoviePlayerSettings::bWaitForMoviesToComplete' has a wrong offset!");
static_assert(offsetof(UMoviePlayerSettings, bMoviesAreSkippable) == 0x000029, "Member 'UMoviePlayerSettings::bMoviesAreSkippable' has a wrong offset!");
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x000030, "Member 'UMoviePlayerSettings::StartupMovies' has a wrong offset!");

}
