#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCN_RezOut_C_Clean_Up_Teleportation_Light final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GCN_RezOut_C_Clean_Up_Teleportation_Light) == 0x000001, "Wrong alignment on GCN_RezOut_C_Clean_Up_Teleportation_Light");
static_assert(sizeof(GCN_RezOut_C_Clean_Up_Teleportation_Light) == 0x000001, "Wrong size on GCN_RezOut_C_Clean_Up_Teleportation_Light");
static_assert(offsetof(GCN_RezOut_C_Clean_Up_Teleportation_Light, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GCN_RezOut_C_Clean_Up_Teleportation_Light::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GCN_RezOut_C_Dissolve_Material_Setup final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Variable;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
};
static_assert(alignof(GCN_RezOut_C_Dissolve_Material_Setup) == 0x000008, "Wrong alignment on GCN_RezOut_C_Dissolve_Material_Setup");
static_assert(sizeof(GCN_RezOut_C_Dissolve_Material_Setup) == 0x000040, "Wrong size on GCN_RezOut_C_Dissolve_Material_Setup");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, Temp_int_Array_Index_Variable) == 0x000008, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, Temp_int_Variable) == 0x00000C, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_Array_Get_Item) == 0x000010, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_GetNumMaterials_ReturnValue) == 0x00002C, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Dissolve_Material_Setup, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'GCN_RezOut_C_Dissolve_Material_Setup::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

struct GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TArray<class UMaterialInstanceDynamic*>       K2Node_MakeArray_Array;
	TSoftObjectPtr<class UMaterialInterface>      CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	TArray<class USkeletalMeshComponent*>         CallFunc_Set_ToArray_Result;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UFXSystemComponent*>             K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_161[0x7];
	class UNiagaraComponent*                      K2Node_CustomEvent_Spawned_Death_FX;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UNiagaraComponent*                      K2Node_CustomEvent_Drone_FX;
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_195[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_19C[0x4];
	class USceneComponent*                        CallFunc_Array_Get_Item;
	class UFXSystemComponent*                     K2Node_DynamicCast_AsFXSystem_Component;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1B1[0x7];
	TArray<class UMaterialInstanceDynamic*>       K2Node_MakeArray_Array_1;
	struct FGuid                                  CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue;
	float                                         CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut) == 0x000008, "Wrong alignment on GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut");
static_assert(sizeof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut) == 0x0001E0, "Wrong size on GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, EntryPoint) == 0x000000, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_MakeArray_Array) == 0x000008, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000018, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Set_ToArray_Result) == 0x000040, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_Event_MyTarget) == 0x000050, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_Event_Parameters) == 0x000058, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_Event_ParticleComponents) == 0x000128, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_Event_AudioComponents) == 0x000138, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_Event_BurstCameraShakeInstance) == 0x000148, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_Event_BurstDecalInstance) == 0x000150, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000158, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_CustomEvent_Spawned_Death_FX) == 0x000168, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_CustomEvent_Spawned_Death_FX' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, Temp_int_Loop_Counter_Variable) == 0x000170, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Add_IntInt_ReturnValue) == 0x000174, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_CustomEvent_Drone_FX) == 0x000178, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_CustomEvent_Drone_FX' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_GetChildrenComponents_Children) == 0x000180, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Less_IntInt_ReturnValue) == 0x000194, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, Temp_int_Array_Index_Variable) == 0x000198, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_DynamicCast_AsFXSystem_Component) == 0x0001A8, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_DynamicCast_AsFXSystem_Component' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, K2Node_MakeArray_Array_1) == 0x0001B8, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue) == 0x0001C8, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_BP_ApplyMaterialOverrideLocalWithFlags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast) == 0x0001D8, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_UpdateDissolveFx_MaxLightIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut, CallFunc_Delay_Duration_ImplicitCast) == 0x0001DC, "Member 'GCN_RezOut_C_ExecuteUbergraph_GCN_RezOut::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct GCN_RezOut_C_Play_Elmination_AnimMontage final
{
public:
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	bool                                          CallFunc_IsSkydiving_ReturnValue;
	bool                                          CallFunc_WasDBNOOnDeath_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	class UAnimMontage*                           K2Node_Select_Default;
	class UAnimMontage*                           K2Node_Select_Default_1;
	class UAnimMontage*                           K2Node_Select_Default_2;
	class UAnimMontage*                           K2Node_Select_Default_3;
	float                                         CallFunc_PlayLocalAnimMontage_ReturnValue;
};
static_assert(alignof(GCN_RezOut_C_Play_Elmination_AnimMontage) == 0x000008, "Wrong alignment on GCN_RezOut_C_Play_Elmination_AnimMontage");
static_assert(sizeof(GCN_RezOut_C_Play_Elmination_AnimMontage) == 0x000030, "Wrong size on GCN_RezOut_C_Play_Elmination_AnimMontage");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, Temp_bool_Variable) == 0x000000, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, Temp_bool_Variable_1) == 0x000001, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, Temp_bool_Variable_2) == 0x000002, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, Temp_bool_Variable_3) == 0x000003, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000004, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, CallFunc_IsSkydiving_ReturnValue) == 0x000005, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, CallFunc_WasDBNOOnDeath_ReturnValue) == 0x000006, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::CallFunc_WasDBNOOnDeath_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, CallFunc_BooleanAND_ReturnValue) == 0x000007, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, K2Node_Select_Default) == 0x000008, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, K2Node_Select_Default_1) == 0x000010, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, K2Node_Select_Default_2) == 0x000018, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, K2Node_Select_Default_3) == 0x000020, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Play_Elmination_AnimMontage, CallFunc_PlayLocalAnimMontage_ReturnValue) == 0x000028, "Member 'GCN_RezOut_C_Play_Elmination_AnimMontage::CallFunc_PlayLocalAnimMontage_ReturnValue' has a wrong offset!");

