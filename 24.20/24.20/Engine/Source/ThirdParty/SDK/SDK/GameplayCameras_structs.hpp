#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EOscillatorWaveform : uint8
{
	SineWave                                 = 0,
	PerlinNoise                              = 1,
	EOscillatorWaveform_MAX                  = 2,
};

enum class EInitialOscillatorOffset : uint8
{
	EOO_OffsetRandom                         = 0,
	EOO_OffsetZero                           = 1,
	EOO_MAX                                  = 2,
};

enum class ECameraAnimationPlaySpace : uint8
{
	CameraLocal                              = 0,
	World                                    = 1,
	UserDefined                              = 2,
	ECameraAnimationPlaySpace_MAX            = 3,
};

enum class ECameraAnimationEasingType : uint8
{
	Linear                                   = 0,
	Sinusoidal                               = 1,
	Quadratic                                = 2,
	Cubic                                    = 3,
	Quartic                                  = 4,
	Quintic                                  = 5,
	Exponential                              = 6,
	Circular                                 = 7,
	ECameraAnimationEasingType_MAX           = 8,
};

enum class EInitialWaveOscillatorOffsetType : uint8
{
	Random                                   = 0,
	Zero                                     = 1,
	EInitialWaveOscillatorOffsetType_MAX     = 2,
};

struct FFOscillator final
{
public:
	float                                         Amplitude;
	float                                         Frequency;
	EInitialOscillatorOffset                      InitialOffset;
	EOscillatorWaveform                           Waveform;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FFOscillator) == 0x000004, "Wrong alignment on FFOscillator");
static_assert(sizeof(FFOscillator) == 0x00000C, "Wrong size on FFOscillator");
static_assert(offsetof(FFOscillator, Amplitude) == 0x000000, "Member 'FFOscillator::Amplitude' has a wrong offset!");
static_assert(offsetof(FFOscillator, Frequency) == 0x000004, "Member 'FFOscillator::Frequency' has a wrong offset!");
static_assert(offsetof(FFOscillator, InitialOffset) == 0x000008, "Member 'FFOscillator::InitialOffset' has a wrong offset!");
static_assert(offsetof(FFOscillator, Waveform) == 0x000009, "Member 'FFOscillator::Waveform' has a wrong offset!");

struct FROscillator final
{
public:
	struct FFOscillator                           Pitch;
	struct FFOscillator                           Yaw;
	struct FFOscillator                           Roll;
};
static_assert(alignof(FROscillator) == 0x000004, "Wrong alignment on FROscillator");
static_assert(sizeof(FROscillator) == 0x000024, "Wrong size on FROscillator");
static_assert(offsetof(FROscillator, Pitch) == 0x000000, "Member 'FROscillator::Pitch' has a wrong offset!");
static_assert(offsetof(FROscillator, Yaw) == 0x00000C, "Member 'FROscillator::Yaw' has a wrong offset!");
static_assert(offsetof(FROscillator, Roll) == 0x000018, "Member 'FROscillator::Roll' has a wrong offset!");

struct FVOscillator final
{
public:
	struct FFOscillator                           X;
	struct FFOscillator                           Y;
	struct FFOscillator                           Z;
};
static_assert(alignof(FVOscillator) == 0x000004, "Wrong alignment on FVOscillator");
static_assert(sizeof(FVOscillator) == 0x000024, "Wrong size on FVOscillator");
static_assert(offsetof(FVOscillator, X) == 0x000000, "Member 'FVOscillator::X' has a wrong offset!");
static_assert(offsetof(FVOscillator, Y) == 0x00000C, "Member 'FVOscillator::Y' has a wrong offset!");
static_assert(offsetof(FVOscillator, Z) == 0x000018, "Member 'FVOscillator::Z' has a wrong offset!");

struct FCameraAnimationParams final
{
public:
	float                                         PlayRate;
	float                                         Scale;
	ECameraAnimationEasingType                    EaseInType;
	uint8                                         Pad_9[0x3];
	float                                         EaseInDuration;
	ECameraAnimationEasingType                    EaseOutType;
	uint8                                         Pad_11[0x3];
	float                                         EaseOutDuration;
	bool                                          bLoop;
	bool                                          bRandomStartTime;
	uint8                                         Pad_1A[0x2];
	float                                         DurationOverride;
	ECameraAnimationPlaySpace                     Playspace;
	uint8                                         Pad_21[0x7];
	struct FRotator                               UserPlaySpaceRot;
};
static_assert(alignof(FCameraAnimationParams) == 0x000008, "Wrong alignment on FCameraAnimationParams");
static_assert(sizeof(FCameraAnimationParams) == 0x000040, "Wrong size on FCameraAnimationParams");
static_assert(offsetof(FCameraAnimationParams, PlayRate) == 0x000000, "Member 'FCameraAnimationParams::PlayRate' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, Scale) == 0x000004, "Member 'FCameraAnimationParams::Scale' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseInType) == 0x000008, "Member 'FCameraAnimationParams::EaseInType' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseInDuration) == 0x00000C, "Member 'FCameraAnimationParams::EaseInDuration' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseOutType) == 0x000010, "Member 'FCameraAnimationParams::EaseOutType' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, EaseOutDuration) == 0x000014, "Member 'FCameraAnimationParams::EaseOutDuration' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, bLoop) == 0x000018, "Member 'FCameraAnimationParams::bLoop' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, bRandomStartTime) == 0x000019, "Member 'FCameraAnimationParams::bRandomStartTime' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, DurationOverride) == 0x00001C, "Member 'FCameraAnimationParams::DurationOverride' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, Playspace) == 0x000020, "Member 'FCameraAnimationParams::Playspace' has a wrong offset!");
static_assert(offsetof(FCameraAnimationParams, UserPlaySpaceRot) == 0x000028, "Member 'FCameraAnimationParams::UserPlaySpaceRot' has a wrong offset!");

