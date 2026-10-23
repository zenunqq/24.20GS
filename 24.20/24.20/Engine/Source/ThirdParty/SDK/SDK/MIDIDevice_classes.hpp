#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "MIDIDevice_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UMIDIDeviceControllerBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MIDIDeviceControllerBase">();
	}
	static class UMIDIDeviceControllerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMIDIDeviceControllerBase>();
	}
};
static_assert(alignof(UMIDIDeviceControllerBase) == 0x000008, "Wrong alignment on UMIDIDeviceControllerBase");
static_assert(sizeof(UMIDIDeviceControllerBase) == 0x000028, "Wrong size on UMIDIDeviceControllerBase");

class UMIDIDeviceController final : public UMIDIDeviceControllerBase
{
public:
	TMulticastInlineDelegate<void(class UMIDIDeviceController* MIDIDeviceController, int32 Timestamp, EMIDIEventType EventType, int32 Channel, int32 ControlID, int32 Velocity, int32 RawEventType)> OnMIDIEvent;
	int32                                         DeviceID;
	uint8                                         Pad_3C[0x4];
	class FString                                 DeviceName;
	uint8                                         Pad_50[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MIDIDeviceController">();
	}
	static class UMIDIDeviceController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMIDIDeviceController>();
	}
};
static_assert(alignof(UMIDIDeviceController) == 0x000008, "Wrong alignment on UMIDIDeviceController");
static_assert(sizeof(UMIDIDeviceController) == 0x000060, "Wrong size on UMIDIDeviceController");
static_assert(offsetof(UMIDIDeviceController, OnMIDIEvent) == 0x000028, "Member 'UMIDIDeviceController::OnMIDIEvent' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceController, DeviceID) == 0x000038, "Member 'UMIDIDeviceController::DeviceID' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceController, DeviceName) == 0x000040, "Member 'UMIDIDeviceController::DeviceName' has a wrong offset!");

class UMIDIDeviceInputController final : public UMIDIDeviceControllerBase
{
public:
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity)> OnMIDINoteOn;
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Velocity)> OnMIDINoteOff;
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Pitch)> OnMIDIPitchBend;
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Note, int32 Amount)> OnMIDIAftertouch;
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Type, int32 Value)> OnMIDIControlChange;
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 ControlID, int32 Velocity)> OnMIDIProgramChange;
	TMulticastInlineDelegate<void(class UMIDIDeviceInputController* MIDIDeviceController, int32 Timestamp, int32 Channel, int32 Amount)> OnMIDIChannelAftertouch;
	uint8                                         Pad_98[0x18];
	int32                                         DeviceID;
	uint8                                         Pad_B4[0x4];
	class FString                                 DeviceName;
	uint8                                         Pad_C8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MIDIDeviceInputController">();
	}
	static class UMIDIDeviceInputController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMIDIDeviceInputController>();
	}
};
static_assert(alignof(UMIDIDeviceInputController) == 0x000008, "Wrong alignment on UMIDIDeviceInputController");
static_assert(sizeof(UMIDIDeviceInputController) == 0x0000D8, "Wrong size on UMIDIDeviceInputController");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDINoteOn) == 0x000028, "Member 'UMIDIDeviceInputController::OnMIDINoteOn' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDINoteOff) == 0x000038, "Member 'UMIDIDeviceInputController::OnMIDINoteOff' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDIPitchBend) == 0x000048, "Member 'UMIDIDeviceInputController::OnMIDIPitchBend' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDIAftertouch) == 0x000058, "Member 'UMIDIDeviceInputController::OnMIDIAftertouch' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDIControlChange) == 0x000068, "Member 'UMIDIDeviceInputController::OnMIDIControlChange' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDIProgramChange) == 0x000078, "Member 'UMIDIDeviceInputController::OnMIDIProgramChange' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, OnMIDIChannelAftertouch) == 0x000088, "Member 'UMIDIDeviceInputController::OnMIDIChannelAftertouch' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, DeviceID) == 0x0000B0, "Member 'UMIDIDeviceInputController::DeviceID' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceInputController, DeviceName) == 0x0000B8, "Member 'UMIDIDeviceInputController::DeviceName' has a wrong offset!");

class UMIDIDeviceManager final : public UBlueprintFunctionLibrary
{
public:
	static class UMIDIDeviceController* CreateMIDIDeviceController(const int32 DeviceID, const int32 MIDIBufferSize);
	static class UMIDIDeviceInputController* CreateMIDIDeviceInputController(const int32 DeviceID, const int32 MIDIBufferSize);
	static class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(const int32 DeviceID);
	static void FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices);
	static void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	static void GetDefaultMIDIInputDeviceID(int32* DeviceID);
	static void GetDefaultMIDIOutputDeviceID(int32* DeviceID);
	static void GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32* DeviceID);
	static void GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32* DeviceID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MIDIDeviceManager">();
	}
	static class UMIDIDeviceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMIDIDeviceManager>();
	}
};
static_assert(alignof(UMIDIDeviceManager) == 0x000008, "Wrong alignment on UMIDIDeviceManager");
static_assert(sizeof(UMIDIDeviceManager) == 0x000028, "Wrong size on UMIDIDeviceManager");

class UMIDIDeviceOutputController final : public UMIDIDeviceControllerBase
{
public:
	int32                                         DeviceID;
	uint8                                         Pad_2C[0x4];
	class FString                                 DeviceName;
	uint8                                         Pad_40[0x8];

public:
	void SendMIDIChannelAftertouch(int32 Channel, float Amount);
	void SendMIDIControlChange(int32 Channel, int32 Type, int32 Value);
	void SendMIDIEvent(EMIDIEventType EventType, int32 Channel, int32 data1, int32 data2);
	void SendMIDINoteAftertouch(int32 Channel, int32 Note, float Amount);
	void SendMIDINoteOff(int32 Channel, int32 Note, int32 Velocity);
	void SendMIDINoteOn(int32 Channel, int32 Note, int32 Velocity);
	void SendMIDIPitchBend(int32 Channel, int32 Pitch);
	void SendMIDIProgramChange(int32 Channel, int32 ProgramNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MIDIDeviceOutputController">();
	}
	static class UMIDIDeviceOutputController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMIDIDeviceOutputController>();
	}
};
static_assert(alignof(UMIDIDeviceOutputController) == 0x000008, "Wrong alignment on UMIDIDeviceOutputController");
static_assert(sizeof(UMIDIDeviceOutputController) == 0x000048, "Wrong size on UMIDIDeviceOutputController");
static_assert(offsetof(UMIDIDeviceOutputController, DeviceID) == 0x000028, "Member 'UMIDIDeviceOutputController::DeviceID' has a wrong offset!");
static_assert(offsetof(UMIDIDeviceOutputController, DeviceName) == 0x000030, "Member 'UMIDIDeviceOutputController::DeviceName' has a wrong offset!");

}
