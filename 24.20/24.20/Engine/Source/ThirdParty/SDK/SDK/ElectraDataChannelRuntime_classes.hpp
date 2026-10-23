#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class AElectraDataChannelPlayer final : public AActor
{
public:
	TMulticastInlineDelegate<void(const class FString& FailureReason)> OnTerminalError;
	uint8                                         Pad_298[0x20];

public:
	void EndPlayback();
	void PlayFromFile(const class FString& InFilename);
	void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void PlayFromStateStreamServer(const class FString& InStatePlaylistURL);
	void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ElectraDataChannelPlayer">();
	}
	static class AElectraDataChannelPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AElectraDataChannelPlayer>();
	}
};
static_assert(alignof(AElectraDataChannelPlayer) == 0x000008, "Wrong alignment on AElectraDataChannelPlayer");
static_assert(sizeof(AElectraDataChannelPlayer) == 0x0002B8, "Wrong size on AElectraDataChannelPlayer");
static_assert(offsetof(AElectraDataChannelPlayer, OnTerminalError) == 0x000288, "Member 'AElectraDataChannelPlayer::OnTerminalError' has a wrong offset!");

class AElectraDataChannelRecorder final : public AActor
{
public:
	uint8                                         Pad_288[0x38];

public:
	void EndRecording();
	void RecordToFile(const class FString& InFilename);
	void StartRecording();
	void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ElectraDataChannelRecorder">();
	}
	static class AElectraDataChannelRecorder* GetDefaultObj()
	{
		return GetDefaultObjImpl<AElectraDataChannelRecorder>();
	}
};
static_assert(alignof(AElectraDataChannelRecorder) == 0x000008, "Wrong alignment on AElectraDataChannelRecorder");
static_assert(sizeof(AElectraDataChannelRecorder) == 0x0002C0, "Wrong size on AElectraDataChannelRecorder");

class AElectraDataChannelTarget : public AActor
{
public:
	uint8                                         Pad_288[0x78];

public:
	void SetTargetAlias(const class FString& InAlias);

	class FString GetTargetAlias() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ElectraDataChannelTarget">();
	}
	static class AElectraDataChannelTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<AElectraDataChannelTarget>();
	}
};
static_assert(alignof(AElectraDataChannelTarget) == 0x000008, "Wrong alignment on AElectraDataChannelTarget");
static_assert(sizeof(AElectraDataChannelTarget) == 0x000300, "Wrong size on AElectraDataChannelTarget");

}
