#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CharacterPartMidArrayStruct_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "PlayerWindParticleEmitters_structs.hpp"

namespace SDK::Params
{

struct PlayerPawn_Generic_C_AnimTrailsNotify final
{
public:
	bool                                          bActive;
};
static_assert(alignof(PlayerPawn_Generic_C_AnimTrailsNotify) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_AnimTrailsNotify");
static_assert(sizeof(PlayerPawn_Generic_C_AnimTrailsNotify) == 0x000001, "Wrong size on PlayerPawn_Generic_C_AnimTrailsNotify");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsNotify, bActive) == 0x000000, "Member 'PlayerPawn_Generic_C_AnimTrailsNotify::bActive' has a wrong offset!");

struct PlayerPawn_Generic_C_AnimTrailsSetup final
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
static_assert(alignof(PlayerPawn_Generic_C_AnimTrailsSetup) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_AnimTrailsSetup");
static_assert(sizeof(PlayerPawn_Generic_C_AnimTrailsSetup) == 0x000030, "Wrong size on PlayerPawn_Generic_C_AnimTrailsSetup");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, ParticleSystemReference) == 0x000000, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::ParticleSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, NiagaraSystemReference) == 0x000008, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, FirstSocketName) == 0x000010, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::FirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, SecondSocketName) == 0x000014, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::SecondSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, Width) == 0x000018, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::Width' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, OverrideParticleComp) == 0x000020, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::OverrideParticleComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, OverideFirstSocketName) == 0x000028, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::OverideFirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_AnimTrailsSetup, OverideSecondSocketName) == 0x00002C, "Member 'PlayerPawn_Generic_C_AnimTrailsSetup::OverideSecondSocketName' has a wrong offset!");

