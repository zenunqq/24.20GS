#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ECameraFocusMethod : uint8
{
	DoNotOverride                            = 0,
	Manual                                   = 1,
	Tracking                                 = 2,
	Disable                                  = 3,
	MAX                                      = 4,
};

struct FCameraTrackingFocusSettings final
{
public:
	TSoftObjectPtr<class AActor>                  ActorToTrack;
	struct FVector                                RelativeOffset;
	uint8                                         bDrawDebugTrackingFocusPoint : 1;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FCameraTrackingFocusSettings) == 0x000008, "Wrong alignment on FCameraTrackingFocusSettings");
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x000048, "Wrong size on FCameraTrackingFocusSettings");
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x000000, "Member 'FCameraTrackingFocusSettings::ActorToTrack' has a wrong offset!");
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x000028, "Member 'FCameraTrackingFocusSettings::RelativeOffset' has a wrong offset!");

struct FCameraFocusSettings final
{
public:
	ECameraFocusMethod                            FocusMethod;
	uint8                                         Pad_1[0x3];
	float                                         ManualFocusDistance;
	struct FCameraTrackingFocusSettings           TrackingFocusSettings;
	uint8                                         bSmoothFocusChanges : 1;
	uint8                                         Pad_51[0x3];
	float                                         FocusSmoothingInterpSpeed;
	float                                         FocusOffset;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FCameraFocusSettings) == 0x000008, "Wrong alignment on FCameraFocusSettings");
static_assert(sizeof(FCameraFocusSettings) == 0x000060, "Wrong size on FCameraFocusSettings");
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x000000, "Member 'FCameraFocusSettings::FocusMethod' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, ManualFocusDistance) == 0x000004, "Member 'FCameraFocusSettings::ManualFocusDistance' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x000008, "Member 'FCameraFocusSettings::TrackingFocusSettings' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, FocusSmoothingInterpSpeed) == 0x000054, "Member 'FCameraFocusSettings::FocusSmoothingInterpSpeed' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, FocusOffset) == 0x000058, "Member 'FCameraFocusSettings::FocusOffset' has a wrong offset!");

struct FCameraLensSettings final
{
public:
	float                                         MinFocalLength;
	float                                         MaxFocalLength;
	float                                         MinFStop;
	float                                         MaxFStop;
	float                                         MinimumFocusDistance;
	float                                         SqueezeFactor;
	int32                                         DiaphragmBladeCount;
};
static_assert(alignof(FCameraLensSettings) == 0x000004, "Wrong alignment on FCameraLensSettings");
static_assert(sizeof(FCameraLensSettings) == 0x00001C, "Wrong size on FCameraLensSettings");
static_assert(offsetof(FCameraLensSettings, MinFocalLength) == 0x000000, "Member 'FCameraLensSettings::MinFocalLength' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MaxFocalLength) == 0x000004, "Member 'FCameraLensSettings::MaxFocalLength' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MinFStop) == 0x000008, "Member 'FCameraLensSettings::MinFStop' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MaxFStop) == 0x00000C, "Member 'FCameraLensSettings::MaxFStop' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MinimumFocusDistance) == 0x000010, "Member 'FCameraLensSettings::MinimumFocusDistance' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, SqueezeFactor) == 0x000014, "Member 'FCameraLensSettings::SqueezeFactor' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, DiaphragmBladeCount) == 0x000018, "Member 'FCameraLensSettings::DiaphragmBladeCount' has a wrong offset!");

struct FCameraFilmbackSettings final
{
public:
	float                                         SensorWidth;
	float                                         SensorHeight;
	float                                         SensorAspectRatio;
};
static_assert(alignof(FCameraFilmbackSettings) == 0x000004, "Wrong alignment on FCameraFilmbackSettings");
static_assert(sizeof(FCameraFilmbackSettings) == 0x00000C, "Wrong size on FCameraFilmbackSettings");
static_assert(offsetof(FCameraFilmbackSettings, SensorWidth) == 0x000000, "Member 'FCameraFilmbackSettings::SensorWidth' has a wrong offset!");
static_assert(offsetof(FCameraFilmbackSettings, SensorHeight) == 0x000004, "Member 'FCameraFilmbackSettings::SensorHeight' has a wrong offset!");
static_assert(offsetof(FCameraFilmbackSettings, SensorAspectRatio) == 0x000008, "Member 'FCameraFilmbackSettings::SensorAspectRatio' has a wrong offset!");

struct FCameraLookatTrackingSettings final
{
public:
	uint8                                         bEnableLookAtTracking : 1;
	uint8                                         bDrawDebugLookAtTrackingPosition : 1;
	uint8                                         Pad_1[0x3];
	float                                         LookAtTrackingInterpSpeed;
	uint8                                         Pad_8[0x18];
	TSoftObjectPtr<class AActor>                  ActorToTrack;
	struct FVector                                RelativeOffset;
	uint8                                         bAllowRoll : 1;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(FCameraLookatTrackingSettings) == 0x000008, "Wrong alignment on FCameraLookatTrackingSettings");
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x000068, "Wrong size on FCameraLookatTrackingSettings");
static_assert(offsetof(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed) == 0x000004, "Member 'FCameraLookatTrackingSettings::LookAtTrackingInterpSpeed' has a wrong offset!");
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x000020, "Member 'FCameraLookatTrackingSettings::ActorToTrack' has a wrong offset!");
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x000048, "Member 'FCameraLookatTrackingSettings::RelativeOffset' has a wrong offset!");

struct FNamedFilmbackPreset final
{
public:
	class FString                                 Name;
	struct FCameraFilmbackSettings                FilmbackSettings;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FNamedFilmbackPreset) == 0x000008, "Wrong alignment on FNamedFilmbackPreset");
static_assert(sizeof(FNamedFilmbackPreset) == 0x000020, "Wrong size on FNamedFilmbackPreset");
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x000000, "Member 'FNamedFilmbackPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x000010, "Member 'FNamedFilmbackPreset::FilmbackSettings' has a wrong offset!");

struct FNamedLensPreset final
{
public:
	class FString                                 Name;
	struct FCameraLensSettings                    LensSettings;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FNamedLensPreset) == 0x000008, "Wrong alignment on FNamedLensPreset");
static_assert(sizeof(FNamedLensPreset) == 0x000030, "Wrong size on FNamedLensPreset");
static_assert(offsetof(FNamedLensPreset, Name) == 0x000000, "Member 'FNamedLensPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x000010, "Member 'FNamedLensPreset::LensSettings' has a wrong offset!");

struct FPlateCropSettings final
{
public:
	float                                         AspectRatio;
};
static_assert(alignof(FPlateCropSettings) == 0x000004, "Wrong alignment on FPlateCropSettings");
static_assert(sizeof(FPlateCropSettings) == 0x000004, "Wrong size on FPlateCropSettings");
static_assert(offsetof(FPlateCropSettings, AspectRatio) == 0x000000, "Member 'FPlateCropSettings::AspectRatio' has a wrong offset!");

struct FNamedPlateCropPreset final
{
public:
	class FString                                 Name;
	struct FPlateCropSettings                     CropSettings;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FNamedPlateCropPreset) == 0x000008, "Wrong alignment on FNamedPlateCropPreset");
static_assert(sizeof(FNamedPlateCropPreset) == 0x000018, "Wrong size on FNamedPlateCropPreset");
static_assert(offsetof(FNamedPlateCropPreset, Name) == 0x000000, "Member 'FNamedPlateCropPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedPlateCropPreset, CropSettings) == 0x000010, "Member 'FNamedPlateCropPreset::CropSettings' has a wrong offset!");

}
