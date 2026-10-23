#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct BGA_HeldObject_Parent_C_AttachSetup final
{
public:
	struct FVector                                Location;
	struct FVector                                HitNormal;
	bool                                          NewParam;
};
static_assert(alignof(BGA_HeldObject_Parent_C_AttachSetup) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_AttachSetup");
static_assert(sizeof(BGA_HeldObject_Parent_C_AttachSetup) == 0x000038, "Wrong size on BGA_HeldObject_Parent_C_AttachSetup");
static_assert(offsetof(BGA_HeldObject_Parent_C_AttachSetup, Location) == 0x000000, "Member 'BGA_HeldObject_Parent_C_AttachSetup::Location' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_AttachSetup, HitNormal) == 0x000018, "Member 'BGA_HeldObject_Parent_C_AttachSetup::HitNormal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_AttachSetup, NewParam) == 0x000030, "Member 'BGA_HeldObject_Parent_C_AttachSetup::NewParam' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses final
{
public:
	TDelegate<void(class APawn* Pawn)>            K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_D[0x3];
	class AFortPlayerPawn*                        CallFunc_GetInstigator_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses");
static_assert(sizeof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses) == 0x000028, "Wrong size on BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses");
static_assert(offsetof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses, CallFunc_HasAuthority_ReturnValue) == 0x00000C, "Member 'BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses, CallFunc_GetInstigator_ReturnValue) == 0x000010, "Member 'BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000018, "Member 'BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BGA_HeldObject_Parent_C_BindPlayerControllerOnUnPosses::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BlueprintOnInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BlueprintOnInteract) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BlueprintOnInteract");
static_assert(sizeof(BGA_HeldObject_Parent_C_BlueprintOnInteract) == 0x000010, "Wrong size on BGA_HeldObject_Parent_C_BlueprintOnInteract");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintOnInteract, InteractingPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BlueprintOnInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintOnInteract, InteractionBeingAttempted) == 0x000008, "Member 'BGA_HeldObject_Parent_C_BlueprintOnInteract::InteractionBeingAttempted' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature final
{
public:
	class AActor*                                 DamageCauser;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");
static_assert(sizeof(BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature) == 0x000008, "Wrong size on BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature, DamageCauser) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature::DamageCauser' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;
	struct FVector                                ImpactVelocity;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");
static_assert(sizeof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature) == 0x0000F8, "Wrong size on BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature::ImpactResult' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature, ImpactVelocity) == 0x0000E0, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature::ImpactVelocity' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature");
static_assert(sizeof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature) == 0x0000E0, "Wrong size on BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature::ImpactResult' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	class UFortWaterInteractionComponent*         WaterInteractionComponent;
	bool                                          bIsFirstBody;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(sizeof(BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature) == 0x000018, "Wrong size on BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature, WaterBody) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature::WaterBody' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature, WaterInteractionComponent) == 0x000008, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature::WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature, bIsFirstBody) == 0x000010, "Member 'BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature::bIsFirstBody' has a wrong offset!");

struct BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	class UPrimitiveComponent*                    K2Node_Event_MyComp;
	class AActor*                                 K2Node_Event_Other;
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;
	bool                                          K2Node_Event_bSelfMoved;
	uint8                                         Pad_29[0x7];
	struct FVector                                K2Node_Event_HitLocation;
	struct FVector                                K2Node_Event_HitNormal;
	struct FVector                                K2Node_Event_NormalImpulse;
	struct FHitResult                             K2Node_Event_Hit;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_161[0x7];
	class AActor*                                 K2Node_ComponentBoundEvent_DamageCauser;
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult_1;
	struct FVector                                K2Node_ComponentBoundEvent_ImpactVelocity;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_26A[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_274[0x4];
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
	uint8                                         Pad_304[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;
	uint8                                         Pad_33A[0x2];
	float                                         CallFunc_BreakHitResult_Time_1;
	float                                         CallFunc_BreakHitResult_Distance_1;
	uint8                                         Pad_344[0x4];
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
	uint8                                         Pad_3D4[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;
	bool                                          CallFunc_ComponentHasTag_ReturnValue;
	uint8                                         Pad_409[0x7];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_431[0x7];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_44B[0x5];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_ActorHasTag_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_45D[0x3];
	double                                        CallFunc_VSize_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue_1;
	class AFortPlayerPawn*                        CallFunc_GetInstigator_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class AActor*                                 CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_MirrorVectorByNormal_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_4D1[0x7];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_4F1[0x7];
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation;
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal;
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition;
	float                                         CallFunc_GetLastWaterSurfaceInfo_WaterDepth;
	int32                                         CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx;
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_WaterVelocity;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_564[0x4];
	const class AFortPawn*                        K2Node_Event_InteractingPawn;
	EInteractionBeingAttempted                    K2Node_Event_InteractionBeingAttempted;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_572[0x6];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_581[0x3];
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	bool                                          CallFunc_PerformLinkingCheck_ReturnValue;
	uint8                                         Pad_6C9[0x7];
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult;
	bool                                          CallFunc_IsServer_ReturnValue_1;
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;
	uint8                                         Pad_7B3[0x1];
	float                                         CallFunc_BreakHitResult_Time_2;
	float                                         CallFunc_BreakHitResult_Distance_2;
	uint8                                         Pad_7BC[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location_2;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;
	struct FVector                                CallFunc_BreakHitResult_Normal_2;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;
	class FName                                   CallFunc_BreakHitResult_BoneName_2;
	int32                                         CallFunc_BreakHitResult_HitItem_2;
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;
	uint8                                         Pad_84C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;
	bool                                          CallFunc_BreakHitResult_bBlockingHit_3;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_3;
	uint8                                         Pad_882[0x2];
	float                                         CallFunc_BreakHitResult_Time_3;
	float                                         CallFunc_BreakHitResult_Distance_3;
	uint8                                         Pad_88C[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location_3;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_3;
	struct FVector                                CallFunc_BreakHitResult_Normal_3;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_3;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_3;
	class AActor*                                 CallFunc_BreakHitResult_HitActor_3;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_3;
	class FName                                   CallFunc_BreakHitResult_HitBoneName_3;
	class FName                                   CallFunc_BreakHitResult_BoneName_3;
	int32                                         CallFunc_BreakHitResult_HitItem_3;
	int32                                         CallFunc_BreakHitResult_ElementIndex_3;
	int32                                         CallFunc_BreakHitResult_FaceIndex_3;
	uint8                                         Pad_91C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart_3;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_3;
	struct FVector                                K2Node_CustomEvent_Location;
	struct FVector                                K2Node_CustomEvent_HitNormal;
	bool                                          K2Node_CustomEvent_NewParam;
	uint8                                         Pad_981[0x7];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_999[0x7];
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	uint8                                         Pad_9B9[0x7];
	double                                        CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	class USceneComponent*                        CallFunc_GetAttachComponent_Component;
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;
	double                                        CallFunc_RandomFloat_ReturnValue;
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	class AFortPawn*                              K2Node_CustomEvent_Interacting_Pawn;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_IsServer_ReturnValue_2;
	uint8                                         Pad_AE3[0x5];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;
	class AFortWaterBodyActor*                    K2Node_ComponentBoundEvent_WaterBody;
	class UFortWaterInteractionComponent*         K2Node_ComponentBoundEvent_WaterInteractionComponent;
	bool                                          K2Node_ComponentBoundEvent_bIsFirstBody;
	uint8                                         Pad_B29[0x7];
	struct FRotator                               CallFunc_MakeRotFromXZ_ReturnValue;
	uint8                                         Pad_B48[0x8];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class AFortPawn*                              K2Node_CustomEvent_InteractingPawn;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_BB9[0x7];
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_BC9[0x7];
	class AFortGameStateAthena*                   Temp_object_Variable;
	bool                                          CallFunc_IsInWater_ReturnValue;
	uint8                                         Pad_BD9[0x7];
	class UFortPlaylist*                          Temp_object_Variable_1;
	struct FGameplayTagContainer                  Temp_struct_Variable;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;
	uint8                                         Pad_DE4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_2;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;
	uint8                                         Pad_ED4[0x4];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_2;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_3;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;
	uint8                                         Pad_FDC[0x4];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_3;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_4;
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_5;
	uint8                                         Pad_10E4[0x4];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_4;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_5;
	class AFortPlayerPawn*                        CallFunc_GetInstigator_ReturnValue_1;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_11EA[0x6];
	double                                        K2Node_Select_Default;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_11F9[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;
	bool                                          CallFunc_IsActorSubmergedInOcean_ReturnValue;
	uint8                                         Pad_1219[0x7];
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	float                                         CallFunc_GetOceanTotalHeight_ReturnValue;
	uint8                                         Pad_123C[0x4];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	ECollisionResponse                            CallFunc_GetCollisionResponseToChannel_ReturnValue;
	uint8                                         Pad_124B[0x5];
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	uint8                                         Pad_1297[0x1];
	float                                         CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;
};
static_assert(alignof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent) == 0x000010, "Wrong alignment on BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent");
static_assert(sizeof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent) == 0x0012B0, "Wrong size on BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, EntryPoint) == 0x000000, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_real_Variable) == 0x000008, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_MyComp) == 0x000010, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_Other) == 0x000018, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_OtherComp) == 0x000020, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_bSelfMoved) == 0x000028, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_HitLocation) == 0x000030, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_HitNormal) == 0x000048, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_NormalImpulse) == 0x000060, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_Hit) == 0x000078, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_AsFort_Pawn) == 0x000158, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_DamageCauser) == 0x000168, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_ImpactResult_1) == 0x000170, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_ImpactResult_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_ImpactVelocity) == 0x000250, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_ImpactVelocity' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bBlockingHit) == 0x000268, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bInitialOverlap) == 0x000269, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Time) == 0x00026C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Distance) == 0x000270, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Location) == 0x000278, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactPoint) == 0x000290, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Normal) == 0x0002A8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactNormal) == 0x0002C0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_PhysMat) == 0x0002D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitActor) == 0x0002E0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitComponent) == 0x0002E8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitBoneName) == 0x0002F0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_BoneName) == 0x0002F4, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitItem) == 0x0002F8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ElementIndex) == 0x0002FC, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_FaceIndex) == 0x000300, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceStart) == 0x000308, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceEnd) == 0x000320, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000338, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000339, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Time_1) == 0x00033C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Distance_1) == 0x000340, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Location_1) == 0x000348, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000360, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Normal_1) == 0x000378, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000390, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_PhysMat_1) == 0x0003A8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitActor_1) == 0x0003B0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitComponent_1) == 0x0003B8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitBoneName_1) == 0x0003C0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_BoneName_1) == 0x0003C4, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitItem_1) == 0x0003C8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ElementIndex_1) == 0x0003CC, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_FaceIndex_1) == 0x0003D0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceStart_1) == 0x0003D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceEnd_1) == 0x0003F0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_ComponentHasTag_ReturnValue) == 0x000408, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakVector_X) == 0x000410, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakVector_Y) == 0x000418, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakVector_Z) == 0x000420, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000428, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000430, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000438, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_bSuccess_2) == 0x000448, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Not_PreBool_ReturnValue) == 0x000449, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Not_PreBool_ReturnValue_1) == 0x00044A, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000450, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_bSuccess_3) == 0x000458, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BooleanAND_ReturnValue) == 0x000459, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_ActorHasTag_ReturnValue) == 0x00045A, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BooleanOR_ReturnValue) == 0x00045B, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BooleanOR_ReturnValue_1) == 0x00045C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_VSize_ReturnValue) == 0x000460, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_VSize_ReturnValue_1) == 0x000468, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetInstigator_ReturnValue) == 0x000470, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000478, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue) == 0x000480, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeVector_ReturnValue) == 0x000488, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0004A0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MirrorVectorByNormal_ReturnValue) == 0x0004B8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MirrorVectorByNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0004D0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Add_VectorVector_ReturnValue) == 0x0004D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_IsServer_ReturnValue) == 0x0004F0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation) == 0x0004F8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal) == 0x000510, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition) == 0x000528, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetLastWaterSurfaceInfo_WaterDepth) == 0x000540, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetLastWaterSurfaceInfo_WaterDepth' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx) == 0x000544, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetLastWaterSurfaceInfo_WaterVelocity) == 0x000548, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetLastWaterSurfaceInfo_WaterVelocity' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000560, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_InteractingPawn) == 0x000568, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_InteractionBeingAttempted) == 0x000570, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_SwitchEnum_CmpSuccess) == 0x000571, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000578, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_bSuccess_4) == 0x000580, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_Damage) == 0x000584, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_DamageTags) == 0x000588, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_Momentum) == 0x0005A8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_HitInfo) == 0x0005C0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_InstigatedBy) == 0x0006A0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_DamageCauser) == 0x0006A8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Event_EffectContext) == 0x0006B0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_PerformLinkingCheck_ReturnValue) == 0x0006C8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_PerformLinkingCheck_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_ImpactResult) == 0x0006D0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_ImpactResult' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_IsServer_ReturnValue_1) == 0x0007B0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bBlockingHit_2) == 0x0007B1, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x0007B2, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Time_2) == 0x0007B4, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Distance_2) == 0x0007B8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Location_2) == 0x0007C0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactPoint_2) == 0x0007D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Normal_2) == 0x0007F0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000808, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_PhysMat_2) == 0x000820, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitActor_2) == 0x000828, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitComponent_2) == 0x000830, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitBoneName_2) == 0x000838, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_BoneName_2) == 0x00083C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_BoneName_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitItem_2) == 0x000840, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ElementIndex_2) == 0x000844, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_FaceIndex_2) == 0x000848, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceStart_2) == 0x000850, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceEnd_2) == 0x000868, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bBlockingHit_3) == 0x000880, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bBlockingHit_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_bInitialOverlap_3) == 0x000881, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_bInitialOverlap_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Time_3) == 0x000884, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Time_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Distance_3) == 0x000888, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Distance_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Location_3) == 0x000890, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Location_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactPoint_3) == 0x0008A8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactPoint_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_Normal_3) == 0x0008C0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_Normal_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ImpactNormal_3) == 0x0008D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ImpactNormal_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_PhysMat_3) == 0x0008F0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_PhysMat_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitActor_3) == 0x0008F8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitActor_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitComponent_3) == 0x000900, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitComponent_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitBoneName_3) == 0x000908, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitBoneName_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_BoneName_3) == 0x00090C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_BoneName_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_HitItem_3) == 0x000910, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_HitItem_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_ElementIndex_3) == 0x000914, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_ElementIndex_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_FaceIndex_3) == 0x000918, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_FaceIndex_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceStart_3) == 0x000920, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceStart_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakHitResult_TraceEnd_3) == 0x000938, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakHitResult_TraceEnd_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_Location) == 0x000950, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_HitNormal) == 0x000968, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_HitNormal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_NewParam) == 0x000980, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_AsFort_Vehicle_Interface_1) == 0x000988, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_AsFort_Vehicle_Interface_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_DynamicCast_bSuccess_5) == 0x000998, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Cross_VectorVector_ReturnValue) == 0x0009A0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Not_PreBool_ReturnValue_2) == 0x0009B8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_) == 0x0009C0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetAngleBetweenTwoVectors_Angle__Degrees_' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0009C8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetAttachComponent_Component) == 0x0009D0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetAttachComponent_Component' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x0009D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_RandomFloat_ReturnValue) == 0x000AB8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000AC0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_Interacting_Pawn) == 0x000AD8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_Interacting_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BooleanAND_ReturnValue_1) == 0x000AE0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BooleanAND_ReturnValue_2) == 0x000AE1, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_IsServer_ReturnValue_2) == 0x000AE2, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetActorForwardVector_ReturnValue) == 0x000AE8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_RotateAngleAxis_ReturnValue) == 0x000B00, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_WaterBody) == 0x000B18, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_WaterBody' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_WaterInteractionComponent) == 0x000B20, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_ComponentBoundEvent_bIsFirstBody) == 0x000B28, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_ComponentBoundEvent_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeRotFromXZ_ReturnValue) == 0x000B30, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeRotFromXZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeTransform_ReturnValue) == 0x000B50, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_InteractingPawn) == 0x000BB0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_bool_Has_Been_Initd_Variable) == 0x000BB8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000BC0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_IsValid_ReturnValue) == 0x000BC8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_object_Variable) == 0x000BD0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_IsInWater_ReturnValue) == 0x000BD8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_IsInWater_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_object_Variable_1) == 0x000BE0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_struct_Variable) == 0x000BE8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000C08, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000C0C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000C10, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000CE0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000DB0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x000DC8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x000DE0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000DE8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_2) == 0x000E00, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x000ED0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetActorForwardVector_ReturnValue_2) == 0x000ED8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetActorForwardVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000EF0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_3) == 0x000F08, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x000FD8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetActorForwardVector_ReturnValue_3) == 0x000FE0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetActorForwardVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000FF8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_4) == 0x001010, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_ByteToInt_ReturnValue_5) == 0x0010E0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_ByteToInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetActorForwardVector_ReturnValue_4) == 0x0010E8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetActorForwardVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_5) == 0x001100, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetInstigator_ReturnValue_1) == 0x0011D0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x0011D8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetQuestManager_ReturnValue) == 0x0011E0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_bool_Variable) == 0x0011E8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x0011E9, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_Select_Default) == 0x0011F0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x0011F8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x001200, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_IsActorSubmergedInOcean_ReturnValue) == 0x001218, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_IsActorSubmergedInOcean_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakVector_X_1) == 0x001220, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakVector_Y_1) == 0x001228, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BreakVector_Z_1) == 0x001230, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetOceanTotalHeight_ReturnValue) == 0x001238, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetOceanTotalHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_RandomFloatInRange_ReturnValue) == 0x001240, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x001248, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_BooleanOR_ReturnValue_2) == 0x001249, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_GetCollisionResponseToChannel_ReturnValue) == 0x00124A, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_GetCollisionResponseToChannel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_GameState) == 0x001250, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_Playlist) == 0x001258, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_PlaylistContextTags) == 0x001260, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CustomEvent_DestroyedActor) == 0x001280, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x001288, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, Temp_bool_IsClosed_Variable) == 0x001294, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_HasAuthority_ReturnValue) == 0x001295, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x001296, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast) == 0x001298, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x00129C, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x0012A0, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x0012A8, "Member 'BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");

struct BGA_HeldObject_Parent_C_FindAttachAngle final
{
public:
	struct FVector                                HitLoc;
	double                                        CurrentLowest;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_2C[0x4];
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;
	TArray<ELinkToDirection>                      CallFunc_Map_Keys_Keys;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	ELinkToDirection                              CallFunc_Array_Get_Item;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_79[0x7];
	struct FVector                                CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_99[0x7];
	double                                        CallFunc_Dot_VectorVector_ReturnValue;
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_D9[0x7];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	TMap<ELinkToDirection, struct FVector>        K2Node_MakeMap_Map;
};
static_assert(alignof(BGA_HeldObject_Parent_C_FindAttachAngle) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_FindAttachAngle");
static_assert(sizeof(BGA_HeldObject_Parent_C_FindAttachAngle) == 0x000160, "Wrong size on BGA_HeldObject_Parent_C_FindAttachAngle");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, HitLoc) == 0x000000, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::HitLoc' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CurrentLowest) == 0x000018, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CurrentLowest' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_GetActorRightVector_ReturnValue) == 0x000030, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Map_Keys_Keys) == 0x000048, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000058, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Array_Get_Item) == 0x000070, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Map_Find_Value) == 0x000080, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000A0, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_GetActorUpVector_ReturnValue) == 0x0000A8, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000C0, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000E0, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000F8, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_FindAttachAngle, K2Node_MakeMap_Map) == 0x000110, "Member 'BGA_HeldObject_Parent_C_FindAttachAngle::K2Node_MakeMap_Map' has a wrong offset!");

