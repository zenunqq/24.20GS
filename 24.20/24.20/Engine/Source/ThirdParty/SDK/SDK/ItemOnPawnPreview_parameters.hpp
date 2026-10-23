#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ItemOnPawnPreview_C_SetFloorEnabled final
{
public:
	bool                                          Show_Floor;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(ItemOnPawnPreview_C_SetFloorEnabled) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_SetFloorEnabled");
static_assert(sizeof(ItemOnPawnPreview_C_SetFloorEnabled) == 0x000002, "Wrong size on ItemOnPawnPreview_C_SetFloorEnabled");
static_assert(offsetof(ItemOnPawnPreview_C_SetFloorEnabled, Show_Floor) == 0x000000, "Member 'ItemOnPawnPreview_C_SetFloorEnabled::Show_Floor' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_SetFloorEnabled, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ItemOnPawnPreview_C_SetFloorEnabled::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct ItemOnPawnPreview_C_OnUpdateFloorMaterial final
{
public:
	bool                                          bEnableAutotestBackground;
};
static_assert(alignof(ItemOnPawnPreview_C_OnUpdateFloorMaterial) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_OnUpdateFloorMaterial");
static_assert(sizeof(ItemOnPawnPreview_C_OnUpdateFloorMaterial) == 0x000001, "Wrong size on ItemOnPawnPreview_C_OnUpdateFloorMaterial");
static_assert(offsetof(ItemOnPawnPreview_C_OnUpdateFloorMaterial, bEnableAutotestBackground) == 0x000000, "Member 'ItemOnPawnPreview_C_OnUpdateFloorMaterial::bEnableAutotestBackground' has a wrong offset!");

struct ItemOnPawnPreview_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(ItemOnPawnPreview_C_SwitchPCLighting) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_SwitchPCLighting");
static_assert(sizeof(ItemOnPawnPreview_C_SwitchPCLighting) == 0x000001, "Wrong size on ItemOnPawnPreview_C_SwitchPCLighting");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'ItemOnPawnPreview_C_SwitchPCLighting::Visibility' has a wrong offset!");

struct ItemOnPawnPreview_C_OnSetFloorMaterial final
{
public:
	class UMaterialInterface*                     InMaterialInstance;
};
static_assert(alignof(ItemOnPawnPreview_C_OnSetFloorMaterial) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_OnSetFloorMaterial");
static_assert(sizeof(ItemOnPawnPreview_C_OnSetFloorMaterial) == 0x000008, "Wrong size on ItemOnPawnPreview_C_OnSetFloorMaterial");
static_assert(offsetof(ItemOnPawnPreview_C_OnSetFloorMaterial, InMaterialInstance) == 0x000000, "Member 'ItemOnPawnPreview_C_OnSetFloorMaterial::InMaterialInstance' has a wrong offset!");

struct ItemOnPawnPreview_C_SwitchMobileLighting final
{
public:
	bool                                          NewParam;
};
static_assert(alignof(ItemOnPawnPreview_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_SwitchMobileLighting");
static_assert(sizeof(ItemOnPawnPreview_C_SwitchMobileLighting) == 0x000001, "Wrong size on ItemOnPawnPreview_C_SwitchMobileLighting");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchMobileLighting, NewParam) == 0x000000, "Member 'ItemOnPawnPreview_C_SwitchMobileLighting::NewParam' has a wrong offset!");

struct ItemOnPawnPreview_C_OnPreviewVisualsSpawned final
{
public:
	bool                                          bUseSecondaryTransitionEffects;
	bool                                          bShowFloor;
};
static_assert(alignof(ItemOnPawnPreview_C_OnPreviewVisualsSpawned) == 0x000001, "Wrong alignment on ItemOnPawnPreview_C_OnPreviewVisualsSpawned");
static_assert(sizeof(ItemOnPawnPreview_C_OnPreviewVisualsSpawned) == 0x000002, "Wrong size on ItemOnPawnPreview_C_OnPreviewVisualsSpawned");
static_assert(offsetof(ItemOnPawnPreview_C_OnPreviewVisualsSpawned, bUseSecondaryTransitionEffects) == 0x000000, "Member 'ItemOnPawnPreview_C_OnPreviewVisualsSpawned::bUseSecondaryTransitionEffects' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_OnPreviewVisualsSpawned, bShowFloor) == 0x000001, "Member 'ItemOnPawnPreview_C_OnPreviewVisualsSpawned::bShowFloor' has a wrong offset!");

struct ItemOnPawnPreview_C_SwitchErebusLighting final
{
public:
	bool                                          Visibility;
	uint8                                         Pad_1[0x7];
	TArray<class USpotLightComponent*>            l_lights;
};
static_assert(alignof(ItemOnPawnPreview_C_SwitchErebusLighting) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_SwitchErebusLighting");
static_assert(sizeof(ItemOnPawnPreview_C_SwitchErebusLighting) == 0x000018, "Wrong size on ItemOnPawnPreview_C_SwitchErebusLighting");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchErebusLighting, Visibility) == 0x000000, "Member 'ItemOnPawnPreview_C_SwitchErebusLighting::Visibility' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_SwitchErebusLighting, l_lights) == 0x000008, "Member 'ItemOnPawnPreview_C_SwitchErebusLighting::l_lights' has a wrong offset!");

struct ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview final
{
public:
	int32                                         EntryPoint;
	float                                         CallFunc_GetStreamingSafetyDuration_ReturnValue;
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_16[0x2];
	class UMaterialInterface*                     K2Node_Event_InMaterialInstance;
	struct FVector                                CallFunc_GetPawnLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_51[0x7];
	class UAthenaSkyDiveContrailItemDefinition*   K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_61[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	bool                                          K2Node_Event_bUseSecondaryTransitionEffects;
	bool                                          K2Node_Event_bShowFloor;
	uint8                                         Pad_92[0x6];
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_C1[0x7];
	class UFortGameUserSettings*                  CallFunc_GetFortGameUserSettings_ReturnValue;
	bool                                          K2Node_Event_bEnableAutotestBackground;
	bool                                          CallFunc_IsInPerformanceMode_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_D3[0x5];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_E5[0x3];
	class UMaterialInterface*                     K2Node_Select_Default;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_F1[0x7];
	class UMaterialInterface*                     K2Node_Select_Default_1;
	bool                                          Temp_bool_B_Execution_Happened_Variable;
	bool                                          Temp_bool_A_Execution_Happened_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_103[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
};
static_assert(alignof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview");
static_assert(sizeof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview) == 0x000110, "Wrong size on ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, EntryPoint) == 0x000000, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetStreamingSafetyDuration_ReturnValue) == 0x000004, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetStreamingSafetyDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetShadowQuality_ReturnValue) == 0x000010, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, Temp_bool_Variable) == 0x000015, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Event_InMaterialInstance) == 0x000018, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Event_InMaterialInstance' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetPawnLocation_ReturnValue) == 0x000020, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetPawnLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000038, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000040, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_SpawnEmitterAtLocation_ReturnValue_2) == 0x000048, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_SpawnEmitterAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, Temp_bool_Variable_1) == 0x000050, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition) == 0x000058, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000070, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetActorForwardVector_ReturnValue) == 0x000078, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Event_bUseSecondaryTransitionEffects) == 0x000090, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Event_bUseSecondaryTransitionEffects' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Event_bShowFloor) == 0x000091, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Event_bShowFloor' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000098, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x0000B0, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsMobileGame_ReturnValue) == 0x0000C0, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_GetFortGameUserSettings_ReturnValue) == 0x0000C8, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_GetFortGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Event_bEnableAutotestBackground) == 0x0000D0, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Event_bEnableAutotestBackground' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsInPerformanceMode_ReturnValue) == 0x0000D1, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsInPerformanceMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_BooleanOR_ReturnValue) == 0x0000D2, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000D8, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsErebus_ReturnValue) == 0x0000E0, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_BooleanOR_ReturnValue_1) == 0x0000E1, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000E2, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_BooleanOR_ReturnValue_2) == 0x0000E3, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsValid_ReturnValue) == 0x0000E4, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Select_Default) == 0x0000E8, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_Select_Default_1) == 0x0000F8, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, Temp_bool_B_Execution_Happened_Variable) == 0x000100, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::Temp_bool_B_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, Temp_bool_A_Execution_Happened_Variable) == 0x000101, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::Temp_bool_A_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, CallFunc_BooleanAND_ReturnValue) == 0x000102, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview, K2Node_CreateDelegate_OutputDelegate_1) == 0x000104, "Member 'ItemOnPawnPreview_C_ExecuteUbergraph_ItemOnPawnPreview::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

struct ItemOnPawnPreview_C_LightControl final
{
public:
	bool                                          Active;
	bool                                          CallFunc_IsErebus_ReturnValue;
	uint8                                         Pad_2[0x6];
	class UFortGameUserSettings*                  CallFunc_GetFortGameUserSettings_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_IsInPerformanceMode_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_IsErebus_ReturnValue_1;
	uint8                                         Pad_15[0x3];
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
};
static_assert(alignof(ItemOnPawnPreview_C_LightControl) == 0x000008, "Wrong alignment on ItemOnPawnPreview_C_LightControl");
static_assert(sizeof(ItemOnPawnPreview_C_LightControl) == 0x000028, "Wrong size on ItemOnPawnPreview_C_LightControl");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, Active) == 0x000000, "Member 'ItemOnPawnPreview_C_LightControl::Active' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_IsErebus_ReturnValue) == 0x000001, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_GetFortGameUserSettings_ReturnValue) == 0x000008, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_GetFortGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_IsMobileGame_ReturnValue) == 0x000010, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_IsInPerformanceMode_ReturnValue) == 0x000011, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_IsInPerformanceMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_1) == 0x000013, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_IsErebus_ReturnValue_1) == 0x000014, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_IsErebus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_GetGameUserSettings_ReturnValue) == 0x000018, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_GetShadowQuality_ReturnValue) == 0x000020, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_2) == 0x000025, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemOnPawnPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_3) == 0x000026, "Member 'ItemOnPawnPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

}
