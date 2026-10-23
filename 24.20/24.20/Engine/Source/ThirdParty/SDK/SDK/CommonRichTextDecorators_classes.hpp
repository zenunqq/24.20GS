#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UCommonRichTextDecorators_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonRichTextDecorators_C">();
	}
	static class UCommonRichTextDecorators_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonRichTextDecorators_C>();
	}
};
static_assert(alignof(UCommonRichTextDecorators_C) == 0x000008, "Wrong alignment on UCommonRichTextDecorators_C");
static_assert(sizeof(UCommonRichTextDecorators_C) == 0x000030, "Wrong size on UCommonRichTextDecorators_C");

}
