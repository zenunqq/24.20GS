#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GAT_ActiveAbility_Hero_classes.hpp"

namespace SDK
{

class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_CommandoActiveAbility_C;
	struct FGameplayEventData                     Event_Data;
	class AFortPawn*                              CommandoPlayerPawn;
	bool                                          isAutoCommitted;
	bool                                          isStaminaLockedOut;

public:
	void ExecuteUbergraph_GAT_CommandoActiveAbility(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_CommandoActiveAbility_C">();
	}
	static class UGAT_CommandoActiveAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_CommandoActiveAbility_C>();
	}
};
static_assert(alignof(UGAT_CommandoActiveAbility_C) == 0x000008, "Wrong alignment on UGAT_CommandoActiveAbility_C");
static_assert(sizeof(UGAT_CommandoActiveAbility_C) == 0x000C48, "Wrong size on UGAT_CommandoActiveAbility_C");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, UberGraphFrame_GAT_CommandoActiveAbility_C) == 0x000B80, "Member 'UGAT_CommandoActiveAbility_C::UberGraphFrame_GAT_CommandoActiveAbility_C' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, Event_Data) == 0x000B88, "Member 'UGAT_CommandoActiveAbility_C::Event_Data' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, CommandoPlayerPawn) == 0x000C38, "Member 'UGAT_CommandoActiveAbility_C::CommandoPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, isAutoCommitted) == 0x000C40, "Member 'UGAT_CommandoActiveAbility_C::isAutoCommitted' has a wrong offset!");
static_assert(offsetof(UGAT_CommandoActiveAbility_C, isStaminaLockedOut) == 0x000C41, "Member 'UGAT_CommandoActiveAbility_C::isStaminaLockedOut' has a wrong offset!");

}
