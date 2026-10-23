#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC;
	float                                         TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC;
	float                                         TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC;
	ETimelineDirection                            TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC;
	uint8                                         Pad_53D[0x3];
	class UTimelineComponent*                     TFX_ResOutCharacterMesh;
	float                                         TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776;
	ETimelineDirection                            TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776;
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
	class UNiagaraComponent*                      Spawned_Death_VFX;
	class UNiagaraSystem*                         Dissolve_Visual_Effect;
	class FName                                   Dissolve_VFX_Spawn_Point_Name;
	uint8                                         Pad_674[0x4];
	class UAnimMontage*                           Base_Elimination_Montage;
	class UAnimMontage*                           DBNO_Elimination_Montage;
	class UAnimMontage*                           Skydiving_Elimination_Montage;
	class UAnimMontage*                           Swimming_Elimination_Montage;
	class UAnimMontage*                           DBNO_Swimming_Elimination_Montage;
	bool                                          Spawn_VFX_Attached;
	uint8                                         Pad_6A1[0x7];
	double                                        Dissolve_Timeline_Playrate;
	double                                        Glow_Timeline_Playrate;
	bool                                          DEBUG_REMOVESPAWNVFX;
	bool                                          DEBUG_REMOVESPAWNEDPOINTLIGHT;
	uint8                                         Pad_6BA[0x6];
	class UNiagaraSystem*                         Drone_Visual_Effect;
	class FName                                   Drone_VFX_Attach_Point;
	bool                                          DEBUG_FXSYSTEMCOMPONENTS;
	bool                                          ShouldDelayBetweenAnimAndVFX;
	uint8                                         Pad_6CE[0x2];
	double                                        DelayBetweenAnimAndVFX;
	struct FGuid                                  Material_Override_ID;
	struct FFortPawnMaterialOverrideCopiedParameters Copied_Parameters;