struct BGA_HeldObject_Parent_C_GetAttachComponent final
{
public:
	class USceneComponent*                        Component;
};
static_assert(alignof(BGA_HeldObject_Parent_C_GetAttachComponent) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_GetAttachComponent");
static_assert(sizeof(BGA_HeldObject_Parent_C_GetAttachComponent) == 0x000008, "Wrong size on BGA_HeldObject_Parent_C_GetAttachComponent");
static_assert(offsetof(BGA_HeldObject_Parent_C_GetAttachComponent, Component) == 0x000000, "Member 'BGA_HeldObject_Parent_C_GetAttachComponent::Component' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnAttachedToVehicle final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2[0x2];
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnAttachedToVehicle) == 0x000004, "Wrong alignment on BGA_HeldObject_Parent_C_OnAttachedToVehicle");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnAttachedToVehicle) == 0x000010, "Wrong size on BGA_HeldObject_Parent_C_OnAttachedToVehicle");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnAttachedToVehicle, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnAttachedToVehicle::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnAttachedToVehicle, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BGA_HeldObject_Parent_C_OnAttachedToVehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnAttachedToVehicle, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BGA_HeldObject_Parent_C_OnAttachedToVehicle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnDeathServer final
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
static_assert(alignof(BGA_HeldObject_Parent_C_OnDeathServer) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_OnDeathServer");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnDeathServer) == 0x000148, "Wrong size on BGA_HeldObject_Parent_C_OnDeathServer");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, Damage) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, DamageTags) == 0x000008, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, Momentum) == 0x000028, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, HitInfo) == 0x000040, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDeathServer, EffectContext) == 0x000130, "Member 'BGA_HeldObject_Parent_C_OnDeathServer::EffectContext' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnDetachFromVehicle final
{
public:
	bool                                          CallFunc_IsHeld_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_2[0x2];
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnDetachFromVehicle) == 0x000004, "Wrong alignment on BGA_HeldObject_Parent_C_OnDetachFromVehicle");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnDetachFromVehicle) == 0x000014, "Wrong size on BGA_HeldObject_Parent_C_OnDetachFromVehicle");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDetachFromVehicle, CallFunc_IsHeld_ReturnValue) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnDetachFromVehicle::CallFunc_IsHeld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDetachFromVehicle, CallFunc_HasAuthority_ReturnValue) == 0x000001, "Member 'BGA_HeldObject_Parent_C_OnDetachFromVehicle::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDetachFromVehicle, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BGA_HeldObject_Parent_C_OnDetachFromVehicle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnDetachFromVehicle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BGA_HeldObject_Parent_C_OnDetachFromVehicle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnFirstInteract final
{
public:
	class AFortPawn*                              Interacting_Pawn;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnFirstInteract) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_OnFirstInteract");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnFirstInteract) == 0x000008, "Wrong size on BGA_HeldObject_Parent_C_OnFirstInteract");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnFirstInteract, Interacting_Pawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnFirstInteract::Interacting_Pawn' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB) == 0x000030, "Wrong size on BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB, GameState) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB::GameState' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB, Playlist) == 0x000008, "Member 'BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB::Playlist' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB, PlaylistContextTags) == 0x000010, "Member 'BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB::PlaylistContextTags' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnRep_AttachTransform final
{
public:
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FVector                                CallFunc_GetUpVector_ReturnValue;
	struct FVector                                CallFunc_GetRightVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	class USceneComponent*                        CallFunc_GetAttachComponent_Component;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnRep_AttachTransform) == 0x000010, "Wrong alignment on BGA_HeldObject_Parent_C_OnRep_AttachTransform");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnRep_AttachTransform) == 0x0002E0, "Wrong size on BGA_HeldObject_Parent_C_OnRep_AttachTransform");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakTransform_Location) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakTransform_Rotation) == 0x000018, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakTransform_Scale) == 0x000030, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakTransform_Location_1) == 0x000048, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakTransform_Rotation_1) == 0x000060, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakTransform_Scale_1) == 0x000078, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakVector_X) == 0x000090, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakVector_Y) == 0x000098, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_BreakVector_Z) == 0x0000A0, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_GetUpVector_ReturnValue) == 0x0000A8, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_GetUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_GetRightVector_ReturnValue) == 0x0000C0, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000D8, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0000F0, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_GetForwardVector_ReturnValue) == 0x000108, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_GetAttachComponent_Component) == 0x000120, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_GetAttachComponent_Component' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000128, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000140, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_Add_VectorVector_ReturnValue) == 0x000158, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000170, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000188, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_MakeTransform_ReturnValue) == 0x0001A0, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_AttachTransform, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000200, "Member 'BGA_HeldObject_Parent_C_OnRep_AttachTransform::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnRep_RepStartMoving final
{
public:
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnRep_RepStartMoving) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_OnRep_RepStartMoving");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnRep_RepStartMoving) == 0x000010, "Wrong size on BGA_HeldObject_Parent_C_OnRep_RepStartMoving");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_RepStartMoving, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnRep_RepStartMoving::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnRep_RepStartMoving, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'BGA_HeldObject_Parent_C_OnRep_RepStartMoving::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnSecondInteract final
{
public:
	class AFortPawn*                              InteractingPawn;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnSecondInteract) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_OnSecondInteract");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnSecondInteract) == 0x000008, "Wrong size on BGA_HeldObject_Parent_C_OnSecondInteract");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnSecondInteract, InteractingPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnSecondInteract::InteractingPawn' has a wrong offset!");

