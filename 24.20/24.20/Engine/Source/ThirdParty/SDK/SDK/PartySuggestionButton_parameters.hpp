#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct PartySuggestionButton_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(PartySuggestionButton_C_Tick) == 0x000008, "Wrong alignment on PartySuggestionButton_C_Tick");
static_assert(sizeof(PartySuggestionButton_C_Tick) == 0x000048, "Wrong size on PartySuggestionButton_C_Tick");
static_assert(offsetof(PartySuggestionButton_C_Tick, MyGeometry) == 0x000000, "Member 'PartySuggestionButton_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_Tick, InDeltaTime) == 0x000040, "Member 'PartySuggestionButton_C_Tick::InDeltaTime' has a wrong offset!");

struct PartySuggestionButton_C_SetupMIDReferences final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_12[0x6];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
};
static_assert(alignof(PartySuggestionButton_C_SetupMIDReferences) == 0x000008, "Wrong alignment on PartySuggestionButton_C_SetupMIDReferences");
static_assert(sizeof(PartySuggestionButton_C_SetupMIDReferences) == 0x000040, "Wrong size on PartySuggestionButton_C_SetupMIDReferences");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_IsValid_ReturnValue_2) == 0x000011, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000018, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000020, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x000028, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_CreateDynamicMaterialInstance_ReturnValue_4) == 0x000030, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_CreateDynamicMaterialInstance_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_IsValid_ReturnValue_3) == 0x000038, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetupMIDReferences, CallFunc_IsValid_ReturnValue_4) == 0x000039, "Member 'PartySuggestionButton_C_SetupMIDReferences::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

struct PartySuggestionButton_C_SetMainMIDs final
{
public:
	class UMaterialInstanceDynamic*               BorderMID;
	class UMaterialInstanceDynamic*               TailMID;
	class UMaterialInstanceDynamic*               SparklesMID;
	struct FLinearColor                           LC_Cur_Border_L;
	struct FLinearColor                           LC_CurBorder_R;
	double                                        CurMIDScalar_ShapeChange;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_42[0x2];
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_65[0x3];
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	double                                        K2Node_VariableSet_CurMIDScalar_ShapeChange_ImplicitCast;
};
static_assert(alignof(PartySuggestionButton_C_SetMainMIDs) == 0x000008, "Wrong alignment on PartySuggestionButton_C_SetMainMIDs");
static_assert(sizeof(PartySuggestionButton_C_SetMainMIDs) == 0x000078, "Wrong size on PartySuggestionButton_C_SetMainMIDs");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, BorderMID) == 0x000000, "Member 'PartySuggestionButton_C_SetMainMIDs::BorderMID' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, TailMID) == 0x000008, "Member 'PartySuggestionButton_C_SetMainMIDs::TailMID' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, SparklesMID) == 0x000010, "Member 'PartySuggestionButton_C_SetMainMIDs::SparklesMID' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, LC_Cur_Border_L) == 0x000018, "Member 'PartySuggestionButton_C_SetMainMIDs::LC_Cur_Border_L' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, LC_CurBorder_R) == 0x000028, "Member 'PartySuggestionButton_C_SetMainMIDs::LC_CurBorder_R' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CurMIDScalar_ShapeChange) == 0x000038, "Member 'PartySuggestionButton_C_SetMainMIDs::CurMIDScalar_ShapeChange' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000044, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_K2_GetVectorParameterValue_ReturnValue_1) == 0x000054, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_K2_GetVectorParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_IsValid_ReturnValue_2) == 0x000064, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x000068, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00006C, "Member 'PartySuggestionButton_C_SetMainMIDs::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_SetMainMIDs, K2Node_VariableSet_CurMIDScalar_ShapeChange_ImplicitCast) == 0x000070, "Member 'PartySuggestionButton_C_SetMainMIDs::K2Node_VariableSet_CurMIDScalar_ShapeChange_ImplicitCast' has a wrong offset!");

