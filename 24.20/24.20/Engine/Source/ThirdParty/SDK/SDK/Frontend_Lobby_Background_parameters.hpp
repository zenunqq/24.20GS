#pragma once

#include "Basic.hpp"

#include "FrontendBackgroundData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FrontendFXData_structs.hpp"

namespace SDK::Params
{

struct Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature final
{
public:
	class FString                                 PresetEnvironmentName;
};
static_assert(alignof(Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");
static_assert(sizeof(Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature");
static_assert(offsetof(Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature, PresetEnvironmentName) == 0x000000, "Member 'Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature::PresetEnvironmentName' has a wrong offset!");

struct Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature final
{
public:
	class UTexture*                               BackgroundImage;
};
static_assert(alignof(Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");
static_assert(sizeof(Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature) == 0x000008, "Wrong size on Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature");
static_assert(offsetof(Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature, BackgroundImage) == 0x000000, "Member 'Frontend_Lobby_Background_C_BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature::BackgroundImage' has a wrong offset!");

struct Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature final
{
public:
	struct FFrontendLobbyData                     LobbyData;
};
static_assert(alignof(Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature");
static_assert(sizeof(Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature) == 0x000090, "Wrong size on Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature");
static_assert(offsetof(Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature, LobbyData) == 0x000000, "Member 'Frontend_Lobby_Background_C_BndEvt__Frontend_Lobby_Background_CMSLobbyDirector_3_K2Node_ActorBoundEvent_2_OnLobbyDataChanged__DelegateSignature::LobbyData' has a wrong offset!");

struct Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data final
{
public:
	struct FFrontendBackgroundData                Legacy_Frontend_Background_Data;
	struct FFrontendLobbyData                     Frontend_Lobby_Data;
	TArray<struct FFrontendLobbyFXData>           ConvertedFrontendLobbyFXData;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_138[0x8];
	struct FFrontendFXData                        CallFunc_Array_Get_Item;
	struct FFrontendLobbyFXData                   K2Node_MakeStruct_FrontendLobbyFXData;
	struct FFrontendLobbyData                     K2Node_MakeStruct_FrontendLobbyData;
	TArray<struct FFrontendLobbyFXData>           K2Node_MakeArray_Array;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_305[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data) == 0x000010, "Wrong alignment on Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data");
static_assert(sizeof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data) == 0x000310, "Wrong size on Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, Legacy_Frontend_Background_Data) == 0x000000, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::Legacy_Frontend_Background_Data' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, Frontend_Lobby_Data) == 0x000090, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::Frontend_Lobby_Data' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, ConvertedFrontendLobbyFXData) == 0x000120, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::ConvertedFrontendLobbyFXData' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, Temp_int_Array_Index_Variable) == 0x000130, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, CallFunc_Array_Length_ReturnValue) == 0x000134, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, CallFunc_Array_Get_Item) == 0x000140, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, K2Node_MakeStruct_FrontendLobbyFXData) == 0x0001D0, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::K2Node_MakeStruct_FrontendLobbyFXData' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, K2Node_MakeStruct_FrontendLobbyData) == 0x000260, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::K2Node_MakeStruct_FrontendLobbyData' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, K2Node_MakeArray_Array) == 0x0002F0, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, Temp_int_Loop_Counter_Variable) == 0x000300, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, CallFunc_Less_IntInt_ReturnValue) == 0x000304, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data, CallFunc_Add_IntInt_ReturnValue) == 0x000308, "Member 'Frontend_Lobby_Background_C_Convert_Legacy_Frontend_Background_Data::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FFrontendLobbyData                     K2Node_ActorBoundEvent_LobbyData;
	class UObject*                                Temp_object_Variable;
	class UMaterialInstance*                      K2Node_DynamicCast_AsMaterial_Instance;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_A9[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable_1;
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_C9[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	class FString                                 K2Node_ActorBoundEvent_PresetEnvironmentName;
	class UTexture*                               K2Node_ActorBoundEvent_BackgroundImage;
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	class UObject*                                Temp_object_Variable_2;
	bool                                          K2Node_SwitchString_CmpSuccess;
	uint8                                         Pad_F9[0x7];
	class UMaterialInstance*                      K2Node_DynamicCast_AsMaterial_Instance_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_109[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded_2;
	class UObject*                                Temp_object_Variable_3;
	class UTexture*                               K2Node_DynamicCast_AsTexture;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_129[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded_3;
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_1;
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	uint8                                         Pad_14C[0x4];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_16C[0x4];
	TSoftObjectPtr<class UTexture>                K2Node_CustomEvent_InTexture;
	TSoftObjectPtr<class UMaterialInstance>       K2Node_CustomEvent_InMaterial;
	TSoftObjectPtr<class UMaterialInstance>       K2Node_CustomEvent_InPreBlurMaterial;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_206[0x2];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_21C[0x4];
	struct FFrontendBackgroundData                CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_2B1[0x7];
	struct FFrontendBackgroundData                CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	uint8                                         Pad_349[0x7];
	struct FFrontendFXData                        CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_3E6[0x2];
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class ANiagaraActor*                          CallFunc_FinishSpawningActor_ReturnValue;
	double                                        K2Node_VariableSet_FadeGrid_ImplicitCast;
	double                                        K2Node_VariableSet_FadetoBlackFloor_ImplicitCast;
	double                                        CallFunc_UpdateFade_FadeValue_ImplicitCast;
	double                                        CallFunc_UpdateFade_FadeValue_ImplicitCast_1;
	double                                        CallFunc_Setup_Basic_Background_Data_InFadeGridTargetValue_ImplicitCast;
	double                                        CallFunc_Setup_Basic_Background_Data_InFadeToBlackFloorTargetValue_ImplicitCast;
};
static_assert(alignof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background) == 0x000010, "Wrong alignment on Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background");
static_assert(sizeof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background) == 0x000430, "Wrong size on Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, EntryPoint) == 0x000000, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::EntryPoint' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_ActorBoundEvent_LobbyData) == 0x000008, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_ActorBoundEvent_LobbyData' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_object_Variable) == 0x000098, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_AsMaterial_Instance) == 0x0000A0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_AsMaterial_Instance' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_Loaded) == 0x0000B0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_object_Variable_1) == 0x0000B8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_AsNiagara_System) == 0x0000C0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_bSuccess_1) == 0x0000C8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_GetScalarParameterValue_ReturnValue) == 0x0000CC, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_ActorBoundEvent_PresetEnvironmentName) == 0x0000D0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_ActorBoundEvent_PresetEnvironmentName' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_ActorBoundEvent_BackgroundImage) == 0x0000E0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_ActorBoundEvent_BackgroundImage' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_Loaded_1) == 0x0000E8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_object_Variable_2) == 0x0000F0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_SwitchString_CmpSuccess) == 0x0000F8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_AsMaterial_Instance_1) == 0x000100, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_AsMaterial_Instance_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_bSuccess_2) == 0x000108, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_Loaded_2) == 0x000110, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_object_Variable_3) == 0x000118, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_AsTexture) == 0x000120, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_AsTexture' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_DynamicCast_bSuccess_3) == 0x000128, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_Loaded_3) == 0x000130, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_Loaded_3' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_GetScalarParameterValue_ReturnValue_1) == 0x000138, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_GetScalarParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_MakeColor_ReturnValue) == 0x00013C, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000150, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000158, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CreateDelegate_OutputDelegate) == 0x000160, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_InTexture) == 0x000170, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_InTexture' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_InMaterial) == 0x000198, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_InMaterial' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CustomEvent_InPreBlurMaterial) == 0x0001C0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CustomEvent_InPreBlurMaterial' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001E8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001F4, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_int_Array_Index_Variable) == 0x000200, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_bool_Variable) == 0x000204, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Not_PreBool_ReturnValue) == 0x000205, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_CreateDelegate_OutputDelegate_3) == 0x000208, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, Temp_int_Loop_Counter_Variable) == 0x000214, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Add_IntInt_ReturnValue) == 0x000218, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Map_Find_Value) == 0x000220, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Map_Find_ReturnValue) == 0x0002B0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Map_Find_Value_1) == 0x0002B8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Map_Find_ReturnValue_1) == 0x000348, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Array_Get_Item) == 0x000350, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Array_Length_ReturnValue) == 0x0003E0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Less_IntInt_ReturnValue) == 0x0003E4, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0003E5, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0003E8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_FinishSpawningActor_ReturnValue) == 0x0003F0, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_VariableSet_FadeGrid_ImplicitCast) == 0x0003F8, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_VariableSet_FadeGrid_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, K2Node_VariableSet_FadetoBlackFloor_ImplicitCast) == 0x000400, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::K2Node_VariableSet_FadetoBlackFloor_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_UpdateFade_FadeValue_ImplicitCast) == 0x000408, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_UpdateFade_FadeValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_UpdateFade_FadeValue_ImplicitCast_1) == 0x000410, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_UpdateFade_FadeValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Setup_Basic_Background_Data_InFadeGridTargetValue_ImplicitCast) == 0x000418, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Setup_Basic_Background_Data_InFadeGridTargetValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background, CallFunc_Setup_Basic_Background_Data_InFadeToBlackFloorTargetValue_ImplicitCast) == 0x000420, "Member 'Frontend_Lobby_Background_C_ExecuteUbergraph_Frontend_Lobby_Background::CallFunc_Setup_Basic_Background_Data_InFadeToBlackFloorTargetValue_ImplicitCast' has a wrong offset!");

struct Frontend_Lobby_Background_C_LoadAssets final
{
public:
	TSoftObjectPtr<class UTexture>                InTexture;
	TSoftObjectPtr<class UMaterialInstance>       InMaterial;
	TSoftObjectPtr<class UMaterialInstance>       InPreBlurMaterial;
};
static_assert(alignof(Frontend_Lobby_Background_C_LoadAssets) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_LoadAssets");
static_assert(sizeof(Frontend_Lobby_Background_C_LoadAssets) == 0x000078, "Wrong size on Frontend_Lobby_Background_C_LoadAssets");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadAssets, InTexture) == 0x000000, "Member 'Frontend_Lobby_Background_C_LoadAssets::InTexture' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadAssets, InMaterial) == 0x000028, "Member 'Frontend_Lobby_Background_C_LoadAssets::InMaterial' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadAssets, InPreBlurMaterial) == 0x000050, "Member 'Frontend_Lobby_Background_C_LoadAssets::InPreBlurMaterial' has a wrong offset!");

struct Frontend_Lobby_Background_C_LoadBackgroundData final
{
public:
	TSoftObjectPtr<class UMaterialInstance>       LocalMaterialPreBlur;
	TSoftObjectPtr<class UMaterialInstance>       LocalMaterial;
	TSoftObjectPtr<class UTexture>                LocalTexture;
	struct FFrontendBackgroundData                CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_LoadBackgroundData) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_LoadBackgroundData");
static_assert(sizeof(Frontend_Lobby_Background_C_LoadBackgroundData) == 0x000110, "Wrong size on Frontend_Lobby_Background_C_LoadBackgroundData");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadBackgroundData, LocalMaterialPreBlur) == 0x000000, "Member 'Frontend_Lobby_Background_C_LoadBackgroundData::LocalMaterialPreBlur' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadBackgroundData, LocalMaterial) == 0x000028, "Member 'Frontend_Lobby_Background_C_LoadBackgroundData::LocalMaterial' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadBackgroundData, LocalTexture) == 0x000050, "Member 'Frontend_Lobby_Background_C_LoadBackgroundData::LocalTexture' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadBackgroundData, CallFunc_Map_Find_Value) == 0x000078, "Member 'Frontend_Lobby_Background_C_LoadBackgroundData::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_LoadBackgroundData, CallFunc_Map_Find_ReturnValue) == 0x000108, "Member 'Frontend_Lobby_Background_C_LoadBackgroundData::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70");
static_assert(sizeof(Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70) == 0x000008, "Wrong size on Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70");
static_assert(offsetof(Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70, Loaded) == 0x000000, "Member 'Frontend_Lobby_Background_C_OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70::Loaded' has a wrong offset!");

struct Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3");
static_assert(sizeof(Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3) == 0x000008, "Wrong size on Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3");
static_assert(offsetof(Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3, Loaded) == 0x000000, "Member 'Frontend_Lobby_Background_C_OnLoaded_7B16DAE04937EECB604410A2EC352CE3::Loaded' has a wrong offset!");

struct Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99");
static_assert(sizeof(Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99) == 0x000008, "Wrong size on Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99");
static_assert(offsetof(Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99, Loaded) == 0x000000, "Member 'Frontend_Lobby_Background_C_OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99::Loaded' has a wrong offset!");

struct Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775");
static_assert(sizeof(Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775) == 0x000008, "Wrong size on Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775");
static_assert(offsetof(Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775, Loaded) == 0x000000, "Member 'Frontend_Lobby_Background_C_OnLoaded_E5F1E80A4DD36718D41FF68F137C4775::Loaded' has a wrong offset!");

struct Frontend_Lobby_Background_C_SetShowPedestalSparkles final
{
public:
	bool                                          Show;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TArray<class ATeamMemberPedestal_C*>          CallFunc_GetAllActorsOfClass_OutActors;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_24[0x4];
	class ATeamMemberPedestal_C*                  CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_SetShowPedestalSparkles) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_SetShowPedestalSparkles");
static_assert(sizeof(Frontend_Lobby_Background_C_SetShowPedestalSparkles) == 0x000038, "Wrong size on Frontend_Lobby_Background_C_SetShowPedestalSparkles");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, Show) == 0x000000, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::Show' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, CallFunc_GetAllActorsOfClass_OutActors) == 0x000010, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, CallFunc_Array_Get_Item) == 0x000028, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetShowPedestalSparkles, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'Frontend_Lobby_Background_C_SetShowPedestalSparkles::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_Setup_Basic_Background_Data final
{
public:
	bool                                          EnableRealtimeUpdate;
	uint8                                         Pad_1[0x7];
	double                                        InFadeGridTargetValue;
	double                                        InFadeToBlackFloorTargetValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_Setup_Basic_Background_Data) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_Setup_Basic_Background_Data");
static_assert(sizeof(Frontend_Lobby_Background_C_Setup_Basic_Background_Data) == 0x000018, "Wrong size on Frontend_Lobby_Background_C_Setup_Basic_Background_Data");
static_assert(offsetof(Frontend_Lobby_Background_C_Setup_Basic_Background_Data, EnableRealtimeUpdate) == 0x000000, "Member 'Frontend_Lobby_Background_C_Setup_Basic_Background_Data::EnableRealtimeUpdate' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Setup_Basic_Background_Data, InFadeGridTargetValue) == 0x000008, "Member 'Frontend_Lobby_Background_C_Setup_Basic_Background_Data::InFadeGridTargetValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_Setup_Basic_Background_Data, InFadeToBlackFloorTargetValue) == 0x000010, "Member 'Frontend_Lobby_Background_C_Setup_Basic_Background_Data::InFadeToBlackFloorTargetValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget final
{
public:
	bool                                          EnableRealtimeUpdate;
	uint8                                         Pad_1[0x7];
	double                                        InFadeGridTargetValue;
	double                                        InFadeToBlackFloorTargetValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget");
static_assert(sizeof(Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget) == 0x000018, "Wrong size on Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget, EnableRealtimeUpdate) == 0x000000, "Member 'Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget::EnableRealtimeUpdate' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget, InFadeGridTargetValue) == 0x000008, "Member 'Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget::InFadeGridTargetValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget, InFadeToBlackFloorTargetValue) == 0x000010, "Member 'Frontend_Lobby_Background_C_SetupBasicBackgroundDataWithRenderTarget::InFadeToBlackFloorTargetValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData final
{
public:
	bool                                          EnableRealtimeUpdate;
	uint8                                         Pad_1[0x7];
	double                                        InFadeGridTargetValue;
	double                                        InFadeToBlackFloorTargetValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData");
static_assert(sizeof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData) == 0x000018, "Wrong size on Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData, EnableRealtimeUpdate) == 0x000000, "Member 'Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData::EnableRealtimeUpdate' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData, InFadeGridTargetValue) == 0x000008, "Member 'Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData::InFadeGridTargetValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData, InFadeToBlackFloorTargetValue) == 0x000010, "Member 'Frontend_Lobby_Background_C_SetupSpecialEventBackgroundData::InFadeToBlackFloorTargetValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget final
{
public:
	bool                                          EnableRealtimeUpdate;
	uint8                                         Pad_1[0x7];
	double                                        InFadeGridTargetValue;
	double                                        InFadeToBlackFloorTargetValue;
};
static_assert(alignof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget");
static_assert(sizeof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget) == 0x000018, "Wrong size on Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget, EnableRealtimeUpdate) == 0x000000, "Member 'Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget::EnableRealtimeUpdate' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget, InFadeGridTargetValue) == 0x000008, "Member 'Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget::InFadeGridTargetValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget, InFadeToBlackFloorTargetValue) == 0x000010, "Member 'Frontend_Lobby_Background_C_SetupSpecialEventBackgroundDataWithRenderTarget::InFadeToBlackFloorTargetValue' has a wrong offset!");

struct Frontend_Lobby_Background_C_UpdateFade final
{
public:
	double                                        FadeValue;
	double                                        FadeFloorToBlack;
	double                                        InFadeGrid;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
};
static_assert(alignof(Frontend_Lobby_Background_C_UpdateFade) == 0x000008, "Wrong alignment on Frontend_Lobby_Background_C_UpdateFade");
static_assert(sizeof(Frontend_Lobby_Background_C_UpdateFade) == 0x000038, "Wrong size on Frontend_Lobby_Background_C_UpdateFade");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, FadeValue) == 0x000000, "Member 'Frontend_Lobby_Background_C_UpdateFade::FadeValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, FadeFloorToBlack) == 0x000008, "Member 'Frontend_Lobby_Background_C_UpdateFade::FadeFloorToBlack' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, InFadeGrid) == 0x000010, "Member 'Frontend_Lobby_Background_C_UpdateFade::InFadeGrid' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'Frontend_Lobby_Background_C_UpdateFade::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, CallFunc_Lerp_ReturnValue_1) == 0x000020, "Member 'Frontend_Lobby_Background_C_UpdateFade::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000028, "Member 'Frontend_Lobby_Background_C_UpdateFade::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1) == 0x00002C, "Member 'Frontend_Lobby_Background_C_UpdateFade::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_Background_C_UpdateFade, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2) == 0x000030, "Member 'Frontend_Lobby_Background_C_UpdateFade::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2' has a wrong offset!");

}
