#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SSI_BpLib_BpTools_C_OnLocalPlayersTeam final
{
public:
	class AActor*                                 TargetActor;
	class UObject*                                __WorldContext;
	bool                                          Return_Value;
	bool                                          TeamValid;
	uint8                                         Pad_12[0x6];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_41[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam) == 0x000008, "Wrong alignment on SSI_BpLib_BpTools_C_OnLocalPlayersTeam");
static_assert(sizeof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam) == 0x000048, "Wrong size on SSI_BpLib_BpTools_C_OnLocalPlayersTeam");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, TargetActor) == 0x000000, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::TargetActor' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, __WorldContext) == 0x000008, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::__WorldContext' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, Return_Value) == 0x000010, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::Return_Value' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, TeamValid) == 0x000011, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::TeamValid' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000018, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, Temp_int_Array_Index_Variable) == 0x000028, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Array_Get_Item) == 0x000030, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_OnSameTeam_ReturnValue) == 0x000038, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SSI_BpLib_BpTools_C_OnLocalPlayersTeam, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'SSI_BpLib_BpTools_C_OnLocalPlayersTeam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
