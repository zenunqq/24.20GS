#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PhysicalRimlight_C_Day_Phase_ final
{
public:
	EFortDayPhase                                 CurrentDayPhase;
	EFortDayPhase                                 PreviousDayPhase;
	bool                                          bAtCreation;
};
static_assert(alignof(PhysicalRimlight_C_Day_Phase_) == 0x000001, "Wrong alignment on PhysicalRimlight_C_Day_Phase_");
static_assert(sizeof(PhysicalRimlight_C_Day_Phase_) == 0x000003, "Wrong size on PhysicalRimlight_C_Day_Phase_");
static_assert(offsetof(PhysicalRimlight_C_Day_Phase_, CurrentDayPhase) == 0x000000, "Member 'PhysicalRimlight_C_Day_Phase_::CurrentDayPhase' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Day_Phase_, PreviousDayPhase) == 0x000001, "Member 'PhysicalRimlight_C_Day_Phase_::PreviousDayPhase' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Day_Phase_, bAtCreation) == 0x000002, "Member 'PhysicalRimlight_C_Day_Phase_::bAtCreation' has a wrong offset!");

struct PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UDataDrivenCVarEngineSubsystem*         CallFunc_GetEngineSubsystem_ReturnValue;
	TDelegate<void(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(const class FString& CVarName)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x7];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	EFortDayPhase                                 K2Node_CustomEvent_CurrentDayPhase;
	EFortDayPhase                                 K2Node_CustomEvent_PreviousDayPhase;
	bool                                          K2Node_CustomEvent_bAtCreation;
};
static_assert(alignof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight) == 0x000008, "Wrong alignment on PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight");
static_assert(sizeof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight) == 0x000060, "Wrong size on PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, EntryPoint) == 0x000000, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::EntryPoint' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000008, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, CallFunc_K2_SetTimer_ReturnValue) == 0x000028, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, CallFunc_GetPlayerPawn_ReturnValue) == 0x000030, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000038, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000048, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_CustomEvent_CurrentDayPhase) == 0x000058, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_CustomEvent_CurrentDayPhase' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_CustomEvent_PreviousDayPhase) == 0x000059, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_CustomEvent_PreviousDayPhase' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight, K2Node_CustomEvent_bAtCreation) == 0x00005A, "Member 'PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight::K2Node_CustomEvent_bAtCreation' has a wrong offset!");

struct PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc final
{
public:
	class FString                                 CVarName;
	float                                         CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	uint8                                         Pad_14[0x4];
	double                                        K2Node_VariableSet_Rim_Light_Physical_Intensity_ImplicitCast;
};
static_assert(alignof(PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc) == 0x000008, "Wrong alignment on PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc");
static_assert(sizeof(PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc) == 0x000020, "Wrong size on PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc");
static_assert(offsetof(PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc, CVarName) == 0x000000, "Member 'PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc::CVarName' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc, CallFunc_GetConsoleVariableFloatValue_ReturnValue) == 0x000010, "Member 'PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc::CallFunc_GetConsoleVariableFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc, K2Node_VariableSet_Rim_Light_Physical_Intensity_ImplicitCast) == 0x000018, "Member 'PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc::K2Node_VariableSet_Rim_Light_Physical_Intensity_ImplicitCast' has a wrong offset!");

struct PhysicalRimlight_C_RimlightAttemptValidation final
{
public:
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
};
static_assert(alignof(PhysicalRimlight_C_RimlightAttemptValidation) == 0x000001, "Wrong alignment on PhysicalRimlight_C_RimlightAttemptValidation");
static_assert(sizeof(PhysicalRimlight_C_RimlightAttemptValidation) == 0x000001, "Wrong size on PhysicalRimlight_C_RimlightAttemptValidation");
static_assert(offsetof(PhysicalRimlight_C_RimlightAttemptValidation, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000000, "Member 'PhysicalRimlight_C_RimlightAttemptValidation::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

struct PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity final
{
public:
	EFortDayPhase                                 Temp_byte_Variable;
	uint8                                         Pad_1[0x7];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	EFortDayPhase                                 CallFunc_GetCurrentDayPhase_ReturnValue;
	uint8                                         Pad_41[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        K2Node_Select_Default;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
};
static_assert(alignof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity) == 0x000008, "Wrong alignment on PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity");
static_assert(sizeof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity) == 0x000070, "Wrong size on PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, Temp_byte_Variable) == 0x000000, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_GetVectorParameterValue_ReturnValue) == 0x000018, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000028, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_GetCurrentDayPhase_ReturnValue) == 0x000040, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_GetCurrentDayPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000050, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, K2Node_Select_Default) == 0x000058, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000060, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000068, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity, CallFunc_SetIntensity_NewIntensity_ImplicitCast_1) == 0x00006C, "Member 'PhysicalRimlight_C_Set_Rimlight_Color_and_Intensity::CallFunc_SetIntensity_NewIntensity_ImplicitCast_1' has a wrong offset!");

struct PhysicalRimlight_C_UpdateRimlight final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_31[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_51[0x7];
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FVector                                CallFunc_TransformLocation_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
};
static_assert(alignof(PhysicalRimlight_C_UpdateRimlight) == 0x000010, "Wrong alignment on PhysicalRimlight_C_UpdateRimlight");
static_assert(sizeof(PhysicalRimlight_C_UpdateRimlight) == 0x0002E0, "Wrong size on PhysicalRimlight_C_UpdateRimlight");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000028, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000058, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_GetCameraRotation_ReturnValue) == 0x000060, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_GetCameraLocation_ReturnValue) == 0x000078, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_TransformLocation_ReturnValue) == 0x0000F0, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000108, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_FindLookAtRotation_ReturnValue) == 0x0001E8, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_UpdateRimlight, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000200, "Member 'PhysicalRimlight_C_UpdateRimlight::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

struct PhysicalRimlight_C_ValidateRimlight final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_32[0x6];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_45[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_4C[0x4];
	class USpotLightComponent*                    CallFunc_AddComponent_ReturnValue;
};
static_assert(alignof(PhysicalRimlight_C_ValidateRimlight) == 0x000008, "Wrong alignment on PhysicalRimlight_C_ValidateRimlight");
static_assert(sizeof(PhysicalRimlight_C_ValidateRimlight) == 0x000058, "Wrong size on PhysicalRimlight_C_ValidateRimlight");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'PhysicalRimlight_C_ValidateRimlight::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, Temp_int_Array_Index_Variable) == 0x000008, "Member 'PhysicalRimlight_C_ValidateRimlight::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'PhysicalRimlight_C_ValidateRimlight::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_IsLocallyControlled_ReturnValue) == 0x000010, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_GetConsoleVariableFloatValue_ReturnValue) == 0x000014, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_GetConsoleVariableFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Array_Get_Item) == 0x000018, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_K2_SetTimer_ReturnValue) == 0x000038, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, Temp_int_Loop_Counter_Variable_1) == 0x000040, "Member 'PhysicalRimlight_C_ValidateRimlight::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Less_IntInt_ReturnValue_1) == 0x000044, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PhysicalRimlight_C_ValidateRimlight, CallFunc_AddComponent_ReturnValue) == 0x000050, "Member 'PhysicalRimlight_C_ValidateRimlight::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

}
