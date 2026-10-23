#pragma once

#include "Basic.hpp"

#include "MIDIDevice_structs.hpp"

namespace SDK::Params
{

struct MIDIDeviceManager_CreateMIDIDeviceController final
{
public:
	int32                                         DeviceID;
	int32                                         MIDIBufferSize;
	class UMIDIDeviceController*                  ReturnValue;
};
static_assert(alignof(MIDIDeviceManager_CreateMIDIDeviceController) == 0x000008, "Wrong alignment on MIDIDeviceManager_CreateMIDIDeviceController");
static_assert(sizeof(MIDIDeviceManager_CreateMIDIDeviceController) == 0x000010, "Wrong size on MIDIDeviceManager_CreateMIDIDeviceController");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceController, DeviceID) == 0x000000, "Member 'MIDIDeviceManager_CreateMIDIDeviceController::DeviceID' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceController, MIDIBufferSize) == 0x000004, "Member 'MIDIDeviceManager_CreateMIDIDeviceController::MIDIBufferSize' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceController, ReturnValue) == 0x000008, "Member 'MIDIDeviceManager_CreateMIDIDeviceController::ReturnValue' has a wrong offset!");

struct MIDIDeviceManager_CreateMIDIDeviceInputController final
{
public:
	int32                                         DeviceID;
	int32                                         MIDIBufferSize;
	class UMIDIDeviceInputController*             ReturnValue;
};
static_assert(alignof(MIDIDeviceManager_CreateMIDIDeviceInputController) == 0x000008, "Wrong alignment on MIDIDeviceManager_CreateMIDIDeviceInputController");
static_assert(sizeof(MIDIDeviceManager_CreateMIDIDeviceInputController) == 0x000010, "Wrong size on MIDIDeviceManager_CreateMIDIDeviceInputController");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceInputController, DeviceID) == 0x000000, "Member 'MIDIDeviceManager_CreateMIDIDeviceInputController::DeviceID' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceInputController, MIDIBufferSize) == 0x000004, "Member 'MIDIDeviceManager_CreateMIDIDeviceInputController::MIDIBufferSize' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceInputController, ReturnValue) == 0x000008, "Member 'MIDIDeviceManager_CreateMIDIDeviceInputController::ReturnValue' has a wrong offset!");

struct MIDIDeviceManager_CreateMIDIDeviceOutputController final
{
public:
	int32                                         DeviceID;
	uint8                                         Pad_4[0x4];
	class UMIDIDeviceOutputController*            ReturnValue;
};
static_assert(alignof(MIDIDeviceManager_CreateMIDIDeviceOutputController) == 0x000008, "Wrong alignment on MIDIDeviceManager_CreateMIDIDeviceOutputController");
static_assert(sizeof(MIDIDeviceManager_CreateMIDIDeviceOutputController) == 0x000010, "Wrong size on MIDIDeviceManager_CreateMIDIDeviceOutputController");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceOutputController, DeviceID) == 0x000000, "Member 'MIDIDeviceManager_CreateMIDIDeviceOutputController::DeviceID' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_CreateMIDIDeviceOutputController, ReturnValue) == 0x000008, "Member 'MIDIDeviceManager_CreateMIDIDeviceOutputController::ReturnValue' has a wrong offset!");

