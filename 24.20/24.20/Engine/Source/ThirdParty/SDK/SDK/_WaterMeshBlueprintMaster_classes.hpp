#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class A_WaterMeshBlueprintMaster_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   CollisionMesh1;
	class UStaticMeshComponent*                   CollisionMesh2;
	class UStaticMeshComponent*                   CollisionMesh4;
	class UStaticMeshComponent*                   CollisionMesh3;
	class UStaticMeshComponent*                   StaticMesh1;
	int32                                         Number_of_Collision_Meshes;
	bool                                          FlipFlow;
	bool                                          NoFlow;
	uint8                                         Pad_2BE[0x2];
	class UMaterialInterface*                     FlippedMaterial;
	int32                                         Current_Characters_Personal_Water_Counter;
	bool                                          Water_Interactions;
	bool                                          Entering_True_Exiting_False;
	uint8                                         Pad_2CE[0x2];
	class APlayerPawn_Generic_Parent_C*           ExternalActor;
	class UStaticMeshComponent*                   Internal_Mesh;
	bool                                          Continue;
	uint8                                         Pad_2E1[0x7];
	double                                        Minimum_time_between_splashes;
	bool                                          ShowTestMesh;
	bool                                          HasExecutedConstuctionScript;
	bool                                          Is_Deep_Water_Asset_;

public:
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Construct();
	void Construction();
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int32 EntryPoint);
	void Find_Placement_on_water_mesh_surfaces(struct FTransform* Traced_Transform, struct FVector* VelocityVector, bool* Trace_Hit);
	void Handle_Water_Penetration_Components_And_Arrays(bool In_T_Out_F, class AActor* Touching_Actor, class UStaticMeshComponent* Touching_Volume);
	void ReceiveBeginPlay();
	void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int32 Target_Int);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"_WaterMeshBlueprintMaster_C">();
	}
	static class A_WaterMeshBlueprintMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<A_WaterMeshBlueprintMaster_C>();
	}
};
static_assert(alignof(A_WaterMeshBlueprintMaster_C) == 0x000008, "Wrong alignment on A_WaterMeshBlueprintMaster_C");
static_assert(sizeof(A_WaterMeshBlueprintMaster_C) == 0x0002F8, "Wrong size on A_WaterMeshBlueprintMaster_C");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, UberGraphFrame) == 0x000288, "Member 'A_WaterMeshBlueprintMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh1) == 0x000290, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh1' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh2) == 0x000298, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh2' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh4) == 0x0002A0, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh4' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, CollisionMesh3) == 0x0002A8, "Member 'A_WaterMeshBlueprintMaster_C::CollisionMesh3' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, StaticMesh1) == 0x0002B0, "Member 'A_WaterMeshBlueprintMaster_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Number_of_Collision_Meshes) == 0x0002B8, "Member 'A_WaterMeshBlueprintMaster_C::Number_of_Collision_Meshes' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, FlipFlow) == 0x0002BC, "Member 'A_WaterMeshBlueprintMaster_C::FlipFlow' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, NoFlow) == 0x0002BD, "Member 'A_WaterMeshBlueprintMaster_C::NoFlow' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, FlippedMaterial) == 0x0002C0, "Member 'A_WaterMeshBlueprintMaster_C::FlippedMaterial' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Current_Characters_Personal_Water_Counter) == 0x0002C8, "Member 'A_WaterMeshBlueprintMaster_C::Current_Characters_Personal_Water_Counter' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Water_Interactions) == 0x0002CC, "Member 'A_WaterMeshBlueprintMaster_C::Water_Interactions' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Entering_True_Exiting_False) == 0x0002CD, "Member 'A_WaterMeshBlueprintMaster_C::Entering_True_Exiting_False' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, ExternalActor) == 0x0002D0, "Member 'A_WaterMeshBlueprintMaster_C::ExternalActor' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Internal_Mesh) == 0x0002D8, "Member 'A_WaterMeshBlueprintMaster_C::Internal_Mesh' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Continue) == 0x0002E0, "Member 'A_WaterMeshBlueprintMaster_C::Continue' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Minimum_time_between_splashes) == 0x0002E8, "Member 'A_WaterMeshBlueprintMaster_C::Minimum_time_between_splashes' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, ShowTestMesh) == 0x0002F0, "Member 'A_WaterMeshBlueprintMaster_C::ShowTestMesh' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, HasExecutedConstuctionScript) == 0x0002F1, "Member 'A_WaterMeshBlueprintMaster_C::HasExecutedConstuctionScript' has a wrong offset!");
static_assert(offsetof(A_WaterMeshBlueprintMaster_C, Is_Deep_Water_Asset_) == 0x0002F2, "Member 'A_WaterMeshBlueprintMaster_C::Is_Deep_Water_Asset_' has a wrong offset!");

}
