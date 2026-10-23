#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UB_DudeBro_VortexLoop_Shake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DudeBro_VortexLoop_Shake_C">();
	}
	static class UB_DudeBro_VortexLoop_Shake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_DudeBro_VortexLoop_Shake_C>();
	}
};
static_assert(alignof(UB_DudeBro_VortexLoop_Shake_C) == 0x000010, "Wrong alignment on UB_DudeBro_VortexLoop_Shake_C");
static_assert(sizeof(UB_DudeBro_VortexLoop_Shake_C) == 0x000210, "Wrong size on UB_DudeBro_VortexLoop_Shake_C");

}
