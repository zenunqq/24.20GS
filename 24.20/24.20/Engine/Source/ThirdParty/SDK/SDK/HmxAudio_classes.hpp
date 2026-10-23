#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "HmxAudio_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "AudioMixer_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "HmxCore_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class IMidiMusicInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicInterface">();
	}
	static class IMidiMusicInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMidiMusicInterface>();
	}
};
static_assert(alignof(IMidiMusicInterface) == 0x000008, "Wrong alignment on IMidiMusicInterface");
static_assert(sizeof(IMidiMusicInterface) == 0x000028, "Wrong size on IMidiMusicInterface");

class UHmxResourceAssetBase : public UObject
{
public:
	uint8                                         Pad_28[0x28];
	TArray<class UObject*>                        mReferencedChildAssets;
	uint8                                         Pad_60[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HmxResourceAssetBase">();
	}
	static class UHmxResourceAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHmxResourceAssetBase>();
	}
};
static_assert(alignof(UHmxResourceAssetBase) == 0x000008, "Wrong alignment on UHmxResourceAssetBase");
static_assert(sizeof(UHmxResourceAssetBase) == 0x0000D8, "Wrong size on UHmxResourceAssetBase");
static_assert(offsetof(UHmxResourceAssetBase, mReferencedChildAssets) == 0x000050, "Member 'UHmxResourceAssetBase::mReferencedChildAssets' has a wrong offset!");

class UMusicalAssetBase : public UHmxResourceAssetBase
{
public:
	uint8                                         Pad_D8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicalAssetBase">();
	}
	static class UMusicalAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicalAssetBase>();
	}
};
static_assert(alignof(UMusicalAssetBase) == 0x000008, "Wrong alignment on UMusicalAssetBase");
static_assert(sizeof(UMusicalAssetBase) == 0x0000E0, "Wrong size on UMusicalAssetBase");

class UMusicAssetBase : public UMusicalAssetBase
{
public:
	uint8                                         Pad_E0[0x10];

public:
	float GetLengthMs() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicAssetBase">();
	}
	static class UMusicAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicAssetBase>();
	}
};
static_assert(alignof(UMusicAssetBase) == 0x000008, "Wrong alignment on UMusicAssetBase");
static_assert(sizeof(UMusicAssetBase) == 0x0000F0, "Wrong size on UMusicAssetBase");

class ISongPosInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SongPosInterface">();
	}
	static class ISongPosInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISongPosInterface>();
	}
};
static_assert(alignof(ISongPosInterface) == 0x000008, "Wrong alignment on ISongPosInterface");
static_assert(sizeof(ISongPosInterface) == 0x000028, "Wrong size on ISongPosInterface");

class USynthesizerPatchAssetBase : public UMusicalAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthesizerPatchAssetBase">();
	}
	static class USynthesizerPatchAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthesizerPatchAssetBase>();
	}
};
static_assert(alignof(USynthesizerPatchAssetBase) == 0x000008, "Wrong alignment on USynthesizerPatchAssetBase");
static_assert(sizeof(USynthesizerPatchAssetBase) == 0x0000E0, "Wrong size on USynthesizerPatchAssetBase");

class UDaggerPatchAsset final : public USynthesizerPatchAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaggerPatchAsset">();
	}
	static class UDaggerPatchAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaggerPatchAsset>();
	}
};
static_assert(alignof(UDaggerPatchAsset) == 0x000008, "Wrong alignment on UDaggerPatchAsset");
static_assert(sizeof(UDaggerPatchAsset) == 0x0000E0, "Wrong size on UDaggerPatchAsset");

class UFusionPatchAsset final : public USynthesizerPatchAssetBase
{
public:
	uint8                                         Pad_E0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FusionPatchAsset">();
	}
	static class UFusionPatchAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFusionPatchAsset>();
	}
};
static_assert(alignof(UFusionPatchAsset) == 0x000008, "Wrong alignment on UFusionPatchAsset");
static_assert(sizeof(UFusionPatchAsset) == 0x0000E8, "Wrong size on UFusionPatchAsset");

class UMidiFileAsset final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class FString                                 MidiFilePath;
	uint8                                         Pad_40[0x150];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiFileAsset">();
	}
	static class UMidiFileAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiFileAsset>();
	}
};
static_assert(alignof(UMidiFileAsset) == 0x000008, "Wrong alignment on UMidiFileAsset");
static_assert(sizeof(UMidiFileAsset) == 0x000190, "Wrong size on UMidiFileAsset");
static_assert(offsetof(UMidiFileAsset, MidiFilePath) == 0x000030, "Member 'UMidiFileAsset::MidiFilePath' has a wrong offset!");

class UMidiMusicAsset final : public UMusicAssetBase
{
public:
	uint8                                         Pad_F0[0x8];
	class UMidiFileAsset*                         MidiFileAsset;
	uint8                                         Pad_100[0x8];
	class FString                                 MidiMusicPath;
	uint8                                         Pad_118[0x10];
	TMap<class FName, class UFusionPatchAsset*>   FusionPatchMap;
	TMap<class FName, class UDaggerPatchAsset*>   DaggerPatchMap;
	TMap<class FName, struct FRemapRecord>        TrackRemaps;
	uint8                                         Pad_218[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicAsset">();
	}
	static class UMidiMusicAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicAsset>();
	}
};
static_assert(alignof(UMidiMusicAsset) == 0x000008, "Wrong alignment on UMidiMusicAsset");
static_assert(sizeof(UMidiMusicAsset) == 0x000220, "Wrong size on UMidiMusicAsset");
static_assert(offsetof(UMidiMusicAsset, MidiFileAsset) == 0x0000F8, "Member 'UMidiMusicAsset::MidiFileAsset' has a wrong offset!");
static_assert(offsetof(UMidiMusicAsset, MidiMusicPath) == 0x000108, "Member 'UMidiMusicAsset::MidiMusicPath' has a wrong offset!");
static_assert(offsetof(UMidiMusicAsset, FusionPatchMap) == 0x000128, "Member 'UMidiMusicAsset::FusionPatchMap' has a wrong offset!");
static_assert(offsetof(UMidiMusicAsset, DaggerPatchMap) == 0x000178, "Member 'UMidiMusicAsset::DaggerPatchMap' has a wrong offset!");
static_assert(offsetof(UMidiMusicAsset, TrackRemaps) == 0x0001C8, "Member 'UMidiMusicAsset::TrackRemaps' has a wrong offset!");

class UMoggDataAsset final : public UHmxResourceAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoggDataAsset">();
	}
	static class UMoggDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoggDataAsset>();
	}
};
static_assert(alignof(UMoggDataAsset) == 0x000008, "Wrong alignment on UMoggDataAsset");
static_assert(sizeof(UMoggDataAsset) == 0x0000D8, "Wrong size on UMoggDataAsset");

class UMoggMusicAsset final : public UMusicAssetBase
{
public:
	class UMidiFileAsset*                         MidiFileAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoggMusicAsset">();
	}
	static class UMoggMusicAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoggMusicAsset>();
	}
};
static_assert(alignof(UMoggMusicAsset) == 0x000008, "Wrong alignment on UMoggMusicAsset");
static_assert(sizeof(UMoggMusicAsset) == 0x0000F8, "Wrong size on UMoggMusicAsset");
static_assert(offsetof(UMoggMusicAsset, MidiFileAsset) == 0x0000F0, "Member 'UMoggMusicAsset::MidiFileAsset' has a wrong offset!");

class UBTDecorator_StopAfterSpan final : public UBTDecorator_BlackboardBase
{
public:
	float                                         Length;
	ELengthType                                   LengthUnits;
	ESynchronizationType                          SynchronizeTo;
	uint8                                         Pad_96[0x2];
	int32                                         SlopWindow;
	uint8                                         Pad_9C[0x2C];

public:
	void OnNextBeat(int32 beatNumber, int32 beatInBar);
	void OnNextMeasure(int32 measureNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_StopAfterSpan">();
	}
	static class UBTDecorator_StopAfterSpan* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_StopAfterSpan>();
	}
};
static_assert(alignof(UBTDecorator_StopAfterSpan) == 0x000008, "Wrong alignment on UBTDecorator_StopAfterSpan");
static_assert(sizeof(UBTDecorator_StopAfterSpan) == 0x0000C8, "Wrong size on UBTDecorator_StopAfterSpan");
static_assert(offsetof(UBTDecorator_StopAfterSpan, Length) == 0x000090, "Member 'UBTDecorator_StopAfterSpan::Length' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAfterSpan, LengthUnits) == 0x000094, "Member 'UBTDecorator_StopAfterSpan::LengthUnits' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAfterSpan, SynchronizeTo) == 0x000095, "Member 'UBTDecorator_StopAfterSpan::SynchronizeTo' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAfterSpan, SlopWindow) == 0x000098, "Member 'UBTDecorator_StopAfterSpan::SlopWindow' has a wrong offset!");

class UBTDecorator_StopAtMidiMsg final : public UBTDecorator_BlackboardBase
{
public:
	EMidiMsgType                                  MessageType;
	uint8                                         Pad_91[0x7];
	class FString                                 SpecificTextMessage;
	struct FBlackboardKeySelector                 TextMessageCapture;
	int32                                         SpecificChannel;
	int32                                         SpecificNote;
	int32                                         SpecificVelocityMin;
	int32                                         SpecificVelocityMax;
	bool                                          SpecifyTextMessage;
	bool                                          SpecifyChannel;
	bool                                          SpecifyNote;
	bool                                          SpecifyVelocityRange;
	uint8                                         Pad_E4[0x14];

public:
	void OnNoteOffMessage(const class FString& CursorName, int32 Channel, int32 Note);
	void OnNoteOnMessage(const class FString& CursorName, int32 Channel, int32 Note, int32 Velocity);
	void OnTextMessage(const class FString& CursorName, const class FString& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_StopAtMidiMsg">();
	}
	static class UBTDecorator_StopAtMidiMsg* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_StopAtMidiMsg>();
	}
};
static_assert(alignof(UBTDecorator_StopAtMidiMsg) == 0x000008, "Wrong alignment on UBTDecorator_StopAtMidiMsg");
static_assert(sizeof(UBTDecorator_StopAtMidiMsg) == 0x0000F8, "Wrong size on UBTDecorator_StopAtMidiMsg");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, MessageType) == 0x000090, "Member 'UBTDecorator_StopAtMidiMsg::MessageType' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecificTextMessage) == 0x000098, "Member 'UBTDecorator_StopAtMidiMsg::SpecificTextMessage' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, TextMessageCapture) == 0x0000A8, "Member 'UBTDecorator_StopAtMidiMsg::TextMessageCapture' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecificChannel) == 0x0000D0, "Member 'UBTDecorator_StopAtMidiMsg::SpecificChannel' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecificNote) == 0x0000D4, "Member 'UBTDecorator_StopAtMidiMsg::SpecificNote' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecificVelocityMin) == 0x0000D8, "Member 'UBTDecorator_StopAtMidiMsg::SpecificVelocityMin' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecificVelocityMax) == 0x0000DC, "Member 'UBTDecorator_StopAtMidiMsg::SpecificVelocityMax' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecifyTextMessage) == 0x0000E0, "Member 'UBTDecorator_StopAtMidiMsg::SpecifyTextMessage' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecifyChannel) == 0x0000E1, "Member 'UBTDecorator_StopAtMidiMsg::SpecifyChannel' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecifyNote) == 0x0000E2, "Member 'UBTDecorator_StopAtMidiMsg::SpecifyNote' has a wrong offset!");
static_assert(offsetof(UBTDecorator_StopAtMidiMsg, SpecifyVelocityRange) == 0x0000E3, "Member 'UBTDecorator_StopAtMidiMsg::SpecifyVelocityRange' has a wrong offset!");

class UBTDecorator_StopAtNext final : public UBTDecorator_BlackboardBase
{
public:
	EBTLengthType                                 StopAtNext;
	uint8                                         Pad_91[0x17];

public:
	void OnNextBeat(int32 beatNumber, int32 beatInBar);
	void OnNextMeasure(int32 measureNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_StopAtNext">();
	}
	static class UBTDecorator_StopAtNext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_StopAtNext>();
	}
};
static_assert(alignof(UBTDecorator_StopAtNext) == 0x000008, "Wrong alignment on UBTDecorator_StopAtNext");
static_assert(sizeof(UBTDecorator_StopAtNext) == 0x0000A8, "Wrong size on UBTDecorator_StopAtNext");
static_assert(offsetof(UBTDecorator_StopAtNext, StopAtNext) == 0x000090, "Member 'UBTDecorator_StopAtNext::StopAtNext' has a wrong offset!");

class UBTTask_WaitForMidiMsg final : public UBTTask_BlackboardBase
{
public:
	EMidiMsgType                                  MessageType;
	uint8                                         Pad_99[0x7];
	class FString                                 SpecificTextMessage;
	int32                                         SpecificChannel;
	int32                                         SpecificNote;
	int32                                         SpecificVelocityMin;
	int32                                         SpecificVelocityMax;
	bool                                          SpecifyTextMessage;
	bool                                          SpecifyChannel;
	bool                                          SpecifyNote;
	bool                                          SpecifyVelocityRange;
	uint8                                         Pad_C4[0x14];

public:
	void OnNoteOffMessage(const class FString& CursorName, int32 Channel, int32 Note);
	void OnNoteOnMessage(const class FString& CursorName, int32 Channel, int32 Note, int32 Velocity);
	void OnTextMessage(const class FString& CursorName, const class FString& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_WaitForMidiMsg">();
	}
	static class UBTTask_WaitForMidiMsg* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_WaitForMidiMsg>();
	}
};
static_assert(alignof(UBTTask_WaitForMidiMsg) == 0x000008, "Wrong alignment on UBTTask_WaitForMidiMsg");
static_assert(sizeof(UBTTask_WaitForMidiMsg) == 0x0000D8, "Wrong size on UBTTask_WaitForMidiMsg");
static_assert(offsetof(UBTTask_WaitForMidiMsg, MessageType) == 0x000098, "Member 'UBTTask_WaitForMidiMsg::MessageType' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecificTextMessage) == 0x0000A0, "Member 'UBTTask_WaitForMidiMsg::SpecificTextMessage' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecificChannel) == 0x0000B0, "Member 'UBTTask_WaitForMidiMsg::SpecificChannel' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecificNote) == 0x0000B4, "Member 'UBTTask_WaitForMidiMsg::SpecificNote' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecificVelocityMin) == 0x0000B8, "Member 'UBTTask_WaitForMidiMsg::SpecificVelocityMin' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecificVelocityMax) == 0x0000BC, "Member 'UBTTask_WaitForMidiMsg::SpecificVelocityMax' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecifyTextMessage) == 0x0000C0, "Member 'UBTTask_WaitForMidiMsg::SpecifyTextMessage' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecifyChannel) == 0x0000C1, "Member 'UBTTask_WaitForMidiMsg::SpecifyChannel' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecifyNote) == 0x0000C2, "Member 'UBTTask_WaitForMidiMsg::SpecifyNote' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForMidiMsg, SpecifyVelocityRange) == 0x0000C3, "Member 'UBTTask_WaitForMidiMsg::SpecifyVelocityRange' has a wrong offset!");

class UBTTask_WaitForNext final : public UBTTask_BlackboardBase
{
public:
	EBTLengthType                                 WaitForNext;
	uint8                                         Pad_99[0x17];

public:
	void OnNextBeat(int32 beatNumber, int32 beatInBar);
	void OnNextMeasure(int32 measureNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_WaitForNext">();
	}
	static class UBTTask_WaitForNext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_WaitForNext>();
	}
};
static_assert(alignof(UBTTask_WaitForNext) == 0x000008, "Wrong alignment on UBTTask_WaitForNext");
static_assert(sizeof(UBTTask_WaitForNext) == 0x0000B0, "Wrong size on UBTTask_WaitForNext");
static_assert(offsetof(UBTTask_WaitForNext, WaitForNext) == 0x000098, "Member 'UBTTask_WaitForNext::WaitForNext' has a wrong offset!");

class UBTTask_WaitForSpan final : public UBTTask_BlackboardBase
{
public:
	float                                         Length;
	uint8                                         Pad_9C[0x4];
	struct FBlackboardKeySelector                 LengthKey;
	bool                                          UseLengthFromBlackboard;
	ELengthType                                   LengthUnits;
	ESynchronizationType                          SynchronizeTo;
	uint8                                         Pad_CB[0x1];
	int32                                         SlopWindow;
	uint8                                         Pad_D0[0x28];

public:
	void OnNextBeat(int32 beatNumber, int32 beatInBar);
	void OnNextMeasure(int32 measureNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_WaitForSpan">();
	}
	static class UBTTask_WaitForSpan* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_WaitForSpan>();
	}
};
static_assert(alignof(UBTTask_WaitForSpan) == 0x000008, "Wrong alignment on UBTTask_WaitForSpan");
static_assert(sizeof(UBTTask_WaitForSpan) == 0x0000F8, "Wrong size on UBTTask_WaitForSpan");
static_assert(offsetof(UBTTask_WaitForSpan, Length) == 0x000098, "Member 'UBTTask_WaitForSpan::Length' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForSpan, LengthKey) == 0x0000A0, "Member 'UBTTask_WaitForSpan::LengthKey' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForSpan, UseLengthFromBlackboard) == 0x0000C8, "Member 'UBTTask_WaitForSpan::UseLengthFromBlackboard' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForSpan, LengthUnits) == 0x0000C9, "Member 'UBTTask_WaitForSpan::LengthUnits' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForSpan, SynchronizeTo) == 0x0000CA, "Member 'UBTTask_WaitForSpan::SynchronizeTo' has a wrong offset!");
static_assert(offsetof(UBTTask_WaitForSpan, SlopWindow) == 0x0000CC, "Member 'UBTTask_WaitForSpan::SlopWindow' has a wrong offset!");

