#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UBPS24_RichTextDecorators_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS24_RichTextDecorators_C">();
	}
	static class UBPS24_RichTextDecorators_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS24_RichTextDecorators_C>();
	}
};
static_assert(alignof(UBPS24_RichTextDecorators_C) == 0x000008, "Wrong alignment on UBPS24_RichTextDecorators_C");
static_assert(sizeof(UBPS24_RichTextDecorators_C) == 0x000030, "Wrong size on UBPS24_RichTextDecorators_C");

}
