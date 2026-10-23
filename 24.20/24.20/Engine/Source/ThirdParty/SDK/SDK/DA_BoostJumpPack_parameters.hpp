#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct DA_BoostJumpPack_C_BPPressTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;
};
static_assert(alignof(DA_BoostJumpPack_C_BPPressTrigger) == 0x000008, "Wrong alignment on DA_BoostJumpPack_C_BPPressTrigger");
static_assert(sizeof(DA_BoostJumpPack_C_BPPressTrigger) == 0x000008, "Wrong size on DA_BoostJumpPack_C_BPPressTrigger");
static_assert(offsetof(DA_BoostJumpPack_C_BPPressTrigger, FortDecoHelper) == 0x000000, "Member 'DA_BoostJumpPack_C_BPPressTrigger::FortDecoHelper' has a wrong offset!");

struct DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsErebus_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_11[0x7];
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_23[0x5];
	struct FGameplayTagContainer                  K2Node_Select_Default;
};
static_assert(alignof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack) == 0x000008, "Wrong alignment on DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack");
static_assert(sizeof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack) == 0x000048, "Wrong size on DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, EntryPoint) == 0x000000, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::EntryPoint' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, CallFunc_IsErebus_ReturnValue) == 0x000004, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, K2Node_Event_FortDecoHelper) == 0x000018, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::K2Node_Event_FortDecoHelper' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, CallFunc_BooleanOR_ReturnValue) == 0x000021, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, Temp_bool_Variable) == 0x000022, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack, K2Node_Select_Default) == 0x000028, "Member 'DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack::K2Node_Select_Default' has a wrong offset!");

struct DA_BoostJumpPack_C_IsOnGround final
{
public:
	bool                                          bOnGround;
	uint8                                         Pad_1[0x7];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(DA_BoostJumpPack_C_IsOnGround) == 0x000008, "Wrong alignment on DA_BoostJumpPack_C_IsOnGround");
static_assert(sizeof(DA_BoostJumpPack_C_IsOnGround) == 0x000020, "Wrong size on DA_BoostJumpPack_C_IsOnGround");
static_assert(offsetof(DA_BoostJumpPack_C_IsOnGround, bOnGround) == 0x000000, "Member 'DA_BoostJumpPack_C_IsOnGround::bOnGround' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_IsOnGround, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'DA_BoostJumpPack_C_IsOnGround::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_IsOnGround, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'DA_BoostJumpPack_C_IsOnGround::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_IsOnGround, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'DA_BoostJumpPack_C_IsOnGround::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_IsOnGround, CallFunc_IsFalling_ReturnValue) == 0x000019, "Member 'DA_BoostJumpPack_C_IsOnGround::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_IsOnGround, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'DA_BoostJumpPack_C_IsOnGround::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct DA_BoostJumpPack_C_RaiseUsageError final
{
public:
	struct FGameplayTagContainer                  FailedReason;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(DA_BoostJumpPack_C_RaiseUsageError) == 0x000008, "Wrong alignment on DA_BoostJumpPack_C_RaiseUsageError");
static_assert(sizeof(DA_BoostJumpPack_C_RaiseUsageError) == 0x000038, "Wrong size on DA_BoostJumpPack_C_RaiseUsageError");
static_assert(offsetof(DA_BoostJumpPack_C_RaiseUsageError, FailedReason) == 0x000000, "Member 'DA_BoostJumpPack_C_RaiseUsageError::FailedReason' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_RaiseUsageError, CallFunc_GetInstigator_ReturnValue) == 0x000020, "Member 'DA_BoostJumpPack_C_RaiseUsageError::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_RaiseUsageError, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000028, "Member 'DA_BoostJumpPack_C_RaiseUsageError::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(DA_BoostJumpPack_C_RaiseUsageError, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'DA_BoostJumpPack_C_RaiseUsageError::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