class UHmxAudioBlueprintUtil final : public UBlueprintFunctionLibrary
{
public:
	static float FrequencyToMidiNote(float freq);
	static float GetAudioLatencyMs(class UObject* worldContextObj);
	static class FString GetNoteNameFromNoteNumber(int32 midiNoteNumber);
	static int32 GetNoteNumberFromNoteName(const class FString& Name_0);
	static int32 GetNoteOctaveFromNoteNumber(int32 midiNoteNumber);
	static float GetVideoLatencyMs(class UObject* worldContextObj);
	static void SetAudioLatencyMs(class UObject* worldContextObj, float InAudioLatencyMs);
	static void SetVideoLatencyMs(class UObject* worldContextObj, float InVideoLatencyMs);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HmxAudioBlueprintUtil">();
	}
	static class UHmxAudioBlueprintUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHmxAudioBlueprintUtil>();
	}
};
static_assert(alignof(UHmxAudioBlueprintUtil) == 0x000008, "Wrong alignment on UHmxAudioBlueprintUtil");
static_assert(sizeof(UHmxAudioBlueprintUtil) == 0x000028, "Wrong size on UHmxAudioBlueprintUtil");

class UMidiNoteFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FMidiNote ByteToMidiNote(uint8 InByte);
	static struct FMidiNote GetMaxMidiNote();
	static uint8 GetMaxNoteNumber();
	static uint8 GetMaxNoteVelocity();
	static int32 GetMaxNumNotes();
	static struct FMidiNote GetMinMidiNote();
	static uint8 GetMinNoteNumber();
	static uint8 GetMinNoteVelocity();
	static struct FMidiNote IntToMidiNote(int32 inInt);
	static struct FMidiNote MakeLiteralMidiNote(const struct FMidiNote& Value);
	static uint8 MidiNoteToByte(const struct FMidiNote& InMidiNote);
	static int32 MidiNoteToInt(const struct FMidiNote& InMidiNote);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiNoteFunctionLibrary">();
	}
	static class UMidiNoteFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiNoteFunctionLibrary>();
	}
};
static_assert(alignof(UMidiNoteFunctionLibrary) == 0x000008, "Wrong alignment on UMidiNoteFunctionLibrary");
static_assert(sizeof(UMidiNoteFunctionLibrary) == 0x000028, "Wrong size on UMidiNoteFunctionLibrary");

class UMusicalTickFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float BeatToTick(float inBeat);
	static float GetBeatsPerTick();
	static float GetTicksPerBeat();
	static int32 GetTicksPerBeatInt();
	static float TickToBeat(float inTick);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicalTickFunctionLibrary">();
	}
	static class UMusicalTickFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicalTickFunctionLibrary>();
	}
};
static_assert(alignof(UMusicalTickFunctionLibrary) == 0x000008, "Wrong alignment on UMusicalTickFunctionLibrary");
static_assert(sizeof(UMusicalTickFunctionLibrary) == 0x000028, "Wrong size on UMusicalTickFunctionLibrary");

class UTickSpanFuncitonLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FTickSpan ClampTickSpan(const struct FTickSpan& Target, const struct FTickSpan& clampSpan);
	static void ClampTickSpanByRef(struct FTickSpan& Target, const struct FTickSpan& clampSpan, struct FTickSpan* Result);
	static float GetEndBeat(const struct FTickSpan& Target);
	static int32 GetEndTick(const struct FTickSpan& Target);
	static float GetLengthBeats(const struct FTickSpan& Target);
	static int32 GetLengthTicks(const struct FTickSpan& Target);
	static float GetOffsetBeat(const struct FTickSpan& Target);
	static int32 GetOffsetTick(const struct FTickSpan& Target);
	static struct FTickSpan MakeTickSpan(int32 Offset, int32 Length);
	static struct FTickSpan MakeTickSpanFromBeats(float Offset, float Length);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TickSpanFuncitonLibrary">();
	}
	static class UTickSpanFuncitonLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickSpanFuncitonLibrary>();
	}
};
static_assert(alignof(UTickSpanFuncitonLibrary) == 0x000008, "Wrong alignment on UTickSpanFuncitonLibrary");
static_assert(sizeof(UTickSpanFuncitonLibrary) == 0x000028, "Wrong size on UTickSpanFuncitonLibrary");

class UMidiMusicChord final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TArray<struct FMidiNote>                      MidiNotes;
	uint8                                         Velocity;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicChord">();
	}
	static class UMidiMusicChord* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicChord>();
	}
};
static_assert(alignof(UMidiMusicChord) == 0x000008, "Wrong alignment on UMidiMusicChord");
static_assert(sizeof(UMidiMusicChord) == 0x000048, "Wrong size on UMidiMusicChord");
static_assert(offsetof(UMidiMusicChord, MidiNotes) == 0x000030, "Member 'UMidiMusicChord::MidiNotes' has a wrong offset!");
static_assert(offsetof(UMidiMusicChord, Velocity) == 0x000040, "Member 'UMidiMusicChord::Velocity' has a wrong offset!");

class UMidiMusicMidiFile final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TSoftObjectPtr<class UMidiFileAsset>          MidiFileAsset;
	class FString                                 TrackId;
	int32                                         TrackIndex;
	struct FTickSpan                              TickSpan;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicMidiFile">();
	}
	static class UMidiMusicMidiFile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicMidiFile>();
	}
};
static_assert(alignof(UMidiMusicMidiFile) == 0x000008, "Wrong alignment on UMidiMusicMidiFile");
static_assert(sizeof(UMidiMusicMidiFile) == 0x000078, "Wrong size on UMidiMusicMidiFile");
static_assert(offsetof(UMidiMusicMidiFile, MidiFileAsset) == 0x000030, "Member 'UMidiMusicMidiFile::MidiFileAsset' has a wrong offset!");
static_assert(offsetof(UMidiMusicMidiFile, TrackId) == 0x000058, "Member 'UMidiMusicMidiFile::TrackId' has a wrong offset!");
static_assert(offsetof(UMidiMusicMidiFile, TrackIndex) == 0x000068, "Member 'UMidiMusicMidiFile::TrackIndex' has a wrong offset!");
static_assert(offsetof(UMidiMusicMidiFile, TickSpan) == 0x00006C, "Member 'UMidiMusicMidiFile::TickSpan' has a wrong offset!");

class UMidiMusicNote final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FMidiNote                              MidiNote;
	uint8                                         Velocity;
	uint8                                         Pad_32[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicNote">();
	}
	static class UMidiMusicNote* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicNote>();
	}
};
static_assert(alignof(UMidiMusicNote) == 0x000008, "Wrong alignment on UMidiMusicNote");
static_assert(sizeof(UMidiMusicNote) == 0x000038, "Wrong size on UMidiMusicNote");
static_assert(offsetof(UMidiMusicNote, MidiNote) == 0x000030, "Member 'UMidiMusicNote::MidiNote' has a wrong offset!");
static_assert(offsetof(UMidiMusicNote, Velocity) == 0x000031, "Member 'UMidiMusicNote::Velocity' has a wrong offset!");

class UMidiMusicSequence final : public UObject
{
public:
	uint8                                         Pad_28[0x70];
	TArray<class UMidiMusicTimeSlot*>             TimeSlots;

public:
	class UMidiMusicTimeSlot* AppendTimeSlot(const struct FMidiMusicTimeSlotArgs& args);
	class UMidiMusicTimeSlot* InsertTimeSlot(const struct FMidiMusicTimeSlotArgs& args);

	class UMidiMusicTimeSlot* FindTimeSlotAt(int32 Index_0) const;
	class UMidiMusicTimeSlot* FindTimeSlotAtTick(int32 Tick) const;
	class UMidiMusicTimeSlot* GetLastTimeSlot() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicSequence">();
	}
	static class UMidiMusicSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicSequence>();
	}
};
static_assert(alignof(UMidiMusicSequence) == 0x000008, "Wrong alignment on UMidiMusicSequence");
static_assert(sizeof(UMidiMusicSequence) == 0x0000A8, "Wrong size on UMidiMusicSequence");
static_assert(offsetof(UMidiMusicSequence, TimeSlots) == 0x000098, "Member 'UMidiMusicSequence::TimeSlots' has a wrong offset!");

class UMidiMusicTimeSlot final : public UObject
{
public:
	struct FTickSpan                              TickSpan;
	bool                                          Enabled;
	uint8                                         Pad_31[0x17];
	TScriptInterface<class IMidiMusicInterface>   MidiMusicItem;

public:
	void SetCurrentPage(int32 inCurrentPage);
	void SetEnabled(bool InEnabled);
	void SetLengthTick(int32 inLength);
	void SetMidiMusicItem(TScriptInterface<class IMidiMusicInterface> inMidiMusicItem);
	void SetNumPages(int32 inNumPages);
	void SetOffsetTick(int32 InOffset);
	void SetPages(const TArray<bool>& inPages);
	void SetTickSpan(const struct FTickSpan& inTickSpan);

	int32 GetCurrentPage() const;
	bool GetEnabled() const;
	int32 GetEndBeat() const;
	int32 GetEndTick() const;
	int32 GetIndexInSequence() const;
	int32 GetLengthBeats() const;
	int32 GetLengthTick() const;
	TScriptInterface<class IMidiMusicInterface> GetMidiMusicItem() const;
	int32 GetNumPages() const;
	int32 GetOffsetBeat() const;
	int32 GetOffsetTick() const;
	const TArray<bool> GetPages() const;
	struct FTickSpan GetTickSpan() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicTimeSlot">();
	}
	static class UMidiMusicTimeSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicTimeSlot>();
	}
};
static_assert(alignof(UMidiMusicTimeSlot) == 0x000008, "Wrong alignment on UMidiMusicTimeSlot");
static_assert(sizeof(UMidiMusicTimeSlot) == 0x000058, "Wrong size on UMidiMusicTimeSlot");
static_assert(offsetof(UMidiMusicTimeSlot, TickSpan) == 0x000028, "Member 'UMidiMusicTimeSlot::TickSpan' has a wrong offset!");
static_assert(offsetof(UMidiMusicTimeSlot, Enabled) == 0x000030, "Member 'UMidiMusicTimeSlot::Enabled' has a wrong offset!");
static_assert(offsetof(UMidiMusicTimeSlot, MidiMusicItem) == 0x000048, "Member 'UMidiMusicTimeSlot::MidiMusicItem' has a wrong offset!");

class UMusicalGridEvent final : public UObject
{
public:
	uint8                                         Pad_28[0x28];

public:
	bool Cancel();
	float GetProgress();
	void OnTriggered();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicalGridEvent">();
	}
	static class UMusicalGridEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicalGridEvent>();
	}
};
static_assert(alignof(UMusicalGridEvent) == 0x000008, "Wrong alignment on UMusicalGridEvent");
static_assert(sizeof(UMusicalGridEvent) == 0x000050, "Wrong size on UMusicalGridEvent");

class UStepSequencerTrack final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TSoftObjectPtr<class USynthesizerPatchAssetBase> SynthPatch;
	class UMidiMusicSequence*                     MidiMusicSequence;
	int32                                         TrackIndex;
	uint8                                         Pad_64[0x14];
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track)> EventOnNumGridSquaresChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track, float gridSquareBeats)> EventOnGridSquareBeatsChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track, int32 currentPage)> EventOnCurrentPageChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track)> EventOnAnyGridsquareStateChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track, class UMidiMusicTimeSlot* Slot)> EventOnGridsquareStateChanged;
	uint8                                         Pad_C8[0x18];

public:
	void AppendGridSquares(int32 appendSquares, bool copyStates, bool copyMusicItems);
	void InitGridSquares(int32 inGridSquareNum, int32 inMaxGridSquares, float inGridSquareBeats);
	void OnTimeSlotEnabledChanged(class UMidiMusicTimeSlot* timeSlot);
	void OnTimeSlotMusicItemChanged(class UMidiMusicTimeSlot* timeSlot);
	void OnTimeSlotTimeSpanChanged(class UMidiMusicTimeSlot* timeSlot);
	void PopGridSquares(int32 popSquares);
	void SetCurrentPage(int32 Page);
	void SetGridSquareBeats(float inGridSquareBeats);
	void SetGridSquareState(int32 gridSquareIndex, bool isOn);
	void SetGridSquareStateOnPage(int32 gridSquareIndex, int32 PageIndex, bool isOn);
	void SetMusicItemAtGridSquare(int32 gridSquareIndex, TScriptInterface<class IMidiMusicInterface> MusicItem);
	void SetMusicItemForWholeTrack(TScriptInterface<class IMidiMusicInterface> MusicItem);
	void SetMusicItemsInTrack(const TArray<TScriptInterface<class IMidiMusicInterface>>& musicItems);
	void SetNumPages(int32 inNumPages);
	void ToggleGridSquareState(int32 gridSquareIndex);

	class UMidiMusicTimeSlot* FindGridSquareAtIndex(int32 Index_0) const;
	class UMidiMusicTimeSlot* FindGridSquareAtTick(int32 Tick) const;
	int32 GetEndTick() const;
	int32 GetGridSquareBeats() const;
	bool GetGridSquareState(int32 gridSquareIndex) const;
	int32 GetNumGridSquares() const;
	int32 TicksPerSquare() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StepSequencerTrack">();
	}
	static class UStepSequencerTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepSequencerTrack>();
	}
};
static_assert(alignof(UStepSequencerTrack) == 0x000008, "Wrong alignment on UStepSequencerTrack");
static_assert(sizeof(UStepSequencerTrack) == 0x0000E0, "Wrong size on UStepSequencerTrack");
static_assert(offsetof(UStepSequencerTrack, SynthPatch) == 0x000030, "Member 'UStepSequencerTrack::SynthPatch' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, MidiMusicSequence) == 0x000058, "Member 'UStepSequencerTrack::MidiMusicSequence' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, TrackIndex) == 0x000060, "Member 'UStepSequencerTrack::TrackIndex' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, EventOnNumGridSquaresChanged) == 0x000078, "Member 'UStepSequencerTrack::EventOnNumGridSquaresChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, EventOnGridSquareBeatsChanged) == 0x000088, "Member 'UStepSequencerTrack::EventOnGridSquareBeatsChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, EventOnCurrentPageChanged) == 0x000098, "Member 'UStepSequencerTrack::EventOnCurrentPageChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, EventOnAnyGridsquareStateChanged) == 0x0000A8, "Member 'UStepSequencerTrack::EventOnAnyGridsquareStateChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerTrack, EventOnGridsquareStateChanged) == 0x0000B8, "Member 'UStepSequencerTrack::EventOnGridsquareStateChanged' has a wrong offset!");

class UHarmonixPlayerComponentBase : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(bool IsPlaying)> PlayStateEvent;
	TMulticastInlineDelegate<void(bool IsTriggered)> TriggerStateEvent;
	struct FStartCondition                        StartCondition;
	EAudioClipStartPosition                       StartPosition;
	uint8                                         Pad_D1[0x3];
	int32                                         TickOffset;
	EWaitAtLeastMode                              AtLeastMode;
	uint8                                         Pad_D9[0x3];
	float                                         WaitAtLeast;
	EPlayEmitterFindMethod                        PlayEmitterSpec;
	uint8                                         Pad_E1[0x7];
	class AActor*                                 PlayEmitterObj;
	class FName                                   PlayEmitterTag;
	ESyncEmitterFindMethod                        syncEmitterSpec;
	uint8                                         Pad_F5[0x3];
	class AActor*                                 SyncEmitterObj;
	class UMusicPlayerComponentBase*              syncClip;
	class FName                                   SyncEmitterTag;
	float                                         Gain;
	float                                         Volume;
	float                                         VolumeTransitionTime;
	bool                                          mute;
	uint8                                         Pad_119[0x7];
	TArray<struct FAudioParam>                    Parameters;
	uint8                                         Pad_130[0x10];
	struct FMusicalPlayerRuntimeState             RuntimeState;
	uint8                                         Pad_154[0x8C];

