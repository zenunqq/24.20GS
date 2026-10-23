#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UGrindRail_TipComponent_C final : public UStaticMeshComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GrindRail_TipComponent_C">();
	}
	static class UGrindRail_TipComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGrindRail_TipComponent_C>();
	}
};
static_assert(alignof(UGrindRail_TipComponent_C) == 0x000010, "Wrong alignment on UGrindRail_TipComponent_C");
static_assert(sizeof(UGrindRail_TipComponent_C) == 0x000620, "Wrong size on UGrindRail_TipComponent_C");

}
