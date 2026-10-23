#pragma once

#include "Basic.hpp"

#include "GCN_RezIn_classes.hpp"

namespace SDK
{

class AGCN_RezIn_CreativeRespawn_C final : public AGCN_RezIn_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RezIn_CreativeRespawn_C">();
	}
	static class AGCN_RezIn_CreativeRespawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_RezIn_CreativeRespawn_C>();
	}
};
static_assert(alignof(AGCN_RezIn_CreativeRespawn_C) == 0x000008, "Wrong alignment on AGCN_RezIn_CreativeRespawn_C");
static_assert(sizeof(AGCN_RezIn_CreativeRespawn_C) == 0x0006F0, "Wrong size on AGCN_RezIn_CreativeRespawn_C");

}
