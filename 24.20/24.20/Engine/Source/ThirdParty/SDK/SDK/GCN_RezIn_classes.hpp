#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C;
	float                                         TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C;
	float                                         TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C;
	ETimelineDirection                            TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C;
	uint8                                         Pad_53D[0x3];
	class UTimelineComponent*                     TFX_ResOutCharacterMesh;
	float                                         TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028;
	ETimelineDirection                            TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028;
	uint8                                         Pad_54D[0x3];
	class UTimelineComponent*                     TFX_GlowCharacterMesh;
	bool                                          DEBUG_ANIMATION;
	bool                                          SpawnDrone;
	uint8                                         Pad_55A[0x6];
	class UClass*                                 Teleportation_Drone;
	double                                        Teleport_Bot_AnimPlayRate;
	double                                        Teleport_Bot_Lifespan;
	class UPointLightComponent*                   Teleportation_Point_Light;
	struct FVector                                Teleportation_Light_Offset;
	struct FLinearColor                           Teleportation_Light_Color;
	TArray<class UMaterialInstanceDynamic*>       DissolveMIDs;
	class UMaterialInterface*                     Mat_Chracter_Dissolve;
	class APlayerPawn_Athena_C*                   Pawn;
	TSet<class USkeletalMeshComponent*>           Dissolve;
	class FName                                   Socket_Mesh_Top;
	uint8                                         Pad_61C[0x4];
	double                                        Max_Light_Intensity;
	class FName                                   Socket_Mesh_Bottom;
	uint8                                         Pad_62C[0x4];
	TArray<class USkeletalMeshComponent*>         Meshes_to_Dissolve;
	class ABP_TeleportationDrone_C*               Drone;
	bool                                          DEBUG_CHILDCOMPONENTS;
	uint8                                         Pad_649[0x7];
	TArray<class UFXSystemComponent*>             Particle_Components;
	class UNiagaraComponent*                      Spawned_Teleport_VFX;
	class UNiagaraSystem*                         Teleport_In_Visual_Effect;
	class FName                                   Teleport_In_VFX_Attach_Point_Name;
	int32                                         Cur_Dissolve_Setup_Attempt;
	int32                                         AmountOfTimesToAttemptRestoreMats;
	bool                                          Spawn_VFX_Attached;
	uint8                                         Pad_67D[0x3];
	double                                        Dissolve_Timeline_Playrate;
	double                                        Glow_Timeline_Playrate;
	class UNiagaraSystem*                         Drone_Visual_Effect;
	bool                                          DEBUG_TESTJANUSFX;
	uint8                                         Pad_699[0x3];
	class FName                                   Drone_VFX_Attach_Point;
	struct FGuid                                  Material_Override_ID;
	struct FFortPawnMaterialOverrideCopiedParameters Copied_Parameters;
	struct FDelegateHandleController              Delegate_Handle_Controller;

