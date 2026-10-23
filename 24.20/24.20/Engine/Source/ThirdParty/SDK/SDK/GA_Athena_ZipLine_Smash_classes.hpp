#pragma once

#include "Basic.hpp"

#include "GA_Athena_ZipLine_SmashParent_classes.hpp"

namespace SDK
{

class UGA_Athena_ZipLine_Smash_C final : public UGA_Athena_ZipLine_SmashParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ZipLine_Smash_C">();
	}
	static class UGA_Athena_ZipLine_Smash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ZipLine_Smash_C>();
	}
};
static_assert(alignof(UGA_Athena_ZipLine_Smash_C) == 0x000008, "Wrong alignment on UGA_Athena_ZipLine_Smash_C");
static_assert(sizeof(UGA_Athena_ZipLine_Smash_C) == 0x000BF0, "Wrong size on UGA_Athena_ZipLine_Smash_C");

}
