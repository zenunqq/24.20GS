#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Enum_NPC_AlertLevel_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SoundLibrary_structs.hpp"

namespace SDK::Params
{

struct NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer final
{
public:
	TSoftClassPtr<class UClass>                   AnimationLayer;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer) == 0x000028, "Wrong size on NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer, AnimationLayer) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer::AnimationLayer' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX final
{
public:
	struct FSoundLibraryPlaySoundResult           SoundLibraryResult;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_MatchesTag_ReturnValue;
	uint8                                         Pad_3A[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_4A[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX) == 0x000058, "Wrong size on NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, SoundLibraryResult) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::SoundLibraryResult' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, Temp_int_Array_Index_Variable) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_Array_Get_Item) == 0x000030, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_MatchesTag_ReturnValue) == 0x000039, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000048, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'NPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FGameplayEffectContextHandle           EffectContext;
	class AController*                            EventInstigator;
	class AActor*                                 DamageCauser;
	float                                         ReturnValue;
	uint8                                         Pad_54[0x4];
	int64                                         LastFrameCount;
	class AActor*                                 Last_DamageCauser;
	class AController*                            LastDamageInstigator;
	double                                        NewDamage;
	float                                         CallFunc_BlueprintModifyIncomingDamage_ReturnValue;
	uint8                                         Pad_7C[0x4];
	int64                                         CallFunc_GetFrameCount_ReturnValue;
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_8D[0x3];
	float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage) == 0x000098, "Wrong size on NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, Damage) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, DamageTags) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, EffectContext) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::EffectContext' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, EventInstigator) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::EventInstigator' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, DamageCauser) == 0x000048, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, ReturnValue) == 0x000050, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, LastFrameCount) == 0x000058, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::LastFrameCount' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, Last_DamageCauser) == 0x000060, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::Last_DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, LastDamageInstigator) == 0x000068, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::LastDamageInstigator' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, NewDamage) == 0x000070, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::NewDamage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_BlueprintModifyIncomingDamage_ReturnValue) == 0x000078, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_BlueprintModifyIncomingDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_GetFrameCount_ReturnValue) == 0x000080, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_GetFrameCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000088, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000089, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00008A, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_BooleanAND_ReturnValue) == 0x00008B, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, CallFunc_BooleanAND_ReturnValue_1) == 0x00008C, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000090, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature final
{
public:
	class AFortPawn*                              InstigatorPawn;
	class AFortPawn*                              ConvertedPawn;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature) == 0x000010, "Wrong size on NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature, InstigatorPawn) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature::InstigatorPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature, ConvertedPawn) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature::ConvertedPawn' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature final
{
public:
	class AFortPawn*                              UnconvertedPawn;
	EUnconvertReason                              UnconvertReason;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature) == 0x000010, "Wrong size on NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature, UnconvertedPawn) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature::UnconvertedPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature, UnconvertReason) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature::UnconvertReason' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature final
{
public:
	struct FSoundLibraryPlaySoundResult           Results;
	const class USoundLibraryContext*             Context;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature) == 0x000030, "Wrong size on NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature, Results) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature::Results' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature, Context) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature::Context' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed final
{
public:
	bool                                          bCanInteract_0;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_2[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed) == 0x000018, "Wrong size on NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed, bCanInteract_0) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed::bCanInteract_0' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000001, "Member 'NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000004, "Member 'NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_AnimationLayer;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;
	uint8                                         Pad_32[0x6];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	class AActor*                                 K2Node_Event_AIPawn;
	class AFortPlayerPawn*                        K2Node_Event_InteractingPlayerPawn;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_69[0x7];
	class AFortPawn*                              K2Node_ComponentBoundEvent_InstigatorPawn;
	class AFortPawn*                              K2Node_ComponentBoundEvent_ConvertedPawn;
	class AFortPawn*                              K2Node_ComponentBoundEvent_UnconvertedPawn;
	EUnconvertReason                              K2Node_ComponentBoundEvent_UnconvertReason;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	uint8                                         Pad_8A[0x6];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Enum_NPC_AlertLevel                           K2Node_Event_NPCAlertLevel;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	float                                         K2Node_Event_Damage_2;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_2;
	struct FVector                                K2Node_Event_Momentum_2;
	struct FHitResult                             K2Node_Event_HitInfo_2;
	class AController*                            K2Node_Event_InstigatedBy_2;
	class AActor*                                 K2Node_Event_DamageCauser_2;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_3;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          K2Node_Event_Success_;
	uint8                                         Pad_1F9[0x7];
	class AActor*                                 K2Node_Event_Leader;
	EUnconvertReason                              K2Node_Event_UnconvertReason;
	uint8                                         Pad_209[0x3];
	int32                                         CallFunc_GetConsoleVariableIntValue_ReturnValue;
	struct FSoundLibraryPlaySoundResult           K2Node_ComponentBoundEvent_Results;
	const class USoundLibraryContext*             K2Node_ComponentBoundEvent_Context;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          K2Node_Event_bControlled;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_NPC_CanBeInteractedWith_CanInteract;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract;
	bool                                          CallFunc_CanBeInteractedWithWhenTamed_bCanInteract;
	uint8                                         Pad_247[0x1];
	int32                                         K2Node_Event_NewBudgetValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_IsDead_ReturnValue;
	uint8                                         Pad_24E[0x2];
	float                                         K2Node_Event_Damage_1;
	uint8                                         Pad_254[0x4];
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;
	struct FVector                                K2Node_Event_Momentum_1;
	struct FHitResult                             K2Node_Event_HitInfo_1;
	class AFortPawn*                              K2Node_Event_InstigatedBy_1;
	class AActor*                                 K2Node_Event_DamageCauser_1;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_2;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue_1;
	uint8                                         Pad_3A5[0x3];
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_3B2[0x6];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue_2;
	uint8                                         Pad_3C3[0x1];
	TDelegate<void(class AFortPawn* FocusedPawn)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_3D2[0x6];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	uint8                                         Pad_3E2[0x6];
	class AFortPawn*                              K2Node_CustomEvent_FocusedPawn;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_3F1[0x7];
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_401[0x7];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_411[0x7];
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         CallFunc_GetSquadId_ReturnValue;
	uint8                                         Pad_422[0x6];
	class UClass*                                 Temp_class_Variable;
	bool                                          CallFunc_HasAuthority_ReturnValue_3;
	uint8                                         Pad_431[0x7];
	class UClass*                                 K2Node_ClassDynamicCast_AsAnim_Instance;
	bool                                          K2Node_ClassDynamicCast_bSuccess;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_442[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	uint8                                         Pad_44C[0x4];
	double                                        Temp_real_Variable;
	TArray<bool>                                  Temp_wildcard_Avoid_creating_array_every_time_Variable;
	bool                                          Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable;
	uint8                                         Pad_469[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_481[0x7];
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         CallFunc_GetSquadId_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	int32                                         CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	bool                                          K2Node_Event_bNewSlidingState;
	uint8                                         Pad_4A1[0x7];
	struct FGameplayEffectContextHandle           CallFunc_MakeSimpleFortEffectContext_ReturnValue;
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	uint8                                         Pad_4C9[0x3];
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AFortPawn*                              K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_61C[0x4];
	struct FHitResult                             K2Node_Event_Hit;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_701[0x7];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_719[0x3];
	float                                         CallFunc_GetHealth_ReturnValue;
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	uint8                                         Pad_724[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	uint8                                         Pad_739[0x7];
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingSpec_ReturnValue;
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget_2;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_779[0x3];
	float                                         CallFunc_GetMaxConvertResistance_ReturnValue;
	float                                         K2Node_Event_ConvertDamageDone;
	uint8                                         Pad_784[0x4];
	struct FGameplayTagContainer                  K2Node_Event_SourceTags;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	class AController*                            K2Node_Event_EffectInstigator;
	class AActor*                                 K2Node_Event_EffectCauser;
	float                                         CallFunc_GetMaxConvertResistance_ReturnValue_0;
	uint8                                         Pad_7D4[0x4];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_7E1[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	float                                         CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	uint8                                         Pad_7F4[0x4];
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        K2Node_VariableSetRef_Target_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent) == 0x000818, "Wrong size on NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, EntryPoint) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_CustomEvent_AnimationLayer) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_CustomEvent_AnimationLayer' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x000031, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsNPCStatus_Widget) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsNPCStatus_Widget' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_AIPawn) == 0x000050, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_AIPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_InteractingPlayerPawn) == 0x000058, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_InteractingPlayerPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsFort_Pawn) == 0x000060, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ComponentBoundEvent_InstigatorPawn) == 0x000070, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ComponentBoundEvent_InstigatorPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ComponentBoundEvent_ConvertedPawn) == 0x000078, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ComponentBoundEvent_ConvertedPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ComponentBoundEvent_UnconvertedPawn) == 0x000080, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ComponentBoundEvent_UnconvertedPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ComponentBoundEvent_UnconvertReason) == 0x000088, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ComponentBoundEvent_UnconvertReason' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetActorTeam_ReturnValue) == 0x000089, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000090, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_NPCAlertLevel) == 0x000098, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_NPCAlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_1) == 0x000099, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_SwitchEnum_CmpSuccess) == 0x00009A, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_2) == 0x00009B, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Damage_2) == 0x00009C, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Damage_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_DamageTags_2) == 0x0000A0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_DamageTags_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Momentum_2) == 0x0000C0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Momentum_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_HitInfo_2) == 0x0000D8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_HitInfo_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_InstigatedBy_2) == 0x0001B8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_InstigatedBy_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_DamageCauser_2) == 0x0001C0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_DamageCauser_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_EffectContext_3) == 0x0001C8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_EffectContext_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001E0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Success_) == 0x0001F8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Success_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Leader) == 0x000200, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_UnconvertReason) == 0x000208, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_UnconvertReason' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetConsoleVariableIntValue_ReturnValue) == 0x00020C, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetConsoleVariableIntValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ComponentBoundEvent_Results) == 0x000210, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ComponentBoundEvent_Results' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ComponentBoundEvent_Context) == 0x000238, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ComponentBoundEvent_Context' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000240, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_bControlled) == 0x000241, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_bControlled' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_HasAuthority_ReturnValue) == 0x000242, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Not_PreBool_ReturnValue) == 0x000243, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_NPC_CanBeInteractedWith_CanInteract) == 0x000244, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_NPC_CanBeInteractedWith_CanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_NPC_UpdateInteract_EnabledInteract) == 0x000245, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_NPC_UpdateInteract_EnabledInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_CanBeInteractedWithWhenTamed_bCanInteract) == 0x000246, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_CanBeInteractedWithWhenTamed_bCanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_NewBudgetValue) == 0x000248, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_NewBudgetValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00024C, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsDead_ReturnValue) == 0x00024D, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Damage_1) == 0x000250, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_DamageTags_1) == 0x000258, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Momentum_1) == 0x000278, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_HitInfo_1) == 0x000290, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_InstigatedBy_1) == 0x000370, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_DamageCauser_1) == 0x000378, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_EffectContext_2) == 0x000380, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_EffectContext_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000398, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_2) == 0x0003A0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetSubGame_ReturnValue) == 0x0003A1, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x0003A2, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0003A3, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetSubGame_ReturnValue_1) == 0x0003A4, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetSubGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetContext_ReturnValue) == 0x0003A8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003B0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_3) == 0x0003B1, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetConverterPawn_ReturnValue) == 0x0003B8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_4) == 0x0003C0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_HasAuthority_ReturnValue_1) == 0x0003C1, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetSubGame_ReturnValue_2) == 0x0003C2, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetSubGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x0003C4, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0003D0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0003D1, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetConverterPawn_ReturnValue_1) == 0x0003D8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetConverterPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_5) == 0x0003E0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_HasAuthority_ReturnValue_2) == 0x0003E1, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_CustomEvent_FocusedPawn) == 0x0003E8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_CustomEvent_FocusedPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0003F0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetComponentByClass_ReturnValue) == 0x0003F8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_6) == 0x000400, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetConverterPawn_ReturnValue_2) == 0x000408, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetConverterPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_7) == 0x000410, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsFort_Player_State_Athena) == 0x000418, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsFort_Player_State_Athena' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_3) == 0x000420, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetSquadId_ReturnValue) == 0x000421, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetSquadId_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, Temp_class_Variable) == 0x000428, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_HasAuthority_ReturnValue_3) == 0x000430, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ClassDynamicCast_AsAnim_Instance) == 0x000438, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ClassDynamicCast_AsAnim_Instance' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_ClassDynamicCast_bSuccess) == 0x000440, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000441, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000444, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, Temp_real_Variable) == 0x000450, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, Temp_wildcard_Avoid_creating_array_every_time_Variable) == 0x000458, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::Temp_wildcard_Avoid_creating_array_every_time_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable) == 0x000468, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000470, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000478, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_8) == 0x000480, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsFort_Player_State_Athena_1) == 0x000488, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsFort_Player_State_Athena_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_4) == 0x000490, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetSquadId_ReturnValue_1) == 0x000491, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetSquadId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_9) == 0x000492, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000493, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_RemoveActiveEffectsWithTags_ReturnValue) == 0x000494, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_RemoveActiveEffectsWithTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x000498, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_bNewSlidingState) == 0x0004A0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_bNewSlidingState' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_MakeSimpleFortEffectContext_ReturnValue) == 0x0004A8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_MakeSimpleFortEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_CustomEvent_Loaded) == 0x0004C0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Array_Contains_ReturnValue) == 0x0004C8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Damage) == 0x0004CC, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_DamageTags) == 0x0004D0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Momentum) == 0x0004F0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_HitInfo) == 0x000508, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_InstigatedBy) == 0x0005E8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_DamageCauser) == 0x0005F0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_EffectContext_1) == 0x0005F8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000610, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_Hit) == 0x000620, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_10) == 0x000700, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000708, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsNPCStatus_Widget_1) == 0x000710, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsNPCStatus_Widget_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_5) == 0x000718, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetHealth_ReturnValue) == 0x00071C, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetMaxHealth_ReturnValue) == 0x000720, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000728, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetFortAbilitySystemComponent_ReturnValue_2) == 0x000730, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetFortAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_IsValid_ReturnValue_11) == 0x000738, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_MakeOutgoingSpec_ReturnValue) == 0x000740, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_MakeOutgoingSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000750, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetUserWidgetObject_ReturnValue_2) == 0x000760, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetUserWidgetObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue) == 0x000768, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsNPCStatus_Widget_2) == 0x000770, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsNPCStatus_Widget_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_6) == 0x000778, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetMaxConvertResistance_ReturnValue) == 0x00077C, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetMaxConvertResistance_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_ConvertDamageDone) == 0x000780, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_ConvertDamageDone' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_SourceTags) == 0x000788, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_SourceTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_EffectContext) == 0x0007A8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_EffectInstigator) == 0x0007C0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_EffectInstigator' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_Event_EffectCauser) == 0x0007C8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_Event_EffectCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_GetMaxConvertResistance_ReturnValue_0) == 0x0007D0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_GetMaxConvertResistance_ReturnValue_0' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_AsFort_Pawn_1) == 0x0007D8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_DynamicCast_bSuccess_7) == 0x0007E0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0007E8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast) == 0x0007F0, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0007F8, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000800, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000808, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent, K2Node_VariableSetRef_Target_ImplicitCast) == 0x000810, "Member 'NPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent::K2Node_VariableSetRef_Target_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer final
{
public:
	Enum_NPC_AlertLevel                           NPCAlertLevel;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer) == 0x000001, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer) == 0x000001, "Wrong size on NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer, NPCAlertLevel) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer::NPCAlertLevel' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith final
{
public:
	bool                                          CanInteract;
	bool                                          CallFunc_NPC_CanBeInteractedWith_CanInteract;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith) == 0x000001, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith) == 0x000003, "Wrong size on NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith, CanInteract) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith::CanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith, CallFunc_NPC_CanBeInteractedWith_CanInteract) == 0x000001, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith::CallFunc_NPC_CanBeInteractedWith_CanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet final
{
public:
	bool                                          Success_;
	uint8                                         Pad_1[0x7];
	class AActor*                                 Leader;
	EUnconvertReason                              UnconvertReason;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet) == 0x000018, "Wrong size on NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet, Success_) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet::Success_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet, Leader) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet::Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet, UnconvertReason) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet::UnconvertReason' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed final
{
public:
	class AActor*                                 ActorGrabbed;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed) == 0x000008, "Wrong size on NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed, ActorGrabbed) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed::ActorGrabbed' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible final
{
public:
	bool                                          ShouldKeepVisible;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	float                                         CallFunc_GetHealth_ReturnValue;
	uint8                                         Pad_C[0x4];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	double                                        CallFunc_GetDistanceBetweenActors_Distance;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_5D[0x3];
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible) == 0x000070, "Wrong size on NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, ShouldKeepVisible) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::ShouldKeepVisible' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_GetMaxHealth_ReturnValue) == 0x000004, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_GetHealth_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_Not_PreBool_ReturnValue_1) == 0x000029, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_IsValid_ReturnValue) == 0x00002A, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x00002B, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x00002C, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000030, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, K2Node_DynamicCast_AsNPCStatus_Widget) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::K2Node_DynamicCast_AsNPCStatus_Widget' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_GetDistanceBetweenActors_Distance) == 0x000050, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_GetDistanceBetweenActors_Distance' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000058, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_BooleanAND_ReturnValue) == 0x000059, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_GetSubGame_ReturnValue) == 0x00005A, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_BooleanAND_ReturnValue_1) == 0x00005B, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005C, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000060, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'NPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith final
{
public:
	class AActor*                                 AIPawn;
	class AFortPlayerPawn*                        InteractingPlayerPawn;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith) == 0x000010, "Wrong size on NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith, AIPawn) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith::AIPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith, InteractingPlayerPawn) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith::InteractingPlayerPawn' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused final
{
public:
	class AFortPawn*                              FocusedPawn;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused) == 0x000008, "Wrong size on NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused, FocusedPawn) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused::FocusedPawn' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization final
{
public:
	int32                                         NewBudgetValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization) == 0x000004, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization) == 0x000004, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization, NewBudgetValue) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization::NewBudgetValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged final
{
public:
	bool                                          bControlled;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged) == 0x000001, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged) == 0x000001, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged, bControlled) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged::bControlled' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects) == 0x000148, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, Damage) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, DamageTags) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, Momentum) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, HitInfo) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects, EffectContext) == 0x000130, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects::EffectContext' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects) == 0x000148, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, HitInfo) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects, EffectContext) == 0x000130, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnDeathServer final
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
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnDeathServer");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer) == 0x000148, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnDeathServer");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, Damage) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, DamageTags) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, Momentum) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, HitInfo) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnDeathServer, EffectContext) == 0x000130, "Member 'NPC_Pawn_Wildlife_Parent_C_OnDeathServer::EffectContext' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnLanded) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnLanded");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnLanded) == 0x0000E0, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnLanded");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnLanded, Hit) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnLanded::Hit' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06 final
{
public:
	TSubclassOf<class UObject>                    Loaded;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06) == 0x000008, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06, Loaded) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06::Loaded' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer final
{
public:
	float                                         ConvertDamageDone;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  SourceTags;
	struct FGameplayEffectContextHandle           EffectContext;
	class AController*                            EffectInstigator;
	class AActor*                                 EffectCauser;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer) == 0x000050, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer, ConvertDamageDone) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer::ConvertDamageDone' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer, SourceTags) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer::SourceTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer, EffectContext) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer::EffectContext' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer, EffectInstigator) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer::EffectInstigator' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer, EffectCauser) == 0x000048, "Member 'NPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer::EffectCauser' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged final
{
public:
	bool                                          bNewSlidingState;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged) == 0x000001, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged) == 0x000001, "Wrong size on NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged, bNewSlidingState) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged::bNewSlidingState' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib final
{
public:
	struct FGameplayTag                           Event_Name;
	uint8                                         Pad_4[0x4];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	struct FSoundLibrarySimpleContextSettings     K2Node_MakeStruct_SoundLibrarySimpleContextSettings;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_69[0x7];
	class UB_CreatureSoundLibraryContext_C*       CallFunc_SpawnObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_79[0x7];
	struct FSoundLibraryPlaySoundResult           CallFunc_PlaySound_OutResults;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib) == 0x0000A8, "Wrong size on NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, Event_Name) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::Event_Name' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, K2Node_MakeStruct_SoundLibrarySimpleContextSettings) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::K2Node_MakeStruct_SoundLibrarySimpleContextSettings' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, CallFunc_SpawnObject_ReturnValue) == 0x000070, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib, CallFunc_PlaySound_OutResults) == 0x000080, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib::CallFunc_PlaySound_OutResults' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface final
{
public:
	class AFortWaterBodyActor*                    Water_Body;
	bool                                          Enter_Water_0;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface) == 0x000010, "Wrong size on NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface, Water_Body) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface::Water_Body' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface, Enter_Water_0) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface::Enter_Water_0' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts final
{
public:
	struct FVector                                Hit_Direction;
	class UAnimMontage*                           Anim_Montage;
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;
	bool                                          CallFunc_HasTag_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts) == 0x000048, "Wrong size on NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts, Hit_Direction) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts::Hit_Direction' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts, Anim_Montage) == 0x000018, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts::Anim_Montage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x000020, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts, CallFunc_HasTag_ReturnValue) == 0x000040, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts::CallFunc_HasTag_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio final
{
public:
	Enum_NPC_AlertLevel                           Index_0;
	uint8                                         Pad_1[0x3];
	struct FGameplayTag                           Temp_struct_Variable;
	struct FGameplayTag                           Temp_struct_Variable_1;
	struct FGameplayTag                           Temp_struct_Variable_2;
	struct FGameplayTag                           Temp_struct_Variable_3;
	struct FGameplayTag                           Temp_struct_Variable_4;
	Enum_NPC_AlertLevel                           Temp_byte_Variable;
	uint8                                         Pad_19[0x3];
	struct FGameplayTag                           K2Node_Select_Default;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio) == 0x000004, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio) == 0x000024, "Wrong size on NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Index_0) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Index_0' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Temp_struct_Variable) == 0x000004, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Temp_struct_Variable_1) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Temp_struct_Variable_2) == 0x00000C, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Temp_struct_Variable_3) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Temp_struct_Variable_4) == 0x000014, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, Temp_byte_Variable) == 0x000018, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, K2Node_Select_Default) == 0x00001C, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled final
{
public:
	bool                                          EnableTaming;
	bool                                          CallFunc_NPC_CanBeInteractedWith_CanInteract;
	uint8                                         Pad_2[0x6];
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled) == 0x000018, "Wrong size on NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled, EnableTaming) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled::EnableTaming' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled, CallFunc_NPC_CanBeInteractedWith_CanInteract) == 0x000001, "Member 'NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled::CallFunc_NPC_CanBeInteractedWith_CanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_SetTamingEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar final
{
public:
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_OnLocalPlayersTeam_Return_Value;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar) == 0x000020, "Wrong size on NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar, CallFunc_GetComponentByClass_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar, CallFunc_GetConverterPawn_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar, CallFunc_OnLocalPlayersTeam_Return_Value) == 0x000019, "Member 'NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar::CallFunc_OnLocalPlayersTeam_Return_Value' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar, CallFunc_IsLocallyControlled_ReturnValue) == 0x00001A, "Member 'NPC_Pawn_Wildlife_Parent_C_TryShowHealthBar::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_1[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator) == 0x000018, "Wrong size on NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator, CallFunc_GetActorTeam_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'NPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	bool                                          ReturnValue;
	bool                                          CallFunc_BlueprintCanInteract_ReturnValue;
	uint8                                         Pad_B[0x5];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_22[0x6];
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_GetOnlyLeaderInteraction_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract) == 0x000040, "Wrong size on NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, InteractingPawn) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::InteractingPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, InteractionBeingAttempted) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, ReturnValue) == 0x000009, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_BlueprintCanInteract_ReturnValue) == 0x00000A, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_BlueprintCanInteract_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_GetConverterPawn_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000039, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_IsValid_ReturnValue_1) == 0x00003A, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_GetOnlyLeaderInteraction_ReturnValue) == 0x00003B, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_GetOnlyLeaderInteraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003C, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract, CallFunc_BooleanOR_ReturnValue) == 0x00003D, "Member 'NPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget final
{
public:
	const class AActor*                           Attacker;
	bool                                          ReturnValue;
	EFortTeamAffiliation                          TeamAffiliation;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_F[0x1];
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	float                                         CallFunc_GetHealth_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1B[0x5];
	double                                        CallFunc_Less_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget) == 0x000008, "Wrong alignment on NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget");
static_assert(sizeof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget) == 0x000030, "Wrong size on NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, Attacker) == 0x000000, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::Attacker' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, ReturnValue) == 0x000008, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, TeamAffiliation) == 0x000009, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::TeamAffiliation' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_GetActorTeam_ReturnValue) == 0x00000A, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000B, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue) == 0x00000C, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_Not_PreBool_ReturnValue) == 0x00000D, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000E, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_GetMaxHealth_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_GetHealth_ReturnValue) == 0x000014, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000019, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_Less_DoubleDouble_B_ImplicitCast) == 0x000020, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_Less_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'NPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
