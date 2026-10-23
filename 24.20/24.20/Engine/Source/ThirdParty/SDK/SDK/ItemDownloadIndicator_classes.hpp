#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UItemDownloadIndicator_C final : public UFortItemDownloadIndicator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDownloadIndicator_C">();
	}
	static class UItemDownloadIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDownloadIndicator_C>();
	}
};
static_assert(alignof(UItemDownloadIndicator_C) == 0x000008, "Wrong alignment on UItemDownloadIndicator_C");
static_assert(sizeof(UItemDownloadIndicator_C) == 0x0002B8, "Wrong size on UItemDownloadIndicator_C");

}