struct GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX final
{
public:
	class UNiagaraComponent*                      Drone_FX;
};
static_assert(alignof(GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX) == 0x000008, "Wrong alignment on GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX");
static_assert(sizeof(GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX) == 0x000008, "Wrong size on GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX");
static_assert(offsetof(GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX, Drone_FX) == 0x000000, "Member 'GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX::Drone_FX' has a wrong offset!");

struct GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX final
{
public:
	class UNiagaraComponent*                      Spawned_Death_FX;
};
static_assert(alignof(GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX) == 0x000008, "Wrong alignment on GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX");
static_assert(sizeof(GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX) == 0x000008, "Wrong size on GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX");
static_assert(offsetof(GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX, Spawned_Death_FX) == 0x000000, "Member 'GCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX::Spawned_Death_FX' has a wrong offset!");

struct GCN_RezOut_C_Set_Timeline_Playrates final
{
public:
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast_1;
};
static_assert(alignof(GCN_RezOut_C_Set_Timeline_Playrates) == 0x000004, "Wrong alignment on GCN_RezOut_C_Set_Timeline_Playrates");
static_assert(sizeof(GCN_RezOut_C_Set_Timeline_Playrates) == 0x000008, "Wrong size on GCN_RezOut_C_Set_Timeline_Playrates");
static_assert(offsetof(GCN_RezOut_C_Set_Timeline_Playrates, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000000, "Member 'GCN_RezOut_C_Set_Timeline_Playrates::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Set_Timeline_Playrates, CallFunc_SetPlayRate_NewRate_ImplicitCast_1) == 0x000004, "Member 'GCN_RezOut_C_Set_Timeline_Playrates::CallFunc_SetPlayRate_NewRate_ImplicitCast_1' has a wrong offset!");

struct GCN_RezOut_C_Spawn_Dissolve_VFX final
{
public:
	struct FVector                                Temp_struct_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_39[0x7];
	struct FVector                                K2Node_Select_Default;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;
};
static_assert(alignof(GCN_RezOut_C_Spawn_Dissolve_VFX) == 0x000008, "Wrong alignment on GCN_RezOut_C_Spawn_Dissolve_VFX");
static_assert(sizeof(GCN_RezOut_C_Spawn_Dissolve_VFX) == 0x000078, "Wrong size on GCN_RezOut_C_Spawn_Dissolve_VFX");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, Temp_struct_Variable) == 0x000000, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, CallFunc_GetSocketLocation_ReturnValue) == 0x000020, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, Temp_bool_Variable) == 0x000038, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, K2Node_Select_Default) == 0x000040, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000058, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Dissolve_VFX, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000070, "Member 'GCN_RezOut_C_Spawn_Dissolve_VFX::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");

