#pragma once

#include "Basic.hpp"

#include "HmxAudio_classes.hpp"
#include "HmxAudio_parameters.hpp"

namespace SDK
{

float UMusicAssetBase::GetLengthMs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicAssetBase", "GetLengthMs");

	Params::MusicAssetBase_GetLengthMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UBTDecorator_StopAfterSpan::OnNextBeat(int32 beatNumber, int32 beatInBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAfterSpan", "OnNextBeat");

	Params::BTDecorator_StopAfterSpan_OnNextBeat Parms{};

	Parms.beatNumber = beatNumber;
	Parms.beatInBar = beatInBar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTDecorator_StopAfterSpan::OnNextMeasure(int32 measureNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAfterSpan", "OnNextMeasure");

	Params::BTDecorator_StopAfterSpan_OnNextMeasure Parms{};

	Parms.measureNumber = measureNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTDecorator_StopAtMidiMsg::OnNoteOffMessage(const class FString& CursorName, int32 Channel, int32 Note)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAtMidiMsg", "OnNoteOffMessage");

	Params::BTDecorator_StopAtMidiMsg_OnNoteOffMessage Parms{};

	Parms.CursorName = std::move(CursorName);
	Parms.Channel = Channel;
	Parms.Note = Note;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTDecorator_StopAtMidiMsg::OnNoteOnMessage(const class FString& CursorName, int32 Channel, int32 Note, int32 Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAtMidiMsg", "OnNoteOnMessage");

	Params::BTDecorator_StopAtMidiMsg_OnNoteOnMessage Parms{};

	Parms.CursorName = std::move(CursorName);
	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTDecorator_StopAtMidiMsg::OnTextMessage(const class FString& CursorName, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAtMidiMsg", "OnTextMessage");

	Params::BTDecorator_StopAtMidiMsg_OnTextMessage Parms{};

	Parms.CursorName = std::move(CursorName);
	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTDecorator_StopAtNext::OnNextBeat(int32 beatNumber, int32 beatInBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAtNext", "OnNextBeat");

	Params::BTDecorator_StopAtNext_OnNextBeat Parms{};

	Parms.beatNumber = beatNumber;
	Parms.beatInBar = beatInBar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTDecorator_StopAtNext::OnNextMeasure(int32 measureNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTDecorator_StopAtNext", "OnNextMeasure");

	Params::BTDecorator_StopAtNext_OnNextMeasure Parms{};

	Parms.measureNumber = measureNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForMidiMsg::OnNoteOffMessage(const class FString& CursorName, int32 Channel, int32 Note)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForMidiMsg", "OnNoteOffMessage");

	Params::BTTask_WaitForMidiMsg_OnNoteOffMessage Parms{};

	Parms.CursorName = std::move(CursorName);
	Parms.Channel = Channel;
	Parms.Note = Note;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForMidiMsg::OnNoteOnMessage(const class FString& CursorName, int32 Channel, int32 Note, int32 Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForMidiMsg", "OnNoteOnMessage");

	Params::BTTask_WaitForMidiMsg_OnNoteOnMessage Parms{};

	Parms.CursorName = std::move(CursorName);
	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForMidiMsg::OnTextMessage(const class FString& CursorName, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForMidiMsg", "OnTextMessage");

	Params::BTTask_WaitForMidiMsg_OnTextMessage Parms{};

	Parms.CursorName = std::move(CursorName);
	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForNext::OnNextBeat(int32 beatNumber, int32 beatInBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForNext", "OnNextBeat");

	Params::BTTask_WaitForNext_OnNextBeat Parms{};

	Parms.beatNumber = beatNumber;
	Parms.beatInBar = beatInBar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForNext::OnNextMeasure(int32 measureNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForNext", "OnNextMeasure");

	Params::BTTask_WaitForNext_OnNextMeasure Parms{};

	Parms.measureNumber = measureNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForSpan::OnNextBeat(int32 beatNumber, int32 beatInBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForSpan", "OnNextBeat");

	Params::BTTask_WaitForSpan_OnNextBeat Parms{};

	Parms.beatNumber = beatNumber;
	Parms.beatInBar = beatInBar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UBTTask_WaitForSpan::OnNextMeasure(int32 measureNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_WaitForSpan", "OnNextMeasure");

	Params::BTTask_WaitForSpan_OnNextMeasure Parms{};

	Parms.measureNumber = measureNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UHmxAudioBlueprintUtil::FrequencyToMidiNote(float freq)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "FrequencyToMidiNote");

	Params::HmxAudioBlueprintUtil_FrequencyToMidiNote Parms{};

	Parms.freq = freq;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHmxAudioBlueprintUtil::GetAudioLatencyMs(class UObject* worldContextObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "GetAudioLatencyMs");

	Params::HmxAudioBlueprintUtil_GetAudioLatencyMs Parms{};

	Parms.worldContextObj = worldContextObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UHmxAudioBlueprintUtil::GetNoteNameFromNoteNumber(int32 midiNoteNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "GetNoteNameFromNoteNumber");

	Params::HmxAudioBlueprintUtil_GetNoteNameFromNoteNumber Parms{};

	Parms.midiNoteNumber = midiNoteNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHmxAudioBlueprintUtil::GetNoteNumberFromNoteName(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "GetNoteNumberFromNoteName");

	Params::HmxAudioBlueprintUtil_GetNoteNumberFromNoteName Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHmxAudioBlueprintUtil::GetNoteOctaveFromNoteNumber(int32 midiNoteNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "GetNoteOctaveFromNoteNumber");

	Params::HmxAudioBlueprintUtil_GetNoteOctaveFromNoteNumber Parms{};

	Parms.midiNoteNumber = midiNoteNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHmxAudioBlueprintUtil::GetVideoLatencyMs(class UObject* worldContextObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "GetVideoLatencyMs");

	Params::HmxAudioBlueprintUtil_GetVideoLatencyMs Parms{};

	Parms.worldContextObj = worldContextObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHmxAudioBlueprintUtil::SetAudioLatencyMs(class UObject* worldContextObj, float InAudioLatencyMs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "SetAudioLatencyMs");

	Params::HmxAudioBlueprintUtil_SetAudioLatencyMs Parms{};

	Parms.worldContextObj = worldContextObj;
	Parms.InAudioLatencyMs = InAudioLatencyMs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHmxAudioBlueprintUtil::SetVideoLatencyMs(class UObject* worldContextObj, float InVideoLatencyMs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxAudioBlueprintUtil", "SetVideoLatencyMs");

	Params::HmxAudioBlueprintUtil_SetVideoLatencyMs Parms{};

	Parms.worldContextObj = worldContextObj;
	Parms.InVideoLatencyMs = InVideoLatencyMs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FMidiNote UMidiNoteFunctionLibrary::ByteToMidiNote(uint8 InByte)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "ByteToMidiNote");

	Params::MidiNoteFunctionLibrary_ByteToMidiNote Parms{};

	Parms.InByte = InByte;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMidiNote UMidiNoteFunctionLibrary::GetMaxMidiNote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMaxMidiNote");

	Params::MidiNoteFunctionLibrary_GetMaxMidiNote Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UMidiNoteFunctionLibrary::GetMaxNoteNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMaxNoteNumber");

	Params::MidiNoteFunctionLibrary_GetMaxNoteNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UMidiNoteFunctionLibrary::GetMaxNoteVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMaxNoteVelocity");

	Params::MidiNoteFunctionLibrary_GetMaxNoteVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiNoteFunctionLibrary::GetMaxNumNotes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMaxNumNotes");

	Params::MidiNoteFunctionLibrary_GetMaxNumNotes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMidiNote UMidiNoteFunctionLibrary::GetMinMidiNote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMinMidiNote");

	Params::MidiNoteFunctionLibrary_GetMinMidiNote Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UMidiNoteFunctionLibrary::GetMinNoteNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMinNoteNumber");

	Params::MidiNoteFunctionLibrary_GetMinNoteNumber Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UMidiNoteFunctionLibrary::GetMinNoteVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "GetMinNoteVelocity");

	Params::MidiNoteFunctionLibrary_GetMinNoteVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMidiNote UMidiNoteFunctionLibrary::IntToMidiNote(int32 inInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "IntToMidiNote");

	Params::MidiNoteFunctionLibrary_IntToMidiNote Parms{};

	Parms.inInt = inInt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMidiNote UMidiNoteFunctionLibrary::MakeLiteralMidiNote(const struct FMidiNote& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "MakeLiteralMidiNote");

	Params::MidiNoteFunctionLibrary_MakeLiteralMidiNote Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UMidiNoteFunctionLibrary::MidiNoteToByte(const struct FMidiNote& InMidiNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "MidiNoteToByte");

	Params::MidiNoteFunctionLibrary_MidiNoteToByte Parms{};

	Parms.InMidiNote = std::move(InMidiNote);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiNoteFunctionLibrary::MidiNoteToInt(const struct FMidiNote& InMidiNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MidiNoteFunctionLibrary", "MidiNoteToInt");

	Params::MidiNoteFunctionLibrary_MidiNoteToInt Parms{};

	Parms.InMidiNote = std::move(InMidiNote);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicalTickFunctionLibrary::BeatToTick(float inBeat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicalTickFunctionLibrary", "BeatToTick");

	Params::MusicalTickFunctionLibrary_BeatToTick Parms{};

	Parms.inBeat = inBeat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicalTickFunctionLibrary::GetBeatsPerTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicalTickFunctionLibrary", "GetBeatsPerTick");

	Params::MusicalTickFunctionLibrary_GetBeatsPerTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicalTickFunctionLibrary::GetTicksPerBeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicalTickFunctionLibrary", "GetTicksPerBeat");

	Params::MusicalTickFunctionLibrary_GetTicksPerBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicalTickFunctionLibrary::GetTicksPerBeatInt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicalTickFunctionLibrary", "GetTicksPerBeatInt");

	Params::MusicalTickFunctionLibrary_GetTicksPerBeatInt Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicalTickFunctionLibrary::TickToBeat(float inTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicalTickFunctionLibrary", "TickToBeat");

	Params::MusicalTickFunctionLibrary_TickToBeat Parms{};

	Parms.inTick = inTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTickSpan UTickSpanFuncitonLibrary::ClampTickSpan(const struct FTickSpan& Target, const struct FTickSpan& clampSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "ClampTickSpan");

	Params::TickSpanFuncitonLibrary_ClampTickSpan Parms{};

	Parms.Target = std::move(Target);
	Parms.clampSpan = std::move(clampSpan);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTickSpanFuncitonLibrary::ClampTickSpanByRef(struct FTickSpan& Target, const struct FTickSpan& clampSpan, struct FTickSpan* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "ClampTickSpanByRef");

	Params::TickSpanFuncitonLibrary_ClampTickSpanByRef Parms{};

	Parms.Target = std::move(Target);
	Parms.clampSpan = std::move(clampSpan);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Target = std::move(Parms.Target);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

float UTickSpanFuncitonLibrary::GetEndBeat(const struct FTickSpan& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "GetEndBeat");

	Params::TickSpanFuncitonLibrary_GetEndBeat Parms{};

	Parms.Target = std::move(Target);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTickSpanFuncitonLibrary::GetEndTick(const struct FTickSpan& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "GetEndTick");

	Params::TickSpanFuncitonLibrary_GetEndTick Parms{};

	Parms.Target = std::move(Target);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTickSpanFuncitonLibrary::GetLengthBeats(const struct FTickSpan& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "GetLengthBeats");

	Params::TickSpanFuncitonLibrary_GetLengthBeats Parms{};

	Parms.Target = std::move(Target);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTickSpanFuncitonLibrary::GetLengthTicks(const struct FTickSpan& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "GetLengthTicks");

	Params::TickSpanFuncitonLibrary_GetLengthTicks Parms{};

	Parms.Target = std::move(Target);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTickSpanFuncitonLibrary::GetOffsetBeat(const struct FTickSpan& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "GetOffsetBeat");

	Params::TickSpanFuncitonLibrary_GetOffsetBeat Parms{};

	Parms.Target = std::move(Target);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTickSpanFuncitonLibrary::GetOffsetTick(const struct FTickSpan& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "GetOffsetTick");

	Params::TickSpanFuncitonLibrary_GetOffsetTick Parms{};

	Parms.Target = std::move(Target);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTickSpan UTickSpanFuncitonLibrary::MakeTickSpan(int32 Offset, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "MakeTickSpan");

	Params::TickSpanFuncitonLibrary_MakeTickSpan Parms{};

	Parms.Offset = Offset;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTickSpan UTickSpanFuncitonLibrary::MakeTickSpanFromBeats(float Offset, float Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TickSpanFuncitonLibrary", "MakeTickSpanFromBeats");

	Params::TickSpanFuncitonLibrary_MakeTickSpanFromBeats Parms{};

	Parms.Offset = Offset;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicTimeSlot* UMidiMusicSequence::AppendTimeSlot(const struct FMidiMusicTimeSlotArgs& args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicSequence", "AppendTimeSlot");

	Params::MidiMusicSequence_AppendTimeSlot Parms{};

	Parms.args = std::move(args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicTimeSlot* UMidiMusicSequence::InsertTimeSlot(const struct FMidiMusicTimeSlotArgs& args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicSequence", "InsertTimeSlot");

	Params::MidiMusicSequence_InsertTimeSlot Parms{};

	Parms.args = std::move(args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicTimeSlot* UMidiMusicSequence::FindTimeSlotAt(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicSequence", "FindTimeSlotAt");

	Params::MidiMusicSequence_FindTimeSlotAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicTimeSlot* UMidiMusicSequence::FindTimeSlotAtTick(int32 Tick) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicSequence", "FindTimeSlotAtTick");

	Params::MidiMusicSequence_FindTimeSlotAtTick Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicTimeSlot* UMidiMusicSequence::GetLastTimeSlot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicSequence", "GetLastTimeSlot");

	Params::MidiMusicSequence_GetLastTimeSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMidiMusicTimeSlot::SetCurrentPage(int32 inCurrentPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetCurrentPage");

	Params::MidiMusicTimeSlot_SetCurrentPage Parms{};

	Parms.inCurrentPage = inCurrentPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetEnabled(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetEnabled");

	Params::MidiMusicTimeSlot_SetEnabled Parms{};

	Parms.InEnabled = InEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetLengthTick(int32 inLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetLengthTick");

	Params::MidiMusicTimeSlot_SetLengthTick Parms{};

	Parms.inLength = inLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetMidiMusicItem(TScriptInterface<class IMidiMusicInterface> inMidiMusicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetMidiMusicItem");

	Params::MidiMusicTimeSlot_SetMidiMusicItem Parms{};

	Parms.inMidiMusicItem = inMidiMusicItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetNumPages(int32 inNumPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetNumPages");

	Params::MidiMusicTimeSlot_SetNumPages Parms{};

	Parms.inNumPages = inNumPages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetOffsetTick(int32 InOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetOffsetTick");

	Params::MidiMusicTimeSlot_SetOffsetTick Parms{};

	Parms.InOffset = InOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetPages(const TArray<bool>& inPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetPages");

	Params::MidiMusicTimeSlot_SetPages Parms{};

	Parms.inPages = std::move(inPages);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMusicTimeSlot::SetTickSpan(const struct FTickSpan& inTickSpan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "SetTickSpan");

	Params::MidiMusicTimeSlot_SetTickSpan Parms{};

	Parms.inTickSpan = std::move(inTickSpan);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMidiMusicTimeSlot::GetCurrentPage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetCurrentPage");

	Params::MidiMusicTimeSlot_GetCurrentPage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMidiMusicTimeSlot::GetEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetEnabled");

	Params::MidiMusicTimeSlot_GetEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetEndBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetEndBeat");

	Params::MidiMusicTimeSlot_GetEndBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetEndTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetEndTick");

	Params::MidiMusicTimeSlot_GetEndTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetIndexInSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetIndexInSequence");

	Params::MidiMusicTimeSlot_GetIndexInSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetLengthBeats() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetLengthBeats");

	Params::MidiMusicTimeSlot_GetLengthBeats Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetLengthTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetLengthTick");

	Params::MidiMusicTimeSlot_GetLengthTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TScriptInterface<class IMidiMusicInterface> UMidiMusicTimeSlot::GetMidiMusicItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetMidiMusicItem");

	Params::MidiMusicTimeSlot_GetMidiMusicItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetNumPages() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetNumPages");

	Params::MidiMusicTimeSlot_GetNumPages Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetOffsetBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetOffsetBeat");

	Params::MidiMusicTimeSlot_GetOffsetBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMidiMusicTimeSlot::GetOffsetTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetOffsetTick");

	Params::MidiMusicTimeSlot_GetOffsetTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<bool> UMidiMusicTimeSlot::GetPages() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetPages");

	Params::MidiMusicTimeSlot_GetPages Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTickSpan UMidiMusicTimeSlot::GetTickSpan() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMusicTimeSlot", "GetTickSpan");

	Params::MidiMusicTimeSlot_GetTickSpan Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicalGridEvent::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalGridEvent", "Cancel");

	Params::MusicalGridEvent_Cancel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicalGridEvent::GetProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalGridEvent", "GetProgress");

	Params::MusicalGridEvent_GetProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicalGridEvent::OnTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalGridEvent", "OnTriggered");

	UObject::ProcessEvent(Func, nullptr);
}

void UStepSequencerTrack::AppendGridSquares(int32 appendSquares, bool copyStates, bool copyMusicItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "AppendGridSquares");

	Params::StepSequencerTrack_AppendGridSquares Parms{};

	Parms.appendSquares = appendSquares;
	Parms.copyStates = copyStates;
	Parms.copyMusicItems = copyMusicItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::InitGridSquares(int32 inGridSquareNum, int32 inMaxGridSquares, float inGridSquareBeats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "InitGridSquares");

	Params::StepSequencerTrack_InitGridSquares Parms{};

	Parms.inGridSquareNum = inGridSquareNum;
	Parms.inMaxGridSquares = inMaxGridSquares;
	Parms.inGridSquareBeats = inGridSquareBeats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::OnTimeSlotEnabledChanged(class UMidiMusicTimeSlot* timeSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "OnTimeSlotEnabledChanged");

	Params::StepSequencerTrack_OnTimeSlotEnabledChanged Parms{};

	Parms.timeSlot = timeSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::OnTimeSlotMusicItemChanged(class UMidiMusicTimeSlot* timeSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "OnTimeSlotMusicItemChanged");

	Params::StepSequencerTrack_OnTimeSlotMusicItemChanged Parms{};

	Parms.timeSlot = timeSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::OnTimeSlotTimeSpanChanged(class UMidiMusicTimeSlot* timeSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "OnTimeSlotTimeSpanChanged");

	Params::StepSequencerTrack_OnTimeSlotTimeSpanChanged Parms{};

	Parms.timeSlot = timeSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::PopGridSquares(int32 popSquares)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "PopGridSquares");

	Params::StepSequencerTrack_PopGridSquares Parms{};

	Parms.popSquares = popSquares;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetCurrentPage(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetCurrentPage");

	Params::StepSequencerTrack_SetCurrentPage Parms{};

	Parms.Page = Page;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetGridSquareBeats(float inGridSquareBeats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetGridSquareBeats");

	Params::StepSequencerTrack_SetGridSquareBeats Parms{};

	Parms.inGridSquareBeats = inGridSquareBeats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetGridSquareState(int32 gridSquareIndex, bool isOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetGridSquareState");

	Params::StepSequencerTrack_SetGridSquareState Parms{};

	Parms.gridSquareIndex = gridSquareIndex;
	Parms.isOn = isOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetGridSquareStateOnPage(int32 gridSquareIndex, int32 PageIndex, bool isOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetGridSquareStateOnPage");

	Params::StepSequencerTrack_SetGridSquareStateOnPage Parms{};

	Parms.gridSquareIndex = gridSquareIndex;
	Parms.PageIndex = PageIndex;
	Parms.isOn = isOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetMusicItemAtGridSquare(int32 gridSquareIndex, TScriptInterface<class IMidiMusicInterface> MusicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetMusicItemAtGridSquare");

	Params::StepSequencerTrack_SetMusicItemAtGridSquare Parms{};

	Parms.gridSquareIndex = gridSquareIndex;
	Parms.MusicItem = MusicItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetMusicItemForWholeTrack(TScriptInterface<class IMidiMusicInterface> MusicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetMusicItemForWholeTrack");

	Params::StepSequencerTrack_SetMusicItemForWholeTrack Parms{};

	Parms.MusicItem = MusicItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetMusicItemsInTrack(const TArray<TScriptInterface<class IMidiMusicInterface>>& musicItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetMusicItemsInTrack");

	Params::StepSequencerTrack_SetMusicItemsInTrack Parms{};

	Parms.musicItems = std::move(musicItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::SetNumPages(int32 inNumPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "SetNumPages");

	Params::StepSequencerTrack_SetNumPages Parms{};

	Parms.inNumPages = inNumPages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerTrack::ToggleGridSquareState(int32 gridSquareIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "ToggleGridSquareState");

	Params::StepSequencerTrack_ToggleGridSquareState Parms{};

	Parms.gridSquareIndex = gridSquareIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMidiMusicTimeSlot* UStepSequencerTrack::FindGridSquareAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "FindGridSquareAtIndex");

	Params::StepSequencerTrack_FindGridSquareAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicTimeSlot* UStepSequencerTrack::FindGridSquareAtTick(int32 Tick) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "FindGridSquareAtTick");

	Params::StepSequencerTrack_FindGridSquareAtTick Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerTrack::GetEndTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "GetEndTick");

	Params::StepSequencerTrack_GetEndTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerTrack::GetGridSquareBeats() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "GetGridSquareBeats");

	Params::StepSequencerTrack_GetGridSquareBeats Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStepSequencerTrack::GetGridSquareState(int32 gridSquareIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "GetGridSquareState");

	Params::StepSequencerTrack_GetGridSquareState Parms{};

	Parms.gridSquareIndex = gridSquareIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerTrack::GetNumGridSquares() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "GetNumGridSquares");

	Params::StepSequencerTrack_GetNumGridSquares Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerTrack::TicksPerSquare() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerTrack", "TicksPerSquare");

	Params::StepSequencerTrack_TicksPerSquare Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::Continue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "Continue");

	Params::HarmonixPlayerComponentBase_Continue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHarmonixPlayerComponentBase::FadeAndStop(float Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "FadeAndStop");

	Params::HarmonixPlayerComponentBase_FadeAndStop Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixHandle* UHarmonixPlayerComponentBase::GetHarmonixHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetHarmonixHandle");

	Params::HarmonixPlayerComponentBase_GetHarmonixHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicPlayerComponentBase* UHarmonixPlayerComponentBase::GetSyncClip(class UHarmonixPlayerComponentBase* syncClip_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetSyncClip");

	Params::HarmonixPlayerComponentBase_GetSyncClip Parms{};

	Parms.syncClip_0 = syncClip_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "Pause");

	Params::HarmonixPlayerComponentBase_Pause Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHarmonixPlayerComponentBase::SetGain(float Gain_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetGain");

	Params::HarmonixPlayerComponentBase_SetGain Parms{};

	Parms.Gain_0 = Gain_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPlayerComponentBase::SetMute(bool mute_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetMute");

	Params::HarmonixPlayerComponentBase_SetMute Parms{};

	Parms.mute_0 = mute_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UHarmonixPlayerComponentBase::SetParameterValue(class FName Name_0, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetParameterValue");

	Params::HarmonixPlayerComponentBase_SetParameterValue Parms{};

	Parms.Name_0 = Name_0;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHarmonixPlayerComponentBase::SetPlayEmitterFindMethod(EPlayEmitterFindMethod Method)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetPlayEmitterFindMethod");

	Params::HarmonixPlayerComponentBase_SetPlayEmitterFindMethod Parms{};

	Parms.Method = Method;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPlayerComponentBase::SetStartPosition(EAudioClipStartPosition Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetStartPosition");

	Params::HarmonixPlayerComponentBase_SetStartPosition Parms{};

	Parms.Pos = Pos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPlayerComponentBase::SetSyncClip(class UMusicPlayerComponentBase* syncClip_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetSyncClip");

	Params::HarmonixPlayerComponentBase_SetSyncClip Parms{};

	Parms.syncClip_0 = syncClip_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPlayerComponentBase::SetSyncEmitterSpec(ESyncEmitterFindMethod syncEmitterSpec_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetSyncEmitterSpec");

	Params::HarmonixPlayerComponentBase_SetSyncEmitterSpec Parms{};

	Parms.syncEmitterSpec_0 = syncEmitterSpec_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPlayerComponentBase::SetTickOffset(int32 Tick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetTickOffset");

	Params::HarmonixPlayerComponentBase_SetTickOffset Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPlayerComponentBase::SetVolume(float Volume_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "SetVolume");

	Params::HarmonixPlayerComponentBase_SetVolume Parms{};

	Parms.Volume_0 = Volume_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UHarmonixPlayerComponentBase::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "Stop");

	Params::HarmonixPlayerComponentBase_Stop Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::Trigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "Trigger");

	Params::HarmonixPlayerComponentBase_Trigger Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixPlayerComponentBase::GetElapsedMs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetElapsedMs");

	Params::HarmonixPlayerComponentBase_GetElapsedMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::GetParameterValue(class FName Name_0, float* Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetParameterValue");

	Params::HarmonixPlayerComponentBase_GetParameterValue Parms{};

	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;
}

float UHarmonixPlayerComponentBase::GetSecsUntilNextPlay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetSecsUntilNextPlay");

	Params::HarmonixPlayerComponentBase_GetSecsUntilNextPlay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EAudioClipStartPosition UHarmonixPlayerComponentBase::GetStartPosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetStartPosition");

	Params::HarmonixPlayerComponentBase_GetStartPosition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ESyncEmitterFindMethod UHarmonixPlayerComponentBase::GetSyncEmitterSpec() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetSyncEmitterSpec");

	Params::HarmonixPlayerComponentBase_GetSyncEmitterSpec Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHarmonixPlayerComponentBase::GetTickOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "GetTickOffset");

	Params::HarmonixPlayerComponentBase_GetTickOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::IsFinished() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "IsFinished");

	Params::HarmonixPlayerComponentBase_IsFinished Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::IsNotPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "IsNotPlaying");

	Params::HarmonixPlayerComponentBase_IsNotPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::IsPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "IsPaused");

	Params::HarmonixPlayerComponentBase_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "IsPlaying");

	Params::HarmonixPlayerComponentBase_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::IsStarted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "IsStarted");

	Params::HarmonixPlayerComponentBase_IsStarted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixPlayerComponentBase::IsTriggered() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPlayerComponentBase", "IsTriggered");

	Params::HarmonixPlayerComponentBase_IsTriggered Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFAudioContinuationMode URepeatableMusicalAssetPlayerComponentBase::GetContinuationMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RepeatableMusicalAssetPlayerComponentBase", "GetContinuationMode");

	Params::RepeatableMusicalAssetPlayerComponentBase_GetContinuationMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthesizerComponentBase::AllNotesOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "AllNotesOff");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::AllNotesOffQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "AllNotesOffQuantized");

	Params::SynthesizerComponentBase_AllNotesOffQuantized Parms{};

	Parms.InClockHandle = InClockHandle;
	Parms.InQuantizationBoundary = std::move(InQuantizationBoundary);
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InClockHandle = Parms.InClockHandle;
	InQuantizationBoundary = std::move(Parms.InQuantizationBoundary);
}

struct FCCSetting USynthesizerComponentBase::GetController(int32 midiChannel, EMidiControllerID ControllerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "GetController");

	Params::SynthesizerComponentBase_GetController Parms{};

	Parms.midiChannel = midiChannel;
	Parms.ControllerId = ControllerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPBSetting USynthesizerComponentBase::GetPitchbend(int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "GetPitchbend");

	Params::SynthesizerComponentBase_GetPitchbend Parms{};

	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UInstrumentHandle* USynthesizerComponentBase::GetSynthHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "GetSynthHandle");

	Params::SynthesizerComponentBase_GetSynthHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthesizerComponentBase::NoteOff(const struct FMidiNote& Note_0, int32 midiCh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOff");

	Params::SynthesizerComponentBase_NoteOff Parms{};

	Parms.Note_0 = std::move(Note_0);
	Parms.midiCh = midiCh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::NoteOffQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, const struct FMidiNote& Note_0, int32 midiCh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOffQuantized");

	Params::SynthesizerComponentBase_NoteOffQuantized Parms{};

	Parms.InClockHandle = InClockHandle;
	Parms.InQuantizationBoundary = std::move(InQuantizationBoundary);
	Parms.InDelegate = InDelegate;
	Parms.Note_0 = std::move(Note_0);
	Parms.midiCh = midiCh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InClockHandle = Parms.InClockHandle;
	InQuantizationBoundary = std::move(Parms.InQuantizationBoundary);
}

void USynthesizerComponentBase::NoteOn(const struct FMidiNote& Note_0, int32 Velocity_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOn");

	Params::SynthesizerComponentBase_NoteOn Parms{};

	Parms.Note_0 = std::move(Note_0);
	Parms.Velocity_0 = Velocity_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::NoteOnChannel(const struct FMidiNote& Note_0, int32 Velocity_0, int32 midiCh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOnChannel");

	Params::SynthesizerComponentBase_NoteOnChannel Parms{};

	Parms.Note_0 = std::move(Note_0);
	Parms.Velocity_0 = Velocity_0;
	Parms.midiCh = midiCh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::NoteOnChannelWithOffset(const struct FMidiNote& Note_0, int32 Velocity_0, float msOffset, int32 midiCh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOnChannelWithOffset");

	Params::SynthesizerComponentBase_NoteOnChannelWithOffset Parms{};

	Parms.Note_0 = std::move(Note_0);
	Parms.Velocity_0 = Velocity_0;
	Parms.msOffset = msOffset;
	Parms.midiCh = midiCh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::NoteOnQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, const struct FMidiNote& Note_0, int32 Velocity_0, int32 midiCh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOnQuantized");

	Params::SynthesizerComponentBase_NoteOnQuantized Parms{};

	Parms.InClockHandle = InClockHandle;
	Parms.InQuantizationBoundary = std::move(InQuantizationBoundary);
	Parms.InDelegate = InDelegate;
	Parms.Note_0 = std::move(Note_0);
	Parms.Velocity_0 = Velocity_0;
	Parms.midiCh = midiCh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InClockHandle = Parms.InClockHandle;
	InQuantizationBoundary = std::move(Parms.InQuantizationBoundary);
}

void USynthesizerComponentBase::NoteOnWithOffset(const struct FMidiNote& Note_0, int32 Velocity_0, float msOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "NoteOnWithOffset");

	Params::SynthesizerComponentBase_NoteOnWithOffset Parms{};

	Parms.Note_0 = std::move(Note_0);
	Parms.Velocity_0 = Velocity_0;
	Parms.msOffset = msOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::SetController(int32 midiChannel, EMidiControllerID ControllerId, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "SetController");

	Params::SynthesizerComponentBase_SetController Parms{};

	Parms.midiChannel = midiChannel;
	Parms.ControllerId = ControllerId;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::SetNote(const struct FMidiNote& Note_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "SetNote");

	Params::SynthesizerComponentBase_SetNote Parms{};

	Parms.Note_0 = std::move(Note_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::SetPitchBend(int32 midiChannel, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "SetPitchBend");

	Params::SynthesizerComponentBase_SetPitchBend Parms{};

	Parms.midiChannel = midiChannel;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthesizerComponentBase::SetVelocity(int32 Velocity_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthesizerComponentBase", "SetVelocity");

	Params::SynthesizerComponentBase_SetVelocity Parms{};

	Parms.Velocity_0 = Velocity_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaggerSynthComponent::SetDaggerPatch(TSoftObjectPtr<class UDaggerPatchAsset> Patch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaggerSynthComponent", "SetDaggerPatch");

	Params::DaggerSynthComponent_SetDaggerPatch Parms{};

	Parms.Patch = Patch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFusionSynthComponent::SetFusionPatch(TSoftObjectPtr<class UFusionPatchAsset> Patch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionSynthComponent", "SetFusionPatch");

	Params::FusionSynthComponent_SetFusionPatch Parms{};

	Parms.Patch = Patch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSongPos UMediaMusicTimelineGenerator::CalculateSongPosAtTick(float Tick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaMusicTimelineGenerator", "CalculateSongPosAtTick");

	Params::MediaMusicTimelineGenerator_CalculateSongPosAtTick Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaMusicTimelineGenerator::GetElapsedMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaMusicTimelineGenerator", "GetElapsedMs");

	Params::MediaMusicTimelineGenerator_GetElapsedMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaMusicTimelineGenerator::GetLengthMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaMusicTimelineGenerator", "GetLengthMs");

	Params::MediaMusicTimelineGenerator_GetLengthMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicHandle* UMediaMusicTimelineGenerator::GetMusicHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaMusicTimelineGenerator", "GetMusicHandle");

	Params::MediaMusicTimelineGenerator_GetMusicHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaMusicTimelineGenerator::SetMediaSoundComponent(class UMediaSoundComponent* InMediaSoundComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaMusicTimelineGenerator", "SetMediaSoundComponent");

	Params::MediaMusicTimelineGenerator_SetMediaSoundComponent Parms{};

	Parms.InMediaSoundComponent = InMediaSoundComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMsgBroadcasterComponent::SetEmitter(class UMusicEmitterComponent* InEmitter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMsgBroadcasterComponent", "SetEmitter");

	Params::MidiMsgBroadcasterComponent_SetEmitter Parms{};

	Parms.InEmitter = InEmitter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMsgBroadcasterComponent::SetMusicHandle(class UMusicHandle* InHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMsgBroadcasterComponent", "SetMusicHandle");

	Params::MidiMsgBroadcasterComponent_SetMusicHandle Parms{};

	Parms.InHandle = InHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMidiMsgBroadcasterComponent::SetMusicPlayer(class UMusicPlayerComponentBase* InMusicPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidiMsgBroadcasterComponent", "SetMusicPlayer");

	Params::MidiMsgBroadcasterComponent_SetMusicPlayer Parms{};

	Parms.InMusicPlayer = InMusicPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMusicPlayerComponentBase::FindTextEvent(const class FString& MarkerText, const class FString& midiTrackName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "FindTextEvent");

	Params::MusicPlayerComponentBase_FindTextEvent Parms{};

	Parms.MarkerText = std::move(MarkerText);
	Parms.midiTrackName = std::move(midiTrackName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicPlayerComponentBase::GetBar(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetBar");

	Params::MusicPlayerComponentBase_GetBar Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicPlayerComponentBase::GetBeat(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetBeat");

	Params::MusicPlayerComponentBase_GetBeat Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicPlayerComponentBase::GetBeatSpan(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetBeatSpan");

	Params::MusicPlayerComponentBase_GetBeatSpan Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMusicPlayerComponentBase::GetCurrentSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetCurrentSection");

	Params::MusicPlayerComponentBase_GetCurrentSection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicPlayerComponentBase::GetCurrentTempo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetCurrentTempo");

	Params::MusicPlayerComponentBase_GetCurrentTempo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicPlayerComponentBase::GetLengthInTicks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetLengthInTicks");

	Params::MusicPlayerComponentBase_GetLengthInTicks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicPlayerComponentBase::GetMeasureSpan(EMusicTimebase inTimebas, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetMeasureSpan");

	Params::MusicPlayerComponentBase_GetMeasureSpan Parms{};

	Parms.inTimebas = inTimebas;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicHandle* UMusicPlayerComponentBase::GetMusicHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetMusicHandle");

	Params::MusicPlayerComponentBase_GetMusicHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSongPos UMusicPlayerComponentBase::GetSongPos(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetSongPos");

	Params::MusicPlayerComponentBase_GetSongPos Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicPlayerComponentBase::GetTick(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetTick");

	Params::MusicPlayerComponentBase_GetTick Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicPlayerComponentBase::RegisterMusicalEventRouter(class UMusicalEventRouterComponentBase* router)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "RegisterMusicalEventRouter");

	Params::MusicPlayerComponentBase_RegisterMusicalEventRouter Parms{};

	Parms.router = router;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::Seek(float positionMs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "Seek");

	Params::MusicPlayerComponentBase_Seek Parms{};

	Parms.positionMs = positionMs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SeekToTick(int32 seekTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SeekToTick");

	Params::MusicPlayerComponentBase_SeekToTick Parms{};

	Parms.seekTick = seekTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetAllTracksMute(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetAllTracksMute");

	Params::MusicPlayerComponentBase_SetAllTracksMute Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMusicPlayerComponentBase::SetLoopViaStartEndBar(int32 loopStartBar, int32 loopEndBar, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetLoopViaStartEndBar");

	Params::MusicPlayerComponentBase_SetLoopViaStartEndBar Parms{};

	Parms.loopStartBar = loopStartBar;
	Parms.loopEndBar = loopEndBar;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicPlayerComponentBase::SetLoopViaStartEndTick(int32 loopStartTick, int32 loopEndTick, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetLoopViaStartEndTick");

	Params::MusicPlayerComponentBase_SetLoopViaStartEndTick Parms{};

	Parms.loopStartTick = loopStartTick;
	Parms.loopEndTick = loopEndTick;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicPlayerComponentBase::SetMaintainPitch(bool maintainPitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetMaintainPitch");

	Params::MusicPlayerComponentBase_SetMaintainPitch Parms{};

	Parms.maintainPitch = maintainPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetSpeed");

	Params::MusicPlayerComponentBase_SetSpeed Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetSpeedToAchieveTempo(float BPM, bool maintainPitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetSpeedToAchieveTempo");

	Params::MusicPlayerComponentBase_SetSpeedToAchieveTempo Parms{};

	Parms.BPM = BPM;
	Parms.maintainPitch = maintainPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetTrackDb(const class FString& trackName, float db, float Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetTrackDb");

	Params::MusicPlayerComponentBase_SetTrackDb Parms{};

	Parms.trackName = std::move(trackName);
	Parms.db = db;
	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetTrackGain(const class FString& trackName, float trackGain, float Seconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetTrackGain");

	Params::MusicPlayerComponentBase_SetTrackGain Parms{};

	Parms.trackName = std::move(trackName);
	Parms.trackGain = trackGain;
	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetTrackMute(const struct FTrackChannelSpecifier& trackInfo, bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetTrackMute");

	Params::MusicPlayerComponentBase_SetTrackMute Parms{};

	Parms.trackInfo = std::move(trackInfo);
	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::SetTransposition(int32 Semitones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "SetTransposition");

	Params::MusicPlayerComponentBase_SetTransposition Parms{};

	Parms.Semitones = Semitones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicPlayerComponentBase::UnregisterMusicalEventRouter(class UMusicalEventRouterComponentBase* router)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "UnregisterMusicalEventRouter");

	Params::MusicPlayerComponentBase_UnregisterMusicalEventRouter Parms{};

	Parms.router = router;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSongPos UMusicPlayerComponentBase::CalculateSongPosAtMs(float ms) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "CalculateSongPosAtMs");

	Params::MusicPlayerComponentBase_CalculateSongPosAtMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSongPos UMusicPlayerComponentBase::CalculateSongPosAtTick(float inTick) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "CalculateSongPosAtTick");

	Params::MusicPlayerComponentBase_CalculateSongPosAtTick Parms{};

	Parms.inTick = inTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicPlayerComponentBase::GetSpeed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetSpeed");

	Params::MusicPlayerComponentBase_GetSpeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicPlayerComponentBase::GetTempoAtTick(int32 atTick) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicPlayerComponentBase", "GetTempoAtTick");

	Params::MusicPlayerComponentBase_GetTempoAtTick Parms{};

	Parms.atTick = atTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicalEventRouterComponentBase::AttachToMusicHandle(class UMusicHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalEventRouterComponentBase", "AttachToMusicHandle");

	Params::MusicalEventRouterComponentBase_AttachToMusicHandle Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicalEventRouterComponentBase::DetachFromAllMusicHandles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalEventRouterComponentBase", "DetachFromAllMusicHandles");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UMusicalEventRouterComponentBase::DetachFromMusicHandle(class UMusicHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalEventRouterComponentBase", "DetachFromMusicHandle");

	Params::MusicalEventRouterComponentBase_DetachFromMusicHandle Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicalEventRouterComponentBase::IsAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalEventRouterComponentBase", "IsAttached");

	Params::MusicalEventRouterComponentBase_IsAttached Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USchedulerBasedMusicalEventRouterComponentBase::SecsUntilNextFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerBasedMusicalEventRouterComponentBase", "SecsUntilNextFire");

	Params::SchedulerBasedMusicalEventRouterComponentBase_SecsUntilNextFire Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicalGridEventRouterComponent::OnTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalGridEventRouterComponent", "OnTriggered");

	UObject::ProcessEvent(Func, nullptr);
}

void UMusicalTimespanSequencerComponent::_ClockIsDying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "_ClockIsDying");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UMusicalTimespanSequencerComponent::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "Cancel");

	Params::MusicalTimespanSequencerComponent_Cancel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicalTimespanSequencerComponent::GetProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "GetProgress");

	Params::MusicalTimespanSequencerComponent_GetProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicalTimespanSequencerComponent::OnCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "OnCanceled");

	UObject::ProcessEvent(Func, nullptr);
}

void UMusicalTimespanSequencerComponent::OnSeeked(struct FMusicalTimeSpan* nextTrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "OnSeeked");

	Params::MusicalTimespanSequencerComponent_OnSeeked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (nextTrigger != nullptr)
		*nextTrigger = std::move(Parms.nextTrigger);
}

void UMusicalTimespanSequencerComponent::OnTriggered(struct FMusicalTimeSpan* nextTrigger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "OnTriggered");

	Params::MusicalTimespanSequencerComponent_OnTriggered Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (nextTrigger != nullptr)
		*nextTrigger = std::move(Parms.nextTrigger);
}

bool UMusicalTimespanSequencerComponent::Running()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "Running");

	Params::MusicalTimespanSequencerComponent_Running Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicalTimespanSequencerComponent::SetMusicClock(class UOldMusicClockComponent* clock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "SetMusicClock");

	Params::MusicalTimespanSequencerComponent_SetMusicClock Parms{};

	Parms.clock = clock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicalTimespanSequencerComponent::StartOnNextBeat(EMTSResult* Result, int32 waitMinimumTicks, float waitMinimumMs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "StartOnNextBeat");

	Params::MusicalTimespanSequencerComponent_StartOnNextBeat Parms{};

	Parms.waitMinimumTicks = waitMinimumTicks;
	Parms.waitMinimumMs = waitMinimumMs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UMusicalTimespanSequencerComponent::StartOnNextDownBeat(EMTSResult* Result, int32 waitMinimumTicks, float waitMinimumMs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicalTimespanSequencerComponent", "StartOnNextDownBeat");

	Params::MusicalTimespanSequencerComponent_StartOnNextDownBeat Parms{};

	Parms.waitMinimumTicks = waitMinimumTicks;
	Parms.waitMinimumMs = waitMinimumMs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;
}

class UMusicEmitterComponent* UMusicEmitterComponent::GetWorldsDefaultMusicEmitter(class UObject* worldContextObj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MusicEmitterComponent", "GetWorldsDefaultMusicEmitter");

	Params::MusicEmitterComponent_GetWorldsDefaultMusicEmitter Parms{};

	Parms.worldContextObj = worldContextObj;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicEmitterComponent::ContinueAllSounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "ContinueAllSounds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UMusicEmitterComponent::GetBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "GetBar");

	Params::MusicEmitterComponent_GetBar Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicEmitterComponent::GetBeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "GetBeat");

	Params::MusicEmitterComponent_GetBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicEmitterComponent::GetParameter(class FName Parameter, float* OutVal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "GetParameter");

	Params::MusicEmitterComponent_GetParameter Parms{};

	Parms.Parameter = Parameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVal != nullptr)
		*OutVal = Parms.OutVal;

	return Parms.ReturnValue;
}

void UMusicEmitterComponent::InsertDynamicSourceEffect(class USoundEffectSourcePreset* EffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "InsertDynamicSourceEffect");

	Params::MusicEmitterComponent_InsertDynamicSourceEffect Parms{};

	Parms.EffectPreset = EffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicEmitterComponent::KillAllSounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "KillAllSounds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMusicEmitterComponent::PauseAllSounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "PauseAllSounds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UInstrumentHandle* UMusicEmitterComponent::PlayInstrument(const struct FPlayInstrumentArgs& args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "PlayInstrument");

	Params::MusicEmitterComponent_PlayInstrument Parms{};

	Parms.args = std::move(args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicHandle* UMusicEmitterComponent::PlayMusic(const struct FPlayMusicArgs& args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "PlayMusic");

	Params::MusicEmitterComponent_PlayMusic Parms{};

	Parms.args = std::move(args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicEmitterComponent::RemoveDynamicSourceEffect(class USoundEffectSourcePreset* EffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "RemoveDynamicSourceEffect");

	Params::MusicEmitterComponent_RemoveDynamicSourceEffect Parms{};

	Parms.EffectPreset = EffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicEmitterComponent::SetParameter(class FName Parameter, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "SetParameter");

	Params::MusicEmitterComponent_SetParameter Parms{};

	Parms.Parameter = Parameter;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicEmitterComponent::StopAllSounds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "StopAllSounds");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class FString UMusicEmitterComponent::GetSection() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "GetSection");

	Params::MusicEmitterComponent_GetSection Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicHandle* UMusicEmitterComponent::GetTimeAuthorityHandle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicEmitterComponent", "GetTimeAuthorityHandle");

	Params::MusicEmitterComponent_GetTimeAuthorityHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicTimelinePlayerComponent::GetLengthTimeSigAndNativeTempo(int32* numMeasures, float* BPM, int32* Num, int32* denom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "GetLengthTimeSigAndNativeTempo");

	Params::MusicTimelinePlayerComponent_GetLengthTimeSigAndNativeTempo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (numMeasures != nullptr)
		*numMeasures = Parms.numMeasures;

	if (BPM != nullptr)
		*BPM = Parms.BPM;

	if (Num != nullptr)
		*Num = Parms.Num;

	if (denom != nullptr)
		*denom = Parms.denom;
}

void UMusicTimelinePlayerComponent::GetTimeSignature(int32* Numerator, int32* Denominator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "GetTimeSignature");

	Params::MusicTimelinePlayerComponent_GetTimeSignature Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Numerator != nullptr)
		*Numerator = Parms.Numerator;

	if (Denominator != nullptr)
		*Denominator = Parms.Denominator;
}

void UMusicTimelinePlayerComponent::SetLength(int32 newMeasures)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "SetLength");

	Params::MusicTimelinePlayerComponent_SetLength Parms{};

	Parms.newMeasures = newMeasures;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicTimelinePlayerComponent::SetLengthTimeSigAndNativeTempo(int32 newMeasures, float BPM, int32 Num, int32 denom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "SetLengthTimeSigAndNativeTempo");

	Params::MusicTimelinePlayerComponent_SetLengthTimeSigAndNativeTempo Parms{};

	Parms.newMeasures = newMeasures;
	Parms.BPM = BPM;
	Parms.Num = Num;
	Parms.denom = denom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicTimelinePlayerComponent::SetTimelineNativeTempo(float newTempo, bool ApplyNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "SetTimelineNativeTempo");

	Params::MusicTimelinePlayerComponent_SetTimelineNativeTempo Parms{};

	Parms.newTempo = newTempo;
	Parms.ApplyNow = ApplyNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicTimelinePlayerComponent::SetTimelineNativeTempoImmediate(float newTempo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "SetTimelineNativeTempoImmediate");

	Params::MusicTimelinePlayerComponent_SetTimelineNativeTempoImmediate Parms{};

	Parms.newTempo = newTempo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicTimelinePlayerComponent::SetTimeSignature(int32 Numerator, int32 Denominator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicTimelinePlayerComponent", "SetTimeSignature");

	Params::MusicTimelinePlayerComponent_SetTimeSignature Parms{};

	Parms.Numerator = Numerator;
	Parms.Denominator = Denominator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UOldMusicClockComponent* UOldMusicClockComponent::CreateMusicClock(class UObject* WorldContextObject, class UMusicEmitterComponent* Emitter, EHarmonixHandleValidity* Result, bool Start_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OldMusicClockComponent", "CreateMusicClock");

	Params::OldMusicClockComponent_CreateMusicClock Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Emitter = Emitter;
	Parms.Start_0 = Start_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void UOldMusicClockComponent::MusicalBeatDelay(class UObject* WorldContextObject, float beats, EMusicTimebase inTimeBase, class UMusicHandle* MusicHandle, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OldMusicClockComponent", "MusicalBeatDelay");

	Params::OldMusicClockComponent_MusicalBeatDelay Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.beats = beats;
	Parms.inTimeBase = inTimeBase;
	Parms.MusicHandle = MusicHandle;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UOldMusicClockComponent::MusicalTickDelay(class UObject* WorldContextObject, int32 ticks, EMusicTimebase inTimeBase, class UMusicHandle* MusicHandle, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OldMusicClockComponent", "MusicalTickDelay");

	Params::OldMusicClockComponent_MusicalTickDelay Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ticks = ticks;
	Parms.inTimeBase = inTimeBase;
	Parms.MusicHandle = MusicHandle;
	Parms.LatentInfo = std::move(LatentInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UOldMusicClockComponent::Continue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "Continue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UMusicHandle* UOldMusicClockComponent::GetMusicHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetMusicHandle");

	Params::OldMusicClockComponent_GetMusicHandle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UOldMusicClockComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UOldMusicClockComponent::SetMusicHandle(class UMusicHandle* sh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "SetMusicHandle");

	Params::OldMusicClockComponent_SetMusicHandle Parms{};

	Parms.sh = sh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMusicalGridEvent* UOldMusicClockComponent::SpawnMusicalGridEvent(EOldScheduleResult* outResult, const struct FMusicalTimeSpan& gridConfig, float holdOffMs, int32 holdOffTicks, bool repeating, TSubclassOf<class UMusicalGridEvent> EventType, class UObject* Parent, class FName Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "SpawnMusicalGridEvent");

	Params::OldMusicClockComponent_SpawnMusicalGridEvent Parms{};

	Parms.gridConfig = std::move(gridConfig);
	Parms.holdOffMs = holdOffMs;
	Parms.holdOffTicks = holdOffTicks;
	Parms.repeating = repeating;
	Parms.EventType = EventType;
	Parms.Parent = Parent;
	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	return Parms.ReturnValue;
}

void UOldMusicClockComponent::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "Start");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UOldMusicClockComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UOldMusicClockComponent::WatchEmitter(class UMusicEmitterComponent* Emitter, bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "WatchEmitter");

	Params::OldMusicClockComponent_WatchEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.Start = Start;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UOldMusicClockComponent::GetBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetBeat");

	Params::OldMusicClockComponent_GetBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetBeatInMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetBeatInMeasure");

	Params::OldMusicClockComponent_GetBeatInMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetCurentMsPerPulse() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetCurentMsPerPulse");

	Params::OldMusicClockComponent_GetCurentMsPerPulse Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetCurrentMsPerBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetCurrentMsPerBeat");

	Params::OldMusicClockComponent_GetCurrentMsPerBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetCurrentMsPerMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetCurrentMsPerMeasure");

	Params::OldMusicClockComponent_GetCurrentMsPerMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetCurrentMsPerTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetCurrentMsPerTick");

	Params::OldMusicClockComponent_GetCurrentMsPerTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetCurrentTicksPerMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetCurrentTicksPerMeasure");

	Params::OldMusicClockComponent_GetCurrentTicksPerMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetCurrentTicksPerPulse() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetCurrentTicksPerPulse");

	Params::OldMusicClockComponent_GetCurrentTicksPerPulse Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetDeltaBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetDeltaBeat");

	Params::OldMusicClockComponent_GetDeltaBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetDeltaMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetDeltaMeasure");

	Params::OldMusicClockComponent_GetDeltaMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetDeltaTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetDeltaTick");

	Params::OldMusicClockComponent_GetDeltaTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetFractionalBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetFractionalBeat");

	Params::OldMusicClockComponent_GetFractionalBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetFractionalBeatInMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetFractionalBeatInMeasure");

	Params::OldMusicClockComponent_GetFractionalBeatInMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetFractionalMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetFractionalMeasure");

	Params::OldMusicClockComponent_GetFractionalMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetFractionalTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetFractionalTick");

	Params::OldMusicClockComponent_GetFractionalTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetFractionalTickInBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetFractionalTickInBeat");

	Params::OldMusicClockComponent_GetFractionalTickInBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetFractionalTickInMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetFractionalTickInMeasure");

	Params::OldMusicClockComponent_GetFractionalTickInMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetMeasure");

	Params::OldMusicClockComponent_GetMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetSeconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetSeconds");

	Params::OldMusicClockComponent_GetSeconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FSongPos UOldMusicClockComponent::GetSongPos() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetSongPos");

	Params::OldMusicClockComponent_GetSongPos Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EOldMusicClockState UOldMusicClockComponent::GetState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetState");

	Params::OldMusicClockComponent_GetState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetTick() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetTick");

	Params::OldMusicClockComponent_GetTick Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetTickInBeat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetTickInBeat");

	Params::OldMusicClockComponent_GetTickInBeat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UOldMusicClockComponent::GetTickInMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetTickInMeasure");

	Params::OldMusicClockComponent_GetTickInMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetTicksPerMeasure() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetTicksPerMeasure");

	Params::OldMusicClockComponent_GetTicksPerMeasure Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::GetTicksPerPulse() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "GetTicksPerPulse");

	Params::OldMusicClockComponent_GetTicksPerPulse Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::MeasureSpanProgress(const struct FMusicalTimeSpan& span) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "MeasureSpanProgress");

	Params::OldMusicClockComponent_MeasureSpanProgress Parms{};

	Parms.span = std::move(span);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::MeasureTimeSinceSpan(const struct FMusicalTimeSpan& span) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "MeasureTimeSinceSpan");

	Params::OldMusicClockComponent_MeasureTimeSinceSpan Parms{};

	Parms.span = std::move(span);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::MeasureTimeUntilSpan(const struct FMusicalTimeSpan& span) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "MeasureTimeUntilSpan");

	Params::OldMusicClockComponent_MeasureTimeUntilSpan Parms{};

	Parms.span = std::move(span);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UOldMusicClockComponent::MsToFractionalTick(float ms) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OldMusicClockComponent", "MsToFractionalTick");

	Params::OldMusicClockComponent_MsToFractionalTick Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStepSequencerComponent::AppendSteps(int32 numSteps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "AppendSteps");

	Params::StepSequencerComponent_AppendSteps Parms{};

	Parms.numSteps = numSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::ApplySaveToTrack(class UStepSequencerTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "ApplySaveToTrack");

	Params::StepSequencerComponent_ApplySaveToTrack Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::ApplyTemplate(const struct FSequencerSave& Template)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "ApplyTemplate");

	Params::StepSequencerComponent_ApplyTemplate Parms{};

	Parms.Template = std::move(Template);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UStepSequencerTrack* UStepSequencerComponent::CreateNewTrack(const struct FTrackArgs& args)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "CreateNewTrack");

	Params::StepSequencerComponent_CreateNewTrack Parms{};

	Parms.args = std::move(args);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMidiMusicAsset* UStepSequencerComponent::MakeNewMidiSongFromTracks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "MakeNewMidiSongFromTracks");

	Params::StepSequencerComponent_MakeNewMidiSongFromTracks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStepSequencerComponent::OnAnyGridSquareStateChanged(class UStepSequencerTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "OnAnyGridSquareStateChanged");

	Params::StepSequencerComponent_OnAnyGridSquareStateChanged Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::OnGridSquareStateChanged(class UStepSequencerTrack* track, class UMidiMusicTimeSlot* timeSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "OnGridSquareStateChanged");

	Params::StepSequencerComponent_OnGridSquareStateChanged Parms{};

	Parms.track = track;
	Parms.timeSlot = timeSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::OnRep_SequencerSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "OnRep_SequencerSave");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::PopSteps(int32 numSteps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "PopSteps");

	Params::StepSequencerComponent_PopSteps Parms{};

	Parms.numSteps = numSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::RemoveAllTracks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "RemoveAllTracks");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UStepSequencerComponent::RemoveTrack(class UStepSequencerTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "RemoveTrack");

	Params::StepSequencerComponent_RemoveTrack Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UStepSequencerComponent::RemoveTrackAt(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "RemoveTrackAt");

	Params::StepSequencerComponent_RemoveTrackAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStepSequencerComponent::SetBeatLength(float BeatLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "SetBeatLength");

	Params::StepSequencerComponent_SetBeatLength Parms{};

	Parms.BeatLength = BeatLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::SetCurrentPage(int32 inCurrentPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "SetCurrentPage");

	Params::StepSequencerComponent_SetCurrentPage Parms{};

	Parms.inCurrentPage = inCurrentPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::SetMonophonic(bool bNewMonophonic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "SetMonophonic");

	Params::StepSequencerComponent_SetMonophonic Parms{};

	Parms.bNewMonophonic = bNewMonophonic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::SetNumberPages(int32 inPages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "SetNumberPages");

	Params::StepSequencerComponent_SetNumberPages Parms{};

	Parms.inPages = inPages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStepSequencerComponent::UpdateMidiSongOnMidiMusicPlayer(class UMidiMusicPlayerComponent* InMidiMusicPlayerComponent, bool ForceRefresh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "UpdateMidiSongOnMidiMusicPlayer");

	Params::StepSequencerComponent_UpdateMidiSongOnMidiMusicPlayer Parms{};

	Parms.InMidiMusicPlayerComponent = InMidiMusicPlayerComponent;
	Parms.ForceRefresh = ForceRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UStepSequencerTrack* UStepSequencerComponent::FindTrackAt(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "FindTrackAt");

	Params::StepSequencerComponent_FindTrackAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerComponent::GetCurrentPage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "GetCurrentPage");

	Params::StepSequencerComponent_GetCurrentPage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerComponent::GetLengthTicks() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "GetLengthTicks");

	Params::StepSequencerComponent_GetLengthTicks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerComponent::GetMaxNumSteps() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "GetMaxNumSteps");

	Params::StepSequencerComponent_GetMaxNumSteps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerComponent::GetNumSteps() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "GetNumSteps");

	Params::StepSequencerComponent_GetNumSteps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UStepSequencerComponent::GetNumTracks() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepSequencerComponent", "GetNumTracks");

	Params::StepSequencerComponent_GetNumTracks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UHarmonixAnalyzerSourceEffectPreset* UHarmonixAnalyzerSourceEffectPreset::CreateHarmonixAnalyzerInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixAnalyzerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixAnalyzerSourceEffectPreset", "CreateHarmonixAnalyzerInstanceOnEmitter");

	Params::HarmonixAnalyzerSourceEffectPreset_CreateHarmonixAnalyzerInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixAnalyzerSourceEffectPreset::GetHarmonixAnalyzerResults(class FName AnalyzerName, struct FHarmonixAnalyzerEffectResults* Result, bool ResetMonoPeakDb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixAnalyzerSourceEffectPreset", "GetHarmonixAnalyzerResults");

	Params::HarmonixAnalyzerSourceEffectPreset_GetHarmonixAnalyzerResults Parms{};

	Parms.AnalyzerName = AnalyzerName;
	Parms.ResetMonoPeakDb = ResetMonoPeakDb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

void UHarmonixAnalyzerSourceEffectPreset::GetResults(struct FHarmonixAnalyzerEffectResults* Result, bool ResetMonoPeakDb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "GetResults");

	Params::HarmonixAnalyzerSourceEffectPreset_GetResults Parms{};

	Parms.ResetMonoPeakDb = ResetMonoPeakDb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

void UHarmonixAnalyzerSourceEffectPreset::HardResetVUMeter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "HardResetVUMeter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::ResetDynamicRangeMeter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "ResetDynamicRangeMeter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::ResetDynamicRangePeaks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "ResetDynamicRangePeaks");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankBandEndHz(int32 bandIndex, float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankBandEndHz");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankBandEndHz Parms{};

	Parms.bandIndex = bandIndex;
	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankBandOutputSettings(int32 bandIndex, const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankBandOutputSettings");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankBandOutputSettings Parms{};

	Parms.bandIndex = bandIndex;
	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankBandStartHz(int32 bandIndex, float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankBandStartHz");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankBandStartHz Parms{};

	Parms.bandIndex = bandIndex;
	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankFallMs(int32 bandIndex, float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankFallMs");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankFallMs Parms{};

	Parms.bandIndex = bandIndex;
	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankMaxDB(int32 bandIndex, float dbMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankMaxDB");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankMaxDB Parms{};

	Parms.bandIndex = bandIndex;
	Parms.dbMax = dbMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankRangeDB(int32 bandIndex, float dbRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankRangeDB");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankRangeDB Parms{};

	Parms.bandIndex = bandIndex;
	Parms.dbRange = dbRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetBandFilterBankRiseMs(int32 bandIndex, float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetBandFilterBankRiseMs");

	Params::HarmonixAnalyzerSourceEffectPreset_SetBandFilterBankRiseMs Parms{};

	Parms.bandIndex = bandIndex;
	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetDynamicRangeMeterAlphas(float highRising, float highFalling, float lowRising, float lowFalling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetDynamicRangeMeterAlphas");

	Params::HarmonixAnalyzerSourceEffectPreset_SetDynamicRangeMeterAlphas Parms{};

	Parms.highRising = highRising;
	Parms.highFalling = highFalling;
	Parms.lowRising = lowRising;
	Parms.lowFalling = lowFalling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetDynamicRangeMeterEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetDynamicRangeMeterEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetDynamicRangeMeterEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetDynamicRangeMeterFilter(bool Enable, float Cutoff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetDynamicRangeMeterFilter");

	Params::HarmonixAnalyzerSourceEffectPreset_SetDynamicRangeMeterFilter Parms{};

	Parms.Enable = Enable;
	Parms.Cutoff = Cutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetDynamicRangeMeterRmsWindow(int32 Frames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetDynamicRangeMeterRmsWindow");

	Params::HarmonixAnalyzerSourceEffectPreset_SetDynamicRangeMeterRmsWindow Parms{};

	Parms.Frames = Frames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTEqualLoudnessWeights(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTEqualLoudnessWeights");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTEqualLoudnessWeights Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTFallMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTFallMs");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTFallMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTLength(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTLength");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTLength Parms{};

	Parms.Num = Num;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTMaxDB(float dbMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTMaxDB");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTMaxDB Parms{};

	Parms.dbMax = dbMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTMaxFrequencyHz(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTMaxFrequencyHz");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTMaxFrequencyHz Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTMelScaleBinning(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTMelScaleBinning");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTMelScaleBinning Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTMinFrequencyHz(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTMinFrequencyHz");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTMinFrequencyHz Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTNumResultBins(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTNumResultBins");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTNumResultBins Parms{};

	Parms.Num = Num;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTOutputSettings");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTRangeDB(float dbRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTRangeDB");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTRangeDB Parms{};

	Parms.dbRange = dbRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetFFTRiseMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetFFTRiseMs");

	Params::HarmonixAnalyzerSourceEffectPreset_SetFFTRiseMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetNumBandFilterBankBands(int32 Bands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetNumBandFilterBankBands");

	Params::HarmonixAnalyzerSourceEffectPreset_SetNumBandFilterBankBands Parms{};

	Parms.Bands = Bands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetSemitoneFilterBankEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetSemitoneFilterBankEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetSemitoneFilterBankEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetSemitoneFilterBankMinMidiNote(int32 min_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetSemitoneFilterBankMinMidiNote");

	Params::HarmonixAnalyzerSourceEffectPreset_SetSemitoneFilterBankMinMidiNote Parms{};

	Parms.min_0 = min_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetSemitoneFilterBankNumMidiNotes(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetSemitoneFilterBankNumMidiNotes");

	Params::HarmonixAnalyzerSourceEffectPreset_SetSemitoneFilterBankNumMidiNotes Parms{};

	Parms.Num = Num;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetSemitoneFilterBankOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetSemitoneFilterBankOutputSettings");

	Params::HarmonixAnalyzerSourceEffectPreset_SetSemitoneFilterBankOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetSettings(const struct FHarmonixAnalyzerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetSettings");

	Params::HarmonixAnalyzerSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetVUMeterEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetVUMeterEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetVUMeterEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetVUMeterFallMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetVUMeterFallMs");

	Params::HarmonixAnalyzerSourceEffectPreset_SetVUMeterFallMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetVUMeterMaxDB(float dbMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetVUMeterMaxDB");

	Params::HarmonixAnalyzerSourceEffectPreset_SetVUMeterMaxDB Parms{};

	Parms.dbMax = dbMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetVUMeterRangeDB(float dbRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetVUMeterRangeDB");

	Params::HarmonixAnalyzerSourceEffectPreset_SetVUMeterRangeDB Parms{};

	Parms.dbRange = dbRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetVUMeterRiseMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetVUMeterRiseMs");

	Params::HarmonixAnalyzerSourceEffectPreset_SetVUMeterRiseMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetVUOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetVUOutputSettings");

	Params::HarmonixAnalyzerSourceEffectPreset_SetVUOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetWaveformEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetWaveformEnabled");

	Params::HarmonixAnalyzerSourceEffectPreset_SetWaveformEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetWaveformNumBinsHeld(int32 numBins)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetWaveformNumBinsHeld");

	Params::HarmonixAnalyzerSourceEffectPreset_SetWaveformNumBinsHeld Parms{};

	Parms.numBins = numBins;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetWaveformNumBinsPerSecond(int32 numBinsPerSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetWaveformNumBinsPerSecond");

	Params::HarmonixAnalyzerSourceEffectPreset_SetWaveformNumBinsPerSecond Parms{};

	Parms.numBinsPerSecond = numBinsPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetWaveformOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetWaveformOutputSettings");

	Params::HarmonixAnalyzerSourceEffectPreset_SetWaveformOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetWaveformSmoothingDistance(int32 SmoothingDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetWaveformSmoothingDistance");

	Params::HarmonixAnalyzerSourceEffectPreset_SetWaveformSmoothingDistance Parms{};

	Parms.SmoothingDistance = SmoothingDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSourceEffectPreset::SetWaveformSmoothingFactor(float smoothingFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSourceEffectPreset", "SetWaveformSmoothingFactor");

	Params::HarmonixAnalyzerSourceEffectPreset_SetWaveformSmoothingFactor Parms{};

	Parms.smoothingFactor = smoothingFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixAnalyzerSubmixEffectPreset* UHarmonixAnalyzerSubmixEffectPreset::CreateHarmonixAnalyzerInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixAnalyzerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "CreateHarmonixAnalyzerInstanceOnSubmix");

	Params::HarmonixAnalyzerSubmixEffectPreset_CreateHarmonixAnalyzerInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixAnalyzerSubmixEffectPreset::GetResults(struct FHarmonixAnalyzerEffectResults* Result, bool ResetMonoPeakDb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "GetResults");

	Params::HarmonixAnalyzerSubmixEffectPreset_GetResults Parms{};

	Parms.ResetMonoPeakDb = ResetMonoPeakDb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

void UHarmonixAnalyzerSubmixEffectPreset::HardResetVUMeter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "HardResetVUMeter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::ResetDynamicRangeMeter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "ResetDynamicRangeMeter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::ResetDynamicRangePeaks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "ResetDynamicRangePeaks");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankBandEndHz(int32 bandIndex, float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankBandEndHz");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankBandEndHz Parms{};

	Parms.bandIndex = bandIndex;
	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankBandOutputSettings(int32 bandIndex, const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankBandOutputSettings");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankBandOutputSettings Parms{};

	Parms.bandIndex = bandIndex;
	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankBandStartHz(int32 bandIndex, float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankBandStartHz");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankBandStartHz Parms{};

	Parms.bandIndex = bandIndex;
	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankFallMs(int32 bandIndex, float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankFallMs");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankFallMs Parms{};

	Parms.bandIndex = bandIndex;
	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankMaxDB(int32 bandIndex, float dbMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankMaxDB");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankMaxDB Parms{};

	Parms.bandIndex = bandIndex;
	Parms.dbMax = dbMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankRangeDB(int32 bandIndex, float dbRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankRangeDB");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankRangeDB Parms{};

	Parms.bandIndex = bandIndex;
	Parms.dbRange = dbRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetBandFilterBankRiseMs(int32 bandIndex, float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetBandFilterBankRiseMs");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetBandFilterBankRiseMs Parms{};

	Parms.bandIndex = bandIndex;
	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetDynamicRangeMeterAlphas(float highRising, float highFalling, float lowRising, float lowFalling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetDynamicRangeMeterAlphas");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetDynamicRangeMeterAlphas Parms{};

	Parms.highRising = highRising;
	Parms.highFalling = highFalling;
	Parms.lowRising = lowRising;
	Parms.lowFalling = lowFalling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetDynamicRangeMeterEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetDynamicRangeMeterEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetDynamicRangeMeterEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetDynamicRangeMeterFilter(bool Enable, float Cutoff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetDynamicRangeMeterFilter");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetDynamicRangeMeterFilter Parms{};

	Parms.Enable = Enable;
	Parms.Cutoff = Cutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetDynamicRangeMeterRmsWindow(int32 Frames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetDynamicRangeMeterRmsWindow");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetDynamicRangeMeterRmsWindow Parms{};

	Parms.Frames = Frames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTEqualLoudnessWeights(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTEqualLoudnessWeights");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTEqualLoudnessWeights Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTFallMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTFallMs");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTFallMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTLength(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTLength");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTLength Parms{};

	Parms.Num = Num;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTMaxDB(float dbMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTMaxDB");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTMaxDB Parms{};

	Parms.dbMax = dbMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTMaxFrequencyHz(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTMaxFrequencyHz");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTMaxFrequencyHz Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTMelScaleBinning(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTMelScaleBinning");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTMelScaleBinning Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTMinFrequencyHz(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTMinFrequencyHz");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTMinFrequencyHz Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTNumResultBins(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTNumResultBins");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTNumResultBins Parms{};

	Parms.Num = Num;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTOutputSettings");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTRangeDB(float dbRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTRangeDB");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTRangeDB Parms{};

	Parms.dbRange = dbRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetFFTRiseMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetFFTRiseMs");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetFFTRiseMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetNumBandFilterBankBands(int32 Bands)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetNumBandFilterBankBands");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetNumBandFilterBankBands Parms{};

	Parms.Bands = Bands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetSemitoneFilterBankEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetSemitoneFilterBankEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetSemitoneFilterBankEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetSemitoneFilterBankMinMidiNote(int32 min_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetSemitoneFilterBankMinMidiNote");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetSemitoneFilterBankMinMidiNote Parms{};

	Parms.min_0 = min_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetSemitoneFilterBankNumMidiNotes(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetSemitoneFilterBankNumMidiNotes");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetSemitoneFilterBankNumMidiNotes Parms{};

	Parms.Num = Num;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetSemitoneFilterBankOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetSemitoneFilterBankOutputSettings");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetSemitoneFilterBankOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetSettings(const struct FHarmonixAnalyzerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetSettings");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetVUMeterEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetVUMeterEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetVUMeterEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetVUMeterFallMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetVUMeterFallMs");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetVUMeterFallMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetVUMeterMaxDB(float dbMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetVUMeterMaxDB");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetVUMeterMaxDB Parms{};

	Parms.dbMax = dbMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetVUMeterRangeDB(float dbRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetVUMeterRangeDB");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetVUMeterRangeDB Parms{};

	Parms.dbRange = dbRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetVUMeterRiseMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetVUMeterRiseMs");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetVUMeterRiseMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetVUOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetVUOutputSettings");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetVUOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetWaveformEnabled(bool E)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetWaveformEnabled");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetWaveformEnabled Parms{};

	Parms.E = E;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetWaveformNumBinsHeld(int32 numBins)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetWaveformNumBinsHeld");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetWaveformNumBinsHeld Parms{};

	Parms.numBins = numBins;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetWaveformNumBinsPerSecond(int32 numBinsPerSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetWaveformNumBinsPerSecond");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetWaveformNumBinsPerSecond Parms{};

	Parms.numBinsPerSecond = numBinsPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetWaveformOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetWaveformOutputSettings");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetWaveformOutputSettings Parms{};

	Parms.outSsettings = std::move(outSsettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetWaveformSmoothingDistance(int32 SmoothingDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetWaveformSmoothingDistance");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetWaveformSmoothingDistance Parms{};

	Parms.SmoothingDistance = SmoothingDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixAnalyzerSubmixEffectPreset::SetWaveformSmoothingFactor(float smoothingFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixAnalyzerSubmixEffectPreset", "SetWaveformSmoothingFactor");

	Params::HarmonixAnalyzerSubmixEffectPreset_SetWaveformSmoothingFactor Parms{};

	Parms.smoothingFactor = smoothingFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixBitCrusherSourceEffectPreset* UHarmonixBitCrusherSourceEffectPreset::CreateHarmonixBitCrusherInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixBitCrusherEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixBitCrusherSourceEffectPreset", "CreateHarmonixBitCrusherInstanceOnEmitter");

	Params::HarmonixBitCrusherSourceEffectPreset_CreateHarmonixBitCrusherInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixBitCrusherSourceEffectPreset::SetCrush(ECrushedBitDepth crushLevel, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetCrush");

	Params::HarmonixBitCrusherSourceEffectPreset_SetCrush Parms{};

	Parms.crushLevel = crushLevel;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetEnabled");

	Params::HarmonixBitCrusherSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSourceEffectPreset::SetInputGain(float inGain, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetInputGain");

	Params::HarmonixBitCrusherSourceEffectPreset_SetInputGain Parms{};

	Parms.inGain = inGain;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSourceEffectPreset::SetOutputGain(float outGain, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetOutputGain");

	Params::HarmonixBitCrusherSourceEffectPreset_SetOutputGain Parms{};

	Parms.outGain = outGain;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSourceEffectPreset::SetSampleHoldFactor(int32 sampleHoldFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetSampleHoldFactor");

	Params::HarmonixBitCrusherSourceEffectPreset_SetSampleHoldFactor Parms{};

	Parms.sampleHoldFactor = sampleHoldFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSourceEffectPreset::SetSettings(const struct FHarmonixBitCrusherEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetSettings");

	Params::HarmonixBitCrusherSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSourceEffectPreset::SetWet(float wet, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSourceEffectPreset", "SetWet");

	Params::HarmonixBitCrusherSourceEffectPreset_SetWet Parms{};

	Parms.wet = wet;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixBitCrusherSubmixEffectPreset* UHarmonixBitCrusherSubmixEffectPreset::CreateHarmonixBitCrusherInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixBitCrusherEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "CreateHarmonixBitCrusherInstanceOnSubmix");

	Params::HarmonixBitCrusherSubmixEffectPreset_CreateHarmonixBitCrusherInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetCrush(ECrushedBitDepth crushLevel, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetCrush");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetCrush Parms{};

	Parms.crushLevel = crushLevel;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetEnabled");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetInputGain(float inGain, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetInputGain");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetInputGain Parms{};

	Parms.inGain = inGain;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetOutputGain(float outGain, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetOutputGain");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetOutputGain Parms{};

	Parms.outGain = outGain;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetSampleHoldFactor(int32 sampleHoldFactor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetSampleHoldFactor");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetSampleHoldFactor Parms{};

	Parms.sampleHoldFactor = sampleHoldFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetSettings(const struct FHarmonixBitCrusherEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetSettings");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBitCrusherSubmixEffectPreset::SetWet(float wet, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBitCrusherSubmixEffectPreset", "SetWet");

	Params::HarmonixBitCrusherSubmixEffectPreset_SetWet Parms{};

	Parms.wet = wet;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixBufferUtilSourceEffectPreset* UHarmonixBufferUtilSourceEffectPreset::CreateHarmonixBufferUtilInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixBufferUtilEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixBufferUtilSourceEffectPreset", "CreateHarmonixBufferUtilInstanceOnEmitter");

	Params::HarmonixBufferUtilSourceEffectPreset_CreateHarmonixBufferUtilInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixBufferUtilSourceEffectPreset::SetAttach(bool attach)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetAttach");

	Params::HarmonixBufferUtilSourceEffectPreset_SetAttach Parms{};

	Parms.attach = attach;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetAutomation(int32 A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetAutomation");

	Params::HarmonixBufferUtilSourceEffectPreset_SetAutomation Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetBufSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetBufSpeed");

	Params::HarmonixBufferUtilSourceEffectPreset_SetBufSpeed Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetDotted(bool Dotted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetDotted");

	Params::HarmonixBufferUtilSourceEffectPreset_SetDotted Parms{};

	Parms.Dotted = Dotted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetEnabled");

	Params::HarmonixBufferUtilSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetEven(bool Even)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetEven");

	Params::HarmonixBufferUtilSourceEffectPreset_SetEven Parms{};

	Parms.Even = Even;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetMaxDur(int32 D, bool BeatValChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetMaxDur");

	Params::HarmonixBufferUtilSourceEffectPreset_SetMaxDur Parms{};

	Parms.D = D;
	Parms.BeatValChange = BeatValChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetMinDur(int32 D, bool BeatValChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetMinDur");

	Params::HarmonixBufferUtilSourceEffectPreset_SetMinDur Parms{};

	Parms.D = D;
	Parms.BeatValChange = BeatValChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetRepeatP(float P)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetRepeatP");

	Params::HarmonixBufferUtilSourceEffectPreset_SetRepeatP Parms{};

	Parms.P = P;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetReverseP(float P)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetReverseP");

	Params::HarmonixBufferUtilSourceEffectPreset_SetReverseP Parms{};

	Parms.P = P;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetScratch(float scratch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetScratch");

	Params::HarmonixBufferUtilSourceEffectPreset_SetScratch Parms{};

	Parms.scratch = scratch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetSequence(int32 S)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetSequence");

	Params::HarmonixBufferUtilSourceEffectPreset_SetSequence Parms{};

	Parms.S = S;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetSettings(const struct FHarmonixBufferUtilEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetSettings");

	Params::HarmonixBufferUtilSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetShuffleP(float P)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetShuffleP");

	Params::HarmonixBufferUtilSourceEffectPreset_SetShuffleP Parms{};

	Parms.P = P;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetState(int32 T, int32 Len, bool AutomationTriggeredSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetState");

	Params::HarmonixBufferUtilSourceEffectPreset_SetState Parms{};

	Parms.T = T;
	Parms.Len = Len;
	Parms.AutomationTriggeredSet = AutomationTriggeredSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSourceEffectPreset::SetTriplet(bool trip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSourceEffectPreset", "SetTriplet");

	Params::HarmonixBufferUtilSourceEffectPreset_SetTriplet Parms{};

	Parms.trip = trip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixBufferUtilSubmixEffectPreset* UHarmonixBufferUtilSubmixEffectPreset::CreateHarmonixBufferUtilInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixBufferUtilEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "CreateHarmonixBufferUtilInstanceOnSubmix");

	Params::HarmonixBufferUtilSubmixEffectPreset_CreateHarmonixBufferUtilInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetAttach(bool attach)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetAttach");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetAttach Parms{};

	Parms.attach = attach;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetAutomation(int32 A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetAutomation");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetAutomation Parms{};

	Parms.A = A;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetBufSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetBufSpeed");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetBufSpeed Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetDotted(bool Dotted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetDotted");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetDotted Parms{};

	Parms.Dotted = Dotted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetEnabled");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetEven(bool Even)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetEven");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetEven Parms{};

	Parms.Even = Even;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetMaxDur(int32 D, bool BeatValChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetMaxDur");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetMaxDur Parms{};

	Parms.D = D;
	Parms.BeatValChange = BeatValChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetMinDur(int32 D, bool BeatValChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetMinDur");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetMinDur Parms{};

	Parms.D = D;
	Parms.BeatValChange = BeatValChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetRepeatP(float P)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetRepeatP");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetRepeatP Parms{};

	Parms.P = P;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetReverseP(float P)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetReverseP");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetReverseP Parms{};

	Parms.P = P;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetScratch(float scratch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetScratch");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetScratch Parms{};

	Parms.scratch = scratch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetSequence(int32 S)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetSequence");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetSequence Parms{};

	Parms.S = S;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetSettings(const struct FHarmonixBufferUtilEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetSettings");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetShuffleP(float P)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetShuffleP");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetShuffleP Parms{};

	Parms.P = P;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetState(int32 T, int32 Len, bool AutomationTriggeredSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetState");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetState Parms{};

	Parms.T = T;
	Parms.Len = Len;
	Parms.AutomationTriggeredSet = AutomationTriggeredSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixBufferUtilSubmixEffectPreset::SetTriplet(bool trip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixBufferUtilSubmixEffectPreset", "SetTriplet");

	Params::HarmonixBufferUtilSubmixEffectPreset_SetTriplet Parms{};

	Parms.trip = trip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixDelaySourceEffectPreset* UHarmonixDelaySourceEffectPreset::CreateHarmonixDelayInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixDelayEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixDelaySourceEffectPreset", "CreateHarmonixDelayInstanceOnEmitter");

	Params::HarmonixDelaySourceEffectPreset_CreateHarmonixDelayInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixDelaySourceEffectPreset::SetDelaySeconds(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetDelaySeconds");

	Params::HarmonixDelaySourceEffectPreset_SetDelaySeconds Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetDryGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetDryGain");

	Params::HarmonixDelaySourceEffectPreset_SetDryGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetEnabled");

	Params::HarmonixDelaySourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetFeedbackGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetFeedbackGain");

	Params::HarmonixDelaySourceEffectPreset_SetFeedbackGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetFilterEnabled(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetFilterEnabled");

	Params::HarmonixDelaySourceEffectPreset_SetFilterEnabled Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetFilterFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetFilterFreq");

	Params::HarmonixDelaySourceEffectPreset_SetFilterFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetFilterQ(float Q)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetFilterQ");

	Params::HarmonixDelaySourceEffectPreset_SetFilterQ Parms{};

	Parms.Q = Q;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetFilterType(EHarmonixDelayFilterType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetFilterType");

	Params::HarmonixDelaySourceEffectPreset_SetFilterType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetLFODepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetLFODepth");

	Params::HarmonixDelaySourceEffectPreset_SetLFODepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetLFOEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetLFOEnabled");

	Params::HarmonixDelaySourceEffectPreset_SetLFOEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetLFOFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetLFOFreq");

	Params::HarmonixDelaySourceEffectPreset_SetLFOFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetLFOTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetLFOTimeSyncOption");

	Params::HarmonixDelaySourceEffectPreset_SetLFOTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetOutputGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetOutputGain");

	Params::HarmonixDelaySourceEffectPreset_SetOutputGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetSettings(const struct FHarmonixDelayEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetSettings");

	Params::HarmonixDelaySourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetSpeed");

	Params::HarmonixDelaySourceEffectPreset_SetSpeed Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetStereoSpreadLeft(float Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetStereoSpreadLeft");

	Params::HarmonixDelaySourceEffectPreset_SetStereoSpreadLeft Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetStereoSpreadRight(float Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetStereoSpreadRight");

	Params::HarmonixDelaySourceEffectPreset_SetStereoSpreadRight Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetStereoType(EHarmonixDelayStereoType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetStereoType");

	Params::HarmonixDelaySourceEffectPreset_SetStereoType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetTempo(float BPM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetTempo");

	Params::HarmonixDelaySourceEffectPreset_SetTempo Parms{};

	Parms.BPM = BPM;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetTimeSyncOption");

	Params::HarmonixDelaySourceEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySourceEffectPreset::SetWetGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySourceEffectPreset", "SetWetGain");

	Params::HarmonixDelaySourceEffectPreset_SetWetGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixDelaySubmixEffectPreset* UHarmonixDelaySubmixEffectPreset::CreateHarmonixDelayInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixDelayEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixDelaySubmixEffectPreset", "CreateHarmonixDelayInstanceOnSubmix");

	Params::HarmonixDelaySubmixEffectPreset_CreateHarmonixDelayInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixDelaySubmixEffectPreset::SetDelaySeconds(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetDelaySeconds");

	Params::HarmonixDelaySubmixEffectPreset_SetDelaySeconds Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetDryGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetDryGain");

	Params::HarmonixDelaySubmixEffectPreset_SetDryGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetEnabled");

	Params::HarmonixDelaySubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetFeedbackGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetFeedbackGain");

	Params::HarmonixDelaySubmixEffectPreset_SetFeedbackGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetFilterEnabled(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetFilterEnabled");

	Params::HarmonixDelaySubmixEffectPreset_SetFilterEnabled Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetFilterFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetFilterFreq");

	Params::HarmonixDelaySubmixEffectPreset_SetFilterFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetFilterQ(float Q)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetFilterQ");

	Params::HarmonixDelaySubmixEffectPreset_SetFilterQ Parms{};

	Parms.Q = Q;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetFilterType(EHarmonixDelayFilterType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetFilterType");

	Params::HarmonixDelaySubmixEffectPreset_SetFilterType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetLFODepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetLFODepth");

	Params::HarmonixDelaySubmixEffectPreset_SetLFODepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetLFOEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetLFOEnabled");

	Params::HarmonixDelaySubmixEffectPreset_SetLFOEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetLFOFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetLFOFreq");

	Params::HarmonixDelaySubmixEffectPreset_SetLFOFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetLFOTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetLFOTimeSyncOption");

	Params::HarmonixDelaySubmixEffectPreset_SetLFOTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetOutputGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetOutputGain");

	Params::HarmonixDelaySubmixEffectPreset_SetOutputGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetSettings(const struct FHarmonixDelayEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetSettings");

	Params::HarmonixDelaySubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetSpeed(float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetSpeed");

	Params::HarmonixDelaySubmixEffectPreset_SetSpeed Parms{};

	Parms.Speed = Speed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetStereoSpreadLeft(float Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetStereoSpreadLeft");

	Params::HarmonixDelaySubmixEffectPreset_SetStereoSpreadLeft Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetStereoSpreadRight(float Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetStereoSpreadRight");

	Params::HarmonixDelaySubmixEffectPreset_SetStereoSpreadRight Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetStereoType(EHarmonixDelayStereoType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetStereoType");

	Params::HarmonixDelaySubmixEffectPreset_SetStereoType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetTempo(float BPM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetTempo");

	Params::HarmonixDelaySubmixEffectPreset_SetTempo Parms{};

	Parms.BPM = BPM;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetTimeSyncOption");

	Params::HarmonixDelaySubmixEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDelaySubmixEffectPreset::SetWetGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDelaySubmixEffectPreset", "SetWetGain");

	Params::HarmonixDelaySubmixEffectPreset_SetWetGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixDistortionSourceEffectPreset* UHarmonixDistortionSourceEffectPreset::CreateHarmonixDistortionInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixDistortionEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixDistortionSourceEffectPreset", "CreateHarmonixDistortionInstanceOnEmitter");

	Params::HarmonixDistortionSourceEffectPreset_CreateHarmonixDistortionInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixDistortionSourceEffectPreset::SetDCOffset(float Offset, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetDCOffset");

	Params::HarmonixDistortionSourceEffectPreset_SetDCOffset Parms{};

	Parms.Offset = Offset;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetDryGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetDryGainDb");

	Params::HarmonixDistortionSourceEffectPreset_SetDryGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetEnabled");

	Params::HarmonixDistortionSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetInputGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetInputGainDb");

	Params::HarmonixDistortionSourceEffectPreset_SetInputGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetMix(float M, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetMix");

	Params::HarmonixDistortionSourceEffectPreset_SetMix Parms{};

	Parms.M = M;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetOutputGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetOutputGainDb");

	Params::HarmonixDistortionSourceEffectPreset_SetOutputGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetOversample(bool Oversample)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetOversample");

	Params::HarmonixDistortionSourceEffectPreset_SetOversample Parms{};

	Parms.Oversample = Oversample;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetSettings(const struct FHarmonixDistortionEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetSettings");

	Params::HarmonixDistortionSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetType(EDistortionType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetType");

	Params::HarmonixDistortionSourceEffectPreset_SetType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetupFilter(int32 Index_0, bool pre, const struct FHarmonixDistortionBiquadSettings& filterSettings, int32 filterPasses)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetupFilter");

	Params::HarmonixDistortionSourceEffectPreset_SetupFilter Parms{};

	Parms.Index_0 = Index_0;
	Parms.pre = pre;
	Parms.filterSettings = std::move(filterSettings);
	Parms.filterPasses = filterPasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSourceEffectPreset::SetWetGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSourceEffectPreset", "SetWetGainDb");

	Params::HarmonixDistortionSourceEffectPreset_SetWetGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixDistortionSubmixEffectPreset* UHarmonixDistortionSubmixEffectPreset::CreateHarmonixDistortionInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixDistortionEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixDistortionSubmixEffectPreset", "CreateHarmonixDistortionInstanceOnSubmix");

	Params::HarmonixDistortionSubmixEffectPreset_CreateHarmonixDistortionInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixDistortionSubmixEffectPreset::SetDCOffset(float Offset, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetDCOffset");

	Params::HarmonixDistortionSubmixEffectPreset_SetDCOffset Parms{};

	Parms.Offset = Offset;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetDryGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetDryGainDb");

	Params::HarmonixDistortionSubmixEffectPreset_SetDryGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetEnabled");

	Params::HarmonixDistortionSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetInputGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetInputGainDb");

	Params::HarmonixDistortionSubmixEffectPreset_SetInputGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetMix(float M, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetMix");

	Params::HarmonixDistortionSubmixEffectPreset_SetMix Parms{};

	Parms.M = M;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetOutputGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetOutputGainDb");

	Params::HarmonixDistortionSubmixEffectPreset_SetOutputGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetOversample(bool Oversample)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetOversample");

	Params::HarmonixDistortionSubmixEffectPreset_SetOversample Parms{};

	Parms.Oversample = Oversample;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetSettings(const struct FHarmonixDistortionEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetSettings");

	Params::HarmonixDistortionSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetType(EDistortionType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetType");

	Params::HarmonixDistortionSubmixEffectPreset_SetType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetupFilter(int32 Index_0, bool pre, const struct FHarmonixDistortionBiquadSettings& filterSettings, int32 filterPasses)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetupFilter");

	Params::HarmonixDistortionSubmixEffectPreset_SetupFilter Parms{};

	Parms.Index_0 = Index_0;
	Parms.pre = pre;
	Parms.filterSettings = std::move(filterSettings);
	Parms.filterPasses = filterPasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixDistortionSubmixEffectPreset::SetWetGainDb(float GainDb, bool Snap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixDistortionSubmixEffectPreset", "SetWetGainDb");

	Params::HarmonixDistortionSubmixEffectPreset_SetWetGainDb Parms{};

	Parms.GainDb = GainDb;
	Parms.Snap = Snap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixFlangerSourceEffectPreset* UHarmonixFlangerSourceEffectPreset::CreateHarmonixFlangerInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixFlangerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixFlangerSourceEffectPreset", "CreateHarmonixFlangerInstanceOnEmitter");

	Params::HarmonixFlangerSourceEffectPreset_CreateHarmonixFlangerInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixFlangerSourceEffectPreset::SetDelayTimeMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetDelayTimeMs");

	Params::HarmonixFlangerSourceEffectPreset_SetDelayTimeMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetDepth");

	Params::HarmonixFlangerSourceEffectPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetEnabled");

	Params::HarmonixFlangerSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetExcursion(float ex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetExcursion");

	Params::HarmonixFlangerSourceEffectPreset_SetExcursion Parms{};

	Parms.ex = ex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetFeedback(float fb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetFeedback");

	Params::HarmonixFlangerSourceEffectPreset_SetFeedback Parms{};

	Parms.fb = fb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetInvert(bool Invert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetInvert");

	Params::HarmonixFlangerSourceEffectPreset_SetInvert Parms{};

	Parms.Invert = Invert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetModFreq(float freq, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetModFreq");

	Params::HarmonixFlangerSourceEffectPreset_SetModFreq Parms{};

	Parms.freq = freq;
	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetModShape(EHarmonixFlangerShapes S)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetModShape");

	Params::HarmonixFlangerSourceEffectPreset_SetModShape Parms{};

	Parms.S = S;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetSettings(const struct FHarmonixFlangerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetSettings");

	Params::HarmonixFlangerSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSourceEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option, float currentBeatFraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSourceEffectPreset", "SetTimeSyncOption");

	Params::HarmonixFlangerSourceEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;
	Parms.currentBeatFraction = currentBeatFraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixFlangerSubmixEffectPreset* UHarmonixFlangerSubmixEffectPreset::CreateHarmonixFlangerInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixFlangerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixFlangerSubmixEffectPreset", "CreateHarmonixFlangerInstanceOnSubmix");

	Params::HarmonixFlangerSubmixEffectPreset_CreateHarmonixFlangerInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixFlangerSubmixEffectPreset::SetDelayTimeMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetDelayTimeMs");

	Params::HarmonixFlangerSubmixEffectPreset_SetDelayTimeMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetDepth");

	Params::HarmonixFlangerSubmixEffectPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetEnabled");

	Params::HarmonixFlangerSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetExcursion(float ex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetExcursion");

	Params::HarmonixFlangerSubmixEffectPreset_SetExcursion Parms{};

	Parms.ex = ex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetFeedback(float fb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetFeedback");

	Params::HarmonixFlangerSubmixEffectPreset_SetFeedback Parms{};

	Parms.fb = fb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetInvert(bool Invert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetInvert");

	Params::HarmonixFlangerSubmixEffectPreset_SetInvert Parms{};

	Parms.Invert = Invert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetModFreq(float freq, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetModFreq");

	Params::HarmonixFlangerSubmixEffectPreset_SetModFreq Parms{};

	Parms.freq = freq;
	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetModShape(EHarmonixFlangerShapes S)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetModShape");

	Params::HarmonixFlangerSubmixEffectPreset_SetModShape Parms{};

	Parms.S = S;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetSettings(const struct FHarmonixFlangerEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetSettings");

	Params::HarmonixFlangerSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixFlangerSubmixEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option, float currentBeatFraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixFlangerSubmixEffectPreset", "SetTimeSyncOption");

	Params::HarmonixFlangerSubmixEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;
	Parms.currentBeatFraction = currentBeatFraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixPhaserSourceEffectPreset* UHarmonixPhaserSourceEffectPreset::CreateHarmonixPhaserInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixPhaserEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixPhaserSourceEffectPreset", "CreateHarmonixPhaserInstanceOnEmitter");

	Params::HarmonixPhaserSourceEffectPreset_CreateHarmonixPhaserInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixPhaserSourceEffectPreset::SetColor(float Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetColor");

	Params::HarmonixPhaserSourceEffectPreset_SetColor Parms{};

	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetDepth");

	Params::HarmonixPhaserSourceEffectPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetEnabled");

	Params::HarmonixPhaserSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetFeedback(float fb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetFeedback");

	Params::HarmonixPhaserSourceEffectPreset_SetFeedback Parms{};

	Parms.fb = fb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetFrequency(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetFrequency");

	Params::HarmonixPhaserSourceEffectPreset_SetFrequency Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetNumPoles(int32 numPoles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetNumPoles");

	Params::HarmonixPhaserSourceEffectPreset_SetNumPoles Parms{};

	Parms.numPoles = numPoles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetPhase(float Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetPhase");

	Params::HarmonixPhaserSourceEffectPreset_SetPhase Parms{};

	Parms.Phase = Phase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetRate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetRate");

	Params::HarmonixPhaserSourceEffectPreset_SetRate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetSettings(const struct FHarmonixPhaserEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetSettings");

	Params::HarmonixPhaserSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetShape(EHarmonixPhaserShapes Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetShape");

	Params::HarmonixPhaserSourceEffectPreset_SetShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetTimeSyncOption");

	Params::HarmonixPhaserSourceEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSourceEffectPreset::SetWetDry(float wetDry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSourceEffectPreset", "SetWetDry");

	Params::HarmonixPhaserSourceEffectPreset_SetWetDry Parms{};

	Parms.wetDry = wetDry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixPhaserSubmixEffectPreset* UHarmonixPhaserSubmixEffectPreset::CreateHarmonixPhaserInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixPhaserEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixPhaserSubmixEffectPreset", "CreateHarmonixPhaserInstanceOnSubmix");

	Params::HarmonixPhaserSubmixEffectPreset_CreateHarmonixPhaserInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixPhaserSubmixEffectPreset::SetColor(float Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetColor");

	Params::HarmonixPhaserSubmixEffectPreset_SetColor Parms{};

	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetDepth");

	Params::HarmonixPhaserSubmixEffectPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetEnabled");

	Params::HarmonixPhaserSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetFeedback(float fb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetFeedback");

	Params::HarmonixPhaserSubmixEffectPreset_SetFeedback Parms{};

	Parms.fb = fb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetFrequency(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetFrequency");

	Params::HarmonixPhaserSubmixEffectPreset_SetFrequency Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetNumPoles(int32 numPoles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetNumPoles");

	Params::HarmonixPhaserSubmixEffectPreset_SetNumPoles Parms{};

	Parms.numPoles = numPoles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetPhase(float Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetPhase");

	Params::HarmonixPhaserSubmixEffectPreset_SetPhase Parms{};

	Parms.Phase = Phase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetRate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetRate");

	Params::HarmonixPhaserSubmixEffectPreset_SetRate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetSettings(const struct FHarmonixPhaserEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetSettings");

	Params::HarmonixPhaserSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetShape(EHarmonixPhaserShapes Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetShape");

	Params::HarmonixPhaserSubmixEffectPreset_SetShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetTimeSyncOption");

	Params::HarmonixPhaserSubmixEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixPhaserSubmixEffectPreset::SetWetDry(float wetDry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixPhaserSubmixEffectPreset", "SetWetDry");

	Params::HarmonixPhaserSubmixEffectPreset_SetWetDry Parms{};

	Parms.wetDry = wetDry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixStutterEditSourceEffectPreset* UHarmonixStutterEditSourceEffectPreset::CreateHarmonixStutterEditInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixStutterEditEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixStutterEditSourceEffectPreset", "CreateHarmonixStutterEditInstanceOnEmitter");

	Params::HarmonixStutterEditSourceEffectPreset_CreateHarmonixStutterEditInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixStutterEditSourceEffectPreset::Capture(int32 fromTick, int32 toTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "Capture");

	Params::HarmonixStutterEditSourceEffectPreset_Capture Parms{};

	Parms.fromTick = fromTick;
	Parms.toTick = toTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::EndStutter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "EndStutter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::ScheduleStutter(int32 Tick, int32 lengthInTicks, bool isReverse, int32 offsetTicks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "ScheduleStutter");

	Params::HarmonixStutterEditSourceEffectPreset_ScheduleStutter Parms{};

	Parms.Tick = Tick;
	Parms.lengthInTicks = lengthInTicks;
	Parms.isReverse = isReverse;
	Parms.offsetTicks = offsetTicks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetAllowPassthrough(bool allow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetAllowPassthrough");

	Params::HarmonixStutterEditSourceEffectPreset_SetAllowPassthrough Parms{};

	Parms.allow = allow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetEnabled");

	Params::HarmonixStutterEditSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetFadeEnabled(bool fade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetFadeEnabled");

	Params::HarmonixStutterEditSourceEffectPreset_SetFadeEnabled Parms{};

	Parms.fade = fade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetSettings(const struct FHarmonixStutterEditEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetSettings");

	Params::HarmonixStutterEditSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetSilenceWhileScheduled(bool B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetSilenceWhileScheduled");

	Params::HarmonixStutterEditSourceEffectPreset_SetSilenceWhileScheduled Parms{};

	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetSyncDriver(class UHarmonixHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetSyncDriver");

	Params::HarmonixStutterEditSourceEffectPreset_SetSyncDriver Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSourceEffectPreset::SetVarispeedForTempoChanges(bool V)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSourceEffectPreset", "SetVarispeedForTempoChanges");

	Params::HarmonixStutterEditSourceEffectPreset_SetVarispeedForTempoChanges Parms{};

	Parms.V = V;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixStutterEditSubmixEffectPreset* UHarmonixStutterEditSubmixEffectPreset::CreateHarmonixStutterEditInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixStutterEditEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixStutterEditSubmixEffectPreset", "CreateHarmonixStutterEditInstanceOnSubmix");

	Params::HarmonixStutterEditSubmixEffectPreset_CreateHarmonixStutterEditInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixStutterEditSubmixEffectPreset::Capture(int32 fromTick, int32 toTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "Capture");

	Params::HarmonixStutterEditSubmixEffectPreset_Capture Parms{};

	Parms.fromTick = fromTick;
	Parms.toTick = toTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::EndStutter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "EndStutter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::ScheduleStutter(int32 Tick, int32 lengthInTicks, bool isReverse, int32 offsetTicks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "ScheduleStutter");

	Params::HarmonixStutterEditSubmixEffectPreset_ScheduleStutter Parms{};

	Parms.Tick = Tick;
	Parms.lengthInTicks = lengthInTicks;
	Parms.isReverse = isReverse;
	Parms.offsetTicks = offsetTicks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetAllowPassthrough(bool allow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetAllowPassthrough");

	Params::HarmonixStutterEditSubmixEffectPreset_SetAllowPassthrough Parms{};

	Parms.allow = allow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetEnabled");

	Params::HarmonixStutterEditSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetFadeEnabled(bool fade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetFadeEnabled");

	Params::HarmonixStutterEditSubmixEffectPreset_SetFadeEnabled Parms{};

	Parms.fade = fade;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetSettings(const struct FHarmonixStutterEditEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetSettings");

	Params::HarmonixStutterEditSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetSilenceWhileScheduled(bool B)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetSilenceWhileScheduled");

	Params::HarmonixStutterEditSubmixEffectPreset_SetSilenceWhileScheduled Parms{};

	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetSyncDriver(class UHarmonixHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetSyncDriver");

	Params::HarmonixStutterEditSubmixEffectPreset_SetSyncDriver Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixStutterEditSubmixEffectPreset::SetVarispeedForTempoChanges(bool V)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixStutterEditSubmixEffectPreset", "SetVarispeedForTempoChanges");

	Params::HarmonixStutterEditSubmixEffectPreset_SetVarispeedForTempoChanges Parms{};

	Parms.V = V;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixTapeStartStopSourceEffectPreset* UHarmonixTapeStartStopSourceEffectPreset::CreateHarmonixTapeStartStopInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixTapeStartStopEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixTapeStartStopSourceEffectPreset", "CreateHarmonixTapeStartStopInstanceOnEmitter");

	Params::HarmonixTapeStartStopSourceEffectPreset_CreateHarmonixTapeStartStopInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixTapeStartStopSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSourceEffectPreset", "SetEnabled");

	Params::HarmonixTapeStartStopSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTapeStartStopSourceEffectPreset::SetSettings(const struct FHarmonixTapeStartStopEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSourceEffectPreset", "SetSettings");

	Params::HarmonixTapeStartStopSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTapeStartStopSourceEffectPreset::SetTransportState(EHarmonixTapeStartStopTransportState Transport, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSourceEffectPreset", "SetTransportState");

	Params::HarmonixTapeStartStopSourceEffectPreset_SetTransportState Parms{};

	Parms.Transport = Transport;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTapeStartStopSourceEffectPreset::SnapTransportState(EHarmonixTapeStartStopTransportState Transport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSourceEffectPreset", "SnapTransportState");

	Params::HarmonixTapeStartStopSourceEffectPreset_SnapTransportState Parms{};

	Parms.Transport = Transport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixTapeStartStopSubmixEffectPreset* UHarmonixTapeStartStopSubmixEffectPreset::CreateHarmonixTapeStartStopInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixTapeStartStopEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixTapeStartStopSubmixEffectPreset", "CreateHarmonixTapeStartStopInstanceOnSubmix");

	Params::HarmonixTapeStartStopSubmixEffectPreset_CreateHarmonixTapeStartStopInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixTapeStartStopSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSubmixEffectPreset", "SetEnabled");

	Params::HarmonixTapeStartStopSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTapeStartStopSubmixEffectPreset::SetSettings(const struct FHarmonixTapeStartStopEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSubmixEffectPreset", "SetSettings");

	Params::HarmonixTapeStartStopSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTapeStartStopSubmixEffectPreset::SetTransportState(EHarmonixTapeStartStopTransportState Transport, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSubmixEffectPreset", "SetTransportState");

	Params::HarmonixTapeStartStopSubmixEffectPreset_SetTransportState Parms{};

	Parms.Transport = Transport;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTapeStartStopSubmixEffectPreset::SnapTransportState(EHarmonixTapeStartStopTransportState Transport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTapeStartStopSubmixEffectPreset", "SnapTransportState");

	Params::HarmonixTapeStartStopSubmixEffectPreset_SnapTransportState Parms{};

	Parms.Transport = Transport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixTremoloSourceEffectPreset* UHarmonixTremoloSourceEffectPreset::CreateHarmonixTremoloInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixTremoloEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixTremoloSourceEffectPreset", "CreateHarmonixTremoloInstanceOnEmitter");

	Params::HarmonixTremoloSourceEffectPreset_CreateHarmonixTremoloInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixTremoloSourceEffectPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetDepth");

	Params::HarmonixTremoloSourceEffectPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetEnabled");

	Params::HarmonixTremoloSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSourceEffectPreset::SetInvertLFO(bool inv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetInvertLFO");

	Params::HarmonixTremoloSourceEffectPreset_SetInvertLFO Parms{};

	Parms.inv = inv;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSourceEffectPreset::SetLFORate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetLFORate");

	Params::HarmonixTremoloSourceEffectPreset_SetLFORate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSourceEffectPreset::SetSettings(const struct FHarmonixTremoloEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetSettings");

	Params::HarmonixTremoloSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSourceEffectPreset::SetShape(float Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetShape");

	Params::HarmonixTremoloSourceEffectPreset_SetShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSourceEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSourceEffectPreset", "SetTimeSyncOption");

	Params::HarmonixTremoloSourceEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixTremoloSubmixEffectPreset* UHarmonixTremoloSubmixEffectPreset::CreateHarmonixTremoloInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixTremoloEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixTremoloSubmixEffectPreset", "CreateHarmonixTremoloInstanceOnSubmix");

	Params::HarmonixTremoloSubmixEffectPreset_CreateHarmonixTremoloInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixTremoloSubmixEffectPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetDepth");

	Params::HarmonixTremoloSubmixEffectPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetEnabled");

	Params::HarmonixTremoloSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSubmixEffectPreset::SetInvertLFO(bool inv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetInvertLFO");

	Params::HarmonixTremoloSubmixEffectPreset_SetInvertLFO Parms{};

	Parms.inv = inv;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSubmixEffectPreset::SetLFORate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetLFORate");

	Params::HarmonixTremoloSubmixEffectPreset_SetLFORate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSubmixEffectPreset::SetSettings(const struct FHarmonixTremoloEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetSettings");

	Params::HarmonixTremoloSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSubmixEffectPreset::SetShape(float Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetShape");

	Params::HarmonixTremoloSubmixEffectPreset_SetShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixTremoloSubmixEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixTremoloSubmixEffectPreset", "SetTimeSyncOption");

	Params::HarmonixTremoloSubmixEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixVibeSourceEffectPreset* UHarmonixVibeSourceEffectPreset::CreateHarmonixVibeInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixVibeEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixVibeSourceEffectPreset", "CreateHarmonixVibeInstanceOnEmitter");

	Params::HarmonixVibeSourceEffectPreset_CreateHarmonixVibeInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixVibeSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetEnabled");

	Params::HarmonixVibeSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetFreq(int32 stageIdx, float freq)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetFreq");

	Params::HarmonixVibeSourceEffectPreset_SetFreq Parms{};

	Parms.stageIdx = stageIdx;
	Parms.freq = freq;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetGain");

	Params::HarmonixVibeSourceEffectPreset_SetGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetLFODepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetLFODepth");

	Params::HarmonixVibeSourceEffectPreset_SetLFODepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetLFORate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetLFORate");

	Params::HarmonixVibeSourceEffectPreset_SetLFORate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetLFOShape(float Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetLFOShape");

	Params::HarmonixVibeSourceEffectPreset_SetLFOShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetSettings(const struct FHarmonixVibeEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetSettings");

	Params::HarmonixVibeSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetTimeSyncOption");

	Params::HarmonixVibeSourceEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSourceEffectPreset::SetWetMix(float wetMix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSourceEffectPreset", "SetWetMix");

	Params::HarmonixVibeSourceEffectPreset_SetWetMix Parms{};

	Parms.wetMix = wetMix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixVibeSubmixEffectPreset* UHarmonixVibeSubmixEffectPreset::CreateHarmonixVibeInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixVibeEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixVibeSubmixEffectPreset", "CreateHarmonixVibeInstanceOnSubmix");

	Params::HarmonixVibeSubmixEffectPreset_CreateHarmonixVibeInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixVibeSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetEnabled");

	Params::HarmonixVibeSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetFreq(int32 stageIdx, float freq)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetFreq");

	Params::HarmonixVibeSubmixEffectPreset_SetFreq Parms{};

	Parms.stageIdx = stageIdx;
	Parms.freq = freq;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetGain");

	Params::HarmonixVibeSubmixEffectPreset_SetGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetLFODepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetLFODepth");

	Params::HarmonixVibeSubmixEffectPreset_SetLFODepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetLFORate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetLFORate");

	Params::HarmonixVibeSubmixEffectPreset_SetLFORate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetLFOShape(float Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetLFOShape");

	Params::HarmonixVibeSubmixEffectPreset_SetLFOShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetSettings(const struct FHarmonixVibeEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetSettings");

	Params::HarmonixVibeSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetTimeSyncOption");

	Params::HarmonixVibeSubmixEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixVibeSubmixEffectPreset::SetWetMix(float wetMix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixVibeSubmixEffectPreset", "SetWetMix");

	Params::HarmonixVibeSubmixEffectPreset_SetWetMix Parms{};

	Parms.wetMix = wetMix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixWahSourceEffectPreset* UHarmonixWahSourceEffectPreset::CreateHarmonixWahInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixWahEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixWahSourceEffectPreset", "CreateHarmonixWahInstanceOnEmitter");

	Params::HarmonixWahSourceEffectPreset_CreateHarmonixWahInstanceOnEmitter Parms{};

	Parms.Emitter = Emitter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixWahSourceEffectPreset::NotifyNoteOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "NotifyNoteOn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetAutoWahEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetAutoWahEnabled");

	Params::HarmonixWahSourceEffectPreset_SetAutoWahEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetClosedFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetClosedFreq");

	Params::HarmonixWahSourceEffectPreset_SetClosedFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetClosedQ(float Q)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetClosedQ");

	Params::HarmonixWahSourceEffectPreset_SetClosedQ Parms{};

	Parms.Q = Q;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetEnabled");

	Params::HarmonixWahSourceEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetGain");

	Params::HarmonixWahSourceEffectPreset_SetGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetLFORate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetLFORate");

	Params::HarmonixWahSourceEffectPreset_SetLFORate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetLFORateScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetLFORateScale");

	Params::HarmonixWahSourceEffectPreset_SetLFORateScale Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetLFOShape(float Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetLFOShape");

	Params::HarmonixWahSourceEffectPreset_SetLFOShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetOpenFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetOpenFreq");

	Params::HarmonixWahSourceEffectPreset_SetOpenFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetOpenOnAttack(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetOpenOnAttack");

	Params::HarmonixWahSourceEffectPreset_SetOpenOnAttack Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetOpenQ(float Q)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetOpenQ");

	Params::HarmonixWahSourceEffectPreset_SetOpenQ Parms{};

	Parms.Q = Q;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetSettings(const struct FHarmonixWahEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetSettings");

	Params::HarmonixWahSourceEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetSteepFilter(bool steep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetSteepFilter");

	Params::HarmonixWahSourceEffectPreset_SetSteepFilter Parms{};

	Parms.steep = steep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSourceEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSourceEffectPreset", "SetTimeSyncOption");

	Params::HarmonixWahSourceEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UHarmonixWahSubmixEffectPreset* UHarmonixWahSubmixEffectPreset::CreateHarmonixWahInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixWahEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixWahSubmixEffectPreset", "CreateHarmonixWahInstanceOnSubmix");

	Params::HarmonixWahSubmixEffectPreset_CreateHarmonixWahInstanceOnSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Submix = Submix;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InSettings = std::move(Parms.InSettings);

	return Parms.ReturnValue;
}

void UHarmonixWahSubmixEffectPreset::NotifyNoteOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "NotifyNoteOn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetAutoWahEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetAutoWahEnabled");

	Params::HarmonixWahSubmixEffectPreset_SetAutoWahEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetClosedFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetClosedFreq");

	Params::HarmonixWahSubmixEffectPreset_SetClosedFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetClosedQ(float Q)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetClosedQ");

	Params::HarmonixWahSubmixEffectPreset_SetClosedQ Parms{};

	Parms.Q = Q;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetEnabled");

	Params::HarmonixWahSubmixEffectPreset_SetEnabled Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetGain(float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetGain");

	Params::HarmonixWahSubmixEffectPreset_SetGain Parms{};

	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetLFORate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetLFORate");

	Params::HarmonixWahSubmixEffectPreset_SetLFORate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetLFORateScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetLFORateScale");

	Params::HarmonixWahSubmixEffectPreset_SetLFORateScale Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetLFOShape(float Shape)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetLFOShape");

	Params::HarmonixWahSubmixEffectPreset_SetLFOShape Parms{};

	Parms.Shape = Shape;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetOpenFreq(float hz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetOpenFreq");

	Params::HarmonixWahSubmixEffectPreset_SetOpenFreq Parms{};

	Parms.hz = hz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetOpenOnAttack(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetOpenOnAttack");

	Params::HarmonixWahSubmixEffectPreset_SetOpenOnAttack Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetOpenQ(float Q)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetOpenQ");

	Params::HarmonixWahSubmixEffectPreset_SetOpenQ Parms{};

	Parms.Q = Q;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetSettings(const struct FHarmonixWahEffectSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetSettings");

	Params::HarmonixWahSubmixEffectPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetSteepFilter(bool steep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetSteepFilter");

	Params::HarmonixWahSubmixEffectPreset_SetSteepFilter Parms{};

	Parms.steep = steep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixWahSubmixEffectPreset::SetTimeSyncOption(ETempoListenerTimeSyncOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixWahSubmixEffectPreset", "SetTimeSyncOption");

	Params::HarmonixWahSubmixEffectPreset_SetTimeSyncOption Parms{};

	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHmxMusicWorldSubsystem::OnAuditionTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HmxMusicWorldSubsystem", "OnAuditionTimeout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::Continue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "Continue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UHarmonixHandle::GetElapsedMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetElapsedMs");

	Params::HarmonixHandle_GetElapsedMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetGain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetGain");

	Params::HarmonixHandle_GetGain Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetLengthMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetLengthMs");

	Params::HarmonixHandle_GetLengthMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHarmonixHandle::GetMute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetMute");

	Params::HarmonixHandle_GetMute Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetParameter(class FName Param, EParamExists* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetParameter");

	Params::HarmonixHandle_GetParameter Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetRawPitchMultiplier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetRawPitchMultiplier");

	Params::HarmonixHandle_GetRawPitchMultiplier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetSpeed");

	Params::HarmonixHandle_GetSpeed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetTimelineMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetTimelineMs");

	Params::HarmonixHandle_GetTimelineMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EAudioTransportState UHarmonixHandle::GetTransportState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetTransportState");

	Params::HarmonixHandle_GetTransportState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UHarmonixHandle::GetVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "GetVolume");

	Params::HarmonixHandle_GetVolume Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UHarmonixHandle::Kill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "Kill");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::SeekToMs(float ms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SeekToMs");

	Params::HarmonixHandle_SeekToMs Parms{};

	Parms.ms = ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::SetGain(float Gain, float Seconds, EPostFadeOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SetGain");

	Params::HarmonixHandle_SetGain Parms{};

	Parms.Gain = Gain;
	Parms.Seconds = Seconds;
	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::SetMute(bool muted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SetMute");

	Params::HarmonixHandle_SetMute Parms{};

	Parms.muted = muted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::SetParameter(class FName Param, float Value, EParamExists* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SetParameter");

	Params::HarmonixHandle_SetParameter Parms{};

	Parms.Param = Param;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;
}

void UHarmonixHandle::SetRawPitchMultiplier(float PitchMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SetRawPitchMultiplier");

	Params::HarmonixHandle_SetRawPitchMultiplier Parms{};

	Parms.PitchMultiplier = PitchMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::SetSpeed(float Speed, bool maintainPitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SetSpeed");

	Params::HarmonixHandle_SetSpeed Parms{};

	Parms.Speed = Speed;
	Parms.maintainPitch = maintainPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::SetVolume(float vol, float Seconds, EPostFadeOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "SetVolume");

	Params::HarmonixHandle_SetVolume Parms{};

	Parms.vol = vol;
	Parms.Seconds = Seconds;
	Parms.Option = Option;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UHarmonixHandle::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HarmonixHandle", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UInstrumentHandle* UHarmonixHandleUtil::CastToInstrumentHandle(class UObject* worldContextObj, class UHarmonixHandle* H, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "CastToInstrumentHandle");

	Params::HarmonixHandleUtil_CastToInstrumentHandle Parms{};

	Parms.worldContextObj = worldContextObj;
	Parms.H = H;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

class UMusicHandle* UHarmonixHandleUtil::CastToMusicHandle(class UObject* worldContextObj, class UHarmonixHandle* H, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "CastToMusicHandle");

	Params::HarmonixHandleUtil_CastToMusicHandle Parms{};

	Parms.worldContextObj = worldContextObj;
	Parms.H = H;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

bool UHarmonixHandleUtil::HarmonixHandleIsValid(class UHarmonixHandle* HarmonixHandle, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "HarmonixHandleIsValid");

	Params::HarmonixHandleUtil_HarmonixHandleIsValid Parms{};

	Parms.HarmonixHandle = HarmonixHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

bool UHarmonixHandleUtil::InstrumentHandleIsValid(class UInstrumentHandle* InstrumentHandle, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "InstrumentHandleIsValid");

	Params::HarmonixHandleUtil_InstrumentHandleIsValid Parms{};

	Parms.InstrumentHandle = InstrumentHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

bool UHarmonixHandleUtil::IsInstrument(class UHarmonixHandle* HarmonixHandle, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "IsInstrument");

	Params::HarmonixHandleUtil_IsInstrument Parms{};

	Parms.HarmonixHandle = HarmonixHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

bool UHarmonixHandleUtil::IsMusic(class UHarmonixHandle* HarmonixHandle, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "IsMusic");

	Params::HarmonixHandleUtil_IsMusic Parms{};

	Parms.HarmonixHandle = HarmonixHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

bool UHarmonixHandleUtil::MusicHandleIsValid(class UMusicHandle* MusicHandle, EHarmonixHandleValidity* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HarmonixHandleUtil", "MusicHandleIsValid");

	Params::HarmonixHandleUtil_MusicHandleIsValid Parms{};

	Parms.MusicHandle = MusicHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

void UInstrumentHandle::AllNotesOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "AllNotesOff");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::ClearPeakVoiceUsage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "ClearPeakVoiceUsage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UInstrumentHandle::GetController(int32 Controller, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "GetController");

	Params::InstrumentHandle_GetController Parms{};

	Parms.Controller = Controller;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UInstrumentHandle::GetMaxNumVoices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "GetMaxNumVoices");

	Params::InstrumentHandle_GetMaxNumVoices Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UInstrumentHandle::GetNumVoicesInUse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "GetNumVoicesInUse");

	Params::InstrumentHandle_GetNumVoicesInUse Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UInstrumentHandle::GetPitchbend(int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "GetPitchbend");

	Params::InstrumentHandle_GetPitchbend Parms{};

	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UInstrumentHandle::GetRawTransposition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "GetRawTransposition");

	Params::InstrumentHandle_GetRawTransposition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UInstrumentHandle::GetVoiceUsage(int32* Current, int32* peak)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "GetVoiceUsage");

	Params::InstrumentHandle_GetVoiceUsage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Current != nullptr)
		*Current = Parms.Current;

	if (peak != nullptr)
		*peak = Parms.peak;
}

void UInstrumentHandle::KillAllVoices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "KillAllVoices");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UInstrumentHandle::NoteIsOn(int32 midiNoteNumber, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "NoteIsOn");

	Params::InstrumentHandle_NoteIsOn Parms{};

	Parms.midiNoteNumber = midiNoteNumber;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UInstrumentHandle::NoteOff(int32 midiNoteNumber, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "NoteOff");

	Params::InstrumentHandle_NoteOff Parms{};

	Parms.midiNoteNumber = midiNoteNumber;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::NoteOn(int32 midiNoteNumber, int32 Velocity, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "NoteOn");

	Params::InstrumentHandle_NoteOn Parms{};

	Parms.midiNoteNumber = midiNoteNumber;
	Parms.Velocity = Velocity;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::NotesOff(TArray<int32>* midiNoteNumbers, TArray<int32>* Channels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "NotesOff");

	Params::InstrumentHandle_NotesOff Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (midiNoteNumbers != nullptr)
		*midiNoteNumbers = std::move(Parms.midiNoteNumbers);

	if (Channels != nullptr)
		*Channels = std::move(Parms.Channels);
}

void UInstrumentHandle::NotesOn(TArray<int32>* midiNoteNumbers, TArray<int32>* velocities, TArray<int32>* Channels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "NotesOn");

	Params::InstrumentHandle_NotesOn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (midiNoteNumbers != nullptr)
		*midiNoteNumbers = std::move(Parms.midiNoteNumbers);

	if (velocities != nullptr)
		*velocities = std::move(Parms.velocities);

	if (Channels != nullptr)
		*Channels = std::move(Parms.Channels);
}

void UInstrumentHandle::ProcessMidiMessage(int32 Status, int32 data1, int32 data2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "ProcessMidiMessage");

	Params::InstrumentHandle_ProcessMidiMessage Parms{};

	Parms.Status = Status;
	Parms.data1 = data1;
	Parms.data2 = data2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::SetController(int32 Controller, float Value, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "SetController");

	Params::InstrumentHandle_SetController Parms{};

	Parms.Controller = Controller;
	Parms.Value = Value;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::SetExtraPitchBend(float Semitones, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "SetExtraPitchBend");

	Params::InstrumentHandle_SetExtraPitchBend Parms{};

	Parms.Semitones = Semitones;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::SetPitchBend(float Value, int32 midiChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "SetPitchBend");

	Params::InstrumentHandle_SetPitchBend Parms{};

	Parms.Value = Value;
	Parms.midiChannel = midiChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::SetRawTransposition(int32 Semitones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "SetRawTransposition");

	Params::InstrumentHandle_SetRawTransposition Parms{};

	Parms.Semitones = Semitones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UInstrumentHandle::SetTempo(float BPM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InstrumentHandle", "SetTempo");

	Params::InstrumentHandle_SetTempo Parms{};

	Parms.BPM = BPM;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::ClearLoop(bool ignoreLookAhead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "ClearLoop");

	Params::MusicHandle_ClearLoop Parms{};

	Parms.ignoreLookAhead = ignoreLookAhead;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::ClearTimeAuthority(bool maintainLastTempoSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "ClearTimeAuthority");

	Params::MusicHandle_ClearTimeAuthority Parms{};

	Parms.maintainLastTempoSpeed = maintainLastTempoSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMusicHandle::FindLowLevelMidiTrackIndex(const class FString& trackName, EMusicFindResults* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "FindLowLevelMidiTrackIndex");

	Params::MusicHandle_FindLowLevelMidiTrackIndex Parms{};

	Parms.trackName = std::move(trackName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

int32 UMusicHandle::FindSectionIndex(const class FString& Name_0, EMusicFindResults* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "FindSectionIndex");

	Params::MusicHandle_FindSectionIndex Parms{};

	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

int32 UMusicHandle::FindTrackIndex(const class FString& trackName, EMusicFindResults* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "FindTrackIndex");

	Params::MusicHandle_FindTrackIndex Parms{};

	Parms.trackName = std::move(trackName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

float UMusicHandle::GetAudioLatencyMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetAudioLatencyMs");

	Params::MusicHandle_GetAudioLatencyMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMusicHandle::GetCurrentSectionName(EMusicTimebase inTimeBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetCurrentSectionName");

	Params::MusicHandle_GetCurrentSectionName Parms{};

	Parms.inTimeBase = inTimeBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicHandle::GetMs(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetMs");

	Params::MusicHandle_GetMs Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicHandle::GetNumSections()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetNumSections");

	Params::MusicHandle_GetNumSections Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicHandle::GetNumTracks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetNumTracks");

	Params::MusicHandle_GetNumTracks Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicHandle::GetRawTransposition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetRawTransposition");

	Params::MusicHandle_GetRawTransposition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicHandle::GetSecsAndTicksUntilPlay(float& secs, int32& ticks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSecsAndTicksUntilPlay");

	Params::MusicHandle_GetSecsAndTicksUntilPlay Parms{};

	Parms.secs = secs;
	Parms.ticks = ticks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	secs = Parms.secs;
	ticks = Parms.ticks;

	return Parms.ReturnValue;
}

class FString UMusicHandle::GetSectionName(int32 SectionIndex, EMusicFindResults* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSectionName");

	Params::MusicHandle_GetSectionName Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}

class FString UMusicHandle::GetSectionNameAtTick(int32 Tick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSectionNameAtTick");

	Params::MusicHandle_GetSectionNameAtTick Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FString> UMusicHandle::GetSectionNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSectionNames");

	Params::MusicHandle_GetSectionNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicHandle::GetSmoothingLatencyMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSmoothingLatencyMs");

	Params::MusicHandle_GetSmoothingLatencyMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSongPos UMusicHandle::GetSongPos(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSongPos");

	Params::MusicHandle_GetSongPos Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMusicHandle::GetSoundId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetSoundId");

	Params::MusicHandle_GetSoundId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMusicHandle::GetTick(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetTick");

	Params::MusicHandle_GetTick Parms{};

	Parms.inTimeBase = inTimeBase;
	Parms.InTimeStart = InTimeStart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicHandle::GetTrackDb(int32 track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetTrackDb");

	Params::MusicHandle_GetTrackDb Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicHandle::GetTrackGain(int32 track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetTrackGain");

	Params::MusicHandle_GetTrackGain Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicHandle::GetTrackMute(int32 track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetTrackMute");

	Params::MusicHandle_GetTrackMute Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMusicHandle::GetTrackName(int32 TrackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetTrackName");

	Params::MusicHandle_GetTrackName Parms{};

	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class FString> UMusicHandle::GetTrackNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetTrackNames");

	Params::MusicHandle_GetTrackNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMusicHandle::GetVideoLatencyMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "GetVideoLatencyMs");

	Params::MusicHandle_GetVideoLatencyMs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicHandle::Loop(int32 fromTick, int32 toTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "Loop");

	Params::MusicHandle_Loop Parms{};

	Parms.fromTick = fromTick;
	Parms.toTick = toTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicHandle::LoopSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "LoopSection");

	Params::MusicHandle_LoopSection Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMusicHandle::LoopWithCount(int32 fromTick, int32 toTick, int32 numTimes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "LoopWithCount");

	Params::MusicHandle_LoopWithCount Parms{};

	Parms.fromTick = fromTick;
	Parms.toTick = toTick;
	Parms.numTimes = numTimes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicHandle::SeekToContentTick(int32 Tick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SeekToContentTick");

	Params::MusicHandle_SeekToContentTick Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SeekToSongTick(int32 Tick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SeekToSongTick");

	Params::MusicHandle_SeekToSongTick Parms{};

	Parms.Tick = Tick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SetFutureUnmute(EFMusicUnmutePoint unmutePoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetFutureUnmute");

	Params::MusicHandle_SetFutureUnmute Parms{};

	Parms.unmutePoint = unmutePoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SetFutureUnmuteByTick(int32 Tick, bool useTimeAuthoritysTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetFutureUnmuteByTick");

	Params::MusicHandle_SetFutureUnmuteByTick Parms{};

	Parms.Tick = Tick;
	Parms.useTimeAuthoritysTick = useTimeAuthoritysTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SetRawTransposition(int32 Semitones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetRawTransposition");

	Params::MusicHandle_SetRawTransposition Parms{};

	Parms.Semitones = Semitones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SetSpeedToAchieveTempo(float BPM, bool maintainPitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetSpeedToAchieveTempo");

	Params::MusicHandle_SetSpeedToAchieveTempo Parms{};

	Parms.BPM = BPM;
	Parms.maintainPitch = maintainPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMusicHandle::SetTimeAuthority(class UMusicHandle* authority, const struct FMusicSyncConfig& syncConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetTimeAuthority");

	Params::MusicHandle_SetTimeAuthority Parms{};

	Parms.authority = authority;
	Parms.syncConfig = std::move(syncConfig);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMusicHandle::SetTrackDb(int32 track, float db, float sec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetTrackDb");

	Params::MusicHandle_SetTrackDb Parms{};

	Parms.track = track;
	Parms.db = db;
	Parms.sec = sec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SetTrackGain(int32 track, float Gain, float sec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetTrackGain");

	Params::MusicHandle_SetTrackGain Parms{};

	Parms.track = track;
	Parms.Gain = Gain;
	Parms.sec = sec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::SetTrackMute(int32 Tick, bool muted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "SetTrackMute");

	Params::MusicHandle_SetTrackMute Parms{};

	Parms.Tick = Tick;
	Parms.muted = muted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMusicHandle::StopWithReleases()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicHandle", "StopWithReleases");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
