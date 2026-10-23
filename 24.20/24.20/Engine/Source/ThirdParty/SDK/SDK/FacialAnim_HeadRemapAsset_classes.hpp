#pragma once

#include "Basic.hpp"

#include "FacialAnimSystem_classes.hpp"

namespace SDK
{

class UFacialAnim_HeadRemapAsset_C final : public UFacialLiveLinkRemapAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FacialAnim_HeadRemapAsset_C">();
	}
	static class UFacialAnim_HeadRemapAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFacialAnim_HeadRemapAsset_C>();
	}
};
static_assert(alignof(UFacialAnim_HeadRemapAsset_C) == 0x000008, "Wrong alignment on UFacialAnim_HeadRemapAsset_C");
static_assert(sizeof(UFacialAnim_HeadRemapAsset_C) == 0x000030, "Wrong size on UFacialAnim_HeadRemapAsset_C");

}