struct GCN_RezOut_C_Spawn_Drone_VFX final
{
public:
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;
};
static_assert(alignof(GCN_RezOut_C_Spawn_Drone_VFX) == 0x000008, "Wrong alignment on GCN_RezOut_C_Spawn_Drone_VFX");
static_assert(sizeof(GCN_RezOut_C_Spawn_Drone_VFX) == 0x000008, "Wrong size on GCN_RezOut_C_Spawn_Drone_VFX");
static_assert(offsetof(GCN_RezOut_C_Spawn_Drone_VFX, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000000, "Member 'GCN_RezOut_C_Spawn_Drone_VFX::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

struct GCN_RezOut_C_Spawn_Teleportation_Drone final
{
public:
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_72[0x6];
	class ABP_TeleportationDrone_C*               CallFunc_FinishSpawningActor_ReturnValue;
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;
};
static_assert(alignof(GCN_RezOut_C_Spawn_Teleportation_Drone) == 0x000010, "Wrong alignment on GCN_RezOut_C_Spawn_Teleportation_Drone");
static_assert(sizeof(GCN_RezOut_C_Spawn_Teleportation_Drone) == 0x000090, "Wrong size on GCN_RezOut_C_Spawn_Teleportation_Drone");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000000, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_GetContext_ReturnValue) == 0x000060, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000068, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_IsInZone_ReturnValue) == 0x000070, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_Not_PreBool_ReturnValue) == 0x000071, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Drone, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x000080, "Member 'GCN_RezOut_C_Spawn_Teleportation_Drone::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");

struct GCN_RezOut_C_Spawn_Teleportation_Light final
{
public:
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	uint8                                         Pad_38[0x8];
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	uint8                                         Pad_A1[0x7];
	class UPointLightComponent*                   CallFunc_AddComponent_ReturnValue;
};
static_assert(alignof(GCN_RezOut_C_Spawn_Teleportation_Light) == 0x000010, "Wrong alignment on GCN_RezOut_C_Spawn_Teleportation_Light");
static_assert(sizeof(GCN_RezOut_C_Spawn_Teleportation_Light) == 0x0000B0, "Wrong size on GCN_RezOut_C_Spawn_Teleportation_Light");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Light, CallFunc_GetSocketLocation_ReturnValue) == 0x000000, "Member 'GCN_RezOut_C_Spawn_Teleportation_Light::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Light, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'GCN_RezOut_C_Spawn_Teleportation_Light::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Light, CallFunc_Add_VectorVector_ReturnValue) == 0x000020, "Member 'GCN_RezOut_C_Spawn_Teleportation_Light::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Light, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000040, "Member 'GCN_RezOut_C_Spawn_Teleportation_Light::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Light, CallFunc_IsMobilePlatform_ReturnValue) == 0x0000A0, "Member 'GCN_RezOut_C_Spawn_Teleportation_Light::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Spawn_Teleportation_Light, CallFunc_AddComponent_ReturnValue) == 0x0000A8, "Member 'GCN_RezOut_C_Spawn_Teleportation_Light::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

struct GCN_RezOut_C_Stop_Looping_Audio final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GCN_RezOut_C_Stop_Looping_Audio) == 0x000001, "Wrong alignment on GCN_RezOut_C_Stop_Looping_Audio");
static_assert(sizeof(GCN_RezOut_C_Stop_Looping_Audio) == 0x000002, "Wrong size on GCN_RezOut_C_Stop_Looping_Audio");
static_assert(offsetof(GCN_RezOut_C_Stop_Looping_Audio, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GCN_RezOut_C_Stop_Looping_Audio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_Stop_Looping_Audio, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'GCN_RezOut_C_Stop_Looping_Audio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct GCN_RezOut_C_OnBurstGeneric final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UFXSystemComponent*>             ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_RezOut_C_OnBurstGeneric) == 0x000008, "Wrong alignment on GCN_RezOut_C_OnBurstGeneric");
static_assert(sizeof(GCN_RezOut_C_OnBurstGeneric) == 0x000108, "Wrong size on GCN_RezOut_C_OnBurstGeneric");
static_assert(offsetof(GCN_RezOut_C_OnBurstGeneric, MyTarget) == 0x000000, "Member 'GCN_RezOut_C_OnBurstGeneric::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_OnBurstGeneric, Parameters) == 0x000008, "Member 'GCN_RezOut_C_OnBurstGeneric::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_OnBurstGeneric, ParticleComponents) == 0x0000D8, "Member 'GCN_RezOut_C_OnBurstGeneric::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_OnBurstGeneric, AudioComponents) == 0x0000E8, "Member 'GCN_RezOut_C_OnBurstGeneric::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_OnBurstGeneric, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_RezOut_C_OnBurstGeneric::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_RezOut_C_OnBurstGeneric, BurstDecalInstance) == 0x000100, "Member 'GCN_RezOut_C_OnBurstGeneric::BurstDecalInstance' has a wrong offset!");

}
