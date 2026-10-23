#pragma once

#include "Basic.hpp"

#include "WaveTable_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UWaveTableBank final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	EWaveTableResolution                          Resolution;
	bool                                          bBipolar;
	uint8                                         Pad_32[0x6];
	TArray<struct FWaveTableBankEntry>            Entries;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaveTableBank">();
	}
	static class UWaveTableBank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveTableBank>();
	}
};
static_assert(alignof(UWaveTableBank) == 0x000008, "Wrong alignment on UWaveTableBank");
static_assert(sizeof(UWaveTableBank) == 0x000048, "Wrong size on UWaveTableBank");
static_assert(offsetof(UWaveTableBank, Resolution) == 0x000030, "Member 'UWaveTableBank::Resolution' has a wrong offset!");
static_assert(offsetof(UWaveTableBank, bBipolar) == 0x000031, "Member 'UWaveTableBank::bBipolar' has a wrong offset!");
static_assert(offsetof(UWaveTableBank, Entries) == 0x000038, "Member 'UWaveTableBank::Entries' has a wrong offset!");

}
