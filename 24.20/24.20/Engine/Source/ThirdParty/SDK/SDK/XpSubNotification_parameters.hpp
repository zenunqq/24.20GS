#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct XpSubNotification_C_ExecuteUbergraph_XpSubNotification final
{
public:
	int32                                         EntryPoint;
	EFortEarnedSubRewardType                      Temp_byte_Variable;
	EFortEarnedSubRewardType                      Temp_byte_Variable_1;
	EFortEarnedSubRewardType                      Temp_byte_Variable_2;
	EFortEarnedSubRewardType                      Temp_byte_Variable_3;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_24[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	int32                                         K2Node_Event_RewardValue;
	EFortEarnedSubRewardType                      K2Node_Event_RewardType;
	uint8                                         Pad_41[0x7];
	class UOverlay*                               K2Node_Select_Default;
	struct FLinearColor                           K2Node_Select_Default_1;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_1;
	class FText                                   K2Node_Select_Default_2;
	class UWidget*                                K2Node_Select_Default_3;
};
static_assert(alignof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification) == 0x000008, "Wrong alignment on XpSubNotification_C_ExecuteUbergraph_XpSubNotification");
static_assert(sizeof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification) == 0x000188, "Wrong size on XpSubNotification_C_ExecuteUbergraph_XpSubNotification");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, EntryPoint) == 0x000000, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, Temp_byte_Variable) == 0x000004, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, Temp_byte_Variable_1) == 0x000005, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, Temp_byte_Variable_2) == 0x000006, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, Temp_byte_Variable_3) == 0x000007, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Event_IsDesignTime) == 0x000008, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000028, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Event_RewardValue) == 0x00003C, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Event_RewardValue' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Event_RewardType) == 0x000040, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Event_RewardType' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Select_Default) == 0x000048, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Select_Default_1) == 0x000050, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C8, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_MakeArray_Array) == 0x000118, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_MakeArray_Array_1) == 0x000128, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, CallFunc_Format_ReturnValue) == 0x000138, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, CallFunc_Format_ReturnValue_1) == 0x000150, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Select_Default_2) == 0x000168, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_ExecuteUbergraph_XpSubNotification, K2Node_Select_Default_3) == 0x000180, "Member 'XpSubNotification_C_ExecuteUbergraph_XpSubNotification::K2Node_Select_Default_3' has a wrong offset!");

struct XpSubNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(XpSubNotification_C_PreConstruct) == 0x000001, "Wrong alignment on XpSubNotification_C_PreConstruct");
static_assert(sizeof(XpSubNotification_C_PreConstruct) == 0x000001, "Wrong size on XpSubNotification_C_PreConstruct");
static_assert(offsetof(XpSubNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'XpSubNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct XpSubNotification_C_SetRewardValue final
{
public:
	int32                                         RewardValue;
	EFortEarnedSubRewardType                      RewardType;
};
static_assert(alignof(XpSubNotification_C_SetRewardValue) == 0x000004, "Wrong alignment on XpSubNotification_C_SetRewardValue");
static_assert(sizeof(XpSubNotification_C_SetRewardValue) == 0x000008, "Wrong size on XpSubNotification_C_SetRewardValue");
static_assert(offsetof(XpSubNotification_C_SetRewardValue, RewardValue) == 0x000000, "Member 'XpSubNotification_C_SetRewardValue::RewardValue' has a wrong offset!");
static_assert(offsetof(XpSubNotification_C_SetRewardValue, RewardType) == 0x000004, "Member 'XpSubNotification_C_SetRewardValue::RewardType' has a wrong offset!");

}
