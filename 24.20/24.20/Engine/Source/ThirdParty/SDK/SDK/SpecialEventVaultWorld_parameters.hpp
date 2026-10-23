#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct SpecialEventVaultWorld_C_UserConstructionScript final
{
public:
	class AFortStaticMeshActor*                   K2Node_DynamicCast_AsFort_Static_Mesh_Actor;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(SpecialEventVaultWorld_C_UserConstructionScript) == 0x000008, "Wrong alignment on SpecialEventVaultWorld_C_UserConstructionScript");
static_assert(sizeof(SpecialEventVaultWorld_C_UserConstructionScript) == 0x000010, "Wrong size on SpecialEventVaultWorld_C_UserConstructionScript");
static_assert(offsetof(SpecialEventVaultWorld_C_UserConstructionScript, K2Node_DynamicCast_AsFort_Static_Mesh_Actor) == 0x000000, "Member 'SpecialEventVaultWorld_C_UserConstructionScript::K2Node_DynamicCast_AsFort_Static_Mesh_Actor' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'SpecialEventVaultWorld_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct SpecialEventVaultWorld_C_OnUpdateMaterialIndex final
{
public:
	int32                                         MaterialIndex;
};
static_assert(alignof(SpecialEventVaultWorld_C_OnUpdateMaterialIndex) == 0x000004, "Wrong alignment on SpecialEventVaultWorld_C_OnUpdateMaterialIndex");
static_assert(sizeof(SpecialEventVaultWorld_C_OnUpdateMaterialIndex) == 0x000004, "Wrong size on SpecialEventVaultWorld_C_OnUpdateMaterialIndex");
static_assert(offsetof(SpecialEventVaultWorld_C_OnUpdateMaterialIndex, MaterialIndex) == 0x000000, "Member 'SpecialEventVaultWorld_C_OnUpdateMaterialIndex::MaterialIndex' has a wrong offset!");

struct SpecialEventVaultWorld_C_OnUpdateDisplay final
{
public:
	bool                                          bShowFloor;
	bool                                          bShowEffects;
};
static_assert(alignof(SpecialEventVaultWorld_C_OnUpdateDisplay) == 0x000001, "Wrong alignment on SpecialEventVaultWorld_C_OnUpdateDisplay");
static_assert(sizeof(SpecialEventVaultWorld_C_OnUpdateDisplay) == 0x000002, "Wrong size on SpecialEventVaultWorld_C_OnUpdateDisplay");
static_assert(offsetof(SpecialEventVaultWorld_C_OnUpdateDisplay, bShowFloor) == 0x000000, "Member 'SpecialEventVaultWorld_C_OnUpdateDisplay::bShowFloor' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_OnUpdateDisplay, bShowEffects) == 0x000001, "Member 'SpecialEventVaultWorld_C_OnUpdateDisplay::bShowEffects' has a wrong offset!");

struct SpecialEventVaultWorld_C_TransitionBackgroundForward final
{
public:
	double                                        Forward;
	double                                        PreTransitionOffset;
	double                                        FXTransitionFade;
	class UMaterialInstanceDynamic*               Mid;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue_2;
	double                                        CallFunc_Lerp_ReturnValue_3;
	double                                        CallFunc_Lerp_ReturnValue_4;
	double                                        CallFunc_Lerp_ReturnValue_5;
	double                                        CallFunc_Lerp_ReturnValue_6;
	double                                        CallFunc_Lerp_ReturnValue_7;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;
};
static_assert(alignof(SpecialEventVaultWorld_C_TransitionBackgroundForward) == 0x000008, "Wrong alignment on SpecialEventVaultWorld_C_TransitionBackgroundForward");
static_assert(sizeof(SpecialEventVaultWorld_C_TransitionBackgroundForward) == 0x000088, "Wrong size on SpecialEventVaultWorld_C_TransitionBackgroundForward");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, Forward) == 0x000000, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::Forward' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, PreTransitionOffset) == 0x000008, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::PreTransitionOffset' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, FXTransitionFade) == 0x000010, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::FXTransitionFade' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, Mid) == 0x000018, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::Mid' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue) == 0x000020, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_1) == 0x000028, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_2) == 0x000030, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_3) == 0x000038, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_4) == 0x000040, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_5) == 0x000048, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_6) == 0x000050, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_Lerp_ReturnValue_7) == 0x000058, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000060, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000064, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000068, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x00006C, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x000070, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x000074, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x000078, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x00007C, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_8) == 0x000080, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_8' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundForward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_9) == 0x000084, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundForward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_9' has a wrong offset!");