public:
	bool Continue();
	void FadeAndStop(float Seconds);
	class UHarmonixHandle* GetHarmonixHandle();
	class UMusicPlayerComponentBase* GetSyncClip(class UHarmonixPlayerComponentBase* syncClip_0);
	bool Pause();
	void SetGain(float Gain_0);
	void SetMute(bool mute_0);
	bool SetParameterValue(class FName Name_0, float Value);
	void SetPlayEmitterFindMethod(EPlayEmitterFindMethod Method);
	void SetStartPosition(EAudioClipStartPosition Pos);
	void SetSyncClip(class UMusicPlayerComponentBase* syncClip_0);
	void SetSyncEmitterSpec(ESyncEmitterFindMethod syncEmitterSpec_0);
	void SetTickOffset(int32 Tick);
	void SetVolume(float Volume_0);
	bool Stop();
	bool Trigger();

	float GetElapsedMs() const;
	bool GetParameterValue(class FName Name_0, float* Value) const;
	float GetSecsUntilNextPlay() const;
	EAudioClipStartPosition GetStartPosition() const;
	ESyncEmitterFindMethod GetSyncEmitterSpec() const;
	int32 GetTickOffset() const;
	bool IsFinished() const;
	bool IsNotPlaying() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsStarted() const;
	bool IsTriggered() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixPlayerComponentBase">();
	}
	static class UHarmonixPlayerComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixPlayerComponentBase>();
	}
};
static_assert(alignof(UHarmonixPlayerComponentBase) == 0x000008, "Wrong alignment on UHarmonixPlayerComponentBase");
static_assert(sizeof(UHarmonixPlayerComponentBase) == 0x0001E0, "Wrong size on UHarmonixPlayerComponentBase");
static_assert(offsetof(UHarmonixPlayerComponentBase, PlayStateEvent) == 0x0000A0, "Member 'UHarmonixPlayerComponentBase::PlayStateEvent' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, TriggerStateEvent) == 0x0000B0, "Member 'UHarmonixPlayerComponentBase::TriggerStateEvent' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, StartCondition) == 0x0000C0, "Member 'UHarmonixPlayerComponentBase::StartCondition' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, StartPosition) == 0x0000D0, "Member 'UHarmonixPlayerComponentBase::StartPosition' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, TickOffset) == 0x0000D4, "Member 'UHarmonixPlayerComponentBase::TickOffset' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, AtLeastMode) == 0x0000D8, "Member 'UHarmonixPlayerComponentBase::AtLeastMode' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, WaitAtLeast) == 0x0000DC, "Member 'UHarmonixPlayerComponentBase::WaitAtLeast' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, PlayEmitterSpec) == 0x0000E0, "Member 'UHarmonixPlayerComponentBase::PlayEmitterSpec' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, PlayEmitterObj) == 0x0000E8, "Member 'UHarmonixPlayerComponentBase::PlayEmitterObj' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, PlayEmitterTag) == 0x0000F0, "Member 'UHarmonixPlayerComponentBase::PlayEmitterTag' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, syncEmitterSpec) == 0x0000F4, "Member 'UHarmonixPlayerComponentBase::syncEmitterSpec' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, SyncEmitterObj) == 0x0000F8, "Member 'UHarmonixPlayerComponentBase::SyncEmitterObj' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, syncClip) == 0x000100, "Member 'UHarmonixPlayerComponentBase::syncClip' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, SyncEmitterTag) == 0x000108, "Member 'UHarmonixPlayerComponentBase::SyncEmitterTag' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, Gain) == 0x00010C, "Member 'UHarmonixPlayerComponentBase::Gain' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, Volume) == 0x000110, "Member 'UHarmonixPlayerComponentBase::Volume' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, VolumeTransitionTime) == 0x000114, "Member 'UHarmonixPlayerComponentBase::VolumeTransitionTime' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, mute) == 0x000118, "Member 'UHarmonixPlayerComponentBase::mute' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, Parameters) == 0x000120, "Member 'UHarmonixPlayerComponentBase::Parameters' has a wrong offset!");
static_assert(offsetof(UHarmonixPlayerComponentBase, RuntimeState) == 0x000140, "Member 'UHarmonixPlayerComponentBase::RuntimeState' has a wrong offset!");

class URepeatableMusicalAssetPlayerComponentBase : public UHarmonixPlayerComponentBase
{
public:
	EFAudioContinuationMode                       mContinuationMode;
	uint8                                         Pad_1E1[0x3];
	int32                                         mRepeatingTick;
	bool                                          mPlayOnStartPosition;
	uint8                                         Pad_1E9[0x7];

public:
	EFAudioContinuationMode GetContinuationMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RepeatableMusicalAssetPlayerComponentBase">();
	}
	static class URepeatableMusicalAssetPlayerComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<URepeatableMusicalAssetPlayerComponentBase>();
	}
};
static_assert(alignof(URepeatableMusicalAssetPlayerComponentBase) == 0x000008, "Wrong alignment on URepeatableMusicalAssetPlayerComponentBase");
static_assert(sizeof(URepeatableMusicalAssetPlayerComponentBase) == 0x0001F0, "Wrong size on URepeatableMusicalAssetPlayerComponentBase");
static_assert(offsetof(URepeatableMusicalAssetPlayerComponentBase, mContinuationMode) == 0x0001E0, "Member 'URepeatableMusicalAssetPlayerComponentBase::mContinuationMode' has a wrong offset!");
static_assert(offsetof(URepeatableMusicalAssetPlayerComponentBase, mRepeatingTick) == 0x0001E4, "Member 'URepeatableMusicalAssetPlayerComponentBase::mRepeatingTick' has a wrong offset!");
static_assert(offsetof(URepeatableMusicalAssetPlayerComponentBase, mPlayOnStartPosition) == 0x0001E8, "Member 'URepeatableMusicalAssetPlayerComponentBase::mPlayOnStartPosition' has a wrong offset!");

class USynthesizerComponentBase : public URepeatableMusicalAssetPlayerComponentBase
{
public:
	struct FMidiNote                              Note;
	uint8                                         Pad_1F1[0x7];
	class FString                                 NoteValue;
	int32                                         Velocity;
	uint8                                         Pad_20C[0x4];
	TArray<struct FPBSetting>                     Pitchbends;
	TArray<struct FCCSetting>                     ControllerSettings;
	uint8                                         Pad_230[0x8];
	class UInstrumentHandle*                      mInstrumentHandle;
	uint8                                         Pad_240[0x8];

public:
	void AllNotesOff();
	void AllNotesOffQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	struct FCCSetting GetController(int32 midiChannel, EMidiControllerID ControllerId);
	struct FPBSetting GetPitchbend(int32 midiChannel);
	class UInstrumentHandle* GetSynthHandle();
	void NoteOff(const struct FMidiNote& Note_0, int32 midiCh);
	void NoteOffQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, const struct FMidiNote& Note_0, int32 midiCh);
	void NoteOn(const struct FMidiNote& Note_0, int32 Velocity_0);
	void NoteOnChannel(const struct FMidiNote& Note_0, int32 Velocity_0, int32 midiCh);
	void NoteOnChannelWithOffset(const struct FMidiNote& Note_0, int32 Velocity_0, float msOffset, int32 midiCh);
	void NoteOnQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, const struct FMidiNote& Note_0, int32 Velocity_0, int32 midiCh);
	void NoteOnWithOffset(const struct FMidiNote& Note_0, int32 Velocity_0, float msOffset);
	void SetController(int32 midiChannel, EMidiControllerID ControllerId, int32 Value);
	void SetNote(const struct FMidiNote& Note_0);
	void SetPitchBend(int32 midiChannel, float Value);
	void SetVelocity(int32 Velocity_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthesizerComponentBase">();
	}
	static class USynthesizerComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthesizerComponentBase>();
	}
};
static_assert(alignof(USynthesizerComponentBase) == 0x000008, "Wrong alignment on USynthesizerComponentBase");
static_assert(sizeof(USynthesizerComponentBase) == 0x000248, "Wrong size on USynthesizerComponentBase");
static_assert(offsetof(USynthesizerComponentBase, Note) == 0x0001F0, "Member 'USynthesizerComponentBase::Note' has a wrong offset!");
static_assert(offsetof(USynthesizerComponentBase, NoteValue) == 0x0001F8, "Member 'USynthesizerComponentBase::NoteValue' has a wrong offset!");
static_assert(offsetof(USynthesizerComponentBase, Velocity) == 0x000208, "Member 'USynthesizerComponentBase::Velocity' has a wrong offset!");
static_assert(offsetof(USynthesizerComponentBase, Pitchbends) == 0x000210, "Member 'USynthesizerComponentBase::Pitchbends' has a wrong offset!");
static_assert(offsetof(USynthesizerComponentBase, ControllerSettings) == 0x000220, "Member 'USynthesizerComponentBase::ControllerSettings' has a wrong offset!");
static_assert(offsetof(USynthesizerComponentBase, mInstrumentHandle) == 0x000238, "Member 'USynthesizerComponentBase::mInstrumentHandle' has a wrong offset!");

class UDaggerSynthComponent final : public USynthesizerComponentBase
{
public:
	TSoftObjectPtr<class UDaggerPatchAsset>       DaggerPatch;
	uint8                                         Pad_270[0x8];

public:
	void SetDaggerPatch(TSoftObjectPtr<class UDaggerPatchAsset> Patch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DaggerSynthComponent">();
	}
	static class UDaggerSynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDaggerSynthComponent>();
	}
};
static_assert(alignof(UDaggerSynthComponent) == 0x000008, "Wrong alignment on UDaggerSynthComponent");
static_assert(sizeof(UDaggerSynthComponent) == 0x000278, "Wrong size on UDaggerSynthComponent");
static_assert(offsetof(UDaggerSynthComponent, DaggerPatch) == 0x000248, "Member 'UDaggerSynthComponent::DaggerPatch' has a wrong offset!");

class UFusionSynthComponent final : public USynthesizerComponentBase
{
public:
	TSoftObjectPtr<class UFusionPatchAsset>       FusionPatch;
	class UFusionPatchAsset*                      LoadedFusionAsset;
	uint8                                         Pad_278[0x8];

public:
	void SetFusionPatch(TSoftObjectPtr<class UFusionPatchAsset> Patch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FusionSynthComponent">();
	}
	static class UFusionSynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFusionSynthComponent>();
	}
};
static_assert(alignof(UFusionSynthComponent) == 0x000008, "Wrong alignment on UFusionSynthComponent");
static_assert(sizeof(UFusionSynthComponent) == 0x000280, "Wrong size on UFusionSynthComponent");
static_assert(offsetof(UFusionSynthComponent, FusionPatch) == 0x000248, "Member 'UFusionSynthComponent::FusionPatch' has a wrong offset!");
static_assert(offsetof(UFusionSynthComponent, LoadedFusionAsset) == 0x000270, "Member 'UFusionSynthComponent::LoadedFusionAsset' has a wrong offset!");

class UMediaMusicTimelineGenerator final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8F8];
	class UMidiFileAsset*                         MidiAsset;
	class UMediaSoundComponent*                   MediaSoundComponent;
	bool                                          BecomeEmitterTimeAuthority;
	EPlayEmitterFindMethod                        EmitterSpecification;
	uint8                                         Pad_9AA[0x6];
	class AActor*                                 EmitterObj;
	class FName                                   EmitterTag;
	uint8                                         Pad_9BC[0x4];
	TMulticastInlineDelegate<void(class UMusicHandle* MusicHandle)> OnStarted;
	TMulticastInlineDelegate<void()>              OnStopped;
	class UMusicHandle*                           MusicHandle;
	uint8                                         Pad_9E8[0x48];

public:
	struct FSongPos CalculateSongPosAtTick(float Tick);
	float GetElapsedMs();
	float GetLengthMs();
	class UMusicHandle* GetMusicHandle();
	void SetMediaSoundComponent(class UMediaSoundComponent* InMediaSoundComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaMusicTimelineGenerator">();
	}
	static class UMediaMusicTimelineGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaMusicTimelineGenerator>();
	}
};
static_assert(alignof(UMediaMusicTimelineGenerator) == 0x000008, "Wrong alignment on UMediaMusicTimelineGenerator");
static_assert(sizeof(UMediaMusicTimelineGenerator) == 0x000A30, "Wrong size on UMediaMusicTimelineGenerator");
static_assert(offsetof(UMediaMusicTimelineGenerator, MidiAsset) == 0x000998, "Member 'UMediaMusicTimelineGenerator::MidiAsset' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, MediaSoundComponent) == 0x0009A0, "Member 'UMediaMusicTimelineGenerator::MediaSoundComponent' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, BecomeEmitterTimeAuthority) == 0x0009A8, "Member 'UMediaMusicTimelineGenerator::BecomeEmitterTimeAuthority' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, EmitterSpecification) == 0x0009A9, "Member 'UMediaMusicTimelineGenerator::EmitterSpecification' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, EmitterObj) == 0x0009B0, "Member 'UMediaMusicTimelineGenerator::EmitterObj' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, EmitterTag) == 0x0009B8, "Member 'UMediaMusicTimelineGenerator::EmitterTag' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, OnStarted) == 0x0009C0, "Member 'UMediaMusicTimelineGenerator::OnStarted' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, OnStopped) == 0x0009D0, "Member 'UMediaMusicTimelineGenerator::OnStopped' has a wrong offset!");
static_assert(offsetof(UMediaMusicTimelineGenerator, MusicHandle) == 0x0009E0, "Member 'UMediaMusicTimelineGenerator::MusicHandle' has a wrong offset!");

class UMidiMsgBroadcasterComponent final : public UActorComponent
{
public:
	EFMidiSourceType                              MidiSourceType;
	uint8                                         Pad_A1[0x7];
	class UMusicEmitterComponent*                 Emitter;
	class UMusicPlayerComponentBase*              MusicPlayer;
	class UMusicHandle*                           MusicHandle;
	TArray<struct FCursorSettings>                CursorSettings;
	TMulticastInlineDelegate<void(const class FString& CursorName, const class FString& Text)> Text;
	TMulticastInlineDelegate<void(const class FString& CursorName, int32 Channel, int32 Note, int32 Velocity)> NoteOn;
	TMulticastInlineDelegate<void(const class FString& CursorName, int32 Channel, int32 Note)> NoteOff;
	uint8                                         Pad_100[0x88];

public:
	void SetEmitter(class UMusicEmitterComponent* InEmitter);
	void SetMusicHandle(class UMusicHandle* InHandle);
	void SetMusicPlayer(class UMusicPlayerComponentBase* InMusicPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMsgBroadcasterComponent">();
	}
	static class UMidiMsgBroadcasterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMsgBroadcasterComponent>();
	}
};
static_assert(alignof(UMidiMsgBroadcasterComponent) == 0x000008, "Wrong alignment on UMidiMsgBroadcasterComponent");
static_assert(sizeof(UMidiMsgBroadcasterComponent) == 0x000188, "Wrong size on UMidiMsgBroadcasterComponent");
static_assert(offsetof(UMidiMsgBroadcasterComponent, MidiSourceType) == 0x0000A0, "Member 'UMidiMsgBroadcasterComponent::MidiSourceType' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, Emitter) == 0x0000A8, "Member 'UMidiMsgBroadcasterComponent::Emitter' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, MusicPlayer) == 0x0000B0, "Member 'UMidiMsgBroadcasterComponent::MusicPlayer' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, MusicHandle) == 0x0000B8, "Member 'UMidiMsgBroadcasterComponent::MusicHandle' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, CursorSettings) == 0x0000C0, "Member 'UMidiMsgBroadcasterComponent::CursorSettings' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, Text) == 0x0000D0, "Member 'UMidiMsgBroadcasterComponent::Text' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, NoteOn) == 0x0000E0, "Member 'UMidiMsgBroadcasterComponent::NoteOn' has a wrong offset!");
static_assert(offsetof(UMidiMsgBroadcasterComponent, NoteOff) == 0x0000F0, "Member 'UMidiMsgBroadcasterComponent::NoteOff' has a wrong offset!");

