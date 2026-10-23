#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	float                                         K2Node_Event_DeltaSeconds;
	int32                                         CallFunc_Array_Length_ReturnValue;
	TArray<class UMaterialInstanceDynamic*>       K2Node_CustomEvent_MID_Array;
	TArray<class USkeletalMeshComponent*>         K2Node_CustomEvent_External_MEsh_Component_Array;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_55[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         Temp_int_Array_Index_Variable_2;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_69[0x7];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	TArray<class UMaterialInstanceDynamic*>       CallFunc_External_Mesh_Masked_Setup_Corrected_Mid_Array;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_1D4[0x4];
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_1E9[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_1F1[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_3;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_209[0x3];
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;
	float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;
	uint8                                         Pad_214[0x4];
	double                                        CallFunc_ProcessSpawnInTimeline_ZHeight_ImplicitCast;
	double                                        CallFunc_ProcessSpawnInTimeline_LightIntensity_ImplicitCast;
};
static_assert(alignof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh) == 0x000010, "Wrong alignment on DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh");
static_assert(sizeof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh) == 0x000230, "Wrong size on DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, EntryPoint) == 0x000000, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::EntryPoint' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, Temp_int_Array_Index_Variable) == 0x000004, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, K2Node_CustomEvent_MID_Array) == 0x000030, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::K2Node_CustomEvent_MID_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, K2Node_CustomEvent_External_MEsh_Component_Array) == 0x000040, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::K2Node_CustomEvent_External_MEsh_Component_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, Temp_int_Loop_Counter_Variable_2) == 0x000050, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Add_IntInt_ReturnValue_2) == 0x000058, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, Temp_int_Array_Index_Variable_2) == 0x00005C, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Get_Item) == 0x000060, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000070, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x0000D8, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_External_Mesh_Masked_Setup_Corrected_Mid_Array) == 0x0001B8, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_External_Mesh_Masked_Setup_Corrected_Mid_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Get_Item_2) == 0x0001C8, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Length_ReturnValue_1) == 0x0001D0, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_GetMaterials_ReturnValue) == 0x0001D8, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001E8, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Length_ReturnValue_2) == 0x0001EC, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001F0, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Length_ReturnValue_3) == 0x0001F4, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001F8, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Add_IntInt_ReturnValue_4) == 0x0001FC, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_Array_Get_Item_3) == 0x000200, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_IsValid_ReturnValue_1) == 0x000208, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x00020C, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_SetPlayRate_NewRate_ImplicitCast) == 0x000210, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_SetPlayRate_NewRate_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_ProcessSpawnInTimeline_ZHeight_ImplicitCast) == 0x000218, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_ProcessSpawnInTimeline_ZHeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh, CallFunc_ProcessSpawnInTimeline_LightIntensity_ImplicitCast) == 0x000220, "Member 'DuplicateResOutMesh_C_ExecuteUbergraph_DuplicateResOutMesh::CallFunc_ProcessSpawnInTimeline_LightIntensity_ImplicitCast' has a wrong offset!");

struct DuplicateResOutMesh_C_External_Mesh_Masked_Setup final
{
public:
	TArray<class USkeletalMeshComponent*>         External_MEsh_Component_Array;
	TArray<class UMaterialInstanceDynamic*>       Corrected_Mid_Array;
	int32                                         Increment_MaskedSetup;
	uint8                                         Pad_24[0x4];
	TArray<class UMaterialInstanceDynamic*>       MID_Array_MaskedSetup;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_44[0x4];
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	uint8                                         Pad_74[0x4];
	class UMaterialInterface*                     CallFunc_Array_Get_Item_1;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstance*                      K2Node_DynamicCast_AsMaterial_Instance;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	class UMaterialInstance*                      Temp_object_Variable;
	class UMaterialInstance*                      Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_A9[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	class UMaterialInstance*                      K2Node_Select_Default;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_2;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_3;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_DD[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
};
static_assert(alignof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup) == 0x000008, "Wrong alignment on DuplicateResOutMesh_C_External_Mesh_Masked_Setup");
static_assert(sizeof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup) == 0x0000E8, "Wrong size on DuplicateResOutMesh_C_External_Mesh_Masked_Setup");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, External_MEsh_Component_Array) == 0x000000, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::External_MEsh_Component_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Corrected_Mid_Array) == 0x000010, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Corrected_Mid_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Increment_MaskedSetup) == 0x000020, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Increment_MaskedSetup' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, MID_Array_MaskedSetup) == 0x000028, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::MID_Array_MaskedSetup' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Get_Item) == 0x000048, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_GetMaterials_ReturnValue) == 0x000050, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Length_ReturnValue_2) == 0x000068, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_int_Array_Index_Variable_1) == 0x000070, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000080, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, K2Node_DynamicCast_AsMaterial_Instance) == 0x000088, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::K2Node_DynamicCast_AsMaterial_Instance' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Contains_ReturnValue) == 0x000091, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Contains_ReturnValue_1) == 0x000092, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_BooleanOR_ReturnValue) == 0x000093, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_object_Variable) == 0x000098, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_object_Variable_1) == 0x0000A0, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_bool_Variable) == 0x0000A8, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000AC, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, K2Node_Select_Default) == 0x0000B0, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x0000B8, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C0, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Add_ReturnValue_1) == 0x0000C4, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Get_Item_2) == 0x0000C8, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Array_Get_Item_3) == 0x0000D0, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, Temp_int_Loop_Counter_Variable_1) == 0x0000D8, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000DC, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_External_Mesh_Masked_Setup, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000E0, "Member 'DuplicateResOutMesh_C_External_Mesh_Masked_Setup::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

