#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_DefaultPlayer_PetOtherPet_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330();
	void OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_PetOtherPet_C">();
	}
	static class UGA_DefaultPlayer_PetOtherPet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_PetOtherPet_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_PetOtherPet_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_PetOtherPet_C");
static_assert(sizeof(UGA_DefaultPlayer_PetOtherPet_C) == 0x000B30, "Wrong size on UGA_DefaultPlayer_PetOtherPet_C");
static_assert(offsetof(UGA_DefaultPlayer_PetOtherPet_C, UberGraphFrame) == 0x000B28, "Member 'UGA_DefaultPlayer_PetOtherPet_C::UberGraphFrame' has a wrong offset!");

}