class UMusicPlayerComponentBase : public UHarmonixPlayerComponentBase
{
public:
	uint8                                         Pad_1E0[0x8];
	bool                                          Loop;
	uint8                                         Pad_1E9[0x3];
	struct FMusicClipSpeedConfig                  speedConfig;
	int32                                         transpositionSemitones;
	struct FMusicClipSyncConfig                   syncConfig;
	uint8                                         Pad_214[0x4];
	TMulticastInlineDelegate<void()>              MusicLoopedEvent;
	uint8                                         Pad_228[0x8];
	class UMusicAssetBase*                        LoadedMusicAsset;
	uint8                                         Pad_238[0x10];
	class UMusicHandle*                           MusicHandle;
	uint8                                         Pad_250[0x250];
	TArray<class UMusicalEventRouterComponentBase*> eventRouters;
	float                                         CurrentTempo;
	class FName                                   CurrentSection;

public:
	int32 FindTextEvent(const class FString& MarkerText, const class FString& midiTrackName);
	int32 GetBar(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	int32 GetBeat(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	float GetBeatSpan(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	class FName GetCurrentSection();
	float GetCurrentTempo();
	int32 GetLengthInTicks();
	float GetMeasureSpan(EMusicTimebase inTimebas, EMusicTimeStart InTimeStart);
	class UMusicHandle* GetMusicHandle();
	struct FSongPos GetSongPos(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	int32 GetTick(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	void RegisterMusicalEventRouter(class UMusicalEventRouterComponentBase* router);
	void Seek(float positionMs);
	void SeekToTick(int32 seekTick);
	void SetAllTracksMute(bool On);
	bool SetLoopViaStartEndBar(int32 loopStartBar, int32 loopEndBar, int32 Count);
	bool SetLoopViaStartEndTick(int32 loopStartTick, int32 loopEndTick, int32 Count);
	void SetMaintainPitch(bool maintainPitch);
	void SetSpeed(float Speed);
	void SetSpeedToAchieveTempo(float BPM, bool maintainPitch);
	void SetTrackDb(const class FString& trackName, float db, float Seconds);
	void SetTrackGain(const class FString& trackName, float trackGain, float Seconds);
	void SetTrackMute(const struct FTrackChannelSpecifier& trackInfo, bool On);
	void SetTransposition(int32 Semitones);
	void UnregisterMusicalEventRouter(class UMusicalEventRouterComponentBase* router);

	struct FSongPos CalculateSongPosAtMs(float ms) const;
	struct FSongPos CalculateSongPosAtTick(float inTick) const;
	float GetSpeed() const;
	float GetTempoAtTick(int32 atTick) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicPlayerComponentBase">();
	}
	static class UMusicPlayerComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicPlayerComponentBase>();
	}
};
static_assert(alignof(UMusicPlayerComponentBase) == 0x000008, "Wrong alignment on UMusicPlayerComponentBase");
static_assert(sizeof(UMusicPlayerComponentBase) == 0x0004B8, "Wrong size on UMusicPlayerComponentBase");
static_assert(offsetof(UMusicPlayerComponentBase, Loop) == 0x0001E8, "Member 'UMusicPlayerComponentBase::Loop' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, speedConfig) == 0x0001EC, "Member 'UMusicPlayerComponentBase::speedConfig' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, transpositionSemitones) == 0x0001F8, "Member 'UMusicPlayerComponentBase::transpositionSemitones' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, syncConfig) == 0x0001FC, "Member 'UMusicPlayerComponentBase::syncConfig' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, MusicLoopedEvent) == 0x000218, "Member 'UMusicPlayerComponentBase::MusicLoopedEvent' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, LoadedMusicAsset) == 0x000230, "Member 'UMusicPlayerComponentBase::LoadedMusicAsset' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, MusicHandle) == 0x000248, "Member 'UMusicPlayerComponentBase::MusicHandle' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, eventRouters) == 0x0004A0, "Member 'UMusicPlayerComponentBase::eventRouters' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, CurrentTempo) == 0x0004B0, "Member 'UMusicPlayerComponentBase::CurrentTempo' has a wrong offset!");
static_assert(offsetof(UMusicPlayerComponentBase, CurrentSection) == 0x0004B4, "Member 'UMusicPlayerComponentBase::CurrentSection' has a wrong offset!");

class UMidiMusicPlayerComponent final : public UMusicPlayerComponentBase
{
public:
	TSoftObjectPtr<class UMidiMusicAsset>         MusicAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiMusicPlayerComponent">();
	}
	static class UMidiMusicPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiMusicPlayerComponent>();
	}
};
static_assert(alignof(UMidiMusicPlayerComponent) == 0x000008, "Wrong alignment on UMidiMusicPlayerComponent");
static_assert(sizeof(UMidiMusicPlayerComponent) == 0x0004E0, "Wrong size on UMidiMusicPlayerComponent");
static_assert(offsetof(UMidiMusicPlayerComponent, MusicAsset) == 0x0004B8, "Member 'UMidiMusicPlayerComponent::MusicAsset' has a wrong offset!");

class UMoggMusicPlayerComponent final : public UMusicPlayerComponentBase
{
public:
	TSoftObjectPtr<class UMoggMusicAsset>         MusicAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MoggMusicPlayerComponent">();
	}
	static class UMoggMusicPlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMoggMusicPlayerComponent>();
	}
};
static_assert(alignof(UMoggMusicPlayerComponent) == 0x000008, "Wrong alignment on UMoggMusicPlayerComponent");
static_assert(sizeof(UMoggMusicPlayerComponent) == 0x0004E0, "Wrong size on UMoggMusicPlayerComponent");
static_assert(offsetof(UMoggMusicPlayerComponent, MusicAsset) == 0x0004B8, "Member 'UMoggMusicPlayerComponent::MusicAsset' has a wrong offset!");

class UMusicalEventRouterComponentBase : public UActorComponent
{
public:
	bool                                          oneShot;
	uint8                                         Pad_A1[0x7];
	TArray<TWeakObjectPtr<class UMusicHandle>>    handleAttachments;
	TArray<class UMusicPlayerComponentBase*>      clipAttachmnents;

public:
	bool AttachToMusicHandle(class UMusicHandle* Handle);
	void DetachFromAllMusicHandles();
	bool DetachFromMusicHandle(class UMusicHandle* Handle);
	bool IsAttached();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicalEventRouterComponentBase">();
	}
	static class UMusicalEventRouterComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicalEventRouterComponentBase>();
	}
};
static_assert(alignof(UMusicalEventRouterComponentBase) == 0x000008, "Wrong alignment on UMusicalEventRouterComponentBase");
static_assert(sizeof(UMusicalEventRouterComponentBase) == 0x0000C8, "Wrong size on UMusicalEventRouterComponentBase");
static_assert(offsetof(UMusicalEventRouterComponentBase, oneShot) == 0x0000A0, "Member 'UMusicalEventRouterComponentBase::oneShot' has a wrong offset!");
static_assert(offsetof(UMusicalEventRouterComponentBase, handleAttachments) == 0x0000A8, "Member 'UMusicalEventRouterComponentBase::handleAttachments' has a wrong offset!");
static_assert(offsetof(UMusicalEventRouterComponentBase, clipAttachmnents) == 0x0000B8, "Member 'UMusicalEventRouterComponentBase::clipAttachmnents' has a wrong offset!");

class UCursorBasedMusicalEventRouterComponentBase : public UMusicalEventRouterComponentBase
{
public:
	float                                         lookAheadMs;
	int32                                         lookAheadTicks;
	uint8                                         Pad_D0[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CursorBasedMusicalEventRouterComponentBase">();
	}
	static class UCursorBasedMusicalEventRouterComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCursorBasedMusicalEventRouterComponentBase>();
	}
};
static_assert(alignof(UCursorBasedMusicalEventRouterComponentBase) == 0x000008, "Wrong alignment on UCursorBasedMusicalEventRouterComponentBase");
static_assert(sizeof(UCursorBasedMusicalEventRouterComponentBase) == 0x000128, "Wrong size on UCursorBasedMusicalEventRouterComponentBase");
static_assert(offsetof(UCursorBasedMusicalEventRouterComponentBase, lookAheadMs) == 0x0000C8, "Member 'UCursorBasedMusicalEventRouterComponentBase::lookAheadMs' has a wrong offset!");
static_assert(offsetof(UCursorBasedMusicalEventRouterComponentBase, lookAheadTicks) == 0x0000CC, "Member 'UCursorBasedMusicalEventRouterComponentBase::lookAheadTicks' has a wrong offset!");

class UMidiTextEventRouterComponet final : public UCursorBasedMusicalEventRouterComponentBase
{
public:
	class FString                                 midiTrackName;
	class FString                                 specificText;
	bool                                          ignorePrerollMsgs;
	uint8                                         Pad_149[0x7];
	TMulticastInlineDelegate<void(const class FString& trackName, int32 Tick, const class FString& Text, bool isPreroll)> listeners;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiTextEventRouterComponet">();
	}
	static class UMidiTextEventRouterComponet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiTextEventRouterComponet>();
	}
};
static_assert(alignof(UMidiTextEventRouterComponet) == 0x000008, "Wrong alignment on UMidiTextEventRouterComponet");
static_assert(sizeof(UMidiTextEventRouterComponet) == 0x000160, "Wrong size on UMidiTextEventRouterComponet");
static_assert(offsetof(UMidiTextEventRouterComponet, midiTrackName) == 0x000128, "Member 'UMidiTextEventRouterComponet::midiTrackName' has a wrong offset!");
static_assert(offsetof(UMidiTextEventRouterComponet, specificText) == 0x000138, "Member 'UMidiTextEventRouterComponet::specificText' has a wrong offset!");
static_assert(offsetof(UMidiTextEventRouterComponet, ignorePrerollMsgs) == 0x000148, "Member 'UMidiTextEventRouterComponet::ignorePrerollMsgs' has a wrong offset!");
static_assert(offsetof(UMidiTextEventRouterComponet, listeners) == 0x000150, "Member 'UMidiTextEventRouterComponet::listeners' has a wrong offset!");

class UMidiNoteEventRouterComponent final : public UCursorBasedMusicalEventRouterComponentBase
{
public:
	class FString                                 midiTrackName;
	int32                                         midiChannel;
	int32                                         minMidiNoteNum;
	int32                                         maxMidiNoteNum;
	int32                                         minVelocity;
	int32                                         MaxVelocity;
	bool                                          DontFilterNoteOffs;
	bool                                          ignorePrerollMsgs;
	uint8                                         Pad_14E[0x2];
	TMulticastInlineDelegate<void(const class FString& trackName, int32 Tick, int32 midiChannel, int32 noteNum, int32 Velocity, bool isNoteOff, bool isPreroll)> listeners;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MidiNoteEventRouterComponent">();
	}
	static class UMidiNoteEventRouterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMidiNoteEventRouterComponent>();
	}
};
static_assert(alignof(UMidiNoteEventRouterComponent) == 0x000008, "Wrong alignment on UMidiNoteEventRouterComponent");
static_assert(sizeof(UMidiNoteEventRouterComponent) == 0x000160, "Wrong size on UMidiNoteEventRouterComponent");
static_assert(offsetof(UMidiNoteEventRouterComponent, midiTrackName) == 0x000128, "Member 'UMidiNoteEventRouterComponent::midiTrackName' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, midiChannel) == 0x000138, "Member 'UMidiNoteEventRouterComponent::midiChannel' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, minMidiNoteNum) == 0x00013C, "Member 'UMidiNoteEventRouterComponent::minMidiNoteNum' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, maxMidiNoteNum) == 0x000140, "Member 'UMidiNoteEventRouterComponent::maxMidiNoteNum' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, minVelocity) == 0x000144, "Member 'UMidiNoteEventRouterComponent::minVelocity' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, MaxVelocity) == 0x000148, "Member 'UMidiNoteEventRouterComponent::MaxVelocity' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, DontFilterNoteOffs) == 0x00014C, "Member 'UMidiNoteEventRouterComponent::DontFilterNoteOffs' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, ignorePrerollMsgs) == 0x00014D, "Member 'UMidiNoteEventRouterComponent::ignorePrerollMsgs' has a wrong offset!");
static_assert(offsetof(UMidiNoteEventRouterComponent, listeners) == 0x000150, "Member 'UMidiNoteEventRouterComponent::listeners' has a wrong offset!");

class USchedulerBasedMusicalEventRouterComponentBase : public UMusicalEventRouterComponentBase
{
public:
	EHoldOffUnits                                 holdOffUnits;
	uint8                                         Pad_C9[0x3];
	float                                         holdOffCount;
	uint8                                         Pad_D0[0x20];

public:
	float SecsUntilNextFire();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SchedulerBasedMusicalEventRouterComponentBase">();
	}
	static class USchedulerBasedMusicalEventRouterComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USchedulerBasedMusicalEventRouterComponentBase>();
	}
};
static_assert(alignof(USchedulerBasedMusicalEventRouterComponentBase) == 0x000008, "Wrong alignment on USchedulerBasedMusicalEventRouterComponentBase");
static_assert(sizeof(USchedulerBasedMusicalEventRouterComponentBase) == 0x0000F0, "Wrong size on USchedulerBasedMusicalEventRouterComponentBase");
static_assert(offsetof(USchedulerBasedMusicalEventRouterComponentBase, holdOffUnits) == 0x0000C8, "Member 'USchedulerBasedMusicalEventRouterComponentBase::holdOffUnits' has a wrong offset!");
static_assert(offsetof(USchedulerBasedMusicalEventRouterComponentBase, holdOffCount) == 0x0000CC, "Member 'USchedulerBasedMusicalEventRouterComponentBase::holdOffCount' has a wrong offset!");

class UMusicalGridEventRouterComponent final : public USchedulerBasedMusicalEventRouterComponentBase
{
public:
	struct FMusicalTimeSpan                       span;
	EMusicalUnit                                  musicalUnits;
	uint8                                         Pad_101[0x3];
	int32                                         Subdivision;
	int32                                         unitCount;
	int32                                         Measure;
	int32                                         Beat;
	int32                                         Tick;
	TMulticastInlineDelegate<void()>              listeners;

public:
	void OnTriggered();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicalGridEventRouterComponent">();
	}
	static class UMusicalGridEventRouterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicalGridEventRouterComponent>();
	}
};
static_assert(alignof(UMusicalGridEventRouterComponent) == 0x000008, "Wrong alignment on UMusicalGridEventRouterComponent");
static_assert(sizeof(UMusicalGridEventRouterComponent) == 0x000128, "Wrong size on UMusicalGridEventRouterComponent");
static_assert(offsetof(UMusicalGridEventRouterComponent, span) == 0x0000F0, "Member 'UMusicalGridEventRouterComponent::span' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, musicalUnits) == 0x000100, "Member 'UMusicalGridEventRouterComponent::musicalUnits' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, Subdivision) == 0x000104, "Member 'UMusicalGridEventRouterComponent::Subdivision' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, unitCount) == 0x000108, "Member 'UMusicalGridEventRouterComponent::unitCount' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, Measure) == 0x00010C, "Member 'UMusicalGridEventRouterComponent::Measure' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, Beat) == 0x000110, "Member 'UMusicalGridEventRouterComponent::Beat' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, Tick) == 0x000114, "Member 'UMusicalGridEventRouterComponent::Tick' has a wrong offset!");
static_assert(offsetof(UMusicalGridEventRouterComponent, listeners) == 0x000118, "Member 'UMusicalGridEventRouterComponent::listeners' has a wrong offset!");

class UMusicalTimespanSequencerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x18];
	class UOldMusicClockComponent*                mClock;
	uint8                                         Pad_C0[0x28];

public:
	void _ClockIsDying();
	bool Cancel();
	float GetProgress();
	void OnCanceled();
	void OnSeeked(struct FMusicalTimeSpan* nextTrigger);
	void OnTriggered(struct FMusicalTimeSpan* nextTrigger);
	bool Running();
	void SetMusicClock(class UOldMusicClockComponent* clock);
	void StartOnNextBeat(EMTSResult* Result, int32 waitMinimumTicks, float waitMinimumMs);
	void StartOnNextDownBeat(EMTSResult* Result, int32 waitMinimumTicks, float waitMinimumMs);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicalTimespanSequencerComponent">();
	}
	static class UMusicalTimespanSequencerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicalTimespanSequencerComponent>();
	}
};
static_assert(alignof(UMusicalTimespanSequencerComponent) == 0x000008, "Wrong alignment on UMusicalTimespanSequencerComponent");
static_assert(sizeof(UMusicalTimespanSequencerComponent) == 0x0000E8, "Wrong size on UMusicalTimespanSequencerComponent");
static_assert(offsetof(UMusicalTimespanSequencerComponent, mClock) == 0x0000B8, "Member 'UMusicalTimespanSequencerComponent::mClock' has a wrong offset!");

class UMusicEmitterComponent final : public USynthComponent
{
public:
	uint8                                         Pad_920[0x10];
	bool                                          DriveSubmixDspTempo;
	uint8                                         Pad_931[0x3];
	int32                                         mBar;
	int32                                         mBeat;
	uint8                                         Pad_93C[0x4];
	class FString                                 mSection;
	uint8                                         Pad_950[0x188];
	class UMusicHandle*                           TimeAuthority;
	class UMusicHandle*                           FallbackTimeAuthority;
	class UMusicHandle*                           CurrentPositionProvider;
	uint8                                         Pad_AF0[0x20];

public:
	static class UMusicEmitterComponent* GetWorldsDefaultMusicEmitter(class UObject* worldContextObj);

	void ContinueAllSounds();
	int32 GetBar();
	int32 GetBeat();
	bool GetParameter(class FName Parameter, float* OutVal);
	void InsertDynamicSourceEffect(class USoundEffectSourcePreset* EffectPreset);
	void KillAllSounds();
	void PauseAllSounds();
	class UInstrumentHandle* PlayInstrument(const struct FPlayInstrumentArgs& args);
	class UMusicHandle* PlayMusic(const struct FPlayMusicArgs& args);
	void RemoveDynamicSourceEffect(class USoundEffectSourcePreset* EffectPreset);
	void SetParameter(class FName Parameter, float Value);
	void StopAllSounds();