struct BGA_HeldObject_Parent_C_OnVehicleDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(BGA_HeldObject_Parent_C_OnVehicleDestroyed) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_OnVehicleDestroyed");
static_assert(sizeof(BGA_HeldObject_Parent_C_OnVehicleDestroyed) == 0x000008, "Wrong size on BGA_HeldObject_Parent_C_OnVehicleDestroyed");
static_assert(offsetof(BGA_HeldObject_Parent_C_OnVehicleDestroyed, DestroyedActor) == 0x000000, "Member 'BGA_HeldObject_Parent_C_OnVehicleDestroyed::DestroyedActor' has a wrong offset!");

struct BGA_HeldObject_Parent_C_ReceiveHit final
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
static_assert(alignof(BGA_HeldObject_Parent_C_ReceiveHit) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_ReceiveHit");
static_assert(sizeof(BGA_HeldObject_Parent_C_ReceiveHit) == 0x000148, "Wrong size on BGA_HeldObject_Parent_C_ReceiveHit");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, MyComp) == 0x000000, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, Other) == 0x000008, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, OtherComp) == 0x000010, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, HitLocation) == 0x000020, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, HitNormal) == 0x000038, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ReceiveHit, Hit) == 0x000068, "Member 'BGA_HeldObject_Parent_C_ReceiveHit::Hit' has a wrong offset!");

