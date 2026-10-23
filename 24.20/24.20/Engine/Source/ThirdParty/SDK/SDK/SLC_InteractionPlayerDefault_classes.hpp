#pragma once

#include "Basic.hpp"

#include "SoundLibrary_classes.hpp"

namespace SDK
{

class USLC_InteractionPlayerDefault_C final : public USoundLibraryComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SLC_InteractionPlayerDefault_C">();
	}
	static class USLC_InteractionPlayerDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USLC_InteractionPlayerDefault_C>();
	}
};
static_assert(alignof(USLC_InteractionPlayerDefault_C) == 0x000008, "Wrong alignment on USLC_InteractionPlayerDefault_C");
static_assert(sizeof(USLC_InteractionPlayerDefault_C) == 0x0000E0, "Wrong size on USLC_InteractionPlayerDefault_C");

}
