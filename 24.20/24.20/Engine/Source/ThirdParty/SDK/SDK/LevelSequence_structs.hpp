#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"

namespace SDK
{

struct FLevelSequenceBindingReference final
{
public:
	class FString                                 PackageName;
	struct FSoftObjectPath                        ExternalObjectPath;
	class FString                                 ObjectPath;
};
static_assert(alignof(FLevelSequenceBindingReference) == 0x000008, "Wrong alignment on FLevelSequenceBindingReference");
static_assert(sizeof(FLevelSequenceBindingReference) == 0x000038, "Wrong size on FLevelSequenceBindingReference");
static_assert(offsetof(FLevelSequenceBindingReference, PackageName) == 0x000000, "Member 'FLevelSequenceBindingReference::PackageName' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReference, ExternalObjectPath) == 0x000010, "Member 'FLevelSequenceBindingReference::ExternalObjectPath' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReference, ObjectPath) == 0x000028, "Member 'FLevelSequenceBindingReference::ObjectPath' has a wrong offset!");

struct FLevelSequenceBindingReferenceArray final
{
public:
	TArray<struct FLevelSequenceBindingReference> References;
};
static_assert(alignof(FLevelSequenceBindingReferenceArray) == 0x000008, "Wrong alignment on FLevelSequenceBindingReferenceArray");
static_assert(sizeof(FLevelSequenceBindingReferenceArray) == 0x000010, "Wrong size on FLevelSequenceBindingReferenceArray");
static_assert(offsetof(FLevelSequenceBindingReferenceArray, References) == 0x000000, "Member 'FLevelSequenceBindingReferenceArray::References' has a wrong offset!");

struct FLevelSequenceBindingReferences final
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;
	TSet<struct FGuid>                            AnimSequenceInstances;
	TSet<struct FGuid>                            PostProcessInstances;
};
static_assert(alignof(FLevelSequenceBindingReferences) == 0x000008, "Wrong alignment on FLevelSequenceBindingReferences");
static_assert(sizeof(FLevelSequenceBindingReferences) == 0x0000F0, "Wrong size on FLevelSequenceBindingReferences");
static_assert(offsetof(FLevelSequenceBindingReferences, BindingIdToReferences) == 0x000000, "Member 'FLevelSequenceBindingReferences::BindingIdToReferences' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReferences, AnimSequenceInstances) == 0x000050, "Member 'FLevelSequenceBindingReferences::AnimSequenceInstances' has a wrong offset!");
static_assert(offsetof(FLevelSequenceBindingReferences, PostProcessInstances) == 0x0000A0, "Member 'FLevelSequenceBindingReferences::PostProcessInstances' has a wrong offset!");

struct FLevelSequenceCameraSettings final
{
public:
	bool                                          bOverrideAspectRatioAxisConstraint;
	EAspectRatioAxisConstraint                    AspectRatioAxisConstraint;
};
static_assert(alignof(FLevelSequenceCameraSettings) == 0x000001, "Wrong alignment on FLevelSequenceCameraSettings");
static_assert(sizeof(FLevelSequenceCameraSettings) == 0x000002, "Wrong size on FLevelSequenceCameraSettings");
static_assert(offsetof(FLevelSequenceCameraSettings, bOverrideAspectRatioAxisConstraint) == 0x000000, "Member 'FLevelSequenceCameraSettings::bOverrideAspectRatioAxisConstraint' has a wrong offset!");
static_assert(offsetof(FLevelSequenceCameraSettings, AspectRatioAxisConstraint) == 0x000001, "Member 'FLevelSequenceCameraSettings::AspectRatioAxisConstraint' has a wrong offset!");

struct alignas(0x08) FLevelSequenceLegacyObjectReference final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FLevelSequenceLegacyObjectReference) == 0x000008, "Wrong alignment on FLevelSequenceLegacyObjectReference");
static_assert(sizeof(FLevelSequenceLegacyObjectReference) == 0x000020, "Wrong size on FLevelSequenceLegacyObjectReference");

struct alignas(0x08) FLevelSequenceObjectReferenceMap final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FLevelSequenceObjectReferenceMap) == 0x000008, "Wrong alignment on FLevelSequenceObjectReferenceMap");
static_assert(sizeof(FLevelSequenceObjectReferenceMap) == 0x000050, "Wrong size on FLevelSequenceObjectReferenceMap");

struct FBoundActorProxy final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FBoundActorProxy) == 0x000001, "Wrong alignment on FBoundActorProxy");
static_assert(sizeof(FBoundActorProxy) == 0x000001, "Wrong size on FBoundActorProxy");

