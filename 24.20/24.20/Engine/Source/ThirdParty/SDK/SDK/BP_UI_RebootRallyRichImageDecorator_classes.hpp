#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UBP_UI_RebootRallyRichImageDecorator_C final : public URichTextBlockImageDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_RebootRallyRichImageDecorator_C">();
	}
	static class UBP_UI_RebootRallyRichImageDecorator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_RebootRallyRichImageDecorator_C>();
	}
};
static_assert(alignof(UBP_UI_RebootRallyRichImageDecorator_C) == 0x000008, "Wrong alignment on UBP_UI_RebootRallyRichImageDecorator_C");
static_assert(sizeof(UBP_UI_RebootRallyRichImageDecorator_C) == 0x000030, "Wrong size on UBP_UI_RebootRallyRichImageDecorator_C");

}