public:
	void Clean_Up_Teleportation_Light();
	void ExecuteUbergraph_GCN_RezIn(int32 EntryPoint);
	void OnCosmeticPart(class AFortPlayerPawn* Pawn_0, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType);
	void Pre_Sequence_Change();
	void Restore_Character_Materials(bool* Fully_Completed);
	void Set_Additional_Niagara_Parameter_on_Drone_FX(class UNiagaraComponent* Drone_FX);
	void Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Teleport_In_FX);
	void Set_Timelines__Playrates();
	void Spawn_Drone_VFX();
	void Spawn_Teleport_In_VFX();
	void Spawn_Teleportation_Drone();
	void Spawn_Teleportation_Light();
	void Stop_Looping_Audio();
	void TFX_GlowCharacterMesh__FinishedFunc();
	void TFX_GlowCharacterMesh__UpdateFunc();
	void TFX_ResOutCharacterMesh__FinishedFunc();
	void TFX_ResOutCharacterMesh__UpdateFunc();

	void OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RezIn_C">();
	}
	static class AGCN_RezIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_RezIn_C>();
	}
};
static_assert(alignof(AGCN_RezIn_C) == 0x000008, "Wrong alignment on AGCN_RezIn_C");
static_assert(sizeof(AGCN_RezIn_C) == 0x0006F0, "Wrong size on AGCN_RezIn_C");
static_assert(offsetof(AGCN_RezIn_C, UberGraphFrame) == 0x000528, "Member 'AGCN_RezIn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C) == 0x000530, "Member 'AGCN_RezIn_C::TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C) == 0x000534, "Member 'AGCN_RezIn_C::TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C) == 0x000538, "Member 'AGCN_RezIn_C::TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C) == 0x00053C, "Member 'AGCN_RezIn_C::TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_ResOutCharacterMesh) == 0x000540, "Member 'AGCN_RezIn_C::TFX_ResOutCharacterMesh' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028) == 0x000548, "Member 'AGCN_RezIn_C::TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028) == 0x00054C, "Member 'AGCN_RezIn_C::TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, TFX_GlowCharacterMesh) == 0x000550, "Member 'AGCN_RezIn_C::TFX_GlowCharacterMesh' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, DEBUG_ANIMATION) == 0x000558, "Member 'AGCN_RezIn_C::DEBUG_ANIMATION' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, SpawnDrone) == 0x000559, "Member 'AGCN_RezIn_C::SpawnDrone' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleportation_Drone) == 0x000560, "Member 'AGCN_RezIn_C::Teleportation_Drone' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleport_Bot_AnimPlayRate) == 0x000568, "Member 'AGCN_RezIn_C::Teleport_Bot_AnimPlayRate' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleport_Bot_Lifespan) == 0x000570, "Member 'AGCN_RezIn_C::Teleport_Bot_Lifespan' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleportation_Point_Light) == 0x000578, "Member 'AGCN_RezIn_C::Teleportation_Point_Light' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleportation_Light_Offset) == 0x000580, "Member 'AGCN_RezIn_C::Teleportation_Light_Offset' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleportation_Light_Color) == 0x000598, "Member 'AGCN_RezIn_C::Teleportation_Light_Color' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, DissolveMIDs) == 0x0005A8, "Member 'AGCN_RezIn_C::DissolveMIDs' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Mat_Chracter_Dissolve) == 0x0005B8, "Member 'AGCN_RezIn_C::Mat_Chracter_Dissolve' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Pawn) == 0x0005C0, "Member 'AGCN_RezIn_C::Pawn' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Dissolve) == 0x0005C8, "Member 'AGCN_RezIn_C::Dissolve' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Socket_Mesh_Top) == 0x000618, "Member 'AGCN_RezIn_C::Socket_Mesh_Top' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Max_Light_Intensity) == 0x000620, "Member 'AGCN_RezIn_C::Max_Light_Intensity' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Socket_Mesh_Bottom) == 0x000628, "Member 'AGCN_RezIn_C::Socket_Mesh_Bottom' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Meshes_to_Dissolve) == 0x000630, "Member 'AGCN_RezIn_C::Meshes_to_Dissolve' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Drone) == 0x000640, "Member 'AGCN_RezIn_C::Drone' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, DEBUG_CHILDCOMPONENTS) == 0x000648, "Member 'AGCN_RezIn_C::DEBUG_CHILDCOMPONENTS' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Particle_Components) == 0x000650, "Member 'AGCN_RezIn_C::Particle_Components' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Spawned_Teleport_VFX) == 0x000660, "Member 'AGCN_RezIn_C::Spawned_Teleport_VFX' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleport_In_Visual_Effect) == 0x000668, "Member 'AGCN_RezIn_C::Teleport_In_Visual_Effect' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Teleport_In_VFX_Attach_Point_Name) == 0x000670, "Member 'AGCN_RezIn_C::Teleport_In_VFX_Attach_Point_Name' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Cur_Dissolve_Setup_Attempt) == 0x000674, "Member 'AGCN_RezIn_C::Cur_Dissolve_Setup_Attempt' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, AmountOfTimesToAttemptRestoreMats) == 0x000678, "Member 'AGCN_RezIn_C::AmountOfTimesToAttemptRestoreMats' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Spawn_VFX_Attached) == 0x00067C, "Member 'AGCN_RezIn_C::Spawn_VFX_Attached' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Dissolve_Timeline_Playrate) == 0x000680, "Member 'AGCN_RezIn_C::Dissolve_Timeline_Playrate' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Glow_Timeline_Playrate) == 0x000688, "Member 'AGCN_RezIn_C::Glow_Timeline_Playrate' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Drone_Visual_Effect) == 0x000690, "Member 'AGCN_RezIn_C::Drone_Visual_Effect' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, DEBUG_TESTJANUSFX) == 0x000698, "Member 'AGCN_RezIn_C::DEBUG_TESTJANUSFX' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Drone_VFX_Attach_Point) == 0x00069C, "Member 'AGCN_RezIn_C::Drone_VFX_Attach_Point' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Material_Override_ID) == 0x0006A0, "Member 'AGCN_RezIn_C::Material_Override_ID' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Copied_Parameters) == 0x0006B0, "Member 'AGCN_RezIn_C::Copied_Parameters' has a wrong offset!");
static_assert(offsetof(AGCN_RezIn_C, Delegate_Handle_Controller) == 0x0006E0, "Member 'AGCN_RezIn_C::Delegate_Handle_Controller' has a wrong offset!");

}
