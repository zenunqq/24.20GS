#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract) == 0x000010, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract, InteractingPawn) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract, InteractionBeingAttempted) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract::InteractionBeingAttempted' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature final
{
public:
	class AActor*                                 DamageCauser;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature) == 0x000008, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature, DamageCauser) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature::DamageCauser' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BGA_Athena_SCMachine_Pickup_C_BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_WakeUp_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	const class AFortPawn*                        K2Node_Event_InteractingPawn;
	EInteractionBeingAttempted                    K2Node_Event_InteractionBeingAttempted;
	uint8                                         Pad_19[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsVisible_ReturnValue;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_GetValueAtLevelWithContext_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_73[0x5];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue_1;
	class AFortPlayerController*                  CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         CallFunc_GetActorTeam_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_9F[0x1];
	float                                         K2Node_Event_Damage;
	uint8                                         Pad_A4[0x4];
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1F3[0x1];
	float                                         CallFunc_GetValueAtLevelWithContext_ReturnValue_1;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_215[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_301[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue_2;
	uint8                                         Pad_311[0x7];
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsServer_ReturnValue_2;
	bool                                          CallFunc_IsInVortex_ReturnValue;
	uint8                                         Pad_34B[0x5];
	class AActor*                                 K2Node_ComponentBoundEvent_DamageCauser;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_WakeUp_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_35E[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup) == 0x000370, "Wrong size on BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, EntryPoint) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_WakeUp_ReturnValue) == 0x000004, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_WakeUp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_InteractingPawn) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_InteractionBeingAttempted) == 0x000018, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_IsVisible_ReturnValue) == 0x000020, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetValueAtLevelWithContext_ReturnValue) == 0x000024, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetValueAtLevelWithContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000040, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000048, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, Temp_int_Array_Index_Variable_1) == 0x00005C, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Array_Get_Item) == 0x000060, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetPlayerPawn_ReturnValue) == 0x000068, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetActorTeam_ReturnValue) == 0x000070, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000072, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000078, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetLocalFortPlayerControllers_ReturnValue_1) == 0x000080, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetLocalFortPlayerControllers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetActorTeam_ReturnValue_1) == 0x00009C, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetActorTeam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Less_IntInt_ReturnValue) == 0x00009D, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00009E, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_Damage) == 0x0000A0, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_DamageTags) == 0x0000A8, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_Momentum) == 0x0000C8, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_HitInfo) == 0x0000E0, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_InstigatedBy) == 0x0001C0, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_DamageCauser) == 0x0001C8, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_Event_EffectContext) == 0x0001D0, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_RandomFloatInRange_ReturnValue) == 0x0001E8, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_IsServer_ReturnValue) == 0x0001F0, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Not_PreBool_ReturnValue) == 0x0001F1, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_BooleanAND_ReturnValue) == 0x0001F2, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetValueAtLevelWithContext_ReturnValue_1) == 0x0001F4, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetValueAtLevelWithContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0001F8, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_OtherActor) == 0x000200, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_OtherComp) == 0x000208, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000210, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_bFromSweep) == 0x000214, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_SweepResult) == 0x000218, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0002F8, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_DynamicCast_bSuccess) == 0x000300, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetController_ReturnValue) == 0x000308, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_GetActorTeam_ReturnValue_2) == 0x000310, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_GetActorTeam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000318, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_DynamicCast_bSuccess_1) == 0x000320, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000321, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000322, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_IsServer_ReturnValue_1) == 0x000323, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_CreateDelegate_OutputDelegate) == 0x000324, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000330, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_K2_GetPawn_ReturnValue) == 0x000338, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000340, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_DynamicCast_bSuccess_2) == 0x000348, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_IsServer_ReturnValue_2) == 0x000349, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_IsInVortex_ReturnValue) == 0x00034A, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_IsInVortex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, K2Node_ComponentBoundEvent_DamageCauser) == 0x000350, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::K2Node_ComponentBoundEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, Temp_int_Loop_Counter_Variable_1) == 0x000358, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_WakeUp_ReturnValue_1) == 0x00035C, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_WakeUp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Less_IntInt_ReturnValue_1) == 0x00035D, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000360, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_Delay_Duration_ImplicitCast) == 0x000364, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x000368, "Member 'BGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_OnDeathServer final
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
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_OnDeathServer");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer) == 0x000148, "Wrong size on BGA_Athena_SCMachine_Pickup_C_OnDeathServer");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, Damage) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, DamageTags) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, Momentum) == 0x000028, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, HitInfo) == 0x000040, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnDeathServer, EffectContext) == 0x000130, "Member 'BGA_Athena_SCMachine_Pickup_C_OnDeathServer::EffectContext' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide final
{
public:
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_24[0x4];
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue_1;
	uint8                                         Pad_42[0x2];
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide) == 0x000048, "Wrong size on BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_Conv_IntToBool_ReturnValue) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_Array_Get_Item) == 0x000028, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_GetActorTeam_ReturnValue) == 0x000030, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_Conv_IntToBool_ReturnValue_1) == 0x000041, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_Conv_IntToBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000044, "Member 'BGA_Athena_SCMachine_Pickup_C_OnRep_UnHide::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_ShouldDie final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	class AController*                            EventInstigator;
	class AActor*                                 DamageCauser;
	bool                                          ReturnValue;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_ShouldDie) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_ShouldDie");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_ShouldDie) == 0x000020, "Wrong size on BGA_Athena_SCMachine_Pickup_C_ShouldDie");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ShouldDie, Damage) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_ShouldDie::Damage' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ShouldDie, EventInstigator) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_ShouldDie::EventInstigator' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ShouldDie, DamageCauser) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_ShouldDie::DamageCauser' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_ShouldDie, ReturnValue) == 0x000018, "Member 'BGA_Athena_SCMachine_Pickup_C_ShouldDie::ReturnValue' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	ETInteractionType                             InteractionType;
	bool                                          ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract) == 0x000010, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, InteractionType) == 0x000009, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::InteractionType' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, ReturnValue) == 0x00000A, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, CallFunc_GetActorTeam_ReturnValue) == 0x00000B, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000D, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract, CallFunc_BooleanAND_ReturnValue) == 0x00000E, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	uint8                                         Pad_9[0x7];
	class FText                                   ReturnValue;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString) == 0x000028, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString, InteractingPawn) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString, InteractionBeingAttempted) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString, ReturnValue) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString::ReturnValue' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime final
{
public:
	const class AFortPawn*                        InteractingPawn;
	float                                         OutInteractionTime;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	bool                                          ReturnValue;
	uint8                                         Pad_E[0x2];
	float                                         CallFunc_GetValueAtLevelWithContext_ReturnValue;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime) == 0x000018, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime, InteractingPawn) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime::InteractingPawn' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime, OutInteractionTime) == 0x000008, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime::OutInteractionTime' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime, InteractionBeingAttempted) == 0x00000C, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime, ReturnValue) == 0x00000D, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime, CallFunc_GetValueAtLevelWithContext_ReturnValue) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionTime::CallFunc_GetValueAtLevelWithContext_ReturnValue' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope final
{
public:
	TArray<class FName>                           InOutResolverScopes;
	int32                                         InOutPriority;
	bool                                          ReturnValue;
	uint8                                         Pad_15[0x3];
	class AFortMinigame*                          CallFunc_GetMinigame_ReturnValue;
	class FName                                   CallFunc_GetSpatialGameplayInterfaceFNameForActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_25[0x3];
	TArray<class FName>                           K2Node_MakeArray_Array;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope) == 0x000038, "Wrong size on BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, InOutResolverScopes) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::InOutResolverScopes' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, InOutPriority) == 0x000010, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::InOutPriority' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, ReturnValue) == 0x000014, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, CallFunc_GetMinigame_ReturnValue) == 0x000018, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::CallFunc_GetMinigame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, CallFunc_GetSpatialGameplayInterfaceFNameForActor_ReturnValue) == 0x000020, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::CallFunc_GetSpatialGameplayInterfaceFNameForActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope, K2Node_MakeArray_Array) == 0x000028, "Member 'BGA_Athena_SCMachine_Pickup_C_BuildDataRegistryResolverScope::K2Node_MakeArray_Array' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents final
{
public:
	bool                                          ReturnValue;
	bool                                          CallFunc_IsActorBeingDestroyed_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents) == 0x000001, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents) == 0x000006, "Wrong size on BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents, ReturnValue) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents, CallFunc_IsActorBeingDestroyed_ReturnValue) == 0x000001, "Member 'BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents::CallFunc_IsActorBeingDestroyed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents, CallFunc_BooleanOR_ReturnValue_1) == 0x000003, "Member 'BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents, CallFunc_BooleanOR_ReturnValue_2) == 0x000004, "Member 'BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BGA_Athena_SCMachine_Pickup_C_CanHandleCleanupEvents::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride final
{
public:
	const class UObject*                          ReturnValue;
};
static_assert(alignof(BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride) == 0x000008, "Wrong alignment on BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride");
static_assert(sizeof(BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride) == 0x000008, "Wrong size on BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride");
static_assert(offsetof(BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride, ReturnValue) == 0x000000, "Member 'BGA_Athena_SCMachine_Pickup_C_GetCacheContextOverride::ReturnValue' has a wrong offset!");

}
