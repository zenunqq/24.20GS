#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct WrapPreview_C_UpdateLightingScale final
{
public:
	double                                        UpscaleForVehicle;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	bool                                          CallFunc_IsShowingVehicle_ReturnValue;
};
static_assert(alignof(WrapPreview_C_UpdateLightingScale) == 0x000008, "Wrong alignment on WrapPreview_C_UpdateLightingScale");
static_assert(sizeof(WrapPreview_C_UpdateLightingScale) == 0x000028, "Wrong size on WrapPreview_C_UpdateLightingScale");
static_assert(offsetof(WrapPreview_C_UpdateLightingScale, UpscaleForVehicle) == 0x000000, "Member 'WrapPreview_C_UpdateLightingScale::UpscaleForVehicle' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_UpdateLightingScale, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'WrapPreview_C_UpdateLightingScale::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_UpdateLightingScale, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'WrapPreview_C_UpdateLightingScale::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_UpdateLightingScale, CallFunc_SelectFloat_ReturnValue_1) == 0x000018, "Member 'WrapPreview_C_UpdateLightingScale::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_UpdateLightingScale, CallFunc_IsShowingVehicle_ReturnValue) == 0x000020, "Member 'WrapPreview_C_UpdateLightingScale::CallFunc_IsShowingVehicle_ReturnValue' has a wrong offset!");

struct WrapPreview_C_UpdateFloorVisibility final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsShowingVehicle_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(WrapPreview_C_UpdateFloorVisibility) == 0x000001, "Wrong alignment on WrapPreview_C_UpdateFloorVisibility");
static_assert(sizeof(WrapPreview_C_UpdateFloorVisibility) == 0x000003, "Wrong size on WrapPreview_C_UpdateFloorVisibility");
static_assert(offsetof(WrapPreview_C_UpdateFloorVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'WrapPreview_C_UpdateFloorVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_UpdateFloorVisibility, CallFunc_IsShowingVehicle_ReturnValue) == 0x000001, "Member 'WrapPreview_C_UpdateFloorVisibility::CallFunc_IsShowingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_UpdateFloorVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'WrapPreview_C_UpdateFloorVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct WrapPreview_C_SwitchPCLighting final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(WrapPreview_C_SwitchPCLighting) == 0x000001, "Wrong alignment on WrapPreview_C_SwitchPCLighting");
static_assert(sizeof(WrapPreview_C_SwitchPCLighting) == 0x000001, "Wrong size on WrapPreview_C_SwitchPCLighting");
static_assert(offsetof(WrapPreview_C_SwitchPCLighting, Visibility) == 0x000000, "Member 'WrapPreview_C_SwitchPCLighting::Visibility' has a wrong offset!");

struct WrapPreview_C_OnUpdateFloorMaterial final
{
public:
	bool                                          bEnableAutotestBackground;
};
static_assert(alignof(WrapPreview_C_OnUpdateFloorMaterial) == 0x000001, "Wrong alignment on WrapPreview_C_OnUpdateFloorMaterial");
static_assert(sizeof(WrapPreview_C_OnUpdateFloorMaterial) == 0x000001, "Wrong size on WrapPreview_C_OnUpdateFloorMaterial");
static_assert(offsetof(WrapPreview_C_OnUpdateFloorMaterial, bEnableAutotestBackground) == 0x000000, "Member 'WrapPreview_C_OnUpdateFloorMaterial::bEnableAutotestBackground' has a wrong offset!");

struct WrapPreview_C_SwitchMobileLighting final
{
public:
	bool                                          NewParam;
};
static_assert(alignof(WrapPreview_C_SwitchMobileLighting) == 0x000001, "Wrong alignment on WrapPreview_C_SwitchMobileLighting");
static_assert(sizeof(WrapPreview_C_SwitchMobileLighting) == 0x000001, "Wrong size on WrapPreview_C_SwitchMobileLighting");
static_assert(offsetof(WrapPreview_C_SwitchMobileLighting, NewParam) == 0x000000, "Member 'WrapPreview_C_SwitchMobileLighting::NewParam' has a wrong offset!");

struct WrapPreview_C_OnSetFloorMaterial final
{
public:
	class UMaterialInterface*                     InMaterialInstance;
};
static_assert(alignof(WrapPreview_C_OnSetFloorMaterial) == 0x000008, "Wrong alignment on WrapPreview_C_OnSetFloorMaterial");
static_assert(sizeof(WrapPreview_C_OnSetFloorMaterial) == 0x000008, "Wrong size on WrapPreview_C_OnSetFloorMaterial");
static_assert(offsetof(WrapPreview_C_OnSetFloorMaterial, InMaterialInstance) == 0x000000, "Member 'WrapPreview_C_OnSetFloorMaterial::InMaterialInstance' has a wrong offset!");

struct WrapPreview_C_SwitchErebusLighting final
{
public:
	bool                                          Visibility;
};
static_assert(alignof(WrapPreview_C_SwitchErebusLighting) == 0x000001, "Wrong alignment on WrapPreview_C_SwitchErebusLighting");
static_assert(sizeof(WrapPreview_C_SwitchErebusLighting) == 0x000001, "Wrong size on WrapPreview_C_SwitchErebusLighting");
static_assert(offsetof(WrapPreview_C_SwitchErebusLighting, Visibility) == 0x000000, "Member 'WrapPreview_C_SwitchErebusLighting::Visibility' has a wrong offset!");

struct WrapPreview_C_OnPreviewVisualsSpawned final
{
public:
	bool                                          bUseSecondaryTransitionEffects;
	bool                                          bShowFloor;
};
static_assert(alignof(WrapPreview_C_OnPreviewVisualsSpawned) == 0x000001, "Wrong alignment on WrapPreview_C_OnPreviewVisualsSpawned");
static_assert(sizeof(WrapPreview_C_OnPreviewVisualsSpawned) == 0x000002, "Wrong size on WrapPreview_C_OnPreviewVisualsSpawned");
static_assert(offsetof(WrapPreview_C_OnPreviewVisualsSpawned, bUseSecondaryTransitionEffects) == 0x000000, "Member 'WrapPreview_C_OnPreviewVisualsSpawned::bUseSecondaryTransitionEffects' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_OnPreviewVisualsSpawned, bShowFloor) == 0x000001, "Member 'WrapPreview_C_OnPreviewVisualsSpawned::bShowFloor' has a wrong offset!");

struct WrapPreview_C_LightControl final
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
static_assert(alignof(WrapPreview_C_LightControl) == 0x000008, "Wrong alignment on WrapPreview_C_LightControl");
static_assert(sizeof(WrapPreview_C_LightControl) == 0x000028, "Wrong size on WrapPreview_C_LightControl");
static_assert(offsetof(WrapPreview_C_LightControl, Active) == 0x000000, "Member 'WrapPreview_C_LightControl::Active' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_IsErebus_ReturnValue) == 0x000001, "Member 'WrapPreview_C_LightControl::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_GetFortGameUserSettings_ReturnValue) == 0x000008, "Member 'WrapPreview_C_LightControl::CallFunc_GetFortGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_IsMobileGame_ReturnValue) == 0x000010, "Member 'WrapPreview_C_LightControl::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_IsInPerformanceMode_ReturnValue) == 0x000011, "Member 'WrapPreview_C_LightControl::CallFunc_IsInPerformanceMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'WrapPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_1) == 0x000013, "Member 'WrapPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_IsErebus_ReturnValue_1) == 0x000014, "Member 'WrapPreview_C_LightControl::CallFunc_IsErebus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_GetGameUserSettings_ReturnValue) == 0x000018, "Member 'WrapPreview_C_LightControl::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_GetShadowQuality_ReturnValue) == 0x000020, "Member 'WrapPreview_C_LightControl::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'WrapPreview_C_LightControl::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_2) == 0x000025, "Member 'WrapPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_LightControl, CallFunc_BooleanOR_ReturnValue_3) == 0x000026, "Member 'WrapPreview_C_LightControl::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

struct WrapPreview_C_SetFloorEnabled final
{
public:
	bool                                          Floor_Enabled;
};
static_assert(alignof(WrapPreview_C_SetFloorEnabled) == 0x000001, "Wrong alignment on WrapPreview_C_SetFloorEnabled");
static_assert(sizeof(WrapPreview_C_SetFloorEnabled) == 0x000001, "Wrong size on WrapPreview_C_SetFloorEnabled");
static_assert(offsetof(WrapPreview_C_SetFloorEnabled, Floor_Enabled) == 0x000000, "Member 'WrapPreview_C_SetFloorEnabled::Floor_Enabled' has a wrong offset!");

struct WrapPreview_C_HandleLightingScale final
{
public:
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2;
	uint8                                         Pad_A4[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3;
	uint8                                         Pad_B4[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4;
	uint8                                         Pad_C4[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5;
	uint8                                         Pad_D4[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6;
	uint8                                         Pad_E4[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7;
	uint8                                         Pad_F4[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8;
	uint8                                         Pad_104[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9;
	float                                         CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9;
};
static_assert(alignof(WrapPreview_C_HandleLightingScale) == 0x000008, "Wrong alignment on WrapPreview_C_HandleLightingScale");
static_assert(sizeof(WrapPreview_C_HandleLightingScale) == 0x000118, "Wrong size on WrapPreview_C_HandleLightingScale");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000000, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000008, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000010, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000018, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000020, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000028, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_6) == 0x000030, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_7) == 0x000038, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_8) == 0x000040, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_ReturnValue_9) == 0x000048, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000050, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000088, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000090, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast) == 0x000098, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1) == 0x00009C, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2) == 0x0000A0, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3) == 0x0000A8, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3) == 0x0000B0, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4) == 0x0000B8, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4) == 0x0000C0, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5) == 0x0000C8, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5) == 0x0000D0, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6) == 0x0000D8, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6) == 0x0000E0, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7) == 0x0000E8, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7) == 0x0000F0, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8) == 0x0000F8, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8) == 0x000100, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_8' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9) == 0x000108, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_HandleLightingScale, CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9) == 0x000110, "Member 'WrapPreview_C_HandleLightingScale::CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast_9' has a wrong offset!");

