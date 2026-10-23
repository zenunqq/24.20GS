#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK
{

enum class ECacheMode : uint8
{
	None                                     = 0,
	Play                                     = 1,
	Record                                   = 2,
	ECacheMode_MAX                           = 3,
};

enum class EStartMode : uint8
{
	Timed                                    = 0,
	Triggered                                = 1,
	EStartMode_MAX                           = 2,
};

struct alignas(0x08) FCacheEventBase
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FCacheEventBase) == 0x000008, "Wrong alignment on FCacheEventBase");
static_assert(sizeof(FCacheEventBase) == 0x000008, "Wrong size on FCacheEventBase");

struct FEnableStateEvent final : public FCacheEventBase
{
public:
	int32                                         Index;
	bool                                          bEnable;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FEnableStateEvent) == 0x000008, "Wrong alignment on FEnableStateEvent");
static_assert(sizeof(FEnableStateEvent) == 0x000010, "Wrong size on FEnableStateEvent");
static_assert(offsetof(FEnableStateEvent, Index) == 0x000008, "Member 'FEnableStateEvent::Index' has a wrong offset!");
static_assert(offsetof(FEnableStateEvent, bEnable) == 0x00000C, "Member 'FEnableStateEvent::bEnable' has a wrong offset!");

struct FBreakingEvent final : public FCacheEventBase
{
public:
	int32                                         Index;
	uint8                                         Pad_C[0x4];
	struct FVector                                Location;
	struct FVector                                Velocity;
	struct FVector                                AngularVelocity;
	float                                         Mass;
	uint8                                         Pad_5C[0x4];
	struct FVector                                BoundingBoxMin;
	struct FVector                                BoundingBoxMax;
};
static_assert(alignof(FBreakingEvent) == 0x000008, "Wrong alignment on FBreakingEvent");
static_assert(sizeof(FBreakingEvent) == 0x000090, "Wrong size on FBreakingEvent");
static_assert(offsetof(FBreakingEvent, Index) == 0x000008, "Member 'FBreakingEvent::Index' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, Location) == 0x000010, "Member 'FBreakingEvent::Location' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, Velocity) == 0x000028, "Member 'FBreakingEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, AngularVelocity) == 0x000040, "Member 'FBreakingEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, Mass) == 0x000058, "Member 'FBreakingEvent::Mass' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, BoundingBoxMin) == 0x000060, "Member 'FBreakingEvent::BoundingBoxMin' has a wrong offset!");
static_assert(offsetof(FBreakingEvent, BoundingBoxMax) == 0x000078, "Member 'FBreakingEvent::BoundingBoxMax' has a wrong offset!");

struct FCollisionEvent final : public FCacheEventBase
{
public:
	struct FVector                                Location;
	struct FVector                                AccumulatedImpulse;
	struct FVector                                Normal;
	struct FVector                                Velocity1;
	struct FVector                                Velocity2;
	struct FVector                                DeltaVelocity1;
	struct FVector                                DeltaVelocity2;
	struct FVector                                AngularVelocity1;
	struct FVector                                AngularVelocity2;
	float                                         Mass1;
	float                                         Mass2;
	float                                         PenetrationDepth;
	uint8                                         Pad_EC[0x4];
};
static_assert(alignof(FCollisionEvent) == 0x000008, "Wrong alignment on FCollisionEvent");
static_assert(sizeof(FCollisionEvent) == 0x0000F0, "Wrong size on FCollisionEvent");
static_assert(offsetof(FCollisionEvent, Location) == 0x000008, "Member 'FCollisionEvent::Location' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, AccumulatedImpulse) == 0x000020, "Member 'FCollisionEvent::AccumulatedImpulse' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Normal) == 0x000038, "Member 'FCollisionEvent::Normal' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Velocity1) == 0x000050, "Member 'FCollisionEvent::Velocity1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Velocity2) == 0x000068, "Member 'FCollisionEvent::Velocity2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, DeltaVelocity1) == 0x000080, "Member 'FCollisionEvent::DeltaVelocity1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, DeltaVelocity2) == 0x000098, "Member 'FCollisionEvent::DeltaVelocity2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, AngularVelocity1) == 0x0000B0, "Member 'FCollisionEvent::AngularVelocity1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, AngularVelocity2) == 0x0000C8, "Member 'FCollisionEvent::AngularVelocity2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Mass1) == 0x0000E0, "Member 'FCollisionEvent::Mass1' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, Mass2) == 0x0000E4, "Member 'FCollisionEvent::Mass2' has a wrong offset!");
static_assert(offsetof(FCollisionEvent, PenetrationDepth) == 0x0000E8, "Member 'FCollisionEvent::PenetrationDepth' has a wrong offset!");

