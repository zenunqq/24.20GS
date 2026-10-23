#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FInteriorAudioScanResults              K2Node_Event_ScanResults;
	class UInteriorAudioComponent_C*              CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager) == 0x000008, "Wrong alignment on B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager");
static_assert(sizeof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager) == 0x000098, "Wrong size on B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, EntryPoint) == 0x000000, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, Temp_int_Array_Index_Variable) == 0x000004, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, K2Node_Event_ScanResults) == 0x000010, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::K2Node_Event_ScanResults' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, CallFunc_Array_Get_Item) == 0x000088, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager, CallFunc_Less_IntInt_ReturnValue) == 0x000094, "Member 'B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct B_InteriorAudioManager_C_OnComponentAdded final
{
public:
	class UInteriorAudioComponent_C*              Component;
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
};
static_assert(alignof(B_InteriorAudioManager_C_OnComponentAdded) == 0x000008, "Wrong alignment on B_InteriorAudioManager_C_OnComponentAdded");
static_assert(sizeof(B_InteriorAudioManager_C_OnComponentAdded) == 0x000010, "Wrong size on B_InteriorAudioManager_C_OnComponentAdded");
static_assert(offsetof(B_InteriorAudioManager_C_OnComponentAdded, Component) == 0x000000, "Member 'B_InteriorAudioManager_C_OnComponentAdded::Component' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_OnComponentAdded, CallFunc_Array_AddUnique_ReturnValue) == 0x000008, "Member 'B_InteriorAudioManager_C_OnComponentAdded::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

struct B_InteriorAudioManager_C_OnComponentRemoved final
{
public:
	class UInteriorAudioComponent_C*              Component;
	class UInteriorAudioComponent_C*              NewLocalVar;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
};
static_assert(alignof(B_InteriorAudioManager_C_OnComponentRemoved) == 0x000008, "Wrong alignment on B_InteriorAudioManager_C_OnComponentRemoved");
static_assert(sizeof(B_InteriorAudioManager_C_OnComponentRemoved) == 0x000018, "Wrong size on B_InteriorAudioManager_C_OnComponentRemoved");
static_assert(offsetof(B_InteriorAudioManager_C_OnComponentRemoved, Component) == 0x000000, "Member 'B_InteriorAudioManager_C_OnComponentRemoved::Component' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_OnComponentRemoved, NewLocalVar) == 0x000008, "Member 'B_InteriorAudioManager_C_OnComponentRemoved::NewLocalVar' has a wrong offset!");
static_assert(offsetof(B_InteriorAudioManager_C_OnComponentRemoved, CallFunc_Array_RemoveItem_ReturnValue) == 0x000010, "Member 'B_InteriorAudioManager_C_OnComponentRemoved::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

struct B_InteriorAudioManager_C_UpdateAmbientAudio final
{
public:
	struct FInteriorAudioScanResults              ScanResults;
};
static_assert(alignof(B_InteriorAudioManager_C_UpdateAmbientAudio) == 0x000008, "Wrong alignment on B_InteriorAudioManager_C_UpdateAmbientAudio");
static_assert(sizeof(B_InteriorAudioManager_C_UpdateAmbientAudio) == 0x000078, "Wrong size on B_InteriorAudioManager_C_UpdateAmbientAudio");
static_assert(offsetof(B_InteriorAudioManager_C_UpdateAmbientAudio, ScanResults) == 0x000000, "Member 'B_InteriorAudioManager_C_UpdateAmbientAudio::ScanResults' has a wrong offset!");

}
