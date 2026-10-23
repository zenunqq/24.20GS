#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ELiveLinkCameraProjectionMode : uint8
{
	Perspective                              = 0,
	Orthographic                             = 1,
	ELiveLinkCameraProjectionMode_MAX        = 2,
};

enum class ELiveLinkSourceMode : uint8
{
	Latest                                   = 0,
	EngineTime                               = 1,
	Timecode                                 = 2,
	ELiveLinkSourceMode_MAX                  = 3,
};

struct alignas(0x08) FLiveLinkSourceHandle final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FLiveLinkSourceHandle) == 0x000008, "Wrong alignment on FLiveLinkSourceHandle");
static_assert(sizeof(FLiveLinkSourceHandle) == 0x000018, "Wrong size on FLiveLinkSourceHandle");

struct FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                           PropertyNames;
};
static_assert(alignof(FLiveLinkBaseStaticData) == 0x000008, "Wrong alignment on FLiveLinkBaseStaticData");
static_assert(sizeof(FLiveLinkBaseStaticData) == 0x000010, "Wrong size on FLiveLinkBaseStaticData");
static_assert(offsetof(FLiveLinkBaseStaticData, PropertyNames) == 0x000000, "Member 'FLiveLinkBaseStaticData::PropertyNames' has a wrong offset!");

struct FLiveLinkSkeletonStaticData final : public FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                           BoneNames;
	TArray<int32>                                 BoneParents;
};
static_assert(alignof(FLiveLinkSkeletonStaticData) == 0x000008, "Wrong alignment on FLiveLinkSkeletonStaticData");
static_assert(sizeof(FLiveLinkSkeletonStaticData) == 0x000030, "Wrong size on FLiveLinkSkeletonStaticData");
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneNames) == 0x000010, "Member 'FLiveLinkSkeletonStaticData::BoneNames' has a wrong offset!");
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneParents) == 0x000020, "Member 'FLiveLinkSkeletonStaticData::BoneParents' has a wrong offset!");

struct FLiveLinkWorldTime final
{
public:
	double                                        Time;
	double                                        Offset;
};
static_assert(alignof(FLiveLinkWorldTime) == 0x000008, "Wrong alignment on FLiveLinkWorldTime");
static_assert(sizeof(FLiveLinkWorldTime) == 0x000010, "Wrong size on FLiveLinkWorldTime");
static_assert(offsetof(FLiveLinkWorldTime, Time) == 0x000000, "Member 'FLiveLinkWorldTime::Time' has a wrong offset!");
static_assert(offsetof(FLiveLinkWorldTime, Offset) == 0x000008, "Member 'FLiveLinkWorldTime::Offset' has a wrong offset!");

struct FLiveLinkMetaData final
{
public:
	TMap<class FName, class FString>              StringMetaData;
	struct FQualifiedFrameTime                    SceneTime;
};
static_assert(alignof(FLiveLinkMetaData) == 0x000008, "Wrong alignment on FLiveLinkMetaData");
static_assert(sizeof(FLiveLinkMetaData) == 0x000060, "Wrong size on FLiveLinkMetaData");
static_assert(offsetof(FLiveLinkMetaData, StringMetaData) == 0x000000, "Member 'FLiveLinkMetaData::StringMetaData' has a wrong offset!");
static_assert(offsetof(FLiveLinkMetaData, SceneTime) == 0x000050, "Member 'FLiveLinkMetaData::SceneTime' has a wrong offset!");

struct FLiveLinkBaseFrameData
{
public:
	struct FLiveLinkWorldTime                     WorldTime;
	struct FLiveLinkMetaData                      MetaData;
	TArray<float>                                 PropertyValues;
	uint8                                         Pad_80[0x20];
};
static_assert(alignof(FLiveLinkBaseFrameData) == 0x000008, "Wrong alignment on FLiveLinkBaseFrameData");
static_assert(sizeof(FLiveLinkBaseFrameData) == 0x0000A0, "Wrong size on FLiveLinkBaseFrameData");
static_assert(offsetof(FLiveLinkBaseFrameData, WorldTime) == 0x000000, "Member 'FLiveLinkBaseFrameData::WorldTime' has a wrong offset!");
static_assert(offsetof(FLiveLinkBaseFrameData, MetaData) == 0x000010, "Member 'FLiveLinkBaseFrameData::MetaData' has a wrong offset!");
static_assert(offsetof(FLiveLinkBaseFrameData, PropertyValues) == 0x000070, "Member 'FLiveLinkBaseFrameData::PropertyValues' has a wrong offset!");

