#pragma once

#include "Basic.hpp"

#include "InteriorAudioComponent_classes.hpp"

namespace SDK
{

class UInteriorAudioComponent_Debug_C final : public UInteriorAudioComponent_C
{
public:
	void Update(struct FInteriorAudioScanResults& ScanResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteriorAudioComponent_Debug_C">();
	}
	static class UInteriorAudioComponent_Debug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteriorAudioComponent_Debug_C>();
	}
};
static_assert(alignof(UInteriorAudioComponent_Debug_C) == 0x000008, "Wrong alignment on UInteriorAudioComponent_Debug_C");
static_assert(sizeof(UInteriorAudioComponent_Debug_C) == 0x0000B0, "Wrong size on UInteriorAudioComponent_Debug_C");

}
