#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent final
{
public:
	class FString                                 InPresetEnvName;
};
static_assert(alignof(BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent) == 0x000008, "Wrong alignment on BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent");
static_assert(sizeof(BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent) == 0x000010, "Wrong size on BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent");
static_assert(offsetof(BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent, InPresetEnvName) == 0x000000, "Member 'BP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent::InPresetEnvName' has a wrong offset!");

struct BP_Frontend_ShopBG_C_SetDynamicBG final
{
public:
	class UTexture*                               InTexture;
};
static_assert(alignof(BP_Frontend_ShopBG_C_SetDynamicBG) == 0x000008, "Wrong alignment on BP_Frontend_ShopBG_C_SetDynamicBG");
static_assert(sizeof(BP_Frontend_ShopBG_C_SetDynamicBG) == 0x000008, "Wrong size on BP_Frontend_ShopBG_C_SetDynamicBG");
static_assert(offsetof(BP_Frontend_ShopBG_C_SetDynamicBG, InTexture) == 0x000000, "Member 'BP_Frontend_ShopBG_C_SetDynamicBG::InTexture' has a wrong offset!");

struct BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	class FString                                 K2Node_CustomEvent_InPresetEnvName;
	bool                                          K2Node_SwitchString_CmpSuccess;
	uint8                                         Pad_21[0x7];
	TArray<class ACMSLobbyDirector_C*>            CallFunc_GetAllActorsOfClass_OutActors;
	class ACMSLobbyDirector_C*                    CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_46[0x2];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          K2Node_SwitchString_CmpSuccess_1;
	uint8                                         Pad_51[0x7];
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;
	class AActor*                                 CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_75[0x3];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	class UTexture*                               K2Node_CustomEvent_InTexture;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          K2Node_SwitchString_CmpSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_8F[0x1];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
};
static_assert(alignof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG) == 0x000008, "Wrong alignment on BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG");
static_assert(sizeof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG) == 0x0000A0, "Wrong size on BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, EntryPoint) == 0x000000, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000008, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, K2Node_CustomEvent_InPresetEnvName) == 0x000010, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::K2Node_CustomEvent_InPresetEnvName' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, K2Node_SwitchString_CmpSuccess) == 0x000020, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue) == 0x000045, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, K2Node_SwitchString_CmpSuccess_1) == 0x000050, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::K2Node_SwitchString_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_GetAllActorsWithTag_OutActors) == 0x000058, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000074, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000078, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, K2Node_CustomEvent_InTexture) == 0x000080, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::K2Node_CustomEvent_InTexture' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_2) == 0x000089, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, K2Node_SwitchString_CmpSuccess_2) == 0x00008A, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::K2Node_SwitchString_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_3) == 0x00008B, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_4) == 0x00008C, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue) == 0x00008D, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Not_PreBool_ReturnValue) == 0x00008E, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000090, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_5) == 0x000098, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_6) == 0x000099, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_7) == 0x00009A, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_IsValid_ReturnValue_8) == 0x00009B, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1) == 0x00009C, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG, CallFunc_Not_PreBool_ReturnValue_1) == 0x00009D, "Member 'BP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}
