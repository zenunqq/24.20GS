#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaWatchers_C final : public UAthenaWatchers
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnValueChanged;
	class UAthenaWatcherEye_C*                    AthenaWatcherEye;

public:
	void SpectatorsEnded();
	void SpectatorsBegan(bool bBigGroup);
	void SpectatorsAdded(bool bBigGroup);
	void SpectatorRemoved();
	void SpectatorCountChanged_BP(int32 NewCount);
	void ExecuteUbergraph_AthenaWatchers(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaWatchers_C">();
	}
	static class UAthenaWatchers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaWatchers_C>();
	}
};
static_assert(alignof(UAthenaWatchers_C) == 0x000008, "Wrong alignment on UAthenaWatchers_C");
static_assert(sizeof(UAthenaWatchers_C) == 0x0002F8, "Wrong size on UAthenaWatchers_C");
static_assert(offsetof(UAthenaWatchers_C, UberGraphFrame) == 0x0002E0, "Member 'UAthenaWatchers_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaWatchers_C, OnValueChanged) == 0x0002E8, "Member 'UAthenaWatchers_C::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UAthenaWatchers_C, AthenaWatcherEye) == 0x0002F0, "Member 'UAthenaWatchers_C::AthenaWatcherEye' has a wrong offset!");

}
