#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"

namespace SDK
{

class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_Creative_TriggeredAbility_C;
	TArray<class FName>                           OverriddenPropertyNames;

public:
	void AbilityTimeout();
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void SetupAbilityFailsafeTimer(double Duration);

	void IsPropertyOverridden(class FName PropertyName, bool* bResult) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_Creative_TriggeredAbility_C">();
	}
	static class UGAT_Creative_TriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_Creative_TriggeredAbility_C>();
	}
};
static_assert(alignof(UGAT_Creative_TriggeredAbility_C) == 0x000008, "Wrong alignment on UGAT_Creative_TriggeredAbility_C");
static_assert(sizeof(UGAT_Creative_TriggeredAbility_C) == 0x000B50, "Wrong size on UGAT_Creative_TriggeredAbility_C");
static_assert(offsetof(UGAT_Creative_TriggeredAbility_C, UberGraphFrame_GAT_Creative_TriggeredAbility_C) == 0x000B38, "Member 'UGAT_Creative_TriggeredAbility_C::UberGraphFrame_GAT_Creative_TriggeredAbility_C' has a wrong offset!");
static_assert(offsetof(UGAT_Creative_TriggeredAbility_C, OverriddenPropertyNames) == 0x000B40, "Member 'UGAT_Creative_TriggeredAbility_C::OverriddenPropertyNames' has a wrong offset!");

}
