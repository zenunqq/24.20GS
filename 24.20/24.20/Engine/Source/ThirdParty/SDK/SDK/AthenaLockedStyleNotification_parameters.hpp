#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bShowProgression;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	class UWidget*                                K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_2C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_65[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification) == 0x000008, "Wrong alignment on AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification");
static_assert(sizeof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification) == 0x000070, "Wrong size on AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, EntryPoint) == 0x000000, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, K2Node_Event_bShowProgression) == 0x000004, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::K2Node_Event_bShowProgression' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, Temp_bool_Variable) == 0x000005, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, K2Node_Select_Default) == 0x000008, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, CallFunc_PlayAnimation_ReturnValue_2) == 0x000030, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, K2Node_CreateDelegate_OutputDelegate_3) == 0x000058, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000064, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000068, "Member 'AthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct AthenaLockedStyleNotification_C_OnUnlockingInfoSet final
{
public:
	bool                                          bShowProgression;
};
static_assert(alignof(AthenaLockedStyleNotification_C_OnUnlockingInfoSet) == 0x000001, "Wrong alignment on AthenaLockedStyleNotification_C_OnUnlockingInfoSet");
static_assert(sizeof(AthenaLockedStyleNotification_C_OnUnlockingInfoSet) == 0x000001, "Wrong size on AthenaLockedStyleNotification_C_OnUnlockingInfoSet");
static_assert(offsetof(AthenaLockedStyleNotification_C_OnUnlockingInfoSet, bShowProgression) == 0x000000, "Member 'AthenaLockedStyleNotification_C_OnUnlockingInfoSet::bShowProgression' has a wrong offset!");

}
