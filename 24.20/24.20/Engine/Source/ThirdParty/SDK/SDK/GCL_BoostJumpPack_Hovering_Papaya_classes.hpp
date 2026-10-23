#pragma once

#include "Basic.hpp"

#include "GCL_BoostJumpPack_Hovering_Infinite_classes.hpp"

namespace SDK
{

class AGCL_BoostJumpPack_Hovering_Papaya_C final : public AGCL_BoostJumpPack_Hovering_Infinite_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_BoostJumpPack_Hovering_Papaya_C">();
	}
	static class AGCL_BoostJumpPack_Hovering_Papaya_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_BoostJumpPack_Hovering_Papaya_C>();
	}
};
static_assert(alignof(AGCL_BoostJumpPack_Hovering_Papaya_C) == 0x000008, "Wrong alignment on AGCL_BoostJumpPack_Hovering_Papaya_C");
static_assert(sizeof(AGCL_BoostJumpPack_Hovering_Papaya_C) == 0x000AE0, "Wrong size on AGCL_BoostJumpPack_Hovering_Papaya_C");

}
