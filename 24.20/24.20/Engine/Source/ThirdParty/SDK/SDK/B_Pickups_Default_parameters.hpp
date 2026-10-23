#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_Pickups_Default_C_AddRareFX final
{
public:
	int32                                         CallFunc_GetViewDistanceQuality_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	double                                        CallFunc_Fraction_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_3C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_4A[0x6];
	struct FTransform                             Temp_struct_Variable;
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_BB[0x5];
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
};
static_assert(alignof(B_Pickups_Default_C_AddRareFX) == 0x000010, "Wrong alignment on B_Pickups_Default_C_AddRareFX");
static_assert(sizeof(B_Pickups_Default_C_AddRareFX) == 0x0000E0, "Wrong size on B_Pickups_Default_C_AddRareFX");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_GetViewDistanceQuality_ReturnValue) == 0x000000, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_GetViewDistanceQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000008, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000010, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Fraction_ReturnValue) == 0x000018, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'B_Pickups_Default_C_AddRareFX::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, Temp_int_Array_Index_Variable) == 0x000038, "Member 'B_Pickups_Default_C_AddRareFX::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Array_Get_Item) == 0x000040, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000048, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000049, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, Temp_struct_Variable) == 0x000050, "Member 'B_Pickups_Default_C_AddRareFX::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_AddComponent_ReturnValue) == 0x0000B0, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000B9, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_IsValid_ReturnValue) == 0x0000BA, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x0000C0, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000D8, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_AddRareFX, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x0000DC, "Member 'B_Pickups_Default_C_AddRareFX::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

struct B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_CustomEvent_bg;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_12[0x6];
	class AFortPawn*                              K2Node_Event_PickupTarget;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_21[0x7];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_GetPickupRarityMID_bNeedsToBeInitialized;
	uint8                                         Pad_4B[0x5];
	class UMaterialInstanceDynamic*               CallFunc_GetPickupRarityMID_ReturnValue;
	double                                        K2Node_CustomEvent_bg_5;
	double                                        K2Node_CustomEvent_bgdark;
	double                                        K2Node_CustomEvent_gun;
	double                                        K2Node_CustomEvent_bg_4;
	double                                        K2Node_CustomEvent_bg_3;
	double                                        K2Node_CustomEvent_bg_2;
	double                                        K2Node_CustomEvent_bg_1;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6;
	float                                         CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7;
};
static_assert(alignof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default) == 0x000008, "Wrong alignment on B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default");
static_assert(sizeof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default) == 0x0000B0, "Wrong size on B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, EntryPoint) == 0x000000, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bg) == 0x000008, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bg' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000011, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_Event_PickupTarget) == 0x000018, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_Event_PickupTarget' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000040, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000049, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GetPickupRarityMID_bNeedsToBeInitialized) == 0x00004A, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GetPickupRarityMID_bNeedsToBeInitialized' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GetPickupRarityMID_ReturnValue) == 0x000050, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GetPickupRarityMID_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bg_5) == 0x000058, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bg_5' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bgdark) == 0x000060, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bgdark' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_gun) == 0x000068, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_gun' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bg_4) == 0x000070, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bg_4' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bg_3) == 0x000078, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bg_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bg_2) == 0x000080, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bg_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_CustomEvent_bg_1) == 0x000088, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_CustomEvent_bg_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast) == 0x000090, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1) == 0x000094, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2) == 0x000098, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3) == 0x00009C, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4) == 0x0000A0, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5) == 0x0000A4, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6) == 0x0000A8, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7) == 0x0000AC, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_7' has a wrong offset!");

struct B_Pickups_Default_C_initializeSpotlightComponent final
{
public:
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_GetConsoleVariableIntValue_ReturnValue;
	bool                                          K2Node_SwitchInteger_CmpSuccess;
	bool                                          CallFunc_InEditorOrPIE_ReturnValue;
	uint8                                         Pad_A[0x6];
	struct FTransform                             Temp_struct_Variable;
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	class USpotLightComponent*                    CallFunc_AddComponent_ReturnValue;
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	uint8                                         Pad_85[0x3];
	int32                                         CallFunc_GetRenderingDetailMode_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(B_Pickups_Default_C_initializeSpotlightComponent) == 0x000010, "Wrong alignment on B_Pickups_Default_C_initializeSpotlightComponent");
