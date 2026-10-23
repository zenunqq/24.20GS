#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UAthenaChallengeNPC_Decorator_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeNPC_Decorator_C">();
	}
	static class UAthenaChallengeNPC_Decorator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeNPC_Decorator_C>();
	}
};
static_assert(alignof(UAthenaChallengeNPC_Decorator_C) == 0x000008, "Wrong alignment on UAthenaChallengeNPC_Decorator_C");
static_assert(sizeof(UAthenaChallengeNPC_Decorator_C) == 0x000030, "Wrong size on UAthenaChallengeNPC_Decorator_C");

}
