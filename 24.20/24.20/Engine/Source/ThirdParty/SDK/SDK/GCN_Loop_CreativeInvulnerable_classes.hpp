#pragma once

#include "Basic.hpp"

#include "GCN_Loop_GhostMode_classes.hpp"

namespace SDK
{

class AGCN_Loop_CreativeInvulnerable_C final : public AGCN_Loop_GhostMode_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_CreativeInvulnerable_C">();
	}
	static class AGCN_Loop_CreativeInvulnerable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_CreativeInvulnerable_C>();
	}
};
static_assert(alignof(AGCN_Loop_CreativeInvulnerable_C) == 0x000008, "Wrong alignment on AGCN_Loop_CreativeInvulnerable_C");
static_assert(sizeof(AGCN_Loop_CreativeInvulnerable_C) == 0x0009D0, "Wrong size on AGCN_Loop_CreativeInvulnerable_C");

}
