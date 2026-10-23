#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UCommonUIRichTextData_C final : public UCommonUIRichTextData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonUIRichTextData_C">();
	}
	static class UCommonUIRichTextData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIRichTextData_C>();
	}
};
static_assert(alignof(UCommonUIRichTextData_C) == 0x000008, "Wrong alignment on UCommonUIRichTextData_C");
static_assert(sizeof(UCommonUIRichTextData_C) == 0x000030, "Wrong size on UCommonUIRichTextData_C");

}