struct DuplicateResOutMesh_C_Find_Bounds final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_BreakRotIntoAxes_X;
	struct FVector                                CallFunc_BreakRotIntoAxes_Y;
	struct FVector                                CallFunc_BreakRotIntoAxes_Z;
	uint8                                         Pad_148[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;
	uint8                                         Pad_1C8[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;
	struct FTransform                             K2Node_Select_Default;
	struct FVector                                CallFunc_BreakTransform_Location_2;
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;
	struct FVector                                CallFunc_BreakTransform_Scale_2;
	struct FVector                                CallFunc_GetActorBounds_Origin;
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	uint8                                         Pad_328[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;
};
static_assert(alignof(DuplicateResOutMesh_C_Find_Bounds) == 0x000010, "Wrong alignment on DuplicateResOutMesh_C_Find_Bounds");
static_assert(sizeof(DuplicateResOutMesh_C_Find_Bounds) == 0x000390, "Wrong size on DuplicateResOutMesh_C_Find_Bounds");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, Temp_bool_Variable) == 0x000000, "Member 'DuplicateResOutMesh_C_Find_Bounds::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Location) == 0x000008, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Rotation) == 0x000020, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Scale) == 0x000038, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Location_1) == 0x000050, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Rotation_1) == 0x000068, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Scale_1) == 0x000080, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakVector_X) == 0x000098, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakVector_X_1) == 0x0000B0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakVector_Y_1) == 0x0000B8, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakVector_Z_1) == 0x0000C0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_MakeVector_ReturnValue_1) == 0x0000E8, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakRotIntoAxes_X) == 0x000100, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakRotIntoAxes_X' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakRotIntoAxes_Y) == 0x000118, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakRotIntoAxes_Y' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakRotIntoAxes_Z) == 0x000130, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakRotIntoAxes_Z' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_MakeTransform_ReturnValue) == 0x000150, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x0001B0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_MakeTransform_ReturnValue_1) == 0x0001D0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, K2Node_Select_Default) == 0x000230, "Member 'DuplicateResOutMesh_C_Find_Bounds::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Location_2) == 0x000290, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Rotation_2) == 0x0002A8, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_BreakTransform_Scale_2) == 0x0002C0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_GetActorBounds_Origin) == 0x0002D8, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_GetActorBounds_BoxExtent) == 0x0002F0, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_VSize_ReturnValue) == 0x000308, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000310, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Find_Bounds, CallFunc_MakeTransform_ReturnValue_2) == 0x000330, "Member 'DuplicateResOutMesh_C_Find_Bounds::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");

struct DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray final
{
public:
	class APlayerPawn_Athena_Generic_Parent_C*    K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_9[0x7];
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_19[0x7];
	TArray<class USkeletalMeshComponent*>         K2Node_MakeArray_Array;
	class APlayerPawn_Generic_Parent_C*           K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray) == 0x000008, "Wrong alignment on DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray");
