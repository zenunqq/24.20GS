#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_Athena_Tethered_PassiveTriggered_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           GCN_BoostTag;
	struct FGameplayTag                           GCN_JumpTag;
	struct FGameplayTag                           ZiplineExit;

public:
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Tethered_PassiveTriggered_C">();
	}
	static class UGA_Athena_Tethered_PassiveTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Tethered_PassiveTriggered_C>();
	}
};
static_assert(alignof(UGA_Athena_Tethered_PassiveTriggered_C) == 0x000008, "Wrong alignment on UGA_Athena_Tethered_PassiveTriggered_C");
static_assert(sizeof(UGA_Athena_Tethered_PassiveTriggered_C) == 0x000B40, "Wrong size on UGA_Athena_Tethered_PassiveTriggered_C");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, GCN_BoostTag) == 0x000B30, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::GCN_BoostTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, GCN_JumpTag) == 0x000B34, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::GCN_JumpTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, ZiplineExit) == 0x000B38, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::ZiplineExit' has a wrong offset!");

}