static_assert(sizeof(B_Pickups_Default_C_initializeSpotlightComponent) == 0x000090, "Wrong size on B_Pickups_Default_C_initializeSpotlightComponent");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, Temp_int_Variable) == 0x000000, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_GetConsoleVariableIntValue_ReturnValue) == 0x000004, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_GetConsoleVariableIntValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_InEditorOrPIE_ReturnValue) == 0x000009, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_InEditorOrPIE_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, Temp_struct_Variable) == 0x000010, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_GetGameUserSettings_ReturnValue) == 0x000070, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x000080, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_IsMobilePlatform_ReturnValue) == 0x000084, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_GetRenderingDetailMode_ReturnValue) == 0x000088, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_GetRenderingDetailMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_Not_PreBool_ReturnValue) == 0x00008C, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00008D, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_initializeSpotlightComponent, CallFunc_BooleanAND_ReturnValue) == 0x00008E, "Member 'B_Pickups_Default_C_initializeSpotlightComponent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct B_Pickups_Default_C_OnPickedUp final
{
public:
	class AFortPawn*                              PickupTarget;
};
static_assert(alignof(B_Pickups_Default_C_OnPickedUp) == 0x000008, "Wrong alignment on B_Pickups_Default_C_OnPickedUp");
static_assert(sizeof(B_Pickups_Default_C_OnPickedUp) == 0x000008, "Wrong size on B_Pickups_Default_C_OnPickedUp");
static_assert(offsetof(B_Pickups_Default_C_OnPickedUp, PickupTarget) == 0x000000, "Member 'B_Pickups_Default_C_OnPickedUp::PickupTarget' has a wrong offset!");

struct B_Pickups_Default_C_Set_Initial_BKGD_Param final
{
public:
	class UMaterialInstanceDynamic*               Mid;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_19[0x7];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(B_Pickups_Default_C_Set_Initial_BKGD_Param) == 0x000008, "Wrong alignment on B_Pickups_Default_C_Set_Initial_BKGD_Param");
static_assert(sizeof(B_Pickups_Default_C_Set_Initial_BKGD_Param) == 0x000038, "Wrong size on B_Pickups_Default_C_Set_Initial_BKGD_Param");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, Mid) == 0x000000, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::Mid' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000009, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000A, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00000B, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000018, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_RandomFloatInRange_ReturnValue) == 0x000020, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000030, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000034, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct B_Pickups_Default_C_setDrawDistances final
{
public:
	double                                        BG_0;
	double                                        bgdark;
	double                                        Gun;
};
static_assert(alignof(B_Pickups_Default_C_setDrawDistances) == 0x000008, "Wrong alignment on B_Pickups_Default_C_setDrawDistances");
static_assert(sizeof(B_Pickups_Default_C_setDrawDistances) == 0x000018, "Wrong size on B_Pickups_Default_C_setDrawDistances");
static_assert(offsetof(B_Pickups_Default_C_setDrawDistances, BG_0) == 0x000000, "Member 'B_Pickups_Default_C_setDrawDistances::BG_0' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_setDrawDistances, bgdark) == 0x000008, "Member 'B_Pickups_Default_C_setDrawDistances::bgdark' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_setDrawDistances, Gun) == 0x000010, "Member 'B_Pickups_Default_C_setDrawDistances::Gun' has a wrong offset!");

struct B_Pickups_Default_C_setMaxDraw_BG final
{
public:
	double                                        BG_0;
};
static_assert(alignof(B_Pickups_Default_C_setMaxDraw_BG) == 0x000008, "Wrong alignment on B_Pickups_Default_C_setMaxDraw_BG");
static_assert(sizeof(B_Pickups_Default_C_setMaxDraw_BG) == 0x000008, "Wrong size on B_Pickups_Default_C_setMaxDraw_BG");
static_assert(offsetof(B_Pickups_Default_C_setMaxDraw_BG, BG_0) == 0x000000, "Member 'B_Pickups_Default_C_setMaxDraw_BG::BG_0' has a wrong offset!");

struct B_Pickups_Default_C_setMaxDraw_BGDark final
{
public:
	double                                        BG_0;
};
static_assert(alignof(B_Pickups_Default_C_setMaxDraw_BGDark) == 0x000008, "Wrong alignment on B_Pickups_Default_C_setMaxDraw_BGDark");
static_assert(sizeof(B_Pickups_Default_C_setMaxDraw_BGDark) == 0x000008, "Wrong size on B_Pickups_Default_C_setMaxDraw_BGDark");
static_assert(offsetof(B_Pickups_Default_C_setMaxDraw_BGDark, BG_0) == 0x000000, "Member 'B_Pickups_Default_C_setMaxDraw_BGDark::BG_0' has a wrong offset!");

