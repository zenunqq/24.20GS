#pragma once

#include "Basic.hpp"

#include "MovieScene_classes.hpp"
#include "GeometryCacheTracks_structs.hpp"

namespace SDK
{

class UMovieSceneGeometryCacheSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams         Params_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCacheSection">();
	}
	static class UMovieSceneGeometryCacheSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCacheSection>();
	}
};
static_assert(alignof(UMovieSceneGeometryCacheSection) == 0x000008, "Wrong alignment on UMovieSceneGeometryCacheSection");
static_assert(sizeof(UMovieSceneGeometryCacheSection) == 0x000130, "Wrong size on UMovieSceneGeometryCacheSection");
static_assert(offsetof(UMovieSceneGeometryCacheSection, Params_0) == 0x0000F0, "Member 'UMovieSceneGeometryCacheSection::Params_0' has a wrong offset!");

class UMovieSceneGeometryCacheTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             AnimationSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneGeometryCacheTrack">();
	}
	static class UMovieSceneGeometryCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneGeometryCacheTrack>();
	}
};
static_assert(alignof(UMovieSceneGeometryCacheTrack) == 0x000008, "Wrong alignment on UMovieSceneGeometryCacheTrack");
static_assert(sizeof(UMovieSceneGeometryCacheTrack) == 0x0000B0, "Wrong size on UMovieSceneGeometryCacheTrack");
static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 0x0000A0, "Member 'UMovieSceneGeometryCacheTrack::AnimationSections' has a wrong offset!");

}
