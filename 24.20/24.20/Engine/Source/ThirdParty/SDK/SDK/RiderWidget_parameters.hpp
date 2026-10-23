#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct RiderWidget_C_UpdateHealthDelta final
{
public:
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	uint8                                         Pad_4[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;
	uint8                                         Pad_1C[0x4];
	double                                        CallFunc_FInterpEaseInOut_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_29[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_FInterpEaseInOut_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(RiderWidget_C_UpdateHealthDelta) == 0x000008, "Wrong alignment on RiderWidget_C_UpdateHealthDelta");
static_assert(sizeof(RiderWidget_C_UpdateHealthDelta) == 0x000048, "Wrong size on RiderWidget_C_UpdateHealthDelta");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000000, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x000018, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_FInterpEaseInOut_ReturnValue) == 0x000020, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_FInterpEaseInOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_FInterpEaseInOut_A_ImplicitCast) == 0x000038, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_FInterpEaseInOut_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealthDelta, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000040, "Member 'RiderWidget_C_UpdateHealthDelta::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct RiderWidget_C_UpdateHealth final
{
public:
	double                                        Value;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FTimerHandle                           CallFunc_SetProgressBar_DeltaTimerHandle;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(RiderWidget_C_UpdateHealth) == 0x000008, "Wrong alignment on RiderWidget_C_UpdateHealth");
