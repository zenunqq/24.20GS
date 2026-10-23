#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct VaultRotator_C_ToggleBackgroundText final
{
public:
	bool                                          bDisplayText;
};
static_assert(alignof(VaultRotator_C_ToggleBackgroundText) == 0x000001, "Wrong alignment on VaultRotator_C_ToggleBackgroundText");
static_assert(sizeof(VaultRotator_C_ToggleBackgroundText) == 0x000001, "Wrong size on VaultRotator_C_ToggleBackgroundText");
static_assert(offsetof(VaultRotator_C_ToggleBackgroundText, bDisplayText) == 0x000000, "Member 'VaultRotator_C_ToggleBackgroundText::bDisplayText' has a wrong offset!");

struct VaultRotator_C_SwitchPCLighting_LOWDetail final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(VaultRotator_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong alignment on VaultRotator_C_SwitchPCLighting_LOWDetail");
static_assert(sizeof(VaultRotator_C_SwitchPCLighting_LOWDetail) == 0x000001, "Wrong size on VaultRotator_C_SwitchPCLighting_LOWDetail");
static_assert(offsetof(VaultRotator_C_SwitchPCLighting_LOWDetail, Visibility) == 0x000000, "Member 'VaultRotator_C_SwitchPCLighting_LOWDetail::Visibility' has a wrong offset!");

struct VaultRotator_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(VaultRotator_C_SwitchPCLighting) == 0x000001, "Wrong alignment on VaultRotator_C_SwitchPCLighting");
static_assert(sizeof(VaultRotator_C_SwitchPCLighting) == 0x000001, "Wrong size on VaultRotator_C_SwitchPCLighting");
static_assert(offsetof(VaultRotator_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'VaultRotator_C_SwitchPCLighting::Visibility' has a wrong offset!");

struct VaultRotator_C_SwitchMobileLighting final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(VaultRotator_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on VaultRotator_C_SwitchMobileLighting");
static_assert(sizeof(VaultRotator_C_SwitchMobileLighting) == 0x000001, "Wrong size on VaultRotator_C_SwitchMobileLighting");
static_assert(offsetof(VaultRotator_C_SwitchMobileLighting, Visibility) == 0x000000, "Member 'VaultRotator_C_SwitchMobileLighting::Visibility' has a wrong offset!");

struct VaultRotator_C_SetBackgroundString final
{
public:
	class FText                                   CustomText;
	class UUI_Background_Strings_C*               CallFunc_Create_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
};
static_assert(alignof(VaultRotator_C_SetBackgroundString) == 0x000008, "Wrong alignment on VaultRotator_C_SetBackgroundString");
static_assert(sizeof(VaultRotator_C_SetBackgroundString) == 0x000028, "Wrong size on VaultRotator_C_SetBackgroundString");
static_assert(offsetof(VaultRotator_C_SetBackgroundString, CustomText) == 0x000000, "Member 'VaultRotator_C_SetBackgroundString::CustomText' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_SetBackgroundString, CallFunc_Create_ReturnValue) == 0x000018, "Member 'VaultRotator_C_SetBackgroundString::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_SetBackgroundString, CallFunc_TextIsEmpty_ReturnValue) == 0x000020, "Member 'VaultRotator_C_SetBackgroundString::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

struct VaultRotator_C_OnTargetZoomLevelSet final
{
public:
	float                                         TargetZoomLevel_0;
};
static_assert(alignof(VaultRotator_C_OnTargetZoomLevelSet) == 0x000004, "Wrong alignment on VaultRotator_C_OnTargetZoomLevelSet");
static_assert(sizeof(VaultRotator_C_OnTargetZoomLevelSet) == 0x000004, "Wrong size on VaultRotator_C_OnTargetZoomLevelSet");
static_assert(offsetof(VaultRotator_C_OnTargetZoomLevelSet, TargetZoomLevel_0) == 0x000000, "Member 'VaultRotator_C_OnTargetZoomLevelSet::TargetZoomLevel_0' has a wrong offset!");

struct VaultRotator_C_SetBackgroundColor final
{
public:
	struct FLinearColor                           RGBA0;
	struct FLinearColor                           RGBA1;
};
static_assert(alignof(VaultRotator_C_SetBackgroundColor) == 0x000004, "Wrong alignment on VaultRotator_C_SetBackgroundColor");
static_assert(sizeof(VaultRotator_C_SetBackgroundColor) == 0x000020, "Wrong size on VaultRotator_C_SetBackgroundColor");
static_assert(offsetof(VaultRotator_C_SetBackgroundColor, RGBA0) == 0x000000, "Member 'VaultRotator_C_SetBackgroundColor::RGBA0' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_SetBackgroundColor, RGBA1) == 0x000010, "Member 'VaultRotator_C_SetBackgroundColor::RGBA1' has a wrong offset!");

struct VaultRotator_C_OnTargetRotationOffsetSet final
{
public:
	struct FRotator                               TargetRotationOffset_0;
};
static_assert(alignof(VaultRotator_C_OnTargetRotationOffsetSet) == 0x000008, "Wrong alignment on VaultRotator_C_OnTargetRotationOffsetSet");
static_assert(sizeof(VaultRotator_C_OnTargetRotationOffsetSet) == 0x000018, "Wrong size on VaultRotator_C_OnTargetRotationOffsetSet");
static_assert(offsetof(VaultRotator_C_OnTargetRotationOffsetSet, TargetRotationOffset_0) == 0x000000, "Member 'VaultRotator_C_OnTargetRotationOffsetSet::TargetRotationOffset_0' has a wrong offset!");

struct VaultRotator_C_PlaySoundWhenEnabled final
{
public:
	class USoundBase*                             sound;
	bool                                          CallFunc_IsSoundEnabled_ReturnValue;
};
static_assert(alignof(VaultRotator_C_PlaySoundWhenEnabled) == 0x000008, "Wrong alignment on VaultRotator_C_PlaySoundWhenEnabled");
static_assert(sizeof(VaultRotator_C_PlaySoundWhenEnabled) == 0x000010, "Wrong size on VaultRotator_C_PlaySoundWhenEnabled");
static_assert(offsetof(VaultRotator_C_PlaySoundWhenEnabled, sound) == 0x000000, "Member 'VaultRotator_C_PlaySoundWhenEnabled::sound' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_PlaySoundWhenEnabled, CallFunc_IsSoundEnabled_ReturnValue) == 0x000008, "Member 'VaultRotator_C_PlaySoundWhenEnabled::CallFunc_IsSoundEnabled_ReturnValue' has a wrong offset!");

struct VaultRotator_C_OnUpdateBackgroundColor final
{
public:
	bool                                          bEnableAutotestBackground;
};
static_assert(alignof(VaultRotator_C_OnUpdateBackgroundColor) == 0x000001, "Wrong alignment on VaultRotator_C_OnUpdateBackgroundColor");
static_assert(sizeof(VaultRotator_C_OnUpdateBackgroundColor) == 0x000001, "Wrong size on VaultRotator_C_OnUpdateBackgroundColor");
static_assert(offsetof(VaultRotator_C_OnUpdateBackgroundColor, bEnableAutotestBackground) == 0x000000, "Member 'VaultRotator_C_OnUpdateBackgroundColor::bEnableAutotestBackground' has a wrong offset!");

struct VaultRotator_C_LightControl final
{
public:
	bool                                          Active;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_IsErebus_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
};
static_assert(alignof(VaultRotator_C_LightControl) == 0x000008, "Wrong alignment on VaultRotator_C_LightControl");
static_assert(sizeof(VaultRotator_C_LightControl) == 0x000018, "Wrong size on VaultRotator_C_LightControl");
static_assert(offsetof(VaultRotator_C_LightControl, Active) == 0x000000, "Member 'VaultRotator_C_LightControl::Active' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_IsMobileGame_ReturnValue) == 0x000001, "Member 'VaultRotator_C_LightControl::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_IsErebus_ReturnValue) == 0x000002, "Member 'VaultRotator_C_LightControl::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_IsErebus_ReturnValue_1) == 0x000003, "Member 'VaultRotator_C_LightControl::CallFunc_IsErebus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'VaultRotator_C_LightControl::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'VaultRotator_C_LightControl::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'VaultRotator_C_LightControl::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'VaultRotator_C_LightControl::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_BooleanOR_ReturnValue_1) == 0x000015, "Member 'VaultRotator_C_LightControl::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_LightControl, CallFunc_BooleanOR_ReturnValue_2) == 0x000016, "Member 'VaultRotator_C_LightControl::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

struct VaultRotator_C_ExecuteUbergraph_VaultRotator final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	ETimelineDirection                            Temp_byte_Variable;
	ETimelineDirection                            Temp_byte_Variable_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_23[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	uint8                                         Pad_31[0x3];
	float                                         CallFunc_GetTimelineLength_ReturnValue;
	float                                         CallFunc_GetTimelineLength_ReturnValue_1;
	float                                         CallFunc_GetPlaybackPosition_ReturnValue;
	float                                         CallFunc_GetPlaybackPosition_ReturnValue_1;
	uint8                                         Pad_44[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        K2Node_Select_Default;
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_6D[0x3];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	double                                        K2Node_Select_Default_1;
	uint8                                         Pad_108[0x8];
	struct FInterpolatedTransitionCamera          CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_3;
	uint8                                         Pad_2A8[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;
	struct FInterpolatedTransitionCamera          CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	bool                                          K2Node_Event_bPrimaryToSecondary;
	uint8                                         Pad_621[0x7];
	const class UFortAccountItemDefinition*       K2Node_Event_PrimaryRequestedItem;
	struct FSceneTransitionOptions                K2Node_Event_Options;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_635[0x3];
	float                                         K2Node_Event_TargetZoomLevel;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	class FText                                   K2Node_Event_BackgroundMessageText;
	bool                                          K2Node_Event_bEnableAutotestBackground;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	uint8                                         Pad_65C[0x4];
	struct FRotator                               K2Node_Event_TargetRotationOffset;
	struct FRotator                               CallFunc_REase_ReturnValue;
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        K2Node_Select_Forward_ImplicitCast;
	double                                        K2Node_Select_Forward_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	float                                         CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast;
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
	float                                         CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1;
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast_1;
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast_1;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;
	double                                        K2Node_VariableSet_TargetZoomLevel_ImplicitCast;
	float                                         K2Node_VariableSet_ZoomLevel_ImplicitCast;
	float                                         K2Node_VariableSet_ZoomLevel_ImplicitCast_1;
	double                                        CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(VaultRotator_C_ExecuteUbergraph_VaultRotator) == 0x000010, "Wrong alignment on VaultRotator_C_ExecuteUbergraph_VaultRotator");
static_assert(sizeof(VaultRotator_C_ExecuteUbergraph_VaultRotator) == 0x000710, "Wrong size on VaultRotator_C_ExecuteUbergraph_VaultRotator");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, EntryPoint) == 0x000000, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue) == 0x000008, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, Temp_byte_Variable) == 0x000020, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, Temp_byte_Variable_1) == 0x000021, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_SwitchEnum_CmpSuccess) == 0x000022, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_EqualEqual_RotatorRotator_ReturnValue) == 0x000030, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_EqualEqual_RotatorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetTimelineLength_ReturnValue) == 0x000034, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetTimelineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetTimelineLength_ReturnValue_1) == 0x000038, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetTimelineLength_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetPlaybackPosition_ReturnValue) == 0x00003C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetPlaybackPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetPlaybackPosition_ReturnValue_1) == 0x000040, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetPlaybackPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000048, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000050, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Select_Default) == 0x000058, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetGameUserSettings_ReturnValue) == 0x000060, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetShadowQuality_ReturnValue) == 0x000068, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00006C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_X) == 0x000070, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Y) == 0x000078, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Z) == 0x000080, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue_1) == 0x000088, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Select_Default_1) == 0x000100, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue) == 0x000110, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000180, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue_2) == 0x000260, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_X_1) == 0x000278, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Y_1) == 0x000280, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BreakVector_Z_1) == 0x000288, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_ReturnValue_3) == 0x000290, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeTransform_ReturnValue_1) == 0x0002B0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1) == 0x000310, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x000380, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000460, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000540, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_bPrimaryToSecondary) == 0x000620, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_bPrimaryToSecondary' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_PrimaryRequestedItem) == 0x000628, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_Options) == 0x000630, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_Options' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_IsMobileGame_ReturnValue) == 0x000632, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BooleanOR_ReturnValue) == 0x000633, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_SwitchEnum_CmpSuccess_1) == 0x000634, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_TargetZoomLevel) == 0x000638, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_TargetZoomLevel' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00063C, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00063D, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00063E, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00063F, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_BackgroundMessageText) == 0x000640, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_BackgroundMessageText' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_bEnableAutotestBackground) == 0x000658, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_bEnableAutotestBackground' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_IsErebus_ReturnValue) == 0x000659, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BooleanOR_ReturnValue_1) == 0x00065A, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_BooleanOR_ReturnValue_2) == 0x00065B, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Event_TargetRotationOffset) == 0x000660, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Event_TargetRotationOffset' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_REase_ReturnValue) == 0x000678, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_REase_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000690, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000698, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0006A0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0006A8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0006B0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Select_Forward_ImplicitCast) == 0x0006B8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Select_Forward_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_Select_Forward_ImplicitCast_1) == 0x0006C0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_Select_Forward_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0006C8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast) == 0x0006D0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x0006D4, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x0006D8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0006DC, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1) == 0x0006E0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_GetInterpolatedTransitionCameraPosition_ProgressThroughTransitionSecs_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_Roll_ImplicitCast_1) == 0x0006E4, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_Roll_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_Pitch_ImplicitCast_1) == 0x0006E8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_Pitch_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x0006EC, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_VariableSet_TargetZoomLevel_ImplicitCast) == 0x0006F0, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_VariableSet_TargetZoomLevel_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_VariableSet_ZoomLevel_ImplicitCast) == 0x0006F8, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_VariableSet_ZoomLevel_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, K2Node_VariableSet_ZoomLevel_ImplicitCast_1) == 0x0006FC, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::K2Node_VariableSet_ZoomLevel_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Greater_DoubleDouble_B_ImplicitCast) == 0x000700, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Greater_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_ExecuteUbergraph_VaultRotator, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000708, "Member 'VaultRotator_C_ExecuteUbergraph_VaultRotator::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct VaultRotator_C_OnSetBackgroundMessageText final
{
public:
	class FText                                   BackgroundMessageText;
};
static_assert(alignof(VaultRotator_C_OnSetBackgroundMessageText) == 0x000008, "Wrong alignment on VaultRotator_C_OnSetBackgroundMessageText");
static_assert(sizeof(VaultRotator_C_OnSetBackgroundMessageText) == 0x000018, "Wrong size on VaultRotator_C_OnSetBackgroundMessageText");
static_assert(offsetof(VaultRotator_C_OnSetBackgroundMessageText, BackgroundMessageText) == 0x000000, "Member 'VaultRotator_C_OnSetBackgroundMessageText::BackgroundMessageText' has a wrong offset!");

struct VaultRotator_C_OnCameraTransitionReady final
{
public:
	bool                                          bPrimaryToSecondary;
	uint8                                         Pad_1[0x7];
	const class UFortAccountItemDefinition*       PrimaryRequestedItem;
	struct FSceneTransitionOptions                Options;
};
static_assert(alignof(VaultRotator_C_OnCameraTransitionReady) == 0x000008, "Wrong alignment on VaultRotator_C_OnCameraTransitionReady");
static_assert(sizeof(VaultRotator_C_OnCameraTransitionReady) == 0x000018, "Wrong size on VaultRotator_C_OnCameraTransitionReady");
static_assert(offsetof(VaultRotator_C_OnCameraTransitionReady, bPrimaryToSecondary) == 0x000000, "Member 'VaultRotator_C_OnCameraTransitionReady::bPrimaryToSecondary' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_OnCameraTransitionReady, PrimaryRequestedItem) == 0x000008, "Member 'VaultRotator_C_OnCameraTransitionReady::PrimaryRequestedItem' has a wrong offset!");
static_assert(offsetof(VaultRotator_C_OnCameraTransitionReady, Options) == 0x000010, "Member 'VaultRotator_C_OnCameraTransitionReady::Options' has a wrong offset!");

}
