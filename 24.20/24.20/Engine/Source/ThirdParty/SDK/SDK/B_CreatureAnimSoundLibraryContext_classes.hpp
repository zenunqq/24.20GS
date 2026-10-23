#pragma once

#include "Basic.hpp"

#include "SoundLibrary_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UB_CreatureAnimSoundLibraryContext_C final : public USoundLibraryAnimContext
{
public:
	bool PlaySound(class USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CreatureAnimSoundLibraryContext_C">();
	}
	static class UB_CreatureAnimSoundLibraryContext_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_CreatureAnimSoundLibraryContext_C>();
	}
};
static_assert(alignof(UB_CreatureAnimSoundLibraryContext_C) == 0x000008, "Wrong alignment on UB_CreatureAnimSoundLibraryContext_C");
static_assert(sizeof(UB_CreatureAnimSoundLibraryContext_C) == 0x000098, "Wrong size on UB_CreatureAnimSoundLibraryContext_C");

}
