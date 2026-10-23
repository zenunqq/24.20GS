#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics) == 0x000004, "Wrong alignment on Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics");
static_assert(sizeof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics) == 0x000004, "Wrong size on Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics");
static_assert(offsetof(Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics, EntryPoint) == 0x000000, "Member 'Cinematic_TeamMics_C_ExecuteUbergraph_Cinematic_TeamMics::EntryPoint' has a wrong offset!");

struct Cinematic_TeamMics_C_Update final
{
public:
	struct FFortTeamMemberInfo                    UpdatedMemberInfo;
	struct FUniqueNetIdRepl                       PlayerNetId;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_285[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_29A[0x2];
	int32                                         K2Node_Select_Default_1;
	bool                                          CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue;
	uint8                                         Pad_2A1[0x7];
	struct FUniqueNetIdRepl                       K2Node_Select_Default_2;
};
static_assert(alignof(Cinematic_TeamMics_C_Update) == 0x000010, "Wrong alignment on Cinematic_TeamMics_C_Update");
static_assert(sizeof(Cinematic_TeamMics_C_Update) == 0x0002E0, "Wrong size on Cinematic_TeamMics_C_Update");
static_assert(offsetof(Cinematic_TeamMics_C_Update, UpdatedMemberInfo) == 0x000000, "Member 'Cinematic_TeamMics_C_Update::UpdatedMemberInfo' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, PlayerNetId) == 0x000250, "Member 'Cinematic_TeamMics_C_Update::PlayerNetId' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable) == 0x000280, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable_1) == 0x000281, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_byte_Variable) == 0x000282, "Member 'Cinematic_TeamMics_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_byte_Variable_1) == 0x000283, "Member 'Cinematic_TeamMics_C_Update::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_bool_Variable_2) == 0x000284, "Member 'Cinematic_TeamMics_C_Update::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_int_Variable) == 0x000288, "Member 'Cinematic_TeamMics_C_Update::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, Temp_int_Variable_1) == 0x00028C, "Member 'Cinematic_TeamMics_C_Update::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_GetContext_ReturnValue) == 0x000290, "Member 'Cinematic_TeamMics_C_Update::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_IsValid_ReturnValue) == 0x000298, "Member 'Cinematic_TeamMics_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select_Default) == 0x000299, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select_Default_1) == 0x00029C, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue) == 0x0002A0, "Member 'Cinematic_TeamMics_C_Update::CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Cinematic_TeamMics_C_Update, K2Node_Select_Default_2) == 0x0002A8, "Member 'Cinematic_TeamMics_C_Update::K2Node_Select_Default_2' has a wrong offset!");

}
