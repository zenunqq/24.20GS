#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "HmxAudioGraphics_structs.hpp"
#include "HmxGraphics_classes.hpp"
#include "HmxCore_structs.hpp"

namespace SDK
{

class UAudioAnalysisTexture final : public UHysteresisTextureBase
{
public:
	class UOldMusicClockComponent*                MusicClock;
	EHmxAudioAnalysisType                         Type;
	class FName                                   InstanceName;
	bool                                          ResetMonoPeakOnUpdate;
	bool                                          WarnIfNotEnabled;
	uint8                                         Pad_192[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalysisTexture">();
	}
	static class UAudioAnalysisTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalysisTexture>();
	}
};
static_assert(alignof(UAudioAnalysisTexture) == 0x000008, "Wrong alignment on UAudioAnalysisTexture");
static_assert(sizeof(UAudioAnalysisTexture) == 0x000198, "Wrong size on UAudioAnalysisTexture");
static_assert(offsetof(UAudioAnalysisTexture, MusicClock) == 0x000180, "Member 'UAudioAnalysisTexture::MusicClock' has a wrong offset!");
static_assert(offsetof(UAudioAnalysisTexture, Type) == 0x000188, "Member 'UAudioAnalysisTexture::Type' has a wrong offset!");
static_assert(offsetof(UAudioAnalysisTexture, InstanceName) == 0x00018C, "Member 'UAudioAnalysisTexture::InstanceName' has a wrong offset!");
static_assert(offsetof(UAudioAnalysisTexture, ResetMonoPeakOnUpdate) == 0x000190, "Member 'UAudioAnalysisTexture::ResetMonoPeakOnUpdate' has a wrong offset!");
static_assert(offsetof(UAudioAnalysisTexture, WarnIfNotEnabled) == 0x000191, "Member 'UAudioAnalysisTexture::WarnIfNotEnabled' has a wrong offset!");

class UMusicTempometerComponent final : public UActorComponent
{
public:
	class FName                                   MusicSecondsParameterName;
	class FName                                   MusicMeasureParameterName;
	class FName                                   MusicBeatParameterName;
	class FName                                   MusicTickParameterName;
	class FName                                   MeasureBeatParameterName;
	class FName                                   MeasureTickParameterName;
	class FName                                   BeatTickParameterName;
	class FName                                   MeasureLifetimeParameterName;
	class FName                                   BeatLifetimeParameterName;
	class FName                                   TickLifetimeParameterName;
	class FName                                   TimeSignatureNumeratorParameterName;
	class FName                                   TimeSignatureDenominatorParameterName;
	class FName                                   TempoParameterName;
	struct FSongPos                               VideoRenderSongPos;
	uint8                                         Pad_120[0x30];
	TScriptInterface<class ISongPosInterface>     Music;
	class UMaterialParameterCollection*           MaterialParameterCollection;
	class UMaterialParameterCollectionInstance*   MaterialParameterCollectionInstance;
	float                                         MusicSeconds;
	float                                         MusicMeasure;
	float                                         MusicBeat;
	float                                         MusicTick;
	float                                         MeasureBeat;
	float                                         MeasureTick;
	float                                         BeatTick;
	float                                         MeasureLifetime;
	float                                         BeatLifetime;
	float                                         TickLifetime;
	float                                         TimeSignatureNumerator;
	float                                         TimeSignatureDenominator;
	float                                         Tempo;
	uint8                                         Pad_1A4[0x4];

public:
	void SetMaterialParameterCollection(class UMaterialParameterCollection* InMaterialParameterCollection);
	void SetSongPosInterface(TScriptInterface<class ISongPosInterface> InSongPosInterface);
	void SetSongPosInterfaceFromActor(class AActor* Actor);

