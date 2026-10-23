#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_Creative_TriggeredAbility_classes.hpp"

namespace SDK
{

class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Creative_TriggeredAbility_Pawn_C;
	class AFortPawn*                              AbilityOwner;

public:
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void SetupPawnActorAbility(class AFortPawn** FortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Creative_TriggeredAbility_Pawn_C">();
	}
	static class UGAT_Creative_TriggeredAbility_Pawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Creative_TriggeredAbility_Pawn_C>();
	}
};
static_assert(alignof(UGAT_Creative_TriggeredAbility_Pawn_C) == 0x000008, "Wrong alignment on UGAT_Creative_TriggeredAbility_Pawn_C");
static_assert(sizeof(UGAT_Creative_TriggeredAbility_Pawn_C) == 0x000B60, "Wrong size on UGAT_Creative_TriggeredAbility_Pawn_C");
static_assert(offsetof(UGAT_Creative_TriggeredAbility_Pawn_C, UberGraphFrame_GAT_Creative_TriggeredAbility_Pawn_C) == 0x000B50, "Member 'UGAT_Creative_TriggeredAbility_Pawn_C::UberGraphFrame_GAT_Creative_TriggeredAbility_Pawn_C' has a wrong offset!");
static_assert(offsetof(UGAT_Creative_TriggeredAbility_Pawn_C, AbilityOwner) == 0x000B58, "Member 'UGAT_Creative_TriggeredAbility_Pawn_C::AbilityOwner' has a wrong offset!");

}
