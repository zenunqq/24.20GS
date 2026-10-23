#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FHitResult                             K2Node_CustomEvent_Hit;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite) == 0x0000F8, "Wrong size on GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite, EntryPoint) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite, K2Node_CustomEvent_Hit) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed) == 0x0000E0, "Wrong size on GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed, Hit) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_On_Pawn_Landed::Hit' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_Infinite_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnActive_ReturnValue;
	uint8                                         Pad_DA[0x6];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_E9[0x7];
	class UFXSystemComponent*                     CallFunc_SpawnFXSystemAttached_ReturnValue;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_Infinite_C_OnActive");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive) == 0x0000F8, "Wrong size on GCL_BoostJumpPack_Hovering_Infinite_C_OnActive");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, MyTarget) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, Parameters) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D9, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x0000E0, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnActive, CallFunc_SpawnFXSystemAttached_ReturnValue) == 0x0000F0, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnActive::CallFunc_SpawnFXSystemAttached_ReturnValue' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x3];
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_OnRemove_ReturnValue;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove) == 0x0000F0, "Wrong size on GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove, MyTarget) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove, Parameters) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove, K2Node_CreateDelegate_OutputDelegate) == 0x0000DC, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000E8, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");

struct GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled final
{
public:
	bool                                          Enabled;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2[0x6];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_11[0x7];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_3D[0x3];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	class USoundBase*                             K2Node_Select_Default;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_2;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_3;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast;
	float                                         CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1;
};
static_assert(alignof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled");
static_assert(sizeof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled) == 0x000080, "Wrong size on GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, Enabled) == 0x000000, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000018, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000020, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x000028, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, Temp_bool_Variable) == 0x00003C, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000040, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, K2Node_Select_Default) == 0x000048, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue) == 0x000050, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000058, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000060, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_2) == 0x000068, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_ReturnValue_3) == 0x000070, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast) == 0x000078, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled, CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1) == 0x00007C, "Member 'GCL_BoostJumpPack_Hovering_Infinite_C_SetJetpackAudioEnabled::CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1' has a wrong offset!");

}
