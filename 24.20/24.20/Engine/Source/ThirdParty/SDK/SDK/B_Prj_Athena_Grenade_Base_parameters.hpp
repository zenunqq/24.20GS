#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	class UFortWaterInteractionComponent*         WaterInteractionComponent_0;
	bool                                          bIsFirstBody;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature) == 0x000018, "Wrong size on B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature, WaterBody) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature::WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature, WaterInteractionComponent_0) == 0x000008, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature::WaterInteractionComponent_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature, bIsFirstBody) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature::bIsFirstBody' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          CallFunc_IsNullItem_Is_Null_Item;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsNullItem_Is_Null_Item_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_16[0x2];
	struct FHitResult                             K2Node_Event_Hit_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_F9[0x7];
	TArray<class AActor*>                         K2Node_Event_HitActors;
	TArray<struct FHitResult>                     K2Node_Event_HitResults;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_121[0x7];
	struct FHitResult                             K2Node_Event_Hit;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_20A[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_214[0x4];
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
	uint8                                         Pad_2A4[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_ComponentHasTag_ReturnValue;
	uint8                                         Pad_2DD[0x3];
	class APawn*                                  K2Node_DynamicCast_AsPawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_2EB[0x5];
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_Abs_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_32C[0x4];
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_372[0x6];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	float                                         K2Node_Event_Damage;
	const class UDamageType*                      K2Node_Event_DamageType;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UObject*                                Temp_object_Variable;
	class UFXSystemAsset*                         K2Node_DynamicCast_AsFXSystem_Asset;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_431[0x7];
	class UObject*                                Temp_object_Variable_1;
	class UFXSystemAsset*                         K2Node_DynamicCast_AsFXSystem_Asset_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_449[0x7];
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	bool                                          CallFunc_OnCollision_OutResult;
	uint8                                         Pad_469[0x3];
	float                                         CallFunc_OnCollision_OutMagnitude;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_4E5[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;
	uint8                                         Pad_5D2[0x2];
	float                                         CallFunc_BreakHitResult_Time_1;
	float                                         CallFunc_BreakHitResult_Distance_1;
	uint8                                         Pad_5DC[0x4];
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
	uint8                                         Pad_66C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;
	class APawn*                                  K2Node_DynamicCast_AsPawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_IsInWater_ReturnValue;
	uint8                                         Pad_6AB[0x5];
	class UFXSystemAsset*                         CallFunc_GetExplosion_FX_System;
	class UFXSystemComponent*                     CallFunc_SpawnFXAtLocation_ReturnValue;
	class AFortWaterBodyActor*                    K2Node_CustomEvent_WaterBody;
	class UFortWaterInteractionComponent*         K2Node_CustomEvent_WaterInteractionComponent;
	bool                                          K2Node_CustomEvent_bIsFirstBody;
	uint8                                         Pad_6D1[0x3];
	TDelegate<void(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)> K2Node_CreateDelegate_OutputDelegate_2;
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsInWater_ReturnValue_1;
	uint8                                         Pad_6EA[0x6];
	TSoftObjectPtr<class UObject>                 K2Node_Select_Default;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	uint8                                         Pad_719[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_5;
	class AFortWaterBodyActor*                    K2Node_ComponentBoundEvent_WaterBody;
	class UFortWaterInteractionComponent*         K2Node_ComponentBoundEvent_WaterInteractionComponent;
	bool                                          K2Node_ComponentBoundEvent_bIsFirstBody;
	uint8                                         Pad_749[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_6;
	class UObject*                                K2Node_CustomEvent_Loaded;
	TArray<class AFortPlayerController*>          Temp_object_Variable_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_78C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_7;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	uint8                                         Pad_7B1[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_8;
	struct FWaterSurfaceInfo                      CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo;
	bool                                          CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1;
	uint8                                         Pad_839[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;
	TArray<class AFortPlayerController*>          Temp_object_Variable_3;
	class UFXSystemComponent*                     CallFunc_SpawnFXAtLocation_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_871[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	TSoftObjectPtr<class UObject>                 K2Node_Select_Default_1;
	bool                                          CallFunc_IsAssetNull_ReturnValue_1;
	uint8                                         Pad_8A9[0x3];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_8B9[0x3];
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base) == 0x0008D0, "Wrong size on B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, EntryPoint) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_bool_Has_Been_Initd_Variable) == 0x000011, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsNullItem_Is_Null_Item) == 0x000012, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsNullItem_Is_Null_Item' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsValid_ReturnValue_1) == 0x000013, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsNullItem_Is_Null_Item_1) == 0x000014, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsNullItem_Is_Null_Item_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsDedicatedServer_ReturnValue) == 0x000015, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_Hit_1) == 0x000018, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_Hit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0000F8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_HitActors) == 0x000100, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_HitResults) == 0x000110, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsValid_ReturnValue_2) == 0x000120, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_Hit) == 0x000128, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_bBlockingHit) == 0x000208, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_bInitialOverlap) == 0x000209, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Time) == 0x00020C, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Distance) == 0x000210, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Location) == 0x000218, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_ImpactPoint) == 0x000230, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Normal) == 0x000248, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_ImpactNormal) == 0x000260, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_PhysMat) == 0x000278, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitActor) == 0x000280, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitComponent) == 0x000288, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitBoneName) == 0x000290, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_BoneName) == 0x000294, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitItem) == 0x000298, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_ElementIndex) == 0x00029C, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_FaceIndex) == 0x0002A0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_TraceStart) == 0x0002A8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_TraceEnd) == 0x0002C0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Add_IntInt_ReturnValue) == 0x0002D8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_ComponentHasTag_ReturnValue) == 0x0002DC, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_AsPawn) == 0x0002E0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_bSuccess) == 0x0002E8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue) == 0x0002E9, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_bool_IsClosed_Variable) == 0x0002EA, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002F0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakVector_X) == 0x000308, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakVector_Y) == 0x000310, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakVector_Z) == 0x000318, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Abs_ReturnValue) == 0x000320, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Add_IntInt_ReturnValue_1) == 0x000328, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_MakeVector_ReturnValue) == 0x000330, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000348, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_GetInstigator_ReturnValue) == 0x000360, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_GetInstigator_ReturnValue_1) == 0x000368, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000370, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsValid_ReturnValue_3) == 0x000371, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000378, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000390, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0003A8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x0003C0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x0003D8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003F0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_Damage) == 0x0003FC, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_DamageType) == 0x000400, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_InstigatedBy) == 0x000408, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Event_DamageCauser) == 0x000410, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000418, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_object_Variable) == 0x000420, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_AsFXSystem_Asset) == 0x000428, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_AsFXSystem_Asset' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_bSuccess_1) == 0x000430, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_object_Variable_1) == 0x000438, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_AsFXSystem_Asset_1) == 0x000440, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_AsFXSystem_Asset_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_bSuccess_2) == 0x000448, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000450, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_OnCollision_OutResult) == 0x000468, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_OnCollision_OutResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_OnCollision_OutMagnitude) == 0x00046C, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_OnCollision_OutMagnitude' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_VSize_ReturnValue) == 0x000470, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000478, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000490, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_MakeVector_ReturnValue_1) == 0x000498, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Add_VectorVector_ReturnValue) == 0x0004B0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0004C8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_OtherActor) == 0x0004D0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_OtherComp) == 0x0004D8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0004E0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_bFromSweep) == 0x0004E4, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_SweepResult) == 0x0004E8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_GetInstigator_ReturnValue_2) == 0x0005C8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_GetInstigator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0005D0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0005D1, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Time_1) == 0x0005D4, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Distance_1) == 0x0005D8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Location_1) == 0x0005E0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0005F8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_Normal_1) == 0x000610, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000628, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_PhysMat_1) == 0x000640, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitActor_1) == 0x000648, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitComponent_1) == 0x000650, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitBoneName_1) == 0x000658, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_BoneName_1) == 0x00065C, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_HitItem_1) == 0x000660, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_ElementIndex_1) == 0x000664, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_FaceIndex_1) == 0x000668, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_TraceStart_1) == 0x000670, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_BreakHitResult_TraceEnd_1) == 0x000688, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_AsPawn_1) == 0x0006A0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_AsPawn_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_DynamicCast_bSuccess_3) == 0x0006A8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x0006A9, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsInWater_ReturnValue) == 0x0006AA, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsInWater_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_GetExplosion_FX_System) == 0x0006B0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_GetExplosion_FX_System' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_SpawnFXAtLocation_ReturnValue) == 0x0006B8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_SpawnFXAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CustomEvent_WaterBody) == 0x0006C0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CustomEvent_WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CustomEvent_WaterInteractionComponent) == 0x0006C8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CustomEvent_WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CustomEvent_bIsFirstBody) == 0x0006D0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CustomEvent_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CreateDelegate_OutputDelegate_2) == 0x0006D4, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CustomEvent_Loaded_1) == 0x0006E0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_bool_Variable) == 0x0006E8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsInWater_ReturnValue_1) == 0x0006E9, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsInWater_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Select_Default) == 0x0006F0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsAssetNull_ReturnValue) == 0x000718, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_5) == 0x000720, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_WaterBody) == 0x000738, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_WaterInteractionComponent) == 0x000740, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_ComponentBoundEvent_bIsFirstBody) == 0x000748, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_ComponentBoundEvent_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_6) == 0x000750, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CustomEvent_Loaded) == 0x000768, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_object_Variable_2) == 0x000770, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CreateDelegate_OutputDelegate_3) == 0x000780, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000790, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_7) == 0x000798, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0007B0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_GetActorLocation_ReturnValue_8) == 0x0007B8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_GetActorLocation_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo) == 0x0007D0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1) == 0x000838, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00083C, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_MakeRotFromX_ReturnValue) == 0x000840, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_object_Variable_3) == 0x000858, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_SpawnFXAtLocation_ReturnValue_1) == 0x000868, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_SpawnFXAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, Temp_bool_Variable_1) == 0x000870, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000878, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_Select_Default_1) == 0x000880, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsAssetNull_ReturnValue_1) == 0x0008A8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsAssetNull_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_CreateDelegate_OutputDelegate_4) == 0x0008AC, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_IsValid_ReturnValue_4) == 0x0008B8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast) == 0x0008BC, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x0008C0, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1) == 0x0008C8, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0008CC, "Member 'B_Prj_Athena_Grenade_Base_C_ExecuteUbergraph_B_Prj_Athena_Grenade_Base::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_OnBounce final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_OnBounce) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_OnBounce");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_OnBounce) == 0x0000E0, "Wrong size on B_Prj_Athena_Grenade_Base_C_OnBounce");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_OnBounce::Hit' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;
	TArray<struct FHitResult>                     HitResults;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_OnExploded");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Athena_Grenade_Base_C_OnExploded");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_OnExploded::HitResults' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5) == 0x000008, "Wrong size on B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5, Loaded) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994C3BE7DC5::Loaded' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA) == 0x000008, "Wrong size on B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA, Loaded) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_OnLoaded_6A6D02914DCE95902837C994D84D08EA::Loaded' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_OnStop final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_OnStop) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_OnStop");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_OnStop) == 0x0000E0, "Wrong size on B_Prj_Athena_Grenade_Base_C_OnStop");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_OnStop::Hit' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	const class UDamageType*                      DamageType;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage) == 0x000020, "Wrong size on B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage, Damage) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'B_Prj_Athena_Grenade_Base_C_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_Splash final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	class UFortWaterInteractionComponent*         WaterInteractionComponent_0;
	bool                                          bIsFirstBody;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_Splash) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_Splash");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_Splash) == 0x000018, "Wrong size on B_Prj_Athena_Grenade_Base_C_Splash");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_Splash, WaterBody) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_Splash::WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_Splash, WaterInteractionComponent_0) == 0x000008, "Member 'B_Prj_Athena_Grenade_Base_C_Splash::WaterInteractionComponent_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_Splash, bIsFirstBody) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_Splash::bIsFirstBody' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_UserConstructionScript) == 0x000001, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_UserConstructionScript");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_UserConstructionScript) == 0x000001, "Wrong size on B_Prj_Athena_Grenade_Base_C_UserConstructionScript");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