struct FLiveLinkSubjectName final
{
public:
	class FName                                   Name;
};
static_assert(alignof(FLiveLinkSubjectName) == 0x000004, "Wrong alignment on FLiveLinkSubjectName");
static_assert(sizeof(FLiveLinkSubjectName) == 0x000004, "Wrong size on FLiveLinkSubjectName");
static_assert(offsetof(FLiveLinkSubjectName, Name) == 0x000000, "Member 'FLiveLinkSubjectName::Name' has a wrong offset!");

struct FLiveLinkSubjectRepresentation final
{
public:
	struct FLiveLinkSubjectName                   Subject;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class ULiveLinkRole>              Role;
};
static_assert(alignof(FLiveLinkSubjectRepresentation) == 0x000008, "Wrong alignment on FLiveLinkSubjectRepresentation");
static_assert(sizeof(FLiveLinkSubjectRepresentation) == 0x000010, "Wrong size on FLiveLinkSubjectRepresentation");
static_assert(offsetof(FLiveLinkSubjectRepresentation, Subject) == 0x000000, "Member 'FLiveLinkSubjectRepresentation::Subject' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectRepresentation, Role) == 0x000008, "Member 'FLiveLinkSubjectRepresentation::Role' has a wrong offset!");

struct FLiveLinkAnimationFrameData final : public FLiveLinkBaseFrameData
{
public:
	TArray<struct FTransform>                     Transforms;
};
static_assert(alignof(FLiveLinkAnimationFrameData) == 0x000008, "Wrong alignment on FLiveLinkAnimationFrameData");
static_assert(sizeof(FLiveLinkAnimationFrameData) == 0x0000B0, "Wrong size on FLiveLinkAnimationFrameData");
static_assert(offsetof(FLiveLinkAnimationFrameData, Transforms) == 0x0000A0, "Member 'FLiveLinkAnimationFrameData::Transforms' has a wrong offset!");

struct alignas(0x08) FLiveLinkBaseBlueprintData
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FLiveLinkBaseBlueprintData) == 0x000008, "Wrong alignment on FLiveLinkBaseBlueprintData");
static_assert(sizeof(FLiveLinkBaseBlueprintData) == 0x000008, "Wrong size on FLiveLinkBaseBlueprintData");

struct FLiveLinkBasicBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkBaseStaticData                StaticData;
	struct FLiveLinkBaseFrameData                 FrameData;
};
static_assert(alignof(FLiveLinkBasicBlueprintData) == 0x000008, "Wrong alignment on FLiveLinkBasicBlueprintData");
static_assert(sizeof(FLiveLinkBasicBlueprintData) == 0x0000B8, "Wrong size on FLiveLinkBasicBlueprintData");
static_assert(offsetof(FLiveLinkBasicBlueprintData, StaticData) == 0x000008, "Member 'FLiveLinkBasicBlueprintData::StaticData' has a wrong offset!");
static_assert(offsetof(FLiveLinkBasicBlueprintData, FrameData) == 0x000018, "Member 'FLiveLinkBasicBlueprintData::FrameData' has a wrong offset!");

struct FLiveLinkSourceDebugInfo final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	int32                                         SnapshotIndex;
	int32                                         NumberOfBufferAtSnapshot;
};
static_assert(alignof(FLiveLinkSourceDebugInfo) == 0x000004, "Wrong alignment on FLiveLinkSourceDebugInfo");
static_assert(sizeof(FLiveLinkSourceDebugInfo) == 0x00000C, "Wrong size on FLiveLinkSourceDebugInfo");
static_assert(offsetof(FLiveLinkSourceDebugInfo, SubjectName) == 0x000000, "Member 'FLiveLinkSourceDebugInfo::SubjectName' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceDebugInfo, SnapshotIndex) == 0x000004, "Member 'FLiveLinkSourceDebugInfo::SnapshotIndex' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceDebugInfo, NumberOfBufferAtSnapshot) == 0x000008, "Member 'FLiveLinkSourceDebugInfo::NumberOfBufferAtSnapshot' has a wrong offset!");

struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
public:
	bool                                          bIsLocationSupported;
	bool                                          bIsRotationSupported;
	bool                                          bIsScaleSupported;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FLiveLinkTransformStaticData) == 0x000008, "Wrong alignment on FLiveLinkTransformStaticData");
