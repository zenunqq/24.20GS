#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UInteriorAudioComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AB_InteriorAudioManager_C*              Manager;

public:
	void ExecuteUbergraph_InteriorAudioComponent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Update(struct FInteriorAudioScanResults& ScanResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteriorAudioComponent_C">();
	}
	static class UInteriorAudioComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteriorAudioComponent_C>();
	}
};
static_assert(alignof(UInteriorAudioComponent_C) == 0x000008, "Wrong alignment on UInteriorAudioComponent_C");
static_assert(sizeof(UInteriorAudioComponent_C) == 0x0000B0, "Wrong size on UInteriorAudioComponent_C");
static_assert(offsetof(UInteriorAudioComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UInteriorAudioComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInteriorAudioComponent_C, Manager) == 0x0000A8, "Member 'UInteriorAudioComponent_C::Manager' has a wrong offset!");

}