struct FTrailingEvent final : public FCacheEventBase
{
public:
	int32                                         Index;
	uint8                                         Pad_C[0x4];
	struct FVector                                Location;
	struct FVector                                Velocity;
	struct FVector                                AngularVelocity;
	struct FVector                                BoundingBoxMin;
	struct FVector                                BoundingBoxMax;
};
static_assert(alignof(FTrailingEvent) == 0x000008, "Wrong alignment on FTrailingEvent");
static_assert(sizeof(FTrailingEvent) == 0x000088, "Wrong size on FTrailingEvent");
static_assert(offsetof(FTrailingEvent, Index) == 0x000008, "Member 'FTrailingEvent::Index' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, Location) == 0x000010, "Member 'FTrailingEvent::Location' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, Velocity) == 0x000028, "Member 'FTrailingEvent::Velocity' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, AngularVelocity) == 0x000040, "Member 'FTrailingEvent::AngularVelocity' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, BoundingBoxMin) == 0x000058, "Member 'FTrailingEvent::BoundingBoxMin' has a wrong offset!");
static_assert(offsetof(FTrailingEvent, BoundingBoxMax) == 0x000070, "Member 'FTrailingEvent::BoundingBoxMax' has a wrong offset!");

struct FCacheEventTrack final
{
public:
	class FName                                   Name;
	uint8                                         Pad_4[0x4];
	class UScriptStruct*                          Struct;
	TArray<float>                                 TimeStamps;
	uint8                                         Pad_20[0x18];
};
static_assert(alignof(FCacheEventTrack) == 0x000008, "Wrong alignment on FCacheEventTrack");
static_assert(sizeof(FCacheEventTrack) == 0x000038, "Wrong size on FCacheEventTrack");
static_assert(offsetof(FCacheEventTrack, Name) == 0x000000, "Member 'FCacheEventTrack::Name' has a wrong offset!");
static_assert(offsetof(FCacheEventTrack, Struct) == 0x000008, "Member 'FCacheEventTrack::Struct' has a wrong offset!");
static_assert(offsetof(FCacheEventTrack, TimeStamps) == 0x000010, "Member 'FCacheEventTrack::TimeStamps' has a wrong offset!");

struct alignas(0x10) FObservedComponent final
{
public:
	class FName                                   CacheName;
	uint8                                         Pad_4[0x4];
	struct FComponentReference                    ComponentRef;
	struct FSoftComponentReference                SoftComponentRef;
	bool                                          bIsSimulating;
	uint8                                         Pad_79[0xF7];
};
static_assert(alignof(FObservedComponent) == 0x000010, "Wrong alignment on FObservedComponent");
static_assert(sizeof(FObservedComponent) == 0x000170, "Wrong size on FObservedComponent");
static_assert(offsetof(FObservedComponent, CacheName) == 0x000000, "Member 'FObservedComponent::CacheName' has a wrong offset!");
static_assert(offsetof(FObservedComponent, ComponentRef) == 0x000008, "Member 'FObservedComponent::ComponentRef' has a wrong offset!");
static_assert(offsetof(FObservedComponent, SoftComponentRef) == 0x000030, "Member 'FObservedComponent::SoftComponentRef' has a wrong offset!");
static_assert(offsetof(FObservedComponent, bIsSimulating) == 0x000078, "Member 'FObservedComponent::bIsSimulating' has a wrong offset!");

struct FParticleTransformTrack final
{
public:
	struct FRawAnimSequenceTrack                  RawTransformTrack;
	float                                         BeginOffset;
	bool                                          bDeactivateOnEnd;
	uint8                                         Pad_35[0x3];
	TArray<float>                                 KeyTimestamps;
};
static_assert(alignof(FParticleTransformTrack) == 0x000008, "Wrong alignment on FParticleTransformTrack");
static_assert(sizeof(FParticleTransformTrack) == 0x000048, "Wrong size on FParticleTransformTrack");
static_assert(offsetof(FParticleTransformTrack, RawTransformTrack) == 0x000000, "Member 'FParticleTransformTrack::RawTransformTrack' has a wrong offset!");
static_assert(offsetof(FParticleTransformTrack, BeginOffset) == 0x000030, "Member 'FParticleTransformTrack::BeginOffset' has a wrong offset!");
static_assert(offsetof(FParticleTransformTrack, bDeactivateOnEnd) == 0x000034, "Member 'FParticleTransformTrack::bDeactivateOnEnd' has a wrong offset!");
static_assert(offsetof(FParticleTransformTrack, KeyTimestamps) == 0x000038, "Member 'FParticleTransformTrack::KeyTimestamps' has a wrong offset!");