public:
	void Clean_Up_Teleportation_Light();
	void Dissolve_Material_Setup();
	void ExecuteUbergraph_GCN_RezOut(int32 EntryPoint);
	void Play_Elmination_AnimMontage();
	void Pre_Sequence_Change();
	void Set_Additional_Niagara_Parameters_on_Drone_FX(class UNiagaraComponent* Drone_FX);
	void Set_Additional_Niagara_Parameters_on_Spawned_FX(class UNiagaraComponent* Spawned_Death_FX);
	void Set_Timeline_Playrates();
	void Spawn_Dissolve_VFX();
	void Spawn_Drone_VFX();
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
		return StaticBPGeneratedClassImpl<"GCN_RezOut_C">();
	}
	static class AGCN_RezOut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_RezOut_C>();
	}
};
static_assert(alignof(AGCN_RezOut_C) == 0x000008, "Wrong alignment on AGCN_RezOut_C");
static_assert(sizeof(AGCN_RezOut_C) == 0x000718, "Wrong size on AGCN_RezOut_C");
static_assert(offsetof(AGCN_RezOut_C, UberGraphFrame) == 0x000528, "Member 'AGCN_RezOut_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC) == 0x000530, "Member 'AGCN_RezOut_C::TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC) == 0x000534, "Member 'AGCN_RezOut_C::TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC) == 0x000538, "Member 'AGCN_RezOut_C::TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC) == 0x00053C, "Member 'AGCN_RezOut_C::TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_ResOutCharacterMesh) == 0x000540, "Member 'AGCN_RezOut_C::TFX_ResOutCharacterMesh' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776) == 0x000548, "Member 'AGCN_RezOut_C::TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776) == 0x00054C, "Member 'AGCN_RezOut_C::TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, TFX_GlowCharacterMesh) == 0x000550, "Member 'AGCN_RezOut_C::TFX_GlowCharacterMesh' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DEBUG_ANIMATION) == 0x000558, "Member 'AGCN_RezOut_C::DEBUG_ANIMATION' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, SpawnDrone) == 0x000559, "Member 'AGCN_RezOut_C::SpawnDrone' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Teleportation_Drone) == 0x000560, "Member 'AGCN_RezOut_C::Teleportation_Drone' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Teleport_Bot_AnimPlayRate) == 0x000568, "Member 'AGCN_RezOut_C::Teleport_Bot_AnimPlayRate' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Teleport_Bot_Lifespan) == 0x000570, "Member 'AGCN_RezOut_C::Teleport_Bot_Lifespan' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Teleportation_Point_Light) == 0x000578, "Member 'AGCN_RezOut_C::Teleportation_Point_Light' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Teleportation_Light_Offset) == 0x000580, "Member 'AGCN_RezOut_C::Teleportation_Light_Offset' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Teleportation_Light_Color) == 0x000598, "Member 'AGCN_RezOut_C::Teleportation_Light_Color' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DissolveMIDs) == 0x0005A8, "Member 'AGCN_RezOut_C::DissolveMIDs' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Mat_Chracter_Dissolve) == 0x0005B8, "Member 'AGCN_RezOut_C::Mat_Chracter_Dissolve' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Pawn) == 0x0005C0, "Member 'AGCN_RezOut_C::Pawn' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Dissolve) == 0x0005C8, "Member 'AGCN_RezOut_C::Dissolve' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Socket_Mesh_Top) == 0x000618, "Member 'AGCN_RezOut_C::Socket_Mesh_Top' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Max_Light_Intensity) == 0x000620, "Member 'AGCN_RezOut_C::Max_Light_Intensity' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Socket_Mesh_Bottom) == 0x000628, "Member 'AGCN_RezOut_C::Socket_Mesh_Bottom' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Meshes_to_Dissolve) == 0x000630, "Member 'AGCN_RezOut_C::Meshes_to_Dissolve' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Drone) == 0x000640, "Member 'AGCN_RezOut_C::Drone' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DEBUG_CHILDCOMPONENTS) == 0x000648, "Member 'AGCN_RezOut_C::DEBUG_CHILDCOMPONENTS' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Particle_Components) == 0x000650, "Member 'AGCN_RezOut_C::Particle_Components' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Spawned_Death_VFX) == 0x000660, "Member 'AGCN_RezOut_C::Spawned_Death_VFX' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Dissolve_Visual_Effect) == 0x000668, "Member 'AGCN_RezOut_C::Dissolve_Visual_Effect' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Dissolve_VFX_Spawn_Point_Name) == 0x000670, "Member 'AGCN_RezOut_C::Dissolve_VFX_Spawn_Point_Name' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Base_Elimination_Montage) == 0x000678, "Member 'AGCN_RezOut_C::Base_Elimination_Montage' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DBNO_Elimination_Montage) == 0x000680, "Member 'AGCN_RezOut_C::DBNO_Elimination_Montage' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Skydiving_Elimination_Montage) == 0x000688, "Member 'AGCN_RezOut_C::Skydiving_Elimination_Montage' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Swimming_Elimination_Montage) == 0x000690, "Member 'AGCN_RezOut_C::Swimming_Elimination_Montage' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DBNO_Swimming_Elimination_Montage) == 0x000698, "Member 'AGCN_RezOut_C::DBNO_Swimming_Elimination_Montage' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Spawn_VFX_Attached) == 0x0006A0, "Member 'AGCN_RezOut_C::Spawn_VFX_Attached' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Dissolve_Timeline_Playrate) == 0x0006A8, "Member 'AGCN_RezOut_C::Dissolve_Timeline_Playrate' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Glow_Timeline_Playrate) == 0x0006B0, "Member 'AGCN_RezOut_C::Glow_Timeline_Playrate' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DEBUG_REMOVESPAWNVFX) == 0x0006B8, "Member 'AGCN_RezOut_C::DEBUG_REMOVESPAWNVFX' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DEBUG_REMOVESPAWNEDPOINTLIGHT) == 0x0006B9, "Member 'AGCN_RezOut_C::DEBUG_REMOVESPAWNEDPOINTLIGHT' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Drone_Visual_Effect) == 0x0006C0, "Member 'AGCN_RezOut_C::Drone_Visual_Effect' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Drone_VFX_Attach_Point) == 0x0006C8, "Member 'AGCN_RezOut_C::Drone_VFX_Attach_Point' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DEBUG_FXSYSTEMCOMPONENTS) == 0x0006CC, "Member 'AGCN_RezOut_C::DEBUG_FXSYSTEMCOMPONENTS' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, ShouldDelayBetweenAnimAndVFX) == 0x0006CD, "Member 'AGCN_RezOut_C::ShouldDelayBetweenAnimAndVFX' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, DelayBetweenAnimAndVFX) == 0x0006D0, "Member 'AGCN_RezOut_C::DelayBetweenAnimAndVFX' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Material_Override_ID) == 0x0006D8, "Member 'AGCN_RezOut_C::Material_Override_ID' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_C, Copied_Parameters) == 0x0006E8, "Member 'AGCN_RezOut_C::Copied_Parameters' has a wrong offset!");

}