struct WrapPreview_C_ExecuteUbergraph_WrapPreview final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;
	int32                                         CallFunc_GetShadowQuality_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_2D[0x3];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	class UMaterialInterface*                     K2Node_Event_InMaterialInstance;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          K2Node_Event_bUseSecondaryTransitionEffects;
	bool                                          K2Node_Event_bShowFloor;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_63[0x5];
	class UFortGameUserSettings*                  CallFunc_GetFortGameUserSettings_ReturnValue;
	bool                                          CallFunc_IsInPerformanceMode_ReturnValue;
	uint8                                         Pad_71[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          K2Node_Event_bEnableAutotestBackground;
	uint8                                         Pad_82[0x6];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
};
static_assert(alignof(WrapPreview_C_ExecuteUbergraph_WrapPreview) == 0x000008, "Wrong alignment on WrapPreview_C_ExecuteUbergraph_WrapPreview");
static_assert(sizeof(WrapPreview_C_ExecuteUbergraph_WrapPreview) == 0x000098, "Wrong size on WrapPreview_C_ExecuteUbergraph_WrapPreview");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, EntryPoint) == 0x000000, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_GetGameUserSettings_ReturnValue) == 0x000020, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_GetShadowQuality_ReturnValue) == 0x000028, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_GetShadowQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000048, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, K2Node_Event_InMaterialInstance) == 0x000050, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::K2Node_Event_InMaterialInstance' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000058, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, K2Node_Event_bUseSecondaryTransitionEffects) == 0x000060, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::K2Node_Event_bUseSecondaryTransitionEffects' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, K2Node_Event_bShowFloor) == 0x000061, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::K2Node_Event_bShowFloor' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_IsMobileGame_ReturnValue) == 0x000062, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_GetFortGameUserSettings_ReturnValue) == 0x000068, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_GetFortGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_IsInPerformanceMode_ReturnValue) == 0x000070, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_IsInPerformanceMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_BooleanOR_ReturnValue) == 0x000080, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, K2Node_Event_bEnableAutotestBackground) == 0x000081, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::K2Node_Event_bEnableAutotestBackground' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000088, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_IsErebus_ReturnValue) == 0x000090, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_BooleanOR_ReturnValue_1) == 0x000091, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WrapPreview_C_ExecuteUbergraph_WrapPreview, CallFunc_BooleanOR_ReturnValue_2) == 0x000092, "Member 'WrapPreview_C_ExecuteUbergraph_WrapPreview::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

}
