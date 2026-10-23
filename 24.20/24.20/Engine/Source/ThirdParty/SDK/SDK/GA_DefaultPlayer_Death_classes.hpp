#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GAB_GenericDeath_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UGA_DefaultPlayer_Death_C final : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_DefaultPlayer_Death_C;
	struct FGameplayTag                           FadeCapsuleStWCue;
	struct FGameplayTag                           FadeCapsuleAthenaCue;

public:
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint);
	void PickDeathMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_Death_C">();
	}
	static class UGA_DefaultPlayer_Death_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_Death_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_Death_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_Death_C");
static_assert(sizeof(UGA_DefaultPlayer_Death_C) == 0x000D10, "Wrong size on UGA_DefaultPlayer_Death_C");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, UberGraphFrame_GA_DefaultPlayer_Death_C) == 0x000D00, "Member 'UGA_DefaultPlayer_Death_C::UberGraphFrame_GA_DefaultPlayer_Death_C' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, FadeCapsuleStWCue) == 0x000D08, "Member 'UGA_DefaultPlayer_Death_C::FadeCapsuleStWCue' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Death_C, FadeCapsuleAthenaCue) == 0x000D0C, "Member 'UGA_DefaultPlayer_Death_C::FadeCapsuleAthenaCue' has a wrong offset!");

}
