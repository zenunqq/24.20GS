#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Bp_E_Artemis_SnowSurfaceCoverageMap_structs.hpp"
#include "BP_Artemis_SnowSurfaceCoverageMap_Struct_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortAsyncAction_AuthorityMatchReady*   CallFunc_MatchReadyAsync_ReturnValue;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_1;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_2;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_3;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_4;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_5;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_6;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_1E[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_CustomEvent_AllowBitArrayPopulation;
	uint8                                         Pad_2D[0x3];
	int32                                         K2Node_CustomEvent_Index;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	EBp_E_Artemis_SnowSurfaceCoverageMap          K2Node_Select_Default;
	uint8                                         Pad_36[0x2];
	struct FBP_Artemis_SnowSurfaceCoverageMap_Struct K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct;
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap) == 0x000008, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap) == 0x000048, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, EntryPoint) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_MatchReadyAsync_ReturnValue) == 0x000008, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_MatchReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_int_Variable) == 0x000010, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable) == 0x000015, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable_1) == 0x000016, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable_2) == 0x000017, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable_3) == 0x000018, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable_4) == 0x000019, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable_5) == 0x00001A, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, Temp_byte_Variable_6) == 0x00001B, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_HasAuthority_ReturnValue) == 0x00001C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_HasAuthority_ReturnValue_1) == 0x00001D, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, K2Node_CustomEvent_AllowBitArrayPopulation) == 0x00002C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::K2Node_CustomEvent_AllowBitArrayPopulation' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, K2Node_CustomEvent_Index) == 0x000030, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, K2Node_Event_EndPlayReason) == 0x000034, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, K2Node_Select_Default) == 0x000035, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct) == 0x000038, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_GetSnowProgressionPhase_SnowProgressionPhase) == 0x000040, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_GetSnowProgressionPhase_SnowProgressionPhase' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap, CallFunc_HasAuthority_ReturnValue_2) == 0x000042, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ExecuteUbergraph_BP_Artemis_SnowSurfaceCoverageMap::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase final
{
public:
	TMap<class FString, EBp_E_Artemis_SnowSurfaceCoverageMap> SnowProgressionEvents;
	bool                                          CallFunc_QuerySnowCalendarEvents_EventFound;
	uint8                                         Pad_51[0x7];
	class FString                                 CallFunc_QuerySnowCalendarEvents_FoundEventName;
	double                                        CallFunc_QuerySnowCalendarEvents_EventTimespanRatio;
	struct FBP_Artemis_SnowSurfaceCoverageMap_Struct K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct;
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_7A[0x2];
	struct FBP_Artemis_SnowSurfaceCoverageMap_Struct K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct_1;
	float                                         K2Node_MakeStruct_EventTimespanRatio_6_D092696F48A44ACF86782CBFECD83CE4_ImplicitCast;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase) == 0x000008, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase) == 0x000088, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, SnowProgressionEvents) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::SnowProgressionEvents' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, CallFunc_QuerySnowCalendarEvents_EventFound) == 0x000050, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::CallFunc_QuerySnowCalendarEvents_EventFound' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, CallFunc_QuerySnowCalendarEvents_FoundEventName) == 0x000058, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::CallFunc_QuerySnowCalendarEvents_FoundEventName' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, CallFunc_QuerySnowCalendarEvents_EventTimespanRatio) == 0x000068, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::CallFunc_QuerySnowCalendarEvents_EventTimespanRatio' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct) == 0x000070, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, CallFunc_Map_Find_Value) == 0x000078, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, CallFunc_Map_Find_ReturnValue) == 0x000079, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct_1) == 0x00007C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::K2Node_MakeStruct_BP_Artemis_SnowSurfaceCoverageMap_Struct_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase, K2Node_MakeStruct_EventTimespanRatio_6_D092696F48A44ACF86782CBFECD83CE4_ImplicitCast) == 0x000084, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_FindAndSetSnowProgressionPhase::K2Node_MakeStruct_EventTimespanRatio_6_D092696F48A44ACF86782CBFECD83CE4_ImplicitCast' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase final
{
public:
	EBp_E_Artemis_SnowSurfaceCoverageMap          SnowProgressionPhase;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase) == 0x000001, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase, SnowProgressionPhase) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_GetSnowProgressionPhase::SnowProgressionPhase' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression) == 0x000003, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression, CallFunc_GetSnowProgressionPhase_SnowProgressionPhase) == 0x000001, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression::CallFunc_GetSnowProgressionPhase_SnowProgressionPhase' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgression::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState) == 0x000003, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState, CallFunc_GetSnowProgressionPhase_SnowProgressionPhase) == 0x000001, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState::CallFunc_GetSnowProgressionPhase_SnowProgressionPhase' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_OnRep_SnowProgressionState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray final
{
public:
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class UFortGameStateComponent_SurfaceCoverageMap* CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_UpdateCoverageMap_ReturnValue;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_UpdateCoverageMap_DebugDrawDuration_ImplicitCast;
	float                                         CallFunc_UpdateCoverageMap_CoverageThreshold_ImplicitCast;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray) == 0x000008, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray) == 0x000040, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_GetGameState_ReturnValue) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_Add_VectorVector_ReturnValue) == 0x000018, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_UpdateCoverageMap_ReturnValue) == 0x000030, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_UpdateCoverageMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_UpdateCoverageMap_DebugDrawDuration_ImplicitCast) == 0x000034, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_UpdateCoverageMap_DebugDrawDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray, CallFunc_UpdateCoverageMap_CoverageThreshold_ImplicitCast) == 0x000038, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_PopulateBitArray::CallFunc_UpdateCoverageMap_CoverageThreshold_ImplicitCast' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents final
{
public:
	TMap<class FString, EBp_E_Artemis_SnowSurfaceCoverageMap> Events;
	bool                                          EventFound;
	uint8                                         Pad_51[0x7];
	class FString                                 FoundEventName;
	double                                        EventTimespanRatio;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_74[0x4];
	TArray<class FString>                         CallFunc_Map_Keys_Keys;
	class FString                                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_GetCalendarEventInformation_bIsEventActive;
	uint8                                         Pad_9D[0x3];
	struct FTimespan                              CallFunc_GetCalendarEventInformation_TimeSinceBegin;
	struct FTimespan                              CallFunc_GetCalendarEventInformation_TimeUntilEnd;
	float                                         CallFunc_GetCalendarEventInformation_TimeSpanRatio;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_C5[0x3];
	double                                        K2Node_FunctionResult_EventTimespanRatio_ImplicitCast;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents) == 0x000008, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents) == 0x0000D0, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, Events) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::Events' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, EventFound) == 0x000050, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::EventFound' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, FoundEventName) == 0x000058, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::FoundEventName' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, EventTimespanRatio) == 0x000068, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::EventTimespanRatio' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, Temp_int_Array_Index_Variable) == 0x000070, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_Map_Keys_Keys) == 0x000078, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_GetCalendarEventInformation_bIsEventActive) == 0x00009C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_GetCalendarEventInformation_bIsEventActive' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_GetCalendarEventInformation_TimeSinceBegin) == 0x0000A0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_GetCalendarEventInformation_TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_GetCalendarEventInformation_TimeUntilEnd) == 0x0000A8, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_GetCalendarEventInformation_TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_GetCalendarEventInformation_TimeSpanRatio) == 0x0000B0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_GetCalendarEventInformation_TimeSpanRatio' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_Max_ReturnValue) == 0x0000B8, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, Temp_int_Loop_Counter_Variable) == 0x0000BC, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000C0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000C4, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents, K2Node_FunctionResult_EventTimespanRatio_ImplicitCast) == 0x0000C8, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_QuerySnowCalendarEvents::K2Node_FunctionResult_EventTimespanRatio_ImplicitCast' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient) == 0x000001, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_RemoveSnowOnClient::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation final
{
public:
	bool                                          AllowBitArrayPopulation_0;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation) == 0x000001, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation, AllowBitArrayPopulation_0) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetAllowBitArrayPopulation::AllowBitArrayPopulation_0' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase final
{
public:
	int32                                         Index_0;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase) == 0x000004, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase) == 0x000004, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase, Index_0) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetSnowProgressionPhase::Index_0' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT final
{
public:
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_1;
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT) == 0x000008, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT) == 0x000020, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT, CallFunc_BreakVector2D_X) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT, CallFunc_FTrunc_ReturnValue_1) == 0x000014, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000018, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_SetupRT::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC final
{
public:
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable;
	uint8                                         Pad_19[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	int32                                         Temp_int_Variable_4;
	int32                                         Temp_int_Variable_5;
	int32                                         Temp_int_Variable_6;
	int32                                         Temp_int_Variable_7;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1;
	uint8                                         Pad_3F[0x1];
	double                                        CallFunc_Lerp_ReturnValue;
	int32                                         K2Node_Select_Default;
	uint8                                         Pad_4C[0x4];
	double                                        CallFunc_Lerp_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue_2;
	double                                        CallFunc_Lerp_ReturnValue_3;
	double                                        CallFunc_Lerp_ReturnValue_4;
	EBp_E_Artemis_SnowSurfaceCoverageMap          Temp_byte_Variable_1;
	uint8                                         Pad_71[0x7];
	struct FVector2D                              CallFunc_Array_Get_Item;
	double                                        K2Node_Select_Default_1;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_2;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_3;
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC) == 0x000008, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC) == 0x0000D8, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_real_Variable) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_real_Variable_1) == 0x000008, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_real_Variable_2) == 0x000010, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_byte_Variable) == 0x000018, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable) == 0x00001C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_1) == 0x000020, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_2) == 0x000024, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_3) == 0x000028, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_4) == 0x00002C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_5) == 0x000030, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_6) == 0x000034, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_int_Variable_7) == 0x000038, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_IsDedicatedServer_ReturnValue) == 0x00003C, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_GetSnowProgressionPhase_SnowProgressionPhase) == 0x00003D, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_GetSnowProgressionPhase_SnowProgressionPhase' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1) == 0x00003E, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_GetSnowProgressionPhase_SnowProgressionPhase_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_ReturnValue) == 0x000040, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, K2Node_Select_Default) == 0x000048, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_ReturnValue_1) == 0x000050, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_ReturnValue_2) == 0x000058, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_ReturnValue_3) == 0x000060, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_ReturnValue_4) == 0x000068, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, Temp_byte_Variable_1) == 0x000070, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, K2Node_Select_Default_1) == 0x000088, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_BreakVector2D_X) == 0x000090, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_BreakVector2D_Y) == 0x000098, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_Alpha_ImplicitCast) == 0x0000A0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x0000A8, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_Alpha_ImplicitCast_2) == 0x0000B0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_Alpha_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_Alpha_ImplicitCast_3) == 0x0000B8, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_Alpha_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_Lerp_Alpha_ImplicitCast_4) == 0x0000C0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_Lerp_Alpha_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x0000C8, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1) == 0x0000CC, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2) == 0x0000D0, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UpdateSnowProgressionMPC::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2' has a wrong offset!");

struct BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript final
{
public:
	EBp_E_Artemis_SnowSurfaceCoverageMap          CallFunc_GetSnowProgressionPhase_SnowProgressionPhase;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript");
static_assert(sizeof(BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript) == 0x000002, "Wrong size on BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript, CallFunc_GetSnowProgressionPhase_SnowProgressionPhase) == 0x000000, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript::CallFunc_GetSnowProgressionPhase_SnowProgressionPhase' has a wrong offset!");
static_assert(offsetof(BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_Artemis_SnowSurfaceCoverageMap_C_UserConstructionScript::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}