struct PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled final
{
public:
	bool                                          NewParam;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_9[0x7];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled");
static_assert(sizeof(PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled) == 0x000018, "Wrong size on PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled");
static_assert(offsetof(PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, NewParam) == 0x000000, "Member 'PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::NewParam' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, CallFunc_GetScalarParameterValue_ReturnValue) == 0x000004, "Member 'PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000010, "Member 'PlayerPawn_Generic_C_Are_the_wind_and_water_RTT_passes_enabled::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Generic_C_BindWeaponSwap final
{
public:
	double                                        InDuration;
};
static_assert(alignof(PlayerPawn_Generic_C_BindWeaponSwap) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_BindWeaponSwap");
static_assert(sizeof(PlayerPawn_Generic_C_BindWeaponSwap) == 0x000008, "Wrong size on PlayerPawn_Generic_C_BindWeaponSwap");
static_assert(offsetof(PlayerPawn_Generic_C_BindWeaponSwap, InDuration) == 0x000000, "Member 'PlayerPawn_Generic_C_BindWeaponSwap::InDuration' has a wrong offset!");

struct PlayerPawn_Generic_C_ClientBindWeaponSwap final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(PlayerPawn_Generic_C_ClientBindWeaponSwap) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_ClientBindWeaponSwap");
static_assert(sizeof(PlayerPawn_Generic_C_ClientBindWeaponSwap) == 0x000010, "Wrong size on PlayerPawn_Generic_C_ClientBindWeaponSwap");
static_assert(offsetof(PlayerPawn_Generic_C_ClientBindWeaponSwap, NewWeapon) == 0x000000, "Member 'PlayerPawn_Generic_C_ClientBindWeaponSwap::NewWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ClientBindWeaponSwap, PrevWeapon) == 0x000008, "Member 'PlayerPawn_Generic_C_ClientBindWeaponSwap::PrevWeapon' has a wrong offset!");

struct PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh final
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
static_assert(alignof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh) == 0x000010, "Wrong alignment on PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh");
static_assert(sizeof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh) == 0x000280, "Wrong size on PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Material_to_Apply) == 0x000000, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Material_to_Apply' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Empty_MID_Array) == 0x000008, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Empty_MID_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, TranslucentSortPriority) == 0x000018, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::TranslucentSortPriority' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, PoseableMesh) == 0x000020, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::PoseableMesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CustomBodyType) == 0x000028, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CustomBodyType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, PartMesh) == 0x000030, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::PartMesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetMaterials_ReturnValue) == 0x000040, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetNumMaterials_ReturnValue) == 0x000054, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Subtract_IntInt_ReturnValue) == 0x00005C, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000061, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_IsValid_ReturnValue_2) == 0x000062, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_BooleanOR_ReturnValue) == 0x000063, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_LastIndex_ReturnValue) == 0x000064, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000068, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_int_Variable) == 0x000078, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_Get_Item) == 0x000080, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_int_Variable_1) == 0x000098, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_bool_Variable) == 0x00009C, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00009D, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, K2Node_Select_Default) == 0x0000A0, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_GetRelativeTransform_ReturnValue) == 0x0000B0, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_Add_IntInt_ReturnValue_1) == 0x000110, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000118, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_struct_Variable) == 0x000200, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, Temp_bool_Variable_1) == 0x000260, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, CallFunc_AddComponent_ReturnValue) == 0x000268, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh, K2Node_Select_Default_1) == 0x000270, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh::K2Node_Select_Default_1' has a wrong offset!");

struct PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent final
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
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_81[0x7];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	class USceneComponent*                        K2Node_Select_Default;
	class UMaterialInterface*                     CallFunc_Array_Get_Item_1;
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_1E1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable_1;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_1ED[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_1F4[0xC];
	struct FTransform                             Temp_struct_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_261[0x7];
	class USkeletalMeshComponent*                 CallFunc_AddComponent_ReturnValue;
	class USkeletalMeshComponent*                 K2Node_Select_Default_1;
};
static_assert(alignof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent) == 0x000010, "Wrong alignment on PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent");
static_assert(sizeof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent) == 0x000280, "Wrong size on PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, DuplicatedSkeletalMeshComponent) == 0x000000, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::DuplicatedSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Material_to_Apply) == 0x000008, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Material_to_Apply' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Empty_MID_Array) == 0x000010, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Empty_MID_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, TranslucentSortPriority) == 0x000020, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::TranslucentSortPriority' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, MeshPart) == 0x000028, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CustomBodyType) == 0x000030, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CustomBodyType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000031, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000032, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_BooleanOR_ReturnValue) == 0x000040, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetMaterials_ReturnValue) == 0x000048, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetNumMaterials_ReturnValue) == 0x000058, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_IsValid_ReturnValue_1) == 0x00005C, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Subtract_IntInt_ReturnValue) == 0x000060, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_LastIndex_ReturnValue) == 0x000064, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000068, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000078, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_IsValid_ReturnValue_2) == 0x000079, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_bool_Has_Been_Initd_Variable) == 0x00007A, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_bool_IsClosed_Variable) == 0x00007B, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_int_Variable) == 0x00007C, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_bool_Variable) == 0x000080, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_Get_Item) == 0x000088, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, K2Node_Select_Default) == 0x000090, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Array_Get_Item_1) == 0x000098, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_GetRelativeTransform_ReturnValue) == 0x0000A0, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000100, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001E0, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Add_IntInt_ReturnValue) == 0x0001E4, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_int_Variable_1) == 0x0001E8, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001EC, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001F0, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_struct_Variable) == 0x000200, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, Temp_bool_Variable_1) == 0x000260, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, CallFunc_AddComponent_ReturnValue) == 0x000268, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent, K2Node_Select_Default_1) == 0x000270, "Member 'PlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent::K2Node_Select_Default_1' has a wrong offset!");

struct PlayerPawn_Generic_C_EnableWaterAudio final
{
public:
	bool                                          IsEnteringWater;
	uint8                                         Pad_1[0x7];
	class USoundBase*                             Temp_object_Variable;
	class USoundBase*                             Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	class USoundBase*                             Temp_object_Variable_2;
	class USoundBase*                             Temp_object_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_31[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_51[0x7];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	class USoundBase*                             K2Node_Select_Default;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;
	uint8                                         Pad_A9[0x7];
	class USoundBase*                             K2Node_Select_Default_1;
};
static_assert(alignof(PlayerPawn_Generic_C_EnableWaterAudio) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_EnableWaterAudio");
static_assert(sizeof(PlayerPawn_Generic_C_EnableWaterAudio) == 0x0000B8, "Wrong size on PlayerPawn_Generic_C_EnableWaterAudio");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, IsEnteringWater) == 0x000000, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::IsEnteringWater' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, Temp_object_Variable) == 0x000008, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, Temp_object_Variable_1) == 0x000010, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, Temp_bool_Variable) == 0x000018, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, Temp_object_Variable_2) == 0x000020, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, Temp_object_Variable_3) == 0x000028, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, Temp_bool_Variable_1) == 0x000030, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, CallFunc_IsLocallyControlled_ReturnValue) == 0x000050, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, CallFunc_Add_VectorVector_ReturnValue) == 0x000058, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, K2Node_Select_Default) == 0x000088, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000090, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0000A8, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_EnableWaterAudio, K2Node_Select_Default_1) == 0x0000B0, "Member 'PlayerPawn_Generic_C_EnableWaterAudio::K2Node_Select_Default_1' has a wrong offset!");

struct PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Variable;
	class UCanvas*                                CallFunc_BeginDrawCanvasToRenderTarget_Canvas;
	struct FVector2D                              CallFunc_BeginDrawCanvasToRenderTarget_Size;
	struct FDrawToRenderTargetContext             CallFunc_BeginDrawCanvasToRenderTarget_Context;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_74[0x4];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_91[0x7];
	struct FVector                                CallFunc_GetVelocity_ReturnValue_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_C9[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_EB[0x1];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	class FName                                   Temp_name_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_F9[0x3];
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_105[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	bool                                          Temp_bool_IsClosed_Variable_1;
	uint8                                         Pad_10D[0x3];
	struct FVector                                CallFunc_GetVelocity_ReturnValue_2;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;
	uint8                                         Pad_141[0x7];
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_3;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_163[0x1];
	class FName                                   Temp_name_Variable_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_16A[0x2];
	class FName                                   Temp_name_Variable_2;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	bool                                          Temp_bool_IsClosed_Variable_2;
	uint8                                         Pad_172[0x2];
	class FName                                   Temp_name_Variable_3;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_17A[0x2];
	int32                                         Temp_int_Array_Index_Variable_2;
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;
	uint8                                         Pad_181[0x3];
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate;
	struct FDelegateHandleController              CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	int32                                         Temp_int_Array_Index_Variable_3;
	int32                                         Temp_int_Array_Index_Variable_4;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_1BA[0x2];
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         Temp_int_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;
	int32                                         Temp_int_Loop_Counter_Variable_3;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1D1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;
	double                                        CallFunc_MakeLiteralDouble_ReturnValue;
	TArray<class UMaterialInterface*>             K2Node_MakeArray_Array;
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_1FC[0x4];
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out;
	TDelegate<void(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* BaseMesh, TArray<class UCustomCharacterPart*>& PartsArray, TArray<class USkeletalMeshComponent*>& ValidSkeletalMeshComponentPartArray)> K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_3;
	struct FDelegateHandleController              CallFunc_WhenCosmeticsApplied_DelegateHandleController_Out;
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_24A[0x2];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	uint8                                         Pad_254[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_262[0x2];
	int32                                         Temp_int_Loop_Counter_Variable_4;
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;
	uint8                                         Pad_26C[0x4];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_1;
	TArray<class UMaterialInstanceDynamic*>       K2Node_MakeArray_Array_1;
	int32                                         Temp_int_Variable_3;
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_28E[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;
	uint8                                         Pad_294[0x4];
	TArray<class AActor*>                         Temp_object_Variable;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_2A9[0x3];
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_4;
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_2;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;
	uint8                                         Pad_2CB[0x1];
	float                                         K2Node_Event_Damage_2;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_2;
	struct FVector                                K2Node_Event_Momentum_2;
	struct FHitResult                             K2Node_Event_HitInfo_2;
	class AFortPawn*                              K2Node_Event_InstigatedBy_2;
	class AActor*                                 K2Node_Event_DamageCauser_2;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_2;
	struct FHitResult                             K2Node_Event_Hit;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_50B[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_514[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_5A4[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_VSizeSquared_ReturnValue;
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_613[0x5];
	class AFortWeapon*                            K2Node_Event_NewWeapon;
	class AFortWeapon*                            K2Node_Event_PrevWeapon;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_634[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue_3;
	double                                        CallFunc_BreakVector_X_2;
	double                                        CallFunc_BreakVector_Y_2;
	double                                        CallFunc_BreakVector_Z_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;
	double                                        CallFunc_VSize_ReturnValue;
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_5;
	uint8                                         Pad_6AC[0x4];
	struct FDelegateHandleController              CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_6;
	uint8                                         Pad_6C1[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_6;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_5;
	uint8                                         Pad_79A[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_5;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	bool                                          K2Node_Event_bNewUseFirstPersonCamera;
	uint8                                         Pad_872[0x2];
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_6;
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_3;
	class AB_Ranged_Generic_C*                    K2Node_DynamicCast_AsB_Ranged_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_899[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortWeap_BuildingToolBase*             K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_8B1[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_8C1[0x7];
	class UStaticMeshComponent*                   CallFunc_GetPencilMeshComponent_ReturnValue;
	bool                                          CallFunc_IsUsingFirstPersonCamera_ReturnValue;
	uint8                                         Pad_8D1[0x7];
	class AFortWeap_BuildingToolBase*             K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_8E1[0x7];
	class UStaticMeshComponent*                   CallFunc_GetPencilMeshComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;
	uint8                                         Pad_8F3[0x1];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue;
	int32                                         CallFunc_Round_ReturnValue;
	bool                                          Temp_bool_IsClosed_Variable_3;
	bool                                          K2Node_CustomEvent_NewUseFirstPersonCamera;
	uint8                                         Pad_8FE[0x2];
	class AActor*                                 K2Node_Event_NewBase;
	class ABuildingSMActor*                       K2Node_DynamicCast_AsBuilding_Static_Mesh;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_IsPlayerBuilt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;
	uint8                                         Pad_914[0x4];
	class AController*                            K2Node_Event_NewController;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	class FText                                   K2Node_Event_SpeechText;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_951[0x7];
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_969[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	uint8                                         Pad_988[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	uint8                                         Pad_A68[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	class AFortWeapon*                            K2Node_CustomEvent_NewWeapon;
	class AFortWeapon*                            K2Node_CustomEvent_PrevWeapon;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	double                                        K2Node_CustomEvent_InDuration;
	class AFortWeapon*                            K2Node_CustomEvent_New;
	class AFortWeapon*                            K2Node_CustomEvent_Prev;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	bool                                          CallFunc_IsValid_ReturnValue_13;
	uint8                                         Pad_B52[0x6];
	class AFortWeapon*                            K2Node_CustomEvent_CurrentWeapon;
	bool                                          CallFunc_IsValid_ReturnValue_14;
	uint8                                         Pad_B61[0x3];
	int32                                         Temp_int_Variable_4;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_5;
	uint8                                         Pad_B69[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;
	uint8                                         Pad_B71[0x3];
	int32                                         Temp_int_Variable_5;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_1;
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_B85[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;
	uint8                                         Pad_B8C[0x4];
	struct FTransform                             Temp_struct_Variable;
	class UUserWidget*                            CallFunc_Create_ReturnValue;
	class USkeletalMeshComponent*                 CallFunc_AddComponent_ReturnValue;
	TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	bool                                          CallFunc_HasAuthority_ReturnValue_3;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_6;
	uint8                                         Pad_C13[0x1];
	float                                         K2Node_Event_Damage_1;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;
	struct FVector                                K2Node_Event_Momentum_1;
	struct FHitResult                             K2Node_Event_HitInfo_1;
	class AController*                            K2Node_Event_InstigatedBy_1;
	class AActor*                                 K2Node_Event_DamageCauser_1;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;
	class AController*                            CallFunc_GetController_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_D61[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_D71[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_1;
	class AFortWindManager*                       CallFunc_GetWindManager_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_5;
	uint8                                         Pad_D81[0x7];
	class AWindManager_C*                         K2Node_DynamicCast_AsWind_Manager;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_D91[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	EFortCustomPartType                           Temp_byte_Variable;
	uint8                                         Pad_DB9[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	EPlayerWindParticleEmitters                   K2Node_CustomEvent_Player_Wind_Particle_Emitter_To_Fire;
	uint8                                         Pad_DC1[0x7];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_DDA[0x6];
	struct FTransform                             K2Node_Event_NewTransform;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
	struct FVector                                CallFunc_BreakTransform_Location_2;
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;
	struct FVector                                CallFunc_BreakTransform_Scale_2;
	double                                        CallFunc_BreakVector_X_3;
	double                                        CallFunc_BreakVector_Y_3;
	double                                        CallFunc_BreakVector_Z_3;
	bool                                          CallFunc_IsValid_ReturnValue_15;
	bool                                          CallFunc_IsValid_ReturnValue_16;
	uint8                                         Pad_F82[0x2];
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AFortPawn*                              K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	bool                                          Temp_bool_Has_Been_Initd_Variable_4;
	bool                                          CallFunc_IsDBNO_ReturnValue;
	bool                                          CallFunc_IsSkydiving_ReturnValue;
	bool                                          CallFunc_ShouldPlayDeathAnimation_ReturnValue;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_4;
	uint8                                         Pad_10CD[0x3];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_4;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_3;
	uint8                                         Pad_11A2[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_3;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_2;
	uint8                                         Pad_1291[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_2;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_1;
	uint8                                         Pad_1372[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_1;
	bool                                          K2Node_Event_First_Left;
	bool                                          K2Node_Event_First_Right;
	uint8                                         Pad_144A[0x6];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameState*                         K2Node_DynamicCast_AsFort_Game_State;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	bool                                          CallFunc_DBNOEnabledForGameMode_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_17;
	uint8                                         Pad_1483[0xD];
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class ADuplicateResOutMesh_C*                 CallFunc_FinishSpawningActor_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	bool                                          K2Node_CustomEvent_Blocked;
	bool                                          K2Node_CustomEvent_NewHidden;
	uint8                                         Pad_150F[0x1];
	class UAnimMontage*                           Temp_object_Variable_1;
	int32                                         Temp_int_Array_Index_Variable_5;
	bool                                          Temp_bool_Has_Been_Initd_Variable_5;
	uint8                                         Pad_151D[0x3];
	class AFortPlayerController*                  CallFunc_Array_Get_Item_2;
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;
	double                                        CallFunc_VSize_ReturnValue_1;
	bool                                          CallFunc_IsWeaponHiddenByHolstering_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          Temp_bool_IsClosed_Variable_4;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_7;
	bool                                          CallFunc_HasAuthority_ReturnValue_4;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_8;
	uint8                                         Pad_156F[0x1];
	int32                                         CallFunc_Array_Length_ReturnValue_4;
	uint8                                         Pad_1574[0x4];
	class USkeletalMeshComponent*                 CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_18;
	uint8                                         Pad_1583[0x5];
	TArray<class UMaterialInstanceDynamic*>       K2Node_MakeArray_Array_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1599[0x7];
	double                                        CallFunc_MakeLiteralDouble_ReturnValue_2;
	EFortCustomPartType                           CallFunc_Array_Get_Item_3;
	uint8                                         Pad_15A9[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_5;
	struct FCharacterPartMidArrayStruct           K2Node_MakeStruct_CharacterPartMidArrayStruct;
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;
	uint8                                         Pad_15C9[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	bool                                          CallFunc_Find_Shield_MID_Array_Found;
	uint8                                         Pad_15D1[0x3];
	int32                                         CallFunc_Find_Shield_MID_Array_Index;
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Find_Shield_MID_Array_MIDs;
	class USkeletalMeshComponent*                 CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_19;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_15F4[0x4];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_6;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_5;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_5;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_5;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_Setup_Duplicate_FX_Mesh_ObjectsValid;
	uint8                                         Pad_1615[0x3];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_5;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_4;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_4;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_4;
	bool                                          CallFunc_IsValid_ReturnValue_20;
	bool                                          CallFunc_IsValid_ReturnValue_21;
	uint8                                         Pad_1633[0x5];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_2;
	uint8                                         Pad_164C[0x4];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_1659[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_2;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;
	uint8                                         Pad_1669[0x3];
	class FName                                   K2Node_CustomEvent_Parameter_Name;
	double                                        K2Node_CustomEvent_Parameter_Value;
	bool                                          CallFunc_IsValid_ReturnValue_22;
	bool                                          Temp_bool_Variable_6;
	uint8                                         Pad_167A[0x2];
	int32                                         CallFunc_Array_Add_ReturnValue_4;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_4;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_3;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_3;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_3;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;
	uint8                                         Pad_169A[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	uint8                                         Pad_1771[0x3];
	int32                                         Temp_int_Variable_6;
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;
	uint8                                         Pad_177C[0x4];
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	class UAnimMontage*                           Temp_object_Variable_2;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_2;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_3;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_4;
	struct FVector                                CallFunc_GetVelocity_ReturnValue_4;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_BreakVector_X_4;
	double                                        CallFunc_BreakVector_Y_4;
	double                                        CallFunc_BreakVector_Z_4;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_3;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_5;
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue_1;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;
	bool                                          CallFunc_LineTraceSingle_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;
	uint8                                         Pad_1E8B[0x1];
	float                                         CallFunc_BreakHitResult_Time_1;
	float                                         CallFunc_BreakHitResult_Distance_1;
	uint8                                         Pad_1E94[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location_1;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;
	struct FVector                                CallFunc_BreakHitResult_Normal_1;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;
	class FName                                   CallFunc_BreakHitResult_BoneName_1;
	int32                                         CallFunc_BreakHitResult_HitItem_1;
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;
	uint8                                         Pad_1F24[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;
	struct FVector                                CallFunc_GetVelocity_ReturnValue_5;
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;
	uint8                                         Pad_1FB9[0x7];
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;
	bool                                          CallFunc_BooleanOR_ReturnValue_4;
	bool                                          CallFunc_BooleanOR_ReturnValue_5;
	bool                                          Temp_bool_IsClosed_Variable_5;
	uint8                                         Pad_20A3[0x5];
	class UAnimMontage*                           Temp_object_Variable_3;
	struct FCharacterPartMidArrayStruct           CallFunc_Array_Get_Item_4;
	int32                                         CallFunc_Array_Length_ReturnValue_6;
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;
	bool                                          Temp_bool_Variable_7;
	uint8                                         Pad_20CE[0x2];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_3;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_2;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_2;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_2;
	uint8                                         Pad_20E9[0x7];
	class UAnimMontage*                           K2Node_Select_Default;
	bool                                          CallFunc_IsValid_ReturnValue_23;
	uint8                                         Pad_20F9[0x7];
	class UAnimMontage*                           K2Node_Select_Default_1;
	float                                         CallFunc_PlayLocalAnimMontage_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_24;
	uint8                                         Pad_210D[0x3];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_3;
	int32                                         CallFunc_Array_Add_ReturnValue_5;
	uint8                                         Pad_2124[0x4];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	uint8                                         Pad_2131[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_3;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_213D[0x3];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_2;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_BaseMesh;
	TArray<class UCustomCharacterPart*>           K2Node_CustomEvent_PartsArray;
	TArray<class USkeletalMeshComponent*>         K2Node_CustomEvent_ValidSkeletalMeshComponentPartArray;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_1;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part_1;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart_1;
	EFortCustomPartType                           K2Node_CustomEvent_PartType_1;
	uint8                                         Pad_2189[0x7];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart;
	EFortCustomPartType                           K2Node_CustomEvent_PartType;
	bool                                          CallFunc_IsValid_ReturnValue_25;
	bool                                          CallFunc_IsValid_ReturnValue_26;
	bool                                          CallFunc_IsValid_ReturnValue_27;
	uint8                                         Pad_21AC[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	int32                                         CallFunc_Array_Add_ReturnValue_6;
	uint8                                         Pad_21BC[0x4];
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_4;
	int32                                         CallFunc_Array_Add_ReturnValue_7;
	uint8                                         Pad_21CC[0x4];
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	uint8                                         Pad_21D9[0x3];
	int32                                         CallFunc_GetNumMaterials_ReturnValue_4;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_4;
	int32                                         CallFunc_Array_Add_ReturnValue_8;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_4;
	bool                                          Temp_bool_Has_Been_Initd_Variable_6;
	bool                                          CallFunc_IsValid_ReturnValue_28;
	bool                                          CallFunc_IsValid_ReturnValue_29;
	int32                                         CallFunc_GetNumMaterials_ReturnValue_5;
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue_5;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_5;
	int32                                         CallFunc_Array_Add_ReturnValue_9;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_5;
	uint8                                         Pad_2201[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_2;
	int32                                         CallFunc_Round_ReturnValue_1;
	uint8                                         Pad_220C[0x4];
	struct FCharacterPartMidArrayStruct           K2Node_MakeStruct_CharacterPartMidArrayStruct_1;
	int32                                         CallFunc_Array_Add_ReturnValue_10;
	int32                                         CallFunc_Array_Add_ReturnValue_11;
	int32                                         CallFunc_Array_Add_ReturnValue_12;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_2235[0x3];
	float                                         CallFunc_GetScalarParameterValue_ReturnValue_3;
	int32                                         CallFunc_Round_ReturnValue_2;
	int32                                         CallFunc_Array_Add_ReturnValue_13;
	int32                                         K2Node_Select_Default_2;
	bool                                          Temp_bool_IsClosed_Variable_6;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;
	bool                                          Temp_bool_Has_Been_Initd_Variable_7;
	uint8                                         Pad_224C[0x4];
	struct FCameraLensInterfaceClassSupport       K2Node_Select_Default_3;
	TSubclassOf<class AActor>                     CallFunc_GetInterfaceClass_ReturnValue;
	TScriptInterface<class ICameraLensEffectInterface> CallFunc_SpawnGenericCameraLensEffect_ReturnValue;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	double                                        CallFunc_GetHealthPercent2_ReturnValue;
	class AB_PlayerShieldDamage_CameraLensEffect_C* K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect;
	bool                                          K2Node_DynamicCast_bSuccess_12;
	uint8                                         Pad_2289[0x7];
	class AB_PlayerHealthDamage_CameraLensEffect_C* K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect;
	bool                                          K2Node_DynamicCast_bSuccess_13;
	uint8                                         Pad_2299[0x7];
	double                                        CallFunc_GetShieldPercent2_ReturnValue;
	class AFortWindManager*                       CallFunc_GetWindManager_ReturnValue_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_9;
	uint8                                         Pad_22B1[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;
	uint8                                         Pad_22CA[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;
	uint8                                         Pad_22E2[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_2;
	int32                                         Temp_int_Array_Index_Variable_6;
	uint8                                         Pad_232C[0x4];
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_5;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	TDelegate<void(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)> K2Node_CreateDelegate_OutputDelegate_8;
	bool                                          Temp_bool_Has_Been_Initd_Variable_8;
	bool                                          Temp_bool_IsClosed_Variable_7;
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;
	uint8                                         Pad_253F[0x1];
	struct FCameraLensInterfaceClassSupport       K2Node_Select_Default_4;
	TSubclassOf<class AActor>                     CallFunc_GetInterfaceClass_ReturnValue_1;
	TScriptInterface<class ICameraLensEffectInterface> CallFunc_SpawnGenericCameraLensEffectDirectional_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_5;
	bool                                          CallFunc_HasAnyTags_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;
	uint8                                         Pad_2566[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;
	int32                                         CallFunc_RandomInteger_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_6;
	class FName                                   K2Node_Select_Default_5;
	float                                         CallFunc_PlayLocalAnimMontage_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;
	uint8                                         Pad_257D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_2585[0x3];
	class AController*                            CallFunc_GetController_ReturnValue_2;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_2;
	bool                                          K2Node_DynamicCast_bSuccess_14;
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;
	uint8                                         Pad_259B[0x5];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_30;
	bool                                          CallFunc_IsValid_ReturnValue_31;
	uint8                                         Pad_25C4[0x4];
	class UParticleSystem*                        K2Node_Event_ParticleSystemReference;
	class UNiagaraSystem*                         K2Node_Event_NiagaraSystemReference;
	class FName                                   K2Node_Event_FirstSocketName;
	class FName                                   K2Node_Event_SecondSocketName;
	float                                         K2Node_Event_Width;
	uint8                                         Pad_25E4[0x4];
	class UFXSystemComponent*                     K2Node_Event_OverrideParticleComp;
	class FName                                   K2Node_Event_OverideFirstSocketName;
	class FName                                   K2Node_Event_OverideSecondSocketName;
	bool                                          K2Node_Event_bActive;
	bool                                          CallFunc_IsValid_ReturnValue_32;
	uint8                                         Pad_25FA[0x6];
	class UFXSystemAsset*                         CallFunc_GetFXSystemAsset_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_33;
	uint8                                         Pad_2609[0x7];
	class UFXSystemComponent*                     CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable_9;
	bool                                          Temp_bool_IsClosed_Variable_8;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_10;
	bool                                          Temp_bool_IsClosed_Variable_9;
	uint8                                         Pad_261C[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	uint8                                         Pad_262C[0x4];
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3;
	double                                        K2Node_VariableSet_Damage_Taken_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
	uint8                                         Pad_2654[0x4];
	double                                        CallFunc_Round_A_ImplicitCast;
	double                                        K2Node_VariableSet_Shield_Shatter_Opacity_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	uint8                                         Pad_266C[0x4];
	double                                        CallFunc_SetShieldMids_Highlight_Cracks_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4;
	float                                         CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1;
	uint8                                         Pad_2694[0x4];
	double                                        CallFunc_Round_A_ImplicitCast_1;
	double                                        CallFunc_Round_A_ImplicitCast_2;
};
static_assert(alignof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic) == 0x000010, "Wrong alignment on PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic");
static_assert(sizeof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic) == 0x0026B0, "Wrong size on PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, EntryPoint) == 0x000000, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable) == 0x000004, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BeginDrawCanvasToRenderTarget_Canvas) == 0x000008, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BeginDrawCanvasToRenderTarget_Canvas' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BeginDrawCanvasToRenderTarget_Size) == 0x000010, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BeginDrawCanvasToRenderTarget_Size' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BeginDrawCanvasToRenderTarget_Context) == 0x000020, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BeginDrawCanvasToRenderTarget_Context' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable) == 0x000030, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable_1) == 0x000034, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable) == 0x000038, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000040, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetSocketLocation_ReturnValue) == 0x000048, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000060, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetVelocity_ReturnValue) == 0x000078, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable) == 0x000090, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetVelocity_ReturnValue_1) == 0x000098, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_X) == 0x0000B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Y) == 0x0000B8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Z) == 0x0000C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable) == 0x0000E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000E9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000EA, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable) == 0x0000EC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_name_Variable) == 0x0000F4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_1) == 0x0000F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable_1) == 0x0000FC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable_1) == 0x000100, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_2) == 0x000104, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_2) == 0x000108, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_1) == 0x00010C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetVelocity_ReturnValue_2) == 0x000110, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetVelocity_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_X_1) == 0x000128, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Y_1) == 0x000130, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Z_1) == 0x000138, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000140, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeVector_ReturnValue_1) == 0x000148, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_ReturnValue_3) == 0x000160, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_3) == 0x000161, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000162, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_name_Variable_1) == 0x000164, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue) == 0x000168, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAuthority_ReturnValue) == 0x000169, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_name_Variable_2) == 0x00016C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAuthority_ReturnValue_1) == 0x000170, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_2) == 0x000171, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_name_Variable_3) == 0x000174, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAuthority_ReturnValue_2) == 0x000178, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue) == 0x000179, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable_2) == 0x00017C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_1) == 0x000180, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000184, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out) == 0x000190, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable_2) == 0x0001A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001A4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable_3) == 0x0001A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable_4) == 0x0001AC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Get_Item) == 0x0001B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_1) == 0x0001B8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_2) == 0x0001B9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetNumMaterials_ReturnValue) == 0x0001BC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable_2) == 0x0001C4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_4) == 0x0001C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable_3) == 0x0001CC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue) == 0x0001D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_5) == 0x0001D4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeLiteralDouble_ReturnValue) == 0x0001D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeLiteralDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_MakeArray_Array) == 0x0001E0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out) == 0x000200, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_2) == 0x000210, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_3) == 0x00021C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticsApplied_DelegateHandleController_Out) == 0x000228, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticsApplied_DelegateHandleController_Out' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1) == 0x000238, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_3) == 0x000248, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_4) == 0x000249, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetNumMaterials_ReturnValue_1) == 0x00024C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetNumMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000250, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetMaterial_ReturnValue) == 0x000258, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000260, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_4) == 0x000261, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable_4) == 0x000264, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_6) == 0x000268, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeLiteralDouble_ReturnValue_1) == 0x000270, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeLiteralDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_MakeArray_Array_1) == 0x000278, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable_3) == 0x000288, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsMovingOnGround_ReturnValue) == 0x00028C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue) == 0x00028D, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_7) == 0x000290, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_object_Variable) == 0x000298, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0002A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002AC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_2) == 0x0002B8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0002C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_5) == 0x0002C9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x0002CA, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Damage_2) == 0x0002CC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Damage_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DamageTags_2) == 0x0002D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DamageTags_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Momentum_2) == 0x0002F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Momentum_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_HitInfo_2) == 0x000308, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_HitInfo_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_InstigatedBy_2) == 0x0003E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_InstigatedBy_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DamageCauser_2) == 0x0003F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DamageCauser_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_EffectContext_2) == 0x0003F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_EffectContext_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Hit) == 0x000410, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0004F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_6) == 0x000508, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_bBlockingHit) == 0x000509, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_bInitialOverlap) == 0x00050A, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Time) == 0x00050C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Distance) == 0x000510, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Location) == 0x000518, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_ImpactPoint) == 0x000530, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Normal) == 0x000548, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_ImpactNormal) == 0x000560, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_PhysMat) == 0x000578, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitActor) == 0x000580, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitComponent) == 0x000588, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitBoneName) == 0x000590, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_BoneName) == 0x000594, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitItem) == 0x000598, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_ElementIndex) == 0x00059C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_FaceIndex) == 0x0005A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_TraceStart) == 0x0005A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_TraceEnd) == 0x0005C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0005D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_VSizeSquared_ReturnValue) == 0x0005F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_VSizeSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeRotFromX_ReturnValue) == 0x0005F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_ReturnValue_4) == 0x000610, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_7) == 0x000611, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_8) == 0x000612, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_NewWeapon) == 0x000618, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_NewWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_PrevWeapon) == 0x000620, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_PrevWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_RandomFloatInRange_ReturnValue) == 0x000628, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DeltaSeconds) == 0x000630, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeRotator_ReturnValue) == 0x000638, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetVelocity_ReturnValue_3) == 0x000650, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetVelocity_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_X_2) == 0x000668, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Y_2) == 0x000670, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Z_2) == 0x000678, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeVector_ReturnValue_2) == 0x000680, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_VSize_ReturnValue) == 0x000698, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_5) == 0x0006A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out_1) == 0x0006B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticSpecificPartApplied_DelegateHandleController_Out_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType_6) == 0x0006C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters_6) == 0x0006C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_SwitchEnum_CmpSuccess) == 0x000798, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType_5) == 0x000799, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters_5) == 0x0007A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_SwitchEnum_CmpSuccess_1) == 0x000870, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_bNewUseFirstPersonCamera) == 0x000871, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_bNewUseFirstPersonCamera' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_6) == 0x000874, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_3) == 0x000880, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsB_Ranged_Generic) == 0x000890, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsB_Ranged_Generic' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess) == 0x000898, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetController_ReturnValue) == 0x0008A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base) == 0x0008A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_1) == 0x0008B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0008B8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_2) == 0x0008C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetPencilMeshComponent_ReturnValue) == 0x0008C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetPencilMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsUsingFirstPersonCamera_ReturnValue) == 0x0008D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsUsingFirstPersonCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base_1) == 0x0008D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Weap_Building_Tool_Base_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_3) == 0x0008E0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetPencilMeshComponent_ReturnValue_1) == 0x0008E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetPencilMeshComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_9) == 0x0008F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_10) == 0x0008F1, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsPlayerControlled_ReturnValue) == 0x0008F2, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetScalarParameterValue_ReturnValue) == 0x0008F4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Round_ReturnValue) == 0x0008F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_3) == 0x0008FC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_NewUseFirstPersonCamera) == 0x0008FD, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_NewUseFirstPersonCamera' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_NewBase) == 0x000900, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_NewBase' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsBuilding_Static_Mesh) == 0x000908, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsBuilding_Static_Mesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_4) == 0x000910, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsPlayerBuilt_ReturnValue) == 0x000911, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsPlayerBuilt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_11) == 0x000912, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x000913, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_NewController) == 0x000918, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_NewController' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000920, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_SpeechText) == 0x000928, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_SpeechText' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000940, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000950, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000958, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_5) == 0x000968, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue_1) == 0x00096C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000970, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetTransform_ReturnValue) == 0x000990, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Location) == 0x0009F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Rotation) == 0x000A08, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Scale) == 0x000A20, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_ComposeRotators_ReturnValue) == 0x000A38, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_VectorVector_ReturnValue) == 0x000A50, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeTransform_ReturnValue) == 0x000A70, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000AD0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Location_1) == 0x000AD8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Rotation_1) == 0x000AF0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Scale_1) == 0x000B08, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_NewWeapon) == 0x000B20, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_NewWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PrevWeapon) == 0x000B28, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PrevWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000B30, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_InDuration) == 0x000B38, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_InDuration' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_New) == 0x000B40, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_New' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Prev) == 0x000B48, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Prev' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_12) == 0x000B50, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_13) == 0x000B51, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_CurrentWeapon) == 0x000B58, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_CurrentWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_14) == 0x000B60, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable_4) == 0x000B64, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_5) == 0x000B68, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_8) == 0x000B6C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_2) == 0x000B70, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable_5) == 0x000B74, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetMaterial_ReturnValue_1) == 0x000B78, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue) == 0x000B80, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000B84, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_9) == 0x000B88, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_struct_Variable) == 0x000B90, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Create_ReturnValue) == 0x000BF0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_AddComponent_ReturnValue) == 0x000BF8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface) == 0x000C00, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_5) == 0x000C10, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAuthority_ReturnValue_3) == 0x000C11, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_6) == 0x000C12, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Damage_1) == 0x000C14, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DamageTags_1) == 0x000C18, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Momentum_1) == 0x000C38, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_HitInfo_1) == 0x000C50, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_InstigatedBy_1) == 0x000D30, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DamageCauser_1) == 0x000D38, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_EffectContext_1) == 0x000D40, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetController_ReturnValue_1) == 0x000D58, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000D60, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Player_Controller_1) == 0x000D68, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_6) == 0x000D70, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetScalarParameterValue_ReturnValue_1) == 0x000D74, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetScalarParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetWindManager_ReturnValue) == 0x000D78, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetWindManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_ReturnValue_5) == 0x000D80, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsWind_Manager) == 0x000D88, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsWind_Manager' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_7) == 0x000D90, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetTimer_ReturnValue) == 0x000D98, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000DA0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000DA8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000DB0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_byte_Variable) == 0x000DB8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue_2) == 0x000DBC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Player_Wind_Particle_Emitter_To_Fire) == 0x000DC0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Player_Wind_Particle_Emitter_To_Fire' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000DC8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x000DD0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_3) == 0x000DD8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanOR_ReturnValue) == 0x000DD9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_NewTransform) == 0x000DE0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_NewTransform' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000E40, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Location_2) == 0x000F20, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Rotation_2) == 0x000F38, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakTransform_Scale_2) == 0x000F50, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_X_3) == 0x000F68, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Y_3) == 0x000F70, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Z_3) == 0x000F78, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_15) == 0x000F80, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_16) == 0x000F81, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Damage) == 0x000F84, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DamageTags) == 0x000F88, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Momentum) == 0x000FA8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_HitInfo) == 0x000FC0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_InstigatedBy) == 0x0010A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_DamageCauser) == 0x0010A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_EffectContext) == 0x0010B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_4) == 0x0010C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDBNO_ReturnValue) == 0x0010C9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsSkydiving_ReturnValue) == 0x0010CA, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_ShouldPlayDeathAnimation_ReturnValue) == 0x0010CB, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_ShouldPlayDeathAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType_4) == 0x0010CC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters_4) == 0x0010D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_SwitchEnum_CmpSuccess_2) == 0x0011A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType_3) == 0x0011A1, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters_3) == 0x0011A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetRootComponent_ReturnValue) == 0x001278, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x001280, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnSoundAttached_ReturnValue) == 0x001288, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType_2) == 0x001290, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters_2) == 0x001298, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x001368, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_SwitchEnum_CmpSuccess_3) == 0x001370, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType_1) == 0x001371, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters_1) == 0x001378, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_First_Left) == 0x001448, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_First_Left' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_First_Right) == 0x001449, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_First_Right' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x001450, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnEmitterAtLocation_ReturnValue_2) == 0x001468, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnEmitterAtLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetGameState_ReturnValue) == 0x001470, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Game_State) == 0x001478, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Game_State' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_8) == 0x001480, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_DBNOEnabledForGameMode_ReturnValue) == 0x001481, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_DBNOEnabledForGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_17) == 0x001482, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetTransform_ReturnValue_1) == 0x001490, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Get_Item_1) == 0x0014F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0014F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_FinishSpawningActor_ReturnValue) == 0x001500, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue_3) == 0x001508, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue_1) == 0x00150C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Blocked) == 0x00150D, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Blocked' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_NewHidden) == 0x00150E, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_NewHidden' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_object_Variable_1) == 0x001510, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable_5) == 0x001518, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_5) == 0x00151C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Get_Item_2) == 0x001520, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetPlayerPawn_ReturnValue) == 0x001528, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x001530, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x001548, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_VSize_ReturnValue_1) == 0x001560, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsWeaponHiddenByHolstering_ReturnValue) == 0x001568, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsWeaponHiddenByHolstering_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x001569, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_1) == 0x00156A, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_4) == 0x00156B, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_7) == 0x00156C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAuthority_ReturnValue_4) == 0x00156D, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAuthority_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_8) == 0x00156E, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue_4) == 0x001570, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Map_Find_Value) == 0x001578, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Map_Find_ReturnValue) == 0x001580, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue_2) == 0x001581, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_18) == 0x001582, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_MakeArray_Array_2) == 0x001588, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanAND_ReturnValue) == 0x001598, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeLiteralDouble_ReturnValue_2) == 0x0015A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeLiteralDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Get_Item_3) == 0x0015A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue_5) == 0x0015AC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_MakeStruct_CharacterPartMidArrayStruct) == 0x0015B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_MakeStruct_CharacterPartMidArrayStruct' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue_3) == 0x0015C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_1) == 0x0015CC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Find_Shield_MID_Array_Found) == 0x0015D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Find_Shield_MID_Array_Found' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Find_Shield_MID_Array_Index) == 0x0015D4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Find_Shield_MID_Array_Index' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Find_Shield_MID_Array_MIDs) == 0x0015D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Find_Shield_MID_Array_MIDs' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Map_Find_Value_1) == 0x0015E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Map_Find_ReturnValue_1) == 0x0015F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_19) == 0x0015F1, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanAND_ReturnValue_1) == 0x0015F2, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanOR_ReturnValue_1) == 0x0015F3, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn_6) == 0x0015F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Part_5) == 0x001600, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Part_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_MeshPart_5) == 0x001608, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_MeshPart_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartType_5) == 0x001610, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartType_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanOR_ReturnValue_2) == 0x001611, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x001612, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanOR_ReturnValue_3) == 0x001613, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Setup_Duplicate_FX_Mesh_ObjectsValid) == 0x001614, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Setup_Duplicate_FX_Mesh_ObjectsValid' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn_5) == 0x001618, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Part_4) == 0x001620, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Part_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_MeshPart_4) == 0x001628, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_MeshPart_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartType_4) == 0x001630, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartType_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_20) == 0x001631, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_21) == 0x001632, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_4) == 0x001638, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetMaterial_ReturnValue_2) == 0x001640, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_2) == 0x001648, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x001650, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_9) == 0x001658, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetNumMaterials_ReturnValue_2) == 0x00165C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetNumMaterials_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x001660, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_3) == 0x001664, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x001668, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Parameter_Name) == 0x00166C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Parameter_Name' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Parameter_Value) == 0x001670, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Parameter_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_22) == 0x001678, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_6) == 0x001679, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_4) == 0x00167C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn_4) == 0x001680, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Part_3) == 0x001688, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Part_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_MeshPart_3) == 0x001690, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_MeshPart_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartType_3) == 0x001698, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartType_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_EventType) == 0x001699, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_GameplayCueEvent_Parameters) == 0x0016A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_2) == 0x001770, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Variable_6) == 0x001774, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_10) == 0x001778, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x001780, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x001860, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_object_Variable_2) == 0x001940, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult_2) == 0x001948, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult_3) == 0x001A28, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult_4) == 0x001B08, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetVelocity_ReturnValue_4) == 0x001BE8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetVelocity_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x001C00, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_X_4) == 0x001C18, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Y_4) == 0x001C20, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakVector_Z_4) == 0x001C28, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x001C30, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeVector_ReturnValue_3) == 0x001C48, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult_5) == 0x001C60, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeRotFromX_ReturnValue_1) == 0x001D40, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeRotFromX_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x001D58, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x001D60, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_VectorVector_ReturnValue_1) == 0x001D78, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_VectorVector_ReturnValue_2) == 0x001D90, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LineTraceSingle_OutHit) == 0x001DA8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LineTraceSingle_ReturnValue) == 0x001E88, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_bBlockingHit_1) == 0x001E89, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x001E8A, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Time_1) == 0x001E8C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Distance_1) == 0x001E90, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Location_1) == 0x001E98, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_ImpactPoint_1) == 0x001EB0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_Normal_1) == 0x001EC8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_ImpactNormal_1) == 0x001EE0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_PhysMat_1) == 0x001EF8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitActor_1) == 0x001F00, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitComponent_1) == 0x001F08, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitBoneName_1) == 0x001F10, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_BoneName_1) == 0x001F14, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_HitItem_1) == 0x001F18, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_ElementIndex_1) == 0x001F1C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_FaceIndex_1) == 0x001F20, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_TraceStart_1) == 0x001F28, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BreakHitResult_TraceEnd_1) == 0x001F40, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetVelocity_ReturnValue_5) == 0x001F58, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetVelocity_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Cross_VectorVector_ReturnValue) == 0x001F70, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Normal_ReturnValue) == 0x001F88, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x001FA0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x001FB8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x001FC0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanOR_ReturnValue_4) == 0x0020A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanOR_ReturnValue_5) == 0x0020A1, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_5) == 0x0020A2, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_object_Variable_3) == 0x0020A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Get_Item_4) == 0x0020B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Length_ReturnValue_6) == 0x0020C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue_4) == 0x0020CC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Variable_7) == 0x0020CD, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn_3) == 0x0020D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Part_2) == 0x0020D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Part_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_MeshPart_2) == 0x0020E0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_MeshPart_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartType_2) == 0x0020E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartType_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Select_Default) == 0x0020F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_23) == 0x0020F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Select_Default_1) == 0x002100, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_PlayLocalAnimMontage_ReturnValue) == 0x002108, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_PlayLocalAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_24) == 0x00210C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_5) == 0x002110, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetMaterial_ReturnValue_3) == 0x002118, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_5) == 0x002120, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1) == 0x002128, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_10) == 0x002130, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetNumMaterials_ReturnValue_3) == 0x002134, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetNumMaterials_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x002138, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00213C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn_2) == 0x002140, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_BaseMesh) == 0x002148, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_BaseMesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartsArray) == 0x002150, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartsArray' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_ValidSkeletalMeshComponentPartArray) == 0x002160, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_ValidSkeletalMeshComponentPartArray' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn_1) == 0x002170, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Part_1) == 0x002178, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Part_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_MeshPart_1) == 0x002180, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_MeshPart_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartType_1) == 0x002188, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartType_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Pawn) == 0x002190, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_Part) == 0x002198, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_MeshPart) == 0x0021A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CustomEvent_PartType) == 0x0021A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CustomEvent_PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_25) == 0x0021A9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_26) == 0x0021AA, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_27) == 0x0021AB, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue_6) == 0x0021B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_6) == 0x0021B8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetMaterial_ReturnValue_4) == 0x0021C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_7) == 0x0021C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2) == 0x0021D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_11) == 0x0021D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetNumMaterials_ReturnValue_4) == 0x0021DC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetNumMaterials_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_IntInt_ReturnValue_4) == 0x0021E0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_8) == 0x0021E4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_IntInt_ReturnValue_4) == 0x0021E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_6) == 0x0021E9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_28) == 0x0021EA, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_29) == 0x0021EB, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetNumMaterials_ReturnValue_5) == 0x0021EC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetNumMaterials_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetMaterial_ReturnValue_5) == 0x0021F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_IntInt_ReturnValue_5) == 0x0021F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_9) == 0x0021FC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_LessEqual_IntInt_ReturnValue_5) == 0x002200, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_LessEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetScalarParameterValue_ReturnValue_2) == 0x002204, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetScalarParameterValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Round_ReturnValue_1) == 0x002208, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_MakeStruct_CharacterPartMidArrayStruct_1) == 0x002210, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_MakeStruct_CharacterPartMidArrayStruct_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_10) == 0x002228, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_11) == 0x00222C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_12) == 0x002230, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsLocallyControlled_ReturnValue) == 0x002234, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetScalarParameterValue_ReturnValue_3) == 0x002238, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetScalarParameterValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Round_ReturnValue_2) == 0x00223C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Round_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Add_ReturnValue_13) == 0x002240, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Add_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Select_Default_2) == 0x002244, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_6) == 0x002248, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_True_if_break_was_hit_Variable) == 0x002249, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_3) == 0x00224A, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_7) == 0x00224B, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Select_Default_3) == 0x002250, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetInterfaceClass_ReturnValue) == 0x002258, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetInterfaceClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnGenericCameraLensEffect_ReturnValue) == 0x002260, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnGenericCameraLensEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x002270, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetHealthPercent2_ReturnValue) == 0x002278, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetHealthPercent2_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect) == 0x002280, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsB_Player_Shield_Damage_Camera_Lens_Effect' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_12) == 0x002288, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect) == 0x002290, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsB_Player_Health_Damage_Camera_Lens_Effect' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_13) == 0x002298, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetShieldPercent2_ReturnValue) == 0x0022A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetShieldPercent2_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetWindManager_ReturnValue_1) == 0x0022A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetWindManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_9) == 0x0022B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0022B8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0022C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_4) == 0x0022C9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x0022D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x0022E0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_5) == 0x0022E1, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_7) == 0x0022E4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0022F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x002308, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_VectorVector_ReturnValue_2) == 0x002310, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Array_Index_Variable_6) == 0x002328, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Array_Index_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Conv_VectorToRotator_ReturnValue_2) == 0x002330, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Conv_VectorToRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Array_Get_Item_5) == 0x002348, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetSocketLocation_ReturnValue_1) == 0x002350, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x002368, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1) == 0x002448, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x002528, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_CreateDelegate_OutputDelegate_8) == 0x002530, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_8) == 0x00253C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_7) == 0x00253D, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_6) == 0x00253E, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Select_Default_4) == 0x002540, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetInterfaceClass_ReturnValue_1) == 0x002548, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetInterfaceClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SpawnGenericCameraLensEffectDirectional_ReturnValue) == 0x002550, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SpawnGenericCameraLensEffectDirectional_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable_5) == 0x002560, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_HasAnyTags_ReturnValue) == 0x002564, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue_5) == 0x002565, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_11) == 0x002568, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_RandomInteger_ReturnValue) == 0x00256C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_int_Loop_Counter_Variable_6) == 0x002570, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_int_Loop_Counter_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Select_Default_5) == 0x002574, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_PlayLocalAnimMontage_ReturnValue_1) == 0x002578, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_PlayLocalAnimMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_IntInt_ReturnValue_6) == 0x00257C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_IntInt_ReturnValue_12) == 0x002580, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanAND_ReturnValue_2) == 0x002584, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetController_ReturnValue_2) == 0x002588, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_AsFort_Player_Controller_2) == 0x002590, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_AsFort_Player_Controller_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_DynamicCast_bSuccess_14) == 0x002598, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Not_PreBool_ReturnValue_7) == 0x002599, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsLocalPlayerController_ReturnValue) == 0x00259A, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x0025A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0025A8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Conv_VectorToLinearColor_ReturnValue_1) == 0x0025B0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Conv_VectorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x0025C0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_BooleanAND_ReturnValue_3) == 0x0025C1, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_30) == 0x0025C2, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_31) == 0x0025C3, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_ParticleSystemReference) == 0x0025C8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_ParticleSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_NiagaraSystemReference) == 0x0025D0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_FirstSocketName) == 0x0025D8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_FirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_SecondSocketName) == 0x0025DC, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_SecondSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_Width) == 0x0025E0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_Width' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_OverrideParticleComp) == 0x0025E8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_OverrideParticleComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_OverideFirstSocketName) == 0x0025F0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_OverideFirstSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_OverideSecondSocketName) == 0x0025F4, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_OverideSecondSocketName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_Event_bActive) == 0x0025F8, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_Event_bActive' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_32) == 0x0025F9, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_GetFXSystemAsset_ReturnValue) == 0x002600, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_GetFXSystemAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsValid_ReturnValue_33) == 0x002608, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue) == 0x002610, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetAssetOrSpawnAltFXAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_Has_Been_Initd_Variable_9) == 0x002618, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_Has_Been_Initd_Variable_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_8) == 0x002619, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_IsDedicatedServer_ReturnValue_10) == 0x00261A, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_IsDedicatedServer_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, Temp_bool_IsClosed_Variable_9) == 0x00261B, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::Temp_bool_IsClosed_Variable_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_DoubleDouble_ReturnValue) == 0x002620, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x002628, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x002630, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast) == 0x002638, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1) == 0x00263C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2) == 0x002640, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3) == 0x002644, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_VariableSet_Damage_Taken_ImplicitCast) == 0x002648, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_VariableSet_Damage_Taken_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x002650, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Round_A_ImplicitCast) == 0x002658, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Round_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, K2Node_VariableSet_Shield_Shatter_Opacity_ImplicitCast) == 0x002660, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::K2Node_VariableSet_Shield_Shatter_Opacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x002668, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetShieldMids_Highlight_Cracks_ImplicitCast) == 0x002670, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetShieldMids_Highlight_Cracks_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x002678, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x002680, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4) == 0x002684, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5) == 0x002688, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x00268C, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1) == 0x002690, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Round_A_ImplicitCast_1) == 0x002698, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Round_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic, CallFunc_Round_A_ImplicitCast_2) == 0x0026A0, "Member 'PlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic::CallFunc_Round_A_ImplicitCast_2' has a wrong offset!");

struct PlayerPawn_Generic_C_Find_Shield_MID_Array final
{
public:
	EFortCustomPartType                           PartType;
	bool                                          Found;
	uint8                                         Pad_2[0x2];
	int32                                         Index_0;
	TArray<class UMaterialInstanceDynamic*>       MIDs;
	int32                                         L_Index;
	bool                                          L_Found;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_1E[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_25[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FCharacterPartMidArrayStruct           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_Find_Shield_MID_Array) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Find_Shield_MID_Array");
static_assert(sizeof(PlayerPawn_Generic_C_Find_Shield_MID_Array) == 0x000050, "Wrong size on PlayerPawn_Generic_C_Find_Shield_MID_Array");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, PartType) == 0x000000, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, Found) == 0x000001, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::Found' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, Index_0) == 0x000004, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::Index_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, MIDs) == 0x000008, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::MIDs' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, L_Index) == 0x000018, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::L_Index' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, L_Found) == 0x00001C, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::L_Found' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, Temp_bool_True_if_break_was_hit_Variable) == 0x00001D, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, Temp_int_Array_Index_Variable) == 0x000020, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_Array_Get_Item) == 0x000030, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004D, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Find_Shield_MID_Array, CallFunc_BooleanAND_ReturnValue) == 0x00004E, "Member 'PlayerPawn_Generic_C_Find_Shield_MID_Array::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_FindShieldOpacity final
{
public:
	double                                        CurrentShieldOpacity;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	uint8                                         Pad_1C[0x4];
	struct FCharacterPartMidArrayStruct           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_3D[0x3];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_51[0x7];
	double                                        CallFunc_FMax_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue_1;
	double                                        CallFunc_FMax_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Generic_C_FindShieldOpacity) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_FindShieldOpacity");
static_assert(sizeof(PlayerPawn_Generic_C_FindShieldOpacity) == 0x000080, "Wrong size on PlayerPawn_Generic_C_FindShieldOpacity");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CurrentShieldOpacity) == 0x000000, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CurrentShieldOpacity' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, Temp_int_Array_Index_Variable) == 0x000008, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Array_Get_Item) == 0x000020, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Less_IntInt_ReturnValue_1) == 0x000050, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_FMax_ReturnValue) == 0x000058, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_FMax_ReturnValue_1) == 0x000060, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_FMax_ReturnValue_2) == 0x000068, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000070, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_FindShieldOpacity, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000078, "Member 'PlayerPawn_Generic_C_FindShieldOpacity::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1 final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2 final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Athena_Equipping final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Athena_Equipping) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Athena_Equipping");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Athena_Equipping) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Athena_Equipping");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Athena_Equipping, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Athena_Equipping::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Athena_Equipping, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Athena_Equipping::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Damage final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Damage) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Damage");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Damage) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Damage");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Damage, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Damage::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Damage, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Damage::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Damage_Shielded final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Damage_Shielded) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Damage_Shielded");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Damage_Shielded) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Damage_Shielded");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Damage_Shielded, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Damage_Shielded::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Damage_Shielded, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Damage_Shielded::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Shield_Destroyed::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged");
static_assert(sizeof(PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged) == 0x0000D8, "Wrong size on PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged, EventType) == 0x000000, "Member 'PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged, Parameters) == 0x000008, "Member 'PlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged::Parameters' has a wrong offset!");

struct PlayerPawn_Generic_C_GetHealthPercent2 final
{
public:
	double                                        ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	uint8                                         Pad_19[0x3];
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_29[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Generic_C_GetHealthPercent2) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GetHealthPercent2");
static_assert(sizeof(PlayerPawn_Generic_C_GetHealthPercent2) == 0x000050, "Wrong size on PlayerPawn_Generic_C_GetHealthPercent2");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, ReturnValue) == 0x000000, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000010, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x000014, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1) == 0x000018, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1) == 0x00001C, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetHealthPercent2, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'PlayerPawn_Generic_C_GetHealthPercent2::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Generic_C_GetShieldPercent2 final
{
public:
	double                                        ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	uint8                                         Pad_19[0x3];
	float                                         CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_29[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Generic_C_GetShieldPercent2) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_GetShieldPercent2");
static_assert(sizeof(PlayerPawn_Generic_C_GetShieldPercent2) == 0x000050, "Wrong size on PlayerPawn_Generic_C_GetShieldPercent2");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, ReturnValue) == 0x000000, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute) == 0x000010, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue) == 0x000014, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1) == 0x000018, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1) == 0x00001C, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_GetShieldPercent2, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'PlayerPawn_Generic_C_GetShieldPercent2::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Generic_C_InternalSetFirstPersonCamera final
{
public:
	bool                                          NewUseFirstPersonCamera;
};
static_assert(alignof(PlayerPawn_Generic_C_InternalSetFirstPersonCamera) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_InternalSetFirstPersonCamera");
static_assert(sizeof(PlayerPawn_Generic_C_InternalSetFirstPersonCamera) == 0x000001, "Wrong size on PlayerPawn_Generic_C_InternalSetFirstPersonCamera");
static_assert(offsetof(PlayerPawn_Generic_C_InternalSetFirstPersonCamera, NewUseFirstPersonCamera) == 0x000000, "Member 'PlayerPawn_Generic_C_InternalSetFirstPersonCamera::NewUseFirstPersonCamera' has a wrong offset!");

struct PlayerPawn_Generic_C_Melee_Effect_Color final
{
public:
	struct FVector                                Melee_Color_Set;
};
static_assert(alignof(PlayerPawn_Generic_C_Melee_Effect_Color) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Melee_Effect_Color");
static_assert(sizeof(PlayerPawn_Generic_C_Melee_Effect_Color) == 0x000018, "Wrong size on PlayerPawn_Generic_C_Melee_Effect_Color");
static_assert(offsetof(PlayerPawn_Generic_C_Melee_Effect_Color, Melee_Color_Set) == 0x000000, "Member 'PlayerPawn_Generic_C_Melee_Effect_Color::Melee_Color_Set' has a wrong offset!");

struct PlayerPawn_Generic_C_MeleeSwingLeft final
{
public:
	bool                                          First_Left;
};
static_assert(alignof(PlayerPawn_Generic_C_MeleeSwingLeft) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_MeleeSwingLeft");
static_assert(sizeof(PlayerPawn_Generic_C_MeleeSwingLeft) == 0x000001, "Wrong size on PlayerPawn_Generic_C_MeleeSwingLeft");
static_assert(offsetof(PlayerPawn_Generic_C_MeleeSwingLeft, First_Left) == 0x000000, "Member 'PlayerPawn_Generic_C_MeleeSwingLeft::First_Left' has a wrong offset!");

struct PlayerPawn_Generic_C_MeleeSwingRight final
{
public:
	bool                                          First_Right;
};
static_assert(alignof(PlayerPawn_Generic_C_MeleeSwingRight) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_MeleeSwingRight");
static_assert(sizeof(PlayerPawn_Generic_C_MeleeSwingRight) == 0x000001, "Wrong size on PlayerPawn_Generic_C_MeleeSwingRight");
static_assert(offsetof(PlayerPawn_Generic_C_MeleeSwingRight, First_Right) == 0x000000, "Member 'PlayerPawn_Generic_C_MeleeSwingRight::First_Right' has a wrong offset!");

struct PlayerPawn_Generic_C_MultiEndSwap final
{
public:
	class AFortWeapon*                            CurrentWeapon_0;
};
static_assert(alignof(PlayerPawn_Generic_C_MultiEndSwap) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_MultiEndSwap");
static_assert(sizeof(PlayerPawn_Generic_C_MultiEndSwap) == 0x000008, "Wrong size on PlayerPawn_Generic_C_MultiEndSwap");
static_assert(offsetof(PlayerPawn_Generic_C_MultiEndSwap, CurrentWeapon_0) == 0x000000, "Member 'PlayerPawn_Generic_C_MultiEndSwap::CurrentWeapon_0' has a wrong offset!");

struct PlayerPawn_Generic_C_MultiSwapWeapon final
{
public:
	class AFortWeapon*                            New;
	class AFortWeapon*                            Prev;
};
static_assert(alignof(PlayerPawn_Generic_C_MultiSwapWeapon) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_MultiSwapWeapon");
static_assert(sizeof(PlayerPawn_Generic_C_MultiSwapWeapon) == 0x000010, "Wrong size on PlayerPawn_Generic_C_MultiSwapWeapon");
static_assert(offsetof(PlayerPawn_Generic_C_MultiSwapWeapon, New) == 0x000000, "Member 'PlayerPawn_Generic_C_MultiSwapWeapon::New' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_MultiSwapWeapon, Prev) == 0x000008, "Member 'PlayerPawn_Generic_C_MultiSwapWeapon::Prev' has a wrong offset!");

struct PlayerPawn_Generic_C_On_Set_Material_Part final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(PlayerPawn_Generic_C_On_Set_Material_Part) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_On_Set_Material_Part");
static_assert(sizeof(PlayerPawn_Generic_C_On_Set_Material_Part) == 0x000020, "Wrong size on PlayerPawn_Generic_C_On_Set_Material_Part");
static_assert(offsetof(PlayerPawn_Generic_C_On_Set_Material_Part, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_On_Set_Material_Part::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_On_Set_Material_Part, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_On_Set_Material_Part::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_On_Set_Material_Part, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_On_Set_Material_Part::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_On_Set_Material_Part, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_On_Set_Material_Part::PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_On_Set_Material_Part, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'PlayerPawn_Generic_C_On_Set_Material_Part::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct PlayerPawn_Generic_C_OnBackpack final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Generic_C_OnBackpack) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnBackpack");
static_assert(sizeof(PlayerPawn_Generic_C_OnBackpack) == 0x000020, "Wrong size on PlayerPawn_Generic_C_OnBackpack");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpack, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnBackpack::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpack, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_OnBackpack::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpack, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_OnBackpack::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpack, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_OnBackpack::PartType' has a wrong offset!");

struct PlayerPawn_Generic_C_OnBackpackPart final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Generic_C_OnBackpackPart) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnBackpackPart");
static_assert(sizeof(PlayerPawn_Generic_C_OnBackpackPart) == 0x000020, "Wrong size on PlayerPawn_Generic_C_OnBackpackPart");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpackPart, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnBackpackPart::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpackPart, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_OnBackpackPart::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpackPart, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_OnBackpackPart::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnBackpackPart, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_OnBackpackPart::PartType' has a wrong offset!");

struct PlayerPawn_Generic_C_OnBaseChanged final
{
public:
	class AActor*                                 NewBase;
};
static_assert(alignof(PlayerPawn_Generic_C_OnBaseChanged) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnBaseChanged");
static_assert(sizeof(PlayerPawn_Generic_C_OnBaseChanged) == 0x000008, "Wrong size on PlayerPawn_Generic_C_OnBaseChanged");
static_assert(offsetof(PlayerPawn_Generic_C_OnBaseChanged, NewBase) == 0x000000, "Member 'PlayerPawn_Generic_C_OnBaseChanged::NewBase' has a wrong offset!");

struct PlayerPawn_Generic_C_OnDamagePlayEffects final
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
static_assert(alignof(PlayerPawn_Generic_C_OnDamagePlayEffects) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnDamagePlayEffects");
static_assert(sizeof(PlayerPawn_Generic_C_OnDamagePlayEffects) == 0x000148, "Wrong size on PlayerPawn_Generic_C_OnDamagePlayEffects");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, Damage) == 0x000000, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, DamageTags) == 0x000008, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, Momentum) == 0x000028, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, HitInfo) == 0x000040, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, DamageCauser) == 0x000128, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDamagePlayEffects, EffectContext) == 0x000130, "Member 'PlayerPawn_Generic_C_OnDamagePlayEffects::EffectContext' has a wrong offset!");

struct PlayerPawn_Generic_C_OnDeathPlayEffects final
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
static_assert(alignof(PlayerPawn_Generic_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnDeathPlayEffects");
static_assert(sizeof(PlayerPawn_Generic_C_OnDeathPlayEffects) == 0x000148, "Wrong size on PlayerPawn_Generic_C_OnDeathPlayEffects");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, HitInfo) == 0x000040, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, DamageCauser) == 0x000128, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathPlayEffects, EffectContext) == 0x000130, "Member 'PlayerPawn_Generic_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

struct PlayerPawn_Generic_C_OnDeathServer final
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
static_assert(alignof(PlayerPawn_Generic_C_OnDeathServer) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnDeathServer");
static_assert(sizeof(PlayerPawn_Generic_C_OnDeathServer) == 0x000148, "Wrong size on PlayerPawn_Generic_C_OnDeathServer");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, Damage) == 0x000000, "Member 'PlayerPawn_Generic_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, DamageTags) == 0x000008, "Member 'PlayerPawn_Generic_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, Momentum) == 0x000028, "Member 'PlayerPawn_Generic_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, HitInfo) == 0x000040, "Member 'PlayerPawn_Generic_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Generic_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'PlayerPawn_Generic_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnDeathServer, EffectContext) == 0x000130, "Member 'PlayerPawn_Generic_C_OnDeathServer::EffectContext' has a wrong offset!");

struct PlayerPawn_Generic_C_OnDisplaySentence final
{
public:
	class FText                                   SpeechText;
};
static_assert(alignof(PlayerPawn_Generic_C_OnDisplaySentence) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnDisplaySentence");
static_assert(sizeof(PlayerPawn_Generic_C_OnDisplaySentence) == 0x000018, "Wrong size on PlayerPawn_Generic_C_OnDisplaySentence");
static_assert(offsetof(PlayerPawn_Generic_C_OnDisplaySentence, SpeechText) == 0x000000, "Member 'PlayerPawn_Generic_C_OnDisplaySentence::SpeechText' has a wrong offset!");

struct PlayerPawn_Generic_C_OnLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(PlayerPawn_Generic_C_OnLanded) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnLanded");
static_assert(sizeof(PlayerPawn_Generic_C_OnLanded) == 0x0000E0, "Wrong size on PlayerPawn_Generic_C_OnLanded");
static_assert(offsetof(PlayerPawn_Generic_C_OnLanded, Hit) == 0x000000, "Member 'PlayerPawn_Generic_C_OnLanded::Hit' has a wrong offset!");

struct PlayerPawn_Generic_C_OnMeshPart final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Generic_C_OnMeshPart) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnMeshPart");
static_assert(sizeof(PlayerPawn_Generic_C_OnMeshPart) == 0x000020, "Wrong size on PlayerPawn_Generic_C_OnMeshPart");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnMeshPart::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_OnMeshPart::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_OnMeshPart::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_OnMeshPart::PartType' has a wrong offset!");

struct PlayerPawn_Generic_C_OnMeshPart2 final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Generic_C_OnMeshPart2) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnMeshPart2");
static_assert(sizeof(PlayerPawn_Generic_C_OnMeshPart2) == 0x000020, "Wrong size on PlayerPawn_Generic_C_OnMeshPart2");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart2, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnMeshPart2::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart2, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_OnMeshPart2::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart2, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_OnMeshPart2::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart2, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_OnMeshPart2::PartType' has a wrong offset!");

struct PlayerPawn_Generic_C_OnMeshPart3 final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Generic_C_OnMeshPart3) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnMeshPart3");
static_assert(sizeof(PlayerPawn_Generic_C_OnMeshPart3) == 0x000020, "Wrong size on PlayerPawn_Generic_C_OnMeshPart3");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart3, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnMeshPart3::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart3, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_OnMeshPart3::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart3, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_OnMeshPart3::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPart3, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_OnMeshPart3::PartType' has a wrong offset!");

struct PlayerPawn_Generic_C_OnMeshPartComplete final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class USkeletalMeshComponent*                 BaseMesh;
	TArray<class UCustomCharacterPart*>           PartsArray;
	TArray<class USkeletalMeshComponent*>         ValidSkeletalMeshComponentPartArray;
};
static_assert(alignof(PlayerPawn_Generic_C_OnMeshPartComplete) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnMeshPartComplete");
static_assert(sizeof(PlayerPawn_Generic_C_OnMeshPartComplete) == 0x000030, "Wrong size on PlayerPawn_Generic_C_OnMeshPartComplete");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPartComplete, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnMeshPartComplete::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPartComplete, BaseMesh) == 0x000008, "Member 'PlayerPawn_Generic_C_OnMeshPartComplete::BaseMesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPartComplete, PartsArray) == 0x000010, "Member 'PlayerPawn_Generic_C_OnMeshPartComplete::PartsArray' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnMeshPartComplete, ValidSkeletalMeshComponentPartArray) == 0x000020, "Member 'PlayerPawn_Generic_C_OnMeshPartComplete::ValidSkeletalMeshComponentPartArray' has a wrong offset!");

struct PlayerPawn_Generic_C_OnPartApplied final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Generic_C_OnPartApplied) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnPartApplied");
static_assert(sizeof(PlayerPawn_Generic_C_OnPartApplied) == 0x000020, "Wrong size on PlayerPawn_Generic_C_OnPartApplied");
static_assert(offsetof(PlayerPawn_Generic_C_OnPartApplied, Pawn) == 0x000000, "Member 'PlayerPawn_Generic_C_OnPartApplied::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnPartApplied, Part) == 0x000008, "Member 'PlayerPawn_Generic_C_OnPartApplied::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnPartApplied, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_OnPartApplied::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnPartApplied, PartType) == 0x000018, "Member 'PlayerPawn_Generic_C_OnPartApplied::PartType' has a wrong offset!");

struct PlayerPawn_Generic_C_OnRep_BlockedByPawns final
{
public:
	bool                                          Temp_bool_Variable;
	ECollisionResponse                            Temp_byte_Variable;
	ECollisionResponse                            Temp_byte_Variable_1;
	ECollisionResponse                            K2Node_Select_Default;
};
static_assert(alignof(PlayerPawn_Generic_C_OnRep_BlockedByPawns) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_OnRep_BlockedByPawns");
static_assert(sizeof(PlayerPawn_Generic_C_OnRep_BlockedByPawns) == 0x000004, "Wrong size on PlayerPawn_Generic_C_OnRep_BlockedByPawns");
static_assert(offsetof(PlayerPawn_Generic_C_OnRep_BlockedByPawns, Temp_bool_Variable) == 0x000000, "Member 'PlayerPawn_Generic_C_OnRep_BlockedByPawns::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnRep_BlockedByPawns, Temp_byte_Variable) == 0x000001, "Member 'PlayerPawn_Generic_C_OnRep_BlockedByPawns::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnRep_BlockedByPawns, Temp_byte_Variable_1) == 0x000002, "Member 'PlayerPawn_Generic_C_OnRep_BlockedByPawns::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnRep_BlockedByPawns, K2Node_Select_Default) == 0x000003, "Member 'PlayerPawn_Generic_C_OnRep_BlockedByPawns::K2Node_Select_Default' has a wrong offset!");

struct PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor final
{
public:
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
};
static_assert(alignof(PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor");
static_assert(sizeof(PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor) == 0x0000B0, "Wrong size on PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor");
static_assert(offsetof(PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor, K2Node_MakeStruct_GameplayEventData) == 0x000000, "Member 'PlayerPawn_Generic_C_OnRep_On_Player_Built_Floor::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");

struct PlayerPawn_Generic_C_OnWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(PlayerPawn_Generic_C_OnWeaponEquipped) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_OnWeaponEquipped");
static_assert(sizeof(PlayerPawn_Generic_C_OnWeaponEquipped) == 0x000010, "Wrong size on PlayerPawn_Generic_C_OnWeaponEquipped");
static_assert(offsetof(PlayerPawn_Generic_C_OnWeaponEquipped, NewWeapon) == 0x000000, "Member 'PlayerPawn_Generic_C_OnWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_OnWeaponEquipped, PrevWeapon) == 0x000008, "Member 'PlayerPawn_Generic_C_OnWeaponEquipped::PrevWeapon' has a wrong offset!");

struct PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh final
{
public:
	class UMaterialInterface*                     Material_to_Apply;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_3D[0x3];
	class UMaterialInterface*                     CallFunc_Array_Get_Item;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	class UMaterialInstanceDynamic*               K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh");
static_assert(sizeof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh) == 0x000060, "Wrong size on PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, Material_to_Apply) == 0x000000, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::Material_to_Apply' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000010, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_GetMaterials_ReturnValue) == 0x000018, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_IsDedicatedServer_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, Temp_int_Array_Index_Variable) == 0x000038, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_Array_Get_Item) == 0x000040, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000048, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, K2Node_DynamicCast_AsMaterial_Instance_Dynamic) == 0x000050, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::K2Node_DynamicCast_AsMaterial_Instance_Dynamic' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'PlayerPawn_Generic_C_Override_Materials_and_Copy_Parameters_on_Weapons_Mesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_Player_Creates_a_Splash final
{
public:
	struct FTransform                             NewTransform;
};
static_assert(alignof(PlayerPawn_Generic_C_Player_Creates_a_Splash) == 0x000010, "Wrong alignment on PlayerPawn_Generic_C_Player_Creates_a_Splash");
static_assert(sizeof(PlayerPawn_Generic_C_Player_Creates_a_Splash) == 0x000060, "Wrong size on PlayerPawn_Generic_C_Player_Creates_a_Splash");
static_assert(offsetof(PlayerPawn_Generic_C_Player_Creates_a_Splash, NewTransform) == 0x000000, "Member 'PlayerPawn_Generic_C_Player_Creates_a_Splash::NewTransform' has a wrong offset!");

struct PlayerPawn_Generic_C_PlayGameplayWindEffect final
{
public:
	EPlayerWindParticleEmitters                   Player_Wind_Particle_Emitter_To_Fire;
};
static_assert(alignof(PlayerPawn_Generic_C_PlayGameplayWindEffect) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_PlayGameplayWindEffect");
static_assert(sizeof(PlayerPawn_Generic_C_PlayGameplayWindEffect) == 0x000001, "Wrong size on PlayerPawn_Generic_C_PlayGameplayWindEffect");
static_assert(offsetof(PlayerPawn_Generic_C_PlayGameplayWindEffect, Player_Wind_Particle_Emitter_To_Fire) == 0x000000, "Member 'PlayerPawn_Generic_C_PlayGameplayWindEffect::Player_Wind_Particle_Emitter_To_Fire' has a wrong offset!");

struct PlayerPawn_Generic_C_PlayHitSound final
{
public:
	class AFortPawn*                              Instigator_0;
	class AActor*                                 Damage_Causer;
	class AActor*                                 HitSource;
	class USoundBase*                             HitSound;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_56[0x2];
	class USoundBase*                             K2Node_Select_Default;
	class USoundBase*                             K2Node_Select_Default_1;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_6A[0x6];
	class USoundBase*                             K2Node_Select_Default_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_79[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(PlayerPawn_Generic_C_PlayHitSound) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_PlayHitSound");
static_assert(sizeof(PlayerPawn_Generic_C_PlayHitSound) == 0x0000B0, "Wrong size on PlayerPawn_Generic_C_PlayHitSound");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Instigator_0) == 0x000000, "Member 'PlayerPawn_Generic_C_PlayHitSound::Instigator_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Damage_Causer) == 0x000008, "Member 'PlayerPawn_Generic_C_PlayHitSound::Damage_Causer' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, HitSource) == 0x000010, "Member 'PlayerPawn_Generic_C_PlayHitSound::HitSource' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, HitSound) == 0x000018, "Member 'PlayerPawn_Generic_C_PlayHitSound::HitSound' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Temp_bool_Variable) == 0x000020, "Member 'PlayerPawn_Generic_C_PlayHitSound::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000028, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x000040, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Temp_bool_Variable_1) == 0x000051, "Member 'PlayerPawn_Generic_C_PlayHitSound::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, CallFunc_IsValid_ReturnValue) == 0x000052, "Member 'PlayerPawn_Generic_C_PlayHitSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Temp_bool_Variable_2) == 0x000053, "Member 'PlayerPawn_Generic_C_PlayHitSound::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000054, "Member 'PlayerPawn_Generic_C_PlayHitSound::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Temp_bool_Variable_3) == 0x000055, "Member 'PlayerPawn_Generic_C_PlayHitSound::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_Select_Default) == 0x000058, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_Select_Default_1) == 0x000060, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x000068, "Member 'PlayerPawn_Generic_C_PlayHitSound::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, Temp_bool_Variable_4) == 0x000069, "Member 'PlayerPawn_Generic_C_PlayHitSound::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_Select_Default_2) == 0x000070, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'PlayerPawn_Generic_C_PlayHitSound::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000080, "Member 'PlayerPawn_Generic_C_PlayHitSound::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, CallFunc_GetController_ReturnValue) == 0x000098, "Member 'PlayerPawn_Generic_C_PlayHitSound::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0000A0, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_PlayHitSound, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'PlayerPawn_Generic_C_PlayHitSound::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct PlayerPawn_Generic_C_ReceivePossessed final
{
public:
	class AController*                            NewController;
};
static_assert(alignof(PlayerPawn_Generic_C_ReceivePossessed) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_ReceivePossessed");
static_assert(sizeof(PlayerPawn_Generic_C_ReceivePossessed) == 0x000008, "Wrong size on PlayerPawn_Generic_C_ReceivePossessed");
static_assert(offsetof(PlayerPawn_Generic_C_ReceivePossessed, NewController) == 0x000000, "Member 'PlayerPawn_Generic_C_ReceivePossessed::NewController' has a wrong offset!");

struct PlayerPawn_Generic_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(PlayerPawn_Generic_C_ReceiveTick) == 0x000004, "Wrong alignment on PlayerPawn_Generic_C_ReceiveTick");
static_assert(sizeof(PlayerPawn_Generic_C_ReceiveTick) == 0x000004, "Wrong size on PlayerPawn_Generic_C_ReceiveTick");
static_assert(offsetof(PlayerPawn_Generic_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'PlayerPawn_Generic_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_1[0x3];
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate;
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out;
};
static_assert(alignof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh");
static_assert(sizeof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh) == 0x000020, "Wrong size on PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out) == 0x000010, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Character_Mesh::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out' has a wrong offset!");

struct PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh final
{
public:
	class AFortWeapon*                            Weapon_to_Restore;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2E[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_35[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh");
static_assert(sizeof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh) == 0x000040, "Wrong size on PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, Weapon_to_Restore) == 0x000000, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::Weapon_to_Restore' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, Temp_int_Array_Index_Variable) == 0x000008, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue) == 0x000010, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_Array_Get_Item) == 0x000020, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00002C, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_IsValid_ReturnValue) == 0x00002D, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_Restore_Previous_Materials_on_Weapons_Mesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_Set_Body_Type_Sounds final
{
public:
	EFortCustomBodyType                           CallFunc_GetCharacterBodyType_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(PlayerPawn_Generic_C_Set_Body_Type_Sounds) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_Set_Body_Type_Sounds");
static_assert(sizeof(PlayerPawn_Generic_C_Set_Body_Type_Sounds) == 0x000002, "Wrong size on PlayerPawn_Generic_C_Set_Body_Type_Sounds");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Body_Type_Sounds, CallFunc_GetCharacterBodyType_ReturnValue) == 0x000000, "Member 'PlayerPawn_Generic_C_Set_Body_Type_Sounds::CallFunc_GetCharacterBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Body_Type_Sounds, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'PlayerPawn_Generic_C_Set_Body_Type_Sounds::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct PlayerPawn_Generic_C_Set_Part_Material final
{
public:
	TArray<class UMaterialInstanceDynamic*>       Array;
	class USkeletalMeshComponent*                 MeshPart;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1D[0x3];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_29[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_45[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_Set_Part_Material) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Set_Part_Material");
static_assert(sizeof(PlayerPawn_Generic_C_Set_Part_Material) == 0x000050, "Wrong size on PlayerPawn_Generic_C_Set_Part_Material");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, Array) == 0x000000, "Member 'PlayerPawn_Generic_C_Set_Part_Material::Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, MeshPart) == 0x000010, "Member 'PlayerPawn_Generic_C_Set_Part_Material::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, Temp_int_Array_Index_Variable) == 0x000018, "Member 'PlayerPawn_Generic_C_Set_Part_Material::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_Array_Get_Item) == 0x000020, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'PlayerPawn_Generic_C_Set_Part_Material::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Part_Material, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'PlayerPawn_Generic_C_Set_Part_Material::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs final
{
public:
	class FName                                   Parameter_Name;
	uint8                                         Pad_4[0x4];
	double                                        Parameter_Value;
};
static_assert(alignof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs");
static_assert(sizeof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs) == 0x000010, "Wrong size on PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs, Parameter_Name) == 0x000000, "Member 'PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs::Parameter_Name' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs, Parameter_Value) == 0x000008, "Member 'PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Character_MIDs::Parameter_Value' has a wrong offset!");

struct PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs final
{
public:
	class FName                                   Parameter_Name;
	uint8                                         Pad_4[0x4];
	double                                        Parameter_Value;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x3];
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs");
static_assert(sizeof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs) == 0x000018, "Wrong size on PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs, Parameter_Name) == 0x000000, "Member 'PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs::Parameter_Name' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs, Parameter_Value) == 0x000008, "Member 'PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs::Parameter_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000014, "Member 'PlayerPawn_Generic_C_Set_Scalar_Parameter_on_Duplicate_Mesh_MIDs::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Generic_C_SetBlockedByPawns final
{
public:
	bool                                          bLocked;
};
static_assert(alignof(PlayerPawn_Generic_C_SetBlockedByPawns) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_SetBlockedByPawns");
static_assert(sizeof(PlayerPawn_Generic_C_SetBlockedByPawns) == 0x000001, "Wrong size on PlayerPawn_Generic_C_SetBlockedByPawns");
static_assert(offsetof(PlayerPawn_Generic_C_SetBlockedByPawns, bLocked) == 0x000000, "Member 'PlayerPawn_Generic_C_SetBlockedByPawns::bLocked' has a wrong offset!");

struct PlayerPawn_Generic_C_SetFirstPersonCamera final
{
public:
	bool                                          bNewUseFirstPersonCamera;
};
static_assert(alignof(PlayerPawn_Generic_C_SetFirstPersonCamera) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_SetFirstPersonCamera");
static_assert(sizeof(PlayerPawn_Generic_C_SetFirstPersonCamera) == 0x000001, "Wrong size on PlayerPawn_Generic_C_SetFirstPersonCamera");
static_assert(offsetof(PlayerPawn_Generic_C_SetFirstPersonCamera, bNewUseFirstPersonCamera) == 0x000000, "Member 'PlayerPawn_Generic_C_SetFirstPersonCamera::bNewUseFirstPersonCamera' has a wrong offset!");

struct PlayerPawn_Generic_C_SetShieldMids final
{
public:
	double                                        Highlight_Cracks;
	bool                                          Set_Highlight_Cracks;
	uint8                                         Pad_9[0x7];
	double                                        Push;
	bool                                          Set_Push;
	uint8                                         Pad_19[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FCharacterPartMidArrayStruct           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_SetShieldMids) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_SetShieldMids");
static_assert(sizeof(PlayerPawn_Generic_C_SetShieldMids) == 0x000048, "Wrong size on PlayerPawn_Generic_C_SetShieldMids");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, Highlight_Cracks) == 0x000000, "Member 'PlayerPawn_Generic_C_SetShieldMids::Highlight_Cracks' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, Set_Highlight_Cracks) == 0x000008, "Member 'PlayerPawn_Generic_C_SetShieldMids::Set_Highlight_Cracks' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, Push) == 0x000010, "Member 'PlayerPawn_Generic_C_SetShieldMids::Push' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, Set_Push) == 0x000018, "Member 'PlayerPawn_Generic_C_SetShieldMids::Set_Push' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'PlayerPawn_Generic_C_SetShieldMids::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'PlayerPawn_Generic_C_SetShieldMids::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'PlayerPawn_Generic_C_SetShieldMids::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, CallFunc_Array_Get_Item) == 0x000028, "Member 'PlayerPawn_Generic_C_SetShieldMids::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'PlayerPawn_Generic_C_SetShieldMids::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'PlayerPawn_Generic_C_SetShieldMids::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_SetShieldMids_InternalLoop final
{
public:
	double                                        Highlight_Cracks;
	bool                                          Set_Highlight_Cracks;
	uint8                                         Pad_9[0x7];
	double                                        Push;
	bool                                          Set_Push;
	uint8                                         Pad_19[0x7];
	TArray<class UMaterialInstanceDynamic*>       MID_Array;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_3D[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_44[0x4];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_SetShieldMids_InternalLoop");
static_assert(sizeof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop) == 0x000058, "Wrong size on PlayerPawn_Generic_C_SetShieldMids_InternalLoop");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, Highlight_Cracks) == 0x000000, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::Highlight_Cracks' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, Set_Highlight_Cracks) == 0x000008, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::Set_Highlight_Cracks' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, Push) == 0x000010, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::Push' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, Set_Push) == 0x000018, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::Set_Push' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, MID_Array) == 0x000020, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::MID_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, Temp_int_Array_Index_Variable) == 0x000040, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, CallFunc_Array_Get_Item) == 0x000048, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000050, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SetShieldMids_InternalLoop, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000054, "Member 'PlayerPawn_Generic_C_SetShieldMids_InternalLoop::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh final
{
public:
	class UMaterialInterface*                     Material_to_Apply;
	EFortCustomPartType                           PartType;
	uint8                                         Pad_9[0x7];
	TArray<class UMaterialInstanceDynamic*>       Empty_MID_Array;
	class USkeletalMeshComponent*                 Duplicated_Mesh;
	bool                                          Transfer_Material_Parameters;
	uint8                                         Pad_29[0x3];
	int32                                         Translucent_Sort_Order;
	class USkeletalMeshComponent*                 MeshPart;
	bool                                          ObjectsValid;
	uint8                                         Pad_39[0x3];
	int32                                         Temp_int_Variable;
	class USkeletalMesh*                          CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_49[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_52[0x6];
	class USkeletalMesh*                          CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_61[0x7];
	TArray<struct FSkeletalMaterial>              CallFunc_GetMaterials_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_Find_Stored_Char_Part_Materials_Found;
	uint8                                         Pad_7F[0x1];
	int32                                         CallFunc_Find_Stored_Char_Part_Materials_Index;
	uint8                                         Pad_84[0x4];
	TArray<class UMaterialInstanceDynamic*>       CallFunc_Find_Stored_Char_Part_Materials_MIDs;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	class UMaterialInterface*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;
	int32                                         CallFunc_Min_ReturnValue;
	uint8                                         Pad_B4[0x4];
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_C1[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	int32                                         K2Node_Select_Default;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh");
static_assert(sizeof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh) == 0x0000D0, "Wrong size on PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Material_to_Apply) == 0x000000, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Material_to_Apply' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, PartType) == 0x000008, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Empty_MID_Array) == 0x000010, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Empty_MID_Array' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Duplicated_Mesh) == 0x000020, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Duplicated_Mesh' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Transfer_Material_Parameters) == 0x000028, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Transfer_Material_Parameters' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Translucent_Sort_Order) == 0x00002C, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Translucent_Sort_Order' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, MeshPart) == 0x000030, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, ObjectsValid) == 0x000038, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::ObjectsValid' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Temp_int_Variable) == 0x00003C, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue) == 0x000040, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_BooleanOR_ReturnValue) == 0x000051, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue_1) == 0x000058, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_GetSkeletalMesh_DEPRECATED_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_GetMaterials_ReturnValue) == 0x000068, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Array_LastIndex_ReturnValue) == 0x000078, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_IsValid_ReturnValue_3) == 0x00007C, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_IsValid_ReturnValue_4) == 0x00007D, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Find_Stored_Char_Part_Materials_Found) == 0x00007E, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Find_Stored_Char_Part_Materials_Found' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Find_Stored_Char_Part_Materials_Index) == 0x000080, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Find_Stored_Char_Part_Materials_Index' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Find_Stored_Char_Part_Materials_MIDs) == 0x000088, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Find_Stored_Char_Part_Materials_MIDs' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000098, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Array_Add_ReturnValue) == 0x0000A8, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0000AC, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Min_ReturnValue) == 0x0000B0, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x0000B8, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, Temp_bool_Variable) == 0x0000C0, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_Array_Add_ReturnValue_1) == 0x0000C4, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, K2Node_Select_Default) == 0x0000C8, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000CC, "Member 'PlayerPawn_Generic_C_Setup_Duplicate_FX_Mesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_SlaveAMeshToTheBody final
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
static_assert(alignof(PlayerPawn_Generic_C_SlaveAMeshToTheBody) == 0x000010, "Wrong alignment on PlayerPawn_Generic_C_SlaveAMeshToTheBody");
static_assert(sizeof(PlayerPawn_Generic_C_SlaveAMeshToTheBody) == 0x000170, "Wrong size on PlayerPawn_Generic_C_SlaveAMeshToTheBody");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, Mesh_0) == 0x000000, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::Mesh_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, Master) == 0x000008, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::Master' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, MasterToUse) == 0x000010, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::MasterToUse' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_GetAttachSocketName_ReturnValue) == 0x000018, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_GetAttachSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00001C, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_GetAttachParent_ReturnValue) == 0x000020, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_GetAttachParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_GetRelativeTransform_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_SlaveAMeshToTheBody, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000090, "Member 'PlayerPawn_Generic_C_SlaveAMeshToTheBody::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");

struct PlayerPawn_Generic_C_ToggleLandFX final
{
public:
	bool                                          NewHidden;
};
static_assert(alignof(PlayerPawn_Generic_C_ToggleLandFX) == 0x000001, "Wrong alignment on PlayerPawn_Generic_C_ToggleLandFX");
static_assert(sizeof(PlayerPawn_Generic_C_ToggleLandFX) == 0x000001, "Wrong size on PlayerPawn_Generic_C_ToggleLandFX");
static_assert(offsetof(PlayerPawn_Generic_C_ToggleLandFX, NewHidden) == 0x000000, "Member 'PlayerPawn_Generic_C_ToggleLandFX::NewHidden' has a wrong offset!");

struct PlayerPawn_Generic_C_TriggerGameplayWindEmitter final
{
public:
	EPlayerWindParticleEmitters                   Player_Wind_Particle_Emitter_To_Fire;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         CallFunc_GetValidValue_ReturnValue;
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;
	uint8                                         Pad_16[0x2];
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	uint8                                         Pad_29[0x3];
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_35[0x3];
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_TriggerGameplayWindEmitter");
static_assert(sizeof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter) == 0x000040, "Wrong size on PlayerPawn_Generic_C_TriggerGameplayWindEmitter");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, Player_Wind_Particle_Emitter_To_Fire) == 0x000000, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::Player_Wind_Particle_Emitter_To_Fire' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, Temp_int_Variable) == 0x000004, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, Temp_int_Variable_1) == 0x000008, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000028, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_Conv_StringToName_ReturnValue) == 0x00002C, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000034, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_MakeLiteralInt_ReturnValue) == 0x000038, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_TriggerGameplayWindEmitter, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'PlayerPawn_Generic_C_TriggerGameplayWindEmitter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Generic_C_UserConstructionScript final
{
public:
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;
};
static_assert(alignof(PlayerPawn_Generic_C_UserConstructionScript) == 0x000008, "Wrong alignment on PlayerPawn_Generic_C_UserConstructionScript");
static_assert(sizeof(PlayerPawn_Generic_C_UserConstructionScript) == 0x000010, "Wrong size on PlayerPawn_Generic_C_UserConstructionScript");
static_assert(offsetof(PlayerPawn_Generic_C_UserConstructionScript, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000000, "Member 'PlayerPawn_Generic_C_UserConstructionScript::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_UserConstructionScript, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000008, "Member 'PlayerPawn_Generic_C_UserConstructionScript::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_UserConstructionScript, CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam) == 0x000009, "Member 'PlayerPawn_Generic_C_UserConstructionScript::CallFunc_Are_the_wind_and_water_RTT_passes_enabled_NewParam' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Generic_C_UserConstructionScript, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x00000A, "Member 'PlayerPawn_Generic_C_UserConstructionScript::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");

}
