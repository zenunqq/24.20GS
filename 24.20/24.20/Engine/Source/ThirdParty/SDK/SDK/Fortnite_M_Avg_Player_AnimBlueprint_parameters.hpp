#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph::AnimGraph_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent final
{
public:
	const class UFortAnimInputEvent*              AnimInputEvent;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent) == 0x000008, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent, AnimInputEvent) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_BlueprintProcessAnimInputEvent::AnimInputEvent' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK final
{
public:
	struct FPoseLink                              InPosePostLegIK;
	struct FPoseLink                              CharacterSkeletalControlPostLegIK_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK, InPosePostLegIK) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK::InPosePostLegIK' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK, CharacterSkeletalControlPostLegIK_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK::CharacterSkeletalControlPostLegIK_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer final
{
public:
	struct FPoseLink                              InPoseDebug;
	struct FPoseLink                              DebugLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer, InPoseDebug) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer::InPoseDebug' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer, DebugLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_DebugLayer::DebugLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortPlayerAnimationInterface*          CallFunc_GetAnimationInterface_ReturnValue;
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_1;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_39[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_51[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_69[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_81[0x7];
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_2;
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_3;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_A1[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_B1[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_C9[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	uint8                                         Pad_E1[0x7];
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_4;
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue_5;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_4;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_101[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_5;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	uint8                                         Pad_111[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_4;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	uint8                                         Pad_129[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_5;
	bool                                          K2Node_DynamicCast_bSuccess_12;
	uint8                                         Pad_141[0x7];
	const class UFortAnimInputEvent*              K2Node_Event_AnimInputEvent;
	class UFortAnimInputEvent_Bool*               K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool;
	bool                                          K2Node_DynamicCast_bSuccess_13;
	bool                                          CallFunc_IsNamed_ReturnValue;
	bool                                          CallFunc_IsNamed_ReturnValue_1;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint) == 0x000160, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, EntryPoint) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_GetAnimationInterface_ReturnValue) == 0x000008, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_GetAnimationInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue_1) == 0x000018, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000030, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn) == 0x000040, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn_1) == 0x000058, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_3) == 0x000068, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_GetGameState_ReturnValue) == 0x000070, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000078, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_4) == 0x000080, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue_2) == 0x000088, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue_3) == 0x000090, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn_2) == 0x000098, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn_2' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_5) == 0x0000A0, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn_3) == 0x0000A8, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn_3' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_6) == 0x0000B0, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn_2) == 0x0000B8, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_7) == 0x0000C8, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn_3) == 0x0000D0, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn_3' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_8) == 0x0000E0, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue_4) == 0x0000E8, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue_5) == 0x0000F0, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn_4) == 0x0000F8, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn_4' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_9) == 0x000100, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Pawn_5) == 0x000108, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Pawn_5' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_10) == 0x000110, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn_4) == 0x000118, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn_4' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_11) == 0x000128, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsInterface_Player_Pawn_5) == 0x000130, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsInterface_Player_Pawn_5' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_12) == 0x000140, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_Event_AnimInputEvent) == 0x000148, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_Event_AnimInputEvent' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool) == 0x000150, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_AsFort_Anim_Input_Event_Bool' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, K2Node_DynamicCast_bSuccess_13) == 0x000158, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_IsNamed_ReturnValue) == 0x000159, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_IsNamed_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint, CallFunc_IsNamed_ReturnValue_1) == 0x00015A, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint::CallFunc_IsNamed_ReturnValue_1' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer final
{
public:
	struct FPoseLink                              InPoseFacialCurves;
	struct FPoseLink                              FacialCurvesLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer, InPoseFacialCurves) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer::InPoseFacialCurves' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer, FacialCurvesLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FacialCurvesLayer::FacialCurvesLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer final
{
public:
	struct FPoseLink                              InPoseFullBodyAdditives;
	struct FPoseLink                              FullBodyAdditivesLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer, InPoseFullBodyAdditives) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer::InPoseFullBodyAdditives' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer, FullBodyAdditivesLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyAdditivesLayer::FullBodyAdditivesLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride final
{
public:
	struct FPoseLink                              PassThroughFullBodyPose;
	struct FPoseLink                              FullBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride, PassThroughFullBodyPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride::PassThroughFullBodyPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride, FullBodyOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride::FullBodyOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer final
{
public:
	struct FPoseLink                              InFullBodyPose;
	struct FPoseLink                              FullBodySlotLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer, InFullBodyPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer::InFullBodyPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer, FullBodySlotLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_FullBodySlotLayer::FullBodySlotLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset final
{
public:
	struct FPoseLink                              InPose_AimOffset;
	double                                        AimOffsetAlpha;
	double                                        Yaw;
	double                                        Pitch;
	struct FPoseLink                              InPose_UpperLowerPreMeleeAO;
	struct FPoseLink                              ItemAimOffset_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset) == 0x000048, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset, InPose_AimOffset) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset::InPose_AimOffset' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset, AimOffsetAlpha) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset::AimOffsetAlpha' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset, Yaw) == 0x000018, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset::Yaw' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset, Pitch) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset::Pitch' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset, InPose_UpperLowerPreMeleeAO) == 0x000028, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset::InPose_UpperLowerPreMeleeAO' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset, ItemAimOffset_0) == 0x000038, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset::ItemAimOffset_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive final
{
public:
	struct FPoseLink                              ItemFallAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive, ItemFallAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive::ItemFallAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive final
{
public:
	struct FPoseLink                              ItemFallLandAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive, ItemFallLandAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive::ItemFallLandAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              ItemFinalPoseOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride, InFinalPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride, ItemFinalPoseOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFinalPoseOverride::ItemFinalPoseOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;
	struct FPoseLink                              ItemFullBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride, ItemFullBodyOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride::ItemFullBodyOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive final
{
public:
	struct FPoseLink                              InPoseIdleAdditive;
	struct FPoseLink                              ItemIdleAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive, InPoseIdleAdditive) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive::InPoseIdleAdditive' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive, ItemIdleAdditive_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive::ItemIdleAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive final
{
public:
	struct FPoseLink                              ItemJetPackJumpAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive, ItemJetPackJumpAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive::ItemJetPackJumpAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive final
{
public:
	struct FPoseLink                              ItemJetPackStartAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive, ItemJetPackStartAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive::ItemJetPackStartAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive final
{
public:
	struct FPoseLink                              ItemJumpLoopAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive, ItemJumpLoopAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive::ItemJumpLoopAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive final
{
public:
	struct FPoseLink                              ItemJumpUpAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive, ItemJumpUpAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive::ItemJumpUpAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement final
{
public:
	struct FPoseLink                              InPoseLowerBodyMovement;
	struct FPoseLink                              ItemLowerBodyMovement_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement, InPoseLowerBodyMovement) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement::InPoseLowerBodyMovement' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement, ItemLowerBodyMovement_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement::ItemLowerBodyMovement_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK final
{
public:
	struct FPoseLink                              InPose_PreIK;
	struct FPoseLink                              ItemPreIK_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK, InPose_PreIK) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK::InPose_PreIK' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK, ItemPreIK_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK::ItemPreIK_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry final
{
public:
	struct FPoseLink                              InPoseRelaxedEntry;
	struct FPoseLink                              ItemRelaxedEntry_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry, InPoseRelaxedEntry) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry::InPoseRelaxedEntry' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry, ItemRelaxedEntry_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry::ItemRelaxedEntry_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl final
{
public:
	struct FPoseLink                              InPose;
	struct FPoseLink                              ItemSkeletalControl_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl, InPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl::InPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl, ItemSkeletalControl_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl::ItemSkeletalControl_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop final
{
public:
	struct FPoseLink                              ItemSwimJumpFallLoop_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop, ItemSwimJumpFallLoop_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop::ItemSwimJumpFallLoop_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart final
{
public:
	struct FPoseLink                              ItemSwimJumpStart_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart, ItemSwimJumpStart_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart::ItemSwimJumpStart_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop final
{
public:
	struct FPoseLink                              ItemSwimJumpStartLoop_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop, ItemSwimJumpStartLoop_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop::ItemSwimJumpStartLoop_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd final
{
public:
	struct FPoseLink                              ItemSwimJumpSurfaceEnd_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd, ItemSwimJumpSurfaceEnd_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd::ItemSwimJumpSurfaceEnd_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop final
{
public:
	struct FPoseLink                              ItemSwimJumpSurfaceLoop_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop, ItemSwimJumpSurfaceLoop_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop::ItemSwimJumpSurfaceLoop_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody final
{
public:
	struct FPoseLink                              InPoseUpperBody;
	struct FFortAnimInput_AdjustedAim             InputParam;
	uint8                                         Pad_26C[0x4];
	struct FPoseLink                              ItemUpperBody_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody) == 0x000280, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody, InPoseUpperBody) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody, InputParam) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody::InputParam' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody, ItemUpperBody_0) == 0x000270, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody::ItemUpperBody_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive final
{
public:
	struct FPoseLink                              ItemZipLineStartAdditive_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive, ItemZipLineStartAdditive_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive::ItemZipLineStartAdditive_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer final
{
public:
	struct FPoseLink                              InSourcePoseLoco;
	struct FPoseLink                              LocomotionLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer, InSourcePoseLoco) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer::InSourcePoseLoco' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer, LocomotionLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_LocomotionLayer::LocomotionLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer final
{
public:
	struct FPoseLink                              BasePose;
	struct FPoseLink                              LowerBody;
	struct FPoseLink                              LowerBodyBlendLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer) == 0x000030, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer, BasePose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer::BasePose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer, LowerBody) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer::LowerBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer, LowerBodyBlendLayer_0) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_LowerBodyBlendLayer::LowerBodyBlendLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset final
{
public:
	struct FPoseLink                              InAimOffsetsPose;
	struct FPoseLink                              InSourcePosePreAimOffsets;
	struct FPoseLink                              MovementMode_AimOffset_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset) == 0x000030, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset, InAimOffsetsPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset::InAimOffsetsPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset, InSourcePosePreAimOffsets) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset::InSourcePosePreAimOffsets' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset, MovementMode_AimOffset_0) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_AimOffset::MovementMode_AimOffset_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              MovementMode_FinalPoseOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride, InFinalPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride, MovementMode_FinalPoseOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FinalPoseOverride::MovementMode_FinalPoseOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride final
{
public:
	struct FPoseLink                              InputPoseFullBody;
	struct FPoseLink                              MovementMode_FullBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride, InputPoseFullBody) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride::InputPoseFullBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride, MovementMode_FullBodyOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_FullBodyOverride::MovementMode_FullBodyOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives final
{
public:
	struct FPoseLink                              InLocomotionAdditivesPose;
	struct FPoseLink                              MovementMode_LocomotionAdditives_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives, InLocomotionAdditivesPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives::InLocomotionAdditivesPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives, MovementMode_LocomotionAdditives_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LocomotionAdditives::MovementMode_LocomotionAdditives_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride final
{
public:
	struct FPoseLink                              InLowerBodyPose;
	struct FPoseLink                              InSourcePose;
	struct FPoseLink                              MovementMode_LowerBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride) == 0x000030, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride, InLowerBodyPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride::InLowerBodyPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride, InSourcePose) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride::InSourcePose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride, MovementMode_LowerBodyOverride_0) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_LowerBodyOverride::MovementMode_LowerBodyOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose final
{
public:
	struct FPoseLink                              InSourcePoseBase;
	struct FPoseLink                              MovementMode_SourcePose_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose, InSourcePoseBase) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose::InSourcePoseBase' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose, MovementMode_SourcePose_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_MovementMode_SourcePose::MovementMode_SourcePose_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer final
{
public:
	struct FPoseLink                              InSourcePose;
	struct FPoseLink                              SourcePoseAdjustmentsLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer, InSourcePose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer::InSourcePose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer, SourcePoseAdjustmentsLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseAdjustmentsLayer::SourcePoseAdjustmentsLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer final
{
public:
	struct FPoseLink                              SourcePoseLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer) == 0x000010, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer, SourcePoseLayer_0) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_SourcePoseLayer::SourcePoseLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer final
{
public:
	struct FPoseLink                              InPoseUpperBodyAdjustments;
	struct FPoseLink                              InPosePostUpperBodySlot;
	struct FPoseLink                              UpperBodyAdjustmentsLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer) == 0x000030, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer, InPoseUpperBodyAdjustments) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer::InPoseUpperBodyAdjustments' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer, InPosePostUpperBodySlot) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer::InPosePostUpperBodySlot' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer, UpperBodyAdjustmentsLayer_0) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAdjustmentsLayer::UpperBodyAdjustmentsLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer final
{
public:
	struct FPoseLink                              InPose;
	struct FPoseLink                              UpperBodyAimingOffsetsLayer_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer, InPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer::InPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer, UpperBodyAimingOffsetsLayer_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_UpperBodyAimingOffsetsLayer::UpperBodyAimingOffsetsLayer_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride final
{
public:
	struct FPoseLink                              InFinalPose;
	struct FPoseLink                              VehicleFinalPoseOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride, InFinalPose) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride::InFinalPose' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride, VehicleFinalPoseOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFinalPoseOverride::VehicleFinalPoseOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride final
{
public:
	struct FPoseLink                              InPoseFullBody;
	struct FPoseLink                              VehicleFullBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride) == 0x000020, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride, InPoseFullBody) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride::InPoseFullBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride, VehicleFullBodyOverride_0) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride::VehicleFullBodyOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride final
{
public:
	struct FPoseLink                              InPoseLowerBodyDefault;
	struct FPoseLink                              InPoseUpperBody;
	struct FPoseLink                              VehicleLowerBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride) == 0x000030, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride, InPoseLowerBodyDefault) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride::InPoseLowerBodyDefault' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride, InPoseUpperBody) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride::InPoseUpperBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride, VehicleLowerBodyOverride_0) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride::VehicleLowerBodyOverride_0' has a wrong offset!");

struct Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride final
{
public:
	struct FPoseLink                              InPoseSplitBody;
	struct FPoseLink                              InPoseUpperAndLowerBody;
	struct FFortAnimInput_TurnInPlace             TurnInPlace;
	struct FPoseLink                              InPoseUpperAndLowerBodyRemoveRoot;
	struct FPoseLink                              VehicleSplitBodyOverride_0;
};
static_assert(alignof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride) == 0x000008, "Wrong alignment on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride");
static_assert(sizeof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride) == 0x0000B8, "Wrong size on Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride, InPoseSplitBody) == 0x000000, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride::InPoseSplitBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBody) == 0x000010, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBody' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride, TurnInPlace) == 0x000020, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride::TurnInPlace' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride, InPoseUpperAndLowerBodyRemoveRoot) == 0x000098, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride::InPoseUpperAndLowerBodyRemoveRoot' has a wrong offset!");
static_assert(offsetof(Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride, VehicleSplitBodyOverride_0) == 0x0000A8, "Member 'Fortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride::VehicleSplitBodyOverride_0' has a wrong offset!");

}
