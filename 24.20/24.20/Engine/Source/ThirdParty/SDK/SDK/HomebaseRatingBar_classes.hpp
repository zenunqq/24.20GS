#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UHomebaseRatingBar_C final : public UFortMaterialProgressBar
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HomebaseRatingBar_C">();
	}
	static class UHomebaseRatingBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHomebaseRatingBar_C>();
	}
};
static_assert(alignof(UHomebaseRatingBar_C) == 0x000008, "Wrong alignment on UHomebaseRatingBar_C");
static_assert(sizeof(UHomebaseRatingBar_C) == 0x000390, "Wrong size on UHomebaseRatingBar_C");

}