struct B_Pickups_Default_C_setMaxDraw_Gun final
{
public:
	double                                        BG_0;
};
static_assert(alignof(B_Pickups_Default_C_setMaxDraw_Gun) == 0x000008, "Wrong alignment on B_Pickups_Default_C_setMaxDraw_Gun");
static_assert(sizeof(B_Pickups_Default_C_setMaxDraw_Gun) == 0x000008, "Wrong size on B_Pickups_Default_C_setMaxDraw_Gun");
static_assert(offsetof(B_Pickups_Default_C_setMaxDraw_Gun, BG_0) == 0x000000, "Member 'B_Pickups_Default_C_setMaxDraw_Gun::BG_0' has a wrong offset!");

struct B_Pickups_Default_C_setMaxDraw_RareFX final
{
public:
	double                                        BG_0;
};
static_assert(alignof(B_Pickups_Default_C_setMaxDraw_RareFX) == 0x000008, "Wrong alignment on B_Pickups_Default_C_setMaxDraw_RareFX");
static_assert(sizeof(B_Pickups_Default_C_setMaxDraw_RareFX) == 0x000008, "Wrong size on B_Pickups_Default_C_setMaxDraw_RareFX");
static_assert(offsetof(B_Pickups_Default_C_setMaxDraw_RareFX, BG_0) == 0x000000, "Member 'B_Pickups_Default_C_setMaxDraw_RareFX::BG_0' has a wrong offset!");

struct B_Pickups_Default_C_setMaxDraw_RareMesh final
{
public:
	double                                        BG_0;
};
static_assert(alignof(B_Pickups_Default_C_setMaxDraw_RareMesh) == 0x000008, "Wrong alignment on B_Pickups_Default_C_setMaxDraw_RareMesh");
static_assert(sizeof(B_Pickups_Default_C_setMaxDraw_RareMesh) == 0x000008, "Wrong size on B_Pickups_Default_C_setMaxDraw_RareMesh");
static_assert(offsetof(B_Pickups_Default_C_setMaxDraw_RareMesh, BG_0) == 0x000000, "Member 'B_Pickups_Default_C_setMaxDraw_RareMesh::BG_0' has a wrong offset!");

struct B_Pickups_Default_C_Setup_View_Distances final
{
public:
	int32                                         viewDistanceQuality;
	int32                                         l_viewQuality;
	int32                                         Temp_int_Variable;
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	float                                         Temp_real_Variable_2;
	float                                         Temp_real_Variable_3;
	float                                         Temp_real_Variable_4;
	int32                                         Temp_int_Variable_1;
	float                                         Temp_real_Variable_5;
	float                                         Temp_real_Variable_6;
	float                                         Temp_real_Variable_7;
	float                                         Temp_real_Variable_8;
	float                                         Temp_real_Variable_9;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	float                                         K2Node_Select_Default;
	float                                         K2Node_Select_Default_1;
	int32                                         CallFunc_Setup_View_Distances_viewDistanceQuality;
	uint8                                         Pad_64[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
};
static_assert(alignof(B_Pickups_Default_C_Setup_View_Distances) == 0x000008, "Wrong alignment on B_Pickups_Default_C_Setup_View_Distances");
static_assert(sizeof(B_Pickups_Default_C_Setup_View_Distances) == 0x000080, "Wrong size on B_Pickups_Default_C_Setup_View_Distances");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, viewDistanceQuality) == 0x000000, "Member 'B_Pickups_Default_C_Setup_View_Distances::viewDistanceQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, l_viewQuality) == 0x000004, "Member 'B_Pickups_Default_C_Setup_View_Distances::l_viewQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_int_Variable) == 0x000008, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable) == 0x00000C, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_1) == 0x000010, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_2) == 0x000014, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_3) == 0x000018, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_4) == 0x00001C, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_int_Variable_1) == 0x000020, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_5) == 0x000024, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_6) == 0x000028, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_6' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_7) == 0x00002C, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_7' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_8) == 0x000030, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_8' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, Temp_real_Variable_9) == 0x000034, "Member 'B_Pickups_Default_C_Setup_View_Distances::Temp_real_Variable_9' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_FMax_ReturnValue) == 0x000050, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, K2Node_Select_Default) == 0x000058, "Member 'B_Pickups_Default_C_Setup_View_Distances::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, K2Node_Select_Default_1) == 0x00005C, "Member 'B_Pickups_Default_C_Setup_View_Distances::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_Setup_View_Distances_viewDistanceQuality) == 0x000060, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_Setup_View_Distances_viewDistanceQuality' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_View_Distances, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000078, "Member 'B_Pickups_Default_C_Setup_View_Distances::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

}
