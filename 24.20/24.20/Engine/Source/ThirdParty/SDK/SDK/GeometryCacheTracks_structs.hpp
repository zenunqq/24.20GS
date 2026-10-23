#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK
{

struct FMovieSceneGeometryCacheParams
{
public:
	class UGeometryCache*                         GeometryCacheAsset;
	struct FFrameNumber                           FirstLoopStartFrameOffset;
	struct FFrameNumber                           StartFrameOffset;
	struct FFrameNumber                           EndFrameOffset;
	float                                         PlayRate;
	uint8                                         bReverse : 1;
	uint8                                         Pad_19[0x3];
	float                                         StartOffset;
	float                                         EndOffset;
	uint8                                         Pad_24[0x4];
	struct FSoftObjectPath                        GeometryCache;
};
static_assert(alignof(FMovieSceneGeometryCacheParams) == 0x000008, "Wrong alignment on FMovieSceneGeometryCacheParams");
static_assert(sizeof(FMovieSceneGeometryCacheParams) == 0x000040, "Wrong size on FMovieSceneGeometryCacheParams");
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0x000000, "Member 'FMovieSceneGeometryCacheParams::GeometryCacheAsset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 0x000008, "Member 'FMovieSceneGeometryCacheParams::FirstLoopStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 0x00000C, "Member 'FMovieSceneGeometryCacheParams::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 0x000010, "Member 'FMovieSceneGeometryCacheParams::EndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, PlayRate) == 0x000014, "Member 'FMovieSceneGeometryCacheParams::PlayRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartOffset) == 0x00001C, "Member 'FMovieSceneGeometryCacheParams::StartOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndOffset) == 0x000020, "Member 'FMovieSceneGeometryCacheParams::EndOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 0x000028, "Member 'FMovieSceneGeometryCacheParams::GeometryCache' has a wrong offset!");

struct FMovieSceneGeometryCacheSectionTemplateParameters final : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                           SectionStartTime;
	struct FFrameNumber                           SectionEndTime;
};
static_assert(alignof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x000008, "Wrong alignment on FMovieSceneGeometryCacheSectionTemplateParameters");
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x000048, "Wrong size on FMovieSceneGeometryCacheSectionTemplateParameters");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 0x000040, "Member 'FMovieSceneGeometryCacheSectionTemplateParameters::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 0x000044, "Member 'FMovieSceneGeometryCacheSectionTemplateParameters::SectionEndTime' has a wrong offset!");

struct FMovieSceneGeometryCacheSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;
};
static_assert(alignof(FMovieSceneGeometryCacheSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneGeometryCacheSectionTemplate");
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplate) == 0x000068, "Wrong size on FMovieSceneGeometryCacheSectionTemplate");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneGeometryCacheSectionTemplate::Params' has a wrong offset!");

}
