#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FrontendCamera_VaultRotator_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FrontendCamera_VaultRotator_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on FrontendCamera_VaultRotator_C_BP_OnDeactivated");
static_assert(sizeof(FrontendCamera_VaultRotator_C_BP_OnDeactivated) == 0x000008, "Wrong size on FrontendCamera_VaultRotator_C_BP_OnDeactivated");
static_assert(offsetof(FrontendCamera_VaultRotator_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'FrontendCamera_VaultRotator_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct FrontendCamera_VaultRotator_C_SetVaultRotatorLighting final
{
public:
	class FName                                   ItemRotatorTag;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TArray<class AVaultWorld_C*>                  CallFunc_GetAllActorsOfClass_OutActors;
	class AVaultWorld_C*                          CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class AVaultRotator_C*                        CallFunc_GetVaultRotator_VaultRotator;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_ActorHasTag_ReturnValue;
};
static_assert(alignof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting) == 0x000008, "Wrong alignment on FrontendCamera_VaultRotator_C_SetVaultRotatorLighting");
static_assert(sizeof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting) == 0x000040, "Wrong size on FrontendCamera_VaultRotator_C_SetVaultRotatorLighting");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, ItemRotatorTag) == 0x000000, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::ItemRotatorTag' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, Temp_int_Array_Index_Variable) == 0x000004, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_Array_Get_Item) == 0x000020, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_GetVaultRotator_VaultRotator) == 0x000030, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_GetVaultRotator_VaultRotator' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_SetVaultRotatorLighting, CallFunc_ActorHasTag_ReturnValue) == 0x000039, "Member 'FrontendCamera_VaultRotator_C_SetVaultRotatorLighting::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");

struct FrontendCamera_VaultRotator_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FrontendCamera_VaultRotator_C_BP_OnActivated) == 0x000008, "Wrong alignment on FrontendCamera_VaultRotator_C_BP_OnActivated");
static_assert(sizeof(FrontendCamera_VaultRotator_C_BP_OnActivated) == 0x000008, "Wrong size on FrontendCamera_VaultRotator_C_BP_OnActivated");
static_assert(offsetof(FrontendCamera_VaultRotator_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'FrontendCamera_VaultRotator_C_BP_OnActivated::PlayerController' has a wrong offset!");

struct FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1C[0x4];
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_51[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator) == 0x000008, "Wrong alignment on FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator");
static_assert(sizeof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator) == 0x000058, "Wrong size on FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, EntryPoint) == 0x000000, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::EntryPoint' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, Temp_int_Array_Index_Variable) == 0x000018, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, K2Node_Event_PlayerController_1) == 0x000020, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, K2Node_Event_PlayerController) == 0x000038, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, CallFunc_Array_Get_Item) == 0x000040, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