	class FString GetSection() const;
	class UMusicHandle* GetTimeAuthorityHandle() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicEmitterComponent">();
	}
	static class UMusicEmitterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicEmitterComponent>();
	}
};
static_assert(alignof(UMusicEmitterComponent) == 0x000010, "Wrong alignment on UMusicEmitterComponent");
static_assert(sizeof(UMusicEmitterComponent) == 0x000B10, "Wrong size on UMusicEmitterComponent");
static_assert(offsetof(UMusicEmitterComponent, DriveSubmixDspTempo) == 0x000930, "Member 'UMusicEmitterComponent::DriveSubmixDspTempo' has a wrong offset!");
static_assert(offsetof(UMusicEmitterComponent, mBar) == 0x000934, "Member 'UMusicEmitterComponent::mBar' has a wrong offset!");
static_assert(offsetof(UMusicEmitterComponent, mBeat) == 0x000938, "Member 'UMusicEmitterComponent::mBeat' has a wrong offset!");
static_assert(offsetof(UMusicEmitterComponent, mSection) == 0x000940, "Member 'UMusicEmitterComponent::mSection' has a wrong offset!");
static_assert(offsetof(UMusicEmitterComponent, TimeAuthority) == 0x000AD8, "Member 'UMusicEmitterComponent::TimeAuthority' has a wrong offset!");
static_assert(offsetof(UMusicEmitterComponent, FallbackTimeAuthority) == 0x000AE0, "Member 'UMusicEmitterComponent::FallbackTimeAuthority' has a wrong offset!");
static_assert(offsetof(UMusicEmitterComponent, CurrentPositionProvider) == 0x000AE8, "Member 'UMusicEmitterComponent::CurrentPositionProvider' has a wrong offset!");

class UMusicTimelinePlayerComponent final : public UMusicPlayerComponentBase
{
public:
	float                                         TimelineNativeTempo;
	int32                                         Measures;
	uint8                                         Pad_4C0[0x8];

public:
	void GetLengthTimeSigAndNativeTempo(int32* numMeasures, float* BPM, int32* Num, int32* denom);
	void GetTimeSignature(int32* Numerator, int32* Denominator);
	void SetLength(int32 newMeasures);
	void SetLengthTimeSigAndNativeTempo(int32 newMeasures, float BPM, int32 Num, int32 denom);
	void SetTimelineNativeTempo(float newTempo, bool ApplyNow);
	void SetTimelineNativeTempoImmediate(float newTempo);
	void SetTimeSignature(int32 Numerator, int32 Denominator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicTimelinePlayerComponent">();
	}
	static class UMusicTimelinePlayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicTimelinePlayerComponent>();
	}
};
static_assert(alignof(UMusicTimelinePlayerComponent) == 0x000008, "Wrong alignment on UMusicTimelinePlayerComponent");
static_assert(sizeof(UMusicTimelinePlayerComponent) == 0x0004C8, "Wrong size on UMusicTimelinePlayerComponent");
static_assert(offsetof(UMusicTimelinePlayerComponent, TimelineNativeTempo) == 0x0004B8, "Member 'UMusicTimelinePlayerComponent::TimelineNativeTempo' has a wrong offset!");
static_assert(offsetof(UMusicTimelinePlayerComponent, Measures) == 0x0004BC, "Member 'UMusicTimelinePlayerComponent::Measures' has a wrong offset!");

class UOldMusicClockComponent final : public UActorComponent
{
public:
	float                                         Tempo;
	int32                                         TimeSignatureNum;
	int32                                         TimeSignatureDenom;
	float                                         CurrentBeatDurationSec;
	float                                         CurrentMeasureDurationSec;
	bool                                          RunPastMusicEnd;
	EMusicTimebase                                Timebase;
	uint8                                         Pad_B6[0x2];
	class UMusicPlayerComponentBase*              MusicPlayer;
	TMulticastInlineDelegate<void(int32 beatNumber, int32 beatInBar)> BeatEvent;
	TMulticastInlineDelegate<void(int32 measureNumber)> MeasureEvent;
	struct FSongPos                               mCurrentSongPos;
	uint8                                         Pad_12C[0x34];
	class UMusicEmitterComponent*                 mWatchEmitter;
	class UMusicHandle*                           mMusicHandle;

public:
	static class UOldMusicClockComponent* CreateMusicClock(class UObject* WorldContextObject, class UMusicEmitterComponent* Emitter, EHarmonixHandleValidity* Result, bool Start_0);
	static void MusicalBeatDelay(class UObject* WorldContextObject, float beats, EMusicTimebase inTimeBase, class UMusicHandle* MusicHandle, const struct FLatentActionInfo& LatentInfo);
	static void MusicalTickDelay(class UObject* WorldContextObject, int32 ticks, EMusicTimebase inTimeBase, class UMusicHandle* MusicHandle, const struct FLatentActionInfo& LatentInfo);

	void Continue();
	class UMusicHandle* GetMusicHandle();
	void Pause();
	bool SetMusicHandle(class UMusicHandle* sh);
	class UMusicalGridEvent* SpawnMusicalGridEvent(EOldScheduleResult* outResult, const struct FMusicalTimeSpan& gridConfig, float holdOffMs, int32 holdOffTicks, bool repeating, TSubclassOf<class UMusicalGridEvent> EventType, class UObject* Parent, class FName Name_0);
	void Start();
	void Stop();
	void WatchEmitter(class UMusicEmitterComponent* Emitter, bool Start);

	int32 GetBeat() const;
	int32 GetBeatInMeasure() const;
	float GetCurentMsPerPulse() const;
	float GetCurrentMsPerBeat() const;
	float GetCurrentMsPerMeasure() const;
	float GetCurrentMsPerTick() const;
	int32 GetCurrentTicksPerMeasure() const;
	int32 GetCurrentTicksPerPulse() const;
	float GetDeltaBeat() const;
	float GetDeltaMeasure() const;
	float GetDeltaTick() const;
	float GetFractionalBeat() const;
	float GetFractionalBeatInMeasure() const;
	float GetFractionalMeasure() const;
	float GetFractionalTick() const;
	float GetFractionalTickInBeat() const;
	float GetFractionalTickInMeasure() const;
	int32 GetMeasure() const;
	float GetSeconds() const;
	const struct FSongPos GetSongPos() const;
	EOldMusicClockState GetState() const;
	int32 GetTick() const;
	int32 GetTickInBeat() const;
	int32 GetTickInMeasure() const;
	float GetTicksPerMeasure() const;
	float GetTicksPerPulse() const;
	float MeasureSpanProgress(const struct FMusicalTimeSpan& span) const;
	float MeasureTimeSinceSpan(const struct FMusicalTimeSpan& span) const;
	float MeasureTimeUntilSpan(const struct FMusicalTimeSpan& span) const;
	float MsToFractionalTick(float ms) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OldMusicClockComponent">();
	}
	static class UOldMusicClockComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOldMusicClockComponent>();
	}
};
static_assert(alignof(UOldMusicClockComponent) == 0x000008, "Wrong alignment on UOldMusicClockComponent");
static_assert(sizeof(UOldMusicClockComponent) == 0x000170, "Wrong size on UOldMusicClockComponent");
static_assert(offsetof(UOldMusicClockComponent, Tempo) == 0x0000A0, "Member 'UOldMusicClockComponent::Tempo' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, TimeSignatureNum) == 0x0000A4, "Member 'UOldMusicClockComponent::TimeSignatureNum' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, TimeSignatureDenom) == 0x0000A8, "Member 'UOldMusicClockComponent::TimeSignatureDenom' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, CurrentBeatDurationSec) == 0x0000AC, "Member 'UOldMusicClockComponent::CurrentBeatDurationSec' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, CurrentMeasureDurationSec) == 0x0000B0, "Member 'UOldMusicClockComponent::CurrentMeasureDurationSec' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, RunPastMusicEnd) == 0x0000B4, "Member 'UOldMusicClockComponent::RunPastMusicEnd' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, Timebase) == 0x0000B5, "Member 'UOldMusicClockComponent::Timebase' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, MusicPlayer) == 0x0000B8, "Member 'UOldMusicClockComponent::MusicPlayer' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, BeatEvent) == 0x0000C0, "Member 'UOldMusicClockComponent::BeatEvent' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, MeasureEvent) == 0x0000D0, "Member 'UOldMusicClockComponent::MeasureEvent' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, mCurrentSongPos) == 0x0000E0, "Member 'UOldMusicClockComponent::mCurrentSongPos' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, mWatchEmitter) == 0x000160, "Member 'UOldMusicClockComponent::mWatchEmitter' has a wrong offset!");
static_assert(offsetof(UOldMusicClockComponent, mMusicHandle) == 0x000168, "Member 'UOldMusicClockComponent::mMusicHandle' has a wrong offset!");

class UStepSequencerComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track)> EventOnAnyGridSquareInTrackChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track, class UMidiMusicTimeSlot* timeSlot)> EventOnGridSquareInTrackChanged;
	TMulticastInlineDelegate<void(int32 numTracks)> EventOnNumTracksChanged;
	TMulticastInlineDelegate<void(int32 numSteps)> EventOnNumStepsChanged;
	TMulticastInlineDelegate<void(int32 currentPage)> EventOnPageChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track)> EventOnTrackChanged;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track)> EventOnTrackCreated;
	TMulticastInlineDelegate<void(class UStepSequencerTrack* track)> EventOnTrackRemoved;
	bool                                          bMonophonic;
	uint8                                         Pad_121[0x7];
	TArray<class UStepSequencerTrack*>            Tracks;
	float                                         BPM;
	int32                                         LengthSteps;
	int32                                         MaxLengthSteps;
	float                                         StepLengthBeats;
	uint8                                         Pad_148[0x8];
	class UMidiMusicPlayerComponent*              MyMidiMusicPlayerComponent;
	class UMidiMusicAsset*                        GeneratedMusicAsset;
	uint8                                         Pad_160[0x10];
	struct FSequencerSave                         SequencerSave;

public:
	void AppendSteps(int32 numSteps);
	void ApplySaveToTrack(class UStepSequencerTrack* track);
	void ApplyTemplate(const struct FSequencerSave& Template);
	class UStepSequencerTrack* CreateNewTrack(const struct FTrackArgs& args);
	class UMidiMusicAsset* MakeNewMidiSongFromTracks();
	void OnAnyGridSquareStateChanged(class UStepSequencerTrack* track);
	void OnGridSquareStateChanged(class UStepSequencerTrack* track, class UMidiMusicTimeSlot* timeSlot);
	void OnRep_SequencerSave();
	void PopSteps(int32 numSteps);
	void RemoveAllTracks();
	bool RemoveTrack(class UStepSequencerTrack* track);
	bool RemoveTrackAt(int32 Index_0);
	void SetBeatLength(float BeatLength);
	void SetCurrentPage(int32 inCurrentPage);
	void SetMonophonic(bool bNewMonophonic);
	void SetNumberPages(int32 inPages);
	void UpdateMidiSongOnMidiMusicPlayer(class UMidiMusicPlayerComponent* InMidiMusicPlayerComponent, bool ForceRefresh);

	class UStepSequencerTrack* FindTrackAt(int32 Index_0) const;
	int32 GetCurrentPage() const;
	int32 GetLengthTicks() const;
	int32 GetMaxNumSteps() const;
	int32 GetNumSteps() const;
	int32 GetNumTracks() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StepSequencerComponent">();
	}
	static class UStepSequencerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepSequencerComponent>();
	}
};
static_assert(alignof(UStepSequencerComponent) == 0x000008, "Wrong alignment on UStepSequencerComponent");
static_assert(sizeof(UStepSequencerComponent) == 0x000180, "Wrong size on UStepSequencerComponent");
static_assert(offsetof(UStepSequencerComponent, EventOnAnyGridSquareInTrackChanged) == 0x0000A0, "Member 'UStepSequencerComponent::EventOnAnyGridSquareInTrackChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnGridSquareInTrackChanged) == 0x0000B0, "Member 'UStepSequencerComponent::EventOnGridSquareInTrackChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnNumTracksChanged) == 0x0000C0, "Member 'UStepSequencerComponent::EventOnNumTracksChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnNumStepsChanged) == 0x0000D0, "Member 'UStepSequencerComponent::EventOnNumStepsChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnPageChanged) == 0x0000E0, "Member 'UStepSequencerComponent::EventOnPageChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnTrackChanged) == 0x0000F0, "Member 'UStepSequencerComponent::EventOnTrackChanged' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnTrackCreated) == 0x000100, "Member 'UStepSequencerComponent::EventOnTrackCreated' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, EventOnTrackRemoved) == 0x000110, "Member 'UStepSequencerComponent::EventOnTrackRemoved' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, bMonophonic) == 0x000120, "Member 'UStepSequencerComponent::bMonophonic' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, Tracks) == 0x000128, "Member 'UStepSequencerComponent::Tracks' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, BPM) == 0x000138, "Member 'UStepSequencerComponent::BPM' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, LengthSteps) == 0x00013C, "Member 'UStepSequencerComponent::LengthSteps' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, MaxLengthSteps) == 0x000140, "Member 'UStepSequencerComponent::MaxLengthSteps' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, StepLengthBeats) == 0x000144, "Member 'UStepSequencerComponent::StepLengthBeats' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, MyMidiMusicPlayerComponent) == 0x000150, "Member 'UStepSequencerComponent::MyMidiMusicPlayerComponent' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, GeneratedMusicAsset) == 0x000158, "Member 'UStepSequencerComponent::GeneratedMusicAsset' has a wrong offset!");
static_assert(offsetof(UStepSequencerComponent, SequencerSave) == 0x000170, "Member 'UStepSequencerComponent::SequencerSave' has a wrong offset!");

class UHarmonixAnalyzerSourceEffectPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0xD8];
	struct FHarmonixAnalyzerEffectSettings        Settings;

public:
	static class UHarmonixAnalyzerSourceEffectPreset* CreateHarmonixAnalyzerInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixAnalyzerEffectSettings& InSettings);
	static void GetHarmonixAnalyzerResults(class FName AnalyzerName, struct FHarmonixAnalyzerEffectResults* Result, bool ResetMonoPeakDb);

	void GetResults(struct FHarmonixAnalyzerEffectResults* Result, bool ResetMonoPeakDb);
	void HardResetVUMeter();
	void ResetDynamicRangeMeter();
	void ResetDynamicRangePeaks();
	void SetBandFilterBankBandEndHz(int32 bandIndex, float hz);
	void SetBandFilterBankBandOutputSettings(int32 bandIndex, const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetBandFilterBankBandStartHz(int32 bandIndex, float hz);
	void SetBandFilterBankEnabled(bool E);
	void SetBandFilterBankFallMs(int32 bandIndex, float ms);
	void SetBandFilterBankMaxDB(int32 bandIndex, float dbMax);
	void SetBandFilterBankRangeDB(int32 bandIndex, float dbRange);
	void SetBandFilterBankRiseMs(int32 bandIndex, float ms);
	void SetDynamicRangeMeterAlphas(float highRising, float highFalling, float lowRising, float lowFalling);
	void SetDynamicRangeMeterEnabled(bool E);
	void SetDynamicRangeMeterFilter(bool Enable, float Cutoff);
	void SetDynamicRangeMeterRmsWindow(int32 Frames);
	void SetEnabled(bool Enabled);
	void SetFFTEnabled(bool E);
	void SetFFTEqualLoudnessWeights(bool On);
	void SetFFTFallMs(float ms);
	void SetFFTLength(int32 Num);
	void SetFFTMaxDB(float dbMax);
	void SetFFTMaxFrequencyHz(float hz);
	void SetFFTMelScaleBinning(bool On);
	void SetFFTMinFrequencyHz(float hz);
	void SetFFTNumResultBins(int32 Num);
	void SetFFTOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetFFTRangeDB(float dbRange);
	void SetFFTRiseMs(float ms);
	void SetNumBandFilterBankBands(int32 Bands);
	void SetSemitoneFilterBankEnabled(bool E);
	void SetSemitoneFilterBankMinMidiNote(int32 min_0);
	void SetSemitoneFilterBankNumMidiNotes(int32 Num);
	void SetSemitoneFilterBankOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetSettings(const struct FHarmonixAnalyzerEffectSettings& InSettings);
	void SetVUMeterEnabled(bool E);
	void SetVUMeterFallMs(float ms);
	void SetVUMeterMaxDB(float dbMax);
	void SetVUMeterRangeDB(float dbRange);
	void SetVUMeterRiseMs(float ms);
	void SetVUOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetWaveformEnabled(bool E);
	void SetWaveformNumBinsHeld(int32 numBins);
	void SetWaveformNumBinsPerSecond(int32 numBinsPerSecond);
	void SetWaveformOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetWaveformSmoothingDistance(int32 SmoothingDistance);
	void SetWaveformSmoothingFactor(float smoothingFactor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixAnalyzerSourceEffectPreset">();
	}
	static class UHarmonixAnalyzerSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixAnalyzerSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixAnalyzerSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixAnalyzerSourceEffectPreset");
static_assert(sizeof(UHarmonixAnalyzerSourceEffectPreset) == 0x0001F0, "Wrong size on UHarmonixAnalyzerSourceEffectPreset");
static_assert(offsetof(UHarmonixAnalyzerSourceEffectPreset, Settings) == 0x000140, "Member 'UHarmonixAnalyzerSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixSubmixEffectBase : public USoundEffectSubmixPreset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixSubmixEffectBase">();
	}
	static class UHarmonixSubmixEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixSubmixEffectBase>();
	}
};
static_assert(alignof(UHarmonixSubmixEffectBase) == 0x000008, "Wrong alignment on UHarmonixSubmixEffectBase");
static_assert(sizeof(UHarmonixSubmixEffectBase) == 0x000068, "Wrong size on UHarmonixSubmixEffectBase");