static_assert(sizeof(FLiveLinkTransformStaticData) == 0x000018, "Wrong size on FLiveLinkTransformStaticData");
static_assert(offsetof(FLiveLinkTransformStaticData, bIsLocationSupported) == 0x000010, "Member 'FLiveLinkTransformStaticData::bIsLocationSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformStaticData, bIsRotationSupported) == 0x000011, "Member 'FLiveLinkTransformStaticData::bIsRotationSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformStaticData, bIsScaleSupported) == 0x000012, "Member 'FLiveLinkTransformStaticData::bIsScaleSupported' has a wrong offset!");

struct FLiveLinkCameraStaticData final : public FLiveLinkTransformStaticData
{
public:
	bool                                          bIsFieldOfViewSupported;
	bool                                          bIsAspectRatioSupported;
	bool                                          bIsFocalLengthSupported;
	bool                                          bIsProjectionModeSupported;
	float                                         FilmBackWidth;
	float                                         FilmBackHeight;
	bool                                          bIsApertureSupported;
	bool                                          bIsFocusDistanceSupported;
	bool                                          bIsDepthOfFieldSupported;
	uint8                                         Pad_27[0x1];
};
static_assert(alignof(FLiveLinkCameraStaticData) == 0x000008, "Wrong alignment on FLiveLinkCameraStaticData");
static_assert(sizeof(FLiveLinkCameraStaticData) == 0x000028, "Wrong size on FLiveLinkCameraStaticData");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsFieldOfViewSupported) == 0x000018, "Member 'FLiveLinkCameraStaticData::bIsFieldOfViewSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsAspectRatioSupported) == 0x000019, "Member 'FLiveLinkCameraStaticData::bIsAspectRatioSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsFocalLengthSupported) == 0x00001A, "Member 'FLiveLinkCameraStaticData::bIsFocalLengthSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsProjectionModeSupported) == 0x00001B, "Member 'FLiveLinkCameraStaticData::bIsProjectionModeSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, FilmBackWidth) == 0x00001C, "Member 'FLiveLinkCameraStaticData::FilmBackWidth' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, FilmBackHeight) == 0x000020, "Member 'FLiveLinkCameraStaticData::FilmBackHeight' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsApertureSupported) == 0x000024, "Member 'FLiveLinkCameraStaticData::bIsApertureSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsFocusDistanceSupported) == 0x000025, "Member 'FLiveLinkCameraStaticData::bIsFocusDistanceSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraStaticData, bIsDepthOfFieldSupported) == 0x000026, "Member 'FLiveLinkCameraStaticData::bIsDepthOfFieldSupported' has a wrong offset!");

struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
public:
	struct FTransform                             Transform;
};
static_assert(alignof(FLiveLinkTransformFrameData) == 0x000010, "Wrong alignment on FLiveLinkTransformFrameData");
static_assert(sizeof(FLiveLinkTransformFrameData) == 0x000100, "Wrong size on FLiveLinkTransformFrameData");
static_assert(offsetof(FLiveLinkTransformFrameData, Transform) == 0x0000A0, "Member 'FLiveLinkTransformFrameData::Transform' has a wrong offset!");

struct FLiveLinkCameraFrameData final : public FLiveLinkTransformFrameData
{
public:
	float                                         FieldOfView;
	float                                         AspectRatio;
	float                                         FocalLength;
	float                                         Aperture;
	float                                         FocusDistance;
	ELiveLinkCameraProjectionMode                 ProjectionMode;
	uint8                                         Pad_115[0xB];
};
static_assert(alignof(FLiveLinkCameraFrameData) == 0x000010, "Wrong alignment on FLiveLinkCameraFrameData");
static_assert(sizeof(FLiveLinkCameraFrameData) == 0x000120, "Wrong size on FLiveLinkCameraFrameData");
static_assert(offsetof(FLiveLinkCameraFrameData, FieldOfView) == 0x000100, "Member 'FLiveLinkCameraFrameData::FieldOfView' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraFrameData, AspectRatio) == 0x000104, "Member 'FLiveLinkCameraFrameData::AspectRatio' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraFrameData, FocalLength) == 0x000108, "Member 'FLiveLinkCameraFrameData::FocalLength' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraFrameData, Aperture) == 0x00010C, "Member 'FLiveLinkCameraFrameData::Aperture' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraFrameData, FocusDistance) == 0x000110, "Member 'FLiveLinkCameraFrameData::FocusDistance' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraFrameData, ProjectionMode) == 0x000114, "Member 'FLiveLinkCameraFrameData::ProjectionMode' has a wrong offset!");

