#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_31[0x7];
	class FString                                 CallFunc_SelectString_ReturnValue;
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;
};
static_assert(alignof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild) == 0x000008, "Wrong alignment on B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild");
static_assert(sizeof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild) == 0x000098, "Wrong size on B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, EntryPoint) == 0x000000, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_Conv_VectorToString_ReturnValue) == 0x000020, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_HasAuthority_ReturnValue) == 0x000030, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_SelectString_ReturnValue) == 0x000038, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000088, "Member 'B_WilliePete_WaterBodyChild_C_ExecuteUbergraph_B_WilliePete_WaterBodyChild::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

}
