#pragma once

#include "Basic.hpp"

#include "GC_Athena_OutsideSafeZone_classes.hpp"

namespace SDK
{

class AGC_Athena_OutsideSafeZone_Stage02_C final : public AGC_Athena_OutsideSafeZone_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_OutsideSafeZone_Stage02_C">();
	}
	static class AGC_Athena_OutsideSafeZone_Stage02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Athena_OutsideSafeZone_Stage02_C>();
	}
};
static_assert(alignof(AGC_Athena_OutsideSafeZone_Stage02_C) == 0x000008, "Wrong alignment on AGC_Athena_OutsideSafeZone_Stage02_C");
static_assert(sizeof(AGC_Athena_OutsideSafeZone_Stage02_C) == 0x000A18, "Wrong size on AGC_Athena_OutsideSafeZone_Stage02_C");

}