struct FLiveLinkFrameRate final : public FFrameRate
{
};
static_assert(alignof(FLiveLinkFrameRate) == 0x000004, "Wrong alignment on FLiveLinkFrameRate");
static_assert(sizeof(FLiveLinkFrameRate) == 0x000008, "Wrong size on FLiveLinkFrameRate");

struct FLiveLinkCameraBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkCameraStaticData              StaticData;
	struct FLiveLinkCameraFrameData               FrameData;
};
static_assert(alignof(FLiveLinkCameraBlueprintData) == 0x000010, "Wrong alignment on FLiveLinkCameraBlueprintData");
static_assert(sizeof(FLiveLinkCameraBlueprintData) == 0x000150, "Wrong size on FLiveLinkCameraBlueprintData");
static_assert(offsetof(FLiveLinkCameraBlueprintData, StaticData) == 0x000008, "Member 'FLiveLinkCameraBlueprintData::StaticData' has a wrong offset!");
static_assert(offsetof(FLiveLinkCameraBlueprintData, FrameData) == 0x000030, "Member 'FLiveLinkCameraBlueprintData::FrameData' has a wrong offset!");

struct FLiveLinkLightStaticData final : public FLiveLinkTransformStaticData
{
public:
	bool                                          bIsTemperatureSupported;
	bool                                          bIsIntensitySupported;
	bool                                          bIsLightColorSupported;
	bool                                          bIsInnerConeAngleSupported;
	bool                                          bIsOuterConeAngleSupported;
	bool                                          bIsAttenuationRadiusSupported;
	bool                                          bIsSourceLenghtSupported;
	bool                                          bIsSourceRadiusSupported;
	bool                                          bIsSoftSourceRadiusSupported;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FLiveLinkLightStaticData) == 0x000008, "Wrong alignment on FLiveLinkLightStaticData");
static_assert(sizeof(FLiveLinkLightStaticData) == 0x000028, "Wrong size on FLiveLinkLightStaticData");
static_assert(offsetof(FLiveLinkLightStaticData, bIsTemperatureSupported) == 0x000018, "Member 'FLiveLinkLightStaticData::bIsTemperatureSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsIntensitySupported) == 0x000019, "Member 'FLiveLinkLightStaticData::bIsIntensitySupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsLightColorSupported) == 0x00001A, "Member 'FLiveLinkLightStaticData::bIsLightColorSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsInnerConeAngleSupported) == 0x00001B, "Member 'FLiveLinkLightStaticData::bIsInnerConeAngleSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsOuterConeAngleSupported) == 0x00001C, "Member 'FLiveLinkLightStaticData::bIsOuterConeAngleSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsAttenuationRadiusSupported) == 0x00001D, "Member 'FLiveLinkLightStaticData::bIsAttenuationRadiusSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsSourceLenghtSupported) == 0x00001E, "Member 'FLiveLinkLightStaticData::bIsSourceLenghtSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsSourceRadiusSupported) == 0x00001F, "Member 'FLiveLinkLightStaticData::bIsSourceRadiusSupported' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightStaticData, bIsSoftSourceRadiusSupported) == 0x000020, "Member 'FLiveLinkLightStaticData::bIsSoftSourceRadiusSupported' has a wrong offset!");

struct FLiveLinkLightFrameData final : public FLiveLinkTransformFrameData
{
public:
	float                                         Temperature;
	float                                         Intensity;
	struct FColor                                 LightColor;
	float                                         InnerConeAngle;
	float                                         OuterConeAngle;
	float                                         AttenuationRadius;
	float                                         SourceRadius;
	float                                         SoftSourceRadius;
	float                                         SourceLength;
	uint8                                         Pad_124[0xC];
};
static_assert(alignof(FLiveLinkLightFrameData) == 0x000010, "Wrong alignment on FLiveLinkLightFrameData");
static_assert(sizeof(FLiveLinkLightFrameData) == 0x000130, "Wrong size on FLiveLinkLightFrameData");
static_assert(offsetof(FLiveLinkLightFrameData, Temperature) == 0x000100, "Member 'FLiveLinkLightFrameData::Temperature' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, Intensity) == 0x000104, "Member 'FLiveLinkLightFrameData::Intensity' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, LightColor) == 0x000108, "Member 'FLiveLinkLightFrameData::LightColor' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, InnerConeAngle) == 0x00010C, "Member 'FLiveLinkLightFrameData::InnerConeAngle' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, OuterConeAngle) == 0x000110, "Member 'FLiveLinkLightFrameData::OuterConeAngle' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, AttenuationRadius) == 0x000114, "Member 'FLiveLinkLightFrameData::AttenuationRadius' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, SourceRadius) == 0x000118, "Member 'FLiveLinkLightFrameData::SourceRadius' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, SoftSourceRadius) == 0x00011C, "Member 'FLiveLinkLightFrameData::SoftSourceRadius' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightFrameData, SourceLength) == 0x000120, "Member 'FLiveLinkLightFrameData::SourceLength' has a wrong offset!");

