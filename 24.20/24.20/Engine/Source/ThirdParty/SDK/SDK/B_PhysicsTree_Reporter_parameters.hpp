#pragma once

#include "Basic.hpp"

#include "PhysicsLogAnalyticsStruct_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "PhysicsLogAnalytics_DamageCategory_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_44[0x4];
	struct FGameplayTagContainer                  Temp_struct_Variable;
	class UFortPlaylist*                          Temp_object_Variable;
	class AFortGameStateAthena*                   Temp_object_Variable_1;
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_81[0x3];
	TDelegate<void(EAthenaGamePhase GamePhase)>   K2Node_CreateDelegate_OutputDelegate_1;
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	EAthenaGamePhase                              K2Node_CustomEvent_GamePhase;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter");
static_assert(sizeof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter) == 0x0000A0, "Wrong size on B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, EntryPoint) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_CustomEvent_GameState) == 0x000008, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_CustomEvent_Playlist) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_CustomEvent_PlaylistContextTags) == 0x000018, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, Temp_struct_Variable) == 0x000048, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, Temp_object_Variable) == 0x000068, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, Temp_object_Variable_1) == 0x000070, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000078, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, CallFunc_GetGameStateAthena_ReturnValue) == 0x000090, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, CallFunc_IsServer_ReturnValue) == 0x000098, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_CustomEvent_GamePhase) == 0x000099, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_CustomEvent_GamePhase' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter, K2Node_SwitchEnum_CmpSuccess) == 0x00009A, "Member 'B_PhysicsTree_Reporter_C_ExecuteUbergraph_B_PhysicsTree_Reporter::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_GetLogDataByInstanceName final
{
public:
	class FString                                 InstanceName;
	struct FPhysicsLogAnalyticsStruct             Data;
	int32                                         Index_0;
	bool                                          Success;
	uint8                                         Pad_85[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	struct FPhysicsLogAnalyticsStruct             CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_GetLogDataByInstanceName");
static_assert(sizeof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName) == 0x000110, "Wrong size on B_PhysicsTree_Reporter_C_GetLogDataByInstanceName");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, InstanceName) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::InstanceName' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, Data) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::Data' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, Index_0) == 0x000080, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::Index_0' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, Success) == 0x000084, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::Success' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, Temp_int_Array_Index_Variable) == 0x000088, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, Temp_int_Loop_Counter_Variable) == 0x00008C, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, CallFunc_Array_Get_Item) == 0x000098, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, CallFunc_Less_IntInt_ReturnValue) == 0x000108, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_GetLogDataByInstanceName, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000109, "Member 'B_PhysicsTree_Reporter_C_GetLogDataByInstanceName::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787 final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787");
static_assert(sizeof(B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787) == 0x000030, "Wrong size on B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787");
static_assert(offsetof(B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787, GameState) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787::GameState' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787, Playlist) == 0x000008, "Member 'B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787::Playlist' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787, PlaylistContextTags) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_OnReady_FFF47C8E40A1C412A19C8B8828BD5787::PlaylistContextTags' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_PhaseChanged final
{
public:
	EAthenaGamePhase                              GamePhase;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_PhaseChanged) == 0x000001, "Wrong alignment on B_PhysicsTree_Reporter_C_PhaseChanged");
