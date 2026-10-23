#pragma once

#include "Basic.hpp"

#include "VictoryCrownsRuntime_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UVictoryCrownComponent_C final : public UFortControllerComponent_VictoryCrowns
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_VictoryCrownComponent(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VictoryCrownComponent_C">();
	}
	static class UVictoryCrownComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownComponent_C>();
	}
};
static_assert(alignof(UVictoryCrownComponent_C) == 0x000008, "Wrong alignment on UVictoryCrownComponent_C");
static_assert(sizeof(UVictoryCrownComponent_C) == 0x000280, "Wrong size on UVictoryCrownComponent_C");
static_assert(offsetof(UVictoryCrownComponent_C, UberGraphFrame) == 0x000278, "Member 'UVictoryCrownComponent_C::UberGraphFrame' has a wrong offset!");

}