struct FLiveLinkTimeSynchronizationSettings final
{
public:
	struct FFrameRate                             FrameRate;
	struct FFrameNumber                           FrameOffset;
};
static_assert(alignof(FLiveLinkTimeSynchronizationSettings) == 0x000004, "Wrong alignment on FLiveLinkTimeSynchronizationSettings");
static_assert(sizeof(FLiveLinkTimeSynchronizationSettings) == 0x00000C, "Wrong size on FLiveLinkTimeSynchronizationSettings");
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameRate) == 0x000000, "Member 'FLiveLinkTimeSynchronizationSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameOffset) == 0x000008, "Member 'FLiveLinkTimeSynchronizationSettings::FrameOffset' has a wrong offset!");

struct FLiveLinkLightBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkLightStaticData               StaticData;
	struct FLiveLinkLightFrameData                FrameData;
};
static_assert(alignof(FLiveLinkLightBlueprintData) == 0x000010, "Wrong alignment on FLiveLinkLightBlueprintData");
static_assert(sizeof(FLiveLinkLightBlueprintData) == 0x000160, "Wrong size on FLiveLinkLightBlueprintData");
static_assert(offsetof(FLiveLinkLightBlueprintData, StaticData) == 0x000008, "Member 'FLiveLinkLightBlueprintData::StaticData' has a wrong offset!");
static_assert(offsetof(FLiveLinkLightBlueprintData, FrameData) == 0x000030, "Member 'FLiveLinkLightBlueprintData::FrameData' has a wrong offset!");

struct FLiveLinkCurveElement final
{
public:
	class FName                                   CurveName;
	float                                         CurveValue;
};
static_assert(alignof(FLiveLinkCurveElement) == 0x000004, "Wrong alignment on FLiveLinkCurveElement");
static_assert(sizeof(FLiveLinkCurveElement) == 0x000008, "Wrong size on FLiveLinkCurveElement");
static_assert(offsetof(FLiveLinkCurveElement, CurveName) == 0x000000, "Member 'FLiveLinkCurveElement::CurveName' has a wrong offset!");
static_assert(offsetof(FLiveLinkCurveElement, CurveValue) == 0x000004, "Member 'FLiveLinkCurveElement::CurveValue' has a wrong offset!");

struct FLiveLinkFrameData final
{
public:
	TArray<struct FTransform>                     Transforms;
	TArray<struct FLiveLinkCurveElement>          CurveElements;
	struct FLiveLinkWorldTime                     WorldTime;
	struct FLiveLinkMetaData                      MetaData;
};
static_assert(alignof(FLiveLinkFrameData) == 0x000008, "Wrong alignment on FLiveLinkFrameData");
static_assert(sizeof(FLiveLinkFrameData) == 0x000090, "Wrong size on FLiveLinkFrameData");
static_assert(offsetof(FLiveLinkFrameData, Transforms) == 0x000000, "Member 'FLiveLinkFrameData::Transforms' has a wrong offset!");
static_assert(offsetof(FLiveLinkFrameData, CurveElements) == 0x000010, "Member 'FLiveLinkFrameData::CurveElements' has a wrong offset!");
static_assert(offsetof(FLiveLinkFrameData, WorldTime) == 0x000020, "Member 'FLiveLinkFrameData::WorldTime' has a wrong offset!");
static_assert(offsetof(FLiveLinkFrameData, MetaData) == 0x000030, "Member 'FLiveLinkFrameData::MetaData' has a wrong offset!");

struct FLiveLinkSourcePreset final
{
public:
	struct FGuid                                  Guid;
	class ULiveLinkSourceSettings*                Settings;
	class FText                                   SourceType;
};
static_assert(alignof(FLiveLinkSourcePreset) == 0x000008, "Wrong alignment on FLiveLinkSourcePreset");
static_assert(sizeof(FLiveLinkSourcePreset) == 0x000030, "Wrong size on FLiveLinkSourcePreset");
static_assert(offsetof(FLiveLinkSourcePreset, Guid) == 0x000000, "Member 'FLiveLinkSourcePreset::Guid' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourcePreset, Settings) == 0x000010, "Member 'FLiveLinkSourcePreset::Settings' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourcePreset, SourceType) == 0x000018, "Member 'FLiveLinkSourcePreset::SourceType' has a wrong offset!");

