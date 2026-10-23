#pragma once

#include "Basic.hpp"

#include "SoundLibrary_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UB_CreatureSoundLibraryContext_C final : public USoundLibrarySimpleContext
{
public:
	bool PlaySound(class USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CreatureSoundLibraryContext_C">();
	}
	static class UB_CreatureSoundLibraryContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_CreatureSoundLibraryContext_C>();
	}
};
static_assert(alignof(UB_CreatureSoundLibraryContext_C) == 0x000008, "Wrong alignment on UB_CreatureSoundLibraryContext_C");
static_assert(sizeof(UB_CreatureSoundLibraryContext_C) == 0x0000B0, "Wrong size on UB_CreatureSoundLibraryContext_C");

}
