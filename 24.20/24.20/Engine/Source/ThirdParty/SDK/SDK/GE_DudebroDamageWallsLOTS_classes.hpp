#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGE_DudebroDamageWallsLOTS_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DudebroDamageWallsLOTS_C">();
	}
	static class UGE_DudebroDamageWallsLOTS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DudebroDamageWallsLOTS_C>();
	}
};
static_assert(alignof(UGE_DudebroDamageWallsLOTS_C) == 0x000008, "Wrong alignment on UGE_DudebroDamageWallsLOTS_C");
static_assert(sizeof(UGE_DudebroDamageWallsLOTS_C) == 0x000858, "Wrong size on UGE_DudebroDamageWallsLOTS_C");

}