struct FPerParticleCacheData final
{
public:
	struct FParticleTransformTrack                TransformData;
	TMap<class FName, struct FRichCurve>          CurveData;
};
static_assert(alignof(FPerParticleCacheData) == 0x000008, "Wrong alignment on FPerParticleCacheData");
static_assert(sizeof(FPerParticleCacheData) == 0x000098, "Wrong size on FPerParticleCacheData");
static_assert(offsetof(FPerParticleCacheData, TransformData) == 0x000000, "Member 'FPerParticleCacheData::TransformData' has a wrong offset!");
static_assert(offsetof(FPerParticleCacheData, CurveData) == 0x000048, "Member 'FPerParticleCacheData::CurveData' has a wrong offset!");

struct FCacheSpawnableTemplate final
{
public:
	class UObject*                                DuplicatedTemplate;
	uint8                                         Pad_8[0x8];
	struct FTransform                             InitialTransform;
	struct FTransform                             ComponentTransform;
};
static_assert(alignof(FCacheSpawnableTemplate) == 0x000010, "Wrong alignment on FCacheSpawnableTemplate");
static_assert(sizeof(FCacheSpawnableTemplate) == 0x0000D0, "Wrong size on FCacheSpawnableTemplate");
static_assert(offsetof(FCacheSpawnableTemplate, DuplicatedTemplate) == 0x000000, "Member 'FCacheSpawnableTemplate::DuplicatedTemplate' has a wrong offset!");
static_assert(offsetof(FCacheSpawnableTemplate, InitialTransform) == 0x000010, "Member 'FCacheSpawnableTemplate::InitialTransform' has a wrong offset!");
static_assert(offsetof(FCacheSpawnableTemplate, ComponentTransform) == 0x000070, "Member 'FCacheSpawnableTemplate::ComponentTransform' has a wrong offset!");

struct FRichCurves final
{
public:
	TArray<struct FRichCurve>                     RichCurves;
};
static_assert(alignof(FRichCurves) == 0x000008, "Wrong alignment on FRichCurves");
static_assert(sizeof(FRichCurves) == 0x000010, "Wrong size on FRichCurves");
static_assert(offsetof(FRichCurves, RichCurves) == 0x000000, "Member 'FRichCurves::RichCurves' has a wrong offset!");

struct FMovieSceneChaosCacheParams final : public FMovieSceneBaseCacheParams
{
public:
	class UChaosCacheCollection*                  CacheCollection;
};
static_assert(alignof(FMovieSceneChaosCacheParams) == 0x000008, "Wrong alignment on FMovieSceneChaosCacheParams");
static_assert(sizeof(FMovieSceneChaosCacheParams) == 0x000028, "Wrong size on FMovieSceneChaosCacheParams");
static_assert(offsetof(FMovieSceneChaosCacheParams, CacheCollection) == 0x000020, "Member 'FMovieSceneChaosCacheParams::CacheCollection' has a wrong offset!");

struct FMovieSceneChaosCacheSectionTemplateParameters final : public FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FMovieSceneChaosCacheParams            ChaosCacheParams;
};
static_assert(alignof(FMovieSceneChaosCacheSectionTemplateParameters) == 0x000008, "Wrong alignment on FMovieSceneChaosCacheSectionTemplateParameters");
static_assert(sizeof(FMovieSceneChaosCacheSectionTemplateParameters) == 0x000030, "Wrong size on FMovieSceneChaosCacheSectionTemplateParameters");
static_assert(offsetof(FMovieSceneChaosCacheSectionTemplateParameters, ChaosCacheParams) == 0x000008, "Member 'FMovieSceneChaosCacheSectionTemplateParameters::ChaosCacheParams' has a wrong offset!");

struct FMovieSceneChaosCacheSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneChaosCacheSectionTemplateParameters Params;
};
static_assert(alignof(FMovieSceneChaosCacheSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneChaosCacheSectionTemplate");
static_assert(sizeof(FMovieSceneChaosCacheSectionTemplate) == 0x000050, "Wrong size on FMovieSceneChaosCacheSectionTemplate");
static_assert(offsetof(FMovieSceneChaosCacheSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneChaosCacheSectionTemplate::Params' has a wrong offset!");

}