class UHarmonixAnalyzerSubmixEffectPreset final : public UHarmonixSubmixEffectBase
{
public:
	uint8                                         Pad_68[0xD8];
	struct FHarmonixAnalyzerEffectSettings        Settings;

public:
	static class UHarmonixAnalyzerSubmixEffectPreset* CreateHarmonixAnalyzerInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixAnalyzerEffectSettings& InSettings);

	void GetResults(struct FHarmonixAnalyzerEffectResults* Result, bool ResetMonoPeakDb);
	void HardResetVUMeter();
	void ResetDynamicRangeMeter();
	void ResetDynamicRangePeaks();
	void SetBandFilterBankBandEndHz(int32 bandIndex, float hz);
	void SetBandFilterBankBandOutputSettings(int32 bandIndex, const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetBandFilterBankBandStartHz(int32 bandIndex, float hz);
	void SetBandFilterBankEnabled(bool E);
	void SetBandFilterBankFallMs(int32 bandIndex, float ms);
	void SetBandFilterBankMaxDB(int32 bandIndex, float dbMax);
	void SetBandFilterBankRangeDB(int32 bandIndex, float dbRange);
	void SetBandFilterBankRiseMs(int32 bandIndex, float ms);
	void SetDynamicRangeMeterAlphas(float highRising, float highFalling, float lowRising, float lowFalling);
	void SetDynamicRangeMeterEnabled(bool E);
	void SetDynamicRangeMeterFilter(bool Enable, float Cutoff);
	void SetDynamicRangeMeterRmsWindow(int32 Frames);
	void SetEnabled(bool Enabled);
	void SetFFTEnabled(bool E);
	void SetFFTEqualLoudnessWeights(bool On);
	void SetFFTFallMs(float ms);
	void SetFFTLength(int32 Num);
	void SetFFTMaxDB(float dbMax);
	void SetFFTMaxFrequencyHz(float hz);
	void SetFFTMelScaleBinning(bool On);
	void SetFFTMinFrequencyHz(float hz);
	void SetFFTNumResultBins(int32 Num);
	void SetFFTOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetFFTRangeDB(float dbRange);
	void SetFFTRiseMs(float ms);
	void SetNumBandFilterBankBands(int32 Bands);
	void SetSemitoneFilterBankEnabled(bool E);
	void SetSemitoneFilterBankMinMidiNote(int32 min_0);
	void SetSemitoneFilterBankNumMidiNotes(int32 Num);
	void SetSemitoneFilterBankOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetSettings(const struct FHarmonixAnalyzerEffectSettings& InSettings);
	void SetVUMeterEnabled(bool E);
	void SetVUMeterFallMs(float ms);
	void SetVUMeterMaxDB(float dbMax);
	void SetVUMeterRangeDB(float dbRange);
	void SetVUMeterRiseMs(float ms);
	void SetVUOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetWaveformEnabled(bool E);
	void SetWaveformNumBinsHeld(int32 numBins);
	void SetWaveformNumBinsPerSecond(int32 numBinsPerSecond);
	void SetWaveformOutputSettings(const struct FHarmonixAnalyzerOutputSettings& outSsettings);
	void SetWaveformSmoothingDistance(int32 SmoothingDistance);
	void SetWaveformSmoothingFactor(float smoothingFactor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixAnalyzerSubmixEffectPreset">();
	}
	static class UHarmonixAnalyzerSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixAnalyzerSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixAnalyzerSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixAnalyzerSubmixEffectPreset");
static_assert(sizeof(UHarmonixAnalyzerSubmixEffectPreset) == 0x0001F0, "Wrong size on UHarmonixAnalyzerSubmixEffectPreset");
static_assert(offsetof(UHarmonixAnalyzerSubmixEffectPreset, Settings) == 0x000140, "Member 'UHarmonixAnalyzerSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixBitCrusherSourceEffectPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x40];
	struct FHarmonixBitCrusherEffectSettings      Settings;

public:
	static class UHarmonixBitCrusherSourceEffectPreset* CreateHarmonixBitCrusherInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixBitCrusherEffectSettings& InSettings);

	void SetCrush(ECrushedBitDepth crushLevel, bool Snap);
	void SetEnabled(bool Enabled);
	void SetInputGain(float inGain, bool Snap);
	void SetOutputGain(float outGain, bool Snap);
	void SetSampleHoldFactor(int32 sampleHoldFactor);
	void SetSettings(const struct FHarmonixBitCrusherEffectSettings& InSettings);
	void SetWet(float wet, bool Snap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixBitCrusherSourceEffectPreset">();
	}
	static class UHarmonixBitCrusherSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixBitCrusherSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixBitCrusherSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixBitCrusherSourceEffectPreset");
static_assert(sizeof(UHarmonixBitCrusherSourceEffectPreset) == 0x0000C0, "Wrong size on UHarmonixBitCrusherSourceEffectPreset");
static_assert(offsetof(UHarmonixBitCrusherSourceEffectPreset, Settings) == 0x0000A8, "Member 'UHarmonixBitCrusherSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixBitCrusherSubmixEffectPreset final : public UHarmonixSubmixEffectBase
{
public:
	uint8                                         Pad_68[0x40];
	struct FHarmonixBitCrusherEffectSettings      Settings;

public:
	static class UHarmonixBitCrusherSubmixEffectPreset* CreateHarmonixBitCrusherInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixBitCrusherEffectSettings& InSettings);

	void SetCrush(ECrushedBitDepth crushLevel, bool Snap);
	void SetEnabled(bool Enabled);
	void SetInputGain(float inGain, bool Snap);
	void SetOutputGain(float outGain, bool Snap);
	void SetSampleHoldFactor(int32 sampleHoldFactor);
	void SetSettings(const struct FHarmonixBitCrusherEffectSettings& InSettings);
	void SetWet(float wet, bool Snap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixBitCrusherSubmixEffectPreset">();
	}
	static class UHarmonixBitCrusherSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixBitCrusherSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixBitCrusherSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixBitCrusherSubmixEffectPreset");
static_assert(sizeof(UHarmonixBitCrusherSubmixEffectPreset) == 0x0000C0, "Wrong size on UHarmonixBitCrusherSubmixEffectPreset");
static_assert(offsetof(UHarmonixBitCrusherSubmixEffectPreset, Settings) == 0x0000A8, "Member 'UHarmonixBitCrusherSubmixEffectPreset::Settings' has a wrong offset!");

class UTempoSyncedSourceEffectPresetBase : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempoSyncedSourceEffectPresetBase">();
	}
	static class UTempoSyncedSourceEffectPresetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTempoSyncedSourceEffectPresetBase>();
	}
};
static_assert(alignof(UTempoSyncedSourceEffectPresetBase) == 0x000008, "Wrong alignment on UTempoSyncedSourceEffectPresetBase");
static_assert(sizeof(UTempoSyncedSourceEffectPresetBase) == 0x000080, "Wrong size on UTempoSyncedSourceEffectPresetBase");

class UHarmonixBufferUtilSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x29];
	struct FHarmonixBufferUtilEffectSettings      Settings;
	uint8                                         Pad_AA[0x6];

public:
	static class UHarmonixBufferUtilSourceEffectPreset* CreateHarmonixBufferUtilInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixBufferUtilEffectSettings& InSettings);

	void SetAttach(bool attach);
	void SetAutomation(int32 A);
	void SetBufSpeed(float Speed);
	void SetDotted(bool Dotted);
	void SetEnabled(bool Enabled);
	void SetEven(bool Even);
	void SetMaxDur(int32 D, bool BeatValChange);
	void SetMinDur(int32 D, bool BeatValChange);
	void SetRepeatP(float P);
	void SetReverseP(float P);
	void SetScratch(float scratch);
	void SetSequence(int32 S);
	void SetSettings(const struct FHarmonixBufferUtilEffectSettings& InSettings);
	void SetShuffleP(float P);
	void SetState(int32 T, int32 Len, bool AutomationTriggeredSet);
	void SetTriplet(bool trip);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixBufferUtilSourceEffectPreset">();
	}
	static class UHarmonixBufferUtilSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixBufferUtilSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixBufferUtilSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixBufferUtilSourceEffectPreset");
static_assert(sizeof(UHarmonixBufferUtilSourceEffectPreset) == 0x0000B0, "Wrong size on UHarmonixBufferUtilSourceEffectPreset");
static_assert(offsetof(UHarmonixBufferUtilSourceEffectPreset, Settings) == 0x0000A9, "Member 'UHarmonixBufferUtilSourceEffectPreset::Settings' has a wrong offset!");

class UTempoSyncedSubmixEffectPresetBase : public UHarmonixSubmixEffectBase
{
public:
	uint8                                         Pad_68[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempoSyncedSubmixEffectPresetBase">();
	}
	static class UTempoSyncedSubmixEffectPresetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTempoSyncedSubmixEffectPresetBase>();
	}
};
static_assert(alignof(UTempoSyncedSubmixEffectPresetBase) == 0x000008, "Wrong alignment on UTempoSyncedSubmixEffectPresetBase");
static_assert(sizeof(UTempoSyncedSubmixEffectPresetBase) == 0x000080, "Wrong size on UTempoSyncedSubmixEffectPresetBase");

class UHarmonixBufferUtilSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x29];
	struct FHarmonixBufferUtilEffectSettings      Settings;
	uint8                                         Pad_AA[0x6];

public:
	static class UHarmonixBufferUtilSubmixEffectPreset* CreateHarmonixBufferUtilInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixBufferUtilEffectSettings& InSettings);

	void SetAttach(bool attach);
	void SetAutomation(int32 A);
	void SetBufSpeed(float Speed);
	void SetDotted(bool Dotted);
	void SetEnabled(bool Enabled);
	void SetEven(bool Even);
	void SetMaxDur(int32 D, bool BeatValChange);
	void SetMinDur(int32 D, bool BeatValChange);
	void SetRepeatP(float P);
	void SetReverseP(float P);
	void SetScratch(float scratch);
	void SetSequence(int32 S);
	void SetSettings(const struct FHarmonixBufferUtilEffectSettings& InSettings);
	void SetShuffleP(float P);
	void SetState(int32 T, int32 Len, bool AutomationTriggeredSet);
	void SetTriplet(bool trip);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixBufferUtilSubmixEffectPreset">();
	}
	static class UHarmonixBufferUtilSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixBufferUtilSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixBufferUtilSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixBufferUtilSubmixEffectPreset");
static_assert(sizeof(UHarmonixBufferUtilSubmixEffectPreset) == 0x0000B0, "Wrong size on UHarmonixBufferUtilSubmixEffectPreset");
static_assert(offsetof(UHarmonixBufferUtilSubmixEffectPreset, Settings) == 0x0000A9, "Member 'UHarmonixBufferUtilSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixDelaySourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x64];
	struct FHarmonixDelayEffectSettings           Settings;

public:
	static class UHarmonixDelaySourceEffectPreset* CreateHarmonixDelayInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixDelayEffectSettings& InSettings);

	void SetDelaySeconds(float Time);
	void SetDryGain(float Gain);
	void SetEnabled(bool Enabled);
	void SetFeedbackGain(float Gain);
	void SetFilterEnabled(bool On);
	void SetFilterFreq(float hz);
	void SetFilterQ(float Q);
	void SetFilterType(EHarmonixDelayFilterType Type);
	void SetLFODepth(float Depth);
	void SetLFOEnabled(bool Enabled);
	void SetLFOFreq(float hz);
	void SetLFOTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetOutputGain(float Gain);
	void SetSettings(const struct FHarmonixDelayEffectSettings& InSettings);
	void SetSpeed(float Speed);
	void SetStereoSpreadLeft(float Spread);
	void SetStereoSpreadRight(float Spread);
	void SetStereoType(EHarmonixDelayStereoType Type);
	void SetTempo(float BPM);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetWetGain(float Gain);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixDelaySourceEffectPreset">();
	}
	static class UHarmonixDelaySourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixDelaySourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixDelaySourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixDelaySourceEffectPreset");
static_assert(sizeof(UHarmonixDelaySourceEffectPreset) == 0x000120, "Wrong size on UHarmonixDelaySourceEffectPreset");
static_assert(offsetof(UHarmonixDelaySourceEffectPreset, Settings) == 0x0000E4, "Member 'UHarmonixDelaySourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixDelaySubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x64];
	struct FHarmonixDelayEffectSettings           Settings;

public:
	static class UHarmonixDelaySubmixEffectPreset* CreateHarmonixDelayInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixDelayEffectSettings& InSettings);

	void SetDelaySeconds(float Time);
	void SetDryGain(float Gain);
	void SetEnabled(bool Enabled);
	void SetFeedbackGain(float Gain);
	void SetFilterEnabled(bool On);
	void SetFilterFreq(float hz);
	void SetFilterQ(float Q);
	void SetFilterType(EHarmonixDelayFilterType Type);
	void SetLFODepth(float Depth);
	void SetLFOEnabled(bool Enabled);
	void SetLFOFreq(float hz);
	void SetLFOTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetOutputGain(float Gain);
	void SetSettings(const struct FHarmonixDelayEffectSettings& InSettings);
	void SetSpeed(float Speed);
	void SetStereoSpreadLeft(float Spread);
	void SetStereoSpreadRight(float Spread);
	void SetStereoType(EHarmonixDelayStereoType Type);
	void SetTempo(float BPM);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetWetGain(float Gain);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixDelaySubmixEffectPreset">();
	}
	static class UHarmonixDelaySubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixDelaySubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixDelaySubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixDelaySubmixEffectPreset");
static_assert(sizeof(UHarmonixDelaySubmixEffectPreset) == 0x000120, "Wrong size on UHarmonixDelaySubmixEffectPreset");
static_assert(offsetof(UHarmonixDelaySubmixEffectPreset, Settings) == 0x0000E4, "Member 'UHarmonixDelaySubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixDistortionSourceEffectPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x88];
	struct FHarmonixDistortionEffectSettings      Settings;

public:
	static class UHarmonixDistortionSourceEffectPreset* CreateHarmonixDistortionInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixDistortionEffectSettings& InSettings);

	void SetDCOffset(float Offset, bool Snap);
	void SetDryGainDb(float GainDb, bool Snap);
	void SetEnabled(bool Enabled);
	void SetInputGainDb(float GainDb, bool Snap);
	void SetMix(float M, bool Snap);
	void SetOutputGainDb(float GainDb, bool Snap);
	void SetOversample(bool Oversample);
	void SetSettings(const struct FHarmonixDistortionEffectSettings& InSettings);
	void SetType(EDistortionType Type);
	void SetupFilter(int32 Index_0, bool pre, const struct FHarmonixDistortionBiquadSettings& filterSettings, int32 filterPasses);
	void SetWetGainDb(float GainDb, bool Snap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixDistortionSourceEffectPreset">();
	}
	static class UHarmonixDistortionSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixDistortionSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixDistortionSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixDistortionSourceEffectPreset");
static_assert(sizeof(UHarmonixDistortionSourceEffectPreset) == 0x000150, "Wrong size on UHarmonixDistortionSourceEffectPreset");
static_assert(offsetof(UHarmonixDistortionSourceEffectPreset, Settings) == 0x0000F0, "Member 'UHarmonixDistortionSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixDistortionSubmixEffectPreset final : public UHarmonixSubmixEffectBase
{
public:
	uint8                                         Pad_68[0x88];
	struct FHarmonixDistortionEffectSettings      Settings;

public:
	static class UHarmonixDistortionSubmixEffectPreset* CreateHarmonixDistortionInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixDistortionEffectSettings& InSettings);

	void SetDCOffset(float Offset, bool Snap);
	void SetDryGainDb(float GainDb, bool Snap);
	void SetEnabled(bool Enabled);
	void SetInputGainDb(float GainDb, bool Snap);
	void SetMix(float M, bool Snap);
	void SetOutputGainDb(float GainDb, bool Snap);
	void SetOversample(bool Oversample);
	void SetSettings(const struct FHarmonixDistortionEffectSettings& InSettings);
	void SetType(EDistortionType Type);
	void SetupFilter(int32 Index_0, bool pre, const struct FHarmonixDistortionBiquadSettings& filterSettings, int32 filterPasses);
	void SetWetGainDb(float GainDb, bool Snap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixDistortionSubmixEffectPreset">();
	}
	static class UHarmonixDistortionSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixDistortionSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixDistortionSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixDistortionSubmixEffectPreset");
static_assert(sizeof(UHarmonixDistortionSubmixEffectPreset) == 0x000150, "Wrong size on UHarmonixDistortionSubmixEffectPreset");
static_assert(offsetof(UHarmonixDistortionSubmixEffectPreset, Settings) == 0x0000F0, "Member 'UHarmonixDistortionSubmixEffectPreset::Settings' has a wrong offset!");

class ITempoSyncedEffectPresetInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TempoSyncedEffectPresetInterface">();
	}
	static class ITempoSyncedEffectPresetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ITempoSyncedEffectPresetInterface>();
	}
};
static_assert(alignof(ITempoSyncedEffectPresetInterface) == 0x000008, "Wrong alignment on ITempoSyncedEffectPresetInterface");
static_assert(sizeof(ITempoSyncedEffectPresetInterface) == 0x000028, "Wrong size on ITempoSyncedEffectPresetInterface");

class UHarmonixFlangerSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x50];
	struct FHarmonixFlangerEffectSettings         Settings;

public:
	static class UHarmonixFlangerSourceEffectPreset* CreateHarmonixFlangerInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixFlangerEffectSettings& InSettings);

	void SetDelayTimeMs(float ms);
	void SetDepth(float Depth);
	void SetEnabled(bool Enabled);
	void SetExcursion(float ex);
	void SetFeedback(float fb);
	void SetInvert(bool Invert);
	void SetModFreq(float freq, bool Force);
	void SetModShape(EHarmonixFlangerShapes S);
	void SetSettings(const struct FHarmonixFlangerEffectSettings& InSettings);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option, float currentBeatFraction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixFlangerSourceEffectPreset">();
	}
	static class UHarmonixFlangerSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixFlangerSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixFlangerSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixFlangerSourceEffectPreset");
static_assert(sizeof(UHarmonixFlangerSourceEffectPreset) == 0x0000F8, "Wrong size on UHarmonixFlangerSourceEffectPreset");
static_assert(offsetof(UHarmonixFlangerSourceEffectPreset, Settings) == 0x0000D0, "Member 'UHarmonixFlangerSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixFlangerSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x50];
	struct FHarmonixFlangerEffectSettings         Settings;

public:
	static class UHarmonixFlangerSubmixEffectPreset* CreateHarmonixFlangerInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixFlangerEffectSettings& InSettings);

	void SetDelayTimeMs(float ms);
	void SetDepth(float Depth);
	void SetEnabled(bool Enabled);
	void SetExcursion(float ex);
	void SetFeedback(float fb);
	void SetInvert(bool Invert);
	void SetModFreq(float freq, bool Force);
	void SetModShape(EHarmonixFlangerShapes S);
	void SetSettings(const struct FHarmonixFlangerEffectSettings& InSettings);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option, float currentBeatFraction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixFlangerSubmixEffectPreset">();
	}
	static class UHarmonixFlangerSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixFlangerSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixFlangerSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixFlangerSubmixEffectPreset");
static_assert(sizeof(UHarmonixFlangerSubmixEffectPreset) == 0x0000F8, "Wrong size on UHarmonixFlangerSubmixEffectPreset");
static_assert(offsetof(UHarmonixFlangerSubmixEffectPreset, Settings) == 0x0000D0, "Member 'UHarmonixFlangerSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixPhaserSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x50];
	struct FHarmonixPhaserEffectSettings          Settings;

public:
	static class UHarmonixPhaserSourceEffectPreset* CreateHarmonixPhaserInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixPhaserEffectSettings& InSettings);

	void SetColor(float Color);
	void SetDepth(float Depth);
	void SetEnabled(bool Enabled);
	void SetFeedback(float fb);
	void SetFrequency(float hz);
	void SetNumPoles(int32 numPoles);
	void SetPhase(float Phase);
	void SetRate(float Rate);
	void SetSettings(const struct FHarmonixPhaserEffectSettings& InSettings);
	void SetShape(EHarmonixPhaserShapes Shape);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetWetDry(float wetDry);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixPhaserSourceEffectPreset">();
	}
	static class UHarmonixPhaserSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixPhaserSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixPhaserSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixPhaserSourceEffectPreset");
static_assert(sizeof(UHarmonixPhaserSourceEffectPreset) == 0x0000F8, "Wrong size on UHarmonixPhaserSourceEffectPreset");
static_assert(offsetof(UHarmonixPhaserSourceEffectPreset, Settings) == 0x0000D0, "Member 'UHarmonixPhaserSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixPhaserSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x50];
	struct FHarmonixPhaserEffectSettings          Settings;

public:
	static class UHarmonixPhaserSubmixEffectPreset* CreateHarmonixPhaserInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixPhaserEffectSettings& InSettings);

	void SetColor(float Color);
	void SetDepth(float Depth);
	void SetEnabled(bool Enabled);
	void SetFeedback(float fb);
	void SetFrequency(float hz);
	void SetNumPoles(int32 numPoles);
	void SetPhase(float Phase);
	void SetRate(float Rate);
	void SetSettings(const struct FHarmonixPhaserEffectSettings& InSettings);
	void SetShape(EHarmonixPhaserShapes Shape);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetWetDry(float wetDry);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixPhaserSubmixEffectPreset">();
	}
	static class UHarmonixPhaserSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixPhaserSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixPhaserSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixPhaserSubmixEffectPreset");
static_assert(sizeof(UHarmonixPhaserSubmixEffectPreset) == 0x0000F8, "Wrong size on UHarmonixPhaserSubmixEffectPreset");
static_assert(offsetof(UHarmonixPhaserSubmixEffectPreset, Settings) == 0x0000D0, "Member 'UHarmonixPhaserSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixStutterEditSourceEffectPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x38];
	struct FHarmonixStutterEditEffectSettings     Settings;

public:
	static class UHarmonixStutterEditSourceEffectPreset* CreateHarmonixStutterEditInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixStutterEditEffectSettings& InSettings);

	void Capture(int32 fromTick, int32 toTick);
	void EndStutter();
	void ScheduleStutter(int32 Tick, int32 lengthInTicks, bool isReverse, int32 offsetTicks);
	void SetAllowPassthrough(bool allow);
	void SetEnabled(bool Enabled);
	void SetFadeEnabled(bool fade);
	void SetSettings(const struct FHarmonixStutterEditEffectSettings& InSettings);
	void SetSilenceWhileScheduled(bool B);
	void SetSyncDriver(class UHarmonixHandle* Handle);
	void SetVarispeedForTempoChanges(bool V);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixStutterEditSourceEffectPreset">();
	}
	static class UHarmonixStutterEditSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixStutterEditSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixStutterEditSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixStutterEditSourceEffectPreset");
static_assert(sizeof(UHarmonixStutterEditSourceEffectPreset) == 0x0000B0, "Wrong size on UHarmonixStutterEditSourceEffectPreset");
static_assert(offsetof(UHarmonixStutterEditSourceEffectPreset, Settings) == 0x0000A0, "Member 'UHarmonixStutterEditSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixStutterEditSubmixEffectPreset final : public UHarmonixSubmixEffectBase
{
public:
	uint8                                         Pad_68[0x38];
	struct FHarmonixStutterEditEffectSettings     Settings;

public:
	static class UHarmonixStutterEditSubmixEffectPreset* CreateHarmonixStutterEditInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixStutterEditEffectSettings& InSettings);

	void Capture(int32 fromTick, int32 toTick);
	void EndStutter();
	void ScheduleStutter(int32 Tick, int32 lengthInTicks, bool isReverse, int32 offsetTicks);
	void SetAllowPassthrough(bool allow);
	void SetEnabled(bool Enabled);
	void SetFadeEnabled(bool fade);
	void SetSettings(const struct FHarmonixStutterEditEffectSettings& InSettings);
	void SetSilenceWhileScheduled(bool B);
	void SetSyncDriver(class UHarmonixHandle* Handle);
	void SetVarispeedForTempoChanges(bool V);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixStutterEditSubmixEffectPreset">();
	}
	static class UHarmonixStutterEditSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixStutterEditSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixStutterEditSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixStutterEditSubmixEffectPreset");
static_assert(sizeof(UHarmonixStutterEditSubmixEffectPreset) == 0x0000B0, "Wrong size on UHarmonixStutterEditSubmixEffectPreset");
static_assert(offsetof(UHarmonixStutterEditSubmixEffectPreset, Settings) == 0x0000A0, "Member 'UHarmonixStutterEditSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixTapeStartStopSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x34];
	struct FHarmonixTapeStartStopEffectSettings   Settings;

public:
	static class UHarmonixTapeStartStopSourceEffectPreset* CreateHarmonixTapeStartStopInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixTapeStartStopEffectSettings& InSettings);

	void SetEnabled(bool Enabled);
	void SetSettings(const struct FHarmonixTapeStartStopEffectSettings& InSettings);
	void SetTransportState(EHarmonixTapeStartStopTransportState Transport, float Duration);
	void SnapTransportState(EHarmonixTapeStartStopTransportState Transport);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixTapeStartStopSourceEffectPreset">();
	}
	static class UHarmonixTapeStartStopSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixTapeStartStopSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixTapeStartStopSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixTapeStartStopSourceEffectPreset");
static_assert(sizeof(UHarmonixTapeStartStopSourceEffectPreset) == 0x0000C0, "Wrong size on UHarmonixTapeStartStopSourceEffectPreset");
static_assert(offsetof(UHarmonixTapeStartStopSourceEffectPreset, Settings) == 0x0000B4, "Member 'UHarmonixTapeStartStopSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixTapeStartStopSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x34];
	struct FHarmonixTapeStartStopEffectSettings   Settings;

public:
	static class UHarmonixTapeStartStopSubmixEffectPreset* CreateHarmonixTapeStartStopInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixTapeStartStopEffectSettings& InSettings);

	void SetEnabled(bool Enabled);
	void SetSettings(const struct FHarmonixTapeStartStopEffectSettings& InSettings);
	void SetTransportState(EHarmonixTapeStartStopTransportState Transport, float Duration);
	void SnapTransportState(EHarmonixTapeStartStopTransportState Transport);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixTapeStartStopSubmixEffectPreset">();
	}
	static class UHarmonixTapeStartStopSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixTapeStartStopSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixTapeStartStopSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixTapeStartStopSubmixEffectPreset");
static_assert(sizeof(UHarmonixTapeStartStopSubmixEffectPreset) == 0x0000C0, "Wrong size on UHarmonixTapeStartStopSubmixEffectPreset");
static_assert(offsetof(UHarmonixTapeStartStopSubmixEffectPreset, Settings) == 0x0000B4, "Member 'UHarmonixTapeStartStopSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixTremoloSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x40];
	struct FHarmonixTremoloEffectSettings         Settings;

public:
	static class UHarmonixTremoloSourceEffectPreset* CreateHarmonixTremoloInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixTremoloEffectSettings& InSettings);

	void SetDepth(float Depth);
	void SetEnabled(bool Enabled);
	void SetInvertLFO(bool inv);
	void SetLFORate(float Rate);
	void SetSettings(const struct FHarmonixTremoloEffectSettings& InSettings);
	void SetShape(float Shape);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixTremoloSourceEffectPreset">();
	}
	static class UHarmonixTremoloSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixTremoloSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixTremoloSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixTremoloSourceEffectPreset");
static_assert(sizeof(UHarmonixTremoloSourceEffectPreset) == 0x0000D8, "Wrong size on UHarmonixTremoloSourceEffectPreset");
static_assert(offsetof(UHarmonixTremoloSourceEffectPreset, Settings) == 0x0000C0, "Member 'UHarmonixTremoloSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixTremoloSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x40];
	struct FHarmonixTremoloEffectSettings         Settings;

public:
	static class UHarmonixTremoloSubmixEffectPreset* CreateHarmonixTremoloInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixTremoloEffectSettings& InSettings);

	void SetDepth(float Depth);
	void SetEnabled(bool Enabled);
	void SetInvertLFO(bool inv);
	void SetLFORate(float Rate);
	void SetSettings(const struct FHarmonixTremoloEffectSettings& InSettings);
	void SetShape(float Shape);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixTremoloSubmixEffectPreset">();
	}
	static class UHarmonixTremoloSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixTremoloSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixTremoloSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixTremoloSubmixEffectPreset");
static_assert(sizeof(UHarmonixTremoloSubmixEffectPreset) == 0x0000D8, "Wrong size on UHarmonixTremoloSubmixEffectPreset");
static_assert(offsetof(UHarmonixTremoloSubmixEffectPreset, Settings) == 0x0000C0, "Member 'UHarmonixTremoloSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixVibeSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x54];
	struct FHarmonixVibeEffectSettings            Settings;

public:
	static class UHarmonixVibeSourceEffectPreset* CreateHarmonixVibeInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixVibeEffectSettings& InSettings);

	void SetEnabled(bool Enabled);
	void SetFreq(int32 stageIdx, float freq);
	void SetGain(float Gain);
	void SetLFODepth(float Depth);
	void SetLFORate(float Rate);
	void SetLFOShape(float Shape);
	void SetSettings(const struct FHarmonixVibeEffectSettings& InSettings);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetWetMix(float wetMix);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixVibeSourceEffectPreset">();
	}
	static class UHarmonixVibeSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixVibeSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixVibeSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixVibeSourceEffectPreset");
static_assert(sizeof(UHarmonixVibeSourceEffectPreset) == 0x000100, "Wrong size on UHarmonixVibeSourceEffectPreset");
static_assert(offsetof(UHarmonixVibeSourceEffectPreset, Settings) == 0x0000D4, "Member 'UHarmonixVibeSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixVibeSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x54];
	struct FHarmonixVibeEffectSettings            Settings;

public:
	static class UHarmonixVibeSubmixEffectPreset* CreateHarmonixVibeInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixVibeEffectSettings& InSettings);

	void SetEnabled(bool Enabled);
	void SetFreq(int32 stageIdx, float freq);
	void SetGain(float Gain);
	void SetLFODepth(float Depth);
	void SetLFORate(float Rate);
	void SetLFOShape(float Shape);
	void SetSettings(const struct FHarmonixVibeEffectSettings& InSettings);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);
	void SetWetMix(float wetMix);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixVibeSubmixEffectPreset">();
	}
	static class UHarmonixVibeSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixVibeSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixVibeSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixVibeSubmixEffectPreset");
static_assert(sizeof(UHarmonixVibeSubmixEffectPreset) == 0x000100, "Wrong size on UHarmonixVibeSubmixEffectPreset");
static_assert(offsetof(UHarmonixVibeSubmixEffectPreset, Settings) == 0x0000D4, "Member 'UHarmonixVibeSubmixEffectPreset::Settings' has a wrong offset!");

class UHarmonixWahSourceEffectPreset final : public UTempoSyncedSourceEffectPresetBase
{
public:
	uint8                                         Pad_80[0x4C];
	struct FHarmonixWahEffectSettings             Settings;

public:
	static class UHarmonixWahSourceEffectPreset* CreateHarmonixWahInstanceOnEmitter(class UMusicEmitterComponent* Emitter, struct FHarmonixWahEffectSettings& InSettings);

	void NotifyNoteOn();
	void SetAutoWahEnabled(bool Enabled);
	void SetClosedFreq(float hz);
	void SetClosedQ(float Q);
	void SetEnabled(bool Enabled);
	void SetGain(float Gain);
	void SetLFORate(float Rate);
	void SetLFORateScale(float Scale);
	void SetLFOShape(float Shape);
	void SetOpenFreq(float hz);
	void SetOpenOnAttack(bool Enable);
	void SetOpenQ(float Q);
	void SetSettings(const struct FHarmonixWahEffectSettings& InSettings);
	void SetSteepFilter(bool steep);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixWahSourceEffectPreset">();
	}
	static class UHarmonixWahSourceEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixWahSourceEffectPreset>();
	}
};
static_assert(alignof(UHarmonixWahSourceEffectPreset) == 0x000008, "Wrong alignment on UHarmonixWahSourceEffectPreset");
static_assert(sizeof(UHarmonixWahSourceEffectPreset) == 0x0000F0, "Wrong size on UHarmonixWahSourceEffectPreset");
static_assert(offsetof(UHarmonixWahSourceEffectPreset, Settings) == 0x0000CC, "Member 'UHarmonixWahSourceEffectPreset::Settings' has a wrong offset!");