static_assert(sizeof(B_PhysicsTree_Reporter_C_PhaseChanged) == 0x000001, "Wrong size on B_PhysicsTree_Reporter_C_PhaseChanged");
static_assert(offsetof(B_PhysicsTree_Reporter_C_PhaseChanged, GamePhase) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_PhaseChanged::GamePhase' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_ReportDamageInflicted final
{
public:
	class FString                                 InstanceName;
	EPhysicsLogAnalytics_DamageCategory           DamageCategory;
	uint8                                         Pad_11[0x7];
	double                                        Amount;
	TArray<double>                                DamageCounts;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
	uint8                                         Pad_34[0x4];
	struct FPhysicsLogAnalyticsStruct             CallFunc_GetLogDataByInstanceName_Data;
	int32                                         CallFunc_GetLogDataByInstanceName_Index;
	bool                                          CallFunc_GetLogDataByInstanceName_Success;
	uint8                                         Pad_AD[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_BC[0x4];
	TArray<double>                                K2Node_MakeArray_Array;
	double                                        CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_DD[0x3];
	double                                        CallFunc_Array_Get_Item_1;
	double                                        CallFunc_Array_Get_Item_2;
	double                                        CallFunc_Array_Get_Item_3;
	double                                        CallFunc_Array_Get_Item_4;
	double                                        CallFunc_Array_Get_Item_5;
	double                                        CallFunc_Array_Get_Item_6;
	struct FPhysicsLogAnalyticsStruct             K2Node_MakeStruct_PhysicsLogAnalyticsStruct;
	double                                        CallFunc_Array_Get_Item_7;
	double                                        CallFunc_Array_Get_Item_8;
	struct FPhysicsLogAnalyticsStruct             K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Array_Add_ReturnValue;
	double                                        K2Node_Select_Default;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        K2Node_Select_Option_0_ImplicitCast;
	double                                        K2Node_Select_Option_1_ImplicitCast;
	double                                        K2Node_Select_Option_2_ImplicitCast;
	double                                        K2Node_Select_Option_3_ImplicitCast;
	float                                         K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast;
	float                                         K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1;
	float                                         K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast;
	float                                         K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast;
	float                                         K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast;
	float                                         K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1;
	float                                         K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1;
	float                                         K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_ReportDamageInflicted) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_ReportDamageInflicted");
static_assert(sizeof(B_PhysicsTree_Reporter_C_ReportDamageInflicted) == 0x000258, "Wrong size on B_PhysicsTree_Reporter_C_ReportDamageInflicted");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, InstanceName) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::InstanceName' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, DamageCategory) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::DamageCategory' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, Amount) == 0x000018, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::Amount' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, DamageCounts) == 0x000020, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::DamageCounts' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_GetLogDataByInstanceName_Data) == 0x000038, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_GetLogDataByInstanceName_Data' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_GetLogDataByInstanceName_Index) == 0x0000A8, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_GetLogDataByInstanceName_Index' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_GetLogDataByInstanceName_Success) == 0x0000AC, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_GetLogDataByInstanceName_Success' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, Temp_int_Loop_Counter_Variable) == 0x0000B4, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Add_IntInt_ReturnValue) == 0x0000B8, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeArray_Array) == 0x0000C0, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Less_IntInt_ReturnValue) == 0x0000DC, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_3) == 0x0000F0, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_4) == 0x0000F8, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_5) == 0x000100, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_6) == 0x000108, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_PhysicsLogAnalyticsStruct) == 0x000110, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_PhysicsLogAnalyticsStruct' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_7) == 0x000180, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Get_Item_8) == 0x000188, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1) == 0x000190, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, Temp_int_Variable) == 0x000200, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Array_Add_ReturnValue) == 0x000204, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_Select_Default) == 0x000208, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000210, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_Select_Option_0_ImplicitCast) == 0x000218, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_Select_Option_1_ImplicitCast) == 0x000220, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_Select_Option_2_ImplicitCast) == 0x000228, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_Select_Option_2_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_Select_Option_3_ImplicitCast) == 0x000230, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_Select_Option_3_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast) == 0x000238, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1) == 0x00023C, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast) == 0x000240, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast) == 0x000244, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast) == 0x000248, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1) == 0x00024C, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1) == 0x000250, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToStructures_22_636FABDE409E1A51BAF808863B05D213_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportDamageInflicted, K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1) == 0x000254, "Member 'B_PhysicsTree_Reporter_C_ReportDamageInflicted::K2Node_MakeStruct_DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0_ImplicitCast_1' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_ReportLogDestroyed final
{
public:
	class FString                                 Instance_Name;
	struct FVector                                Location;
	struct FPhysicsLogAnalyticsStruct             CallFunc_GetLogDataByInstanceName_Data;
	int32                                         CallFunc_GetLogDataByInstanceName_Index;
	bool                                          CallFunc_GetLogDataByInstanceName_Success;
	uint8                                         Pad_9D[0x3];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	float                                         CallFunc_GetMatchTime_ReturnValue;
	uint8                                         Pad_AC[0x4];
	struct FPhysicsLogAnalyticsStruct             K2Node_MakeStruct_PhysicsLogAnalyticsStruct;
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue_1;
	float                                         CallFunc_GetMatchTime_ReturnValue_1;
	uint8                                         Pad_12C[0x4];
	struct FPhysicsLogAnalyticsStruct             K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_ReportLogDestroyed) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_ReportLogDestroyed");
