#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EKoalaClipEventType : uint8
{
	Manual                                   = 0,
	Elimination                              = 1,
	VictoryRoyale                            = 2,
	Emote                                    = 3,
	COUNT                                    = 4,
	EKoalaClipEventType_MAX                  = 5,
};

enum class EKoalaAvailability : uint8
{
	Pending                                  = 0,
	NotAvailable                             = 1,
	Available                                = 2,
	COUNT                                    = 3,
	EKoalaAvailability_MAX                   = 4,
};

enum class EKoalaRecording : uint8
{
	Pending                                  = 0,
	NotRecording                             = 1,
	Recording                                = 2,
	COUNT                                    = 3,
	EKoalaRecording_MAX                      = 4,
};

enum class EKoalaConnectionStatus : uint8
{
	Pending                                  = 0,
	NotConnected                             = 1,
	Connected                                = 2,
	COUNT                                    = 3,
	EKoalaConnectionStatus_MAX               = 4,
};

enum class EKoalaClipStatus : uint8
{
	None                                     = 0,
	Creating                                 = 1,
	Uploading                                = 2,
	Completed                                = 3,
	Failed                                   = 4,
	COUNT                                    = 5,
	EKoalaClipStatus_MAX                     = 6,
};

enum class EKoalaMockClipMode : uint8
{
	None                                     = 0,
	ShortSuccess                             = 1,
	ShortFailure                             = 2,
	LongSuccess                              = 3,
	LongFailure                              = 4,
	COUNT                                    = 5,
	EKoalaMockClipMode_MAX                   = 6,
};

struct alignas(0x08) FKoalaClipInfo final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FKoalaClipInfo) == 0x000008, "Wrong alignment on FKoalaClipInfo");
static_assert(sizeof(FKoalaClipInfo) == 0x000018, "Wrong size on FKoalaClipInfo");

}