class UHarmonixWahSubmixEffectPreset final : public UTempoSyncedSubmixEffectPresetBase
{
public:
	uint8                                         Pad_80[0x4C];
	struct FHarmonixWahEffectSettings             Settings;

public:
	static class UHarmonixWahSubmixEffectPreset* CreateHarmonixWahInstanceOnSubmix(const class UObject* WorldContextObject, class USoundSubmix* Submix, struct FHarmonixWahEffectSettings& InSettings);

	void NotifyNoteOn();
	void SetAutoWahEnabled(bool Enabled);
	void SetClosedFreq(float hz);
	void SetClosedQ(float Q);
	void SetEnabled(bool Enabled);
	void SetGain(float Gain);
	void SetLFORate(float Rate);
	void SetLFORateScale(float Scale);
	void SetLFOShape(float Shape);
	void SetOpenFreq(float hz);
	void SetOpenOnAttack(bool Enable);
	void SetOpenQ(float Q);
	void SetSettings(const struct FHarmonixWahEffectSettings& InSettings);
	void SetSteepFilter(bool steep);
	void SetTimeSyncOption(ETempoListenerTimeSyncOption Option);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixWahSubmixEffectPreset">();
	}
	static class UHarmonixWahSubmixEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixWahSubmixEffectPreset>();
	}
};
static_assert(alignof(UHarmonixWahSubmixEffectPreset) == 0x000008, "Wrong alignment on UHarmonixWahSubmixEffectPreset");
static_assert(sizeof(UHarmonixWahSubmixEffectPreset) == 0x0000F0, "Wrong size on UHarmonixWahSubmixEffectPreset");
static_assert(offsetof(UHarmonixWahSubmixEffectPreset, Settings) == 0x0000CC, "Member 'UHarmonixWahSubmixEffectPreset::Settings' has a wrong offset!");

class UHmxSettings final : public UDeveloperSettings
{
public:
	bool                                          verbosePrint;
	uint8                                         Pad_31[0x7];
	struct FDirectoryPath                         audioStreamsDirectory;
	struct FHmxPerPlatformConfig                  DefaultPlatformSettings;
	struct FHmxPerPlatformConfig                  XB1PlatformSettings;
	struct FHmxPerPlatformConfig                  PS4PlatformSettings;
	struct FHmxPerPlatformConfig                  SwitchPlatformSettings;
	int32                                         numMoggGenerators;
	int32                                         numMoggMusicGenerators;
	int32                                         numFusionGenerators;
	int32                                         numTotalVoices;
	int32                                         softVoiceLimit;
	int32                                         numStretchable;
	bool                                          shouldDecompressSamplesOnLoad;
	bool                                          onLoadDecompressionIsAsynchronous;
	uint8                                         Pad_72[0x2];
	int32                                         maxActiveVorbisDecoders;
	int32                                         preBufferFramesOnAsyncLoad;
	float                                         formantVolCorrectionPerHalfStepUp;
	float                                         formantVolCorrectionPerHalfStepUpMax;
	float                                         formantVolCorrectionPerHalfStepDown;
	float                                         formantVolCorrectionPerHalfStepDownMax;
	EVorbisMemoryScheme                           vorbisMemoryScheme;
	uint8                                         Pad_8D[0x3];
	int32                                         vorbisPoolOrStackSize;
	bool                                          autoGrow;
	uint8                                         Pad_95[0x3];
	int32                                         autoGrowSize;
	int32                                         numMultiFusionGenerators;
	int32                                         numDaggerGenerators;
	int32                                         numSynthRackGenerators;
	int32                                         numMidiMusicGenerators;
	int32                                         numAudioBusGenerators;
	int32                                         numMusicTimelineGenerators;
	bool                                          scanAllBussesForTempoAwareDSP;
	uint8                                         Pad_B5[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HmxSettings">();
	}
	static class UHmxSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHmxSettings>();
	}
};
static_assert(alignof(UHmxSettings) == 0x000008, "Wrong alignment on UHmxSettings");
static_assert(sizeof(UHmxSettings) == 0x0000B8, "Wrong size on UHmxSettings");
static_assert(offsetof(UHmxSettings, verbosePrint) == 0x000030, "Member 'UHmxSettings::verbosePrint' has a wrong offset!");
static_assert(offsetof(UHmxSettings, audioStreamsDirectory) == 0x000038, "Member 'UHmxSettings::audioStreamsDirectory' has a wrong offset!");
static_assert(offsetof(UHmxSettings, DefaultPlatformSettings) == 0x000048, "Member 'UHmxSettings::DefaultPlatformSettings' has a wrong offset!");
static_assert(offsetof(UHmxSettings, XB1PlatformSettings) == 0x00004C, "Member 'UHmxSettings::XB1PlatformSettings' has a wrong offset!");
static_assert(offsetof(UHmxSettings, PS4PlatformSettings) == 0x000050, "Member 'UHmxSettings::PS4PlatformSettings' has a wrong offset!");
static_assert(offsetof(UHmxSettings, SwitchPlatformSettings) == 0x000054, "Member 'UHmxSettings::SwitchPlatformSettings' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numMoggGenerators) == 0x000058, "Member 'UHmxSettings::numMoggGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numMoggMusicGenerators) == 0x00005C, "Member 'UHmxSettings::numMoggMusicGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numFusionGenerators) == 0x000060, "Member 'UHmxSettings::numFusionGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numTotalVoices) == 0x000064, "Member 'UHmxSettings::numTotalVoices' has a wrong offset!");
static_assert(offsetof(UHmxSettings, softVoiceLimit) == 0x000068, "Member 'UHmxSettings::softVoiceLimit' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numStretchable) == 0x00006C, "Member 'UHmxSettings::numStretchable' has a wrong offset!");
static_assert(offsetof(UHmxSettings, shouldDecompressSamplesOnLoad) == 0x000070, "Member 'UHmxSettings::shouldDecompressSamplesOnLoad' has a wrong offset!");
static_assert(offsetof(UHmxSettings, onLoadDecompressionIsAsynchronous) == 0x000071, "Member 'UHmxSettings::onLoadDecompressionIsAsynchronous' has a wrong offset!");
static_assert(offsetof(UHmxSettings, maxActiveVorbisDecoders) == 0x000074, "Member 'UHmxSettings::maxActiveVorbisDecoders' has a wrong offset!");
static_assert(offsetof(UHmxSettings, preBufferFramesOnAsyncLoad) == 0x000078, "Member 'UHmxSettings::preBufferFramesOnAsyncLoad' has a wrong offset!");
static_assert(offsetof(UHmxSettings, formantVolCorrectionPerHalfStepUp) == 0x00007C, "Member 'UHmxSettings::formantVolCorrectionPerHalfStepUp' has a wrong offset!");
static_assert(offsetof(UHmxSettings, formantVolCorrectionPerHalfStepUpMax) == 0x000080, "Member 'UHmxSettings::formantVolCorrectionPerHalfStepUpMax' has a wrong offset!");
static_assert(offsetof(UHmxSettings, formantVolCorrectionPerHalfStepDown) == 0x000084, "Member 'UHmxSettings::formantVolCorrectionPerHalfStepDown' has a wrong offset!");
static_assert(offsetof(UHmxSettings, formantVolCorrectionPerHalfStepDownMax) == 0x000088, "Member 'UHmxSettings::formantVolCorrectionPerHalfStepDownMax' has a wrong offset!");
static_assert(offsetof(UHmxSettings, vorbisMemoryScheme) == 0x00008C, "Member 'UHmxSettings::vorbisMemoryScheme' has a wrong offset!");
static_assert(offsetof(UHmxSettings, vorbisPoolOrStackSize) == 0x000090, "Member 'UHmxSettings::vorbisPoolOrStackSize' has a wrong offset!");
static_assert(offsetof(UHmxSettings, autoGrow) == 0x000094, "Member 'UHmxSettings::autoGrow' has a wrong offset!");
static_assert(offsetof(UHmxSettings, autoGrowSize) == 0x000098, "Member 'UHmxSettings::autoGrowSize' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numMultiFusionGenerators) == 0x00009C, "Member 'UHmxSettings::numMultiFusionGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numDaggerGenerators) == 0x0000A0, "Member 'UHmxSettings::numDaggerGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numSynthRackGenerators) == 0x0000A4, "Member 'UHmxSettings::numSynthRackGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numMidiMusicGenerators) == 0x0000A8, "Member 'UHmxSettings::numMidiMusicGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numAudioBusGenerators) == 0x0000AC, "Member 'UHmxSettings::numAudioBusGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, numMusicTimelineGenerators) == 0x0000B0, "Member 'UHmxSettings::numMusicTimelineGenerators' has a wrong offset!");
static_assert(offsetof(UHmxSettings, scanAllBussesForTempoAwareDSP) == 0x0000B4, "Member 'UHmxSettings::scanAllBussesForTempoAwareDSP' has a wrong offset!");

class UHmxMusicWorldSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x20];
	class AActor*                                 WorldDefaultMusicEmitterActor;
	class UMusicEmitterComponent*                 WorldDefaultMusicEmitterComponent;
	uint8                                         Pad_60[0x8];
	TArray<class UMusicPlayerComponentBase*>      EditorMusicPlayers;

public:
	void OnAuditionTimeout();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HmxMusicWorldSubsystem">();
	}
	static class UHmxMusicWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHmxMusicWorldSubsystem>();
	}
};
static_assert(alignof(UHmxMusicWorldSubsystem) == 0x000008, "Wrong alignment on UHmxMusicWorldSubsystem");
static_assert(sizeof(UHmxMusicWorldSubsystem) == 0x000078, "Wrong size on UHmxMusicWorldSubsystem");
static_assert(offsetof(UHmxMusicWorldSubsystem, WorldDefaultMusicEmitterActor) == 0x000050, "Member 'UHmxMusicWorldSubsystem::WorldDefaultMusicEmitterActor' has a wrong offset!");
static_assert(offsetof(UHmxMusicWorldSubsystem, WorldDefaultMusicEmitterComponent) == 0x000058, "Member 'UHmxMusicWorldSubsystem::WorldDefaultMusicEmitterComponent' has a wrong offset!");
static_assert(offsetof(UHmxMusicWorldSubsystem, EditorMusicPlayers) == 0x000068, "Member 'UHmxMusicWorldSubsystem::EditorMusicPlayers' has a wrong offset!");

class UHarmonixHandle : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UWorld*                                 mWorld;

public:
	void Continue();
	float GetElapsedMs();
	float GetGain();
	float GetLengthMs();
	bool GetMute();
	float GetParameter(class FName Param, EParamExists* Result);
	float GetRawPitchMultiplier();
	float GetSpeed();
	float GetTimelineMs();
	EAudioTransportState GetTransportState();
	float GetVolume();
	void Kill();
	void Pause();
	void SeekToMs(float ms);
	void SetGain(float Gain, float Seconds, EPostFadeOption Option);
	void SetMute(bool muted);
	void SetParameter(class FName Param, float Value, EParamExists* Result);
	void SetRawPitchMultiplier(float PitchMultiplier);
	void SetSpeed(float Speed, bool maintainPitch);
	void SetVolume(float vol, float Seconds, EPostFadeOption Option);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixHandle">();
	}
	static class UHarmonixHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixHandle>();
	}
};
static_assert(alignof(UHarmonixHandle) == 0x000008, "Wrong alignment on UHarmonixHandle");
static_assert(sizeof(UHarmonixHandle) == 0x000040, "Wrong size on UHarmonixHandle");
static_assert(offsetof(UHarmonixHandle, mWorld) == 0x000038, "Member 'UHarmonixHandle::mWorld' has a wrong offset!");

class UHarmonixHandleUtil final : public UBlueprintFunctionLibrary
{
public:
	static class UInstrumentHandle* CastToInstrumentHandle(class UObject* worldContextObj, class UHarmonixHandle* H, EHarmonixHandleValidity* Result);
	static class UMusicHandle* CastToMusicHandle(class UObject* worldContextObj, class UHarmonixHandle* H, EHarmonixHandleValidity* Result);
	static bool HarmonixHandleIsValid(class UHarmonixHandle* HarmonixHandle, EHarmonixHandleValidity* Result);
	static bool InstrumentHandleIsValid(class UInstrumentHandle* InstrumentHandle, EHarmonixHandleValidity* Result);
	static bool IsInstrument(class UHarmonixHandle* HarmonixHandle, EHarmonixHandleValidity* Result);
	static bool IsMusic(class UHarmonixHandle* HarmonixHandle, EHarmonixHandleValidity* Result);
	static bool MusicHandleIsValid(class UMusicHandle* MusicHandle, EHarmonixHandleValidity* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HarmonixHandleUtil">();
	}
	static class UHarmonixHandleUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHarmonixHandleUtil>();
	}
};
static_assert(alignof(UHarmonixHandleUtil) == 0x000008, "Wrong alignment on UHarmonixHandleUtil");
static_assert(sizeof(UHarmonixHandleUtil) == 0x000028, "Wrong size on UHarmonixHandleUtil");

class UInstrumentHandle final : public UHarmonixHandle
{
public:
	void AllNotesOff();
	void ClearPeakVoiceUsage();
	float GetController(int32 Controller, int32 midiChannel);
	int32 GetMaxNumVoices();
	int32 GetNumVoicesInUse();
	float GetPitchbend(int32 midiChannel);
	int32 GetRawTransposition();
	void GetVoiceUsage(int32* Current, int32* peak);
	void KillAllVoices();
	bool NoteIsOn(int32 midiNoteNumber, int32 midiChannel);
	void NoteOff(int32 midiNoteNumber, int32 midiChannel);
	void NoteOn(int32 midiNoteNumber, int32 Velocity, int32 midiChannel);
	void NotesOff(TArray<int32>* midiNoteNumbers, TArray<int32>* Channels);
	void NotesOn(TArray<int32>* midiNoteNumbers, TArray<int32>* velocities, TArray<int32>* Channels);
	void ProcessMidiMessage(int32 Status, int32 data1, int32 data2);
	void SetController(int32 Controller, float Value, int32 midiChannel);
	void SetExtraPitchBend(float Semitones, int32 midiChannel);
	void SetPitchBend(float Value, int32 midiChannel);
	void SetRawTransposition(int32 Semitones);
	void SetTempo(float BPM);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InstrumentHandle">();
	}
	static class UInstrumentHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInstrumentHandle>();
	}
};
static_assert(alignof(UInstrumentHandle) == 0x000008, "Wrong alignment on UInstrumentHandle");
static_assert(sizeof(UInstrumentHandle) == 0x000040, "Wrong size on UInstrumentHandle");

class UMusicHandle final : public UHarmonixHandle
{
public:
	uint8                                         Pad_40[0x8];

public:
	void ClearLoop(bool ignoreLookAhead);
	void ClearTimeAuthority(bool maintainLastTempoSpeed);
	int32 FindLowLevelMidiTrackIndex(const class FString& trackName, EMusicFindResults* Result);
	int32 FindSectionIndex(const class FString& Name_0, EMusicFindResults* Result);
	int32 FindTrackIndex(const class FString& trackName, EMusicFindResults* Result);
	float GetAudioLatencyMs();
	class FString GetCurrentSectionName(EMusicTimebase inTimeBase);
	float GetMs(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	int32 GetNumSections();
	int32 GetNumTracks();
	int32 GetRawTransposition();
	bool GetSecsAndTicksUntilPlay(float& secs, int32& ticks);
	class FString GetSectionName(int32 SectionIndex, EMusicFindResults* Result);
	class FString GetSectionNameAtTick(int32 Tick);
	TArray<class FString> GetSectionNames();
	float GetSmoothingLatencyMs();
	struct FSongPos GetSongPos(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	class FString GetSoundId();
	int32 GetTick(EMusicTimebase inTimeBase, EMusicTimeStart InTimeStart);
	float GetTrackDb(int32 track);
	float GetTrackGain(int32 track);
	bool GetTrackMute(int32 track);
	class FString GetTrackName(int32 TrackIndex);
	TArray<class FString> GetTrackNames();
	float GetVideoLatencyMs();
	bool Loop(int32 fromTick, int32 toTick);
	bool LoopSection(int32 SectionIndex);
	bool LoopWithCount(int32 fromTick, int32 toTick, int32 numTimes);
	void SeekToContentTick(int32 Tick);
	void SeekToSongTick(int32 Tick);
	void SetFutureUnmute(EFMusicUnmutePoint unmutePoint);
	void SetFutureUnmuteByTick(int32 Tick, bool useTimeAuthoritysTick);
	void SetRawTransposition(int32 Semitones);
	void SetSpeedToAchieveTempo(float BPM, bool maintainPitch);
	bool SetTimeAuthority(class UMusicHandle* authority, const struct FMusicSyncConfig& syncConfig);
	void SetTrackDb(int32 track, float db, float sec);
	void SetTrackGain(int32 track, float Gain, float sec);
	void SetTrackMute(int32 Tick, bool muted);
	void StopWithReleases();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicHandle">();
	}
	static class UMusicHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicHandle>();
	}
};
static_assert(alignof(UMusicHandle) == 0x000008, "Wrong alignment on UMusicHandle");
static_assert(sizeof(UMusicHandle) == 0x000048, "Wrong size on UMusicHandle");

}