static_assert(sizeof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray) == 0x000040, "Wrong size on DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_Parent) == 0x000000, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic_Parent' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_DynamicCast_AsFort_AIPawn) == 0x000010, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_DynamicCast_bSuccess_1) == 0x000018, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_MakeArray_Array) == 0x000020, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent) == 0x000030, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray, K2Node_DynamicCast_bSuccess_2) == 0x000038, "Member 'DuplicateResOutMesh_C_initializeExternalSkeletalMeshArray::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct DuplicateResOutMesh_C_Make_and_slave_internal_meshes final
{
public:
	struct FTransform                             Transform;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_69[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_AddComponent_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;
	uint8                                         Pad_E8[0x8];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_23D[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_244[0x4];
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_2;
	class USkeletalMeshComponent*                 K2Node_Select_Default;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_25D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_264[0x4];
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_3;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
};
static_assert(alignof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes) == 0x000010, "Wrong alignment on DuplicateResOutMesh_C_Make_and_slave_internal_meshes");
static_assert(sizeof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes) == 0x000280, "Wrong size on DuplicateResOutMesh_C_Make_and_slave_internal_meshes");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, Transform) == 0x000000, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::Transform' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, Temp_int_Array_Index_Variable) == 0x000060, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, Temp_int_Variable) == 0x000064, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_MakeTransform_ReturnValue) == 0x000070, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_AddComponent_ReturnValue) == 0x0000D0, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000F0, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000150, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000158, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Length_ReturnValue) == 0x000238, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, Temp_bool_Variable) == 0x00023C, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Add_ReturnValue) == 0x000240, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Get_Item_2) == 0x000248, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, K2Node_Select_Default) == 0x000250, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, Temp_int_Loop_Counter_Variable) == 0x000258, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Less_IntInt_ReturnValue) == 0x00025C, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Add_IntInt_ReturnValue_1) == 0x000260, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Get_Item_3) == 0x000268, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Array_Length_ReturnValue_1) == 0x000270, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_and_slave_internal_meshes, CallFunc_Less_IntInt_ReturnValue_1) == 0x000274, "Member 'DuplicateResOutMesh_C_Make_and_slave_internal_meshes::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

struct DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array final
{
public:
	class USkeletalMeshComponent*                 CurrentExternalSkeletalMeshComponent;
	class UMaterialInstance*                      GunOrCharacterMaterialInstance;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstance*                      Temp_object_Variable;
	int32                                         CallFunc_Array_Add_ReturnValue;
	uint8                                         Pad_4C[0x4];
	class UMaterialInstance*                      Temp_object_Variable_1;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_79[0x7];
	class UMaterialInstance*                      K2Node_Select_Default;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array) == 0x000008, "Wrong alignment on DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array");
static_assert(sizeof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array) == 0x000090, "Wrong size on DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CurrentExternalSkeletalMeshComponent) == 0x000000, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CurrentExternalSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, GunOrCharacterMaterialInstance) == 0x000008, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::GunOrCharacterMaterialInstance' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, Temp_int_Array_Index_Variable) == 0x000018, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, Temp_int_Variable) == 0x00001C, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Array_Get_Item) == 0x000028, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000038, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, Temp_object_Variable) == 0x000040, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Array_Add_ReturnValue) == 0x000048, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, Temp_object_Variable_1) == 0x000050, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_GetMaterial_ReturnValue) == 0x000058, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Array_Get_Item_2) == 0x000060, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_GetNumMaterials_ReturnValue) == 0x00006C, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_Subtract_IntInt_ReturnValue) == 0x000074, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, Temp_bool_Variable) == 0x000078, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, K2Node_Select_Default) == 0x000080, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000088, "Member 'DuplicateResOutMesh_C_Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct DuplicateResOutMesh_C_ProcessSpawnInTimeline final
{
public:
	double                                        ZHeight;
	double                                        LightIntensity;
	double                                        DissolveGradientPercentage;
	double                                        DissolveGradientDistance;
	struct FLinearColor                           DissolveGradientBaseLocation;
	struct FLinearColor                           DissolveGradientDirectionalColor;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_54[0x4];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_152[0x2];
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;
	uint8                                         Pad_15C[0x4];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_194[0x4];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_1CC[0x4];
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	struct FVector                                CallFunc_VLerp_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	double                                        CallFunc_VSize_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_2BC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2C9[0x3];
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;
};
static_assert(alignof(DuplicateResOutMesh_C_ProcessSpawnInTimeline) == 0x000008, "Wrong alignment on DuplicateResOutMesh_C_ProcessSpawnInTimeline");
static_assert(sizeof(DuplicateResOutMesh_C_ProcessSpawnInTimeline) == 0x0002E8, "Wrong size on DuplicateResOutMesh_C_ProcessSpawnInTimeline");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, ZHeight) == 0x000000, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::ZHeight' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, LightIntensity) == 0x000008, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::LightIntensity' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, DissolveGradientPercentage) == 0x000010, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::DissolveGradientPercentage' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, DissolveGradientDistance) == 0x000018, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::DissolveGradientDistance' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, DissolveGradientBaseLocation) == 0x000020, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::DissolveGradientBaseLocation' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, DissolveGradientDirectionalColor) == 0x000030, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::DissolveGradientDirectionalColor' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Lerp_ReturnValue) == 0x000048, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, Temp_int_Array_Index_Variable) == 0x000050, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_MakeLiteralDouble_ReturnValue) == 0x000058, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_MakeLiteralDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Lerp_ReturnValue_1) == 0x000060, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000068, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000070, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_IsValid_ReturnValue_1) == 0x000151, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_MakeLiteralName_ReturnValue) == 0x000154, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000158, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_GetSocketLocation_ReturnValue) == 0x000160, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000178, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, Temp_int_Loop_Counter_Variable) == 0x000190, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000198, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Normal_ReturnValue) == 0x0001B0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Add_IntInt_ReturnValue) == 0x0001C8, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0001D0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x0001E8, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0001F8, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Add_VectorVector_ReturnValue) == 0x000210, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000228, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000240, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_VLerp_ReturnValue) == 0x000258, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_VLerp_ReturnValue_1) == 0x000270, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_VLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000288, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x0002A0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_VSize_ReturnValue) == 0x0002B0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Array_Length_ReturnValue) == 0x0002B8, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Array_Get_Item) == 0x0002C0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_Less_IntInt_ReturnValue) == 0x0002C8, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0002CC, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_VLerp_Alpha_ImplicitCast_1) == 0x0002D0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_VLerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0002D4, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0002D8, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x0002DC, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_ProcessSpawnInTimeline, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x0002E0, "Member 'DuplicateResOutMesh_C_ProcessSpawnInTimeline::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");