static_assert(sizeof(RiderWidget_C_UpdateHealth) == 0x000028, "Wrong size on RiderWidget_C_UpdateHealth");
static_assert(offsetof(RiderWidget_C_UpdateHealth, Value) == 0x000000, "Member 'RiderWidget_C_UpdateHealth::Value' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealth, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'RiderWidget_C_UpdateHealth::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealth, CallFunc_GetMaxHealth_ReturnValue) == 0x00000C, "Member 'RiderWidget_C_UpdateHealth::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealth, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'RiderWidget_C_UpdateHealth::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealth, CallFunc_SetProgressBar_DeltaTimerHandle) == 0x000018, "Member 'RiderWidget_C_UpdateHealth::CallFunc_SetProgressBar_DeltaTimerHandle' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateHealth, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'RiderWidget_C_UpdateHealth::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct RiderWidget_C_UpdateEnergy final
{
public:
	double                                        Value;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_9[0x7];
	struct FTimerHandle                           CallFunc_SetProgressBar_DeltaTimerHandle;
};
static_assert(alignof(RiderWidget_C_UpdateEnergy) == 0x000008, "Wrong alignment on RiderWidget_C_UpdateEnergy");
static_assert(sizeof(RiderWidget_C_UpdateEnergy) == 0x000018, "Wrong size on RiderWidget_C_UpdateEnergy");
static_assert(offsetof(RiderWidget_C_UpdateEnergy, Value) == 0x000000, "Member 'RiderWidget_C_UpdateEnergy::Value' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateEnergy, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'RiderWidget_C_UpdateEnergy::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateEnergy, CallFunc_SetProgressBar_DeltaTimerHandle) == 0x000010, "Member 'RiderWidget_C_UpdateEnergy::CallFunc_SetProgressBar_DeltaTimerHandle' has a wrong offset!");

struct RiderWidget_C_UpdateBoostEffect final
{
public:
	double                                        ProgressRatio;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;
};
static_assert(alignof(RiderWidget_C_UpdateBoostEffect) == 0x000008, "Wrong alignment on RiderWidget_C_UpdateBoostEffect");
static_assert(sizeof(RiderWidget_C_UpdateBoostEffect) == 0x000038, "Wrong size on RiderWidget_C_UpdateBoostEffect");
static_assert(offsetof(RiderWidget_C_UpdateBoostEffect, ProgressRatio) == 0x000000, "Member 'RiderWidget_C_UpdateBoostEffect::ProgressRatio' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateBoostEffect, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'RiderWidget_C_UpdateBoostEffect::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateBoostEffect, CallFunc_Lerp_ReturnValue_1) == 0x000010, "Member 'RiderWidget_C_UpdateBoostEffect::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateBoostEffect, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'RiderWidget_C_UpdateBoostEffect::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_UpdateBoostEffect, CallFunc_MakeVector2D_ReturnValue_1) == 0x000028, "Member 'RiderWidget_C_UpdateBoostEffect::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

struct RiderWidget_C_TryPlayingLowState final
{
public:
	class UWidgetAnimation*                       InAnimation;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
};
static_assert(alignof(RiderWidget_C_TryPlayingLowState) == 0x000008, "Wrong alignment on RiderWidget_C_TryPlayingLowState");
static_assert(sizeof(RiderWidget_C_TryPlayingLowState) == 0x000018, "Wrong size on RiderWidget_C_TryPlayingLowState");
static_assert(offsetof(RiderWidget_C_TryPlayingLowState, InAnimation) == 0x000000, "Member 'RiderWidget_C_TryPlayingLowState::InAnimation' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_TryPlayingLowState, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'RiderWidget_C_TryPlayingLowState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_TryPlayingLowState, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'RiderWidget_C_TryPlayingLowState::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

struct RiderWidget_C_SetupEventBinds final
{
public:
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;
	TDelegate<void(class AActor* RidableActor)>   K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_15[0x3];
	class UPlayerRiderComponent_C*                CallFunc_GetComponentByClass_ReturnValue;
	TDelegate<void(class FText Name, const struct FSlateBrush& Icon, class AActor* RidableActor)> K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(double Energy)>                K2Node_CreateDelegate_OutputDelegate_2;
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;
	class AFortPlayerStateZone*                   CallFunc_GetPlayerStateZone_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_4A[0x2];
	TDelegate<void(double Health)>                K2Node_CreateDelegate_OutputDelegate_3;
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_1;
	TDelegate<void(bool bNewVisible)>             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_6C[0x4];
	class AFortPlayerStateZone*                   CallFunc_GetPlayerStateZone_ReturnValue_1;
	bool                                          CallFunc_ShouldOvershieldBarBeVisible_ReturnValue;
};
static_assert(alignof(RiderWidget_C_SetupEventBinds) == 0x000008, "Wrong alignment on RiderWidget_C_SetupEventBinds");
static_assert(sizeof(RiderWidget_C_SetupEventBinds) == 0x000080, "Wrong size on RiderWidget_C_SetupEventBinds");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000000, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'RiderWidget_C_SetupEventBinds::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'RiderWidget_C_SetupEventBinds::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'RiderWidget_C_SetupEventBinds::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_GetPlayerStateZone_ReturnValue) == 0x000040, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_GetPlayerStateZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_IsValid_ReturnValue_2) == 0x000049, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, K2Node_CreateDelegate_OutputDelegate_3) == 0x00004C, "Member 'RiderWidget_C_SetupEventBinds::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_GetContext_ReturnValue_1) == 0x000058, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, K2Node_CreateDelegate_OutputDelegate_4) == 0x000060, "Member 'RiderWidget_C_SetupEventBinds::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_GetPlayerStateZone_ReturnValue_1) == 0x000070, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_GetPlayerStateZone_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetupEventBinds, CallFunc_ShouldOvershieldBarBeVisible_ReturnValue) == 0x000078, "Member 'RiderWidget_C_SetupEventBinds::CallFunc_ShouldOvershieldBarBeVisible_ReturnValue' has a wrong offset!");

