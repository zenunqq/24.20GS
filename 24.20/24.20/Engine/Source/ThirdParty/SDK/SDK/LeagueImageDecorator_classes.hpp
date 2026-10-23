#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class ULeagueImageDecorator_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeagueImageDecorator_C">();
	}
	static class ULeagueImageDecorator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeagueImageDecorator_C>();
	}
};
static_assert(alignof(ULeagueImageDecorator_C) == 0x000008, "Wrong alignment on ULeagueImageDecorator_C");
static_assert(sizeof(ULeagueImageDecorator_C) == 0x000030, "Wrong size on ULeagueImageDecorator_C");

}