struct FLiveLinkSubjectKey final
{
public:
	struct FGuid                                  Source;
	struct FLiveLinkSubjectName                   SubjectName;
};
static_assert(alignof(FLiveLinkSubjectKey) == 0x000004, "Wrong alignment on FLiveLinkSubjectKey");
static_assert(sizeof(FLiveLinkSubjectKey) == 0x000014, "Wrong size on FLiveLinkSubjectKey");
static_assert(offsetof(FLiveLinkSubjectKey, Source) == 0x000000, "Member 'FLiveLinkSubjectKey::Source' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectKey, SubjectName) == 0x000010, "Member 'FLiveLinkSubjectKey::SubjectName' has a wrong offset!");

struct FLiveLinkSubjectPreset final
{
public:
	struct FLiveLinkSubjectKey                    Key;
	uint8                                         Pad_14[0x4];
	TSubclassOf<class ULiveLinkRole>              Role;
	class ULiveLinkSubjectSettings*               Settings;
	class ULiveLinkVirtualSubject*                VirtualSubject;
	bool                                          bEnabled;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FLiveLinkSubjectPreset) == 0x000008, "Wrong alignment on FLiveLinkSubjectPreset");
static_assert(sizeof(FLiveLinkSubjectPreset) == 0x000038, "Wrong size on FLiveLinkSubjectPreset");
static_assert(offsetof(FLiveLinkSubjectPreset, Key) == 0x000000, "Member 'FLiveLinkSubjectPreset::Key' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectPreset, Role) == 0x000018, "Member 'FLiveLinkSubjectPreset::Role' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectPreset, Settings) == 0x000020, "Member 'FLiveLinkSubjectPreset::Settings' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectPreset, VirtualSubject) == 0x000028, "Member 'FLiveLinkSubjectPreset::VirtualSubject' has a wrong offset!");
static_assert(offsetof(FLiveLinkSubjectPreset, bEnabled) == 0x000030, "Member 'FLiveLinkSubjectPreset::bEnabled' has a wrong offset!");

struct FLiveLinkRefSkeleton final
{
public:
	TArray<class FName>                           BoneNames;
	TArray<int32>                                 BoneParents;
};
static_assert(alignof(FLiveLinkRefSkeleton) == 0x000008, "Wrong alignment on FLiveLinkRefSkeleton");
static_assert(sizeof(FLiveLinkRefSkeleton) == 0x000020, "Wrong size on FLiveLinkRefSkeleton");
static_assert(offsetof(FLiveLinkRefSkeleton, BoneNames) == 0x000000, "Member 'FLiveLinkRefSkeleton::BoneNames' has a wrong offset!");
static_assert(offsetof(FLiveLinkRefSkeleton, BoneParents) == 0x000010, "Member 'FLiveLinkRefSkeleton::BoneParents' has a wrong offset!");

struct FLiveLinkTransformBlueprintData final : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkTransformStaticData           StaticData;
	struct FLiveLinkTransformFrameData            FrameData;
};
static_assert(alignof(FLiveLinkTransformBlueprintData) == 0x000010, "Wrong alignment on FLiveLinkTransformBlueprintData");
static_assert(sizeof(FLiveLinkTransformBlueprintData) == 0x000120, "Wrong size on FLiveLinkTransformBlueprintData");
static_assert(offsetof(FLiveLinkTransformBlueprintData, StaticData) == 0x000008, "Member 'FLiveLinkTransformBlueprintData::StaticData' has a wrong offset!");
static_assert(offsetof(FLiveLinkTransformBlueprintData, FrameData) == 0x000020, "Member 'FLiveLinkTransformBlueprintData::FrameData' has a wrong offset!");

struct FLiveLinkCurveConversionSettings final
{
public:
	TMap<class FString, struct FSoftObjectPath>   CurveConversionAssetMap;
};
static_assert(alignof(FLiveLinkCurveConversionSettings) == 0x000008, "Wrong alignment on FLiveLinkCurveConversionSettings");
static_assert(sizeof(FLiveLinkCurveConversionSettings) == 0x000050, "Wrong size on FLiveLinkCurveConversionSettings");
static_assert(offsetof(FLiveLinkCurveConversionSettings, CurveConversionAssetMap) == 0x000000, "Member 'FLiveLinkCurveConversionSettings::CurveConversionAssetMap' has a wrong offset!");

