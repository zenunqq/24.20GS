#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on _WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_Construction final
{
public:
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_Construction) == 0x000004, "Wrong alignment on _WaterMeshBlueprintMaster_C_Construction");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_Construction) == 0x000014, "Wrong size on _WaterMeshBlueprintMaster_C_Construction");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Construction, CallFunc_GetNumMaterials_ReturnValue) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_Construction::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Construction, Temp_int_Variable) == 0x000004, "Member '_WaterMeshBlueprintMaster_C_Construction::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Construction, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_Construction::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Construction, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member '_WaterMeshBlueprintMaster_C_Construction::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Construction, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_Construction::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0xC];
	struct FTransform                             CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform;
	struct FVector                                CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector;
	bool                                          CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_8A[0x6];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	double                                        CallFunc_Abs_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_D3[0x5];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	class AFortWindManager*                       CallFunc_GetWindManager_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	class AWindManager_C*                         K2Node_DynamicCast_AsWind_Manager;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_F9[0x7];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_7;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_7;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_7;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_7;
	uint8                                         Pad_11C[0x4];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_6;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_6;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_6;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_6;
	uint8                                         Pad_13C[0x4];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_5;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_5;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_5;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_5;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_3;
	uint8                                         Pad_15D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_3;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_4;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_4;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_4;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_4;
	uint8                                         Pad_25C[0x4];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_3;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_3;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_3;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_3;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_2;
	uint8                                         Pad_27D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_2;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_2;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;
	uint8                                         Pad_37D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_47D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster) == 0x000010, "Wrong alignment on _WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster) == 0x000580, "Wrong size on _WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, EntryPoint) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::EntryPoint' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Find_Placement_on_water_mesh_surfaces_Traced_Transform' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector) == 0x000070, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Find_Placement_on_water_mesh_surfaces_VelocityVector' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit) == 0x000088, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Find_Placement_on_water_mesh_surfaces_Trace_Hit' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_BooleanAND_ReturnValue) == 0x000089, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_GetVelocity_ReturnValue) == 0x000090, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_BreakVector_X) == 0x0000A8, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_BreakVector_Y) == 0x0000B0, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_BreakVector_Z) == 0x0000B8, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000C0, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Abs_ReturnValue) == 0x0000C8, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000D0, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000D1, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_BooleanAND_ReturnValue_1) == 0x0000D2, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x0000D8, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_GetWindManager_ReturnValue) == 0x0000E0, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_GetWindManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000E8, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_DynamicCast_AsWind_Manager) == 0x0000F0, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_DynamicCast_AsWind_Manager' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_7) == 0x000100, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_7' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_7) == 0x000108, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_7' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_7) == 0x000110, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_7' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_7) == 0x000118, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_7' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_6) == 0x000120, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_6' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_6) == 0x000128, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_6' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_6) == 0x000130, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_6' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_6) == 0x000138, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_6' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_5) == 0x000140, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_5' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_5) == 0x000148, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_5' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_5) == 0x000150, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_5' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_5) == 0x000158, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_5' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_bFromSweep_3) == 0x00015C, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_bFromSweep_3' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_SweepResult_3) == 0x000160, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_SweepResult_3' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_4) == 0x000240, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_4' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_4) == 0x000248, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_4' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_4) == 0x000250, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_4' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_4) == 0x000258, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_4' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_3) == 0x000260, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_3' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_3) == 0x000268, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_3' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_3) == 0x000270, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_3' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_3) == 0x000278, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_3' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_bFromSweep_2) == 0x00027C, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_bFromSweep_2' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_SweepResult_2) == 0x000280, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_SweepResult_2' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_2) == 0x000360, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_2' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_2) == 0x000368, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_2) == 0x000370, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_2) == 0x000378, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_2' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x00037C, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000380, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000460, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000468, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000470, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000478, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_bFromSweep) == 0x00047C, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_SweepResult) == 0x000480, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000560, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherActor) == 0x000568, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherComp) == 0x000570, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000578, "Member '_WaterMeshBlueprintMaster_C_ExecuteUbergraph__WaterMeshBlueprintMaster::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces final
{
public:
	struct FTransform                             Traced_Transform;
	struct FVector                                VelocityVector;
	bool                                          Trace_Hit;
	uint8                                         Pad_79[0x3];
	struct FLinearColor                           NewLocalVar_0;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_8D[0x3];
	class UStaticMeshComponent*                   K2Node_Select_Default;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_K2_LineTraceComponent_HitLocation;
	struct FVector                                CallFunc_K2_LineTraceComponent_HitNormal;
	class FName                                   CallFunc_K2_LineTraceComponent_BoneName;
	uint8                                         Pad_134[0x4];
	struct FHitResult                             CallFunc_K2_LineTraceComponent_OutHit;
	bool                                          CallFunc_K2_LineTraceComponent_ReturnValue;
	uint8                                         Pad_219[0x7];
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue_1;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_259[0x7];
	struct FVector                                CallFunc_SelectVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FRotator                               CallFunc_MakeRotFromXZ_ReturnValue;
	uint8                                         Pad_2A8[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces) == 0x000010, "Wrong alignment on _WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces) == 0x000310, "Wrong size on _WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, Traced_Transform) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::Traced_Transform' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, VelocityVector) == 0x000060, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::VelocityVector' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, Trace_Hit) == 0x000078, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::Trace_Hit' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, NewLocalVar_0) == 0x00007C, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, Temp_bool_Variable) == 0x00008C, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, K2Node_Select_Default) == 0x000090, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_GetVelocity_ReturnValue) == 0x000098, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000B0, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000B8, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000E8, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_LineTraceComponent_HitLocation) == 0x000100, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_LineTraceComponent_HitLocation' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_LineTraceComponent_HitNormal) == 0x000118, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_LineTraceComponent_HitNormal' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_LineTraceComponent_BoneName) == 0x000130, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_LineTraceComponent_BoneName' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_LineTraceComponent_OutHit) == 0x000138, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_LineTraceComponent_OutHit' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_K2_LineTraceComponent_ReturnValue) == 0x000218, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_K2_LineTraceComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_Cross_VectorVector_ReturnValue) == 0x000220, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_Cross_VectorVector_ReturnValue_1) == 0x000238, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_Cross_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_VSize_ReturnValue) == 0x000250, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000258, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_SelectVector_ReturnValue) == 0x000260, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_Normal_ReturnValue) == 0x000278, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_MakeRotFromXZ_ReturnValue) == 0x000290, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_MakeRotFromXZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces, CallFunc_MakeTransform_ReturnValue) == 0x0002B0, "Member '_WaterMeshBlueprintMaster_C_Find_Placement_on_water_mesh_surfaces::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays final
{
public:
	bool                                          In_T_Out_F;
	uint8                                         Pad_1[0x7];
	class AActor*                                 Touching_Actor;
	class UStaticMeshComponent*                   Touching_Volume;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_1C[0x4];
	class APlayerPawn_Generic_Parent_C*           K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x3];
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_32[0x2];
	int32                                         K2Node_Select_Default;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays) == 0x000040, "Wrong size on _WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, In_T_Out_F) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::In_T_Out_F' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, Touching_Actor) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::Touching_Actor' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, Touching_Volume) == 0x000010, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::Touching_Volume' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, Temp_int_Variable) == 0x000018, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent) == 0x000020, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, K2Node_DynamicCast_bSuccess) == 0x000028, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, Temp_int_Variable_1) == 0x00002C, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, Temp_bool_Variable) == 0x000030, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, CallFunc_Greater_IntInt_ReturnValue) == 0x000031, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, K2Node_Select_Default) == 0x000034, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member '_WaterMeshBlueprintMaster_C_Handle_Water_Penetration_Components_And_Arrays::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct _WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes final
{
public:
	class UStaticMeshComponent*                   StaticMeshComponent;
	int32                                         Target_Int;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
};
static_assert(alignof(_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes) == 0x000008, "Wrong alignment on _WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes");
static_assert(sizeof(_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes) == 0x000010, "Wrong size on _WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes, StaticMeshComponent) == 0x000000, "Member '_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes, Target_Int) == 0x000008, "Member '_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes::Target_Int' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member '_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000D, "Member '_WaterMeshBlueprintMaster_C_SetupMeshCollisionVolumes::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}
