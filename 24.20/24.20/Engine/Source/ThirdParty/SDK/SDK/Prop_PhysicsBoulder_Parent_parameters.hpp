#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Prop_PhysicsBoulder_Parent_C_ComponentHit final
{
public:
	class UPrimitiveComponent*                    HitComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(Prop_PhysicsBoulder_Parent_C_ComponentHit) == 0x000008, "Wrong alignment on Prop_PhysicsBoulder_Parent_C_ComponentHit");
static_assert(sizeof(Prop_PhysicsBoulder_Parent_C_ComponentHit) == 0x000110, "Wrong size on Prop_PhysicsBoulder_Parent_C_ComponentHit");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ComponentHit, HitComponent) == 0x000000, "Member 'Prop_PhysicsBoulder_Parent_C_ComponentHit::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ComponentHit, OtherActor) == 0x000008, "Member 'Prop_PhysicsBoulder_Parent_C_ComponentHit::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ComponentHit, OtherComp) == 0x000010, "Member 'Prop_PhysicsBoulder_Parent_C_ComponentHit::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ComponentHit, NormalImpulse) == 0x000018, "Member 'Prop_PhysicsBoulder_Parent_C_ComponentHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ComponentHit, Hit) == 0x000030, "Member 'Prop_PhysicsBoulder_Parent_C_ComponentHit::Hit' has a wrong offset!");

struct Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate;
	class UPrimitiveComponent*                    K2Node_CustomEvent_HitComponent;
	class AActor*                                 K2Node_CustomEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;
	struct FVector                                K2Node_CustomEvent_NormalImpulse;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_123[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_12C[0x4];
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
	uint8                                         Pad_1BC[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1F9[0x7];
	class UFortPhysicsObjectComponent*            CallFunc_GetPhysicsObjectComponent_ReturnValue;
	class UPrimitiveComponent*                    CallFunc_GetMovementBase_ReturnValue;
	bool                                          CallFunc_IsActive_ReturnValue;
	uint8                                         Pad_211[0x7];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Minimum_Met;
	uint8                                         Pad_239[0x7];
	double                                        CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Impulse;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	uint8                                         Pad_27C[0x4];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_2B1[0x7];
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_2F9[0x7];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
};
static_assert(alignof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent) == 0x000008, "Wrong alignment on Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent");
static_assert(sizeof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent) == 0x000310, "Wrong size on Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, EntryPoint) == 0x000000, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_CustomEvent_HitComponent) == 0x000010, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_CustomEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_CustomEvent_OtherActor) == 0x000018, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_CustomEvent_OtherComp) == 0x000020, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_CustomEvent_NormalImpulse) == 0x000028, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_CustomEvent_Hit) == 0x000040, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_IsServer_ReturnValue) == 0x000120, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_bBlockingHit) == 0x000121, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_bInitialOverlap) == 0x000122, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_Time) == 0x000124, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_Distance) == 0x000128, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_Location) == 0x000130, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_ImpactPoint) == 0x000148, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_Normal) == 0x000160, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_ImpactNormal) == 0x000178, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_PhysMat) == 0x000190, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_HitActor) == 0x000198, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_HitComponent) == 0x0001A0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_HitBoneName) == 0x0001A8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_BoneName) == 0x0001AC, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_HitItem) == 0x0001B0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_ElementIndex) == 0x0001B4, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_FaceIndex) == 0x0001B8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_TraceStart) == 0x0001C0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_BreakHitResult_TraceEnd) == 0x0001D8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001F0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, K2Node_DynamicCast_bSuccess) == 0x0001F8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetPhysicsObjectComponent_ReturnValue) == 0x000200, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetPhysicsObjectComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetMovementBase_ReturnValue) == 0x000208, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetMovementBase_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_IsActive_ReturnValue) == 0x000210, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetVelocity_ReturnValue) == 0x000218, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_VSize_ReturnValue) == 0x000230, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Minimum_Met) == 0x000238, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Minimum_Met' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Impulse) == 0x000240, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetPlayerImpulseVelocityFromImpactVelocity_Impulse' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000248, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000260, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetValueAtLevel_ReturnValue) == 0x000278, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_MakeVector_ReturnValue) == 0x000280, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Add_VectorVector_ReturnValue) == 0x000298, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0002B0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Normal_ReturnValue) == 0x0002B8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0002D0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetTimeSeconds_ReturnValue) == 0x0002E8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x0002F0, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0002F8, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000300, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent, CallFunc_MakeVector_Z_ImplicitCast) == 0x000308, "Member 'Prop_PhysicsBoulder_Parent_C_ExecuteUbergraph_Prop_PhysicsBoulder_Parent::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");

struct Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity final
{
public:
	double                                        Impact;
	bool                                          Minimum_Met;
	uint8                                         Pad_9[0x7];
	double                                        Impulse;
	double                                        ReturnImpulseValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FScalableFloat                         CallFunc_Array_Get_Item;
	struct FScalableFloat                         CallFunc_Array_Get_Item_1;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_91[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	int32                                         CallFunc_Max_ReturnValue;
	double                                        K2Node_VariableSet_ReturnImpulseValue_ImplicitCast;
	double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity) == 0x000008, "Wrong alignment on Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity");
static_assert(sizeof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity) == 0x0000B0, "Wrong size on Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, Impact) == 0x000000, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::Impact' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, Minimum_Met) == 0x000008, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::Minimum_Met' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, Impulse) == 0x000010, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::Impulse' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, ReturnImpulseValue) == 0x000018, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::ReturnImpulseValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, Temp_int_Array_Index_Variable) == 0x000020, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000030, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_Array_Get_Item) == 0x000038, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_GetValueAtLevel_ReturnValue) == 0x000088, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x00008C, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000090, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_Array_Length_ReturnValue) == 0x000094, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000098, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_Max_ReturnValue) == 0x00009C, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, K2Node_VariableSet_ReturnImpulseValue_ImplicitCast) == 0x0000A0, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::K2Node_VariableSet_ReturnImpulseValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity, CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast) == 0x0000A8, "Member 'Prop_PhysicsBoulder_Parent_C_GetPlayerImpulseVelocityFromImpactVelocity::CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}