	float GetBeatLifetime() const;
	float GetBeatTick() const;
	class UMaterialParameterCollection* GetMaterialParameterCollection() const;
	float GetMeasureBeat() const;
	float GetMeasureLifetime() const;
	float GetMeasureTick() const;
	float GetMusicBeat() const;
	float GetMusicMeasure() const;
	float GetMusicSeconds() const;
	float GetMusicTick() const;
	const struct FSongPos GetSongPos() const;
	const TScriptInterface<class ISongPosInterface> GetSongPosInterface() const;
	const TScriptInterface<class ISongPosInterface> GetSongPosInterfaceNoMutex() const;
	float GetTempo() const;
	float GetTickLifetime() const;
	float GetTimeSignatureDenominator() const;
	float GetTimeSignatureNumerator() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusicTempometerComponent">();
	}
	static class UMusicTempometerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusicTempometerComponent>();
	}
};
static_assert(alignof(UMusicTempometerComponent) == 0x000008, "Wrong alignment on UMusicTempometerComponent");
static_assert(sizeof(UMusicTempometerComponent) == 0x0001A8, "Wrong size on UMusicTempometerComponent");
static_assert(offsetof(UMusicTempometerComponent, MusicSecondsParameterName) == 0x0000A0, "Member 'UMusicTempometerComponent::MusicSecondsParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicMeasureParameterName) == 0x0000A4, "Member 'UMusicTempometerComponent::MusicMeasureParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicBeatParameterName) == 0x0000A8, "Member 'UMusicTempometerComponent::MusicBeatParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicTickParameterName) == 0x0000AC, "Member 'UMusicTempometerComponent::MusicTickParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MeasureBeatParameterName) == 0x0000B0, "Member 'UMusicTempometerComponent::MeasureBeatParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MeasureTickParameterName) == 0x0000B4, "Member 'UMusicTempometerComponent::MeasureTickParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, BeatTickParameterName) == 0x0000B8, "Member 'UMusicTempometerComponent::BeatTickParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MeasureLifetimeParameterName) == 0x0000BC, "Member 'UMusicTempometerComponent::MeasureLifetimeParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, BeatLifetimeParameterName) == 0x0000C0, "Member 'UMusicTempometerComponent::BeatLifetimeParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TickLifetimeParameterName) == 0x0000C4, "Member 'UMusicTempometerComponent::TickLifetimeParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TimeSignatureNumeratorParameterName) == 0x0000C8, "Member 'UMusicTempometerComponent::TimeSignatureNumeratorParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TimeSignatureDenominatorParameterName) == 0x0000CC, "Member 'UMusicTempometerComponent::TimeSignatureDenominatorParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TempoParameterName) == 0x0000D0, "Member 'UMusicTempometerComponent::TempoParameterName' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, VideoRenderSongPos) == 0x0000D4, "Member 'UMusicTempometerComponent::VideoRenderSongPos' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, Music) == 0x000150, "Member 'UMusicTempometerComponent::Music' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MaterialParameterCollection) == 0x000160, "Member 'UMusicTempometerComponent::MaterialParameterCollection' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MaterialParameterCollectionInstance) == 0x000168, "Member 'UMusicTempometerComponent::MaterialParameterCollectionInstance' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicSeconds) == 0x000170, "Member 'UMusicTempometerComponent::MusicSeconds' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicMeasure) == 0x000174, "Member 'UMusicTempometerComponent::MusicMeasure' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicBeat) == 0x000178, "Member 'UMusicTempometerComponent::MusicBeat' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MusicTick) == 0x00017C, "Member 'UMusicTempometerComponent::MusicTick' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MeasureBeat) == 0x000180, "Member 'UMusicTempometerComponent::MeasureBeat' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MeasureTick) == 0x000184, "Member 'UMusicTempometerComponent::MeasureTick' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, BeatTick) == 0x000188, "Member 'UMusicTempometerComponent::BeatTick' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, MeasureLifetime) == 0x00018C, "Member 'UMusicTempometerComponent::MeasureLifetime' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, BeatLifetime) == 0x000190, "Member 'UMusicTempometerComponent::BeatLifetime' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TickLifetime) == 0x000194, "Member 'UMusicTempometerComponent::TickLifetime' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TimeSignatureNumerator) == 0x000198, "Member 'UMusicTempometerComponent::TimeSignatureNumerator' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, TimeSignatureDenominator) == 0x00019C, "Member 'UMusicTempometerComponent::TimeSignatureDenominator' has a wrong offset!");
static_assert(offsetof(UMusicTempometerComponent, Tempo) == 0x0001A0, "Member 'UMusicTempometerComponent::Tempo' has a wrong offset!");

class UStutterTexture final : public UHmxTextureBase
{
public:
	class FName                                   StuttererName;
	bool                                          IsInRecordMode;
	uint8                                         Pad_155[0x3];
	int32                                         NumBeats;
	uint8                                         Pad_15C[0x4];

public:
	void RefreshTexture();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StutterTexture">();
	}
	static class UStutterTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStutterTexture>();
	}
};
static_assert(alignof(UStutterTexture) == 0x000008, "Wrong alignment on UStutterTexture");
static_assert(sizeof(UStutterTexture) == 0x000160, "Wrong size on UStutterTexture");
static_assert(offsetof(UStutterTexture, StuttererName) == 0x000150, "Member 'UStutterTexture::StuttererName' has a wrong offset!");
static_assert(offsetof(UStutterTexture, IsInRecordMode) == 0x000154, "Member 'UStutterTexture::IsInRecordMode' has a wrong offset!");
static_assert(offsetof(UStutterTexture, NumBeats) == 0x000158, "Member 'UStutterTexture::NumBeats' has a wrong offset!");

}
