#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BGA_Athena_WithGravity_Parent_C_AttachToBindedActor final
{
public:
	class UPrimitiveComponent*                    AttachComp;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class ABuildingWall*                          K2Node_DynamicCast_AsBuilding_Wall;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_CanActorSimulatePhysics_ReturnValue;
	uint8                                         Pad_32[0x6];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_AttachToBindedActor");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor) == 0x000050, "Wrong size on BGA_Athena_WithGravity_Parent_C_AttachToBindedActor");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, AttachComp) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::AttachComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, K2Node_DynamicCast_AsBuilding_Actor) == 0x000018, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, K2Node_DynamicCast_AsBuilding_Wall) == 0x000028, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::K2Node_DynamicCast_AsBuilding_Wall' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, CallFunc_CanActorSimulatePhysics_ReturnValue) == 0x000031, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::CallFunc_CanActorSimulatePhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000038, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_AttachToBindedActor, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'BGA_Athena_WithGravity_Parent_C_AttachToBindedActor::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_BaseDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_BaseDestroyed) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_BaseDestroyed");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_BaseDestroyed) == 0x000008, "Wrong size on BGA_Athena_WithGravity_Parent_C_BaseDestroyed");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDestroyed, DestroyedActor) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDestroyed::DestroyedActor' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_BaseDied final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_BaseDied) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_BaseDied");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_BaseDied) == 0x000060, "Wrong size on BGA_Athena_WithGravity_Parent_C_BaseDied");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, DamagedActor) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, Damage) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::Damage' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, InstigatedBy) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, DamageCauser) == 0x000018, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, HitLocation) == 0x000020, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::HitLocation' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, FHitComponent) == 0x000038, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, BoneName) == 0x000040, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::BoneName' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BaseDied, Momentum) == 0x000048, "Member 'BGA_Athena_WithGravity_Parent_C_BaseDied::Momentum' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_BounceBGA final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_MirrorVectorByNormal_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_BounceBGA) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_BounceBGA");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_BounceBGA) == 0x000078, "Wrong size on BGA_Athena_WithGravity_Parent_C_BounceBGA");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, Temp_int_Variable) == 0x000004, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_VSize_ReturnValue) == 0x000020, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_MirrorVectorByNormal_ReturnValue) == 0x000028, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_MirrorVectorByNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGA, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGA::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation final
{
public:
	struct FVector                                LocationToBounceAwayFrom;
	double                                        CallFunc_FMax_ReturnValue;
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_91[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation) == 0x0000E8, "Wrong size on BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, LocationToBounceAwayFrom) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::LocationToBounceAwayFrom' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_FMax_ReturnValue) == 0x000018, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000020, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000058, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_VSize_ReturnValue) == 0x000070, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Normal_ReturnValue) == 0x000078, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000090, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_SelectFloat_ReturnValue) == 0x000098, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x0000A0, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000B8, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0000D0, "Member 'BGA_Athena_WithGravity_Parent_C_BounceBGAAwayFromLocation::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce final
{
public:
	class AActor*                                 Hit;
	bool                                          HitSameClass;
	uint8                                         Pad_9[0x7];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce) == 0x000030, "Wrong size on BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, Hit) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::Hit' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, HitSameClass) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::HitSameClass' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, CallFunc_GetObjectClass_ReturnValue_1) == 0x000020, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::CallFunc_GetObjectClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000028, "Member 'BGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;
	struct FHitResult                             K2Node_CustomEvent_HitResult;
	class AActor*                                 CallFunc_Array_Get_Item;
	class ABGA_Athena_WithGravity_Parent_C*       K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_101[0x7];
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_111[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_132[0x6];
	double                                        K2Node_CustomEvent_DelayBeforeImpulse;
	double                                        K2Node_CustomEvent_DelayBeforeCollision;
	struct FVector                                K2Node_CustomEvent_ImpulseOrigin;
	struct FVector                                K2Node_CustomEvent_ImpulseAmount;
	bool                                          K2Node_CustomEvent_SetCollisionAfterImpulse;
	uint8                                         Pad_179[0x7];
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_1CD[0x3];
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_1DC[0x4];
	struct FHitResult                             K2Node_CustomEvent_Hit;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_2C2[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_2CC[0x4];
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
	uint8                                         Pad_35C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_391[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_3A1[0x7];
	class UPrimitiveComponent*                    K2Node_Event_MyComp;
	class AActor*                                 K2Node_Event_Other;
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;
	bool                                          K2Node_Event_bSelfMoved;
	uint8                                         Pad_3C1[0x7];
	struct FVector                                K2Node_Event_HitLocation;
	struct FVector                                K2Node_Event_HitNormal;
	struct FVector                                K2Node_Event_NormalImpulse;
	struct FHitResult                             K2Node_Event_Hit;
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	class FName                                   CallFunc_GetAttachSocketName_ReturnValue;
	uint8                                         Pad_4FC[0x4];
	double                                        CallFunc_DegAcos_ReturnValue;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Contains_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_CheckForSameClassToBounce_HitSameClass;
	uint8                                         Pad_51C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_541[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	uint8                                         Pad_56A[0x6];
	class ABGA_Athena_WithGravity_Parent_C*       K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_57A[0x6];
	class AFortProjectileBase*                    K2Node_DynamicCast_AsFort_Projectile_Base;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_589[0x7];
	class AActor*                                 K2Node_CustomEvent_Actor;
	class UPrimitiveComponent*                    K2Node_CustomEvent_HitComp;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_5A2[0x6];
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_5B1[0x7];
	class UFortPhysicsObjectComponent*            CallFunc_GetPhysicsObjectComponent_ReturnValue;
	bool                                          CallFunc_CanActorSimulatePhysics_ReturnValue;
	uint8                                         Pad_5C1[0x7];
	class AMilitaryBase_Door_01_C*                K2Node_DynamicCast_AsMilitary_Base_Door_01;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_5D1[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_5E2[0x2];
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	class AFortAthenaWater*                       K2Node_DynamicCast_AsFort_Athena_Water;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_5F1[0x7];
	class AFortWaterBodyBP_C*                     K2Node_DynamicCast_AsFort_Water_Body_BP;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_602[0x6];
	class AActor*                                 K2Node_CustomEvent_DamagedActor;
	float                                         K2Node_CustomEvent_Damage;
	uint8                                         Pad_614[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy;
	class AActor*                                 K2Node_CustomEvent_DamageCauser;
	struct FVector                                K2Node_CustomEvent_HitLocation;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;
	class FName                                   K2Node_CustomEvent_BoneName;
	uint8                                         Pad_64C[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum;
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_4;
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_6D2[0x6];
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;
	class UPrimitiveComponent*                    K2Node_CustomEvent_SimulatingComponent;
	bool                                          K2Node_CustomEvent_bIsAwake;
	uint8                                         Pad_6E9[0x3];
	TDelegate<void(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)> K2Node_CreateDelegate_OutputDelegate_5;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor_2;
	bool                                          K2Node_DynamicCast_bSuccess_11;
	uint8                                         Pad_709[0x7];
	class UFortPhysicsObjectComponent*            CallFunc_GetPhysicsObjectComponent_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_5;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent) == 0x000738, "Wrong size on BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, EntryPoint) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_HitResult) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_HitResult' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent) == 0x0000F8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsBuilding_Actor) == 0x000108, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000118, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Greater_IntInt_ReturnValue) == 0x000130, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BooleanAND_ReturnValue) == 0x000131, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_DelayBeforeImpulse) == 0x000138, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_DelayBeforeImpulse' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_DelayBeforeCollision) == 0x000140, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_DelayBeforeCollision' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_ImpulseOrigin) == 0x000148, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_ImpulseOrigin' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_ImpulseAmount) == 0x000160, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_ImpulseAmount' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_SetCollisionAfterImpulse) == 0x000178, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_SetCollisionAfterImpulse' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000180, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Normal_ReturnValue) == 0x000198, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0001B0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Array_Add_ReturnValue) == 0x0001C8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BooleanAND_ReturnValue_1) == 0x0001CC, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001D0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_Hit) == 0x0001E0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_bBlockingHit) == 0x0002C0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_bInitialOverlap) == 0x0002C1, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_Time) == 0x0002C4, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_Distance) == 0x0002C8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_Location) == 0x0002D0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_ImpactPoint) == 0x0002E8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_Normal) == 0x000300, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_ImpactNormal) == 0x000318, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_PhysMat) == 0x000330, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_HitActor) == 0x000338, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_HitComponent) == 0x000340, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_HitBoneName) == 0x000348, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_BoneName) == 0x00034C, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_HitItem) == 0x000350, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_ElementIndex) == 0x000354, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_FaceIndex) == 0x000358, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_TraceStart) == 0x000360, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BreakHitResult_TraceEnd) == 0x000378, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_IsValid_ReturnValue) == 0x000390, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000394, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_HasAuthority_ReturnValue) == 0x0003A0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_MyComp) == 0x0003A8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_Other) == 0x0003B0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_OtherComp) == 0x0003B8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_bSelfMoved) == 0x0003C0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_HitLocation) == 0x0003C8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_HitNormal) == 0x0003E0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_NormalImpulse) == 0x0003F8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_Event_Hit) == 0x000410, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Dot_VectorVector_ReturnValue) == 0x0004F0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_GetAttachSocketName_ReturnValue) == 0x0004F8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_GetAttachSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_DegAcos_ReturnValue) == 0x000500, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_DegAcos_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Conv_NameToString_ReturnValue) == 0x000508, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000518, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Contains_ReturnValue) == 0x000519, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Not_PreBool_ReturnValue) == 0x00051A, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_CheckForSameClassToBounce_HitSameClass) == 0x00051B, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_CheckForSameClassToBounce_HitSameClass' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000520, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsFort_AIPawn) == 0x000538, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_2) == 0x000540, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000548, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000560, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_3) == 0x000568, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Array_Contains_ReturnValue) == 0x000569, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1) == 0x000570, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsBGA_Athena_with_Gravity_Parent_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_4) == 0x000578, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BooleanAND_ReturnValue_2) == 0x000579, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsFort_Projectile_Base) == 0x000580, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsFort_Projectile_Base' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_5) == 0x000588, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_Actor) == 0x000590, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_Actor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_HitComp) == 0x000598, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_HitComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BooleanOR_ReturnValue) == 0x0005A0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_IsValid_ReturnValue_1) == 0x0005A1, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsBuilding_Actor_1) == 0x0005A8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsBuilding_Actor_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_6) == 0x0005B0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_GetPhysicsObjectComponent_ReturnValue) == 0x0005B8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_GetPhysicsObjectComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_CanActorSimulatePhysics_ReturnValue) == 0x0005C0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_CanActorSimulatePhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsMilitary_Base_Door_01) == 0x0005C8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsMilitary_Base_Door_01' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_7) == 0x0005D0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsPlayer_Pawn_Athena_1) == 0x0005D8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsPlayer_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_8) == 0x0005E0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0005E1, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Array_Add_ReturnValue_1) == 0x0005E4, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsFort_Athena_Water) == 0x0005E8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsFort_Athena_Water' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_9) == 0x0005F0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsFort_Water_Body_BP) == 0x0005F8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsFort_Water_Body_BP' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_10) == 0x000600, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_BooleanOR_ReturnValue_1) == 0x000601, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_DamagedActor) == 0x000608, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_Damage) == 0x000610, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_InstigatedBy) == 0x000618, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_DamageCauser) == 0x000620, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_HitLocation) == 0x000628, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_FHitComponent) == 0x000640, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_BoneName) == 0x000648, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_Momentum) == 0x000650, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000668, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000674, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_MakeArray_Array) == 0x000680, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000690, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x0006A8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_SphereOverlapActors_OutActors) == 0x0006C0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_SphereOverlapActors_ReturnValue) == 0x0006D0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Not_PreBool_ReturnValue_1) == 0x0006D1, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_DestroyedActor) == 0x0006D8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_SimulatingComponent) == 0x0006E0, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_SimulatingComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CustomEvent_bIsAwake) == 0x0006E8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CustomEvent_bIsAwake' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_CreateDelegate_OutputDelegate_5) == 0x0006EC, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_GetOwner_ReturnValue) == 0x0006F8, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_AsBuilding_Actor_2) == 0x000700, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_AsBuilding_Actor_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, K2Node_DynamicCast_bSuccess_11) == 0x000708, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_GetPhysicsObjectComponent_ReturnValue_1) == 0x000710, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_GetPhysicsObjectComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_K2_GetActorLocation_ReturnValue_5) == 0x000718, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_K2_GetActorLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Delay_Duration_ImplicitCast) == 0x000730, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent, CallFunc_Delay_Duration_ImplicitCast_1) == 0x000734, "Member 'BGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_ForceBounceBGA final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MirrorVectorByNormal_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_ForceBounceBGA");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA) == 0x000078, "Wrong size on BGA_Athena_WithGravity_Parent_C_ForceBounceBGA");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, Temp_int_Variable) == 0x000004, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_VSize_ReturnValue) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_MirrorVectorByNormal_ReturnValue) == 0x000030, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_MirrorVectorByNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_MakeVector_ReturnValue) == 0x000048, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ForceBounceBGA, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'BGA_Athena_WithGravity_Parent_C_ForceBounceBGA::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_HandleBinding final
{
public:
	class AActor*                                 Actor;
	class UPrimitiveComponent*                    HitComp;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_HandleBinding) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_HandleBinding");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_HandleBinding) == 0x000010, "Wrong size on BGA_Athena_WithGravity_Parent_C_HandleBinding");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_HandleBinding, Actor) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_HandleBinding::Actor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_HandleBinding, HitComp) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_HandleBinding::HitComp' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_Impulse final
{
public:
	double                                        DelayBeforeImpulse;
	double                                        DelayBeforeCollision;
	struct FVector                                ImpulseOrigin;
	struct FVector                                ImpulseAmount;
	bool                                          SetCollisionAfterImpulse;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_Impulse) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_Impulse");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_Impulse) == 0x000048, "Wrong size on BGA_Athena_WithGravity_Parent_C_Impulse");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_Impulse, DelayBeforeImpulse) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_Impulse::DelayBeforeImpulse' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_Impulse, DelayBeforeCollision) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_Impulse::DelayBeforeCollision' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_Impulse, ImpulseOrigin) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_Impulse::ImpulseOrigin' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_Impulse, ImpulseAmount) == 0x000028, "Member 'BGA_Athena_WithGravity_Parent_C_Impulse::ImpulseAmount' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_Impulse, SetCollisionAfterImpulse) == 0x000040, "Member 'BGA_Athena_WithGravity_Parent_C_Impulse::SetCollisionAfterImpulse' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_Init final
{
public:
	struct FVector                                GravHitNormal_0;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_Init) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_Init");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_Init) == 0x000018, "Wrong size on BGA_Athena_WithGravity_Parent_C_Init");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_Init, GravHitNormal_0) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_Init::GravHitNormal_0' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_OnAttach final
{
public:
	class AActor*                                 AttachedActor;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_OnAttach) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_OnAttach");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_OnAttach) == 0x000008, "Wrong size on BGA_Athena_WithGravity_Parent_C_OnAttach");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_OnAttach, AttachedActor) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_OnAttach::AttachedActor' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation final
{
public:
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation) == 0x0000E8, "Wrong size on BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000E0, "Member 'BGA_Athena_WithGravity_Parent_C_OnRep_StopSimServerLocation::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged final
{
public:
	class UPrimitiveComponent*                    SimulatingComponent;
	bool                                          bIsAwake;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged) == 0x000010, "Wrong size on BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged, SimulatingComponent) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged::SimulatingComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged, bIsAwake) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_OnUnderneathPhysicsObjectAwakeChanged::bIsAwake' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_PlayHitFX final
{
public:
	struct FHitResult                             HitResult;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_PlayHitFX) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_PlayHitFX");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_PlayHitFX) == 0x0000E0, "Wrong size on BGA_Athena_WithGravity_Parent_C_PlayHitFX");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_PlayHitFX, HitResult) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_PlayHitFX::HitResult' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;
	class AActor*                                 Other;
	class UPrimitiveComponent*                    OtherComp;
	bool                                          bSelfMoved;
	uint8                                         Pad_19[0x7];
	struct FVector                                HitLocation;
	struct FVector                                HitNormal;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_ReceiveHit) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_ReceiveHit");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_ReceiveHit) == 0x000148, "Wrong size on BGA_Athena_WithGravity_Parent_C_ReceiveHit");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, MyComp) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, Other) == 0x000008, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_ReceiveHit, Hit) == 0x000068, "Member 'BGA_Athena_WithGravity_Parent_C_ReceiveHit::Hit' has a wrong offset!");

struct BGA_Athena_WithGravity_Parent_C_StopSim final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(BGA_Athena_WithGravity_Parent_C_StopSim) == 0x000008, "Wrong alignment on BGA_Athena_WithGravity_Parent_C_StopSim");
static_assert(sizeof(BGA_Athena_WithGravity_Parent_C_StopSim) == 0x0000E0, "Wrong size on BGA_Athena_WithGravity_Parent_C_StopSim");
static_assert(offsetof(BGA_Athena_WithGravity_Parent_C_StopSim, Hit) == 0x000000, "Member 'BGA_Athena_WithGravity_Parent_C_StopSim::Hit' has a wrong offset!");

}