struct FLiveLinkSourceBufferManagementSettings final
{
public:
	bool                                          bValidEngineTimeEnabled;
	uint8                                         Pad_1[0x3];
	float                                         ValidEngineTime;
	float                                         EngineTimeOffset;
	uint8                                         Pad_C[0x4];
	double                                        EngineTimeClockOffset;
	double                                        SmoothEngineTimeOffset;
	bool                                          bGenerateSubFrame;
	uint8                                         Pad_21[0x3];
	struct FFrameRate                             DetectedFrameRate;
	bool                                          bUseTimecodeSmoothLatest;
	uint8                                         Pad_2D[0x3];
	struct FFrameRate                             SourceTimecodeFrameRate;
	bool                                          bValidTimecodeFrameEnabled;
	uint8                                         Pad_39[0x3];
	int32                                         ValidTimecodeFrame;
	float                                         TimecodeFrameOffset;
	uint8                                         Pad_44[0x4];
	double                                        TimecodeClockOffset;
	int32                                         LatestOffset;
	int32                                         MaxNumberOfFrameToBuffered;
	bool                                          bKeepAtLeastOneFrame;
	uint8                                         Pad_59[0x7];
};
static_assert(alignof(FLiveLinkSourceBufferManagementSettings) == 0x000008, "Wrong alignment on FLiveLinkSourceBufferManagementSettings");
static_assert(sizeof(FLiveLinkSourceBufferManagementSettings) == 0x000060, "Wrong size on FLiveLinkSourceBufferManagementSettings");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bValidEngineTimeEnabled) == 0x000000, "Member 'FLiveLinkSourceBufferManagementSettings::bValidEngineTimeEnabled' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, ValidEngineTime) == 0x000004, "Member 'FLiveLinkSourceBufferManagementSettings::ValidEngineTime' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, EngineTimeOffset) == 0x000008, "Member 'FLiveLinkSourceBufferManagementSettings::EngineTimeOffset' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, EngineTimeClockOffset) == 0x000010, "Member 'FLiveLinkSourceBufferManagementSettings::EngineTimeClockOffset' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SmoothEngineTimeOffset) == 0x000018, "Member 'FLiveLinkSourceBufferManagementSettings::SmoothEngineTimeOffset' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bGenerateSubFrame) == 0x000020, "Member 'FLiveLinkSourceBufferManagementSettings::bGenerateSubFrame' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate) == 0x000024, "Member 'FLiveLinkSourceBufferManagementSettings::DetectedFrameRate' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bUseTimecodeSmoothLatest) == 0x00002C, "Member 'FLiveLinkSourceBufferManagementSettings::bUseTimecodeSmoothLatest' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate) == 0x000030, "Member 'FLiveLinkSourceBufferManagementSettings::SourceTimecodeFrameRate' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bValidTimecodeFrameEnabled) == 0x000038, "Member 'FLiveLinkSourceBufferManagementSettings::bValidTimecodeFrameEnabled' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, ValidTimecodeFrame) == 0x00003C, "Member 'FLiveLinkSourceBufferManagementSettings::ValidTimecodeFrame' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, TimecodeFrameOffset) == 0x000040, "Member 'FLiveLinkSourceBufferManagementSettings::TimecodeFrameOffset' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, TimecodeClockOffset) == 0x000048, "Member 'FLiveLinkSourceBufferManagementSettings::TimecodeClockOffset' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, LatestOffset) == 0x000050, "Member 'FLiveLinkSourceBufferManagementSettings::LatestOffset' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, MaxNumberOfFrameToBuffered) == 0x000054, "Member 'FLiveLinkSourceBufferManagementSettings::MaxNumberOfFrameToBuffered' has a wrong offset!");
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, bKeepAtLeastOneFrame) == 0x000058, "Member 'FLiveLinkSourceBufferManagementSettings::bKeepAtLeastOneFrame' has a wrong offset!");