struct DuplicateResOutMesh_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(DuplicateResOutMesh_C_ReceiveTick) == 0x000004, "Wrong alignment on DuplicateResOutMesh_C_ReceiveTick");
static_assert(sizeof(DuplicateResOutMesh_C_ReceiveTick) == 0x000004, "Wrong size on DuplicateResOutMesh_C_ReceiveTick");
static_assert(offsetof(DuplicateResOutMesh_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'DuplicateResOutMesh_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct DuplicateResOutMesh_C_RestoreInProgressRes final
{
public:
	TArray<class UMaterialInstanceDynamic*>       CallFunc_External_Mesh_Masked_Setup_Corrected_Mid_Array;
};
static_assert(alignof(DuplicateResOutMesh_C_RestoreInProgressRes) == 0x000008, "Wrong alignment on DuplicateResOutMesh_C_RestoreInProgressRes");
static_assert(sizeof(DuplicateResOutMesh_C_RestoreInProgressRes) == 0x000010, "Wrong size on DuplicateResOutMesh_C_RestoreInProgressRes");
static_assert(offsetof(DuplicateResOutMesh_C_RestoreInProgressRes, CallFunc_External_Mesh_Masked_Setup_Corrected_Mid_Array) == 0x000000, "Member 'DuplicateResOutMesh_C_RestoreInProgressRes::CallFunc_External_Mesh_Masked_Setup_Corrected_Mid_Array' has a wrong offset!");

struct DuplicateResOutMesh_C_Spawn__Light final
{
public:
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	uint8                                         Pad_1[0xF];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class UPointLightComponent*                   CallFunc_AddComponent_ReturnValue;
	float                                         CallFunc_SetIntensity_NewIntensity_ImplicitCast;
};
static_assert(alignof(DuplicateResOutMesh_C_Spawn__Light) == 0x000010, "Wrong alignment on DuplicateResOutMesh_C_Spawn__Light");
static_assert(sizeof(DuplicateResOutMesh_C_Spawn__Light) == 0x000080, "Wrong size on DuplicateResOutMesh_C_Spawn__Light");
static_assert(offsetof(DuplicateResOutMesh_C_Spawn__Light, CallFunc_IsMobilePlatform_ReturnValue) == 0x000000, "Member 'DuplicateResOutMesh_C_Spawn__Light::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Spawn__Light, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'DuplicateResOutMesh_C_Spawn__Light::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Spawn__Light, CallFunc_AddComponent_ReturnValue) == 0x000070, "Member 'DuplicateResOutMesh_C_Spawn__Light::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_Spawn__Light, CallFunc_SetIntensity_NewIntensity_ImplicitCast) == 0x000078, "Member 'DuplicateResOutMesh_C_Spawn__Light::CallFunc_SetIntensity_NewIntensity_ImplicitCast' has a wrong offset!");

struct DuplicateResOutMesh_C_UpdateExternalParameters final
{
public:
	TArray<class UMaterialInstanceDynamic*>       MID_Array;
	TArray<class USkeletalMeshComponent*>         External_MEsh_Component_Array;
};
static_assert(alignof(DuplicateResOutMesh_C_UpdateExternalParameters) == 0x000008, "Wrong alignment on DuplicateResOutMesh_C_UpdateExternalParameters");
static_assert(sizeof(DuplicateResOutMesh_C_UpdateExternalParameters) == 0x000020, "Wrong size on DuplicateResOutMesh_C_UpdateExternalParameters");
static_assert(offsetof(DuplicateResOutMesh_C_UpdateExternalParameters, MID_Array) == 0x000000, "Member 'DuplicateResOutMesh_C_UpdateExternalParameters::MID_Array' has a wrong offset!");
static_assert(offsetof(DuplicateResOutMesh_C_UpdateExternalParameters, External_MEsh_Component_Array) == 0x000010, "Member 'DuplicateResOutMesh_C_UpdateExternalParameters::External_MEsh_Component_Array' has a wrong offset!");

}
