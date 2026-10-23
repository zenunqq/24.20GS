#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03 final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	TDelegate<void(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_10C[0x4];
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;
	class FName                                   K2Node_CustomEvent_EventName;
	float                                         K2Node_CustomEvent_EmitterTime;
	struct FVector                                K2Node_CustomEvent_Location;
	struct FVector                                K2Node_CustomEvent_Velocity;
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	uint8                                         Pad_159[0x7];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03");
static_assert(sizeof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03) == 0x000170, "Wrong size on GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, EntryPoint) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_Event_MyTarget) == 0x000008, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_Event_Parameters) == 0x000010, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_Event_ParticleComponents) == 0x0000E0, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_Event_AudioComponents) == 0x0000F0, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_CreateDelegate_OutputDelegate) == 0x000100, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, CallFunc_Array_Get_Item) == 0x000110, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_CustomEvent_EventName) == 0x000118, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_CustomEvent_EventName' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_CustomEvent_EmitterTime) == 0x00011C, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_CustomEvent_EmitterTime' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_CustomEvent_Location) == 0x000120, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, K2Node_CustomEvent_Velocity) == 0x000138, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::K2Node_CustomEvent_Velocity' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000150, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000158, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, CallFunc_RandomFloatInRange_ReturnValue) == 0x000160, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000168, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03, CallFunc_BooleanAND_ReturnValue) == 0x000169, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn final
{
public:
	class FName                                   EventName;
	float                                         EmitterTime;
	struct FVector                                Location;
	struct FVector                                Velocity;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn");
static_assert(sizeof(GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn) == 0x000038, "Wrong size on GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn, EventName) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn::EventName' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn, EmitterTime) == 0x000004, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn::EmitterTime' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn, Location) == 0x000008, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn::Location' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn, Velocity) == 0x000020, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_On_Distant_Lightning_Spawn::Velocity' has a wrong offset!");

struct GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart) == 0x000008, "Wrong alignment on GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart");
static_assert(sizeof(GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart) == 0x0000F8, "Wrong size on GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GC_Athena_OutsideSafeZone_Stage03_C_OnLoopingStart::AudioComponents' has a wrong offset!");

}
