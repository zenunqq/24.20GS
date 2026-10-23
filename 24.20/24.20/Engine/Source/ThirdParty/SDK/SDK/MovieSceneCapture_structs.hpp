#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                              = 0,
	HCGM_P3DCI                               = 1,
	HCGM_Rec2020                             = 2,
	HCGM_ACES                                = 3,
	HCGM_ACEScg                              = 4,
	HCGM_Linear                              = 5,
	HCGM_MAX                                 = 6,
};

enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                                     = 0,
	Initialized                              = 1,
	Capturing                                = 2,
	Finalizing                               = 3,
	EMovieSceneCaptureProtocolState_MAX      = 4,
};

struct FCompositionGraphCapturePasses final
{
public:
	TArray<class FString>                         Value;
};
static_assert(alignof(FCompositionGraphCapturePasses) == 0x000008, "Wrong alignment on FCompositionGraphCapturePasses");
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x000010, "Wrong size on FCompositionGraphCapturePasses");
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x000000, "Member 'FCompositionGraphCapturePasses::Value' has a wrong offset!");

struct FCaptureResolution final
{
public:
	int32                                         ResX;
	int32                                         ResY;
};
static_assert(alignof(FCaptureResolution) == 0x000004, "Wrong alignment on FCaptureResolution");
static_assert(sizeof(FCaptureResolution) == 0x000008, "Wrong size on FCaptureResolution");
static_assert(offsetof(FCaptureResolution, ResX) == 0x000000, "Member 'FCaptureResolution::ResX' has a wrong offset!");
static_assert(offsetof(FCaptureResolution, ResY) == 0x000004, "Member 'FCaptureResolution::ResY' has a wrong offset!");

struct FMovieSceneCaptureSettings final
{
public:
	struct FDirectoryPath                         OutputDirectory;
	TSubclassOf<class AGameModeBase>              GameModeOverride;
	class FString                                 OutputFormat;
	bool                                          bOverwriteExisting;
	bool                                          bUseRelativeFrameNumbers;
	uint8                                         Pad_2A[0x2];
	int32                                         HandleFrames;
	class FString                                 MovieExtension;
	uint8                                         ZeroPadFrameNumbers;
	uint8                                         Pad_41[0x3];
	struct FFrameRate                             FrameRate;
	bool                                          bUseCustomFrameRate;
	uint8                                         Pad_4D[0x3];
	struct FFrameRate                             CustomFrameRate;
	struct FCaptureResolution                     Resolution;
	bool                                          bEnableTextureStreaming;
	bool                                          bCinematicEngineScalability;
	bool                                          bCinematicMode;
	bool                                          bAllowMovement;
	bool                                          bAllowTurning;
	bool                                          bShowPlayer;
	bool                                          bShowHUD;
	bool                                          bUsePathTracer;
	int32                                         PathTracerSamplePerPixel;
	uint8                                         Pad_6C[0x4];
};
static_assert(alignof(FMovieSceneCaptureSettings) == 0x000008, "Wrong alignment on FMovieSceneCaptureSettings");
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x000070, "Wrong size on FMovieSceneCaptureSettings");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x000000, "Member 'FMovieSceneCaptureSettings::OutputDirectory' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x000010, "Member 'FMovieSceneCaptureSettings::GameModeOverride' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x000018, "Member 'FMovieSceneCaptureSettings::OutputFormat' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bOverwriteExisting) == 0x000028, "Member 'FMovieSceneCaptureSettings::bOverwriteExisting' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseRelativeFrameNumbers) == 0x000029, "Member 'FMovieSceneCaptureSettings::bUseRelativeFrameNumbers' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, HandleFrames) == 0x00002C, "Member 'FMovieSceneCaptureSettings::HandleFrames' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 0x000030, "Member 'FMovieSceneCaptureSettings::MovieExtension' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, ZeroPadFrameNumbers) == 0x000040, "Member 'FMovieSceneCaptureSettings::ZeroPadFrameNumbers' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x000044, "Member 'FMovieSceneCaptureSettings::FrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUseCustomFrameRate) == 0x00004C, "Member 'FMovieSceneCaptureSettings::bUseCustomFrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 0x000050, "Member 'FMovieSceneCaptureSettings::CustomFrameRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x000058, "Member 'FMovieSceneCaptureSettings::Resolution' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bEnableTextureStreaming) == 0x000060, "Member 'FMovieSceneCaptureSettings::bEnableTextureStreaming' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicEngineScalability) == 0x000061, "Member 'FMovieSceneCaptureSettings::bCinematicEngineScalability' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bCinematicMode) == 0x000062, "Member 'FMovieSceneCaptureSettings::bCinematicMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowMovement) == 0x000063, "Member 'FMovieSceneCaptureSettings::bAllowMovement' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bAllowTurning) == 0x000064, "Member 'FMovieSceneCaptureSettings::bAllowTurning' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowPlayer) == 0x000065, "Member 'FMovieSceneCaptureSettings::bShowPlayer' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bShowHUD) == 0x000066, "Member 'FMovieSceneCaptureSettings::bShowHUD' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, bUsePathTracer) == 0x000067, "Member 'FMovieSceneCaptureSettings::bUsePathTracer' has a wrong offset!");
static_assert(offsetof(FMovieSceneCaptureSettings, PathTracerSamplePerPixel) == 0x000068, "Member 'FMovieSceneCaptureSettings::PathTracerSamplePerPixel' has a wrong offset!");

struct FFrameMetrics final
{
public:
	float                                         TotalElapsedTime;
	float                                         FrameDelta;
	int32                                         FrameNumber;
	int32                                         NumDroppedFrames;
};
static_assert(alignof(FFrameMetrics) == 0x000004, "Wrong alignment on FFrameMetrics");
static_assert(sizeof(FFrameMetrics) == 0x000010, "Wrong size on FFrameMetrics");
static_assert(offsetof(FFrameMetrics, TotalElapsedTime) == 0x000000, "Member 'FFrameMetrics::TotalElapsedTime' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, FrameDelta) == 0x000004, "Member 'FFrameMetrics::FrameDelta' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, FrameNumber) == 0x000008, "Member 'FFrameMetrics::FrameNumber' has a wrong offset!");
static_assert(offsetof(FFrameMetrics, NumDroppedFrames) == 0x00000C, "Member 'FFrameMetrics::NumDroppedFrames' has a wrong offset!");

struct FCapturedPixelsID final
{
public:
	TMap<class FName, class FName>                Identifiers;
};
static_assert(alignof(FCapturedPixelsID) == 0x000008, "Wrong alignment on FCapturedPixelsID");
static_assert(sizeof(FCapturedPixelsID) == 0x000050, "Wrong size on FCapturedPixelsID");
static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0x000000, "Member 'FCapturedPixelsID::Identifiers' has a wrong offset!");

struct alignas(0x08) FCapturedPixels final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FCapturedPixels) == 0x000008, "Wrong alignment on FCapturedPixels");
static_assert(sizeof(FCapturedPixels) == 0x000010, "Wrong size on FCapturedPixels");

}