struct FLevelSequenceAnimSequenceLinkItem final
{
public:
	struct FGuid                                  SkelTrackGuid;
	struct FSoftObjectPath                        PathToAnimSequence;
	bool                                          bExportTransforms;
	bool                                          bExportMorphTargets;
	bool                                          bExportAttributeCurves;
	bool                                          bExportMaterialCurves;
	EAnimInterpolationType                        Interpolation;
	ERichCurveInterpMode                          CurveInterpolation;
	bool                                          bRecordInWorldSpace;
	bool                                          bEvaluateAllSkeletalMeshComponents;
};
static_assert(alignof(FLevelSequenceAnimSequenceLinkItem) == 0x000008, "Wrong alignment on FLevelSequenceAnimSequenceLinkItem");
static_assert(sizeof(FLevelSequenceAnimSequenceLinkItem) == 0x000030, "Wrong size on FLevelSequenceAnimSequenceLinkItem");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid) == 0x000000, "Member 'FLevelSequenceAnimSequenceLinkItem::SkelTrackGuid' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence) == 0x000010, "Member 'FLevelSequenceAnimSequenceLinkItem::PathToAnimSequence' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportTransforms) == 0x000028, "Member 'FLevelSequenceAnimSequenceLinkItem::bExportTransforms' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportMorphTargets) == 0x000029, "Member 'FLevelSequenceAnimSequenceLinkItem::bExportMorphTargets' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportAttributeCurves) == 0x00002A, "Member 'FLevelSequenceAnimSequenceLinkItem::bExportAttributeCurves' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bExportMaterialCurves) == 0x00002B, "Member 'FLevelSequenceAnimSequenceLinkItem::bExportMaterialCurves' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, Interpolation) == 0x00002C, "Member 'FLevelSequenceAnimSequenceLinkItem::Interpolation' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, CurveInterpolation) == 0x00002D, "Member 'FLevelSequenceAnimSequenceLinkItem::CurveInterpolation' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bRecordInWorldSpace) == 0x00002E, "Member 'FLevelSequenceAnimSequenceLinkItem::bRecordInWorldSpace' has a wrong offset!");
static_assert(offsetof(FLevelSequenceAnimSequenceLinkItem, bEvaluateAllSkeletalMeshComponents) == 0x00002F, "Member 'FLevelSequenceAnimSequenceLinkItem::bEvaluateAllSkeletalMeshComponents' has a wrong offset!");

struct FLevelSequenceObject final
{
public:
	TLazyObjectPtr<class UObject>                 ObjectOrOwner;
	uint8                                         Pad_1C[0x4];
	class FString                                 ComponentName;
	TWeakObjectPtr<class UObject>                 CachedComponent;
};
static_assert(alignof(FLevelSequenceObject) == 0x000008, "Wrong alignment on FLevelSequenceObject");
static_assert(sizeof(FLevelSequenceObject) == 0x000038, "Wrong size on FLevelSequenceObject");
static_assert(offsetof(FLevelSequenceObject, ObjectOrOwner) == 0x000000, "Member 'FLevelSequenceObject::ObjectOrOwner' has a wrong offset!");
static_assert(offsetof(FLevelSequenceObject, ComponentName) == 0x000020, "Member 'FLevelSequenceObject::ComponentName' has a wrong offset!");
static_assert(offsetof(FLevelSequenceObject, CachedComponent) == 0x000030, "Member 'FLevelSequenceObject::CachedComponent' has a wrong offset!");

struct FLevelSequenceSnapshotSettings final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FLevelSequenceSnapshotSettings) == 0x000001, "Wrong alignment on FLevelSequenceSnapshotSettings");
static_assert(sizeof(FLevelSequenceSnapshotSettings) == 0x000001, "Wrong size on FLevelSequenceSnapshotSettings");

struct FLevelSequencePlayerSnapshot final
{
public:
	class FString                                 RootName;
	struct FQualifiedFrameTime                    RootTime;
	struct FQualifiedFrameTime                    SourceTime;
	class FString                                 CurrentShotName;
	struct FQualifiedFrameTime                    CurrentShotLocalTime;
	struct FQualifiedFrameTime                    CurrentShotSourceTime;
	class FString                                 SourceTimecode;
	TSoftObjectPtr<class UCameraComponent>        CameraComponent;
	class ULevelSequence*                         ActiveShot;
	struct FMovieSceneSequenceID                  ShotID;
	uint8                                         Pad_A4[0x4];
	class FString                                 MasterName;
	struct FQualifiedFrameTime                    MasterTime;
};
static_assert(alignof(FLevelSequencePlayerSnapshot) == 0x000008, "Wrong alignment on FLevelSequencePlayerSnapshot");
static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x0000C8, "Wrong size on FLevelSequencePlayerSnapshot");
static_assert(offsetof(FLevelSequencePlayerSnapshot, RootName) == 0x000000, "Member 'FLevelSequencePlayerSnapshot::RootName' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, RootTime) == 0x000010, "Member 'FLevelSequencePlayerSnapshot::RootTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTime) == 0x000020, "Member 'FLevelSequencePlayerSnapshot::SourceTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotName) == 0x000030, "Member 'FLevelSequencePlayerSnapshot::CurrentShotName' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime) == 0x000040, "Member 'FLevelSequencePlayerSnapshot::CurrentShotLocalTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CurrentShotSourceTime) == 0x000050, "Member 'FLevelSequencePlayerSnapshot::CurrentShotSourceTime' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, SourceTimecode) == 0x000060, "Member 'FLevelSequencePlayerSnapshot::SourceTimecode' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, CameraComponent) == 0x000070, "Member 'FLevelSequencePlayerSnapshot::CameraComponent' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, ActiveShot) == 0x000098, "Member 'FLevelSequencePlayerSnapshot::ActiveShot' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, ShotID) == 0x0000A0, "Member 'FLevelSequencePlayerSnapshot::ShotID' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterName) == 0x0000A8, "Member 'FLevelSequencePlayerSnapshot::MasterName' has a wrong offset!");
static_assert(offsetof(FLevelSequencePlayerSnapshot, MasterTime) == 0x0000B8, "Member 'FLevelSequencePlayerSnapshot::MasterTime' has a wrong offset!");

}
