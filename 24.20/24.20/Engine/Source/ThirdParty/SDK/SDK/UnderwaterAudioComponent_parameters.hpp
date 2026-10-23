#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HasMultipleLocalPlayers_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_6[0x2];
	TDelegate<void(bool bIsUnderWater, float DepthUnderwater)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_CustomEvent_bIsUnderWater;
	uint8                                         Pad_15[0x3];
	float                                         K2Node_CustomEvent_DepthUnderwater;
	uint8                                         Pad_1C[0x4];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	EAudioComponentPlayState                      CallFunc_GetPlayState_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_33[0x5];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_41[0x3];
	float                                         CallFunc_FadeIn_StartTime_ImplicitCast;
};
static_assert(alignof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent) == 0x000008, "Wrong alignment on UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent");
static_assert(sizeof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent) == 0x000048, "Wrong size on UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, EntryPoint) == 0x000000, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_HasMultipleLocalPlayers_ReturnValue) == 0x000004, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_HasMultipleLocalPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, K2Node_CustomEvent_bIsUnderWater) == 0x000014, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::K2Node_CustomEvent_bIsUnderWater' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, K2Node_CustomEvent_DepthUnderwater) == 0x000018, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::K2Node_CustomEvent_DepthUnderwater' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_SpawnSound2D_ReturnValue) == 0x000020, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000028, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_GetPlayState_ReturnValue) == 0x000031, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_GetPlayState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_RandomFloatInRange_ReturnValue) == 0x000038, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, K2Node_Event_EndPlayReason) == 0x000040, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent, CallFunc_FadeIn_StartTime_ImplicitCast) == 0x000044, "Member 'UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent::CallFunc_FadeIn_StartTime_ImplicitCast' has a wrong offset!");

struct UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed final
{
public:
	bool                                          bIsUnderWater;
	uint8                                         Pad_1[0x3];
	float                                         DepthUnderwater;
};
static_assert(alignof(UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed) == 0x000004, "Wrong alignment on UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed");
static_assert(sizeof(UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed) == 0x000008, "Wrong size on UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed");
static_assert(offsetof(UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed, bIsUnderWater) == 0x000000, "Member 'UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed::bIsUnderWater' has a wrong offset!");
static_assert(offsetof(UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed, DepthUnderwater) == 0x000004, "Member 'UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed::DepthUnderwater' has a wrong offset!");

struct UnderwaterAudioComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(UnderwaterAudioComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on UnderwaterAudioComponent_C_ReceiveEndPlay");
static_assert(sizeof(UnderwaterAudioComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on UnderwaterAudioComponent_C_ReceiveEndPlay");
static_assert(offsetof(UnderwaterAudioComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'UnderwaterAudioComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
