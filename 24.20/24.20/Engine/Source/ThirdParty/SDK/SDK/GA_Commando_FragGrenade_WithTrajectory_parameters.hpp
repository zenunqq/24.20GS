#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup final
{
public:
	class UAbilitySystemComponent*                AbilitySystemIn;
	class UAbilitySystemComponent*                AbilitySystemOut;
	class UAbilitySystemComponent*                CallFunc_ActiveAbilitySetup_AbilitySystemOut;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	uint8                                         Pad_29[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1;
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1;
	uint8                                         Pad_41[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_2;
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_2;
	uint8                                         Pad_59[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_3;
	bool                                          CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_3;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup) == 0x000078, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, AbilitySystemIn) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::AbilitySystemIn' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, AbilitySystemOut) == 0x000008, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::AbilitySystemOut' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_ActiveAbilitySetup_AbilitySystemOut) == 0x000010, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_ActiveAbilitySetup_AbilitySystemOut' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput) == 0x000018, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1) == 0x000030, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1) == 0x000040, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_2) == 0x000048, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_2) == 0x000058, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_3) == 0x000060, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_3' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup, CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_3) == 0x000070, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ActiveAbilitySetup::CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_3' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B) == 0x000030, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B, TargetData) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B, ApplicationTag) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_Cancelled_BF65CDBE4F9E98E9174850B85775A15B::ApplicationTag' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B) == 0x000030, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B, TargetData) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B, ApplicationTag) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_Completed_BF65CDBE4F9E98E9174850B85775A15B::ApplicationTag' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_34[0x4];
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_4D[0x3];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	uint8                                         Pad_7C[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_5;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_6;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_F4[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_ActiveAbilitySetup_AbilitySystemOut;
	struct FVector                                CallFunc_SpawnLocationAndRotation_OutLoc;
	struct FRotator                               CallFunc_SpawnLocationAndRotation_OutRot;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_16C[0x4];
	class UClass*                                 CallFunc_SetupGrenade_Base_Grenade;
	double                                        CallFunc_SetupGrenade_Projectile_Speed;
	struct FFortGameplayEffectContainerSpec       CallFunc_SetupGrenade_Explosion_Gameplay_Spec;
	double                                        CallFunc_SetupGrenade_Projectile_Gravity_Scale;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_249[0x7];
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_25B[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered;
	bool                                          CallFunc_SetHolsterWeaponWithName_OperationSuccessful;
	uint8                                         Pad_27F[0x1];
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsServer_ReturnValue;
	bool                                          CallFunc_CommitAbilityWithEvent_Passed;
	bool                                          CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered_1;
	bool                                          CallFunc_SetHolsterWeaponWithName_OperationSuccessful_1;
	uint8                                         Pad_28D[0x3];
	double                                        CallFunc_SetupGrenade_AimPitch_ImplicitCast;
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory) == 0x0002A0, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, EntryPoint) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_WaitDelay_ReturnValue) == 0x000038, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CustomEvent_TargetData_2) == 0x000050, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CustomEvent_ApplicationTag_2) == 0x000078, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CustomEvent_TargetData_1) == 0x000080, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CustomEvent_ApplicationTag_1) == 0x0000A8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000AC, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CustomEvent_TargetData) == 0x0000B8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CustomEvent_ApplicationTag) == 0x0000E0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000E4, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, Temp_struct_Variable) == 0x0000F0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, Temp_struct_Variable_1) == 0x0000F8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000120, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_ActiveAbilitySetup_AbilitySystemOut) == 0x000128, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_ActiveAbilitySetup_AbilitySystemOut' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SpawnLocationAndRotation_OutLoc) == 0x000130, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SpawnLocationAndRotation_OutLoc' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SpawnLocationAndRotation_OutRot) == 0x000148, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SpawnLocationAndRotation_OutRot' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_BreakRotator_Roll) == 0x000160, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_BreakRotator_Pitch) == 0x000164, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_BreakRotator_Yaw) == 0x000168, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetupGrenade_Base_Grenade) == 0x000170, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetupGrenade_Base_Grenade' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetupGrenade_Projectile_Speed) == 0x000178, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetupGrenade_Projectile_Speed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetupGrenade_Explosion_Gameplay_Spec) == 0x000180, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetupGrenade_Explosion_Gameplay_Spec' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetupGrenade_Projectile_Gravity_Scale) == 0x000238, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetupGrenade_Projectile_Gravity_Scale' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_K2_SetTimer_ReturnValue) == 0x000240, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_Event_bWasCancelled) == 0x000248, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000250, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_IsValid_ReturnValue_1) == 0x000258, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_IsLocallyControlled_ReturnValue) == 0x000259, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_BooleanAND_ReturnValue) == 0x00025A, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_7) == 0x00025C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_WaitDelay_ReturnValue_1) == 0x000268, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_WaitDelay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, K2Node_CreateDelegate_OutputDelegate_8) == 0x000270, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_IsValid_ReturnValue_2) == 0x00027C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered) == 0x00027D, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetHolsterWeaponWithName_OperationSuccessful) == 0x00027E, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetHolsterWeaponWithName_OperationSuccessful' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x000280, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_IsValid_ReturnValue_3) == 0x000288, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_IsServer_ReturnValue) == 0x000289, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_CommitAbilityWithEvent_Passed) == 0x00028A, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_CommitAbilityWithEvent_Passed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered_1) == 0x00028B, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetHolsterWeaponWithName_OperationSuccessful_1) == 0x00028C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetHolsterWeaponWithName_OperationSuccessful_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_SetupGrenade_AimPitch_ImplicitCast) == 0x000290, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_SetupGrenade_AimPitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000298, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory, CallFunc_Delay_Duration_ImplicitCast) == 0x00029C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility final
{
public:
	class UAbilitySystemComponent*                AbilitySystemComponentRef;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_19[0x3];
	int32                                         CallFunc_SelectInt_ReturnValue;
	int32                                         CallFunc_SelectInt_ReturnValue_1;
	uint8                                         Pad_24[0x4];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	uint8                                         Pad_39[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;
	uint8                                         Pad_51[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_3;
	uint8                                         Pad_69[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_4;
	uint8                                         Pad_81[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_5;
	uint8                                         Pad_99[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_6;
	uint8                                         Pad_B1[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_7;
	uint8                                         Pad_C9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_8;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility) == 0x0000E8, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, AbilitySystemComponentRef) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::AbilitySystemComponentRef' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000008, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000018, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_SelectInt_ReturnValue) == 0x00001C, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_SelectInt_ReturnValue_1) == 0x000020, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_1) == 0x000038, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2) == 0x000040, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_2) == 0x000050, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3) == 0x000058, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_3) == 0x000068, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4) == 0x000070, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_4) == 0x000080, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5) == 0x000088, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_5) == 0x000098, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6) == 0x0000A0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_6) == 0x0000B0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7) == 0x0000B8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_7) == 0x0000C8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8) == 0x0000D0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility, CallFunc_HasAllMatchingGameplayTags_ReturnValue_8) == 0x0000E0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupAbility::CallFunc_HasAllMatchingGameplayTags_ReturnValue_8' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	struct FFortProjectileTrajectoryData          CallFunc_GetProjectileTrajectoryData_TrajectoryData;
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;
	class ABP_ProjectileTrajectory_C*             K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_99[0x7];
	double                                        CallFunc_FMax_ReturnValue;
	float                                         CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast;
	uint8                                         Pad_AC[0x4];
	double                                        K2Node_VariableSet_DummyMaxSpeed_ImplicitCast;
	double                                        K2Node_VariableSet_DummyGravity_ImplicitCast;
	double                                        CallFunc_FMax_A_ImplicitCast;
	double                                        CallFunc_FMax_B_ImplicitCast;
	double                                        K2Node_VariableSet_DummyBounciness_ImplicitCast;
	double                                        K2Node_VariableSet_DummyFriction_ImplicitCast;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile) == 0x000010, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile) == 0x0000E0, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_GetTransform_ReturnValue) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000060, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_GetProjectileTrajectoryData_TrajectoryData) == 0x000068, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_GetProjectileTrajectoryData_TrajectoryData' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, K2Node_DynamicCast_AsBP_Projectile_Trajectory) == 0x000090, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::K2Node_DynamicCast_AsBP_Projectile_Trajectory' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_FMax_ReturnValue) == 0x0000A0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast) == 0x0000A8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, K2Node_VariableSet_DummyMaxSpeed_ImplicitCast) == 0x0000B0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::K2Node_VariableSet_DummyMaxSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, K2Node_VariableSet_DummyGravity_ImplicitCast) == 0x0000B8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::K2Node_VariableSet_DummyGravity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_FMax_A_ImplicitCast) == 0x0000C0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, CallFunc_FMax_B_ImplicitCast) == 0x0000C8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::CallFunc_FMax_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, K2Node_VariableSet_DummyBounciness_ImplicitCast) == 0x0000D0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::K2Node_VariableSet_DummyBounciness_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile, K2Node_VariableSet_DummyFriction_ImplicitCast) == 0x0000D8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile::K2Node_VariableSet_DummyFriction_ImplicitCast' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade final
{
public:
	double                                        AimPitch;
	class UClass*                                 Base_Grenade;
	double                                        Projectile_Speed;
	struct FFortGameplayEffectContainerSpec       Explosion_Gameplay_Spec;
	double                                        Projectile_Gravity_Scale;
	double                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	struct FScalableFloat                         CallFunc_EvaluatePerkTierBalanceValue_Balance_Value;
	double                                        CallFunc_GetRangeFromGameplayEffectContainerSpec_Range;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FFortGameplayEffectContainer           CallFunc_BP_GetGameplayEffectContainer_ReturnValue;
	double                                        CallFunc_GetRangeFromGameplayEffectContainer_Range;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FScalableFloat                         K2Node_MakeStruct_ScalableFloat;
	struct FFortGameplayEffectContainer           CallFunc_ReplaceRangeInGameplayEffectContainer_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         K2Node_MakeStruct_Value_ImplicitCast;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade) == 0x000388, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, AimPitch) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::AimPitch' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, Base_Grenade) == 0x000008, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::Base_Grenade' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, Projectile_Speed) == 0x000010, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::Projectile_Speed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, Explosion_Gameplay_Spec) == 0x000018, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::Explosion_Gameplay_Spec' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, Projectile_Gravity_Scale) == 0x0000D0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::Projectile_Gravity_Scale' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed) == 0x0000D8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue) == 0x0000E0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_EvaluatePerkTierBalanceValue_Balance_Value) == 0x000198, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_EvaluatePerkTierBalanceValue_Balance_Value' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_GetRangeFromGameplayEffectContainerSpec_Range) == 0x0001C0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_GetRangeFromGameplayEffectContainerSpec_Range' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_BP_GetGameplayEffectContainer_ReturnValue) == 0x0001D0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_BP_GetGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_GetRangeFromGameplayEffectContainer_Range) == 0x000288, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_GetRangeFromGameplayEffectContainer_Range' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000290, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, K2Node_MakeStruct_ScalableFloat) == 0x000298, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::K2Node_MakeStruct_ScalableFloat' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_ReplaceRangeInGameplayEffectContainer_ReturnValue) == 0x0002C0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_ReplaceRangeInGameplayEffectContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000378, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade, K2Node_MakeStruct_Value_ImplicitCast) == 0x000380, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade::K2Node_MakeStruct_Value_ImplicitCast' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade final
{
public:
	class UClass*                                 ProjectileClass_0;
	struct FVector                                SpawnLocation;
	struct FRotator                               InputPin;
	struct FFortGameplayEffectContainerSpec       EffectContainerSpecToApplyOnExplode;
	double                                        InitialSpeed;
	double                                        GravityScale_0;
	class AB_Prj_Commando_FragGrenade_C*          FragGrenade;
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1;
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2;
	class AFortProjectileBase*                    CallFunc_SpawnProjectile_ReturnValue;
	class AB_Prj_Commando_FragGrenade_C*          K2Node_DynamicCast_AsB_Prj_Commando_Frag_Grenade;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_341[0x3];
	float                                         CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast;
	float                                         CallFunc_SpawnProjectile_GravityScale_ImplicitCast;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade) == 0x000350, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, ProjectileClass_0) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::ProjectileClass_0' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, SpawnLocation) == 0x000008, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::SpawnLocation' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, InputPin) == 0x000020, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::InputPin' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, EffectContainerSpecToApplyOnExplode) == 0x000038, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::EffectContainerSpecToApplyOnExplode' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, InitialSpeed) == 0x0000F0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::InitialSpeed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, GravityScale_0) == 0x0000F8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::GravityScale_0' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, FragGrenade) == 0x000100, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::FragGrenade' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue) == 0x000108, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1) == 0x0001C0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2) == 0x000278, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, CallFunc_SpawnProjectile_ReturnValue) == 0x000330, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, K2Node_DynamicCast_AsB_Prj_Commando_Frag_Grenade) == 0x000338, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::K2Node_DynamicCast_AsB_Prj_Commando_Frag_Grenade' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, K2Node_DynamicCast_bSuccess) == 0x000340, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast) == 0x000344, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade, CallFunc_SpawnProjectile_GravityScale_ImplicitCast) == 0x000348, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade::CallFunc_SpawnProjectile_GravityScale_ImplicitCast' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B) == 0x000030, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B, TargetData) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B, ApplicationTag) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_Triggered_BF65CDBE4F9E98E9174850B85775A15B::ApplicationTag' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline final
{
public:
	TArray<class AActor*>                         CallFunc_GetProjectileIgnoredActors_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FVector                                CallFunc_SpawnLocationAndRotation_OutLoc;
	struct FRotator                               CallFunc_SpawnLocationAndRotation_OutRot;
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_6C[0x4];
	double                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents;
	float                                         CallFunc_CalculateProjectileTrajectorySpline_TraceExtent_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySpline_TimeStep_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySpline_Friction_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySpline_Bounciness_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySpline_Gravity_ImplicitCast;
	uint8                                         Pad_CC[0x4];
	double                                        CallFunc_CalcGrenadeSpeedFromPitch_AimPitch_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySpline_MaxSpeed_ImplicitCast;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline) == 0x0000E0, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_GetProjectileIgnoredActors_ReturnValue) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_GetProjectileIgnoredActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_SpawnLocationAndRotation_OutLoc) == 0x000018, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_SpawnLocationAndRotation_OutLoc' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_SpawnLocationAndRotation_OutRot) == 0x000030, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_SpawnLocationAndRotation_OutRot' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000048, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_BreakRotator_Roll) == 0x000060, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_BreakRotator_Pitch) == 0x000064, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_BreakRotator_Yaw) == 0x000068, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed) == 0x000070, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000078, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_FMax_ReturnValue) == 0x000090, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints) == 0x000098, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents) == 0x0000A8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_TraceExtent_ImplicitCast) == 0x0000B8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_TraceExtent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_TimeStep_ImplicitCast) == 0x0000BC, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_TimeStep_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_Friction_ImplicitCast) == 0x0000C0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_Friction_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_Bounciness_ImplicitCast) == 0x0000C4, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_Bounciness_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_Gravity_ImplicitCast) == 0x0000C8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_Gravity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalcGrenadeSpeedFromPitch_AimPitch_ImplicitCast) == 0x0000D0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalcGrenadeSpeedFromPitch_AimPitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline, CallFunc_CalculateProjectileTrajectorySpline_MaxSpeed_ImplicitCast) == 0x0000D8, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline::CallFunc_CalculateProjectileTrajectorySpline_MaxSpeed_ImplicitCast' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch final
{
public:
	double                                        AimPitch;
	double                                        GrenadeSpeed;
	float                                         CallFunc_NormalizeAxis_ReturnValue;
	uint8                                         Pad_14[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	float                                         CallFunc_NormalizeAxis_Angle_ImplicitCast;
	uint8                                         Pad_44[0x4];
	double                                        CallFunc_FClamp_Value_ImplicitCast;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch) == 0x000050, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, AimPitch) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::AimPitch' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, GrenadeSpeed) == 0x000008, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::GrenadeSpeed' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_NormalizeAxis_ReturnValue) == 0x000010, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000018, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_Lerp_ReturnValue) == 0x000038, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_NormalizeAxis_Angle_ImplicitCast) == 0x000040, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_NormalizeAxis_Angle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch, CallFunc_FClamp_Value_ImplicitCast) == 0x000048, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch::CallFunc_FClamp_Value_ImplicitCast' has a wrong offset!");

struct GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation final
{
public:
	struct FVector                                OutLoc;
	struct FRotator                               OutRot;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	struct FRotator                               CallFunc_GetDefaultTargetingRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_6C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
};
static_assert(alignof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation) == 0x000008, "Wrong alignment on GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation");
static_assert(sizeof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation) == 0x0000B8, "Wrong size on GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, OutLoc) == 0x000000, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::OutLoc' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, OutRot) == 0x000018, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::OutRot' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000030, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_GetDefaultTargetingRotation_ReturnValue) == 0x000048, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_GetDefaultTargetingRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_BreakRotator_Roll) == 0x000060, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_BreakRotator_Pitch) == 0x000064, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_BreakRotator_Yaw) == 0x000068, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000070, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_RotateAngleAxis_ReturnValue) == 0x000088, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'GA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");

}