struct RiderWidget_C_SetProgressBar final
{
public:
	double                                        Value;
	class UImage*                                 TargetFillBar;
	class UImage*                                 DeltaBar_0;
	double                                        PreviousValue;
	double                                        Threshold;
	class FString                                 FunctionName;
	struct FTimerHandle                           TimerHandle;
	double                                        DeltaDecayDelay;
	struct FTimerHandle                           DeltaTimerHandle;
	struct FTimerHandle                           CallFunc_Set_Delta_TimerHandleRef;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
};
static_assert(alignof(RiderWidget_C_SetProgressBar) == 0x000008, "Wrong alignment on RiderWidget_C_SetProgressBar");
static_assert(sizeof(RiderWidget_C_SetProgressBar) == 0x000090, "Wrong size on RiderWidget_C_SetProgressBar");
static_assert(offsetof(RiderWidget_C_SetProgressBar, Value) == 0x000000, "Member 'RiderWidget_C_SetProgressBar::Value' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, TargetFillBar) == 0x000008, "Member 'RiderWidget_C_SetProgressBar::TargetFillBar' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, DeltaBar_0) == 0x000010, "Member 'RiderWidget_C_SetProgressBar::DeltaBar_0' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, PreviousValue) == 0x000018, "Member 'RiderWidget_C_SetProgressBar::PreviousValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, Threshold) == 0x000020, "Member 'RiderWidget_C_SetProgressBar::Threshold' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, FunctionName) == 0x000028, "Member 'RiderWidget_C_SetProgressBar::FunctionName' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, TimerHandle) == 0x000038, "Member 'RiderWidget_C_SetProgressBar::TimerHandle' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, DeltaDecayDelay) == 0x000040, "Member 'RiderWidget_C_SetProgressBar::DeltaDecayDelay' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, DeltaTimerHandle) == 0x000048, "Member 'RiderWidget_C_SetProgressBar::DeltaTimerHandle' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_Set_Delta_TimerHandleRef) == 0x000050, "Member 'RiderWidget_C_SetProgressBar::CallFunc_Set_Delta_TimerHandleRef' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000058, "Member 'RiderWidget_C_SetProgressBar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000060, "Member 'RiderWidget_C_SetProgressBar::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_LinearColorLerp_ReturnValue) == 0x000068, "Member 'RiderWidget_C_SetProgressBar::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_Lerp_ReturnValue) == 0x000078, "Member 'RiderWidget_C_SetProgressBar::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000080, "Member 'RiderWidget_C_SetProgressBar::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_LinearColorLerp_Alpha_ImplicitCast) == 0x000084, "Member 'RiderWidget_C_SetProgressBar::CallFunc_LinearColorLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetProgressBar, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000088, "Member 'RiderWidget_C_SetProgressBar::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

struct RiderWidget_C_SetHealthValue final
{
public:
	double                                        Value;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_Round_ReturnValue;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(RiderWidget_C_SetHealthValue) == 0x000008, "Wrong alignment on RiderWidget_C_SetHealthValue");
