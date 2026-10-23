#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC) == 0x000008, "Wrong alignment on GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC");
static_assert(sizeof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC) == 0x000048, "Wrong size on GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, EntryPoint) == 0x000000, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, Temp_int_Array_Index_Variable) == 0x000020, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000030, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, CallFunc_Array_Get_Item) == 0x000038, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'GCN_RezOut_NPC_C_ExecuteUbergraph_GCN_RezOut_NPC::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}