struct SpecialEventVaultWorld_C_OnTransitionItemDetails final
{
public:
	bool                                          bShowItemDetails;
};
static_assert(alignof(SpecialEventVaultWorld_C_OnTransitionItemDetails) == 0x000001, "Wrong alignment on SpecialEventVaultWorld_C_OnTransitionItemDetails");
static_assert(sizeof(SpecialEventVaultWorld_C_OnTransitionItemDetails) == 0x000001, "Wrong size on SpecialEventVaultWorld_C_OnTransitionItemDetails");
static_assert(offsetof(SpecialEventVaultWorld_C_OnTransitionItemDetails, bShowItemDetails) == 0x000000, "Member 'SpecialEventVaultWorld_C_OnTransitionItemDetails::bShowItemDetails' has a wrong offset!");

struct SpecialEventVaultWorld_C_TransitionBackgroundBackward final
{
public:
	double                                        Backward;
	double                                        PreTransitionOffset;
	double                                        FXTransitionFade;
	class UMaterialInstanceDynamic*               Mid;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	double                                        CallFunc_Lerp_ReturnValue_2;
	double                                        CallFunc_Lerp_ReturnValue_3;
	double                                        CallFunc_Lerp_ReturnValue_4;
	double                                        CallFunc_Lerp_ReturnValue_5;
	double                                        CallFunc_Lerp_ReturnValue_6;
	double                                        CallFunc_Lerp_ReturnValue_7;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;
};
static_assert(alignof(SpecialEventVaultWorld_C_TransitionBackgroundBackward) == 0x000008, "Wrong alignment on SpecialEventVaultWorld_C_TransitionBackgroundBackward");
static_assert(sizeof(SpecialEventVaultWorld_C_TransitionBackgroundBackward) == 0x000088, "Wrong size on SpecialEventVaultWorld_C_TransitionBackgroundBackward");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, Backward) == 0x000000, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::Backward' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, PreTransitionOffset) == 0x000008, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::PreTransitionOffset' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, FXTransitionFade) == 0x000010, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::FXTransitionFade' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, Mid) == 0x000018, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::Mid' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue) == 0x000020, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_1) == 0x000028, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_2) == 0x000030, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_3) == 0x000038, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_4) == 0x000040, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_5) == 0x000048, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_6) == 0x000050, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_Lerp_ReturnValue_7) == 0x000058, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_Lerp_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000060, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000064, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000068, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_3) == 0x00006C, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_4) == 0x000070, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_5) == 0x000074, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_6) == 0x000078, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_7) == 0x00007C, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_8) == 0x000080, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_8' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_TransitionBackgroundBackward, CallFunc_SetScalarParameterValue_Value_ImplicitCast_9) == 0x000084, "Member 'SpecialEventVaultWorld_C_TransitionBackgroundBackward::CallFunc_SetScalarParameterValue_Value_ImplicitCast_9' has a wrong offset!");

struct SpecialEventVaultWorld_C_OnTransitionBackground final
{
public:
	bool                                          bPlayForward;
	EBackgroundIntensityLevel                     IntensityTransition;
};
static_assert(alignof(SpecialEventVaultWorld_C_OnTransitionBackground) == 0x000001, "Wrong alignment on SpecialEventVaultWorld_C_OnTransitionBackground");
static_assert(sizeof(SpecialEventVaultWorld_C_OnTransitionBackground) == 0x000002, "Wrong size on SpecialEventVaultWorld_C_OnTransitionBackground");
static_assert(offsetof(SpecialEventVaultWorld_C_OnTransitionBackground, bPlayForward) == 0x000000, "Member 'SpecialEventVaultWorld_C_OnTransitionBackground::bPlayForward' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_OnTransitionBackground, IntensityTransition) == 0x000001, "Member 'SpecialEventVaultWorld_C_OnTransitionBackground::IntensityTransition' has a wrong offset!");

struct SpecialEventVaultWorld_C_SetupBackgroundMaterial final
{
public:
	class UTexture2D*                             TextureBackground;
	struct FVaultWorldBackgroundData              BackgroundInfo;
	class UMaterialInstanceDynamic*               Mid;
	class FName                                   Temp_name_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_75[0x3];
	class FName                                   Temp_name_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_7D[0x3];
	class FName                                   Temp_name_Variable_2;
	class FName                                   Temp_name_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_89[0x3];
	class FName                                   K2Node_Select_Default;
	class FName                                   K2Node_Select_Default_1;
	class FName                                   Temp_name_Variable_4;
	class FName                                   Temp_name_Variable_5;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_9D[0x3];
	class FName                                   K2Node_Select_Default_2;
};
static_assert(alignof(SpecialEventVaultWorld_C_SetupBackgroundMaterial) == 0x000008, "Wrong alignment on SpecialEventVaultWorld_C_SetupBackgroundMaterial");
static_assert(sizeof(SpecialEventVaultWorld_C_SetupBackgroundMaterial) == 0x0000A8, "Wrong size on SpecialEventVaultWorld_C_SetupBackgroundMaterial");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, TextureBackground) == 0x000000, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::TextureBackground' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, BackgroundInfo) == 0x000008, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::BackgroundInfo' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Mid) == 0x000068, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Mid' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable) == 0x000070, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, CallFunc_IsValid_ReturnValue) == 0x000074, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_1) == 0x000078, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable) == 0x00007C, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_2) == 0x000080, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_3) == 0x000084, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable_1) == 0x000088, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default) == 0x00008C, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default_1) == 0x000090, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_4) == 0x000094, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_name_Variable_5) == 0x000098, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, Temp_bool_Variable_2) == 0x00009C, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_SetupBackgroundMaterial, K2Node_Select_Default_2) == 0x0000A0, "Member 'SpecialEventVaultWorld_C_SetupBackgroundMaterial::K2Node_Select_Default_2' has a wrong offset!");

