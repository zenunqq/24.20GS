#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_6[0x2];
	TDelegate<void(TArray<class AActor*>& SpawnedActors, bool bSuccess)> Temp_delegate_Variable;
	uint8                                         Pad_14[0xC];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthenaFromContext_ReturnValue;
	class UFortAthenaLivingWorldManager*          CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_91[0x3];
	int32                                         CallFunc_TrySpawnEvent_RequestId;
	bool                                          CallFunc_TrySpawnEvent_ReturnValue;
	uint8                                         Pad_99[0x3];
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base) == 0x000010, "Wrong alignment on BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base");
static_assert(sizeof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base) == 0x0000A0, "Wrong size on BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, EntryPoint) == 0x000000, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, Temp_delegate_Variable) == 0x000008, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_GetGameStateAthenaFromContext_ReturnValue) == 0x000080, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_GetGameStateAthenaFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_GetComponentByClass_ReturnValue) == 0x000088, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_TrySpawnEvent_RequestId) == 0x000094, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_TrySpawnEvent_RequestId' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_TrySpawnEvent_ReturnValue) == 0x000098, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_TrySpawnEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base, CallFunc_Delay_Duration_ImplicitCast) == 0x00009C, "Member 'BP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}
