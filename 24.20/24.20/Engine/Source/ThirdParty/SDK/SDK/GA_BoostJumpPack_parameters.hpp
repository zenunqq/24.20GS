#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Enum_BoostJumpStates_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_BoostJumpPack_C_Consider_Starting_Regen_Effect final
{
public:
	double                                        CallFunc_GetMaxFuel_MaxFuel;
	double                                        CallFunc_GetFuel_Fuel;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Consider_Starting_Regen_Effect");
static_assert(sizeof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect) == 0x000020, "Wrong size on GA_BoostJumpPack_C_Consider_Starting_Regen_Effect");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_GetMaxFuel_MaxFuel) == 0x000000, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_GetMaxFuel_MaxFuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000018, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000019, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00001A, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Starting_Regen_Effect, CallFunc_BooleanAND_ReturnValue_1) == 0x00001C, "Member 'GA_BoostJumpPack_C_Consider_Starting_Regen_Effect::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

struct GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect final
{
public:
	double                                        CallFunc_GetReserveFuel_ReturnValue;
	double                                        CallFunc_GetMaxFuel_MaxFuel;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_GetFuel_Fuel;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect");
static_assert(sizeof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect) == 0x000030, "Wrong size on GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_GetReserveFuel_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_GetReserveFuel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_GetMaxFuel_MaxFuel) == 0x000008, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_GetMaxFuel_MaxFuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_GetFuel_Fuel) == 0x000018, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect, CallFunc_BooleanOR_ReturnValue) == 0x000029, "Member 'GA_BoostJumpPack_C_Consider_Stopping_Regen_Effect::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_DetermineStateToTransitionTo final
{
public:
	Enum_BoostJumpStates                          BoostState;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	Enum_BoostJumpStates                          CallFunc_TransitionFromFalling_TargetBoostState;
	Enum_BoostJumpStates                          CallFunc_TransitionFromHovering_TargetBoostState;
	Enum_BoostJumpStates                          CallFunc_TransitionFromBoost_TargetBoostState;
	Enum_BoostJumpStates                          CallFunc_TransitionFromIdle_TargetBoostState;
};
static_assert(alignof(GA_BoostJumpPack_C_DetermineStateToTransitionTo) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_DetermineStateToTransitionTo");
static_assert(sizeof(GA_BoostJumpPack_C_DetermineStateToTransitionTo) == 0x000006, "Wrong size on GA_BoostJumpPack_C_DetermineStateToTransitionTo");
static_assert(offsetof(GA_BoostJumpPack_C_DetermineStateToTransitionTo, BoostState) == 0x000000, "Member 'GA_BoostJumpPack_C_DetermineStateToTransitionTo::BoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_DetermineStateToTransitionTo, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'GA_BoostJumpPack_C_DetermineStateToTransitionTo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_DetermineStateToTransitionTo, CallFunc_TransitionFromFalling_TargetBoostState) == 0x000002, "Member 'GA_BoostJumpPack_C_DetermineStateToTransitionTo::CallFunc_TransitionFromFalling_TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_DetermineStateToTransitionTo, CallFunc_TransitionFromHovering_TargetBoostState) == 0x000003, "Member 'GA_BoostJumpPack_C_DetermineStateToTransitionTo::CallFunc_TransitionFromHovering_TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_DetermineStateToTransitionTo, CallFunc_TransitionFromBoost_TargetBoostState) == 0x000004, "Member 'GA_BoostJumpPack_C_DetermineStateToTransitionTo::CallFunc_TransitionFromBoost_TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_DetermineStateToTransitionTo, CallFunc_TransitionFromIdle_TargetBoostState) == 0x000005, "Member 'GA_BoostJumpPack_C_DetermineStateToTransitionTo::CallFunc_TransitionFromIdle_TargetBoostState' has a wrong offset!");

struct GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FHitResult                             K2Node_CustomEvent_Hit;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_3;
	uint8                                         Pad_FD[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_10C[0x4];
	struct FGameplayEventData                     K2Node_Event_EventData;
	EJumpBoostPackState                           K2Node_Event_InPreviousState;
	EJumpBoostPackState                           K2Node_Event_InCurrentState;
	uint8                                         Pad_1C2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1D1[0x7];
	class AFortPlayerPawn*                        K2Node_CustomEvent_PreviousPawn;
	class AFortPlayerPawn*                        K2Node_CustomEvent_NewPawn;
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1F1[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_201[0x7];
	class AController*                            CallFunc_GetController_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_211[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_221[0x3];
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_261[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	struct FGameplayTagContainer                  CallFunc_GetAbilityTags_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	bool                                          CallFunc_HasTag_ReturnValue;
	uint8                                         Pad_29D[0x3];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_2AA[0x6];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_2B9[0x7];
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_5;
};
static_assert(alignof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack");
static_assert(sizeof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack) == 0x0002D0, "Wrong size on GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, EntryPoint) == 0x000000, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CustomEvent_Hit) == 0x000018, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x0000F8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x0000F9, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_EqualEqual_GameplayTag_ReturnValue_2) == 0x0000FA, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_EqualEqual_GameplayTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_BooleanOR_ReturnValue) == 0x0000FB, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_EqualEqual_GameplayTag_ReturnValue_3) == 0x0000FC, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_EqualEqual_GameplayTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_Event_EventData) == 0x000110, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_Event_InPreviousState) == 0x0001C0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_Event_InPreviousState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_Event_InCurrentState) == 0x0001C1, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_Event_InCurrentState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001C4, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001D0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CustomEvent_PreviousPawn) == 0x0001D8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CustomEvent_PreviousPawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CustomEvent_NewPawn) == 0x0001E0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CustomEvent_NewPawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_GetController_ReturnValue) == 0x0001E8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_IsValid_ReturnValue_1) == 0x0001F0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0001F8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_DynamicCast_bSuccess) == 0x000200, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_GetController_ReturnValue_1) == 0x000208, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_IsValid_ReturnValue_2) == 0x000210, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_DynamicCast_AsFort_Player_Controller_1) == 0x000218, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_DynamicCast_AsFort_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_DynamicCast_bSuccess_1) == 0x000220, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_2) == 0x000224, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_3) == 0x000230, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_4) == 0x00023C, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_5) == 0x000248, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_6) == 0x000254, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_BooleanAND_ReturnValue) == 0x000260, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_7) == 0x000264, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_GetAbilityTags_ReturnValue) == 0x000270, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_GetAbilityTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, K2Node_CreateDelegate_OutputDelegate_8) == 0x000290, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_HasTag_ReturnValue) == 0x00029C, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x0002A0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_EqualEqual_GameplayTag_ReturnValue_4) == 0x0002A8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_EqualEqual_GameplayTag_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_IsValid_ReturnValue_3) == 0x0002A9, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_WaitGameplayTagAdd_ReturnValue_2) == 0x0002B0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_WaitGameplayTagAdd_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_IsValid_ReturnValue_4) == 0x0002B8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_WaitGameplayTagAdd_ReturnValue_3) == 0x0002C0, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_WaitGameplayTagAdd_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack, CallFunc_IsValid_ReturnValue_5) == 0x0002C8, "Member 'GA_BoostJumpPack_C_ExecuteUbergraph_GA_BoostJumpPack::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

struct GA_BoostJumpPack_C_Handle_Jetpack_Equipped final
{
public:
	double                                        CallFunc_GetMaxFuel_MaxFuel;
	double                                        CallFunc_GetFuel_Fuel;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_MatchesTag_ReturnValue;
	uint8                                         Pad_1A[0x6];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Handle_Jetpack_Equipped");
static_assert(sizeof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped) == 0x0000F0, "Wrong size on GA_BoostJumpPack_C_Handle_Jetpack_Equipped");
static_assert(offsetof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped, CallFunc_GetMaxFuel_MaxFuel) == 0x000000, "Member 'GA_BoostJumpPack_C_Handle_Jetpack_Equipped::CallFunc_GetMaxFuel_MaxFuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_Handle_Jetpack_Equipped::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_Handle_Jetpack_Equipped::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000018, "Member 'GA_BoostJumpPack_C_Handle_Jetpack_Equipped::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped, CallFunc_MatchesTag_ReturnValue) == 0x000019, "Member 'GA_BoostJumpPack_C_Handle_Jetpack_Equipped::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Handle_Jetpack_Equipped, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000020, "Member 'GA_BoostJumpPack_C_Handle_Jetpack_Equipped::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleBoostEnded final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	double                                        CallFunc_GetFuel_Fuel;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayTag                           K2Node_Select_Default;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleBoostEnded) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_HandleBoostEnded");
static_assert(sizeof(GA_BoostJumpPack_C_HandleBoostEnded) == 0x0000F0, "Wrong size on GA_BoostJumpPack_C_HandleBoostEnded");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostEnded, Temp_bool_Variable) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleBoostEnded::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostEnded, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_HandleBoostEnded::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostEnded, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_HandleBoostEnded::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostEnded, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000018, "Member 'GA_BoostJumpPack_C_HandleBoostEnded::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostEnded, K2Node_Select_Default) == 0x0000E8, "Member 'GA_BoostJumpPack_C_HandleBoostEnded::K2Node_Select_Default' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleBoostJump final
{
public:
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_DC[0x4];
	class AFortPlayerPawn*                        CallFunc_SetJumpHeight_Pawn_Out;
	struct FVector                                CallFunc_SetJumpHeight_Jump_Height;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleBoostJump) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_HandleBoostJump");
static_assert(sizeof(GA_BoostJumpPack_C_HandleBoostJump) == 0x000100, "Wrong size on GA_BoostJumpPack_C_HandleBoostJump");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostJump, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleBoostJump::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostJump, K2Node_CreateDelegate_OutputDelegate) == 0x0000D0, "Member 'GA_BoostJumpPack_C_HandleBoostJump::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostJump, CallFunc_SetJumpHeight_Pawn_Out) == 0x0000E0, "Member 'GA_BoostJumpPack_C_HandleBoostJump::CallFunc_SetJumpHeight_Pawn_Out' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleBoostJump, CallFunc_SetJumpHeight_Jump_Height) == 0x0000E8, "Member 'GA_BoostJumpPack_C_HandleBoostJump::CallFunc_SetJumpHeight_Jump_Height' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleCurrentBoostStateChanged final
{
public:
	EJumpBoostPackState                           PreviousState;
	EJumpBoostPackState                           CurrentState_0;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_3[0x1];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	bool                                          CallFunc_IsUsingJetpackEffectActive_ReturnValue;
	bool                                          CallFunc_IsUsingJetpackEffectActive_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged) == 0x000004, "Wrong alignment on GA_BoostJumpPack_C_HandleCurrentBoostStateChanged");
static_assert(sizeof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged) == 0x000010, "Wrong size on GA_BoostJumpPack_C_HandleCurrentBoostStateChanged");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, PreviousState) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::PreviousState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, CurrentState_0) == 0x000001, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::CurrentState_0' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, CallFunc_IsUsingJetpackEffectActive_ReturnValue) == 0x00000C, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::CallFunc_IsUsingJetpackEffectActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, CallFunc_IsUsingJetpackEffectActive_ReturnValue_1) == 0x00000D, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::CallFunc_IsUsingJetpackEffectActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleCurrentBoostStateChanged, CallFunc_Not_PreBool_ReturnValue) == 0x00000E, "Member 'GA_BoostJumpPack_C_HandleCurrentBoostStateChanged::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleFalling final
{
public:
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_24[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue_2;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_51[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleFalling) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_HandleFalling");
static_assert(sizeof(GA_BoostJumpPack_C_HandleFalling) == 0x000058, "Wrong size on GA_BoostJumpPack_C_HandleFalling");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_GetTimeSeconds_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x000008, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'GA_BoostJumpPack_C_HandleFalling::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_FMax_ReturnValue) == 0x000030, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_GetTimeSeconds_ReturnValue_2) == 0x000038, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_GetTimeSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000048, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000050, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleFalling, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000054, "Member 'GA_BoostJumpPack_C_HandleFalling::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleHovering final
{
public:
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_FMax_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_41[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue_2;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleHovering) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_HandleHovering");
static_assert(sizeof(GA_BoostJumpPack_C_HandleHovering) == 0x000060, "Wrong size on GA_BoostJumpPack_C_HandleHovering");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_GetTimeSeconds_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_BoostJumpPack_C_HandleHovering::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x000020, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000030, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_FMax_ReturnValue) == 0x000038, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_GetTimeSeconds_ReturnValue_2) == 0x000050, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_GetTimeSeconds_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_HandleHovering, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000058, "Member 'GA_BoostJumpPack_C_HandleHovering::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleIdle final
{
public:
	bool                                          bForceEndHovering;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleIdle) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_HandleIdle");
static_assert(sizeof(GA_BoostJumpPack_C_HandleIdle) == 0x000001, "Wrong size on GA_BoostJumpPack_C_HandleIdle");
static_assert(offsetof(GA_BoostJumpPack_C_HandleIdle, bForceEndHovering) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleIdle::bForceEndHovering' has a wrong offset!");

struct GA_BoostJumpPack_C_HandleJetpackInitialBoost final
{
public:
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_HandleJetpackInitialBoost) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_HandleJetpackInitialBoost");
static_assert(sizeof(GA_BoostJumpPack_C_HandleJetpackInitialBoost) == 0x0000D0, "Wrong size on GA_BoostJumpPack_C_HandleJetpackInitialBoost");
static_assert(offsetof(GA_BoostJumpPack_C_HandleJetpackInitialBoost, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_HandleJetpackInitialBoost::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_IsUsingJetpackEffectActive final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_GetActiveGameplayEffectStackCount_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_IsUsingJetpackEffectActive) == 0x000004, "Wrong alignment on GA_BoostJumpPack_C_IsUsingJetpackEffectActive");
static_assert(sizeof(GA_BoostJumpPack_C_IsUsingJetpackEffectActive) == 0x00000C, "Wrong size on GA_BoostJumpPack_C_IsUsingJetpackEffectActive");
static_assert(offsetof(GA_BoostJumpPack_C_IsUsingJetpackEffectActive, ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_IsUsingJetpackEffectActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsUsingJetpackEffectActive, CallFunc_GetActiveGameplayEffectStackCount_ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_IsUsingJetpackEffectActive::CallFunc_GetActiveGameplayEffectStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsUsingJetpackEffectActive, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_IsUsingJetpackEffectActive::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_BoostJumpPack_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_BoostJumpPack_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_BoostJumpPack_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_K2_OnEndAbility");
static_assert(sizeof(GA_BoostJumpPack_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_BoostJumpPack_C_K2_OnEndAbility");
static_assert(offsetof(GA_BoostJumpPack_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_BoostJumpPack_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_BoostJumpPack_C_OnCurrentStateChanged final
{
public:
	EJumpBoostPackState                           InPreviousState;
	EJumpBoostPackState                           InCurrentState;
};
static_assert(alignof(GA_BoostJumpPack_C_OnCurrentStateChanged) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_OnCurrentStateChanged");
static_assert(sizeof(GA_BoostJumpPack_C_OnCurrentStateChanged) == 0x000002, "Wrong size on GA_BoostJumpPack_C_OnCurrentStateChanged");
static_assert(offsetof(GA_BoostJumpPack_C_OnCurrentStateChanged, InPreviousState) == 0x000000, "Member 'GA_BoostJumpPack_C_OnCurrentStateChanged::InPreviousState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_OnCurrentStateChanged, InCurrentState) == 0x000001, "Member 'GA_BoostJumpPack_C_OnCurrentStateChanged::InCurrentState' has a wrong offset!");

struct GA_BoostJumpPack_C_OnPawnLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GA_BoostJumpPack_C_OnPawnLanded) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_OnPawnLanded");
static_assert(sizeof(GA_BoostJumpPack_C_OnPawnLanded) == 0x0000E0, "Wrong size on GA_BoostJumpPack_C_OnPawnLanded");
static_assert(offsetof(GA_BoostJumpPack_C_OnPawnLanded, Hit) == 0x000000, "Member 'GA_BoostJumpPack_C_OnPawnLanded::Hit' has a wrong offset!");

struct GA_BoostJumpPack_C_OnSavedPawnChanged_ final
{
public:
	class AFortPlayerPawn*                        PreviousPawn;
	class AFortPlayerPawn*                        NewPawn;
};
static_assert(alignof(GA_BoostJumpPack_C_OnSavedPawnChanged_) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_OnSavedPawnChanged_");
static_assert(sizeof(GA_BoostJumpPack_C_OnSavedPawnChanged_) == 0x000010, "Wrong size on GA_BoostJumpPack_C_OnSavedPawnChanged_");
static_assert(offsetof(GA_BoostJumpPack_C_OnSavedPawnChanged_, PreviousPawn) == 0x000000, "Member 'GA_BoostJumpPack_C_OnSavedPawnChanged_::PreviousPawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_OnSavedPawnChanged_, NewPawn) == 0x000008, "Member 'GA_BoostJumpPack_C_OnSavedPawnChanged_::NewPawn' has a wrong offset!");

struct GA_BoostJumpPack_C_PotentiallyEndHovering final
{
public:
	bool                                          bForceEndHovering;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_PotentiallyEndHovering) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_PotentiallyEndHovering");
static_assert(sizeof(GA_BoostJumpPack_C_PotentiallyEndHovering) == 0x000003, "Wrong size on GA_BoostJumpPack_C_PotentiallyEndHovering");
static_assert(offsetof(GA_BoostJumpPack_C_PotentiallyEndHovering, bForceEndHovering) == 0x000000, "Member 'GA_BoostJumpPack_C_PotentiallyEndHovering::bForceEndHovering' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_PotentiallyEndHovering, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_C_PotentiallyEndHovering::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_PotentiallyEndHovering, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'GA_BoostJumpPack_C_PotentiallyEndHovering::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_ProcessAbilityStateMachine final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	Enum_BoostJumpStates                          CallFunc_DetermineStateToTransitionTo_BoostState;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
};
static_assert(alignof(GA_BoostJumpPack_C_ProcessAbilityStateMachine) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_ProcessAbilityStateMachine");
static_assert(sizeof(GA_BoostJumpPack_C_ProcessAbilityStateMachine) == 0x000003, "Wrong size on GA_BoostJumpPack_C_ProcessAbilityStateMachine");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessAbilityStateMachine, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'GA_BoostJumpPack_C_ProcessAbilityStateMachine::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessAbilityStateMachine, CallFunc_DetermineStateToTransitionTo_BoostState) == 0x000001, "Member 'GA_BoostJumpPack_C_ProcessAbilityStateMachine::CallFunc_DetermineStateToTransitionTo_BoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessAbilityStateMachine, K2Node_SwitchEnum_CmpSuccess_1) == 0x000002, "Member 'GA_BoostJumpPack_C_ProcessAbilityStateMachine::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

struct GA_BoostJumpPack_C_ProcessTriggerData final
{
public:
	struct FGameplayTag                           TagOne;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_6[0x2];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_MatchesAnyTags_ReturnValue;
	bool                                          CallFunc_MatchesAnyTags_ReturnValue_1;
	uint8                                         Pad_16[0x2];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_IsSwimming_ReturnValue;
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_MatchesAnyTags_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_33[0x1];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	int32                                         CallFunc_Max_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_MatchesAnyTags_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
};
static_assert(alignof(GA_BoostJumpPack_C_ProcessTriggerData) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_ProcessTriggerData");
static_assert(sizeof(GA_BoostJumpPack_C_ProcessTriggerData) == 0x000048, "Wrong size on GA_BoostJumpPack_C_ProcessTriggerData");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, TagOne) == 0x000000, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::TagOne' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Max_ReturnValue) == 0x00000C, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_MatchesAnyTags_ReturnValue) == 0x000014, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_MatchesAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_MatchesAnyTags_ReturnValue_1) == 0x000015, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_MatchesAnyTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000018, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000028, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Not_PreBool_ReturnValue_1) == 0x000029, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_IsSwimming_ReturnValue) == 0x00002A, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_IsSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_IsMovingOnGround_ReturnValue) == 0x00002B, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Not_PreBool_ReturnValue_2) == 0x00002C, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Not_PreBool_ReturnValue_3) == 0x00002D, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_BooleanAND_ReturnValue_1) == 0x00002F, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_MatchesAnyTags_ReturnValue_2) == 0x000030, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_MatchesAnyTags_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_BooleanAND_ReturnValue_2) == 0x000031, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_BooleanAND_ReturnValue_3) == 0x000032, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000034, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Max_ReturnValue_1) == 0x000038, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_MatchesAnyTags_ReturnValue_3) == 0x000040, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_MatchesAnyTags_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_ProcessTriggerData, CallFunc_BooleanAND_ReturnValue_4) == 0x000041, "Member 'GA_BoostJumpPack_C_ProcessTriggerData::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");

struct GA_BoostJumpPack_C_Reengage_Falling_Movement final
{
public:
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Reengage_Falling_Movement) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_Reengage_Falling_Movement");
static_assert(sizeof(GA_BoostJumpPack_C_Reengage_Falling_Movement) == 0x000002, "Wrong size on GA_BoostJumpPack_C_Reengage_Falling_Movement");
static_assert(offsetof(GA_BoostJumpPack_C_Reengage_Falling_Movement, CallFunc_IsFalling_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_Reengage_Falling_Movement::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reengage_Falling_Movement, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_C_Reengage_Falling_Movement::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_Reengage_Hovering_Movement final
{
public:
	bool                                          CallFunc_IsFalling_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Reengage_Hovering_Movement) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_Reengage_Hovering_Movement");
static_assert(sizeof(GA_BoostJumpPack_C_Reengage_Hovering_Movement) == 0x000001, "Wrong size on GA_BoostJumpPack_C_Reengage_Hovering_Movement");
static_assert(offsetof(GA_BoostJumpPack_C_Reengage_Hovering_Movement, CallFunc_IsFalling_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_Reengage_Hovering_Movement::CallFunc_IsFalling_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_Reset_Toggle_Input_State final
{
public:
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_BoostJumpPack_C_Reset_Toggle_Input_State) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Reset_Toggle_Input_State");
static_assert(sizeof(GA_BoostJumpPack_C_Reset_Toggle_Input_State) == 0x000018, "Wrong size on GA_BoostJumpPack_C_Reset_Toggle_Input_State");
static_assert(offsetof(GA_BoostJumpPack_C_Reset_Toggle_Input_State, CallFunc_GetController_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_Reset_Toggle_Input_State::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reset_Toggle_Input_State, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000008, "Member 'GA_BoostJumpPack_C_Reset_Toggle_Input_State::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reset_Toggle_Input_State, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_BoostJumpPack_C_Reset_Toggle_Input_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_BoostJumpPack_C_ResetTransitionVariables final
{
public:
	bool                                          bForceEndHovering;
};
static_assert(alignof(GA_BoostJumpPack_C_ResetTransitionVariables) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_ResetTransitionVariables");
static_assert(sizeof(GA_BoostJumpPack_C_ResetTransitionVariables) == 0x000001, "Wrong size on GA_BoostJumpPack_C_ResetTransitionVariables");
static_assert(offsetof(GA_BoostJumpPack_C_ResetTransitionVariables, bForceEndHovering) == 0x000000, "Member 'GA_BoostJumpPack_C_ResetTransitionVariables::bForceEndHovering' has a wrong offset!");

struct GA_BoostJumpPack_C_SavePlayerPawn final
{
public:
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_SavePlayerPawn) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_SavePlayerPawn");
static_assert(sizeof(GA_BoostJumpPack_C_SavePlayerPawn) == 0x000058, "Wrong size on GA_BoostJumpPack_C_SavePlayerPawn");
static_assert(offsetof(GA_BoostJumpPack_C_SavePlayerPawn, CallFunc_GetActorInfo_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_SavePlayerPawn::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SavePlayerPawn, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000048, "Member 'GA_BoostJumpPack_C_SavePlayerPawn::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SavePlayerPawn, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GA_BoostJumpPack_C_SavePlayerPawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SavePlayerPawn, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000051, "Member 'GA_BoostJumpPack_C_SavePlayerPawn::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_SetCurrentBoostState final
{
public:
	EJumpBoostPackState                           NewState;
	EJumpBoostPackState                           PreviousState;
	Enum_BoostJumpStates                          PreviewBoostState;
};
static_assert(alignof(GA_BoostJumpPack_C_SetCurrentBoostState) == 0x000001, "Wrong alignment on GA_BoostJumpPack_C_SetCurrentBoostState");
static_assert(sizeof(GA_BoostJumpPack_C_SetCurrentBoostState) == 0x000003, "Wrong size on GA_BoostJumpPack_C_SetCurrentBoostState");
static_assert(offsetof(GA_BoostJumpPack_C_SetCurrentBoostState, NewState) == 0x000000, "Member 'GA_BoostJumpPack_C_SetCurrentBoostState::NewState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetCurrentBoostState, PreviousState) == 0x000001, "Member 'GA_BoostJumpPack_C_SetCurrentBoostState::PreviousState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetCurrentBoostState, PreviewBoostState) == 0x000002, "Member 'GA_BoostJumpPack_C_SetCurrentBoostState::PreviewBoostState' has a wrong offset!");

struct GA_BoostJumpPack_C_SetJumpHeight final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class AFortPlayerPawn*                        Pawn_Out;
	struct FVector                                Jump_Height;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_SetJumpHeight) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_SetJumpHeight");
static_assert(sizeof(GA_BoostJumpPack_C_SetJumpHeight) == 0x000088, "Wrong size on GA_BoostJumpPack_C_SetJumpHeight");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, Pawn) == 0x000000, "Member 'GA_BoostJumpPack_C_SetJumpHeight::Pawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, Pawn_Out) == 0x000008, "Member 'GA_BoostJumpPack_C_SetJumpHeight::Pawn_Out' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, Jump_Height) == 0x000010, "Member 'GA_BoostJumpPack_C_SetJumpHeight::Jump_Height' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, CallFunc_GetVelocity_ReturnValue) == 0x000028, "Member 'GA_BoostJumpPack_C_SetJumpHeight::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, CallFunc_MakeVector_ReturnValue) == 0x000040, "Member 'GA_BoostJumpPack_C_SetJumpHeight::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000058, "Member 'GA_BoostJumpPack_C_SetJumpHeight::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetJumpHeight, CallFunc_Add_VectorVector_ReturnValue) == 0x000070, "Member 'GA_BoostJumpPack_C_SetJumpHeight::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_Setup_Notify_at_Apex final
{
public:
	bool                                          bNotifyApex;
	uint8                                         Pad_1[0x7];
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	class UFortMovementComp_CharacterAthena*      K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_BoostJumpPack_C_Setup_Notify_at_Apex) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Setup_Notify_at_Apex");
static_assert(sizeof(GA_BoostJumpPack_C_Setup_Notify_at_Apex) == 0x000020, "Wrong size on GA_BoostJumpPack_C_Setup_Notify_at_Apex");
static_assert(offsetof(GA_BoostJumpPack_C_Setup_Notify_at_Apex, bNotifyApex) == 0x000000, "Member 'GA_BoostJumpPack_C_Setup_Notify_at_Apex::bNotifyApex' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Setup_Notify_at_Apex, CallFunc_GetMovementComponent_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_Setup_Notify_at_Apex::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Setup_Notify_at_Apex, K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena) == 0x000010, "Member 'GA_BoostJumpPack_C_Setup_Notify_at_Apex::K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Setup_Notify_at_Apex, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_BoostJumpPack_C_Setup_Notify_at_Apex::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_BoostJumpPack_C_SetupTransitionVariables final
{
public:
	struct FGameplayTag                           InTag;
	bool                                          CallFunc_Reasons_To_Reset_on_Transition_ReturnValue;
	bool                                          CallFunc_IsCurrentlyDead_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
};
static_assert(alignof(GA_BoostJumpPack_C_SetupTransitionVariables) == 0x000004, "Wrong alignment on GA_BoostJumpPack_C_SetupTransitionVariables");
static_assert(sizeof(GA_BoostJumpPack_C_SetupTransitionVariables) == 0x000008, "Wrong size on GA_BoostJumpPack_C_SetupTransitionVariables");
static_assert(offsetof(GA_BoostJumpPack_C_SetupTransitionVariables, InTag) == 0x000000, "Member 'GA_BoostJumpPack_C_SetupTransitionVariables::InTag' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetupTransitionVariables, CallFunc_Reasons_To_Reset_on_Transition_ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_SetupTransitionVariables::CallFunc_Reasons_To_Reset_on_Transition_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetupTransitionVariables, CallFunc_IsCurrentlyDead_ReturnValue) == 0x000005, "Member 'GA_BoostJumpPack_C_SetupTransitionVariables::CallFunc_IsCurrentlyDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetupTransitionVariables, CallFunc_Greater_IntInt_ReturnValue) == 0x000006, "Member 'GA_BoostJumpPack_C_SetupTransitionVariables::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_SetupTransitionVariables, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000007, "Member 'GA_BoostJumpPack_C_SetupTransitionVariables::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");

struct GA_BoostJumpPack_C_Start_Regen_Effect final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_A[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Start_Regen_Effect) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Start_Regen_Effect");
static_assert(sizeof(GA_BoostJumpPack_C_Start_Regen_Effect) == 0x000018, "Wrong size on GA_BoostJumpPack_C_Start_Regen_Effect");
static_assert(offsetof(GA_BoostJumpPack_C_Start_Regen_Effect, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_Start_Regen_Effect::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Start_Regen_Effect, CallFunc_HasAuthority_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_Start_Regen_Effect::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Start_Regen_Effect, CallFunc_Not_PreBool_ReturnValue) == 0x000009, "Member 'GA_BoostJumpPack_C_Start_Regen_Effect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Start_Regen_Effect, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x00000C, "Member 'GA_BoostJumpPack_C_Start_Regen_Effect::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_Stop_Regen_Effect final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Stop_Regen_Effect) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Stop_Regen_Effect");
static_assert(sizeof(GA_BoostJumpPack_C_Stop_Regen_Effect) == 0x000010, "Wrong size on GA_BoostJumpPack_C_Stop_Regen_Effect");
static_assert(offsetof(GA_BoostJumpPack_C_Stop_Regen_Effect, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_Stop_Regen_Effect::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Stop_Regen_Effect, CallFunc_HasAuthority_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_Stop_Regen_Effect::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_TransitionFromBoost final
{
public:
	Enum_BoostJumpStates                          TargetBoostState;
	bool                                          CallFunc_NotInHidingSpot_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_GetFuel_Fuel;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
};
static_assert(alignof(GA_BoostJumpPack_C_TransitionFromBoost) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_TransitionFromBoost");
static_assert(sizeof(GA_BoostJumpPack_C_TransitionFromBoost) == 0x000018, "Wrong size on GA_BoostJumpPack_C_TransitionFromBoost");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, TargetBoostState) == 0x000000, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_NotInHidingSpot_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_NotInHidingSpot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_BooleanAND_ReturnValue_1) == 0x000012, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromBoost, CallFunc_BooleanAND_ReturnValue_2) == 0x000013, "Member 'GA_BoostJumpPack_C_TransitionFromBoost::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

struct GA_BoostJumpPack_C_TransitionFromFalling final
{
public:
	Enum_BoostJumpStates                          TargetBoostState;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_2[0x6];
	double                                        CallFunc_GetFuel_Fuel;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(GA_BoostJumpPack_C_TransitionFromFalling) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_TransitionFromFalling");
static_assert(sizeof(GA_BoostJumpPack_C_TransitionFromFalling) == 0x000018, "Wrong size on GA_BoostJumpPack_C_TransitionFromFalling");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, TargetBoostState) == 0x000000, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, CallFunc_BooleanOR_ReturnValue) == 0x000011, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromFalling, CallFunc_BooleanAND_ReturnValue_1) == 0x000013, "Member 'GA_BoostJumpPack_C_TransitionFromFalling::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

struct GA_BoostJumpPack_C_TransitionFromHovering final
{
public:
	Enum_BoostJumpStates                          TargetBoostState;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_3[0x5];
	double                                        CallFunc_GetFuel_Fuel;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
};
static_assert(alignof(GA_BoostJumpPack_C_TransitionFromHovering) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_TransitionFromHovering");
static_assert(sizeof(GA_BoostJumpPack_C_TransitionFromHovering) == 0x000018, "Wrong size on GA_BoostJumpPack_C_TransitionFromHovering");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, TargetBoostState) == 0x000000, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, CallFunc_BooleanOR_ReturnValue_1) == 0x000011, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromHovering, CallFunc_BooleanOR_ReturnValue_2) == 0x000012, "Member 'GA_BoostJumpPack_C_TransitionFromHovering::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

struct GA_BoostJumpPack_C_Get_Player_Pawn final
{
public:
	class UObject*                                Object;
	class AFortPlayerPawn*                        ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_29[0x7];
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_Get_Player_Pawn) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Get_Player_Pawn");
static_assert(sizeof(GA_BoostJumpPack_C_Get_Player_Pawn) == 0x000038, "Wrong size on GA_BoostJumpPack_C_Get_Player_Pawn");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, Object) == 0x000000, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::Object' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000020, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Get_Player_Pawn, CallFunc_GetPlayerPawn_ReturnValue) == 0x000030, "Member 'GA_BoostJumpPack_C_Get_Player_Pawn::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_GetFuel final
{
public:
	double                                        Fuel;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x7];
	double                                        Temp_real_Variable;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_19[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	double                                        K2Node_Select_Default;
	double                                        K2Node_Select_Option_1_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_C_GetFuel) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_GetFuel");
static_assert(sizeof(GA_BoostJumpPack_C_GetFuel) == 0x000030, "Wrong size on GA_BoostJumpPack_C_GetFuel");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, Fuel) == 0x000000, "Member 'GA_BoostJumpPack_C_GetFuel::Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, Temp_bool_Variable) == 0x000008, "Member 'GA_BoostJumpPack_C_GetFuel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, Temp_real_Variable) == 0x000010, "Member 'GA_BoostJumpPack_C_GetFuel::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000018, "Member 'GA_BoostJumpPack_C_GetFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x00001C, "Member 'GA_BoostJumpPack_C_GetFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, K2Node_Select_Default) == 0x000020, "Member 'GA_BoostJumpPack_C_GetFuel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetFuel, K2Node_Select_Option_1_ImplicitCast) == 0x000028, "Member 'GA_BoostJumpPack_C_GetFuel::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

struct GA_BoostJumpPack_C_GetMaxFuel final
{
public:
	double                                        MaxFuel;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x7];
	double                                        Temp_real_Variable;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_19[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	double                                        K2Node_Select_Default;
	double                                        K2Node_Select_Option_1_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_C_GetMaxFuel) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_GetMaxFuel");
static_assert(sizeof(GA_BoostJumpPack_C_GetMaxFuel) == 0x000030, "Wrong size on GA_BoostJumpPack_C_GetMaxFuel");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, MaxFuel) == 0x000000, "Member 'GA_BoostJumpPack_C_GetMaxFuel::MaxFuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, Temp_bool_Variable) == 0x000008, "Member 'GA_BoostJumpPack_C_GetMaxFuel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, Temp_real_Variable) == 0x000010, "Member 'GA_BoostJumpPack_C_GetMaxFuel::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000018, "Member 'GA_BoostJumpPack_C_GetMaxFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x00001C, "Member 'GA_BoostJumpPack_C_GetMaxFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, K2Node_Select_Default) == 0x000020, "Member 'GA_BoostJumpPack_C_GetMaxFuel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetMaxFuel, K2Node_Select_Option_1_ImplicitCast) == 0x000028, "Member 'GA_BoostJumpPack_C_GetMaxFuel::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

struct GA_BoostJumpPack_C_GetReserveFuel final
{
public:
	double                                        ReturnValue;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_SelectFloat_A_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_C_GetReserveFuel) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_GetReserveFuel");
static_assert(sizeof(GA_BoostJumpPack_C_GetReserveFuel) == 0x000020, "Wrong size on GA_BoostJumpPack_C_GetReserveFuel");
static_assert(offsetof(GA_BoostJumpPack_C_GetReserveFuel, ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_GetReserveFuel::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetReserveFuel, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000008, "Member 'GA_BoostJumpPack_C_GetReserveFuel::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetReserveFuel, CallFunc_GetFloatAttribute_ReturnValue) == 0x00000C, "Member 'GA_BoostJumpPack_C_GetReserveFuel::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetReserveFuel, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_GetReserveFuel::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_GetReserveFuel, CallFunc_SelectFloat_A_ImplicitCast) == 0x000018, "Member 'GA_BoostJumpPack_C_GetReserveFuel::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");

struct GA_BoostJumpPack_C_IsBoostAllowed final
{
public:
	bool                                          ReturnValue;
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	uint8                                         Pad_2[0x2];
	float                                         CallFunc_GetFloatAttribute_ReturnValue;
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
};
static_assert(alignof(GA_BoostJumpPack_C_IsBoostAllowed) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_IsBoostAllowed");
static_assert(sizeof(GA_BoostJumpPack_C_IsBoostAllowed) == 0x000018, "Wrong size on GA_BoostJumpPack_C_IsBoostAllowed");
static_assert(offsetof(GA_BoostJumpPack_C_IsBoostAllowed, ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_IsBoostAllowed::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsBoostAllowed, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000001, "Member 'GA_BoostJumpPack_C_IsBoostAllowed::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsBoostAllowed, CallFunc_GetFloatAttribute_ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_IsBoostAllowed::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsBoostAllowed, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_IsBoostAllowed::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsBoostAllowed, CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast) == 0x000010, "Member 'GA_BoostJumpPack_C_IsBoostAllowed::CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast' has a wrong offset!");

struct GA_BoostJumpPack_C_IsCurrentlyDead final
{
public:
	struct FGameplayTag                           TagOne;
	bool                                          ReturnValue;
	bool                                          CallFunc_MatchesTag_ReturnValue;
	bool                                          CallFunc_IsDBNO_ReturnValue;
	bool                                          CallFunc_MatchesTag_ReturnValue_1;
	bool                                          CallFunc_MatchesTag_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
};
static_assert(alignof(GA_BoostJumpPack_C_IsCurrentlyDead) == 0x000004, "Wrong alignment on GA_BoostJumpPack_C_IsCurrentlyDead");
static_assert(sizeof(GA_BoostJumpPack_C_IsCurrentlyDead) == 0x00000C, "Wrong size on GA_BoostJumpPack_C_IsCurrentlyDead");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, TagOne) == 0x000000, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::TagOne' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_MatchesTag_ReturnValue) == 0x000005, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_IsDBNO_ReturnValue) == 0x000006, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_MatchesTag_ReturnValue_1) == 0x000007, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_MatchesTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_MatchesTag_ReturnValue_2) == 0x000008, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_MatchesTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_BooleanOR_ReturnValue) == 0x000009, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_BooleanOR_ReturnValue_1) == 0x00000A, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_IsCurrentlyDead, CallFunc_BooleanOR_ReturnValue_2) == 0x00000B, "Member 'GA_BoostJumpPack_C_IsCurrentlyDead::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

struct GA_BoostJumpPack_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayAbilitySpecHandle             Handle;
	uint8                                         Pad_4C[0x4];
	struct FGameplayTagContainer                  RelevantTags;
	bool                                          ReturnValue;
	uint8                                         Pad_71[0x7];
	class AFortPlayerControllerGameplay*          K2Node_DynamicCast_AsFort_Player_Controller_Gameplay;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsAllowedToFly_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_K2_CanActivateAbility");
static_assert(sizeof(GA_BoostJumpPack_C_K2_CanActivateAbility) == 0x000088, "Wrong size on GA_BoostJumpPack_C_K2_CanActivateAbility");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Controller_Gameplay) == 0x000078, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Controller_Gameplay' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, CallFunc_IsAllowedToFly_ReturnValue) == 0x000081, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::CallFunc_IsAllowedToFly_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x000082, "Member 'GA_BoostJumpPack_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayEventData                     Payload;
	bool                                          ReturnValue;
	uint8                                         Pad_F9[0x7];
	class AFortPlayerPawnAthena*                  PlayerPawn;
	struct FGameplayTagContainer                  ExplicitExecutionTags;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent) == 0x000130, "Wrong size on GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000048, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000F8, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, PlayerPawn) == 0x000100, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::PlayerPawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, ExplicitExecutionTags) == 0x000108, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::ExplicitExecutionTags' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, CallFunc_Not_PreBool_ReturnValue) == 0x000128, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, CallFunc_Not_PreBool_ReturnValue_1) == 0x000129, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent, CallFunc_BooleanAND_ReturnValue) == 0x00012A, "Member 'GA_BoostJumpPack_C_K2_ShouldAbilityRespondToEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_NotInHidingSpot final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GA_BoostJumpPack_C_NotInHidingSpot) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_NotInHidingSpot");
static_assert(sizeof(GA_BoostJumpPack_C_NotInHidingSpot) == 0x000040, "Wrong size on GA_BoostJumpPack_C_NotInHidingSpot");
static_assert(offsetof(GA_BoostJumpPack_C_NotInHidingSpot, ReturnValue) == 0x000000, "Member 'GA_BoostJumpPack_C_NotInHidingSpot::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_NotInHidingSpot, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_NotInHidingSpot::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_NotInHidingSpot, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000028, "Member 'GA_BoostJumpPack_C_NotInHidingSpot::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_NotInHidingSpot, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000038, "Member 'GA_BoostJumpPack_C_NotInHidingSpot::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_NotInHidingSpot, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'GA_BoostJumpPack_C_NotInHidingSpot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition final
{
public:
	struct FGameplayTag                           tag;
	bool                                          ReturnValue;
	bool                                          CallFunc_MatchesAnyTags_ReturnValue;
	uint8                                         Pad_6[0x2];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsInGhostMode_ReturnValue;
	bool                                          CallFunc_IsSkydiving_ReturnValue;
	bool                                          CallFunc_GetPendingSkydiveLaunch_ReturnValue;
	bool                                          CallFunc_IsParachuteOpen_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue_4;
};
static_assert(alignof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition");
static_assert(sizeof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition) == 0x000028, "Wrong size on GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, tag) == 0x000000, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::tag' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, ReturnValue) == 0x000004, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_MatchesAnyTags_ReturnValue) == 0x000005, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_MatchesAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000010, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_IsInVehicle_ReturnValue) == 0x000019, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_IsInGhostMode_ReturnValue) == 0x00001A, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_IsInGhostMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_IsSkydiving_ReturnValue) == 0x00001B, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_GetPendingSkydiveLaunch_ReturnValue) == 0x00001C, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_GetPendingSkydiveLaunch_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_IsParachuteOpen_ReturnValue) == 0x00001D, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_IsParachuteOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_BooleanOR_ReturnValue) == 0x00001E, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_BooleanOR_ReturnValue_1) == 0x00001F, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_BooleanOR_ReturnValue_2) == 0x000020, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_BooleanOR_ReturnValue_3) == 0x000021, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition, CallFunc_BooleanOR_ReturnValue_4) == 0x000022, "Member 'GA_BoostJumpPack_C_Reasons_To_Reset_on_Transition::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");

struct GA_BoostJumpPack_C_TransitionFromIdle final
{
public:
	Enum_BoostJumpStates                          TargetBoostState;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsBoostAllowed_ReturnValue;
	uint8                                         Pad_3[0x5];
	double                                        CallFunc_GetFuel_Fuel;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_11[0x7];
	double                                        CallFunc_GetFuel_Fuel_1;
	double                                        CallFunc_GetMaxFuel_MaxFuel;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(GA_BoostJumpPack_C_TransitionFromIdle) == 0x000008, "Wrong alignment on GA_BoostJumpPack_C_TransitionFromIdle");
static_assert(sizeof(GA_BoostJumpPack_C_TransitionFromIdle) == 0x000038, "Wrong size on GA_BoostJumpPack_C_TransitionFromIdle");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, TargetBoostState) == 0x000000, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::TargetBoostState' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_IsBoostAllowed_ReturnValue) == 0x000002, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_IsBoostAllowed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_GetFuel_Fuel) == 0x000008, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_GetFuel_Fuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_GetFuel_Fuel_1) == 0x000018, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_GetFuel_Fuel_1' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_GetMaxFuel_MaxFuel) == 0x000020, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_GetMaxFuel_MaxFuel' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000030, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_BooleanOR_ReturnValue) == 0x000032, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_C_TransitionFromIdle, CallFunc_BooleanAND_ReturnValue_1) == 0x000033, "Member 'GA_BoostJumpPack_C_TransitionFromIdle::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

}
