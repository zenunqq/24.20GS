#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class IRidingGeneric_Interafce_C final : public IInterface
{
public:
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void ToggleRidingAlternative();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RidingGeneric_Interafce_C">();
	}
	static class IRidingGeneric_Interafce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IRidingGeneric_Interafce_C>();
	}
};
static_assert(alignof(IRidingGeneric_Interafce_C) == 0x000008, "Wrong alignment on IRidingGeneric_Interafce_C");
static_assert(sizeof(IRidingGeneric_Interafce_C) == 0x000028, "Wrong size on IRidingGeneric_Interafce_C");

}
