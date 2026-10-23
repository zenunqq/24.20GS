#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_9[0x7];
	struct FHitResult                             K2Node_Event_Hit;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_F2[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_FC[0x4];
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
	uint8                                         Pad_18C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	float                                         K2Node_Event_Damage;
	uint8                                         Pad_1C4[0x4];
	const class UDamageType*                      K2Node_Event_DamageType;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	bool                                          Temp_bool_IsClosed_Variable_1;
	uint8                                         Pad_1E1[0x7];
	TArray<class AActor*>                         K2Node_Event_HitActors;
	TArray<struct FHitResult>                     K2Node_Event_HitResults;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster");
static_assert(sizeof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster) == 0x000238, "Wrong size on B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, EntryPoint) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, Temp_bool_Has_Been_Initd_Variable_1) == 0x000007, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_Hit) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_bBlockingHit) == 0x0000F0, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000F1, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_Time) == 0x0000F4, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_Distance) == 0x0000F8, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_Location) == 0x000100, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_ImpactPoint) == 0x000118, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_Normal) == 0x000130, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_PhysMat) == 0x000160, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_HitActor) == 0x000168, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_HitComponent) == 0x000170, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_HitBoneName) == 0x000178, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_BoneName) == 0x00017C, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_HitItem) == 0x000180, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_ElementIndex) == 0x000184, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_FaceIndex) == 0x000188, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_TraceStart) == 0x000190, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_BreakHitResult_TraceEnd) == 0x0001A8, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_Damage) == 0x0001C0, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_DamageType) == 0x0001C8, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_InstigatedBy) == 0x0001D0, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_DamageCauser) == 0x0001D8, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, Temp_bool_IsClosed_Variable_1) == 0x0001E0, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_HitActors) == 0x0001E8, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, K2Node_Event_HitResults) == 0x0001F8, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000208, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000220, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_RandomFloatInRange_ReturnValue) == 0x000228, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster, CallFunc_Delay_Duration_ImplicitCast) == 0x000230, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_Cluster_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;
	TArray<struct FHitResult>                     HitResults;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_Cluster_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_Cluster_C_OnExploded");
static_assert(sizeof(B_Prj_Commando_FragGrenade_Cluster_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Commando_FragGrenade_Cluster_C_OnExploded");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_OnExploded::HitResults' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_Cluster_C_OnStop final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_Cluster_C_OnStop) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_Cluster_C_OnStop");
static_assert(sizeof(B_Prj_Commando_FragGrenade_Cluster_C_OnStop) == 0x0000E0, "Wrong size on B_Prj_Commando_FragGrenade_Cluster_C_OnStop");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_OnStop::Hit' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	const class UDamageType*                      DamageType;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage");
static_assert(sizeof(B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage) == 0x000020, "Wrong size on B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage, Damage) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'B_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

}
