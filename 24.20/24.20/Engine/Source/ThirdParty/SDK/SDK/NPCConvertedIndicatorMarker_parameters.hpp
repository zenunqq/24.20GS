#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	TDelegate<void(EPingCommandType CommandType)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	struct FFortWorldMarkerData                   K2Node_Event_FortWorldMarkerData;
	class ABP_PlayerPawn_Tandem_C*                K2Node_DynamicCast_AsBP_Player_Pawn_Tandem;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1A1[0x7];
	class ANPC_Pawn_Wildlife_Parent_C*            K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1B1[0x7];
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	EPingCommandType                              K2Node_CustomEvent_CommandType;
	uint8                                         Pad_1C1[0x3];
	struct FLinearColor                           CallFunc_GetUIColor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1D5[0x3];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_1E2[0x6];
	class AFortPlayerState*                       CallFunc_AttemptGetPlayerStateForPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_1F1[0x7];
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	ESlateVisibility                              Temp_byte_Variable_6;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	EPingCommandType                              Temp_byte_Variable_9;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker) == 0x000008, "Wrong alignment on NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker");
static_assert(sizeof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker) == 0x000208, "Wrong size on NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, EntryPoint) == 0x000000, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable) == 0x000004, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_1) == 0x000005, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_2) == 0x000006, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_3) == 0x000007, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_Event_FortWorldMarkerData) == 0x000018, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_Event_FortWorldMarkerData' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_DynamicCast_AsBP_Player_Pawn_Tandem) == 0x000198, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_DynamicCast_AsBP_Player_Pawn_Tandem' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent) == 0x0001A8, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_GetComponentByClass_ReturnValue) == 0x0001B8, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_CustomEvent_CommandType) == 0x0001C0, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_CustomEvent_CommandType' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_GetUIColor_ReturnValue) == 0x0001C4, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_GetUIColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_IsValid_ReturnValue) == 0x0001D4, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_GetConverterPawn_ReturnValue) == 0x0001D8, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001E1, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_AttemptGetPlayerStateForPawn_ReturnValue) == 0x0001E8, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_AttemptGetPlayerStateForPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, CallFunc_IsValid_ReturnValue_2) == 0x0001F0, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_DynamicCast_AsFort_Player_State_Athena) == 0x0001F8, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_DynamicCast_AsFort_Player_State_Athena' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_DynamicCast_bSuccess_2) == 0x000200, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_4) == 0x000201, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_5) == 0x000202, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_6) == 0x000203, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_7) == 0x000204, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_8) == 0x000205, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, Temp_byte_Variable_9) == 0x000206, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker, K2Node_Select_Default) == 0x000207, "Member 'NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker::K2Node_Select_Default' has a wrong offset!");

struct NPCConvertedIndicatorMarker_C_OnPingCommandEvent final
{
public:
	EPingCommandType                              CommandType;
};
static_assert(alignof(NPCConvertedIndicatorMarker_C_OnPingCommandEvent) == 0x000001, "Wrong alignment on NPCConvertedIndicatorMarker_C_OnPingCommandEvent");
static_assert(sizeof(NPCConvertedIndicatorMarker_C_OnPingCommandEvent) == 0x000001, "Wrong size on NPCConvertedIndicatorMarker_C_OnPingCommandEvent");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_OnPingCommandEvent, CommandType) == 0x000000, "Member 'NPCConvertedIndicatorMarker_C_OnPingCommandEvent::CommandType' has a wrong offset!");

struct NPCConvertedIndicatorMarker_C_OnSetMarkerData final
{
public:
	struct FFortWorldMarkerData                   FortWorldMarkerData;
};
static_assert(alignof(NPCConvertedIndicatorMarker_C_OnSetMarkerData) == 0x000008, "Wrong alignment on NPCConvertedIndicatorMarker_C_OnSetMarkerData");
static_assert(sizeof(NPCConvertedIndicatorMarker_C_OnSetMarkerData) == 0x000180, "Wrong size on NPCConvertedIndicatorMarker_C_OnSetMarkerData");
static_assert(offsetof(NPCConvertedIndicatorMarker_C_OnSetMarkerData, FortWorldMarkerData) == 0x000000, "Member 'NPCConvertedIndicatorMarker_C_OnSetMarkerData::FortWorldMarkerData' has a wrong offset!");

}