struct FLiveLinkInterpolationSettings final
{
public:
	bool                                          bUseInterpolation;
	uint8                                         Pad_1[0x3];
	float                                         InterpolationOffset;
};
static_assert(alignof(FLiveLinkInterpolationSettings) == 0x000004, "Wrong alignment on FLiveLinkInterpolationSettings");
static_assert(sizeof(FLiveLinkInterpolationSettings) == 0x000008, "Wrong size on FLiveLinkInterpolationSettings");
static_assert(offsetof(FLiveLinkInterpolationSettings, bUseInterpolation) == 0x000000, "Member 'FLiveLinkInterpolationSettings::bUseInterpolation' has a wrong offset!");
static_assert(offsetof(FLiveLinkInterpolationSettings, InterpolationOffset) == 0x000004, "Member 'FLiveLinkInterpolationSettings::InterpolationOffset' has a wrong offset!");

struct FLiveLinkTime final
{
public:
	double                                        WorldTime;
	struct FQualifiedFrameTime                    SceneTime;
};
static_assert(alignof(FLiveLinkTime) == 0x000008, "Wrong alignment on FLiveLinkTime");
static_assert(sizeof(FLiveLinkTime) == 0x000018, "Wrong size on FLiveLinkTime");
static_assert(offsetof(FLiveLinkTime, WorldTime) == 0x000000, "Member 'FLiveLinkTime::WorldTime' has a wrong offset!");
static_assert(offsetof(FLiveLinkTime, SceneTime) == 0x000008, "Member 'FLiveLinkTime::SceneTime' has a wrong offset!");

struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	int32                                         Seconds;
	int32                                         Frames;
	struct FLiveLinkFrameRate                     FrameRate;
};
static_assert(alignof(FLiveLinkTimeCode_Base_DEPRECATED) == 0x000004, "Wrong alignment on FLiveLinkTimeCode_Base_DEPRECATED");
static_assert(sizeof(FLiveLinkTimeCode_Base_DEPRECATED) == 0x000010, "Wrong size on FLiveLinkTimeCode_Base_DEPRECATED");
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, Seconds) == 0x000000, "Member 'FLiveLinkTimeCode_Base_DEPRECATED::Seconds' has a wrong offset!");
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, Frames) == 0x000004, "Member 'FLiveLinkTimeCode_Base_DEPRECATED::Frames' has a wrong offset!");
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate) == 0x000008, "Member 'FLiveLinkTimeCode_Base_DEPRECATED::FrameRate' has a wrong offset!");

struct FLiveLinkTimeCode final : public FLiveLinkTimeCode_Base_DEPRECATED
{
};
static_assert(alignof(FLiveLinkTimeCode) == 0x000004, "Wrong alignment on FLiveLinkTimeCode");
static_assert(sizeof(FLiveLinkTimeCode) == 0x000010, "Wrong size on FLiveLinkTimeCode");

struct FSubjectMetadata final
{
public:
	TMap<class FName, class FString>              StringMetaData;
	struct FTimecode                              SceneTimecode;
	struct FFrameRate                             SceneFramerate;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FSubjectMetadata) == 0x000008, "Wrong alignment on FSubjectMetadata");
static_assert(sizeof(FSubjectMetadata) == 0x000070, "Wrong size on FSubjectMetadata");
static_assert(offsetof(FSubjectMetadata, StringMetaData) == 0x000000, "Member 'FSubjectMetadata::StringMetaData' has a wrong offset!");
static_assert(offsetof(FSubjectMetadata, SceneTimecode) == 0x000050, "Member 'FSubjectMetadata::SceneTimecode' has a wrong offset!");
static_assert(offsetof(FSubjectMetadata, SceneFramerate) == 0x000064, "Member 'FSubjectMetadata::SceneFramerate' has a wrong offset!");

struct alignas(0x08) FCachedSubjectFrame final
{
public:
	uint8                                         Pad_0[0x160];
};
static_assert(alignof(FCachedSubjectFrame) == 0x000008, "Wrong alignment on FCachedSubjectFrame");
static_assert(sizeof(FCachedSubjectFrame) == 0x000160, "Wrong size on FCachedSubjectFrame");

struct alignas(0x08) FLiveLinkTransform final
{
public:
	uint8                                         Pad_0[0x20];
};
static_assert(alignof(FLiveLinkTransform) == 0x000008, "Wrong alignment on FLiveLinkTransform");
static_assert(sizeof(FLiveLinkTransform) == 0x000020, "Wrong size on FLiveLinkTransform");

struct FSubjectFrameHandle final : public FLiveLinkBaseBlueprintData
{
public:
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FSubjectFrameHandle) == 0x000008, "Wrong alignment on FSubjectFrameHandle");
static_assert(sizeof(FSubjectFrameHandle) == 0x000018, "Wrong size on FSubjectFrameHandle");

}
