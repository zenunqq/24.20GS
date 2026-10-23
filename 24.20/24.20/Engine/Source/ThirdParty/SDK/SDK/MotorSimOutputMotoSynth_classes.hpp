#pragma once

#include "Basic.hpp"

#include "MotoSynth_classes.hpp"

namespace SDK
{

class UMotorSimOutputMotoSynth final : public USynthComponentMoto
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotorSimOutputMotoSynth">();
	}
	static class UMotorSimOutputMotoSynth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotorSimOutputMotoSynth>();
	}
};
static_assert(alignof(UMotorSimOutputMotoSynth) == 0x000010, "Wrong alignment on UMotorSimOutputMotoSynth");
static_assert(sizeof(UMotorSimOutputMotoSynth) == 0x000AC0, "Wrong size on UMotorSimOutputMotoSynth");

}
