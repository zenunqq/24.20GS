#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection final
{
public:
	int32                                         Temp_int_Variable;
	class FName                                   Temp_name_Variable;
	class FName                                   Temp_name_Variable_1;
	class FName                                   Temp_name_Variable_2;
	class FName                                   Temp_name_Variable_3;
	uint8                                         Pad_14[0x4];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;
	uint8                                         Pad_24[0x4];
	class ABP_PlayerPawn_NonParticipant_C*        K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class UAnimMontage*                           CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage;
	class FName                                   K2Node_Select_Default;
};
static_assert(alignof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection) == 0x000008, "Wrong alignment on GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection");
static_assert(sizeof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection) == 0x000048, "Wrong size on GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, Temp_int_Variable) == 0x000000, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, Temp_name_Variable) == 0x000004, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, Temp_name_Variable_1) == 0x000008, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, Temp_name_Variable_2) == 0x00000C, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, Temp_name_Variable_3) == 0x000010, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, CallFunc_GetActivatingPawn_ReturnValue) == 0x000018, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000020, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant) == 0x000028, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::K2Node_DynamicCast_AsBP_Player_Pawn_Non_Participant' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage) == 0x000038, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::CallFunc_GetCurrentFullbodyHitReactionMontage_CurrentMontage' has a wrong offset!");
static_assert(offsetof(GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection, K2Node_Select_Default) == 0x000040, "Member 'GAB_ApplyFullBodyHit_NonParticipant_C_PickFullBodyHitMontageSection::K2Node_Select_Default' has a wrong offset!");

}