struct alignas(0x02) FCameraAnimationHandle final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FCameraAnimationHandle) == 0x000002, "Wrong alignment on FCameraAnimationHandle");
static_assert(sizeof(FCameraAnimationHandle) == 0x000004, "Wrong size on FCameraAnimationHandle");

struct FActiveCameraAnimationInfo final
{
public:
	class UCameraAnimationSequence*               Sequence;
	struct FCameraAnimationParams                 Params;
	struct FCameraAnimationHandle                 Handle;
	uint8                                         Pad_4C[0x4];
	class UCameraAnimationSequencePlayer*         Player;
	class UCameraAnimationSequenceCameraStandIn*  CameraStandIn;
	float                                         EaseInCurrentTime;
	float                                         EaseOutCurrentTime;
	bool                                          bIsEasingIn;
	bool                                          bIsEasingOut;
	uint8                                         Pad_6A[0x6];
};
static_assert(alignof(FActiveCameraAnimationInfo) == 0x000008, "Wrong alignment on FActiveCameraAnimationInfo");
static_assert(sizeof(FActiveCameraAnimationInfo) == 0x000070, "Wrong size on FActiveCameraAnimationInfo");
static_assert(offsetof(FActiveCameraAnimationInfo, Sequence) == 0x000000, "Member 'FActiveCameraAnimationInfo::Sequence' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, Params) == 0x000008, "Member 'FActiveCameraAnimationInfo::Params' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, Handle) == 0x000048, "Member 'FActiveCameraAnimationInfo::Handle' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, Player) == 0x000050, "Member 'FActiveCameraAnimationInfo::Player' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, CameraStandIn) == 0x000058, "Member 'FActiveCameraAnimationInfo::CameraStandIn' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, EaseInCurrentTime) == 0x000060, "Member 'FActiveCameraAnimationInfo::EaseInCurrentTime' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, EaseOutCurrentTime) == 0x000064, "Member 'FActiveCameraAnimationInfo::EaseOutCurrentTime' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, bIsEasingIn) == 0x000068, "Member 'FActiveCameraAnimationInfo::bIsEasingIn' has a wrong offset!");
static_assert(offsetof(FActiveCameraAnimationInfo, bIsEasingOut) == 0x000069, "Member 'FActiveCameraAnimationInfo::bIsEasingOut' has a wrong offset!");

struct FPerlinNoiseShaker final
{
public:
	float                                         Amplitude;
	float                                         Frequency;
};
static_assert(alignof(FPerlinNoiseShaker) == 0x000004, "Wrong alignment on FPerlinNoiseShaker");
static_assert(sizeof(FPerlinNoiseShaker) == 0x000008, "Wrong size on FPerlinNoiseShaker");
static_assert(offsetof(FPerlinNoiseShaker, Amplitude) == 0x000000, "Member 'FPerlinNoiseShaker::Amplitude' has a wrong offset!");
static_assert(offsetof(FPerlinNoiseShaker, Frequency) == 0x000004, "Member 'FPerlinNoiseShaker::Frequency' has a wrong offset!");

struct FWaveOscillator final
{
public:
	float                                         Amplitude;
	float                                         Frequency;
	EInitialWaveOscillatorOffsetType              InitialOffsetType;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FWaveOscillator) == 0x000004, "Wrong alignment on FWaveOscillator");
static_assert(sizeof(FWaveOscillator) == 0x00000C, "Wrong size on FWaveOscillator");
static_assert(offsetof(FWaveOscillator, Amplitude) == 0x000000, "Member 'FWaveOscillator::Amplitude' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, Frequency) == 0x000004, "Member 'FWaveOscillator::Frequency' has a wrong offset!");
static_assert(offsetof(FWaveOscillator, InitialOffsetType) == 0x000008, "Member 'FWaveOscillator::InitialOffsetType' has a wrong offset!");

}