struct BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle final
{
public:
	struct FVector                                HitLoc;
	class UPrimitiveComponent*                    HitComponentToAttachTo_0;
	bool                                          CallFunc_PerformLinkingCheck_ReturnValue;
	uint8                                         Pad_21[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
};
static_assert(alignof(BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle");
static_assert(sizeof(BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle) == 0x000030, "Wrong size on BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle");
static_assert(offsetof(BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle, HitLoc) == 0x000000, "Member 'BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle::HitLoc' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle, HitComponentToAttachTo_0) == 0x000018, "Member 'BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle::HitComponentToAttachTo_0' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle, CallFunc_PerformLinkingCheck_ReturnValue) == 0x000020, "Member 'BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle::CallFunc_PerformLinkingCheck_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle::CallFunc_GetOwner_ReturnValue' has a wrong offset!");

struct BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess final
{
public:
	class APawn*                                  PlayerPawn;
};
static_assert(alignof(BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess");
static_assert(sizeof(BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess) == 0x000008, "Wrong size on BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess");
static_assert(offsetof(BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess, PlayerPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess::PlayerPawn' has a wrong offset!");

struct BGA_HeldObject_Parent_C_SetAttachDefaultTransform final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_2[0x6];
	class USceneComponent*                        CallFunc_GetAttachComponent_Component;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_11[0xF];
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform) == 0x000010, "Wrong alignment on BGA_HeldObject_Parent_C_SetAttachDefaultTransform");
static_assert(sizeof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform) == 0x000090, "Wrong size on BGA_HeldObject_Parent_C_SetAttachDefaultTransform");
static_assert(offsetof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'BGA_HeldObject_Parent_C_SetAttachDefaultTransform::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform, CallFunc_IsServer_ReturnValue) == 0x000001, "Member 'BGA_HeldObject_Parent_C_SetAttachDefaultTransform::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform, CallFunc_GetAttachComponent_Component) == 0x000008, "Member 'BGA_HeldObject_Parent_C_SetAttachDefaultTransform::CallFunc_GetAttachComponent_Component' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'BGA_HeldObject_Parent_C_SetAttachDefaultTransform::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform, CallFunc_GetRelativeTransform_ReturnValue) == 0x000020, "Member 'BGA_HeldObject_Parent_C_SetAttachDefaultTransform::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_SetAttachDefaultTransform, CallFunc_BooleanAND_ReturnValue_1) == 0x000080, "Member 'BGA_HeldObject_Parent_C_SetAttachDefaultTransform::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

struct BGA_HeldObject_Parent_C_ShouldDie final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	class AController*                            EventInstigator;
	class AActor*                                 DamageCauser;
	bool                                          ReturnValue;
};
static_assert(alignof(BGA_HeldObject_Parent_C_ShouldDie) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_ShouldDie");
static_assert(sizeof(BGA_HeldObject_Parent_C_ShouldDie) == 0x000020, "Wrong size on BGA_HeldObject_Parent_C_ShouldDie");
static_assert(offsetof(BGA_HeldObject_Parent_C_ShouldDie, Damage) == 0x000000, "Member 'BGA_HeldObject_Parent_C_ShouldDie::Damage' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ShouldDie, EventInstigator) == 0x000008, "Member 'BGA_HeldObject_Parent_C_ShouldDie::EventInstigator' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ShouldDie, DamageCauser) == 0x000010, "Member 'BGA_HeldObject_Parent_C_ShouldDie::DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_ShouldDie, ReturnValue) == 0x000018, "Member 'BGA_HeldObject_Parent_C_ShouldDie::ReturnValue' has a wrong offset!");

struct BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses final
{
public:
	TDelegate<void(class APawn* Pawn)>            K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_C[0x4];
	class AFortPlayerPawn*                        CallFunc_GetInstigator_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses");
static_assert(sizeof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses) == 0x000030, "Wrong size on BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses");
static_assert(offsetof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses, CallFunc_GetInstigator_ReturnValue) == 0x000010, "Member 'BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000020, "Member 'BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BGA_HeldObject_Parent_C_UbindPlayerControllerOnUnPosses::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	ETInteractionType                             InteractionType;
	bool                                          ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_C[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_GetCanFirstInteract_Return;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_CanInteract_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BlueprintCanInteract");
static_assert(sizeof(BGA_HeldObject_Parent_C_BlueprintCanInteract) == 0x000038, "Wrong size on BGA_HeldObject_Parent_C_BlueprintCanInteract");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000020, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000030, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_GetCanFirstInteract_Return) == 0x000033, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_GetCanFirstInteract_Return' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_IsValid_ReturnValue_1) == 0x000034, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_CanInteract_ReturnValue) == 0x000035, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_CanInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue) == 0x000036, "Member 'BGA_HeldObject_Parent_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BlueprintGetInteractionString final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	uint8                                         Pad_9[0x7];
	class FText                                   ReturnValue;
	EInteractionBeingAttempted                    Temp_byte_Variable;
	uint8                                         Pad_29[0x7];
	class FText                                   Temp_text_Variable;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BlueprintGetInteractionString");
static_assert(sizeof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString) == 0x000060, "Wrong size on BGA_HeldObject_Parent_C_BlueprintGetInteractionString");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString, InteractingPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionString::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString, InteractionBeingAttempted) == 0x000008, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionString::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString, ReturnValue) == 0x000010, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionString::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString, Temp_byte_Variable) == 0x000028, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionString::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString, Temp_text_Variable) == 0x000030, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionString::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionString, K2Node_Select_Default) == 0x000048, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionString::K2Node_Select_Default' has a wrong offset!");

