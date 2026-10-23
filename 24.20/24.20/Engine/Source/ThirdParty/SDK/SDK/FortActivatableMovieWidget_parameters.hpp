#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	uint8                                         Pad_12[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable_1;
	EUMGSequencePlayMode                          Temp_byte_Variable_2;
	EUMGSequencePlayMode                          Temp_byte_Variable_3;
	uint8                                         Pad_23[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_3C[0x4];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	uint8                                         Pad_49[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          K2Node_Event_bReverse_1;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_5A[0x6];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_71[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;
	bool                                          K2Node_Event_bEnd;
	EUFortActivatablePrePostRollStates            K2Node_Event_Reason;
	bool                                          K2Node_Event_bReverse;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;
	EUMGSequencePlayMode                          K2Node_Select_Default_1;
	uint8                                         Pad_85[0x3];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget) == 0x000008, "Wrong alignment on FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget");
static_assert(sizeof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget) == 0x0000A0, "Wrong size on FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, EntryPoint) == 0x000000, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, Temp_bool_Variable) == 0x000004, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_SpawnSound2D_ReturnValue) == 0x000008, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, Temp_byte_Variable) == 0x000010, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, Temp_byte_Variable_1) == 0x000011, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, Temp_bool_Variable_1) == 0x000020, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, Temp_byte_Variable_2) == 0x000021, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, Temp_byte_Variable_3) == 0x000022, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000040, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000048, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x00004C, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_Event_bReverse_1) == 0x000058, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_Event_bReverse_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_Select_Default) == 0x000059, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000060, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000068, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x000078, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_Event_bEnd) == 0x000080, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_Event_bEnd' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_Event_Reason) == 0x000081, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_Event_bReverse) == 0x000082, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_Event_bReverse' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000083, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, K2Node_Select_Default_1) == 0x000084, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000088, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000090, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'FortActivatableMovieWidget_C_ExecuteUbergraph_FortActivatableMovieWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct FortActivatableMovieWidget_C_StartFadeFromColor final
{
public:
	bool                                          bEnd;
	EUFortActivatablePrePostRollStates            Reason;
	bool                                          bReverse;
};
static_assert(alignof(FortActivatableMovieWidget_C_StartFadeFromColor) == 0x000001, "Wrong alignment on FortActivatableMovieWidget_C_StartFadeFromColor");
static_assert(sizeof(FortActivatableMovieWidget_C_StartFadeFromColor) == 0x000003, "Wrong size on FortActivatableMovieWidget_C_StartFadeFromColor");
static_assert(offsetof(FortActivatableMovieWidget_C_StartFadeFromColor, bEnd) == 0x000000, "Member 'FortActivatableMovieWidget_C_StartFadeFromColor::bEnd' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_StartFadeFromColor, Reason) == 0x000001, "Member 'FortActivatableMovieWidget_C_StartFadeFromColor::Reason' has a wrong offset!");
static_assert(offsetof(FortActivatableMovieWidget_C_StartFadeFromColor, bReverse) == 0x000002, "Member 'FortActivatableMovieWidget_C_StartFadeFromColor::bReverse' has a wrong offset!");

struct FortActivatableMovieWidget_C_StartWholeFade final
{
public:
	bool                                          bReverse;
};
static_assert(alignof(FortActivatableMovieWidget_C_StartWholeFade) == 0x000001, "Wrong alignment on FortActivatableMovieWidget_C_StartWholeFade");
static_assert(sizeof(FortActivatableMovieWidget_C_StartWholeFade) == 0x000001, "Wrong size on FortActivatableMovieWidget_C_StartWholeFade");
static_assert(offsetof(FortActivatableMovieWidget_C_StartWholeFade, bReverse) == 0x000000, "Member 'FortActivatableMovieWidget_C_StartWholeFade::bReverse' has a wrong offset!");

}
