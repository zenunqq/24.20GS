#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GAT_TriggeredAbility_C_EndAbilityWithReason final
{
public:
	class FString                                 Reason;
};
static_assert(alignof(GAT_TriggeredAbility_C_EndAbilityWithReason) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_EndAbilityWithReason");
static_assert(sizeof(GAT_TriggeredAbility_C_EndAbilityWithReason) == 0x000010, "Wrong size on GAT_TriggeredAbility_C_EndAbilityWithReason");
static_assert(offsetof(GAT_TriggeredAbility_C_EndAbilityWithReason, Reason) == 0x000000, "Member 'GAT_TriggeredAbility_C_EndAbilityWithReason::Reason' has a wrong offset!");

struct GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayEventData                     K2Node_Event_EventData;
};
static_assert(alignof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility");
static_assert(sizeof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility) == 0x0000B8, "Wrong size on GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility");
static_assert(offsetof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility, EntryPoint) == 0x000000, "Member 'GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility, K2Node_Event_EventData) == 0x000008, "Member 'GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility::K2Node_Event_EventData' has a wrong offset!");

struct GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAT_TriggeredAbility_C_SetHolsterWeaponWithName final
{
public:
	class AFortPawn*                              Target_Fort_Pawn;
	bool                                          ShouldHolster;
	bool                                          PlayEquipAnim;
	bool                                          ShowDebugPrintName;
	bool                                          IsWeaponHolstered;
	bool                                          OperationSuccessful;
	bool                                          bOperationSuccessful;
	bool                                          CallFunc_BooleanXOR_ReturnValue;
	uint8                                         Pad_F[0x1];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
};
static_assert(alignof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_SetHolsterWeaponWithName");
static_assert(sizeof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName) == 0x000030, "Wrong size on GAT_TriggeredAbility_C_SetHolsterWeaponWithName");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, Target_Fort_Pawn) == 0x000000, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::Target_Fort_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, ShouldHolster) == 0x000008, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::ShouldHolster' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, PlayEquipAnim) == 0x000009, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::PlayEquipAnim' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, ShowDebugPrintName) == 0x00000A, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::ShowDebugPrintName' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, IsWeaponHolstered) == 0x00000B, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::IsWeaponHolstered' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, OperationSuccessful) == 0x00000C, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::OperationSuccessful' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, bOperationSuccessful) == 0x00000D, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::bOperationSuccessful' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_BooleanXOR_ReturnValue) == 0x00000E, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_GetClassDisplayName_ReturnValue) == 0x000018, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_SetHolsterWeaponWithName, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'GAT_TriggeredAbility_C_SetHolsterWeaponWithName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

struct GAT_TriggeredAbility_C_TriggeredAbilitySetup final
{
public:
	class UAbilitySystemComponent*                AbilitySystemIn;
	class UAbilitySystemComponent*                AbilitySystemOut;
};
static_assert(alignof(GAT_TriggeredAbility_C_TriggeredAbilitySetup) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_TriggeredAbilitySetup");
static_assert(sizeof(GAT_TriggeredAbility_C_TriggeredAbilitySetup) == 0x000010, "Wrong size on GAT_TriggeredAbility_C_TriggeredAbilitySetup");
static_assert(offsetof(GAT_TriggeredAbility_C_TriggeredAbilitySetup, AbilitySystemIn) == 0x000000, "Member 'GAT_TriggeredAbility_C_TriggeredAbilitySetup::AbilitySystemIn' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_TriggeredAbilitySetup, AbilitySystemOut) == 0x000008, "Member 'GAT_TriggeredAbility_C_TriggeredAbilitySetup::AbilitySystemOut' has a wrong offset!");

}
