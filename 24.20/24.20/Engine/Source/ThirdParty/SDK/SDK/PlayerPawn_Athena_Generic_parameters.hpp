#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AudioExtensions_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct PlayerPawn_Athena_Generic_C_AnimTrailsNotify final
{
public:
	bool                                          bActive;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_AnimTrailsNotify) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_AnimTrailsNotify");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_AnimTrailsNotify) == 0x000001, "Wrong size on PlayerPawn_Athena_Generic_C_AnimTrailsNotify");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsNotify, bActive) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsNotify::bActive' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_AnimTrailsSetup final
{
public:
	class UParticleSystem*                        ParticleSystemReference;
	class UNiagaraSystem*                         NiagaraSystemReference;
	class FName                                   FirstSocketName;
	class FName                                   SecondSocketName;
	float                                         Width;
	uint8                                         Pad_1C[0x4];
	class UFXSystemComponent*                     OverrideParticleComp;
	class FName                                   OverideFirstSocketName;
	class FName                                   OverideSecondSocketName;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_AnimTrailsSetup");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup) == 0x000030, "Wrong size on PlayerPawn_Athena_Generic_C_AnimTrailsSetup");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, ParticleSystemReference) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::ParticleSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, NiagaraSystemReference) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, FirstSocketName) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::FirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, SecondSocketName) == 0x000014, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::SecondSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, Width) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::Width' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, OverrideParticleComp) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::OverrideParticleComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, OverideFirstSocketName) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::OverideFirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_AnimTrailsSetup, OverideSecondSocketName) == 0x00002C, "Member 'PlayerPawn_Athena_Generic_C_AnimTrailsSetup::OverideSecondSocketName' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled final
{
public:
	bool                                          NewParam;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled) == 0x000018, "Wrong size on PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, NewParam) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::NewParam' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000004, "Member 'PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_CharacterDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_CharacterDestroyed) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_CharacterDestroyed");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_CharacterDestroyed) == 0x000008, "Wrong size on PlayerPawn_Athena_Generic_C_CharacterDestroyed");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_CharacterDestroyed, DestroyedActor) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_CharacterDestroyed::DestroyedActor' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh final
{
public:
	class UMaterialInterface*                     Material_to_Apply;
	TArray<class UMaterialInstanceDynamic*>       Empty_MID_Array;
	int32                                         TranslucentSortPriority;
	uint8                                         Pad_1C[0x4];
	class UPoseableMeshComponent*                 PoseableMesh;
	EFortCustomPartType                           CustomBodyType;
	uint8                                         Pad_29[0x7];
	class USkeletalMeshComponent*                 PartMesh;
	class USkeletalMesh*                          CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_51[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_59[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_7C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	class UMaterialInterface*                     CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_91[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_9E[0x2];
	class USceneComponent*                        K2Node_Select_Default;
	uint8                                         Pad_A8[0x8];
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_114[0x4];
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
	uint8                                         Pad_1F8[0x8];
	struct FTransform                             Temp_struct_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_261[0x7];
	class UPoseableMeshComponent*                 CallFunc_AddComponent_ReturnValue;
	class USkinnedMeshComponent*                  K2Node_Select_Default_1;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh) == 0x000010, "Wrong alignment on PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh) == 0x000280, "Wrong size on PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Material_to_Apply) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Material_to_Apply' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Empty_MID_Array) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Empty_MID_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, TranslucentSortPriority) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::TranslucentSortPriority' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, PoseableMesh) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::PoseableMesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CustomBodyType) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CustomBodyType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, PartMesh) == 0x000030, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::PartMesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetMaterials_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetNumMaterials_ReturnValue) == 0x000054, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000061, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_IsValid_ReturnValue_2) == 0x000062, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_BooleanOR_ReturnValue) == 0x000063, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_LastIndex_ReturnValue) == 0x000064, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000068, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_int_Variable) == 0x000078, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_Get_Item) == 0x000080, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_int_Variable_1) == 0x000098, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_bool_Variable) == 0x00009C, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00009D, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, K2Node_Select_Default) == 0x0000A0, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetRelativeTransform_ReturnValue) == 0x0000B0, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Add_IntInt_ReturnValue_1) == 0x000110, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000118, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_struct_Variable) == 0x000200, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_bool_Variable_1) == 0x000260, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_AddComponent_ReturnValue) == 0x000268, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, K2Node_Select_Default_1) == 0x000270, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::K2Node_Select_Default_1' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent final
{
public:
	class USkeletalMeshComponent*                 DuplicatedSkeletalMeshComponent;
	class UMaterialInterface*                     Material_to_Apply;
	TArray<class UMaterialInstanceDynamic*>       Empty_MID_Array;
	int32                                         TranslucentSortPriority;
	uint8                                         Pad_24[0x4];
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           CustomBodyType;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_33[0x5];
	class USkeletalMesh*                          CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_42[0x6];
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_5D[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_7A[0x2];
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_82[0x6];
	class USceneComponent*                        K2Node_Select_Default;
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_F4[0x4];
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
	uint8                                         Pad_1D8[0x8];
	struct FTransform                             Temp_struct_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_241[0x7];
	class USkeletalMeshComponent*                 CallFunc_AddComponent_ReturnValue;
	class USkeletalMeshComponent*                 K2Node_Select_Default_1;
	int32                                         Temp_int_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	class UMaterialInterface*                     CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent) == 0x000010, "Wrong alignment on PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent) == 0x000280, "Wrong size on PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, DuplicatedSkeletalMeshComponent) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::DuplicatedSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Material_to_Apply) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Material_to_Apply' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Empty_MID_Array) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Empty_MID_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, TranslucentSortPriority) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::TranslucentSortPriority' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, MeshPart) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CustomBodyType) == 0x000030, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CustomBodyType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000032, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_BooleanOR_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetMaterials_ReturnValue) == 0x000048, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetNumMaterials_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_IsValid_ReturnValue_1) == 0x00005C, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_LastIndex_ReturnValue) == 0x000064, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000068, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000078, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_IsValid_ReturnValue_2) == 0x000079, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_int_Variable) == 0x00007C, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_bool_Variable) == 0x000080, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000081, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, K2Node_Select_Default) == 0x000088, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetRelativeTransform_ReturnValue) == 0x000090, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x0000F8, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_struct_Variable) == 0x0001E0, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_bool_Variable_1) == 0x000240, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_AddComponent_ReturnValue) == 0x000248, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, K2Node_Select_Default_1) == 0x000250, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_int_Variable_1) == 0x000258, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Add_IntInt_ReturnValue_1) == 0x00025C, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_Get_Item) == 0x000260, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_Get_Item_1) == 0x000268, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000270, "Member 'PlayerPawn_Athena_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	const class UMaterialInstanceDynamic*         Temp_object_Variable;
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1E[0x2];
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         Temp_int_Variable_1;
	uint8                                         Pad_2C[0x4];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_3C[0x4];
	TArray<class UMaterialInterface*>             K2Node_MakeArray_Array;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_52[0x2];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5D[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_1;
	uint8                                         Pad_64[0x4];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_1;
	TArray<class UMaterialInterface*>             K2Node_MakeArray_Array_1;
	int32                                         Temp_int_Variable_2;
	uint8                                         Pad_84[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_91[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_99[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_2;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_A5[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         Temp_int_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_B1[0x7];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_C1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_2;
	TArray<class UMaterialInstanceDynamic*>       K2Node_MakeArray_Array_2;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_E2[0x2];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_3;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;
	uint8                                         Pad_EC[0x4];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_3;
	int32                                         Temp_int_Variable_4;
	uint8                                         Pad_FC[0x4];
	TArray<class UMaterialInterface*>             K2Node_MakeArray_Array_3;
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_4;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_121[0x3];
	int32                                         Temp_int_Variable_5;
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;
	uint8                                         Pad_12C[0x4];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_4;
	TArray<class UMaterialInterface*>             K2Node_MakeArray_Array_4;
	int32                                         Temp_int_Variable_6;
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;
	int32                                         Temp_int_Variable_7;
	uint8                                         Pad_154[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;
	uint8                                         Pad_165[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	uint8                                         Pad_16E[0x2];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_5;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_5;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_181[0x7];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_5;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_191[0x7];
	TArray<class UMaterialInterface*>             K2Node_MakeArray_Array_5;
	int32                                         CallFunc_Array_Add_ReturnValue_2;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	bool                                          K2Node_Event_First_Right;
	bool                                          K2Node_Event_First_Left;
	uint8                                         Pad_1AF[0x1];
	float                                         K2Node_Event_Damage_1;
	uint8                                         Pad_1B4[0x4];
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;
	struct FVector                                K2Node_Event_Momentum_1;
	struct FHitResult                             K2Node_Event_HitInfo_1;
	class AFortPawn*                              K2Node_Event_InstigatedBy_1;
	class AActor*                                 K2Node_Event_DamageCauser_1;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;
	struct FHitResult                             K2Node_Event_Hit;
	class AFortWeapon*                            K2Node_Event_NewWeapon;
	class AFortWeapon*                            K2Node_Event_PrevWeapon;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_7;
	uint8                                         Pad_3E9[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_7;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_6;
	uint8                                         Pad_4C2[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_6;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	bool                                          Temp_bool_Variable_4;
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;
	uint8                                         Pad_59B[0x1];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_2;
	int32                                         CallFunc_Round_ReturnValue;
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_6F1[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_701[0x3];
	int32                                         Temp_int_Variable_8;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;
	int32                                         Temp_int_Variable_9;
	uint8                                         Pad_71C[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_4;
	int32                                         CallFunc_Array_Add_ReturnValue_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_4;
	uint8                                         Pad_72D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_735[0x3];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	bool                                          CallFunc_IsValid_ReturnValue_13;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;
	bool                                          CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam;
	uint8                                         Pad_744[0x4];
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;
	bool                                          K2Node_Event_bActive;
	uint8                                         Pad_751[0x3];
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate;
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out;
	class UParticleSystem*                        K2Node_Event_ParticleSystemReference;
	class UNiagaraSystem*                         K2Node_Event_NiagaraSystemReference;
	class FName                                   K2Node_Event_FirstSocketName;
	class FName                                   K2Node_Event_SecondSocketName;
	float                                         K2Node_Event_Width;
	uint8                                         Pad_78C[0x4];
	class UFXSystemComponent*                     K2Node_Event_OverrideParticleComp;
	class FName                                   K2Node_Event_OverideFirstSocketName;
	class FName                                   K2Node_Event_OverideSecondSocketName;
	bool                                          CallFunc_IsValid_ReturnValue_14;
	uint8                                         Pad_7A1[0x7];
	class UFXSystemAsset*                         CallFunc_GetFXSystemAsset_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_15;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_5;
	uint8                                         Pad_7B2[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_5;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	uint8                                         Pad_889[0x3];
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsValid_ReturnValue_16;
	uint8                                         Pad_899[0x7];
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1;
	int32                                         Temp_int_Variable_10;
	uint8                                         Pad_8B4[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_5;
	int32                                         CallFunc_Array_Add_ReturnValue_4;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_5;
	uint8                                         Pad_8C5[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;
	uint8                                         Pad_8CC[0x4];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_4;
	uint8                                         Pad_8E1[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_4;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_3;
	uint8                                         Pad_9B9[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_3;
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_2;
	uint8                                         Pad_A92[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_2;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_1;
	uint8                                         Pad_B69[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;
	uint8                                         Pad_C43[0x5];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;
	bool                                          K2Node_SwitchEnum_CmpSuccess_6;
	bool                                          CallFunc_IsValid_ReturnValue_17;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;
	uint8                                         Pad_D1B[0x5];
	class UFXSystemComponent*                     CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue;
	bool                                          K2Node_CustomEvent_NewHidden;
	EFortMovementStyle                            K2Node_Event_PreviousMovementStyle;
	EFortMovementStyle                            K2Node_Event_NewMovementStyle;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_D2E[0x2];
	class APlayerController*                      K2Node_Event_PC_1;
	class APlayerController*                      K2Node_Event_PC;
	bool                                          K2Node_CustomEvent_isFrontEndHologram;
	bool                                          CallFunc_IsValid_ReturnValue_18;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_5;
	uint8                                         Pad_D43[0x1];
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_19;
	uint8                                         Pad_D49[0x3];
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_1;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_1;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_1;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_1;
	bool                                          CallFunc_IsValid_ReturnValue_20;
	uint8                                         Pad_D6A[0x6];
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;
	class USceneComponent*                        CallFunc_Array_Get_Item;
	class UFXSystemComponent*                     K2Node_DynamicCast_AsFXSystem_Component;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_D91[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_ComponentHasTag_ReturnValue;
	uint8                                         Pad_D9A[0x2];
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_2;
	int32                                         Temp_int_Variable_11;
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;
	const class UMaterialInstanceDynamic*         Temp_object_Variable_1;
	const class UMaterialInstanceDynamic*         Temp_object_Variable_2;
	const class UMaterialInstanceDynamic*         Temp_object_Variable_3;
	int32                                         CallFunc_Array_Add_ReturnValue_5;
	int32                                         CallFunc_Array_Add_ReturnValue_6;
	int32                                         CallFunc_Array_Add_ReturnValue_7;
	int32                                         CallFunc_Array_Add_ReturnValue_8;
	bool                                          K2Node_SwitchEnum_CmpSuccess_7;
	uint8                                         Pad_DD9[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_9;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart;
	EFortCustomPartType                           K2Node_CustomEvent_PartType;
	bool                                          CallFunc_IsValid_ReturnValue_21;
	bool                                          CallFunc_IsValid_ReturnValue_22;
	bool                                          CallFunc_IsValid_ReturnValue_23;
	bool                                          CallFunc_IsValid_ReturnValue_24;
	bool                                          CallFunc_IsValid_ReturnValue_25;
	bool                                          CallFunc_IsValid_ReturnValue_26;
	uint8                                         Pad_DFF[0x1];
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_27;
	uint8                                         Pad_E11[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_10;
	int32                                         CallFunc_Array_Add_ReturnValue_11;
	uint8                                         Pad_E1C[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_6;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_28;
	uint8                                         Pad_E2D[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_6;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_6;
	uint8                                         Pad_E35[0x3];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_E41[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_12;
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_29;
	uint8                                         Pad_E59[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_13;
	int32                                         CallFunc_Array_Add_ReturnValue_14;
	uint8                                         Pad_E64[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_7;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_30;
	uint8                                         Pad_E75[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_7;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_7;
	uint8                                         Pad_E7D[0x3];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_E89[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_15;
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_31;
	uint8                                         Pad_EA1[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_16;
	int32                                         CallFunc_Array_Add_ReturnValue_17;
	uint8                                         Pad_EAC[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_8;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_8;
	bool                                          CallFunc_IsValid_ReturnValue_32;
	uint8                                         Pad_EBD[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_8;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_8;
	uint8                                         Pad_EC5[0x3];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_ED1[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_18;
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_3;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_33;
	uint8                                         Pad_EE9[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_19;
	int32                                         CallFunc_Array_Add_ReturnValue_20;
	uint8                                         Pad_EF4[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_9;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_9;
	bool                                          CallFunc_IsValid_ReturnValue_34;
	uint8                                         Pad_F05[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_9;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_9;
	uint8                                         Pad_F0D[0x3];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_F19[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_21;
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_4;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_35;
	uint8                                         Pad_F31[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_22;
	int32                                         CallFunc_Array_Add_ReturnValue_23;
	uint8                                         Pad_F3C[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_10;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_10;
	bool                                          CallFunc_IsValid_ReturnValue_36;
	uint8                                         Pad_F4D[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_10;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_10;
	uint8                                         Pad_F55[0x3];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_4;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_F61[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_24;
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue_5;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_37;
	uint8                                         Pad_F79[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_25;
	int32                                         CallFunc_Array_Add_ReturnValue_26;
	uint8                                         Pad_F84[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_11;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_11;
	bool                                          CallFunc_IsValid_ReturnValue_38;
	uint8                                         Pad_F95[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_11;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_11;
	uint8                                         Pad_F9D[0x3];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_5;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_FA9[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_27;
	const class UMaterialInstanceDynamic*         Temp_object_Variable_4;
	int32                                         CallFunc_Array_Add_ReturnValue_28;
	uint8                                         Pad_FBC[0x4];
	const class UMaterialInstanceDynamic*         Temp_object_Variable_5;
	int32                                         CallFunc_Array_Add_ReturnValue_29;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_6;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_7;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_8;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_9;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_10;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_11;
	uint8                                         Pad_FFC[0x4];
	double                                        CallFunc_Round_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic) == 0x001008, "Wrong size on PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, EntryPoint) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_object_Variable) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable) == 0x000014, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_1) == 0x00001D, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_1) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_MakeLiteralDouble_ReturnValue) == 0x000030, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_MakeLiteralDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_MakeArray_Array) == 0x000040, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_3) == 0x000051, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_1) == 0x000054, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000058, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_bool_Variable) == 0x00005C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetScalarParameterValue_ReturnValue_1) == 0x000060, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetScalarParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_MakeLiteralDouble_ReturnValue_1) == 0x000068, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_MakeLiteralDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_MakeArray_Array_1) == 0x000070, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_2) == 0x000080, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue) == 0x000088, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_4) == 0x000090, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue) == 0x000094, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_5) == 0x000098, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_2) == 0x00009C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000A0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_3) == 0x0000AC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_bool_Variable_1) == 0x0000B0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_1) == 0x0000B8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000C0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000C4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_MakeLiteralDouble_ReturnValue_2) == 0x0000C8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_MakeLiteralDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_MakeArray_Array_2) == 0x0000D0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_6) == 0x0000E0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_7) == 0x0000E1, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_3) == 0x0000E4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0000E8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_MakeLiteralDouble_ReturnValue_3) == 0x0000F0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_MakeLiteralDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_4) == 0x0000F8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_MakeArray_Array_3) == 0x000100, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_4) == 0x000110, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_bool_Variable_2) == 0x000114, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsDedicatedServer_ReturnValue) == 0x000115, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_8) == 0x000116, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_9) == 0x000117, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_4) == 0x000118, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x00011C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_bool_Variable_3) == 0x000120, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_5) == 0x000124, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_5) == 0x000128, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_MakeLiteralDouble_ReturnValue_4) == 0x000130, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_MakeLiteralDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_MakeArray_Array_4) == 0x000138, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_6) == 0x000148, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_6) == 0x00014C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_7) == 0x000150, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_2) == 0x000158, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_1) == 0x000160, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000164, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_7) == 0x000168, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_10) == 0x00016C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_11) == 0x00016D, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_5) == 0x000170, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_5) == 0x000174, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_3) == 0x000178, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000180, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_MakeLiteralDouble_ReturnValue_5) == 0x000188, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_MakeLiteralDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000190, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_MakeArray_Array_5) == 0x000198, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_2) == 0x0001A8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0001AC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_First_Right) == 0x0001AD, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_First_Right' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_First_Left) == 0x0001AE, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_First_Left' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_Damage_1) == 0x0001B0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_DamageTags_1) == 0x0001B8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_Momentum_1) == 0x0001D8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_HitInfo_1) == 0x0001F0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_InstigatedBy_1) == 0x0002D0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_DamageCauser_1) == 0x0002D8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_EffectContext_1) == 0x0002E0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_Hit) == 0x0002F8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_NewWeapon) == 0x0003D8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_NewWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_PrevWeapon) == 0x0003E0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_PrevWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_7) == 0x0003E8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_7) == 0x0003F0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess) == 0x0004C0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_6) == 0x0004C1, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_6) == 0x0004C8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_1) == 0x000598, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_bool_Variable_4) == 0x000599, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsPlayerControlled_ReturnValue) == 0x00059A, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetScalarParameterValue_ReturnValue_2) == 0x00059C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetScalarParameterValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Round_ReturnValue) == 0x0005A0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_Damage) == 0x0005A4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_DamageTags) == 0x0005A8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_Momentum) == 0x0005C8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_HitInfo) == 0x0005E0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_InstigatedBy) == 0x0006C0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_DamageCauser) == 0x0006C8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_EffectContext) == 0x0006D0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetController_ReturnValue) == 0x0006E8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0006F0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0006F8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess) == 0x000700, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_8) == 0x000704, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Array_Index_Variable) == 0x000708, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_8) == 0x00070C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Loop_Counter_Variable) == 0x000710, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_9) == 0x000714, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_9) == 0x000718, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_4) == 0x000720, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_3) == 0x000728, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_4) == 0x00072C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_10) == 0x000730, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_bool_Variable_5) == 0x000734, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_K2_SetTimer_ReturnValue) == 0x000738, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_12) == 0x000740, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_13) == 0x000741, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x000742, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam) == 0x000743, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_DestroyedActor) == 0x000748, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_bActive) == 0x000750, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_bActive' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000754, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out) == 0x000760, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_ParticleSystemReference) == 0x000770, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_ParticleSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_NiagaraSystemReference) == 0x000778, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_FirstSocketName) == 0x000780, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_FirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_SecondSocketName) == 0x000784, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_SecondSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_Width) == 0x000788, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_Width' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_OverrideParticleComp) == 0x000790, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_OverrideParticleComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_OverideFirstSocketName) == 0x000798, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_OverideFirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_OverideSecondSocketName) == 0x00079C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_OverideSecondSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_14) == 0x0007A0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetFXSystemAsset_ReturnValue) == 0x0007A8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetFXSystemAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_15) == 0x0007B0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_5) == 0x0007B1, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_5) == 0x0007B8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_2) == 0x000888, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CreateDelegate_OutputDelegate_1) == 0x00088C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_16) == 0x000898, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1) == 0x0008A0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_10) == 0x0008B0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_5) == 0x0008B8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_4) == 0x0008C0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_5) == 0x0008C4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_11) == 0x0008C8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0008D0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x0008D8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_4) == 0x0008E0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_4) == 0x0008E8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_3) == 0x0009B8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_3) == 0x0009C0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_3) == 0x000A90, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_2) == 0x000A91, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_2) == 0x000A98, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType_1) == 0x000B68, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters_1) == 0x000B70, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_4) == 0x000C40, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_5) == 0x000C41, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_EventType) == 0x000C42, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_GameplayCueEvent_Parameters) == 0x000C48, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_6) == 0x000D18, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_17) == 0x000D19, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x000D1A, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue) == 0x000D20, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_NewHidden) == 0x000D28, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_NewHidden' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_PreviousMovementStyle) == 0x000D29, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_PreviousMovementStyle' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_NewMovementStyle) == 0x000D2A, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_NewMovementStyle' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000D2B, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsLocallyControlled_ReturnValue) == 0x000D2C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_BooleanAND_ReturnValue) == 0x000D2D, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_PC_1) == 0x000D30, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_PC_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_Event_PC) == 0x000D38, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_Event_PC' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_isFrontEndHologram) == 0x000D40, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_isFrontEndHologram' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_18) == 0x000D41, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsDedicatedServer_ReturnValue_5) == 0x000D42, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsDedicatedServer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_AddUnique_ReturnValue) == 0x000D44, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_19) == 0x000D48, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000D4C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_Pawn_1) == 0x000D50, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_Pawn_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_Part_1) == 0x000D58, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_Part_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_MeshPart_1) == 0x000D60, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_MeshPart_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_PartType_1) == 0x000D68, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_PartType_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_20) == 0x000D69, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetChildrenComponents_Children) == 0x000D70, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Get_Item) == 0x000D80, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsFXSystem_Component) == 0x000D88, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsFXSystem_Component' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_1) == 0x000D90, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Length_ReturnValue) == 0x000D94, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Less_IntInt_ReturnValue) == 0x000D98, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_ComponentHasTag_ReturnValue) == 0x000D99, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CreateDelegate_OutputDelegate_2) == 0x000D9C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_int_Variable_11) == 0x000DA8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Add_IntInt_ReturnValue_12) == 0x000DAC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_object_Variable_1) == 0x000DB0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_object_Variable_2) == 0x000DB8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_object_Variable_3) == 0x000DC0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_5) == 0x000DC8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_6) == 0x000DCC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_7) == 0x000DD0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_8) == 0x000DD4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_SwitchEnum_CmpSuccess_7) == 0x000DD8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_SwitchEnum_CmpSuccess_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_9) == 0x000DDC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_Pawn) == 0x000DE0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_Part) == 0x000DE8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_MeshPart) == 0x000DF0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_CustomEvent_PartType) == 0x000DF8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_CustomEvent_PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_21) == 0x000DF9, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_22) == 0x000DFA, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_23) == 0x000DFB, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_24) == 0x000DFC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_25) == 0x000DFD, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_26) == 0x000DFE, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000E00, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000E08, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_27) == 0x000E10, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_10) == 0x000E14, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_11) == 0x000E18, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_6) == 0x000E20, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_6) == 0x000E28, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_28) == 0x000E2C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_6) == 0x000E30, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_6) == 0x000E34, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000E38, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_2) == 0x000E40, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_12) == 0x000E44, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetSkeletalMeshAsset_ReturnValue_1) == 0x000E48, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetSkeletalMeshAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000E50, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_29) == 0x000E58, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_13) == 0x000E5C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_14) == 0x000E60, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_7) == 0x000E68, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_7) == 0x000E70, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_30) == 0x000E74, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_7) == 0x000E78, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_7) == 0x000E7C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1) == 0x000E80, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_3) == 0x000E88, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_15) == 0x000E8C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetSkeletalMeshAsset_ReturnValue_2) == 0x000E90, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetSkeletalMeshAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000E98, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_31) == 0x000EA0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_16) == 0x000EA4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_17) == 0x000EA8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_8) == 0x000EB0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_8) == 0x000EB8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_32) == 0x000EBC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_8) == 0x000EC0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_8) == 0x000EC4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2) == 0x000EC8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_4) == 0x000ED0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_18) == 0x000ED4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetSkeletalMeshAsset_ReturnValue_3) == 0x000ED8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetSkeletalMeshAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x000EE0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_33) == 0x000EE8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_19) == 0x000EEC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_20) == 0x000EF0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_9) == 0x000EF8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_9) == 0x000F00, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_34) == 0x000F04, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_9) == 0x000F08, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_9) == 0x000F0C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3) == 0x000F10, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_5) == 0x000F18, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_21) == 0x000F1C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetSkeletalMeshAsset_ReturnValue_4) == 0x000F20, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetSkeletalMeshAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_4) == 0x000F28, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_35) == 0x000F30, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_22) == 0x000F34, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_23) == 0x000F38, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_10) == 0x000F40, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_10) == 0x000F48, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_36) == 0x000F4C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_10) == 0x000F50, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_10) == 0x000F54, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_4) == 0x000F58, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_6) == 0x000F60, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_24) == 0x000F64, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetSkeletalMeshAsset_ReturnValue_5) == 0x000F68, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetSkeletalMeshAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_5) == 0x000F70, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_37) == 0x000F78, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_25) == 0x000F7C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_26) == 0x000F80, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetMaterial_ReturnValue_11) == 0x000F88, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetMaterial_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_GetNumMaterials_ReturnValue_11) == 0x000F90, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_GetNumMaterials_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_IsValid_ReturnValue_38) == 0x000F94, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_IsValid_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Subtract_IntInt_ReturnValue_11) == 0x000F98, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Subtract_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_LessEqual_IntInt_ReturnValue_11) == 0x000F9C, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_LessEqual_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_5) == 0x000FA0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, K2Node_DynamicCast_bSuccess_7) == 0x000FA8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_27) == 0x000FAC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_object_Variable_4) == 0x000FB0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_28) == 0x000FB8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, Temp_object_Variable_5) == 0x000FC0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Array_Add_ReturnValue_29) == 0x000FC8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Array_Add_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast) == 0x000FCC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1) == 0x000FD0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2) == 0x000FD4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3) == 0x000FD8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4) == 0x000FDC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5) == 0x000FE0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_6) == 0x000FE4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_7) == 0x000FE8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_8) == 0x000FEC, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_9) == 0x000FF0, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_10) == 0x000FF4, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_11) == 0x000FF8, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic, CallFunc_Round_A_ImplicitCast) == 0x001000, "Member 'PlayerPawn_Athena_Generic_C_ExecuteUbergraph_PlayerPawn_Athena_Generic::CallFunc_Round_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1 final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2 final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Abilities_SpookyMist_Loop::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Damage_Shielded::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Loop_Shadow_Bomb::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Destroyed::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Shield_PotionConsumed::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied) == 0x0000D8, "Wrong size on PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied, EventType) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_GameplayCue_Shield_Reapplied::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram final
{
public:
	bool                                          isFrontEndHologram;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram) == 0x000001, "Wrong size on PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram, isFrontEndHologram) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_Hide_VFX_In_Frontend_Hologram::isFrontEndHologram' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget final
{
public:
	class APlayerController*                      PC;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget) == 0x000008, "Wrong size on PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget, PC) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_K2_OnBecomeViewTarget::PC' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget final
{
public:
	class APlayerController*                      PC;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget) == 0x000008, "Wrong size on PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget, PC) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_K2_OnEndViewTarget::PC' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_Melee_Effect_Color final
{
public:
	struct FVector                                Melee_Color_Set;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_Melee_Effect_Color) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_Melee_Effect_Color");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_Melee_Effect_Color) == 0x000018, "Wrong size on PlayerPawn_Athena_Generic_C_Melee_Effect_Color");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_Melee_Effect_Color, Melee_Color_Set) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_Melee_Effect_Color::Melee_Color_Set' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_MeleeSwingLeft final
{
public:
	bool                                          First_Left;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_MeleeSwingLeft) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_MeleeSwingLeft");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_MeleeSwingLeft) == 0x000001, "Wrong size on PlayerPawn_Athena_Generic_C_MeleeSwingLeft");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_MeleeSwingLeft, First_Left) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_MeleeSwingLeft::First_Left' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_MeleeSwingRight final
{
public:
	bool                                          First_Right;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_MeleeSwingRight) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_MeleeSwingRight");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_MeleeSwingRight) == 0x000001, "Wrong size on PlayerPawn_Athena_Generic_C_MeleeSwingRight");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_MeleeSwingRight, First_Right) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_MeleeSwingRight::First_Right' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnDamagePlayEffects final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnDamagePlayEffects");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects) == 0x000148, "Wrong size on PlayerPawn_Athena_Generic_C_OnDamagePlayEffects");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, Damage) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, DamageTags) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, Momentum) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, HitInfo) == 0x000040, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, DamageCauser) == 0x000128, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDamagePlayEffects, EffectContext) == 0x000130, "Member 'PlayerPawn_Athena_Generic_C_OnDamagePlayEffects::EffectContext' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnDeathServer final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnDeathServer) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnDeathServer");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnDeathServer) == 0x000148, "Wrong size on PlayerPawn_Athena_Generic_C_OnDeathServer");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, Damage) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, DamageTags) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, Momentum) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, HitInfo) == 0x000040, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnDeathServer, EffectContext) == 0x000130, "Member 'PlayerPawn_Athena_Generic_C_OnDeathServer::EffectContext' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnLanded) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnLanded");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnLanded) == 0x0000E0, "Wrong size on PlayerPawn_Athena_Generic_C_OnLanded");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnLanded, Hit) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnLanded::Hit' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnMovementStyleChanged final
{
public:
	EFortMovementStyle                            PreviousMovementStyle;
	EFortMovementStyle                            NewMovementStyle;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnMovementStyleChanged) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnMovementStyleChanged");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnMovementStyleChanged) == 0x000002, "Wrong size on PlayerPawn_Athena_Generic_C_OnMovementStyleChanged");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnMovementStyleChanged, PreviousMovementStyle) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnMovementStyleChanged::PreviousMovementStyle' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnMovementStyleChanged, NewMovementStyle) == 0x000001, "Member 'PlayerPawn_Athena_Generic_C_OnMovementStyleChanged::NewMovementStyle' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnPart final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnPart) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnPart");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnPart) == 0x000020, "Wrong size on PlayerPawn_Athena_Generic_C_OnPart");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPart, Pawn) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnPart::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPart, Part) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_OnPart::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPart, MeshPart) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_OnPart::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPart, PartType) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_OnPart::PartType' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnPartApplied final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnPartApplied) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnPartApplied");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnPartApplied) == 0x000020, "Wrong size on PlayerPawn_Athena_Generic_C_OnPartApplied");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPartApplied, Pawn) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnPartApplied::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPartApplied, Part) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_OnPartApplied::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPartApplied, MeshPart) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_OnPartApplied::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnPartApplied, PartType) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_OnPartApplied::PartType' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_1[0x7];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue;
	float                                         CallFunc_SetCapsuleHalfHeight_HalfHeight_ImplicitCast;
	uint8                                         Pad_1C[0x4];
	double                                        K2Node_VariableSet_CachedCapsuleHalfHeight_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged) == 0x000028, "Wrong size on PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged, CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue) == 0x000014, "Member 'PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged::CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged, CallFunc_SetCapsuleHalfHeight_HalfHeight_ImplicitCast) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged::CallFunc_SetCapsuleHalfHeight_HalfHeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged, K2Node_VariableSet_CachedCapsuleHalfHeight_ImplicitCast) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_OnRep_CapsuleEnlarged::K2Node_VariableSet_CachedCapsuleHalfHeight_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_OnWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_OnWeaponEquipped) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_OnWeaponEquipped");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_OnWeaponEquipped) == 0x000010, "Wrong size on PlayerPawn_Athena_Generic_C_OnWeaponEquipped");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnWeaponEquipped, NewWeapon) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_OnWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_OnWeaponEquipped, PrevWeapon) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_OnWeaponEquipped::PrevWeapon' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound final
{
public:
	struct FGameplayCueParameters                 GameplayCueParameters;
	class APawn*                                  InstigatorLocal;
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	uint8                                         Pad_1A1[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1B1[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsCriticalHit_ReturnValue;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1C4[0x4];
	class USoundBase*                             K2Node_Select_Default;
	class USoundBase*                             CallFunc_GetAudioForDamageEvent_AudioAsset;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound) == 0x0001E0, "Wrong size on PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, GameplayCueParameters) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, InstigatorLocal) == 0x0000D0, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::InstigatorLocal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000D8, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000DC, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E0, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x0000F8, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x0000FC, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000100, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000120, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_Location) == 0x000140, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_Normal) == 0x000158, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000170, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000178, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000180, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000188, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000190, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x000194, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000198, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A0, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001A8, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001B8, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_IsCriticalHit_ReturnValue) == 0x0001C1, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_IsCriticalHit_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_IsLocallyViewed_ReturnValue) == 0x0001C2, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, Temp_bool_Variable) == 0x0001C3, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, K2Node_Select_Default) == 0x0001C8, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_GetAudioForDamageEvent_AudioAsset) == 0x0001D0, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_GetAudioForDamageEvent_AudioAsset' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound, CallFunc_SpawnSoundAttached_ReturnValue) == 0x0001D8, "Member 'PlayerPawn_Athena_Generic_C_PlayShieldDestroyedSound::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay) == 0x000001, "Wrong size on PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_ReInitFrontendPetDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody final
{
public:
	class USkeletalMeshComponent*                 Mesh_0;
	class USkeletalMeshComponent*                 Master;
	class USkinnedMeshComponent*                  MasterToUse;
	class FName                                   CallFunc_GetAttachSocketName_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	uint8                                         Pad_1D[0x3];
	class USceneComponent*                        CallFunc_GetAttachParent_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2A[0x6];
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody) == 0x000010, "Wrong alignment on PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody) == 0x000170, "Wrong size on PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, Mesh_0) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::Mesh_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, Master) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::Master' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, MasterToUse) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::MasterToUse' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_GetAttachSocketName_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_GetAttachSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00001C, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_GetAttachParent_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000028, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_GetRelativeTransform_ReturnValue) == 0x000030, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000090, "Member 'PlayerPawn_Athena_Generic_C_SlaveAMeshToTheBody::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_ToggleLandFX final
{
public:
	bool                                          NewHidden;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_ToggleLandFX) == 0x000001, "Wrong alignment on PlayerPawn_Athena_Generic_C_ToggleLandFX");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_ToggleLandFX) == 0x000001, "Wrong size on PlayerPawn_Athena_Generic_C_ToggleLandFX");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_ToggleLandFX, NewHidden) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_ToggleLandFX::NewHidden' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UAudioParameterComponent*               CallFunc_GetAudioParameterComponent_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput_1;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput_2;
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	uint8                                         CallFunc_GetTeam_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_4C[0x4];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetBoolParameter_self_CastInput_3;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters) == 0x000060, "Wrong size on PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_GetAudioParameterComponent_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_GetAudioParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_SetBoolParameter_self_CastInput) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_SetBoolParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_SetBoolParameter_self_CastInput_1) == 0x000020, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_SetBoolParameter_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_SetBoolParameter_self_CastInput_2) == 0x000030, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_SetBoolParameter_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_GetTeam_ReturnValue) == 0x000048, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_GetTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue) == 0x00004A, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004B, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters, CallFunc_SetBoolParameter_self_CastInput_3) == 0x000050, "Member 'PlayerPawn_Athena_Generic_C_UpdateViewTargetAudioParameters::CallFunc_SetBoolParameter_self_CastInput_3' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_UserConstructionScript final
{
public:
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_UserConstructionScript) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_UserConstructionScript");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_UserConstructionScript) == 0x000008, "Wrong size on PlayerPawn_Athena_Generic_C_UserConstructionScript");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_UserConstructionScript, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_UserConstructionScript::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_Generic_C_GetActorSoundParams final
{
public:
	TArray<struct FAudioParameter>                Params_0;
	class UAudioParameterComponent*               CallFunc_GetAudioParameterComponent_ReturnValue;
	TArray<struct FAudioParameter>                CallFunc_GetParameters_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_Generic_C_GetActorSoundParams) == 0x000008, "Wrong alignment on PlayerPawn_Athena_Generic_C_GetActorSoundParams");
static_assert(sizeof(PlayerPawn_Athena_Generic_C_GetActorSoundParams) == 0x000028, "Wrong size on PlayerPawn_Athena_Generic_C_GetActorSoundParams");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GetActorSoundParams, Params_0) == 0x000000, "Member 'PlayerPawn_Athena_Generic_C_GetActorSoundParams::Params_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GetActorSoundParams, CallFunc_GetAudioParameterComponent_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_Generic_C_GetActorSoundParams::CallFunc_GetAudioParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_C_GetActorSoundParams, CallFunc_GetParameters_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_Generic_C_GetActorSoundParams::CallFunc_GetParameters_ReturnValue' has a wrong offset!");

}
