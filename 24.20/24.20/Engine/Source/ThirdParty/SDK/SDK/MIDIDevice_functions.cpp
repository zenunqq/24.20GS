#pragma once

#include "Basic.hpp"

#include "MIDIDevice_classes.hpp"
#include "MIDIDevice_parameters.hpp"

namespace SDK
{

class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(const int32 DeviceID, const int32 MIDIBufferSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceController");

	Params::MIDIDeviceManager_CreateMIDIDeviceController Parms{};

	Parms.DeviceID = DeviceID;
	Parms.MIDIBufferSize = MIDIBufferSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMIDIDeviceInputController* UMIDIDeviceManager::CreateMIDIDeviceInputController(const int32 DeviceID, const int32 MIDIBufferSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceInputController");

	Params::MIDIDeviceManager_CreateMIDIDeviceInputController Parms{};

	Parms.DeviceID = DeviceID;
	Parms.MIDIBufferSize = MIDIBufferSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMIDIDeviceOutputController* UMIDIDeviceManager::CreateMIDIDeviceOutputController(const int32 DeviceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceOutputController");

	Params::MIDIDeviceManager_CreateMIDIDeviceOutputController Parms{};

	Parms.DeviceID = DeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMIDIDeviceManager::FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "FindAllMIDIDeviceInfo");

	Params::MIDIDeviceManager_FindAllMIDIDeviceInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMIDIInputDevices != nullptr)
		*OutMIDIInputDevices = std::move(Parms.OutMIDIInputDevices);

	if (OutMIDIOutputDevices != nullptr)
		*OutMIDIOutputDevices = std::move(Parms.OutMIDIOutputDevices);
}

void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "FindMIDIDevices");

	Params::MIDIDeviceManager_FindMIDIDevices Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = std::move(Parms.OutMIDIDevices);
}

void UMIDIDeviceManager::GetDefaultMIDIInputDeviceID(int32* DeviceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "GetDefaultMIDIInputDeviceID");

	Params::MIDIDeviceManager_GetDefaultMIDIInputDeviceID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;
}

void UMIDIDeviceManager::GetDefaultMIDIOutputDeviceID(int32* DeviceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "GetDefaultMIDIOutputDeviceID");

	Params::MIDIDeviceManager_GetDefaultMIDIOutputDeviceID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;
}

void UMIDIDeviceManager::GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32* DeviceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "GetMIDIInputDeviceIDByName");

	Params::MIDIDeviceManager_GetMIDIInputDeviceIDByName Parms{};

	Parms.DeviceName = std::move(DeviceName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;
}

void UMIDIDeviceManager::GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32* DeviceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MIDIDeviceManager", "GetMIDIOutputDeviceIDByName");

	Params::MIDIDeviceManager_GetMIDIOutputDeviceIDByName Parms{};

	Parms.DeviceName = std::move(DeviceName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;
}

void UMIDIDeviceOutputController::SendMIDIChannelAftertouch(int32 Channel, float Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIChannelAftertouch");

	Params::MIDIDeviceOutputController_SendMIDIChannelAftertouch Parms{};

	Parms.Channel = Channel;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDIControlChange(int32 Channel, int32 Type, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIControlChange");

	Params::MIDIDeviceOutputController_SendMIDIControlChange Parms{};

	Parms.Channel = Channel;
	Parms.Type = Type;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDIEvent(EMIDIEventType EventType, int32 Channel, int32 data1, int32 data2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIEvent");

	Params::MIDIDeviceOutputController_SendMIDIEvent Parms{};

	Parms.EventType = EventType;
	Parms.Channel = Channel;
	Parms.data1 = data1;
	Parms.data2 = data2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDINoteAftertouch(int32 Channel, int32 Note, float Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDINoteAftertouch");

	Params::MIDIDeviceOutputController_SendMIDINoteAftertouch Parms{};

	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDINoteOff(int32 Channel, int32 Note, int32 Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDINoteOff");

	Params::MIDIDeviceOutputController_SendMIDINoteOff Parms{};

	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDINoteOn(int32 Channel, int32 Note, int32 Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDINoteOn");

	Params::MIDIDeviceOutputController_SendMIDINoteOn Parms{};

	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDIPitchBend(int32 Channel, int32 Pitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIPitchBend");

	Params::MIDIDeviceOutputController_SendMIDIPitchBend Parms{};

	Parms.Channel = Channel;
	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMIDIDeviceOutputController::SendMIDIProgramChange(int32 Channel, int32 ProgramNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIProgramChange");

	Params::MIDIDeviceOutputController_SendMIDIProgramChange Parms{};

	Parms.Channel = Channel;
	Parms.ProgramNumber = ProgramNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