struct B_Prj_Athena_Grenade_Base_C_GetExplosion final
{
public:
	bool                                          InWater;
	uint8                                         Pad_1[0x7];
	class UFXSystemAsset*                         FX_System;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x7];
	class UFXSystemAsset*                         K2Node_Select_Default;
};
static_assert(alignof(B_Prj_Athena_Grenade_Base_C_GetExplosion) == 0x000008, "Wrong alignment on B_Prj_Athena_Grenade_Base_C_GetExplosion");
static_assert(sizeof(B_Prj_Athena_Grenade_Base_C_GetExplosion) == 0x000020, "Wrong size on B_Prj_Athena_Grenade_Base_C_GetExplosion");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_GetExplosion, InWater) == 0x000000, "Member 'B_Prj_Athena_Grenade_Base_C_GetExplosion::InWater' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_GetExplosion, FX_System) == 0x000008, "Member 'B_Prj_Athena_Grenade_Base_C_GetExplosion::FX_System' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_GetExplosion, Temp_bool_Variable) == 0x000010, "Member 'B_Prj_Athena_Grenade_Base_C_GetExplosion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Grenade_Base_C_GetExplosion, K2Node_Select_Default) == 0x000018, "Member 'B_Prj_Athena_Grenade_Base_C_GetExplosion::K2Node_Select_Default' has a wrong offset!");

}
