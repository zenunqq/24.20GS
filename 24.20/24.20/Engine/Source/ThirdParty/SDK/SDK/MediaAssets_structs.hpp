#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMediaTextureOutputFormat : uint8
{
	MTOF_Default                             = 0,
	MTOF_SRGB_LINOUT                         = 1,
	MTOF_MAX                                 = 2,
};

enum class EMediaTextureOrientation : uint8
{
	MTORI_Original                           = 0,
	MTORI_CW90                               = 1,
	MTORI_CW180                              = 2,
	MTORI_CW270                              = 3,
	MTORI_MAX                                = 4,
};

enum class EMediaPlayerTrack : uint8
{
	Audio                                    = 0,
	Caption                                  = 1,
	Metadata                                 = 2,
	Script                                   = 3,
	Subtitle                                 = 4,
	Text                                     = 5,
	Video                                    = 6,
	EMediaPlayerTrack_MAX                    = 7,
};

enum class EMediaSoundChannels : uint32
{
	Mono                                     = 0,
	Stereo                                   = 1,
	Surround                                 = 2,
	EMediaSoundChannels_MAX                  = 3,
};

enum class EMediaSoundComponentFFTSize : uint8
{
	Min_64                                   = 0,
	Small_256                                = 1,
	Medium_512                               = 2,
	Large_1024                               = 3,
	EMediaSoundComponentFFTSize_MAX          = 4,
};

enum class EMediaTextureVisibleMipsTiles : uint8
{
	None                                     = 0,
	Plane                                    = 1,
	Sphere                                   = 2,
	EMediaTextureVisibleMipsTiles_MAX        = 3,
};

enum class EMediaAudioCaptureDeviceFilter : uint8
{
	None                                     = 0,
	Card                                     = 1,
	Microphone                               = 2,
	Software                                 = 4,
	Unknown                                  = 8,
	EMediaAudioCaptureDeviceFilter_MAX       = 9,
};

enum class EMediaVideoCaptureDeviceFilter : uint8
{
	None                                     = 0,
	Card                                     = 1,
	Software                                 = 2,
	Unknown                                  = 4,
	Webcam                                   = 8,
	EMediaVideoCaptureDeviceFilter_MAX       = 9,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8
{
	None                                     = 0,
	DepthSensor                              = 1,
	Front                                    = 2,
	Rear                                     = 4,
	Unknown                                  = 8,
	EMediaWebcamCaptureDeviceFilter_MAX      = 9,
};

struct FMediaSoundComponentSpectralData final
{
public:
	float                                         FrequencyHz;
	float                                         Magnitude;
};
static_assert(alignof(FMediaSoundComponentSpectralData) == 0x000004, "Wrong alignment on FMediaSoundComponentSpectralData");
static_assert(sizeof(FMediaSoundComponentSpectralData) == 0x000008, "Wrong size on FMediaSoundComponentSpectralData");
static_assert(offsetof(FMediaSoundComponentSpectralData, FrequencyHz) == 0x000000, "Member 'FMediaSoundComponentSpectralData::FrequencyHz' has a wrong offset!");
static_assert(offsetof(FMediaSoundComponentSpectralData, Magnitude) == 0x000004, "Member 'FMediaSoundComponentSpectralData::Magnitude' has a wrong offset!");

struct FMediaSourceCacheSettings final
{
public:
	bool                                          bOverride;
	uint8                                         Pad_1[0x3];
	float                                         TimeToLookAhead;
};
static_assert(alignof(FMediaSourceCacheSettings) == 0x000004, "Wrong alignment on FMediaSourceCacheSettings");
static_assert(sizeof(FMediaSourceCacheSettings) == 0x000008, "Wrong size on FMediaSourceCacheSettings");
static_assert(offsetof(FMediaSourceCacheSettings, bOverride) == 0x000000, "Member 'FMediaSourceCacheSettings::bOverride' has a wrong offset!");
static_assert(offsetof(FMediaSourceCacheSettings, TimeToLookAhead) == 0x000004, "Member 'FMediaSourceCacheSettings::TimeToLookAhead' has a wrong offset!");

struct FMediaCaptureDevice final
{
public:
	class FText                                   DisplayName;
	class FString                                 URL;
};
static_assert(alignof(FMediaCaptureDevice) == 0x000008, "Wrong alignment on FMediaCaptureDevice");
static_assert(sizeof(FMediaCaptureDevice) == 0x000028, "Wrong size on FMediaCaptureDevice");
static_assert(offsetof(FMediaCaptureDevice, DisplayName) == 0x000000, "Member 'FMediaCaptureDevice::DisplayName' has a wrong offset!");
static_assert(offsetof(FMediaCaptureDevice, URL) == 0x000018, "Member 'FMediaCaptureDevice::URL' has a wrong offset!");

}