struct SpecialEventVaultWorld_C_OnSetupBackground final
{
public:
	const class UTexture2D*                       LoadedBackgroundTexture;
	struct FVaultWorldBackgroundData              BackgroundInfo;
};
static_assert(alignof(SpecialEventVaultWorld_C_OnSetupBackground) == 0x000008, "Wrong alignment on SpecialEventVaultWorld_C_OnSetupBackground");
static_assert(sizeof(SpecialEventVaultWorld_C_OnSetupBackground) == 0x000068, "Wrong size on SpecialEventVaultWorld_C_OnSetupBackground");
static_assert(offsetof(SpecialEventVaultWorld_C_OnSetupBackground, LoadedBackgroundTexture) == 0x000000, "Member 'SpecialEventVaultWorld_C_OnSetupBackground::LoadedBackgroundTexture' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_OnSetupBackground, BackgroundInfo) == 0x000008, "Member 'SpecialEventVaultWorld_C_OnSetupBackground::BackgroundInfo' has a wrong offset!");

struct SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          K2Node_Event_bPlayForward;
	EBackgroundIntensityLevel                     K2Node_Event_IntensityTransition;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_14[0x4];
	const class UTexture2D*                       K2Node_Event_LoadedBackgroundTexture;
	struct FVaultWorldBackgroundData              K2Node_Event_BackgroundInfo;
	bool                                          K2Node_Event_bShowFloor;
	bool                                          K2Node_Event_bShowEffects;
	bool                                          K2Node_Event_bShowItemDetails;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	int32                                         K2Node_Event_MaterialIndex;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_89[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundForward_Forward_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1;
	double                                        CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast;
	double                                        CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld) == 0x000008, "Wrong alignment on SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld");
static_assert(sizeof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld) == 0x000100, "Wrong size on SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, EntryPoint) == 0x000000, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_bPlayForward) == 0x000010, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_bPlayForward' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_IntensityTransition) == 0x000011, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_IntensityTransition' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_Not_PreBool_ReturnValue_1) == 0x000013, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_LoadedBackgroundTexture) == 0x000018, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_LoadedBackgroundTexture' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_BackgroundInfo) == 0x000020, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_BackgroundInfo' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_bShowFloor) == 0x000080, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_bShowFloor' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_bShowEffects) == 0x000081, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_bShowEffects' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_bShowItemDetails) == 0x000082, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_bShowItemDetails' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_Not_PreBool_ReturnValue_2) == 0x000083, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, K2Node_Event_MaterialIndex) == 0x000084, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::K2Node_Event_MaterialIndex' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000088, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_SelectFloat_ReturnValue) == 0x000090, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast) == 0x000098, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1) == 0x0000A0, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundForward_FXTransitionFade_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast) == 0x0000A8, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1) == 0x0000B0, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundForward_PreTransitionOffset_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundForward_Forward_ImplicitCast) == 0x0000B8, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundForward_Forward_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1) == 0x0000C0, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundForward_Forward_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast) == 0x0000C8, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1) == 0x0000D0, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundBackward_FXTransitionFade_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast) == 0x0000D8, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1) == 0x0000E0, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundBackward_PreTransitionOffset_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast) == 0x0000E8, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1) == 0x0000F0, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_TransitionBackgroundBackward_Backward_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000F8, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000FC, "Member 'SpecialEventVaultWorld_C_ExecuteUbergraph_SpecialEventVaultWorld::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

}