static_assert(sizeof(B_PhysicsTree_Reporter_C_ReportLogDestroyed) == 0x0001A8, "Wrong size on B_PhysicsTree_Reporter_C_ReportLogDestroyed");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, Instance_Name) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::Instance_Name' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, Location) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::Location' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetLogDataByInstanceName_Data) == 0x000028, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetLogDataByInstanceName_Data' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetLogDataByInstanceName_Index) == 0x000098, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetLogDataByInstanceName_Index' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetLogDataByInstanceName_Success) == 0x00009C, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetLogDataByInstanceName_Success' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetGameStateAthena_ReturnValue) == 0x0000A0, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetMatchTime_ReturnValue) == 0x0000A8, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetMatchTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, K2Node_MakeStruct_PhysicsLogAnalyticsStruct) == 0x0000B0, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::K2Node_MakeStruct_PhysicsLogAnalyticsStruct' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetGameStateAthena_ReturnValue_1) == 0x000120, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetGameStateAthena_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_GetMatchTime_ReturnValue_1) == 0x000128, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_GetMatchTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1) == 0x000130, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogDestroyed, CallFunc_Array_Add_ReturnValue) == 0x0001A0, "Member 'B_PhysicsTree_Reporter_C_ReportLogDestroyed::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_ReportLogFelled final
{
public:
	class FString                                 Instance_Name;
	class FString                                 Felled_By;
	struct FVector                                Location;
	struct FPhysicsLogAnalyticsStruct             CallFunc_GetLogDataByInstanceName_Data;
	int32                                         CallFunc_GetLogDataByInstanceName_Index;
	bool                                          CallFunc_GetLogDataByInstanceName_Success;
	uint8                                         Pad_AD[0x3];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	float                                         CallFunc_GetMatchTime_ReturnValue;
	uint8                                         Pad_BC[0x4];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue_1;
	struct FPhysicsLogAnalyticsStruct             K2Node_MakeStruct_PhysicsLogAnalyticsStruct;
	float                                         CallFunc_GetMatchTime_ReturnValue_1;
	uint8                                         Pad_13C[0x4];
	struct FPhysicsLogAnalyticsStruct             K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_ReportLogFelled) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_ReportLogFelled");
