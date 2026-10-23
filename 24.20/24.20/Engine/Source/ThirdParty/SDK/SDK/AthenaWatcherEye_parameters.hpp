#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;
	uint8                                         Pad_15[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	uint8                                         Pad_34[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue_1;
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue_2;
	bool                                          K2Node_CustomEvent_ManySpectatorsJoining;
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue_3;
	uint8                                         Pad_44[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_51[0x7];
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_79[0x7];
	class UWidgetAnimation*                       K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
};
static_assert(alignof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye) == 0x000008, "Wrong alignment on AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye");
static_assert(sizeof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye) == 0x000090, "Wrong size on AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, EntryPoint) == 0x000000, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, Temp_bool_Variable) == 0x000004, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x000014, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_GetEndTime_ReturnValue) == 0x000018, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_GetEndTime_ReturnValue_1) == 0x000030, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_IsAnyAnimationPlaying_ReturnValue_1) == 0x000040, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_IsAnyAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_IsAnyAnimationPlaying_ReturnValue_2) == 0x000041, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_IsAnyAnimationPlaying_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, K2Node_CustomEvent_ManySpectatorsJoining) == 0x000042, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::K2Node_CustomEvent_ManySpectatorsJoining' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_IsAnyAnimationPlaying_ReturnValue_3) == 0x000043, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_IsAnyAnimationPlaying_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_PlayAnimation_ReturnValue_2) == 0x000048, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, Temp_bool_Variable_1) == 0x000050, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, K2Node_Select_Default) == 0x000058, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_PlayAnimation_ReturnValue_3) == 0x000060, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_PlayAnimation_ReturnValue_4) == 0x000068, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_RandomFloatInRange_ReturnValue) == 0x000070, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, K2Node_Select_Default_1) == 0x000080, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye, CallFunc_PlayAnimation_ReturnValue_5) == 0x000088, "Member 'AthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");

struct AthenaWatcherEye_C_Begin_Watcher final
{
public:
	bool                                          ManySpectatorsJoining;
};
static_assert(alignof(AthenaWatcherEye_C_Begin_Watcher) == 0x000001, "Wrong alignment on AthenaWatcherEye_C_Begin_Watcher");
static_assert(sizeof(AthenaWatcherEye_C_Begin_Watcher) == 0x000001, "Wrong size on AthenaWatcherEye_C_Begin_Watcher");
static_assert(offsetof(AthenaWatcherEye_C_Begin_Watcher, ManySpectatorsJoining) == 0x000000, "Member 'AthenaWatcherEye_C_Begin_Watcher::ManySpectatorsJoining' has a wrong offset!");

}
