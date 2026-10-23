#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_Consumable_Throw_Parent_C_AddCookGC final
{
public:
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_AddCookGC) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_AddCookGC");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_AddCookGC) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_AddCookGC");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_AddCookGC, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_AddCookGC::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_AddValidCamera final
{
public:
	bool                                          CallFunc_IsValidClass_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_AddValidCamera) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_AddValidCamera");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_AddValidCamera) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_AddValidCamera");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_AddValidCamera, CallFunc_IsValidClass_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_AddValidCamera::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27) == 0x000030, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27, TargetData) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27, ApplicationTag) == 0x000028, "Member 'GA_Athena_Consumable_Throw_Parent_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27::ApplicationTag' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_CleanupTrajectory::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27) == 0x000030, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27, TargetData) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27, ApplicationTag) == 0x000028, "Member 'GA_Athena_Consumable_Throw_Parent_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27::ApplicationTag' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6 final
{
public:
	struct FGameplayEventData                     Payload;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6) == 0x0000B0, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6, Payload) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6::Payload' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F final
{
public:
	struct FGameplayEventData                     Payload;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F) == 0x0000B0, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F, Payload) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F::Payload' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC final
{
public:
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteThrowGC::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_44[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_71[0x3];
	TDelegate<void(float TimeHeld)>               K2Node_CreateDelegate_OutputDelegate_1;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class UFortWeaponItemDefinition*              CallFunc_GetWeaponData_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_91[0x7];
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	float                                         K2Node_CustomEvent_TimeHeld;
	float                                         Temp_real_Variable;
	class UAbilityTask_WaitInputRelease*          CallFunc_WaitInputRelease_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_B1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	uint8                                         Pad_E4[0x4];
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_6;
	uint8                                         Pad_1A4[0x4];
	struct FGameplayEventData                     Temp_struct_Variable_2;
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_261[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	class UAbilityTask_NetworkSyncPoint*          CallFunc_WaitNetSync_ReturnValue;
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_8;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_285[0x3];
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;
	struct FGameplayEventData                     Temp_struct_Variable_3;
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_3F3[0x5];
	struct FVector                                CallFunc_GetSpawnLocationAndRotation_Location;
	struct FRotator                               CallFunc_GetSpawnLocationAndRotation_Rotation;
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_439[0x7];
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_449[0x7];
	class AFortProjectileTrajectory*              CallFunc_SpawnTrajectoryIndicator_ReturnValue;
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	uint8                                         Pad_5F4[0x4];
	struct FFortGameplayEffectContainerSpec       CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_9;
	uint8                                         Pad_6BC[0x4];
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_6CA[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_6DB[0x5];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	uint8                                         Pad_70C[0x4];
	double                                        CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse;
	struct FFortProjectileTrajectoryData          CallFunc_GetProjectileTrajectoryData_TrajectoryData;
	double                                        CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse;
	class AFortProjectileBase*                    CallFunc_SpawnThrownProjectile_SpawnedProjectile;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_74A[0x2];
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_11;
	float                                         CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast;
	float                                         CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast;
	double                                        CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent) == 0x000768, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, EntryPoint) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_TargetData) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_ApplicationTag) == 0x000030, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, Temp_struct_Variable) == 0x000040, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, Temp_struct_Variable_1) == 0x000048, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000074, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000080, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetWeaponData_ReturnValue) == 0x000088, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetQuestManager_ReturnValue) == 0x000098, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_TimeHeld) == 0x0000A0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_TimeHeld' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, Temp_real_Variable) == 0x0000A4, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_WaitInputRelease_ReturnValue) == 0x0000A8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_WaitInputRelease_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_2) == 0x0000B0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B4, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000CC, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000D8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_Payload_1) == 0x0000E8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_6) == 0x000198, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, Temp_struct_Variable_2) == 0x0001A8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000258, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_3) == 0x000260, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_7) == 0x000264, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_WaitNetSync_ReturnValue) == 0x000270, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_WaitNetSync_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_8) == 0x000278, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_4) == 0x000284, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_Payload) == 0x000288, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, Temp_struct_Variable_3) == 0x000338, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_WaitGameplayEvent_ReturnValue_1) == 0x0003E8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_WaitGameplayEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_5) == 0x0003F0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_K2_CommitAbility_ReturnValue) == 0x0003F1, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsServer_ReturnValue) == 0x0003F2, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetSpawnLocationAndRotation_Location) == 0x0003F8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetSpawnLocationAndRotation_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetSpawnLocationAndRotation_Rotation) == 0x000410, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetSpawnLocationAndRotation_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000428, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetOwningPlayer_Player_Pawn) == 0x000430, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_6) == 0x000438, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x000440, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_7) == 0x000448, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_SpawnTrajectoryIndicator_ReturnValue) == 0x000450, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_SpawnTrajectoryIndicator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue) == 0x000458, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1) == 0x000510, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_TargetData_1) == 0x0005C8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_ApplicationTag_1) == 0x0005F0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2) == 0x0005F8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_9) == 0x0006B0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_WaitDelay_ReturnValue) == 0x0006C0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_8) == 0x0006C8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsUsingTouch_ReturnValue) == 0x0006C9, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_10) == 0x0006CC, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x0006D8, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetValueAsBool_ReturnValue) == 0x0006D9, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_Event_bWasCancelled) == 0x0006DA, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_TargetData_2) == 0x0006E0, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CustomEvent_ApplicationTag_2) == 0x000708, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse) == 0x000710, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetProjectileTrajectoryData_TrajectoryData) == 0x000718, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetProjectileTrajectoryData_TrajectoryData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse) == 0x000738, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_SpawnThrownProjectile_SpawnedProjectile) == 0x000740, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_SpawnThrownProjectile_SpawnedProjectile' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_Not_PreBool_ReturnValue) == 0x000748, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_IsValid_ReturnValue_9) == 0x000749, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, K2Node_CreateDelegate_OutputDelegate_11) == 0x00074C, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast) == 0x000758, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetProjectileTrajectoryData_DefaultGravityScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast) == 0x00075C, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_GetProjectileTrajectoryData_DefaultSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent, CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast) == 0x000760, "Member 'GA_Athena_Consumable_Throw_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent::CallFunc_SpawnThrownProjectile_ProjectileInitialSpeed_ImplicitCast' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints final
{
public:
	TArray<struct FVector>                        OutSplinePoints;
	TArray<struct FVector>                        OutSplineTangents;
	struct FHitResult                             OutHitResult;
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	struct FVector                                CallFunc_GetSpawnLocationAndRotation_Location;
	struct FRotator                               CallFunc_GetSpawnLocationAndRotation_Rotation;
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FHitResult                             CallFunc_CalculateProjectileTrajectory_OutHitResult;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectory_OutSplinePoints;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectory_OutSplineTangents;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints) == 0x000270, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, OutSplinePoints) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, OutSplineTangents) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, OutHitResult) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_GetOwningPlayer_Player_Pawn) == 0x000100, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_GetSpawnLocationAndRotation_Location) == 0x000108, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_GetSpawnLocationAndRotation_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_GetSpawnLocationAndRotation_Rotation) == 0x000120, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_GetSpawnLocationAndRotation_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000138, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000150, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_CalculateProjectileTrajectory_OutHitResult) == 0x000168, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_CalculateProjectileTrajectory_OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_CalculateProjectileTrajectory_OutSplinePoints) == 0x000248, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_CalculateProjectileTrajectory_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_CalculateProjectileTrajectory_OutSplineTangents) == 0x000258, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_CalculateProjectileTrajectory_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x000268, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryPoints::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason final
{
public:
	struct FGameplayTagContainer                  FailedReason;
	struct FGameplayTagContainer                  OverridenFailedReason;
	struct FGameplayTagContainer                  CallFunc_K2_OverrideFailedReason_OverridenFailedReason;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_71[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason) == 0x000090, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, FailedReason) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::FailedReason' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, OverridenFailedReason) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::OverridenFailedReason' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, CallFunc_K2_OverrideFailedReason_OverridenFailedReason) == 0x000040, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::CallFunc_K2_OverrideFailedReason_OverridenFailedReason' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000060, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, K2Node_DynamicCast_AsFort_Pawn) == 0x000068, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000078, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000088, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_OverrideFailedReason::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned final
{
public:
	class AFortProjectileBase*                    SpawnedProjectile_0;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned) == 0x000008, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned, SpawnedProjectile_0) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_OnProjectileSpawned::SpawnedProjectile_0' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0 final
{
public:
	float                                         TimeHeld;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0) == 0x000004, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0) == 0x000004, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0, TimeHeld) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0::TimeHeld' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory final
{
public:
	TArray<struct FVector>                        SplinePoints;
	TArray<struct FVector>                        SplineTangents;
	struct FHitResult                             TrajectoryHitResult;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory) == 0x000100, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory, SplinePoints) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory::SplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory, SplineTangents) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory::SplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory, TrajectoryHitResult) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_OnUpdateTrajectory::TrajectoryHitResult' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_PostThrowCleanup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup final
{
public:
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup) == 0x000060, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000050, "Member 'GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'GA_Athena_Consumable_Throw_Parent_C_PrethrowSetup::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC final
{
public:
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_RemoveCookGC::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile final
{
public:
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	uint8                                         Pad_8[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_71[0x7];
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class AFortProjectileTrajectory*              CallFunc_FinishSpawningActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_89[0x7];
	class ABP_ProjectileTrajectory_C*             K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile) == 0x000010, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile) == 0x0000A0, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, CallFunc_GetOwningPlayer_Player_Pawn) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, CallFunc_IsValidClass_ReturnValue) == 0x000070, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000078, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, CallFunc_FinishSpawningActor_ReturnValue) == 0x000080, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, K2Node_DynamicCast_AsBP_Projectile_Trajectory) == 0x000090, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::K2Node_DynamicCast_AsBP_Projectile_Trajectory' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'GA_Athena_Consumable_Throw_Parent_C_SetupDummyProjectile::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile final
{
public:
	class UClass*                                 ProjectileClass_0;
	struct FVector                                ProjectileSpawnLocation;
	struct FRotator                               ProjectileSpawnDirection;
	struct FFortGameplayEffectContainerSpec       HitEffectContainerSpec;
	struct FFortGameplayEffectContainerSpec       ExplosionEffectContainerSpec;
	double                                        ProjectileInitialSpeed;
	double                                        ProjectileGravityScale_0;
	class AFortProjectileBase*                    SpawnedProjectile_0;
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	class AFortProjectileBase*                    CallFunc_SpawnProjectile_ReturnValue;
	float                                         CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast;
	float                                         CallFunc_SpawnProjectile_GravityScale_ImplicitCast;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile) == 0x0001D8, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, ProjectileClass_0) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::ProjectileClass_0' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, ProjectileSpawnLocation) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::ProjectileSpawnLocation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, ProjectileSpawnDirection) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::ProjectileSpawnDirection' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, HitEffectContainerSpec) == 0x000038, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::HitEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, ExplosionEffectContainerSpec) == 0x0000F0, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::ExplosionEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, ProjectileInitialSpeed) == 0x0001A8, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::ProjectileInitialSpeed' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, ProjectileGravityScale_0) == 0x0001B0, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::ProjectileGravityScale_0' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, SpawnedProjectile_0) == 0x0001B8, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::SpawnedProjectile_0' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, CallFunc_GetOwningPlayer_Player_Pawn) == 0x0001C0, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, CallFunc_SpawnProjectile_ReturnValue) == 0x0001C8, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast) == 0x0001D0, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile, CallFunc_SpawnProjectile_GravityScale_ImplicitCast) == 0x0001D4, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnThrownProjectile::CallFunc_SpawnProjectile_GravityScale_ImplicitCast' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator final
{
public:
	bool                                          bSpawnOnEquip;
	uint8                                         Pad_1[0x7];
	class AFortProjectileTrajectory*              ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_12[0x6];
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator) == 0x000028, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, bSpawnOnEquip) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::bSpawnOnEquip' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, ReturnValue) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, CallFunc_GetOwningPlayer_Player_Pawn) == 0x000018, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, CallFunc_IsLocallyControlled_ReturnValue) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, CallFunc_BooleanOR_ReturnValue) == 0x000021, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'GA_Athena_Consumable_Throw_Parent_C_SpawnTrajectoryIndicator::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27) == 0x000030, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27, TargetData) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27, ApplicationTag) == 0x000028, "Member 'GA_Athena_Consumable_Throw_Parent_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27::ApplicationTag' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline final
{
public:
	TArray<struct FVector>                        CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints;
	TArray<struct FVector>                        CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents;
	struct FHitResult                             CallFunc_GetProjectileTrajectoryPoints_OutHitResult;
	bool                                          CallFunc_IsTrajectoryLocationValid_bIsLocationValid;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline) == 0x000108, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline, CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline::CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline, CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline::CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline, CallFunc_GetProjectileTrajectoryPoints_OutHitResult) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline::CallFunc_GetProjectileTrajectoryPoints_OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline, CallFunc_IsTrajectoryLocationValid_bIsLocationValid) == 0x000100, "Member 'GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline::CallFunc_IsTrajectoryLocationValid_bIsLocationValid' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline, CallFunc_IsValid_ReturnValue) == 0x000101, "Member 'GA_Athena_Consumable_Throw_Parent_C_UpdateTrajectorySpline::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory final
{
public:
	class AFortPawn*                              Instigator;
	struct FVector                                InitialLocation;
	struct FVector                                InitialVelocity;
	struct FHitResult                             OutHitResult;
	TArray<struct FVector>                        OutSplinePoints;
	TArray<struct FVector>                        OutSplineTangents;
	TArray<class AActor*>                         ProjectileIgnoredActors;
	TArray<class AActor*>                         CallFunc_GetProjectileIgnoredActors_ReturnValue;
	double                                        CallFunc_FMax_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_161[0x7];
	double                                        CallFunc_FMax_ReturnValue_1;
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_175[0x3];
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	uint8                                         Pad_17E[0x2];
	int32                                         K2Node_Select_Default;
	uint8                                         Pad_184[0x4];
	struct FHitResult                             CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents;
	int32                                         K2Node_Select_Default_1;
	uint8                                         Pad_28C[0x4];
	struct FHitResult                             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints;
	TArray<struct FVector>                        CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents;
	double                                        CallFunc_FMax_A_ImplicitCast;
	double                                        CallFunc_FMax_B_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast;
	uint8                                         Pad_3A4[0x4];
	double                                        CallFunc_FMax_A_ImplicitCast_1;
	double                                        CallFunc_FMax_B_ImplicitCast_1;
	float                                         CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast;
	float                                         CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory) == 0x0003C8, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, Instigator) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::Instigator' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, InitialLocation) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::InitialLocation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, InitialVelocity) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::InitialVelocity' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, OutHitResult) == 0x000038, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, OutSplinePoints) == 0x000118, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, OutSplineTangents) == 0x000128, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, ProjectileIgnoredActors) == 0x000138, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::ProjectileIgnoredActors' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_GetProjectileIgnoredActors_ReturnValue) == 0x000148, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_GetProjectileIgnoredActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_FMax_ReturnValue) == 0x000158, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_FMax_ReturnValue_1) == 0x000168, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, Temp_int_Variable) == 0x000170, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, Temp_bool_Variable) == 0x000174, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, Temp_int_Variable_1) == 0x000178, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, Temp_bool_Variable_1) == 0x00017C, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_NotEqual_NameName_ReturnValue) == 0x00017D, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, K2Node_Select_Default) == 0x000180, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult) == 0x000188, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints) == 0x000268, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents) == 0x000278, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, K2Node_Select_Default_1) == 0x000288, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult) == 0x000290, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints) == 0x000370, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents) == 0x000380, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_FMax_A_ImplicitCast) == 0x000390, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_FMax_B_ImplicitCast) == 0x000398, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_FMax_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast) == 0x0003A0, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHit_TraceExtent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_FMax_A_ImplicitCast_1) == 0x0003A8, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_FMax_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_FMax_B_ImplicitCast_1) == 0x0003B0, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_FMax_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast) == 0x0003B8, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TraceExtent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast) == 0x0003BC, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_TimeStep_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory, CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast) == 0x0003C0, "Member 'GA_Athena_Consumable_Throw_Parent_C_CalculateProjectileTrajectory::CallFunc_CalculateProjectileTrajectorySplineWithHit_TimeStep_ImplicitCast' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer final
{
public:
	class AFortPlayerPawn*                        Player_Pawn;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_9[0x7];
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer) == 0x000068, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer, Player_Pawn) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer::Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer, CallFunc_GetActorInfo_ReturnValue) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000058, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetOwningPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse final
{
public:
	double                                        AdditionalThrowAngleToUse;
	class AFortWeapon*                            AbilitySourceWeapon;
	float                                         CallFunc_GetProjectilePitchOffset_ReturnValue;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_16[0x2];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;
	double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_SelectFloat_A_ImplicitCast;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse) == 0x000038, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, AdditionalThrowAngleToUse) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::AdditionalThrowAngleToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, AbilitySourceWeapon) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::AbilitySourceWeapon' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_GetProjectilePitchOffset_ReturnValue) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_GetProjectilePitchOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000014, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_GetCurrentSourceWeapon_ReturnValue) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_GetCurrentSourceWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_NotEqual_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_NotEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse, CallFunc_SelectFloat_A_ImplicitCast) == 0x000030, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileAdditionalThrowAngleToUse::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse final
{
public:
	double                                        GravityScaleToUse;
	class FString                                 GetProjectileInitialGravityScaleContext;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_1D[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue;
	bool                                          CallFunc_IsCurveTableRowValid_ReturnValue;
	uint8                                         Pad_26[0x2];
	double                                        K2Node_FunctionResult_GravityScaleToUse_ImplicitCast;
	double                                        K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse) == 0x000038, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, GravityScaleToUse) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::GravityScaleToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, GetProjectileInitialGravityScaleContext) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::GetProjectileInitialGravityScaleContext' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, CallFunc_GetValueAtLevel_ReturnValue) == 0x000018, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, CallFunc_IsValidClass_ReturnValue) == 0x00001C, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, CallFunc_EvaluateCurveTableRow_ReturnValue) == 0x000024, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::CallFunc_EvaluateCurveTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, CallFunc_IsCurveTableRowValid_ReturnValue) == 0x000025, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::CallFunc_IsCurveTableRowValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, K2Node_FunctionResult_GravityScaleToUse_ImplicitCast) == 0x000028, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::K2Node_FunctionResult_GravityScaleToUse_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse, K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1) == 0x000030, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialGravityScaleToUse::K2Node_FunctionResult_GravityScaleToUse_ImplicitCast_1' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse final
{
public:
	double                                        ProjectileSpeedToUse;
	class FString                                 GetProjectileInitialSpeedToUseContext;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_1D[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_EvaluateCurveTableRow_ReturnValue;
	bool                                          CallFunc_IsCurveTableRowValid_ReturnValue;
	uint8                                         Pad_26[0x2];
	double                                        K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast;
	double                                        K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse) == 0x000038, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, ProjectileSpeedToUse) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::ProjectileSpeedToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, GetProjectileInitialSpeedToUseContext) == 0x000008, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::GetProjectileInitialSpeedToUseContext' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, CallFunc_GetValueAtLevel_ReturnValue) == 0x000018, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, CallFunc_IsValidClass_ReturnValue) == 0x00001C, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, CallFunc_EvaluateCurveTableRow_ReturnValue) == 0x000024, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::CallFunc_EvaluateCurveTableRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, CallFunc_IsCurveTableRowValid_ReturnValue) == 0x000025, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::CallFunc_IsCurveTableRowValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast) == 0x000028, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse, K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1) == 0x000030, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileInitialSpeedToUse::K2Node_FunctionResult_ProjectileSpeedToUse_ImplicitCast_1' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor final
{
public:
	TSubclassOf<class AFortProjectileTrajectory>  ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor) == 0x000008, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor, ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetProjectileTrajectoryActor::ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation final
{
public:
	struct FVector                                Location;
	struct FRotator                               Rotation;
	double                                        CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_3A[0x6];
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	struct FRotator                               CallFunc_GetDefaultTargetingRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_6C[0x4];
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	uint8                                         Pad_81[0x3];
	float                                         CallFunc_NormalizeAxis_ReturnValue;
	double                                        CallFunc_FMin_ReturnValue;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll_1;
	float                                         CallFunc_BreakRotator_Pitch_1;
	float                                         CallFunc_BreakRotator_Yaw_1;
	uint8                                         Pad_CC[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                K2Node_Select_Default;
	struct FVector                                K2Node_Select_Default_1;
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_NormalizeAxis_Angle_ImplicitCast;
	uint8                                         Pad_154[0x4];
	double                                        CallFunc_FMin_A_ImplicitCast;
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation) == 0x000168, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, Location) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, Rotation) == 0x000018, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse) == 0x000030, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, Temp_bool_Variable) == 0x000038, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, Temp_bool_Variable_1) == 0x000039, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_GetOwningPlayer_Player_Pawn) == 0x000040, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_GetDefaultTargetingRotation_ReturnValue) == 0x000048, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_GetDefaultTargetingRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_BreakRotator_Roll) == 0x000060, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_BreakRotator_Pitch) == 0x000064, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_BreakRotator_Yaw) == 0x000068, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_GetOwningPlayer_Player_Pawn_1) == 0x000070, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_GetOwningPlayer_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000078, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000080, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_NormalizeAxis_ReturnValue) == 0x000084, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_FMin_ReturnValue) == 0x000088, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000090, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_MakeRotator_ReturnValue) == 0x0000A8, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_BreakRotator_Roll_1) == 0x0000C0, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_BreakRotator_Pitch_1) == 0x0000C4, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_BreakRotator_Yaw_1) == 0x0000C8, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000D0, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, K2Node_Select_Default) == 0x0000E8, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, K2Node_Select_Default_1) == 0x000100, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_RotateAngleAxis_ReturnValue) == 0x000118, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_Add_VectorVector_ReturnValue) == 0x000130, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000148, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_NormalizeAxis_Angle_ImplicitCast) == 0x000150, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_NormalizeAxis_Angle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_FMin_A_ImplicitCast) == 0x000158, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_FMin_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000160, "Member 'GA_Athena_Consumable_Throw_Parent_C_GetSpawnLocationAndRotation::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid final
{
public:
	TArray<struct FVector>                        SplinePoints;
	TArray<struct FVector>                        SplineTangents;
	struct FHitResult                             TrajectoryHitResult;
	bool                                          bIsLocationValid;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_103[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_10C[0x4];
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
	uint8                                         Pad_19C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetOwningPlayer_Player_Pawn;
	bool                                          CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid) == 0x0001F8, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, SplinePoints) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::SplinePoints' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, SplineTangents) == 0x000010, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::SplineTangents' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, TrajectoryHitResult) == 0x000020, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::TrajectoryHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, bIsLocationValid) == 0x000100, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::bIsLocationValid' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_bBlockingHit) == 0x000101, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_bInitialOverlap) == 0x000102, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_Time) == 0x000104, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_Distance) == 0x000108, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_Location) == 0x000110, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_ImpactPoint) == 0x000128, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_Normal) == 0x000140, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_ImpactNormal) == 0x000158, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_PhysMat) == 0x000170, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_HitActor) == 0x000178, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_HitComponent) == 0x000180, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_HitBoneName) == 0x000188, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_BoneName) == 0x00018C, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_HitItem) == 0x000190, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_ElementIndex) == 0x000194, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_FaceIndex) == 0x000198, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_TraceStart) == 0x0001A0, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_BreakHitResult_TraceEnd) == 0x0001B8, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_Add_VectorVector_ReturnValue) == 0x0001D0, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_GetOwningPlayer_Player_Pawn) == 0x0001E8, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_GetOwningPlayer_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping) == 0x0001F0, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_IsOverlappingDeployableBlockVolume_bOverlapping' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_Not_PreBool_ReturnValue) == 0x0001F1, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid, CallFunc_IsValid_ReturnValue) == 0x0001F2, "Member 'GA_Athena_Consumable_Throw_Parent_C_IsTrajectoryLocationValid::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayAbilitySpecHandle             Handle;
	uint8                                         Pad_4C[0x4];
	struct FGameplayTagContainer                  RelevantTags;
	bool                                          ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_72[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility) == 0x000090, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, Temp_bool_Variable) == 0x000071, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000078, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, CallFunc_Not_PreBool_ReturnValue) == 0x000089, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x00008A, "Member 'GA_Athena_Consumable_Throw_Parent_C_K2_CanActivateAbility::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");

struct GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse) == 0x000001, "Wrong alignment on GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse");
static_assert(sizeof(GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse) == 0x000001, "Wrong size on GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse");
static_assert(offsetof(GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse, ReturnValue) == 0x000000, "Member 'GA_Athena_Consumable_Throw_Parent_C_ShouldOnlyShowTrajectoryOnUse::ReturnValue' has a wrong offset!");

}
