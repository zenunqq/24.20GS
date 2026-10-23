#pragma once

#include "Basic.hpp"

#include "GAB_Emote_Generic_classes.hpp"

namespace SDK
{

class UGAB_Emote_Generic_Transformation_C final : public UGAB_Emote_Generic_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Emote_Generic_Transformation_C">();
	}
	static class UGAB_Emote_Generic_Transformation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Emote_Generic_Transformation_C>();
	}
};
static_assert(alignof(UGAB_Emote_Generic_Transformation_C) == 0x000008, "Wrong alignment on UGAB_Emote_Generic_Transformation_C");
static_assert(sizeof(UGAB_Emote_Generic_Transformation_C) == 0x000B88, "Wrong size on UGAB_Emote_Generic_Transformation_C");

}
