#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_GetShield_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_E1[0x3];
	float                                         K2Node_Event_DeltaSeconds;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff) == 0x000008, "Wrong alignment on GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff");
static_assert(sizeof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff) == 0x0000F0, "Wrong size on GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, EntryPoint) == 0x000000, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000008, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_GetShield_ReturnValue) == 0x0000DC, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_GetShield_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, K2Node_Event_DeltaSeconds) == 0x0000E4, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0000E8, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GCNL_PurpleStuff_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x7];
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GCNL_PurpleStuff_C_OnActive) == 0x000008, "Wrong alignment on GCNL_PurpleStuff_C_OnActive");
static_assert(sizeof(GCNL_PurpleStuff_C_OnActive) == 0x0000F0, "Wrong size on GCNL_PurpleStuff_C_OnActive");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_PurpleStuff_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_PurpleStuff_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCNL_PurpleStuff_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x0000E0, "Member 'GCNL_PurpleStuff_C_OnActive::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GCNL_PurpleStuff_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GCNL_PurpleStuff_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
};
static_assert(alignof(GCNL_PurpleStuff_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_PurpleStuff_C_OnRemove");
static_assert(sizeof(GCNL_PurpleStuff_C_OnRemove) == 0x0000E0, "Wrong size on GCNL_PurpleStuff_C_OnRemove");
static_assert(offsetof(GCNL_PurpleStuff_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_PurpleStuff_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_PurpleStuff_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNL_PurpleStuff_C_OnRemove::ReturnValue' has a wrong offset!");

struct GCNL_PurpleStuff_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCNL_PurpleStuff_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_PurpleStuff_C_ReceiveTick");
static_assert(sizeof(GCNL_PurpleStuff_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_PurpleStuff_C_ReceiveTick");
static_assert(offsetof(GCNL_PurpleStuff_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_PurpleStuff_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
