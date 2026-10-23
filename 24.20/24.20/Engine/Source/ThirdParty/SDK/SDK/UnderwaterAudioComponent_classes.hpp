#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UUnderwaterAudioComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundMix*                              CamUnderwaterSoundMix;
	class USoundBase*                             CamUnderwaterStartSound;
	class UAudioComponent*                        CamUnderwaterAudio;
	class USoundBase*                             CamUnderwaterLoopSound;
	class USoundBase*                             CamUnderwaterStopSound;
	bool                                          bEnabled;

public:
	void ExecuteUbergraph_UnderwaterAudioComponent(int32 EntryPoint);
	void On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UnderwaterAudioComponent_C">();
	}
	static class UUnderwaterAudioComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUnderwaterAudioComponent_C>();
	}
};
static_assert(alignof(UUnderwaterAudioComponent_C) == 0x000008, "Wrong alignment on UUnderwaterAudioComponent_C");
static_assert(sizeof(UUnderwaterAudioComponent_C) == 0x0000D8, "Wrong size on UUnderwaterAudioComponent_C");
static_assert(offsetof(UUnderwaterAudioComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UUnderwaterAudioComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterSoundMix) == 0x0000A8, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterSoundMix' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterStartSound) == 0x0000B0, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterStartSound' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterAudio) == 0x0000B8, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterAudio' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterLoopSound) == 0x0000C0, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterLoopSound' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterStopSound) == 0x0000C8, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterStopSound' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, bEnabled) == 0x0000D0, "Member 'UUnderwaterAudioComponent_C::bEnabled' has a wrong offset!");

}