struct BGA_HeldObject_Parent_C_BlueprintGetInteractionTime final
{
public:
	const class AFortPawn*                        InteractingPawn;
	float                                         OutInteractionTime;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	bool                                          ReturnValue;
	EInteractionBeingAttempted                    Temp_byte_Variable;
	uint8                                         Pad_F[0x1];
	double                                        Temp_real_Variable;
	double                                        K2Node_Select_Default;
	float                                         K2Node_FunctionResult_OutInteractionTime_ImplicitCast;
};
static_assert(alignof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_BlueprintGetInteractionTime");
static_assert(sizeof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime) == 0x000028, "Wrong size on BGA_HeldObject_Parent_C_BlueprintGetInteractionTime");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, InteractingPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, OutInteractionTime) == 0x000008, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::OutInteractionTime' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, InteractionBeingAttempted) == 0x00000C, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, ReturnValue) == 0x00000D, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, Temp_byte_Variable) == 0x00000E, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, Temp_real_Variable) == 0x000010, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, K2Node_Select_Default) == 0x000018, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_BlueprintGetInteractionTime, K2Node_FunctionResult_OutInteractionTime_ImplicitCast) == 0x000020, "Member 'BGA_HeldObject_Parent_C_BlueprintGetInteractionTime::K2Node_FunctionResult_OutInteractionTime_ImplicitCast' has a wrong offset!");

struct BGA_HeldObject_Parent_C_GetCanFirstInteract final
{
public:
	class AFortPawn*                              InteractingPawn;
	bool                                          Return;
};
static_assert(alignof(BGA_HeldObject_Parent_C_GetCanFirstInteract) == 0x000008, "Wrong alignment on BGA_HeldObject_Parent_C_GetCanFirstInteract");
static_assert(sizeof(BGA_HeldObject_Parent_C_GetCanFirstInteract) == 0x000010, "Wrong size on BGA_HeldObject_Parent_C_GetCanFirstInteract");
static_assert(offsetof(BGA_HeldObject_Parent_C_GetCanFirstInteract, InteractingPawn) == 0x000000, "Member 'BGA_HeldObject_Parent_C_GetCanFirstInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_HeldObject_Parent_C_GetCanFirstInteract, Return) == 0x000008, "Member 'BGA_HeldObject_Parent_C_GetCanFirstInteract::Return' has a wrong offset!");

}
