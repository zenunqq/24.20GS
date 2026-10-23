#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ADuplicateResOutMesh_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	float                                         CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1;
	float                                         CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1;
	float                                         CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1;
	ETimelineDirection                            CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1;
	uint8                                         Pad_2A5[0x3];
	class UTimelineComponent*                     CharacterSpawnInTimeline;
	class USkeletalMeshComponent*                 Skeletal_Mesh_Duplicate;
	bool                                          Gun_True;
	uint8                                         Pad_2B9[0x7];
	double                                        BoundsRadius;
	TArray<class UMaterialInstanceDynamic*>       MIDArray;
	struct FVector                                World_location_for_the_dissolve_location;
	class UMaterialInstanceDynamic*               Current_MID;
	double                                        Head_Space;
	double                                        Leg_Space;
	class UPointLightComponent*                   Spawn_Light;
	double                                        light_intensity;
	int32                                         Number_of_Base_skeletal_mesh_materials;
	uint8                                         Pad_31C[0x4];
	double                                        FirstPassComplete;
	TArray<class USkeletalMeshComponent*>         ExternalSkeletalMeshComponent;
	uint8                                         Pad_338[0x8];
	struct FTransform                             Box_Local_Transform;
	double                                        Timeline_Play_Length;
	bool                                          TeleportOut_;
	uint8                                         Pad_3A9[0x7];
	class AActor*                                 ExternalActor;
	TArray<class USkeletalMeshComponent*>         InternalSkeletalMeshComponents;
	int32                                         CurrentMeshMidIndex;
	uint8                                         Pad_3CC[0x4];
	class USkeletalMeshComponent*                 External_Base_Mesh_Component;
	TArray<class UMaterialInstanceDynamic*>       ExternalMidArray;
	class USkeletalMeshComponent*                 ExternalRootMeshComponent;
	TArray<class UMaterialInterface*>             ListOfMaterialsExemptFromReparenting;
	TArray<class UMaterialInstanceDynamic*>       Original_MIDs;
	int32                                         Increment_End;

public:
	void CharacterSpawnInTimeline__FinishedFunc();
	void CharacterSpawnInTimeline__UpdateFunc();
	void ExecuteUbergraph_DuplicateResOutMesh(int32 EntryPoint);
	void External_Mesh_Masked_Setup(TArray<class USkeletalMeshComponent*>& External_MEsh_Component_Array, TArray<class UMaterialInstanceDynamic*>* Corrected_Mid_Array);
	void Find_Bounds();
	void initializeExternalSkeletalMeshArray();
	void Make_and_slave_internal_meshes();
	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array();
	void ProcessSpawnInTimeline(double ZHeight, double LightIntensity);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RestoreInProgressRes();
	void Spawn__Light();
	void Store_Original_Material_for_Teleport_In();
	void UpdateExternalParameters(const TArray<class UMaterialInstanceDynamic*>& MID_Array, const TArray<class USkeletalMeshComponent*>& External_MEsh_Component_Array);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DuplicateResOutMesh_C">();
	}
	static class ADuplicateResOutMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADuplicateResOutMesh_C>();
	}
};
static_assert(alignof(ADuplicateResOutMesh_C) == 0x000010, "Wrong alignment on ADuplicateResOutMesh_C");
static_assert(sizeof(ADuplicateResOutMesh_C) == 0x000420, "Wrong size on ADuplicateResOutMesh_C");
static_assert(offsetof(ADuplicateResOutMesh_C, UberGraphFrame) == 0x000288, "Member 'ADuplicateResOutMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, DefaultSceneRoot) == 0x000290, "Member 'ADuplicateResOutMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1) == 0x000298, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1) == 0x00029C, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1) == 0x0002A0, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1) == 0x0002A4, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline) == 0x0002A8, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Skeletal_Mesh_Duplicate) == 0x0002B0, "Member 'ADuplicateResOutMesh_C::Skeletal_Mesh_Duplicate' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Gun_True) == 0x0002B8, "Member 'ADuplicateResOutMesh_C::Gun_True' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, BoundsRadius) == 0x0002C0, "Member 'ADuplicateResOutMesh_C::BoundsRadius' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, MIDArray) == 0x0002C8, "Member 'ADuplicateResOutMesh_C::MIDArray' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, World_location_for_the_dissolve_location) == 0x0002D8, "Member 'ADuplicateResOutMesh_C::World_location_for_the_dissolve_location' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Current_MID) == 0x0002F0, "Member 'ADuplicateResOutMesh_C::Current_MID' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Head_Space) == 0x0002F8, "Member 'ADuplicateResOutMesh_C::Head_Space' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Leg_Space) == 0x000300, "Member 'ADuplicateResOutMesh_C::Leg_Space' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Spawn_Light) == 0x000308, "Member 'ADuplicateResOutMesh_C::Spawn_Light' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, light_intensity) == 0x000310, "Member 'ADuplicateResOutMesh_C::light_intensity' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Number_of_Base_skeletal_mesh_materials) == 0x000318, "Member 'ADuplicateResOutMesh_C::Number_of_Base_skeletal_mesh_materials' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, FirstPassComplete) == 0x000320, "Member 'ADuplicateResOutMesh_C::FirstPassComplete' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalSkeletalMeshComponent) == 0x000328, "Member 'ADuplicateResOutMesh_C::ExternalSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Box_Local_Transform) == 0x000340, "Member 'ADuplicateResOutMesh_C::Box_Local_Transform' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Timeline_Play_Length) == 0x0003A0, "Member 'ADuplicateResOutMesh_C::Timeline_Play_Length' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, TeleportOut_) == 0x0003A8, "Member 'ADuplicateResOutMesh_C::TeleportOut_' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalActor) == 0x0003B0, "Member 'ADuplicateResOutMesh_C::ExternalActor' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, InternalSkeletalMeshComponents) == 0x0003B8, "Member 'ADuplicateResOutMesh_C::InternalSkeletalMeshComponents' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentMeshMidIndex) == 0x0003C8, "Member 'ADuplicateResOutMesh_C::CurrentMeshMidIndex' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, External_Base_Mesh_Component) == 0x0003D0, "Member 'ADuplicateResOutMesh_C::External_Base_Mesh_Component' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalMidArray) == 0x0003D8, "Member 'ADuplicateResOutMesh_C::ExternalMidArray' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalRootMeshComponent) == 0x0003E8, "Member 'ADuplicateResOutMesh_C::ExternalRootMeshComponent' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ListOfMaterialsExemptFromReparenting) == 0x0003F0, "Member 'ADuplicateResOutMesh_C::ListOfMaterialsExemptFromReparenting' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Original_MIDs) == 0x000400, "Member 'ADuplicateResOutMesh_C::Original_MIDs' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Increment_End) == 0x000410, "Member 'ADuplicateResOutMesh_C::Increment_End' has a wrong offset!");

}