struct MIDIDeviceManager_FindAllMIDIDeviceInfo final
{
public:
	TArray<struct FMIDIDeviceInfo>                OutMIDIInputDevices;
	TArray<struct FMIDIDeviceInfo>                OutMIDIOutputDevices;
};
static_assert(alignof(MIDIDeviceManager_FindAllMIDIDeviceInfo) == 0x000008, "Wrong alignment on MIDIDeviceManager_FindAllMIDIDeviceInfo");
static_assert(sizeof(MIDIDeviceManager_FindAllMIDIDeviceInfo) == 0x000020, "Wrong size on MIDIDeviceManager_FindAllMIDIDeviceInfo");
static_assert(offsetof(MIDIDeviceManager_FindAllMIDIDeviceInfo, OutMIDIInputDevices) == 0x000000, "Member 'MIDIDeviceManager_FindAllMIDIDeviceInfo::OutMIDIInputDevices' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_FindAllMIDIDeviceInfo, OutMIDIOutputDevices) == 0x000010, "Member 'MIDIDeviceManager_FindAllMIDIDeviceInfo::OutMIDIOutputDevices' has a wrong offset!");

struct MIDIDeviceManager_FindMIDIDevices final
{
public:
	TArray<struct FFoundMIDIDevice>               OutMIDIDevices;
};
static_assert(alignof(MIDIDeviceManager_FindMIDIDevices) == 0x000008, "Wrong alignment on MIDIDeviceManager_FindMIDIDevices");
static_assert(sizeof(MIDIDeviceManager_FindMIDIDevices) == 0x000010, "Wrong size on MIDIDeviceManager_FindMIDIDevices");
static_assert(offsetof(MIDIDeviceManager_FindMIDIDevices, OutMIDIDevices) == 0x000000, "Member 'MIDIDeviceManager_FindMIDIDevices::OutMIDIDevices' has a wrong offset!");

struct MIDIDeviceManager_GetDefaultMIDIInputDeviceID final
{
public:
	int32                                         DeviceID;
};
static_assert(alignof(MIDIDeviceManager_GetDefaultMIDIInputDeviceID) == 0x000004, "Wrong alignment on MIDIDeviceManager_GetDefaultMIDIInputDeviceID");
static_assert(sizeof(MIDIDeviceManager_GetDefaultMIDIInputDeviceID) == 0x000004, "Wrong size on MIDIDeviceManager_GetDefaultMIDIInputDeviceID");
static_assert(offsetof(MIDIDeviceManager_GetDefaultMIDIInputDeviceID, DeviceID) == 0x000000, "Member 'MIDIDeviceManager_GetDefaultMIDIInputDeviceID::DeviceID' has a wrong offset!");

struct MIDIDeviceManager_GetDefaultMIDIOutputDeviceID final
{
public:
	int32                                         DeviceID;
};
static_assert(alignof(MIDIDeviceManager_GetDefaultMIDIOutputDeviceID) == 0x000004, "Wrong alignment on MIDIDeviceManager_GetDefaultMIDIOutputDeviceID");
static_assert(sizeof(MIDIDeviceManager_GetDefaultMIDIOutputDeviceID) == 0x000004, "Wrong size on MIDIDeviceManager_GetDefaultMIDIOutputDeviceID");
static_assert(offsetof(MIDIDeviceManager_GetDefaultMIDIOutputDeviceID, DeviceID) == 0x000000, "Member 'MIDIDeviceManager_GetDefaultMIDIOutputDeviceID::DeviceID' has a wrong offset!");

struct MIDIDeviceManager_GetMIDIInputDeviceIDByName final
{
public:
	class FString                                 DeviceName;
	int32                                         DeviceID;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(MIDIDeviceManager_GetMIDIInputDeviceIDByName) == 0x000008, "Wrong alignment on MIDIDeviceManager_GetMIDIInputDeviceIDByName");
static_assert(sizeof(MIDIDeviceManager_GetMIDIInputDeviceIDByName) == 0x000018, "Wrong size on MIDIDeviceManager_GetMIDIInputDeviceIDByName");
static_assert(offsetof(MIDIDeviceManager_GetMIDIInputDeviceIDByName, DeviceName) == 0x000000, "Member 'MIDIDeviceManager_GetMIDIInputDeviceIDByName::DeviceName' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_GetMIDIInputDeviceIDByName, DeviceID) == 0x000010, "Member 'MIDIDeviceManager_GetMIDIInputDeviceIDByName::DeviceID' has a wrong offset!");

struct MIDIDeviceManager_GetMIDIOutputDeviceIDByName final
{
public:
	class FString                                 DeviceName;
	int32                                         DeviceID;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(MIDIDeviceManager_GetMIDIOutputDeviceIDByName) == 0x000008, "Wrong alignment on MIDIDeviceManager_GetMIDIOutputDeviceIDByName");
static_assert(sizeof(MIDIDeviceManager_GetMIDIOutputDeviceIDByName) == 0x000018, "Wrong size on MIDIDeviceManager_GetMIDIOutputDeviceIDByName");
static_assert(offsetof(MIDIDeviceManager_GetMIDIOutputDeviceIDByName, DeviceName) == 0x000000, "Member 'MIDIDeviceManager_GetMIDIOutputDeviceIDByName::DeviceName' has a wrong offset!");
static_assert(offsetof(MIDIDeviceManager_GetMIDIOutputDeviceIDByName, DeviceID) == 0x000010, "Member 'MIDIDeviceManager_GetMIDIOutputDeviceIDByName::DeviceID' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDIChannelAftertouch final
{
public:
	int32                                         Channel;
	float                                         Amount;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDIChannelAftertouch) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDIChannelAftertouch");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDIChannelAftertouch) == 0x000008, "Wrong size on MIDIDeviceOutputController_SendMIDIChannelAftertouch");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIChannelAftertouch, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDIChannelAftertouch::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIChannelAftertouch, Amount) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDIChannelAftertouch::Amount' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDIControlChange final
{
public:
	int32                                         Channel;
	int32                                         Type;
	int32                                         Value;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDIControlChange) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDIControlChange");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDIControlChange) == 0x00000C, "Wrong size on MIDIDeviceOutputController_SendMIDIControlChange");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIControlChange, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDIControlChange::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIControlChange, Type) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDIControlChange::Type' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIControlChange, Value) == 0x000008, "Member 'MIDIDeviceOutputController_SendMIDIControlChange::Value' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDIEvent final
{
public:
	EMIDIEventType                                EventType;
	uint8                                         Pad_1[0x3];
	int32                                         Channel;
	int32                                         data1;
	int32                                         data2;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDIEvent) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDIEvent");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDIEvent) == 0x000010, "Wrong size on MIDIDeviceOutputController_SendMIDIEvent");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIEvent, EventType) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDIEvent::EventType' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIEvent, Channel) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDIEvent::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIEvent, data1) == 0x000008, "Member 'MIDIDeviceOutputController_SendMIDIEvent::data1' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIEvent, data2) == 0x00000C, "Member 'MIDIDeviceOutputController_SendMIDIEvent::data2' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDINoteAftertouch final
{
public:
	int32                                         Channel;
	int32                                         Note;
	float                                         Amount;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDINoteAftertouch) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDINoteAftertouch");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDINoteAftertouch) == 0x00000C, "Wrong size on MIDIDeviceOutputController_SendMIDINoteAftertouch");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteAftertouch, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDINoteAftertouch::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteAftertouch, Note) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDINoteAftertouch::Note' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteAftertouch, Amount) == 0x000008, "Member 'MIDIDeviceOutputController_SendMIDINoteAftertouch::Amount' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDINoteOff final
{
public:
	int32                                         Channel;
	int32                                         Note;
	int32                                         Velocity;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDINoteOff) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDINoteOff");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDINoteOff) == 0x00000C, "Wrong size on MIDIDeviceOutputController_SendMIDINoteOff");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteOff, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDINoteOff::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteOff, Note) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDINoteOff::Note' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteOff, Velocity) == 0x000008, "Member 'MIDIDeviceOutputController_SendMIDINoteOff::Velocity' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDINoteOn final
{
public:
	int32                                         Channel;
	int32                                         Note;
	int32                                         Velocity;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDINoteOn) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDINoteOn");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDINoteOn) == 0x00000C, "Wrong size on MIDIDeviceOutputController_SendMIDINoteOn");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteOn, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDINoteOn::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteOn, Note) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDINoteOn::Note' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDINoteOn, Velocity) == 0x000008, "Member 'MIDIDeviceOutputController_SendMIDINoteOn::Velocity' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDIPitchBend final
{
public:
	int32                                         Channel;
	int32                                         Pitch;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDIPitchBend) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDIPitchBend");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDIPitchBend) == 0x000008, "Wrong size on MIDIDeviceOutputController_SendMIDIPitchBend");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIPitchBend, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDIPitchBend::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIPitchBend, Pitch) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDIPitchBend::Pitch' has a wrong offset!");

struct MIDIDeviceOutputController_SendMIDIProgramChange final
{
public:
	int32                                         Channel;
	int32                                         ProgramNumber;
};
static_assert(alignof(MIDIDeviceOutputController_SendMIDIProgramChange) == 0x000004, "Wrong alignment on MIDIDeviceOutputController_SendMIDIProgramChange");
static_assert(sizeof(MIDIDeviceOutputController_SendMIDIProgramChange) == 0x000008, "Wrong size on MIDIDeviceOutputController_SendMIDIProgramChange");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIProgramChange, Channel) == 0x000000, "Member 'MIDIDeviceOutputController_SendMIDIProgramChange::Channel' has a wrong offset!");
static_assert(offsetof(MIDIDeviceOutputController_SendMIDIProgramChange, ProgramNumber) == 0x000004, "Member 'MIDIDeviceOutputController_SendMIDIProgramChange::ProgramNumber' has a wrong offset!");

}
