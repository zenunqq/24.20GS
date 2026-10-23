#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UBPS24_AboutModal_Decorator_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_AboutModal_Decorator_C">();
	}
	static class UBPS24_AboutModal_Decorator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_AboutModal_Decorator_C>();
	}
};
static_assert(alignof(UBPS24_AboutModal_Decorator_C) == 0x000008, "Wrong alignment on UBPS24_AboutModal_Decorator_C");
static_assert(sizeof(UBPS24_AboutModal_Decorator_C) == 0x000030, "Wrong size on UBPS24_AboutModal_Decorator_C");

}