struct PartySuggestionButton_C_OnDisplayInfoUpdated final
{
public:
	bool                                          bIsInvited;
	bool                                          bIsPlaying;
};
static_assert(alignof(PartySuggestionButton_C_OnDisplayInfoUpdated) == 0x000001, "Wrong alignment on PartySuggestionButton_C_OnDisplayInfoUpdated");
static_assert(sizeof(PartySuggestionButton_C_OnDisplayInfoUpdated) == 0x000002, "Wrong size on PartySuggestionButton_C_OnDisplayInfoUpdated");
static_assert(offsetof(PartySuggestionButton_C_OnDisplayInfoUpdated, bIsInvited) == 0x000000, "Member 'PartySuggestionButton_C_OnDisplayInfoUpdated::bIsInvited' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_OnDisplayInfoUpdated, bIsPlaying) == 0x000001, "Member 'PartySuggestionButton_C_OnDisplayInfoUpdated::bIsPlaying' has a wrong offset!");

struct PartySuggestionButton_C_InitPhysAnim final
{
public:
	struct FFloatSpringState                      K2Node_MakeStruct_FloatSpringState;
	struct FFloatSpringState                      K2Node_MakeStruct_FloatSpringState_1;
};
static_assert(alignof(PartySuggestionButton_C_InitPhysAnim) == 0x000004, "Wrong alignment on PartySuggestionButton_C_InitPhysAnim");
static_assert(sizeof(PartySuggestionButton_C_InitPhysAnim) == 0x000018, "Wrong size on PartySuggestionButton_C_InitPhysAnim");
static_assert(offsetof(PartySuggestionButton_C_InitPhysAnim, K2Node_MakeStruct_FloatSpringState) == 0x000000, "Member 'PartySuggestionButton_C_InitPhysAnim::K2Node_MakeStruct_FloatSpringState' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_InitPhysAnim, K2Node_MakeStruct_FloatSpringState_1) == 0x00000C, "Member 'PartySuggestionButton_C_InitPhysAnim::K2Node_MakeStruct_FloatSpringState_1' has a wrong offset!");

struct PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_7[0x1];
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_11[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	uint8                                         Pad_34[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_42[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;
	uint8                                         Pad_5C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;
	uint8                                         Pad_69[0x7];
	double                                        K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_C5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_FloatSpringInterp_ReturnValue;
	class UMaterialInstanceDynamic*               K2Node_Select_Default_1;
	struct FLinearColor                           K2Node_Select_Default_2;
	bool                                          K2Node_Event_bIsInvited;
	bool                                          K2Node_Event_bIsPlaying;
	uint8                                         Pad_FA[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_112[0x6];
	class UMaterialInstanceDynamic*               K2Node_Select_Default_3;
	double                                        K2Node_Select_Option_1_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	uint8                                         Pad_12C[0x4];
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_FloatSpringInterp_Stiffness_ImplicitCast;
	float                                         CallFunc_FloatSpringInterp_Target_ImplicitCast;
	float                                         CallFunc_FloatSpringInterp_CriticalDampingFactor_ImplicitCast;
	float                                         CallFunc_FloatSpringInterp_Mass_ImplicitCast;
	float                                         CallFunc_FloatSpringInterp_Current_ImplicitCast;
	float                                         CallFunc_FloatSpringInterp_DeltaTime_ImplicitCast;
	double                                        K2Node_VariableSet_Spring_ShapeChange_NewVal_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton) == 0x000008, "Wrong alignment on PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton");
static_assert(sizeof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton) == 0x000160, "Wrong size on PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, EntryPoint) == 0x000000, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_bool_Variable) == 0x000004, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000005, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_bool_Variable_1) == 0x000006, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_real_Variable) == 0x000008, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_bool_Variable_2) == 0x000010, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_struct_Variable) == 0x000014, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_struct_Variable_1) == 0x000024, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000038, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_GetSubGame_ReturnValue) == 0x000040, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000058, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000068, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Select_Default) == 0x000070, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000078, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Event_MyGeometry) == 0x000080, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Event_InDeltaTime) == 0x0000C0, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000C4, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_ReturnValue_4) == 0x0000C8, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0000D0, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_ReturnValue) == 0x0000DC, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Select_Default_1) == 0x0000E0, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Select_Default_2) == 0x0000E8, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Event_bIsInvited) == 0x0000F8, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Event_bIsInvited' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Event_bIsPlaying) == 0x0000F9, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Event_bIsPlaying' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_CreateDelegate_OutputDelegate) == 0x0000FC, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_ReturnValue_5) == 0x000108, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_IsAnimationPlaying_ReturnValue_2) == 0x000110, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_IsAnimationPlaying_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, Temp_bool_Variable_3) == 0x000111, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Select_Default_3) == 0x000118, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_Select_Option_1_ImplicitCast) == 0x000120, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000128, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000130, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_Stiffness_ImplicitCast) == 0x000138, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_Stiffness_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_Target_ImplicitCast) == 0x00013C, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_Target_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_CriticalDampingFactor_ImplicitCast) == 0x000140, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_CriticalDampingFactor_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_Mass_ImplicitCast) == 0x000144, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_Mass_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_Current_ImplicitCast) == 0x000148, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_Current_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_FloatSpringInterp_DeltaTime_ImplicitCast) == 0x00014C, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_FloatSpringInterp_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, K2Node_VariableSet_Spring_ShapeChange_NewVal_ImplicitCast) == 0x000150, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::K2Node_VariableSet_Spring_ShapeChange_NewVal_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000158, "Member 'PartySuggestionButton_C_ExecuteUbergraph_PartySuggestionButton::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}