static_assert(sizeof(B_PhysicsTree_Reporter_C_ReportLogFelled) == 0x0001B8, "Wrong size on B_PhysicsTree_Reporter_C_ReportLogFelled");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, Instance_Name) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::Instance_Name' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, Felled_By) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::Felled_By' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, Location) == 0x000020, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::Location' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetLogDataByInstanceName_Data) == 0x000038, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetLogDataByInstanceName_Data' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetLogDataByInstanceName_Index) == 0x0000A8, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetLogDataByInstanceName_Index' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetLogDataByInstanceName_Success) == 0x0000AC, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetLogDataByInstanceName_Success' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetGameStateAthena_ReturnValue) == 0x0000B0, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetMatchTime_ReturnValue) == 0x0000B8, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetMatchTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetGameStateAthena_ReturnValue_1) == 0x0000C0, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetGameStateAthena_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, K2Node_MakeStruct_PhysicsLogAnalyticsStruct) == 0x0000C8, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::K2Node_MakeStruct_PhysicsLogAnalyticsStruct' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_GetMatchTime_ReturnValue_1) == 0x000138, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_GetMatchTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1) == 0x000140, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::K2Node_MakeStruct_PhysicsLogAnalyticsStruct_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportLogFelled, CallFunc_Array_Add_ReturnValue) == 0x0001B0, "Member 'B_PhysicsTree_Reporter_C_ReportLogFelled::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_ReportTreeAnalytics final
{
public:
	TArray<class FString>                         InstanceRowArray;
	TArray<class FString>                         TempStringArray;
	class FString                                 TempString;
	TArray<struct FFortAnalyticsEventAttribute>   AttributeArray;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_51[0x7];
	class FString                                 CallFunc_JoinStringArray_ReturnValue;
	class FString                                 CallFunc_WrapString_Result;
	struct FFortAnalyticsEventAttribute           CallFunc_ConstructAnalyticsAttribute_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_9C[0x4];
	class FString                                 CallFunc_JoinStringArray_ReturnValue_1;
	class FString                                 CallFunc_WrapString_Result_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_CC[0x4];
	struct FPhysicsLogAnalyticsStruct             CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_145[0x3];
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_1;
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_2;
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_3;
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_4;
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_5;
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_1;
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	TArray<class FString>                         K2Node_MakeArray_Array;
	class FString                                 CallFunc_GetGameSessionID_ReturnValue;
	class FString                                 CallFunc_Array_Get_Item_1;
	struct FFortAnalyticsEventAttribute           CallFunc_ConstructAnalyticsAttribute_ReturnValue_1;
	class FString                                 CallFunc_WrapString_Result_2;
	int32                                         CallFunc_Array_Add_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_3;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_23C[0x4];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_249[0x3];
	class FName                                   CallFunc_GetCurrentPlaylistName_ReturnValue;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	struct FFortAnalyticsEventAttribute           CallFunc_ConstructAnalyticsAttribute_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_4;
	uint8                                         Pad_284[0x4];
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2;
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3;
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4;
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_ReportTreeAnalytics");
static_assert(sizeof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics) == 0x0002B8, "Wrong size on B_PhysicsTree_Reporter_C_ReportTreeAnalytics");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, InstanceRowArray) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::InstanceRowArray' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, TempStringArray) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::TempStringArray' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, TempString) == 0x000020, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::TempString' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, AttributeArray) == 0x000030, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::AttributeArray' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, Temp_int_Array_Index_Variable) == 0x000048, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_IsServer_ReturnValue) == 0x000050, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_JoinStringArray_ReturnValue) == 0x000058, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_WrapString_Result) == 0x000068, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_WrapString_Result' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_ConstructAnalyticsAttribute_ReturnValue) == 0x000078, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_ConstructAnalyticsAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_JoinStringArray_ReturnValue_1) == 0x0000A0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_JoinStringArray_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_WrapString_Result_1) == 0x0000B0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_WrapString_Result_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, Temp_int_Loop_Counter_Variable_1) == 0x0000C0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Add_ReturnValue_1) == 0x0000C4, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C8, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000148, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_ReturnValue_1) == 0x000158, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_ReturnValue_2) == 0x000168, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_ReturnValue_3) == 0x000178, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_ReturnValue_4) == 0x000188, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_VectorToString_ReturnValue) == 0x000198, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_ReturnValue_5) == 0x0001A8, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_VectorToString_ReturnValue_1) == 0x0001B8, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_VectorToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_GetGameStateAthena_ReturnValue) == 0x0001C8, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, K2Node_MakeArray_Array) == 0x0001D0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_GetGameSessionID_ReturnValue) == 0x0001E0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_GetGameSessionID_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Get_Item_1) == 0x0001F0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_ConstructAnalyticsAttribute_ReturnValue_1) == 0x000200, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_ConstructAnalyticsAttribute_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_WrapString_Result_2) == 0x000220, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_WrapString_Result_2' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Add_ReturnValue_2) == 0x000230, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Add_ReturnValue_3) == 0x000234, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Length_ReturnValue_1) == 0x000238, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_GetGameStateAthena_ReturnValue_1) == 0x000240, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_GetGameStateAthena_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Less_IntInt_ReturnValue_1) == 0x000248, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_GetCurrentPlaylistName_ReturnValue) == 0x00024C, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_GetCurrentPlaylistName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_NameToString_ReturnValue) == 0x000250, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_ConstructAnalyticsAttribute_ReturnValue_2) == 0x000260, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_ConstructAnalyticsAttribute_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Array_Add_ReturnValue_4) == 0x000280, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast) == 0x000288, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1) == 0x000290, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2) == 0x000298, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3) == 0x0002A0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4) == 0x0002A8, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_ReportTreeAnalytics, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5) == 0x0002B0, "Member 'B_PhysicsTree_Reporter_C_ReportTreeAnalytics::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_5' has a wrong offset!");

struct B_PhysicsTree_Reporter_C_WrapString final
{
public:
	class FString                                 Prepend;
	class FString                                 String;
	class FString                                 Append;
	class FString                                 Result;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
};
static_assert(alignof(B_PhysicsTree_Reporter_C_WrapString) == 0x000008, "Wrong alignment on B_PhysicsTree_Reporter_C_WrapString");
static_assert(sizeof(B_PhysicsTree_Reporter_C_WrapString) == 0x000060, "Wrong size on B_PhysicsTree_Reporter_C_WrapString");
static_assert(offsetof(B_PhysicsTree_Reporter_C_WrapString, Prepend) == 0x000000, "Member 'B_PhysicsTree_Reporter_C_WrapString::Prepend' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_WrapString, String) == 0x000010, "Member 'B_PhysicsTree_Reporter_C_WrapString::String' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_WrapString, Append) == 0x000020, "Member 'B_PhysicsTree_Reporter_C_WrapString::Append' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_WrapString, Result) == 0x000030, "Member 'B_PhysicsTree_Reporter_C_WrapString::Result' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_WrapString, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'B_PhysicsTree_Reporter_C_WrapString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_PhysicsTree_Reporter_C_WrapString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'B_PhysicsTree_Reporter_C_WrapString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}
