#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;
	class UStaticMesh*                            CallFunc_Array_Get_Item;
};
static_assert(alignof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent) == 0x000008, "Wrong alignment on PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent");
static_assert(sizeof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent) == 0x000020, "Wrong size on PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, EntryPoint) == 0x000000, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, CallFunc_Array_Length_ReturnValue_1) == 0x000010, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000014, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent, CallFunc_Array_Get_Item) == 0x000018, "Member 'PBW_BP_Parent_C_ExecuteUbergraph_PBW_BP_Parent::CallFunc_Array_Get_Item' has a wrong offset!");

}
