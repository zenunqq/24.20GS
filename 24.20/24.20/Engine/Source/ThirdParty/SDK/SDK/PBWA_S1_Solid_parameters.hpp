#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FAnimatingMaterialPair                 K2Node_MakeStruct_AnimatingMaterialPair;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid) == 0x000008, "Wrong alignment on PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid");
static_assert(sizeof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid) == 0x000020, "Wrong size on PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid");
static_assert(offsetof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid, EntryPoint) == 0x000000, "Member 'PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid::EntryPoint' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid, K2Node_MakeStruct_AnimatingMaterialPair) == 0x000008, "Member 'PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid::K2Node_MakeStruct_AnimatingMaterialPair' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid, CallFunc_Array_Add_ReturnValue) == 0x000018, "Member 'PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct PBWA_S1_Solid_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(PBWA_S1_Solid_C_UserConstructionScript) == 0x000004, "Wrong alignment on PBWA_S1_Solid_C_UserConstructionScript");
static_assert(sizeof(PBWA_S1_Solid_C_UserConstructionScript) == 0x00000C, "Wrong size on PBWA_S1_Solid_C_UserConstructionScript");
static_assert(offsetof(PBWA_S1_Solid_C_UserConstructionScript, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'PBWA_S1_Solid_C_UserConstructionScript::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_UserConstructionScript, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'PBWA_S1_Solid_C_UserConstructionScript::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'PBWA_S1_Solid_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}