static_assert(sizeof(RiderWidget_C_SetHealthValue) == 0x000048, "Wrong size on RiderWidget_C_SetHealthValue");
static_assert(offsetof(RiderWidget_C_SetHealthValue, Value) == 0x000000, "Member 'RiderWidget_C_SetHealthValue::Value' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetHealthValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'RiderWidget_C_SetHealthValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetHealthValue, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000020, "Member 'RiderWidget_C_SetHealthValue::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetHealthValue, CallFunc_Round_ReturnValue) == 0x000024, "Member 'RiderWidget_C_SetHealthValue::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetHealthValue, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'RiderWidget_C_SetHealthValue::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetHealthValue, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'RiderWidget_C_SetHealthValue::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_SetHealthValue, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'RiderWidget_C_SetHealthValue::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct RiderWidget_C_SetBoostAnim final
{
public:
	bool                                          IsBoosting;
};
static_assert(alignof(RiderWidget_C_SetBoostAnim) == 0x000001, "Wrong alignment on RiderWidget_C_SetBoostAnim");
static_assert(sizeof(RiderWidget_C_SetBoostAnim) == 0x000001, "Wrong size on RiderWidget_C_SetBoostAnim");
static_assert(offsetof(RiderWidget_C_SetBoostAnim, IsBoosting) == 0x000000, "Member 'RiderWidget_C_SetBoostAnim::IsBoosting' has a wrong offset!");

struct RiderWidget_C_Set_Delta final
{
public:
	class UImage*                                 Target;
	double                                        CurrentValue_0;
	double                                        PreviousValue;
	double                                        Threshold;
	class FString                                 FunctionName;
	struct FTimerHandle                           TimerHandle;
	double                                        DeltaDecayDelay;
	struct FTimerHandle                           TimerHandleRef;
	float                                         CallFunc_GetServerWorldTimeSeconds_ReturnValue;
	uint8                                         Pad_4C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	uint8                                         Pad_59[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_71[0x3];
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;
	double                                        K2Node_VariableSet_CooldownStartTime_ImplicitCast;
};
static_assert(alignof(RiderWidget_C_Set_Delta) == 0x000008, "Wrong alignment on RiderWidget_C_Set_Delta");
static_assert(sizeof(RiderWidget_C_Set_Delta) == 0x000080, "Wrong size on RiderWidget_C_Set_Delta");
static_assert(offsetof(RiderWidget_C_Set_Delta, Target) == 0x000000, "Member 'RiderWidget_C_Set_Delta::Target' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CurrentValue_0) == 0x000008, "Member 'RiderWidget_C_Set_Delta::CurrentValue_0' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, PreviousValue) == 0x000010, "Member 'RiderWidget_C_Set_Delta::PreviousValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, Threshold) == 0x000018, "Member 'RiderWidget_C_Set_Delta::Threshold' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, FunctionName) == 0x000020, "Member 'RiderWidget_C_Set_Delta::FunctionName' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, TimerHandle) == 0x000030, "Member 'RiderWidget_C_Set_Delta::TimerHandle' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, DeltaDecayDelay) == 0x000038, "Member 'RiderWidget_C_Set_Delta::DeltaDecayDelay' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, TimerHandleRef) == 0x000040, "Member 'RiderWidget_C_Set_Delta::TimerHandleRef' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_GetServerWorldTimeSeconds_ReturnValue) == 0x000048, "Member 'RiderWidget_C_Set_Delta::CallFunc_GetServerWorldTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_K2_SetTimer_ReturnValue) == 0x000050, "Member 'RiderWidget_C_Set_Delta::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x000058, "Member 'RiderWidget_C_Set_Delta::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000060, "Member 'RiderWidget_C_Set_Delta::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000068, "Member 'RiderWidget_C_Set_Delta::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000070, "Member 'RiderWidget_C_Set_Delta::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000074, "Member 'RiderWidget_C_Set_Delta::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_Set_Delta, K2Node_VariableSet_CooldownStartTime_ImplicitCast) == 0x000078, "Member 'RiderWidget_C_Set_Delta::K2Node_VariableSet_CooldownStartTime_ImplicitCast' has a wrong offset!");

struct RiderWidget_C_RiderUIHealthChanged final
{
public:
	double                                        Health;
};
static_assert(alignof(RiderWidget_C_RiderUIHealthChanged) == 0x000008, "Wrong alignment on RiderWidget_C_RiderUIHealthChanged");
static_assert(sizeof(RiderWidget_C_RiderUIHealthChanged) == 0x000008, "Wrong size on RiderWidget_C_RiderUIHealthChanged");
static_assert(offsetof(RiderWidget_C_RiderUIHealthChanged, Health) == 0x000000, "Member 'RiderWidget_C_RiderUIHealthChanged::Health' has a wrong offset!");

struct RiderWidget_C_RiderUIEnergyChanged final
{
public:
	double                                        Energy;
};
static_assert(alignof(RiderWidget_C_RiderUIEnergyChanged) == 0x000008, "Wrong alignment on RiderWidget_C_RiderUIEnergyChanged");
static_assert(sizeof(RiderWidget_C_RiderUIEnergyChanged) == 0x000008, "Wrong size on RiderWidget_C_RiderUIEnergyChanged");
static_assert(offsetof(RiderWidget_C_RiderUIEnergyChanged, Energy) == 0x000000, "Member 'RiderWidget_C_RiderUIEnergyChanged::Energy' has a wrong offset!");

struct RiderWidget_C_OnRiderUINewStats final
{
public:
	class FText                                   Name_0;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            Icon;
	class AActor*                                 RidableActor;
};
static_assert(alignof(RiderWidget_C_OnRiderUINewStats) == 0x000010, "Wrong alignment on RiderWidget_C_OnRiderUINewStats");
static_assert(sizeof(RiderWidget_C_OnRiderUINewStats) == 0x0000F0, "Wrong size on RiderWidget_C_OnRiderUINewStats");
static_assert(offsetof(RiderWidget_C_OnRiderUINewStats, Name_0) == 0x000000, "Member 'RiderWidget_C_OnRiderUINewStats::Name_0' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_OnRiderUINewStats, Icon) == 0x000020, "Member 'RiderWidget_C_OnRiderUINewStats::Icon' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_OnRiderUINewStats, RidableActor) == 0x0000E0, "Member 'RiderWidget_C_OnRiderUINewStats::RidableActor' has a wrong offset!");

