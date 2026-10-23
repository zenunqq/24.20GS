#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMIDIEventType : uint8
{
	Unknown                                  = 0,
	NoteOff                                  = 8,
	NoteOn                                   = 9,
	NoteAfterTouch                           = 10,
	ControlChange                            = 11,
	ProgramChange                            = 12,
	ChannelAfterTouch                        = 13,
	PitchBend                                = 14,
	EMIDIEventType_MAX                       = 15,
};

struct FFoundMIDIDevice final
{
public:
	int32                                         DeviceID;
	uint8                                         Pad_4[0x4];
	class FString                                 DeviceName;
	bool                                          bCanReceiveFrom;
	bool                                          bCanSendTo;
	bool                                          bIsAlreadyInUse;
	bool                                          bIsDefaultInputDevice;
	bool                                          bIsDefaultOutputDevice;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FFoundMIDIDevice) == 0x000008, "Wrong alignment on FFoundMIDIDevice");
static_assert(sizeof(FFoundMIDIDevice) == 0x000020, "Wrong size on FFoundMIDIDevice");
static_assert(offsetof(FFoundMIDIDevice, DeviceID) == 0x000000, "Member 'FFoundMIDIDevice::DeviceID' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, DeviceName) == 0x000008, "Member 'FFoundMIDIDevice::DeviceName' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bCanReceiveFrom) == 0x000018, "Member 'FFoundMIDIDevice::bCanReceiveFrom' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bCanSendTo) == 0x000019, "Member 'FFoundMIDIDevice::bCanSendTo' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bIsAlreadyInUse) == 0x00001A, "Member 'FFoundMIDIDevice::bIsAlreadyInUse' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bIsDefaultInputDevice) == 0x00001B, "Member 'FFoundMIDIDevice::bIsDefaultInputDevice' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bIsDefaultOutputDevice) == 0x00001C, "Member 'FFoundMIDIDevice::bIsDefaultOutputDevice' has a wrong offset!");

struct FMIDIDeviceInfo final
{
public:
	int32                                         DeviceID;
	uint8                                         Pad_4[0x4];
	class FString                                 DeviceName;
	bool                                          bIsAlreadyInUse;
	bool                                          bIsDefaultDevice;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FMIDIDeviceInfo) == 0x000008, "Wrong alignment on FMIDIDeviceInfo");
static_assert(sizeof(FMIDIDeviceInfo) == 0x000020, "Wrong size on FMIDIDeviceInfo");
static_assert(offsetof(FMIDIDeviceInfo, DeviceID) == 0x000000, "Member 'FMIDIDeviceInfo::DeviceID' has a wrong offset!");
static_assert(offsetof(FMIDIDeviceInfo, DeviceName) == 0x000008, "Member 'FMIDIDeviceInfo::DeviceName' has a wrong offset!");
static_assert(offsetof(FMIDIDeviceInfo, bIsAlreadyInUse) == 0x000018, "Member 'FMIDIDeviceInfo::bIsAlreadyInUse' has a wrong offset!");
static_assert(offsetof(FMIDIDeviceInfo, bIsDefaultDevice) == 0x000019, "Member 'FMIDIDeviceInfo::bIsDefaultDevice' has a wrong offset!");

}
