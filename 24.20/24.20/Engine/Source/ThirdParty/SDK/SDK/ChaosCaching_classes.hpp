#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ChaosCaching_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "MovieScene_classes.hpp"

namespace SDK
{

class UChaosCacheCollection final : public UObject
{
public:
	TArray<class UChaosCache*>                    Caches;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCacheCollection">();
	}
	static class UChaosCacheCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosCacheCollection>();
	}
};
static_assert(alignof(UChaosCacheCollection) == 0x000008, "Wrong alignment on UChaosCacheCollection");
static_assert(sizeof(UChaosCacheCollection) == 0x000038, "Wrong size on UChaosCacheCollection");
static_assert(offsetof(UChaosCacheCollection, Caches) == 0x000028, "Member 'UChaosCacheCollection::Caches' has a wrong offset!");

class AChaosCacheManager : public AActor
{
public:
	class UChaosCacheCollection*                  CacheCollection;
	ECacheMode                                    CacheMode;
	EStartMode                                    StartMode;
	uint8                                         Pad_292[0x2];
	float                                         StartTime;
	uint8                                         Pad_298[0x8];
	TArray<struct FObservedComponent>             ObservedComponents;
	uint8                                         Pad_2B0[0x80];

public:
	void ResetAllComponentTransforms();
	void ResetSingleTransform(int32 InIndex);
	void SetStartTime(float InStartTime);
	void TriggerAll();
	void TriggerComponent(class UPrimitiveComponent* InComponent);
	void TriggerComponentByCache(class FName InCacheName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCacheManager">();
	}
	static class AChaosCacheManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosCacheManager>();
	}
};
static_assert(alignof(AChaosCacheManager) == 0x000008, "Wrong alignment on AChaosCacheManager");
static_assert(sizeof(AChaosCacheManager) == 0x000330, "Wrong size on AChaosCacheManager");
static_assert(offsetof(AChaosCacheManager, CacheCollection) == 0x000288, "Member 'AChaosCacheManager::CacheCollection' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, CacheMode) == 0x000290, "Member 'AChaosCacheManager::CacheMode' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, StartMode) == 0x000291, "Member 'AChaosCacheManager::StartMode' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, StartTime) == 0x000294, "Member 'AChaosCacheManager::StartTime' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, ObservedComponents) == 0x0002A0, "Member 'AChaosCacheManager::ObservedComponents' has a wrong offset!");

class AChaosCachePlayer final : public AChaosCacheManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCachePlayer">();
	}
	static class AChaosCachePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosCachePlayer>();
	}
};
static_assert(alignof(AChaosCachePlayer) == 0x000008, "Wrong alignment on AChaosCachePlayer");
static_assert(sizeof(AChaosCachePlayer) == 0x000330, "Wrong size on AChaosCachePlayer");

class UChaosCache final : public UObject
{
public:
	float                                         RecordedDuration;
	uint32                                        NumRecordedFrames;
	TArray<int32>                                 TrackToParticle;
	TArray<struct FPerParticleCacheData>          ParticleTracks;
	TMap<class FName, struct FRichCurves>         ChannelsTracks;
	TMap<class FName, struct FRichCurve>          CurveData;
	TMap<class FName, struct FCacheEventTrack>    EventTracks;
	struct FCacheSpawnableTemplate                Spawnable;
	struct FGuid                                  AdapterGuid;
	int32                                         Version;
	uint8                                         Pad_224[0x2C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCache">();
	}
	static class UChaosCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosCache>();
	}
};
static_assert(alignof(UChaosCache) == 0x000010, "Wrong alignment on UChaosCache");
static_assert(sizeof(UChaosCache) == 0x000250, "Wrong size on UChaosCache");
static_assert(offsetof(UChaosCache, RecordedDuration) == 0x000028, "Member 'UChaosCache::RecordedDuration' has a wrong offset!");
static_assert(offsetof(UChaosCache, NumRecordedFrames) == 0x00002C, "Member 'UChaosCache::NumRecordedFrames' has a wrong offset!");
static_assert(offsetof(UChaosCache, TrackToParticle) == 0x000030, "Member 'UChaosCache::TrackToParticle' has a wrong offset!");
static_assert(offsetof(UChaosCache, ParticleTracks) == 0x000040, "Member 'UChaosCache::ParticleTracks' has a wrong offset!");
static_assert(offsetof(UChaosCache, ChannelsTracks) == 0x000050, "Member 'UChaosCache::ChannelsTracks' has a wrong offset!");
static_assert(offsetof(UChaosCache, CurveData) == 0x0000A0, "Member 'UChaosCache::CurveData' has a wrong offset!");
static_assert(offsetof(UChaosCache, EventTracks) == 0x0000F0, "Member 'UChaosCache::EventTracks' has a wrong offset!");
static_assert(offsetof(UChaosCache, Spawnable) == 0x000140, "Member 'UChaosCache::Spawnable' has a wrong offset!");
static_assert(offsetof(UChaosCache, AdapterGuid) == 0x000210, "Member 'UChaosCache::AdapterGuid' has a wrong offset!");
static_assert(offsetof(UChaosCache, Version) == 0x000220, "Member 'UChaosCache::Version' has a wrong offset!");

class UMovieSceneChaosCacheSection final : public UMovieSceneBaseCacheSection
{
public:
	struct FMovieSceneChaosCacheParams            Params_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneChaosCacheSection">();
	}
	static class UMovieSceneChaosCacheSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneChaosCacheSection>();
	}
};
static_assert(alignof(UMovieSceneChaosCacheSection) == 0x000008, "Wrong alignment on UMovieSceneChaosCacheSection");
static_assert(sizeof(UMovieSceneChaosCacheSection) == 0x000120, "Wrong size on UMovieSceneChaosCacheSection");
static_assert(offsetof(UMovieSceneChaosCacheSection, Params_0) == 0x0000F8, "Member 'UMovieSceneChaosCacheSection::Params_0' has a wrong offset!");

class UMovieSceneChaosCacheTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             AnimationSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneChaosCacheTrack">();
	}
	static class UMovieSceneChaosCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneChaosCacheTrack>();
	}
};
static_assert(alignof(UMovieSceneChaosCacheTrack) == 0x000008, "Wrong alignment on UMovieSceneChaosCacheTrack");
static_assert(sizeof(UMovieSceneChaosCacheTrack) == 0x0000B0, "Wrong size on UMovieSceneChaosCacheTrack");
static_assert(offsetof(UMovieSceneChaosCacheTrack, AnimationSections) == 0x0000A0, "Member 'UMovieSceneChaosCacheTrack::AnimationSections' has a wrong offset!");

}