struct RiderWidget_C_OnRiderUIEnd final
{
public:
	class AActor*                                 RidableActor;
};
static_assert(alignof(RiderWidget_C_OnRiderUIEnd) == 0x000008, "Wrong alignment on RiderWidget_C_OnRiderUIEnd");
static_assert(sizeof(RiderWidget_C_OnRiderUIEnd) == 0x000008, "Wrong size on RiderWidget_C_OnRiderUIEnd");
static_assert(offsetof(RiderWidget_C_OnRiderUIEnd, RidableActor) == 0x000000, "Member 'RiderWidget_C_OnRiderUIEnd::RidableActor' has a wrong offset!");

struct RiderWidget_C_OnOvershieldVisibilityChanged final
{
public:
	bool                                          IsVisible_0;
	uint8                                         Pad_1[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
};
static_assert(alignof(RiderWidget_C_OnOvershieldVisibilityChanged) == 0x000008, "Wrong alignment on RiderWidget_C_OnOvershieldVisibilityChanged");
static_assert(sizeof(RiderWidget_C_OnOvershieldVisibilityChanged) == 0x000020, "Wrong size on RiderWidget_C_OnOvershieldVisibilityChanged");
static_assert(offsetof(RiderWidget_C_OnOvershieldVisibilityChanged, IsVisible_0) == 0x000000, "Member 'RiderWidget_C_OnOvershieldVisibilityChanged::IsVisible_0' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_OnOvershieldVisibilityChanged, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'RiderWidget_C_OnOvershieldVisibilityChanged::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_OnOvershieldVisibilityChanged, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'RiderWidget_C_OnOvershieldVisibilityChanged::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

struct RiderWidget_C_ListenToSprintEvents final
{
public:
	bool                                          ListenForSprinting;
};
static_assert(alignof(RiderWidget_C_ListenToSprintEvents) == 0x000001, "Wrong alignment on RiderWidget_C_ListenToSprintEvents");
static_assert(sizeof(RiderWidget_C_ListenToSprintEvents) == 0x000001, "Wrong size on RiderWidget_C_ListenToSprintEvents");
static_assert(offsetof(RiderWidget_C_ListenToSprintEvents, ListenForSprinting) == 0x000000, "Member 'RiderWidget_C_ListenToSprintEvents::ListenForSprinting' has a wrong offset!");

struct RiderWidget_C_ExecuteUbergraph_RiderWidget final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsActive_ReturnValue;
	bool                                          CallFunc_IsActive_ReturnValue_1;
	struct FMargin                                K2Node_MakeStruct_Margin;
	uint8                                         Pad_24[0x4];
	class FText                                   K2Node_CustomEvent_Name;
	struct FSlateBrush                            K2Node_CustomEvent_Icon;
	class AActor*                                 K2Node_CustomEvent_RidableActor_1;
	class AActor*                                 K2Node_CustomEvent_RidableActor;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_119[0x7];
	class UCreatureBaseRidableComponent_C*        CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_129[0x3];
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	float                                         CallFunc_GetHealth_ReturnValue;
	uint8                                         Pad_134[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_141[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        K2Node_CustomEvent_Energy;
	double                                        K2Node_CustomEvent_health;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_161[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_179[0x7];
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_191[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	uint8                                         Pad_1A4[0x4];
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1B9[0x7];
	class UAbilityAsync_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	class UAbilityAsync_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_1D2[0x2];
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_CustomEvent_IsBoosting;
	uint8                                         Pad_1E1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          K2Node_CustomEvent_ListenForSprinting;
	uint8                                         Pad_20A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_224[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class ULocalPlayer*                           CallFunc_GetOwningLocalPlayer_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(RiderWidget_C_ExecuteUbergraph_RiderWidget) == 0x000010, "Wrong alignment on RiderWidget_C_ExecuteUbergraph_RiderWidget");
static_assert(sizeof(RiderWidget_C_ExecuteUbergraph_RiderWidget) == 0x000260, "Wrong size on RiderWidget_C_ExecuteUbergraph_RiderWidget");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, EntryPoint) == 0x000000, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsActive_ReturnValue) == 0x000012, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsActive_ReturnValue_1) == 0x000013, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsActive_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_MakeStruct_Margin) == 0x000014, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_Name) == 0x000028, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_Icon) == 0x000040, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_Icon' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_RidableActor_1) == 0x000100, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_RidableActor_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_RidableActor) == 0x000108, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_RidableActor' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_DynamicCast_AsFort_Pawn) == 0x000110, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetComponentByClass_ReturnValue) == 0x000120, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsValid_ReturnValue_2) == 0x000128, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetMaxHealth_ReturnValue) == 0x00012C, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetHealth_ReturnValue) == 0x000130, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000138, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000140, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_SelectFloat_ReturnValue) == 0x000148, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_Energy) == 0x000150, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_Energy' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_health) == 0x000158, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_health' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsUsingTouch_ReturnValue) == 0x000160, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000164, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000170, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000178, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000180, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000188, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_DynamicCast_bSuccess_1) == 0x000190, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_MakeStruct_Margin_1) == 0x000194, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetOwningPlayerPawn_ReturnValue_1) == 0x0001A8, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetOwningPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_DynamicCast_AsFort_Pawn_2) == 0x0001B0, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_DynamicCast_AsFort_Pawn_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_DynamicCast_bSuccess_2) == 0x0001B8, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_WaitGameplayTagAddToActor_ReturnValue) == 0x0001C0, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_WaitGameplayTagAddToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue) == 0x0001C8, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsValid_ReturnValue_3) == 0x0001D0, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsValid_ReturnValue_4) == 0x0001D1, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetEndTime_ReturnValue) == 0x0001D4, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_PlayAnimation_ReturnValue) == 0x0001D8, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_IsBoosting) == 0x0001E0, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_IsBoosting' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001E8, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetContext_ReturnValue) == 0x0001F0, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x0001F8, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000200, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_IsValid_ReturnValue_5) == 0x000208, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CustomEvent_ListenForSprinting) == 0x000209, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CustomEvent_ListenForSprinting' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x00020C, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x000218, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000228, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetOwningLocalPlayer_ReturnValue) == 0x000230, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetOwningLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000238, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_SelectFloat_B_ImplicitCast) == 0x000240, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000248, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000250, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ExecuteUbergraph_RiderWidget, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000258, "Member 'RiderWidget_C_ExecuteUbergraph_RiderWidget::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct RiderWidget_C_EmptyEnergyDelta final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(RiderWidget_C_EmptyEnergyDelta) == 0x000008, "Wrong alignment on RiderWidget_C_EmptyEnergyDelta");
static_assert(sizeof(RiderWidget_C_EmptyEnergyDelta) == 0x000008, "Wrong size on RiderWidget_C_EmptyEnergyDelta");
static_assert(offsetof(RiderWidget_C_EmptyEnergyDelta, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'RiderWidget_C_EmptyEnergyDelta::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct RiderWidget_C_ClearOldBindings final
{
public:
	TDelegate<void(double Health)>                K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D[0x3];
	TDelegate<void(double Energy)>                K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(class FText Name, const struct FSlateBrush& Icon, class AActor* RidableActor)> K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void(class AActor* RidableActor)>   K2Node_CreateDelegate_OutputDelegate_3;
};
static_assert(alignof(RiderWidget_C_ClearOldBindings) == 0x000004, "Wrong alignment on RiderWidget_C_ClearOldBindings");
static_assert(sizeof(RiderWidget_C_ClearOldBindings) == 0x000034, "Wrong size on RiderWidget_C_ClearOldBindings");
static_assert(offsetof(RiderWidget_C_ClearOldBindings, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'RiderWidget_C_ClearOldBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ClearOldBindings, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'RiderWidget_C_ClearOldBindings::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ClearOldBindings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'RiderWidget_C_ClearOldBindings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ClearOldBindings, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'RiderWidget_C_ClearOldBindings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RiderWidget_C_ClearOldBindings, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'RiderWidget_C_ClearOldBindings::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

}
